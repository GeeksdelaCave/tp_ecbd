#include "pfenetre.h"

P::PFenetre::PFenetre(QWidget *parent)
{
    setFixedSize(800,600);
    m_bou = new QPushButton("Quitter", this);
    m_bou->setGeometry(600,400,80,40);

    // Label
    m_lab = new QLabel("Couleur", this);
    m_lab->setFont(QFont("Arial", 12, QFont::Bold, true));
    m_lab->move(320, 125);

    // ComboBox
    m_com = new QComboBox(this);
    m_com->setGeometry(300,150,100,30);
    m_com->addItem("Rouge");
    m_com->addItem("Vert");
    m_com->addItem("Bleu");
    m_com->addItem("Jaune");
    m_com->addItem("Orange");
    m_com->addItem("Violet");

    // Définition couleur
    couleur = m_com->currentText();

    // Aperçu
    m_tra = new QLabel(this);
    m_tra->setFont(QFont("Arial", 12, QFont::Bold, true));
    m_tra->move(320, 300);

    // Liaison des évènements
    connect(m_bou, SIGNAL(clicked()), this, SLOT(setQuitter()));
    connect(m_com, SIGNAL(currentIndexChanged(const QString &)), this, SLOT(setCouleur()));
}

void P::PFenetre::setQuitter() {
    exit(0);
}

void P::PFenetre::setCouleur()
{
    couleur = m_com->currentText();
    m_tra->setText(">> " + couleur + " <<");
}
