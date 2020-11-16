#include <QApplication>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QIcon>
#include "FenetrePrincipale.h"
#include "FenetreCombat.h"
#include "FenetreChoix.h"
#include "Win.h"
#include "Loose.h"
#include <QObject>
 
 
int main(int argc, char *argv[])
{
	Personnage Heros = Personnage(1);
    QApplication app(argc, argv);
 
    //FenetrePrincipale fenetre(Heros);
    //Win fenetre;
    // Loose fenetre;
    							// decommenter un ligne au choix pour afficher la fenetre desiree
    //FenetreCombat fenetre;
    FenetreChoix fenetre;		

    fenetre.show();
 
    return app.exec();
}