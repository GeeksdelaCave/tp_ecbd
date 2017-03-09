#ifndef PFENETRE_H
#define PFENETRE_H

#include <QMainWindow>
#include <QLabel>
#include <QFont>
#include <QPushButton>
#include <QComboBox>

namespace P {
    class PFenetre : public QMainWindow
    {
    Q_OBJECT
    public slots:
        void setQuitter();
        void setCouleur();
    public:
        PFenetre(QWidget *parent = 0);
    private:
        QLabel *m_lab, *m_tra;
        QPushButton *m_bou;
        QComboBox *m_com;
        QString couleur;
    };
}

#endif // PFENETRE_H
