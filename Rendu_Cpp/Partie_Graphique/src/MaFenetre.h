#ifndef DEF_FENETRECHOIX
#define DEF_FENETRECHOIX
 
#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QIcon>
 
class MaFenetre : public QWidget // On hérite de QWidget (IMPORTANT)
{
    public:
    MaFenetre();
 
    private:
    QLabel *m_label;
    QHBoxLayout *m_layout;
    QVBoxLayout *m_layout_2;
    QPushButton *m_bouton_1; 
    QPushButton *m_bouton_2;
    QPushButton *m_bouton_3; 
};
 
#endif