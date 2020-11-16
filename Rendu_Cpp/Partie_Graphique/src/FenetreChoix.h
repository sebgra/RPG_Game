#ifndef DEF_FENETRECHOIX // Definition si non défini
#define DEF_FENETRECHOIX
 
#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QPushButton>			// Inclusion des modules de Qt necessaires
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QIcon>
 
class FenetreChoix : public QWidget // On hérite de QWidget (IMPORTANT) --> Definitiond e la classe
{
    public:
    FenetreChoix(); // Constructeur
 
    private:
    QLabel *m_label;					// Mise en place de l'ensemble des widgets necessaires
    QHBoxLayout *m_layout;
    QVBoxLayout *m_layout_2;
    QPushButton *m_bouton_1; 
    QPushButton *m_bouton_2;
    QPushButton *m_bouton_3; 
};
 
#endif