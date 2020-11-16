#include "FenetrePrincipale.h"
#include "Personnage.h"
#include "Case.h"

#include <string>
#include <QObject>


Personnage Heros(1); // Declaration du heros (scope a redefinir)

 
FenetrePrincipale::FenetrePrincipale(Personnage Heros) : QWidget() // parametrage de la fenetre
{
    

    setFixedSize(874, 968); // fenetre de taille fixe
   
    m_layout_global = new QVBoxLayout; // Mise en place des differents layouts
    m_layout_bas = new QHBoxLayout;
    m_layout_croix_up_down = new QVBoxLayout;
    m_layout_croix_left_right = new QHBoxLayout;


    this->setLayout(m_layout_global); // parametrage du layout principal de la fenetre


    m_bouton_gauche = new QPushButton("Gauche", this); // Mise en place de l'ensemble des boutons
    m_bouton_droite = new QPushButton("Droite", this);
    m_bouton_haut = new QPushButton("Haut", this);
    m_bouton_bas = new QPushButton("Bas", this);
    m_bouton_quitter = new QPushButton("Quitter", this);
    QObject::connect(m_bouton_quitter, SIGNAL(clicked()), qApp, SLOT(quit()));    // connexions des boutons a leur fonction respectives
    QObject::connect(m_bouton_droite, SIGNAL(clicked()), this, SLOT(Push_right()));
    QObject::connect(m_bouton_gauche, SIGNAL(clicked()), this, SLOT(Push_left()));
    QObject::connect(m_bouton_haut, SIGNAL(clicked()), this, SLOT(Push_up()));
    QObject::connect(m_bouton_bas, SIGNAL(clicked()), this, SLOT(Push_down()));



    scene = new QGraphicsScene;         // Mise en place de la partie affichage pour le joueur
    fenetre = new QGraphicsView(scene);
    pixmapSrc = new QPixmap;



    pixmapSrc->load(QString(Heros.get_case().get_sprite().c_str())); // On recupere le sprite de la case sur laquelle se trouve le personnage


    pixmap = new QGraphicsPixmapItem; // On parametre l'affichage
    pixmap->setPixmap(*pixmapSrc);


    scene->addItem(*&pixmap);

    m_layout_croix_left_right->addWidget(m_bouton_gauche); // AJout des differents widgets dans leurs layouts respectifs
    m_layout_croix_left_right->addWidget(m_bouton_droite);

    m_layout_croix_up_down->addWidget(m_bouton_haut);
    m_layout_croix_up_down->addLayout(m_layout_croix_left_right);
    m_layout_croix_up_down->addWidget(m_bouton_bas);
    
    m_layout_bas->addLayout(m_layout_croix_up_down);
    m_layout_bas->addWidget(m_bouton_quitter);

    m_layout_global->addWidget(fenetre);
    m_layout_global->addLayout(m_layout_bas);
    this->pixmapSrc->load(QString(Heros.get_case().get_sprite().c_str())); // Refresh de la scene
    this->repaint();
 

}

void FenetrePrincipale::Push_right() // definition du slot pour le deplacment a droite du personnage
{
    std::cout << Heros.get_X_pos()<< Heros.get_Y_pos() << std::endl; // verification de la position du personnage a la console
    std::cout << Heros.get_case().get_sprite() << std::endl;

    //std::string previous_position = Heros.get_sprite();

    Heros.go_right(); // Appel a la fonction go_right de la classe Personnage

    if (Heros.get_case().get_obstacle() == true) // annulation du deplacement si le personnage se retrouve sur une case obstacle
                                                    // par un deplacement opposé
    {
        Heros.go_left(); // Appel de la fonction go_left de personnage pour annuler le deplacement

    }

   
 


    std::cout << Heros.get_X_pos()<< Heros.get_Y_pos() << std::endl; // affichage de la nouvelle position

    std::cout << Heros.get_case().get_sprite() << std::endl; // afichage du nouvea sprite
    this->pixmapSrc->load(QString(Heros.get_case().get_sprite().c_str())); // chargement de la nouvelle image dans la scene
    pixmap = new QGraphicsPixmapItem; // On remet en place la scene
    pixmap->setPixmap(*pixmapSrc);


    scene->addItem(*&pixmap);
    this->repaint(); // On rafraichit la scene 
}

void FenetrePrincipale::Push_left()
{
    Heros.go_left();

    if (Heros.get_case().get_obstacle() == true) /////////////// voir pour copier position précedente dans une variable pour remetre le sprite
    {
        Heros.go_right();

    }
    std::cout << Heros.get_X_pos()<< Heros.get_Y_pos() << std::endl;

    std::cout << Heros.get_case().get_sprite() << std::endl;
    this->pixmapSrc->load(QString(Heros.get_case().get_sprite().c_str()));
    pixmap = new QGraphicsPixmapItem;
    pixmap->setPixmap(*pixmapSrc);


    scene->addItem(*&pixmap);
    this->repaint();
}

void FenetrePrincipale::Push_up()
{
    Heros.go_up();
    if (Heros.get_case().get_obstacle() == true) /////////////// voir pour copier position précedente dans une variable pour remetre le sprite
    {
        Heros.go_down();

    }

    std::cout << Heros.get_X_pos()<< Heros.get_Y_pos() << std::endl;

    std::cout << Heros.get_case().get_sprite() << std::endl;
    this->pixmapSrc->load(QString(Heros.get_case().get_sprite().c_str()));
    pixmap = new QGraphicsPixmapItem;
    pixmap->setPixmap(*pixmapSrc);


    scene->addItem(*&pixmap);
    this->repaint();
}

void FenetrePrincipale::Push_down()
{
    Heros.go_down();
    if (Heros.get_case().get_obstacle() == true) /////////////// voir pour copier position précedente dans une variable pour remetre le sprite
    {
        Heros.go_up();

    }
    std::cout << Heros.get_X_pos()<< Heros.get_Y_pos() << std::endl;

    std::cout << Heros.get_case().get_sprite() << std::endl;
    this->pixmapSrc->load(QString(Heros.get_case().get_sprite().c_str()));
    pixmap = new QGraphicsPixmapItem;
    pixmap->setPixmap(*pixmapSrc);


    scene->addItem(*&pixmap);
    this->repaint();
}


