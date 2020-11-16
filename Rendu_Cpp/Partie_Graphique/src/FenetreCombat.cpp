#include "FenetreCombat.h"
#include "Personnage.h" // Inclusion des prototypes necessaires

 
FenetreCombat::FenetreCombat() : QWidget() // on declare la fenetre (constructeur)
{
    setFixedSize(670, 430); // fenetre de taille fixe
 

   
    m_layout_global = new QVBoxLayout; // definition des layouts pour l'agencement des widgets
    m_layout_haut = new QHBoxLayout;
    m_layout_bas = new QHBoxLayout;
    m_layout_gauche = new QVBoxLayout;
    m_layout_droite= new QVBoxLayout;

    m_label_heros = new QLabel; // definition des labels pour identifier les zones relatives au heros / adversaire
    m_label_enemi = new QLabel;

    m_label_heros->setText("Vie heros"); // Ajout du texte dans les labels
    m_label_enemi->setText("Vie Enemi");




    this->setLayout(m_layout_global); // On instaure le layout principal de la fenetre


    m_bouton_attaque = new QPushButton("Attaque_1", this); // mise en place des boutons d'action
    m_bouton_soin = new QPushButton("Soin", this);
    m_bouton_quitter = new QPushButton("Quitter",this);
    QObject::connect(m_bouton_quitter, SIGNAL(clicked()), qApp, SLOT(quit())); // Connection du bouton quitter a la fonction d'arret du programme



    m_LCD_heros = new QLCDNumber(this); // Mise en place des QLCD pour affichage de la vie 
    m_LCD_enemi = new QLCDNumber(this);




    scene = new QGraphicsScene;             // Mise en place de l'affichage de l'image du comabt (au centre)
    fenetre = new QGraphicsView(scene);
    pixmapSrc = new QPixmap;
    pixmapSrc->load("background.jpg");


    pixmap = new QGraphicsPixmapItem;
    pixmap->setPixmap(*pixmapSrc);


    scene->addItem(*&pixmap);

    m_layout_gauche->addWidget(m_label_heros); // Mise en place des widgets dans la fenetre
    m_layout_gauche->addWidget(m_LCD_heros);

    m_layout_droite->addWidget(m_label_enemi);
    m_layout_droite->addWidget(m_LCD_enemi); 


    m_layout_haut->addLayout(m_layout_gauche);
    m_layout_haut->addWidget(fenetre);
    m_layout_haut->addLayout(m_layout_droite);

    m_layout_bas->addWidget(m_bouton_attaque);
    m_layout_bas->addWidget(m_bouton_soin);
    m_layout_bas->addWidget(m_bouton_quitter);


    m_layout_global->addLayout(m_layout_haut);
    m_layout_global->addLayout(m_layout_bas);


}