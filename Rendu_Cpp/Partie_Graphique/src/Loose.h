#ifndef DEF_FENETRELOOSE
#define DEF_FENETRELOOSE // Definition si non defini
 
#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QPushButton>		// Inclusion des bibliotheques de Qt necessaires
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QIcon>
 
class Loose : public QWidget // On hérite de QWidget (IMPORTANT) + definition de la classe
{
    public:
    Loose();  // constructeur de la fenetre
 
    private:

    QLabel *m_label; // Mise en place des differents widgets
    QVBoxLayout *m_layout; // Mise en place du layout allant acueillir les widgets
	QPushButton *m_bouton; 
     
};
 
#endif