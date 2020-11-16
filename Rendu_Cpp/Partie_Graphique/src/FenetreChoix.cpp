#include "FenetreChoix.h"
 
FenetreChoix::FenetreChoix() : QWidget() // declaration de la fenetre
{
    setFixedSize(800, 400);
 
    // Construction du bouton
   
    m_layout = new QHBoxLayout;  // layouts pour disposition des Widgets
    m_layout_2 = new QVBoxLayout;


    this->setLayout(m_layout_2); // on met en place le premier layout

    m_label = new QLabel(this);                     // Mise en place du label contenant le texte
    m_bouton_1 = new QPushButton("Guerrier", this); // Mise en place des differents boutons
    m_bouton_2 = new QPushButton("Magicien", this);
    m_bouton_3 = new QPushButton("Voleur", this);

    m_label->setText("Choisissez votre personnage"); // Remplissage du label et centrage du texte
    m_label->setAlignment(Qt::AlignCenter);
 
    m_bouton_1->setFont(QFont("Comic Sans MS", 14)); // Mise en forme des boutons
    m_bouton_1->setCursor(Qt::PointingHandCursor);
    m_bouton_1->setIcon(QIcon("Guerrier.png"));

    m_bouton_2->setFont(QFont("Comic Sans MS", 14));
    m_bouton_2->setCursor(Qt::PointingHandCursor);
    m_bouton_2->setIcon(QIcon("Magicien.png"));

    m_bouton_3->setFont(QFont("Comic Sans MS", 14));
    m_bouton_3->setCursor(Qt::PointingHandCursor);
    m_bouton_3->setIcon(QIcon("Voleur.png"));
    //m_bouton_1->move(60, 50);

    m_layout_2->addWidget(m_label); // Ajout des differents widgets dans les differents layouts
    m_layout->addWidget(m_bouton_1);
    m_layout->addWidget(m_bouton_2);
    m_layout->addWidget(m_bouton_3);

    m_layout_2->addLayout(m_layout); // Ajout du layout secondaire dans le layout principal

}