#ifndef DEF_FENETREWIN
#define DEF_FENETREWIN // Definition si non defini
 
#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QPushButton>	// Inclusion des bibliotheques de Qt necessaires
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QIcon>
 
class Win : public QWidget // On hérite de QWidget (IMPORTANT) + definition de la classe
{
    public:
    Win(); // constructeur de la fenetre
 
 
    private:

    QLabel *m_label; // Mise en place des differents widgets
    QVBoxLayout *m_layout;
	QPushButton *m_bouton; 
     
};
 
#endif