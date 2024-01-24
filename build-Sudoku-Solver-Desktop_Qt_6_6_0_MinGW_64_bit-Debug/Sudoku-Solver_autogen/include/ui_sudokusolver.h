/********************************************************************************
** Form generated from reading UI file 'sudokusolver.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUDOKUSOLVER_H
#define UI_SUDOKUSOLVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SudokuSolver
{
public:
    QWidget *centralwidget;
    QLineEdit *G00;
    QLineEdit *G01;
    QLineEdit *G02;
    QLineEdit *G11;
    QLineEdit *G10;
    QLineEdit *G12;
    QLineEdit *G21;
    QLineEdit *G20;
    QLineEdit *G22;
    QLineEdit *G13;
    QLineEdit *G23;
    QLineEdit *G14;
    QLineEdit *G04;
    QLineEdit *G03;
    QLineEdit *G05;
    QLineEdit *G15;
    QLineEdit *G24;
    QLineEdit *G25;
    QLineEdit *G16;
    QLineEdit *G26;
    QLineEdit *G17;
    QLineEdit *G07;
    QLineEdit *G06;
    QLineEdit *G08;
    QLineEdit *G18;
    QLineEdit *G27;
    QLineEdit *G28;
    QLineEdit *G40;
    QLineEdit *G58;
    QLineEdit *G50;
    QLineEdit *G41;
    QLineEdit *G35;
    QLineEdit *G56;
    QLineEdit *G31;
    QLineEdit *G38;
    QLineEdit *G44;
    QLineEdit *G47;
    QLineEdit *G46;
    QLineEdit *G43;
    QLineEdit *G45;
    QLineEdit *G30;
    QLineEdit *G36;
    QLineEdit *G32;
    QLineEdit *G42;
    QLineEdit *G54;
    QLineEdit *G37;
    QLineEdit *G48;
    QLineEdit *G33;
    QLineEdit *G53;
    QLineEdit *G51;
    QLineEdit *G57;
    QLineEdit *G52;
    QLineEdit *G55;
    QLineEdit *G34;
    QLineEdit *G70;
    QLineEdit *G88;
    QLineEdit *G80;
    QLineEdit *G71;
    QLineEdit *G65;
    QLineEdit *G86;
    QLineEdit *G61;
    QLineEdit *G68;
    QLineEdit *G74;
    QLineEdit *G77;
    QLineEdit *G76;
    QLineEdit *G_73;
    QLineEdit *G75;
    QLineEdit *G60;
    QLineEdit *G66;
    QLineEdit *G62;
    QLineEdit *G72;
    QLineEdit *G84;
    QLineEdit *G67;
    QLineEdit *G78;
    QLineEdit *G63;
    QLineEdit *G83;
    QLineEdit *G81;
    QLineEdit *G87;
    QLineEdit *G82;
    QLineEdit *G85;
    QLineEdit *G64;
    QPushButton *pushButton;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QPushButton *Button1;
    QPushButton *Button2;
    QPushButton *Button3;
    QPushButton *Button4;
    QPushButton *Button5;
    QPushButton *Button6;
    QPushButton *Button7;
    QPushButton *Button8;
    QPushButton *Button9;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SudokuSolver)
    {
        if (SudokuSolver->objectName().isEmpty())
            SudokuSolver->setObjectName("SudokuSolver");
        SudokuSolver->resize(700, 450);
        SudokuSolver->setStyleSheet(QString::fromUtf8("background-color: rgb(251, 255, 255);"));
        centralwidget = new QWidget(SudokuSolver);
        centralwidget->setObjectName("centralwidget");
        G00 = new QLineEdit(centralwidget);
        G00->setObjectName("G00");
        G00->setGeometry(QRect(10, 50, 41, 41));
        G00->setAutoFillBackground(false);
        G00->setStyleSheet(QString::fromUtf8("border: 1px solid gray; \n"
"border-top-width: 2px;\n"
"border-left-width: 2px;\n"
"background-color: rgb(255, 255, 255);"));
        G01 = new QLineEdit(centralwidget);
        G01->setObjectName("G01");
        G01->setGeometry(QRect(50, 50, 41, 41));
        G01->setAutoFillBackground(false);
        G01->setStyleSheet(QString::fromUtf8("border: 1px solid gray; \n"
"border-top-width: 2px;"));
        G02 = new QLineEdit(centralwidget);
        G02->setObjectName("G02");
        G02->setGeometry(QRect(90, 50, 41, 41));
        G02->setAutoFillBackground(false);
        G02->setStyleSheet(QString::fromUtf8("border: 1px solid gray; \n"
"border-top-width: 2px;\n"
"border-right-width: 2px;\n"
"background-color: rgb(255, 255, 255);"));
        G11 = new QLineEdit(centralwidget);
        G11->setObjectName("G11");
        G11->setGeometry(QRect(50, 90, 41, 41));
        G11->setAutoFillBackground(false);
        G11->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        G10 = new QLineEdit(centralwidget);
        G10->setObjectName("G10");
        G10->setGeometry(QRect(10, 90, 41, 41));
        G10->setAutoFillBackground(false);
        G10->setStyleSheet(QString::fromUtf8("border: 1px solid gray; \n"
"border-left-width: 2px;"));
        G12 = new QLineEdit(centralwidget);
        G12->setObjectName("G12");
        G12->setGeometry(QRect(90, 90, 41, 41));
        G12->setAutoFillBackground(false);
        G12->setStyleSheet(QString::fromUtf8("border: 1px solid gray; \n"
"border-right-width: 2px;"));
        G21 = new QLineEdit(centralwidget);
        G21->setObjectName("G21");
        G21->setGeometry(QRect(50, 130, 41, 41));
        G21->setAutoFillBackground(false);
        G21->setStyleSheet(QString::fromUtf8("border: 1px solid gray; \n"
"border-bottom-width: 2px;"));
        G20 = new QLineEdit(centralwidget);
        G20->setObjectName("G20");
        G20->setEnabled(true);
        G20->setGeometry(QRect(10, 130, 41, 41));
        G20->setAutoFillBackground(false);
        G20->setStyleSheet(QString::fromUtf8("border: 1px solid gray; \n"
"border-left-width: 2px;\n"
"border-bottom-width: 2px;\n"
"background-color: rgb(255, 255, 255);"));
        G22 = new QLineEdit(centralwidget);
        G22->setObjectName("G22");
        G22->setGeometry(QRect(90, 130, 41, 41));
        G22->setAutoFillBackground(false);
        G22->setStyleSheet(QString::fromUtf8("border: 1px solid gray; \n"
"border-right-width: 2px;\n"
"border-bottom-width: 2px;\n"
"background-color: rgb(255, 255, 255);"));
        G13 = new QLineEdit(centralwidget);
        G13->setObjectName("G13");
        G13->setGeometry(QRect(130, 90, 41, 41));
        G13->setAutoFillBackground(false);
        G13->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        G23 = new QLineEdit(centralwidget);
        G23->setObjectName("G23");
        G23->setGeometry(QRect(130, 130, 41, 41));
        G23->setAutoFillBackground(false);
        G23->setStyleSheet(QString::fromUtf8("border: 1px solid gray; \n"
"border-bottom-width: 2px;"));
        G14 = new QLineEdit(centralwidget);
        G14->setObjectName("G14");
        G14->setGeometry(QRect(170, 90, 41, 41));
        G14->setAutoFillBackground(false);
        G04 = new QLineEdit(centralwidget);
        G04->setObjectName("G04");
        G04->setGeometry(QRect(170, 50, 41, 41));
        G04->setAutoFillBackground(false);
        G04->setStyleSheet(QString::fromUtf8("border: 1px solid gray; \n"
"border-top-width: 2px;\n"
"background-color: rgb(255, 255, 255);"));
        G03 = new QLineEdit(centralwidget);
        G03->setObjectName("G03");
        G03->setGeometry(QRect(130, 50, 41, 41));
        G03->setAutoFillBackground(false);
        G03->setStyleSheet(QString::fromUtf8("border: 1px solid gray; \n"
"border-top-width: 2px;"));
        G05 = new QLineEdit(centralwidget);
        G05->setObjectName("G05");
        G05->setGeometry(QRect(210, 50, 41, 41));
        G05->setAutoFillBackground(false);
        G05->setStyleSheet(QString::fromUtf8("border: 1px solid gray; \n"
"border-top-width: 2px;"));
        G15 = new QLineEdit(centralwidget);
        G15->setObjectName("G15");
        G15->setGeometry(QRect(210, 90, 41, 41));
        G15->setAutoFillBackground(false);
        G15->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        G24 = new QLineEdit(centralwidget);
        G24->setObjectName("G24");
        G24->setGeometry(QRect(170, 130, 41, 41));
        G24->setAutoFillBackground(false);
        G24->setStyleSheet(QString::fromUtf8("border: 1px solid gray; \n"
"border-bottom-width: 2px;\n"
"background-color: rgb(255, 255, 255);"));
        G25 = new QLineEdit(centralwidget);
        G25->setObjectName("G25");
        G25->setGeometry(QRect(210, 130, 41, 41));
        G25->setAutoFillBackground(false);
        G25->setStyleSheet(QString::fromUtf8("border: 1px solid gray; \n"
"border-bottom-width: 2px;"));
        G16 = new QLineEdit(centralwidget);
        G16->setObjectName("G16");
        G16->setGeometry(QRect(250, 90, 41, 41));
        G16->setAutoFillBackground(false);
        G16->setStyleSheet(QString::fromUtf8("border: 1px solid gray; \n"
"border-left-width: 2px;"));
        G26 = new QLineEdit(centralwidget);
        G26->setObjectName("G26");
        G26->setGeometry(QRect(250, 130, 41, 41));
        G26->setAutoFillBackground(false);
        G26->setStyleSheet(QString::fromUtf8("border: 1px solid gray; \n"
"border-left-width: 2px;\n"
"border-bottom-width: 2px;\n"
"background-color: rgb(255, 255, 255);"));
        G17 = new QLineEdit(centralwidget);
        G17->setObjectName("G17");
        G17->setGeometry(QRect(290, 90, 41, 41));
        G17->setAutoFillBackground(false);
        G17->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        G07 = new QLineEdit(centralwidget);
        G07->setObjectName("G07");
        G07->setGeometry(QRect(290, 50, 41, 41));
        G07->setAutoFillBackground(false);
        G07->setStyleSheet(QString::fromUtf8("border: 1px solid gray; \n"
"border-top-width: 2px;"));
        G06 = new QLineEdit(centralwidget);
        G06->setObjectName("G06");
        G06->setGeometry(QRect(250, 50, 41, 41));
        G06->setAutoFillBackground(false);
        G06->setStyleSheet(QString::fromUtf8("border: 1px solid gray; \n"
"border-top-width: 2px;\n"
"border-left-width: 2px;\n"
"background-color: rgb(255, 255, 255);"));
        G08 = new QLineEdit(centralwidget);
        G08->setObjectName("G08");
        G08->setGeometry(QRect(330, 50, 41, 41));
        G08->setAutoFillBackground(false);
        G08->setStyleSheet(QString::fromUtf8("border: 1px solid gray; \n"
"border-top-width: 2px;\n"
"border-right-width: 2px;\n"
"background-color: rgb(255, 255, 255);"));
        G18 = new QLineEdit(centralwidget);
        G18->setObjectName("G18");
        G18->setGeometry(QRect(330, 90, 41, 41));
        G18->setAutoFillBackground(false);
        G18->setStyleSheet(QString::fromUtf8("border: 1px solid gray; \n"
"border-right-width: 2px;"));
        G27 = new QLineEdit(centralwidget);
        G27->setObjectName("G27");
        G27->setGeometry(QRect(290, 130, 41, 41));
        G27->setAutoFillBackground(false);
        G27->setStyleSheet(QString::fromUtf8("border: 1px solid gray; \n"
"border-bottom-width: 2px;"));
        G28 = new QLineEdit(centralwidget);
        G28->setObjectName("G28");
        G28->setGeometry(QRect(330, 130, 41, 41));
        G28->setAutoFillBackground(false);
        G28->setStyleSheet(QString::fromUtf8("border: 1px solid gray; \n"
"border-right-width: 2px;\n"
"border-bottom-width: 2px;\n"
"background-color: rgb(255, 255, 255);"));
        G40 = new QLineEdit(centralwidget);
        G40->setObjectName("G40");
        G40->setGeometry(QRect(10, 210, 41, 41));
        G40->setAutoFillBackground(false);
        G40->setStyleSheet(QString::fromUtf8("border: 1px solid gray; \n"
"border-left-width: 2px;\n"
"background-color: rgb(255, 255, 255);"));
        G58 = new QLineEdit(centralwidget);
        G58->setObjectName("G58");
        G58->setGeometry(QRect(330, 250, 41, 41));
        G58->setAutoFillBackground(false);
        G58->setStyleSheet(QString::fromUtf8("border: 1px solid gray; \n"
"border-right-width: 2px;\n"
"border-bottom-width: 2px;"));
        G50 = new QLineEdit(centralwidget);
        G50->setObjectName("G50");
        G50->setGeometry(QRect(10, 250, 41, 41));
        G50->setAutoFillBackground(false);
        G50->setStyleSheet(QString::fromUtf8("border: 1px solid gray; \n"
"border-left-width: 2px;\n"
"border-bottom-width: 2px;"));
        G41 = new QLineEdit(centralwidget);
        G41->setObjectName("G41");
        G41->setGeometry(QRect(50, 210, 41, 41));
        G41->setAutoFillBackground(false);
        G35 = new QLineEdit(centralwidget);
        G35->setObjectName("G35");
        G35->setGeometry(QRect(210, 170, 41, 41));
        G35->setAutoFillBackground(false);
        G35->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        G56 = new QLineEdit(centralwidget);
        G56->setObjectName("G56");
        G56->setGeometry(QRect(250, 250, 41, 41));
        G56->setAutoFillBackground(false);
        G56->setStyleSheet(QString::fromUtf8("border: 1px solid gray; \n"
"border-left-width: 2px;\n"
"border-bottom-width: 2px;"));
        G31 = new QLineEdit(centralwidget);
        G31->setObjectName("G31");
        G31->setGeometry(QRect(50, 170, 41, 41));
        G31->setAutoFillBackground(false);
        G31->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        G38 = new QLineEdit(centralwidget);
        G38->setObjectName("G38");
        G38->setGeometry(QRect(330, 170, 41, 41));
        G38->setAutoFillBackground(false);
        G38->setStyleSheet(QString::fromUtf8("border: 1px solid gray; \n"
"border-right-width: 2px;"));
        G44 = new QLineEdit(centralwidget);
        G44->setObjectName("G44");
        G44->setGeometry(QRect(170, 210, 41, 41));
        G44->setAutoFillBackground(false);
        G44->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        G47 = new QLineEdit(centralwidget);
        G47->setObjectName("G47");
        G47->setGeometry(QRect(290, 210, 41, 41));
        G47->setAutoFillBackground(false);
        G46 = new QLineEdit(centralwidget);
        G46->setObjectName("G46");
        G46->setGeometry(QRect(250, 210, 41, 41));
        G46->setAutoFillBackground(false);
        G46->setStyleSheet(QString::fromUtf8("border: 1px solid gray; \n"
"border-left-width: 2px;\n"
"background-color: rgb(255, 255, 255);"));
        G43 = new QLineEdit(centralwidget);
        G43->setObjectName("G43");
        G43->setGeometry(QRect(130, 210, 41, 41));
        G43->setAutoFillBackground(false);
        G45 = new QLineEdit(centralwidget);
        G45->setObjectName("G45");
        G45->setGeometry(QRect(210, 210, 41, 41));
        G45->setAutoFillBackground(false);
        G30 = new QLineEdit(centralwidget);
        G30->setObjectName("G30");
        G30->setGeometry(QRect(10, 170, 41, 41));
        G30->setAutoFillBackground(false);
        G30->setStyleSheet(QString::fromUtf8("border: 1px solid gray; \n"
"border-left-width: 2px;"));
        G36 = new QLineEdit(centralwidget);
        G36->setObjectName("G36");
        G36->setGeometry(QRect(250, 170, 41, 41));
        G36->setAutoFillBackground(false);
        G36->setStyleSheet(QString::fromUtf8("border: 1px solid gray; \n"
"border-left-width: 2px;"));
        G32 = new QLineEdit(centralwidget);
        G32->setObjectName("G32");
        G32->setGeometry(QRect(90, 170, 41, 41));
        G32->setAutoFillBackground(false);
        G32->setStyleSheet(QString::fromUtf8("border: 1px solid gray; \n"
"border-right-width: 2px;"));
        G42 = new QLineEdit(centralwidget);
        G42->setObjectName("G42");
        G42->setGeometry(QRect(90, 210, 41, 41));
        G42->setAutoFillBackground(false);
        G42->setStyleSheet(QString::fromUtf8("border: 1px solid gray; \n"
"border-right-width: 2px;\n"
"background-color: rgb(255, 255, 255);"));
        G54 = new QLineEdit(centralwidget);
        G54->setObjectName("G54");
        G54->setGeometry(QRect(170, 250, 41, 41));
        G54->setAutoFillBackground(false);
        G54->setStyleSheet(QString::fromUtf8("border: 1px solid gray; \n"
"border-bottom-width: 2px;"));
        G37 = new QLineEdit(centralwidget);
        G37->setObjectName("G37");
        G37->setGeometry(QRect(290, 170, 41, 41));
        G37->setAutoFillBackground(false);
        G37->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        G48 = new QLineEdit(centralwidget);
        G48->setObjectName("G48");
        G48->setGeometry(QRect(330, 210, 41, 41));
        G48->setAutoFillBackground(false);
        G48->setStyleSheet(QString::fromUtf8("border: 1px solid gray; \n"
"border-right-width: 2px;\n"
"background-color: rgb(255, 255, 255);"));
        G33 = new QLineEdit(centralwidget);
        G33->setObjectName("G33");
        G33->setGeometry(QRect(130, 170, 41, 41));
        G33->setAutoFillBackground(false);
        G33->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        G53 = new QLineEdit(centralwidget);
        G53->setObjectName("G53");
        G53->setGeometry(QRect(130, 250, 41, 41));
        G53->setAutoFillBackground(false);
        G53->setStyleSheet(QString::fromUtf8("border: 1px solid gray; \n"
"border-bottom-width: 2px;\n"
"background-color: rgb(255, 255, 255);"));
        G51 = new QLineEdit(centralwidget);
        G51->setObjectName("G51");
        G51->setGeometry(QRect(50, 250, 41, 41));
        G51->setAutoFillBackground(false);
        G51->setStyleSheet(QString::fromUtf8("border: 1px solid gray; \n"
"border-bottom-width: 2px;\n"
"background-color: rgb(255, 255, 255);"));
        G57 = new QLineEdit(centralwidget);
        G57->setObjectName("G57");
        G57->setGeometry(QRect(290, 250, 41, 41));
        G57->setAutoFillBackground(false);
        G57->setStyleSheet(QString::fromUtf8("border: 1px solid gray; \n"
"border-bottom-width: 2px;\n"
"background-color: rgb(255, 255, 255);"));
        G52 = new QLineEdit(centralwidget);
        G52->setObjectName("G52");
        G52->setGeometry(QRect(90, 250, 41, 41));
        G52->setAutoFillBackground(false);
        G52->setStyleSheet(QString::fromUtf8("border: 1px solid gray; \n"
"border-right-width: 2px;\n"
"border-bottom-width: 2px;"));
        G55 = new QLineEdit(centralwidget);
        G55->setObjectName("G55");
        G55->setGeometry(QRect(210, 250, 41, 41));
        G55->setAutoFillBackground(false);
        G55->setStyleSheet(QString::fromUtf8("border: 1px solid gray; \n"
"border-bottom-width: 2px;\n"
"background-color: rgb(255, 255, 255);"));
        G34 = new QLineEdit(centralwidget);
        G34->setObjectName("G34");
        G34->setGeometry(QRect(170, 170, 41, 41));
        G34->setAutoFillBackground(false);
        G34->setStyleSheet(QString::fromUtf8(""));
        G70 = new QLineEdit(centralwidget);
        G70->setObjectName("G70");
        G70->setGeometry(QRect(10, 330, 41, 41));
        G70->setAutoFillBackground(false);
        G70->setStyleSheet(QString::fromUtf8("border: 1px solid gray; \n"
"border-left-width: 2px;"));
        G88 = new QLineEdit(centralwidget);
        G88->setObjectName("G88");
        G88->setGeometry(QRect(330, 370, 41, 41));
        G88->setAutoFillBackground(false);
        G88->setStyleSheet(QString::fromUtf8("border: 1px solid gray; \n"
"border-right-width: 2px;\n"
"border-bottom-width: 2px;\n"
"background-color: rgb(255, 255, 255);"));
        G80 = new QLineEdit(centralwidget);
        G80->setObjectName("G80");
        G80->setGeometry(QRect(10, 370, 41, 41));
        G80->setAutoFillBackground(false);
        G80->setStyleSheet(QString::fromUtf8("border: 1px solid gray; \n"
"border-left-width: 2px;\n"
"border-bottom-width: 2px;\n"
"background-color: rgb(255, 255, 255);"));
        G71 = new QLineEdit(centralwidget);
        G71->setObjectName("G71");
        G71->setGeometry(QRect(50, 330, 41, 41));
        G71->setAutoFillBackground(false);
        G71->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        G65 = new QLineEdit(centralwidget);
        G65->setObjectName("G65");
        G65->setGeometry(QRect(210, 290, 41, 41));
        G65->setAutoFillBackground(false);
        G86 = new QLineEdit(centralwidget);
        G86->setObjectName("G86");
        G86->setGeometry(QRect(250, 370, 41, 41));
        G86->setAutoFillBackground(false);
        G86->setStyleSheet(QString::fromUtf8("border: 1px solid gray; \n"
"border-left-width: 2px;\n"
"border-bottom-width: 2px;\n"
"background-color: rgb(255, 255, 255);"));
        G61 = new QLineEdit(centralwidget);
        G61->setObjectName("G61");
        G61->setGeometry(QRect(50, 290, 41, 41));
        G61->setAutoFillBackground(false);
        G68 = new QLineEdit(centralwidget);
        G68->setObjectName("G68");
        G68->setGeometry(QRect(330, 290, 41, 41));
        G68->setAutoFillBackground(false);
        G68->setStyleSheet(QString::fromUtf8("border: 1px solid gray; \n"
"border-right-width: 2px;\n"
"background-color: rgb(255, 255, 255);"));
        G74 = new QLineEdit(centralwidget);
        G74->setObjectName("G74");
        G74->setGeometry(QRect(170, 330, 41, 41));
        G74->setAutoFillBackground(false);
        G77 = new QLineEdit(centralwidget);
        G77->setObjectName("G77");
        G77->setGeometry(QRect(290, 330, 41, 41));
        G77->setAutoFillBackground(false);
        G77->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        G76 = new QLineEdit(centralwidget);
        G76->setObjectName("G76");
        G76->setGeometry(QRect(250, 330, 41, 41));
        G76->setAutoFillBackground(false);
        G76->setStyleSheet(QString::fromUtf8("border: 1px solid gray; \n"
"border-left-width: 2px;"));
        G_73 = new QLineEdit(centralwidget);
        G_73->setObjectName("G_73");
        G_73->setGeometry(QRect(130, 330, 41, 41));
        G_73->setAutoFillBackground(false);
        G_73->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        G75 = new QLineEdit(centralwidget);
        G75->setObjectName("G75");
        G75->setGeometry(QRect(210, 330, 41, 41));
        G75->setAutoFillBackground(false);
        G75->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        G60 = new QLineEdit(centralwidget);
        G60->setObjectName("G60");
        G60->setGeometry(QRect(10, 290, 41, 41));
        G60->setAutoFillBackground(false);
        G60->setStyleSheet(QString::fromUtf8("border: 1px solid gray; \n"
"border-left-width: 2px;\n"
"background-color: rgb(255, 255, 255);"));
        G66 = new QLineEdit(centralwidget);
        G66->setObjectName("G66");
        G66->setGeometry(QRect(250, 290, 41, 41));
        G66->setAutoFillBackground(false);
        G66->setStyleSheet(QString::fromUtf8("border: 1px solid gray; \n"
"border-left-width: 2px;\n"
"background-color: rgb(255, 255, 255);"));
        G62 = new QLineEdit(centralwidget);
        G62->setObjectName("G62");
        G62->setGeometry(QRect(90, 290, 41, 41));
        G62->setAutoFillBackground(false);
        G62->setStyleSheet(QString::fromUtf8("border: 1px solid gray; \n"
"border-right-width: 2px;\n"
"background-color: rgb(255, 255, 255);"));
        G72 = new QLineEdit(centralwidget);
        G72->setObjectName("G72");
        G72->setGeometry(QRect(90, 330, 41, 41));
        G72->setAutoFillBackground(false);
        G72->setStyleSheet(QString::fromUtf8("border: 1px solid gray; \n"
"border-right-width: 2px;"));
        G84 = new QLineEdit(centralwidget);
        G84->setObjectName("G84");
        G84->setGeometry(QRect(170, 370, 41, 41));
        G84->setAutoFillBackground(false);
        G84->setStyleSheet(QString::fromUtf8("border: 1px solid gray; \n"
"border-bottom-width: 2px;\n"
"background-color: rgb(255, 255, 255);"));
        G67 = new QLineEdit(centralwidget);
        G67->setObjectName("G67");
        G67->setGeometry(QRect(290, 290, 41, 41));
        G67->setAutoFillBackground(false);
        G78 = new QLineEdit(centralwidget);
        G78->setObjectName("G78");
        G78->setGeometry(QRect(330, 330, 41, 41));
        G78->setAutoFillBackground(false);
        G78->setStyleSheet(QString::fromUtf8("border: 1px solid gray; \n"
"border-right-width: 2px;"));
        G63 = new QLineEdit(centralwidget);
        G63->setObjectName("G63");
        G63->setGeometry(QRect(130, 290, 41, 41));
        G63->setAutoFillBackground(false);
        G83 = new QLineEdit(centralwidget);
        G83->setObjectName("G83");
        G83->setGeometry(QRect(130, 370, 41, 41));
        G83->setAutoFillBackground(false);
        G83->setStyleSheet(QString::fromUtf8("border: 1px solid gray; \n"
"border-bottom-width: 2px;"));
        G81 = new QLineEdit(centralwidget);
        G81->setObjectName("G81");
        G81->setGeometry(QRect(50, 370, 41, 41));
        G81->setAutoFillBackground(false);
        G81->setStyleSheet(QString::fromUtf8("border: 1px solid gray; \n"
"border-bottom-width: 2px;"));
        G87 = new QLineEdit(centralwidget);
        G87->setObjectName("G87");
        G87->setGeometry(QRect(290, 370, 41, 41));
        G87->setAutoFillBackground(false);
        G87->setStyleSheet(QString::fromUtf8("border: 1px solid gray; \n"
"border-bottom-width: 2px;"));
        G82 = new QLineEdit(centralwidget);
        G82->setObjectName("G82");
        G82->setGeometry(QRect(90, 370, 41, 41));
        G82->setAutoFillBackground(false);
        G82->setStyleSheet(QString::fromUtf8("border: 1px solid gray; \n"
"border-right-width: 2px;\n"
"border-bottom-width: 2px;\n"
"background-color: rgb(255, 255, 255);"));
        G85 = new QLineEdit(centralwidget);
        G85->setObjectName("G85");
        G85->setGeometry(QRect(210, 370, 41, 41));
        G85->setAutoFillBackground(false);
        G85->setStyleSheet(QString::fromUtf8("border: 1px solid gray; \n"
"border-bottom-width: 2px;"));
        G64 = new QLineEdit(centralwidget);
        G64->setObjectName("G64");
        G64->setGeometry(QRect(170, 290, 41, 41));
        G64->setAutoFillBackground(false);
        G64->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(460, 330, 171, 71));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(410, 60, 271, 231));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        Button1 = new QPushButton(widget);
        Button1->setObjectName("Button1");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Button1->sizePolicy().hasHeightForWidth());
        Button1->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(Button1, 0, 0, 1, 1);

        Button2 = new QPushButton(widget);
        Button2->setObjectName("Button2");
        sizePolicy.setHeightForWidth(Button2->sizePolicy().hasHeightForWidth());
        Button2->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(Button2, 0, 1, 1, 1);

        Button3 = new QPushButton(widget);
        Button3->setObjectName("Button3");
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Button3->sizePolicy().hasHeightForWidth());
        Button3->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(Button3, 0, 2, 1, 1);

        Button4 = new QPushButton(widget);
        Button4->setObjectName("Button4");
        sizePolicy1.setHeightForWidth(Button4->sizePolicy().hasHeightForWidth());
        Button4->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(Button4, 1, 0, 1, 1);

        Button5 = new QPushButton(widget);
        Button5->setObjectName("Button5");
        sizePolicy1.setHeightForWidth(Button5->sizePolicy().hasHeightForWidth());
        Button5->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(Button5, 1, 1, 1, 1);

        Button6 = new QPushButton(widget);
        Button6->setObjectName("Button6");
        sizePolicy1.setHeightForWidth(Button6->sizePolicy().hasHeightForWidth());
        Button6->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(Button6, 1, 2, 1, 1);

        Button7 = new QPushButton(widget);
        Button7->setObjectName("Button7");
        sizePolicy1.setHeightForWidth(Button7->sizePolicy().hasHeightForWidth());
        Button7->setSizePolicy(sizePolicy1);
        Button7->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(Button7, 2, 0, 1, 1);

        Button8 = new QPushButton(widget);
        Button8->setObjectName("Button8");
        Button8->setEnabled(true);
        sizePolicy.setHeightForWidth(Button8->sizePolicy().hasHeightForWidth());
        Button8->setSizePolicy(sizePolicy);
        Button8->setMaximumSize(QSize(1000, 2000));
        Button8->setBaseSize(QSize(0, 0));

        gridLayout_2->addWidget(Button8, 2, 1, 1, 1);

        Button9 = new QPushButton(widget);
        Button9->setObjectName("Button9");
        sizePolicy1.setHeightForWidth(Button9->sizePolicy().hasHeightForWidth());
        Button9->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(Button9, 2, 2, 1, 1);

        SudokuSolver->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(SudokuSolver);
        statusbar->setObjectName("statusbar");
        SudokuSolver->setStatusBar(statusbar);

        retranslateUi(SudokuSolver);

        QMetaObject::connectSlotsByName(SudokuSolver);
    } // setupUi

    void retranslateUi(QMainWindow *SudokuSolver)
    {
        SudokuSolver->setWindowTitle(QCoreApplication::translate("SudokuSolver", "SudokuSolver", nullptr));
        G32->setText(QString());
        pushButton->setText(QCoreApplication::translate("SudokuSolver", "Solve", nullptr));
        Button1->setText(QCoreApplication::translate("SudokuSolver", "1", nullptr));
        Button2->setText(QCoreApplication::translate("SudokuSolver", "2", nullptr));
        Button3->setText(QCoreApplication::translate("SudokuSolver", "3", nullptr));
        Button4->setText(QCoreApplication::translate("SudokuSolver", "4", nullptr));
        Button5->setText(QCoreApplication::translate("SudokuSolver", "5", nullptr));
        Button6->setText(QCoreApplication::translate("SudokuSolver", "6", nullptr));
        Button7->setText(QCoreApplication::translate("SudokuSolver", "7", nullptr));
        Button8->setText(QCoreApplication::translate("SudokuSolver", "8", nullptr));
        Button9->setText(QCoreApplication::translate("SudokuSolver", "9", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SudokuSolver: public Ui_SudokuSolver {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUDOKUSOLVER_H
