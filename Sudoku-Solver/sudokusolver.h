#ifndef SUDOKUSOLVER_H
#define SUDOKUSOLVER_H

#include "qlineedit.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class SudokuSolver;
}
QT_END_NAMESPACE

class SudokuSolver : public QMainWindow
{
    Q_OBJECT

public:
    SudokuSolver(QWidget *parent = nullptr);
    ~SudokuSolver();


private slots:
    void on_lineEdit_textChanged(const QString &text);
    void onGridSquareSelected();
    void onNumberButtonClicked();
    // void on_button1_clicked();
    // void on_button2_clicked();
    // void on_button3_clicked();
    // void on_button4_clicked();
    // void on_button5_clicked();
    // void on_button6_clicked();
    // void on_button7_clicked();
    // void on_button8_clicked();
    // void on_button9_clicked();


private:
    Ui::SudokuSolver *ui;
    QLineEdit* G[9][9];
    QLineEdit* selectedGridSquare;
};
#endif // SUDOKUSOLVER_H
