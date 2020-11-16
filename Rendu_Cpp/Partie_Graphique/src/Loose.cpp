#include "Loose.h"
 
Loose::Loose() : QWidget()
{
    setFixedSize(800, 400); // Fenetre de taille fixe
 
    
   

    m_label = new QLabel(this); // label affichant le texte de Game Over
    m_bouton = new QPushButton("Quitter", this); // Mise en place du bouton quitter
    QObject::connect(m_bouton, SIGNAL(clicked()), qApp, SLOT(quit())); // connexion du bouton a la fonction fermant la fenetre
    m_layout = new QVBoxLayout; // Mise en palce du layout

    this->setLayout(m_layout); // On applique le layout a la fenetre actuelle


    m_label->setText("Vous avez perdu !"); // On insere le texte dans le label, puis on centre ce texte
    m_label->setAlignment(Qt::AlignCenter);
 
    m_bouton->setFont(QFont("Comic Sans MS", 14));
    m_bouton->setCursor(Qt::PointingHandCursor);
   

    
    m_layout->addWidget(m_label); // On ajoute l'ensemble des widgets au layout
    m_layout->addWidget(m_bouton);


}