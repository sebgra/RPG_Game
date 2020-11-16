#ifndef DEF_FENETRECOMBAT
#define DEF_FENETRECOMBAT // definiton si non defini 
 
#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QIcon>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QImage>           // Inclusiond es bibliotheques de Qt necessaires
#include <QPixmap>
#include <QLabel>
#include <QGraphicsPixmapItem>
#include <QLCDNumber>
 
class FenetreCombat : public QWidget // On hérite de QWidget (IMPORTANT)
{
    public:
    FenetreCombat(); // Constructeur
 
    private:

    QLabel *m_label_heros;
    QLabel *m_label_enemi; // Labels permettant de distinguer les infos du heos ou adversaire

    
    QVBoxLayout *m_layout_global; // Mise en place des layouts pour l'agencement des widgets
    QHBoxLayout *m_layout_haut;
    QHBoxLayout *m_layout_bas;
    QVBoxLayout *m_layout_gauche;
    QVBoxLayout *m_layout_droite;

    

    QGraphicsScene *scene; // Partie concernant l'affichage de l'image du combat
    QGraphicsView *fenetre; 
    QPixmap *pixmapSrc;

    QGraphicsPixmapItem *pixmap;


    QPushButton *m_bouton_attaque; // Bouttons allant etre connectes aux differentes actions possibles pour le combat
    QPushButton *m_bouton_soin; 
    QPushButton *m_bouton_quitter; 

    QLCDNumber *m_LCD_heros; // QLCD permettant l'affichage de la vie du heros / adversaire
    QLCDNumber *m_LCD_enemi;
   

};
 
#endif