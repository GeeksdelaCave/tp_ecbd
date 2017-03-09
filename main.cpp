#include <QApplication>
#include <QLabel>
#include <QFont>
#include <QPushButton>

#include "pfenetre.h"

using namespace P;

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);

    PFenetre fenetre;
    fenetre.show();

    return app.exec();
}
