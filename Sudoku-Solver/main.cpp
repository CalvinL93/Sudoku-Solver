#include "sudokusolver.h"

#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SudokuSolver w;
    w.show();
    return a.exec();


}
