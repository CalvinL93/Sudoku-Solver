#include "sudokusolver.h"
#include "./ui_sudokusolver.h"
#include <QLineEdit>
#include <QFrame>
#include <QGridLayout>
#include <QVBoxLayout>

SudokuSolver::SudokuSolver(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SudokuSolver)
{
    ui->setupUi(this);

    for (int row = 0; row < 9; ++row) {
        for (int col = 0; col < 9; ++col) {
            // Link ui line items to objects
            QString objectName = QString("G%1%2").arg(row).arg(col);
            G[row][col] = findChild<QLineEdit*>(objectName);

            // Center Text, if statement may not be necessary after debugging
            if(G[row][col]) {
                // Set number size
                QFont font = G[row][col]->font();
                font.setPointSize(16);
                G[row][col]->setFont(font);

                G[row][col]->setAlignment(Qt::AlignCenter);

                connect(G[row][col], &QLineEdit::selectionChanged, this, &SudokuSolver::onGridSquareSelected);
            } else {
                qDebug() << "Error: Line edit pointer is null for" << objectName;
            }

        }
    }

    connect(ui->Button1, &QPushButton::clicked, this, &SudokuSolver::onNumberButtonClicked);
    connect(ui->Button2, &QPushButton::clicked, this, &SudokuSolver::onNumberButtonClicked);
    connect(ui->Button3, &QPushButton::clicked, this, &SudokuSolver::onNumberButtonClicked);
    connect(ui->Button4, &QPushButton::clicked, this, &SudokuSolver::onNumberButtonClicked);
    connect(ui->Button5, &QPushButton::clicked, this, &SudokuSolver::onNumberButtonClicked);
    connect(ui->Button6, &QPushButton::clicked, this, &SudokuSolver::onNumberButtonClicked);
    connect(ui->Button7, &QPushButton::clicked, this, &SudokuSolver::onNumberButtonClicked);
    connect(ui->Button8, &QPushButton::clicked, this, &SudokuSolver::onNumberButtonClicked);
    connect(ui->Button9, &QPushButton::clicked, this, &SudokuSolver::onNumberButtonClicked);
}

SudokuSolver::~SudokuSolver()
{
    delete ui;
}

void SudokuSolver::on_lineEdit_textChanged(const QString &text)
{
    // Handle text changes here
    QLineEdit* senderLineEdit = qobject_cast<QLineEdit*>(sender());
    // Access senderLineEdit->text() to get the entered text
}

// void SudokuSolver::on_button1_clicked(){

// }
// void SudokuSolver::on_button2_clicked(){

// }
// void SudokuSolver::on_button3_clicked(){

// }
// void SudokuSolver::on_button4_clicked(){

// }
// void SudokuSolver::on_button5_clicked(){

// }
// void SudokuSolver::on_button6_clicked(){

// }
// void SudokuSolver::on_button7_clicked(){

// }
// void SudokuSolver::on_button8_clicked(){

// }
// void SudokuSolver::on_button9_clicked(){

// }



void SudokuSolver::onNumberButtonClicked()
{
    QPushButton* clickedButton = qobject_cast<QPushButton*>(sender());
    if (selectedGridSquare != nullptr && clickedButton != nullptr)
    {
        QString buttonText = clickedButton->text();
        selectedGridSquare->setText(buttonText);
    }
}

void SudokuSolver::onGridSquareSelected()
{
    selectedGridSquare = qobject_cast<QLineEdit*>(sender());
}
