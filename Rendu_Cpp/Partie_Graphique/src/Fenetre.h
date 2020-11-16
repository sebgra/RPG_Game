#ifndef DEF_MAFENETRE
#define DEF_MAFENETRE
 
#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QHBoxLayout>
 
class MaFenetre : public QWidget // On hérite de QWidget (IMPORTANT)
{
    public:
    MaFenetre();
 
    private:
    QHBoxLayout *m_layout;
    QPushButton *m_bouton_1; 
    QPushButton *m_bouton_2; 
};
 
#endif