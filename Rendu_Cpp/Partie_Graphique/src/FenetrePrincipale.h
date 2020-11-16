#ifndef DEF_FENETREPRINCIPALE
#define DEF_FENETREPRINCIPALE // definition si non defini
 
#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QIcon>
#include <QGraphicsScene>
#include <QGraphicsView>            // Inclusion de l'ensemble des bibliotheques et classe necessaires
#include <QImage>
#include <QPixmap>
#include <QLabel>
#include <QGraphicsPixmapItem>
#include "Personnage.h"
#include "Case.h"
 
class FenetrePrincipale : public QWidget // On hérite de QWidget (IMPORTANT)
{

    Q_OBJECT // Declaration de la Macro Q_Object
    
    private slots:         // definition des slots permettant le declenchement de fonctions implementées
        void Push_right(); // Slot permettant d'utiliser la methode de deplacement a droite de personnage
        void Push_left(); // Idem
        void Push_up(); // Idem 
        void Push_down(); // Idem

    public:
    FenetrePrincipale(Personnage Heros); // constructeur de la fenetre

 
    private:



    
    QVBoxLayout *m_layout_global; // Mise en place du layout principal allant recevoir les widgets
    QHBoxLayout *m_layout_bas; // Mise en place des layouts secondaires pour la disposition des widgets
    QVBoxLayout *m_layout_croix_up_down;
    QHBoxLayout *m_layout_croix_left_right;

    QGraphicsScene *scene; // Mise en place de la fenetre ou se passe l'action
    QGraphicsView *fenetre; 
    QPixmap *pixmapSrc;

    QGraphicsPixmapItem *pixmap;



    QPushButton *m_bouton_gauche; // Mise en place des bouttons necessaires au deplacement du personnage
    QPushButton *m_bouton_droite;// et a la fermeture du programme 
    QPushButton *m_bouton_haut; 
    QPushButton *m_bouton_bas; 
    QPushButton *m_bouton_quitter; 

};
 
#endif