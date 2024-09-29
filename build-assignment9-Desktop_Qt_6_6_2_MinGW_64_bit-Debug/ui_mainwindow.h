/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *canvas;
    QPushButton *addANDGate;
    QPushButton *addORGate;
    QPushButton *addNOTGate;
    QWidget *layoutWidget;
    QVBoxLayout *outputs;
    QPushButton *startButton;
    QWidget *layoutWidget1;
    QVBoxLayout *inputs;
    QLabel *levelDescription;
    QTableWidget *tableWidget;
    QPushButton *nextLevelButton;
    QLabel *failLabel;
    QPushButton *retryButton;
    QPushButton *resetButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1000, 800);
        QFont font;
        font.setFamilies({QString::fromUtf8("Source Code Pro")});
        MainWindow->setFont(font);
        MainWindow->setMouseTracking(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setFont(font);
        canvas = new QLabel(centralwidget);
        canvas->setObjectName("canvas");
        canvas->setGeometry(QRect(110, 160, 721, 581));
        addANDGate = new QPushButton(centralwidget);
        addANDGate->setObjectName("addANDGate");
        addANDGate->setGeometry(QRect(880, 10, 101, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Source Code Pro")});
        font1.setPointSize(9);
        addANDGate->setFont(font1);
        addORGate = new QPushButton(centralwidget);
        addORGate->setObjectName("addORGate");
        addORGate->setGeometry(QRect(880, 60, 101, 41));
        addNOTGate = new QPushButton(centralwidget);
        addNOTGate->setObjectName("addNOTGate");
        addNOTGate->setGeometry(QRect(880, 110, 101, 41));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(840, 160, 91, 541));
        outputs = new QVBoxLayout(layoutWidget);
        outputs->setSpacing(52);
        outputs->setObjectName("outputs");
        outputs->setContentsMargins(0, 0, 0, 0);
        startButton = new QPushButton(centralwidget);
        startButton->setObjectName("startButton");
        startButton->setGeometry(QRect(920, 710, 80, 41));
        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(10, 160, 91, 541));
        inputs = new QVBoxLayout(layoutWidget1);
        inputs->setSpacing(52);
        inputs->setObjectName("inputs");
        inputs->setContentsMargins(0, 0, 0, 0);
        levelDescription = new QLabel(centralwidget);
        levelDescription->setObjectName("levelDescription");
        levelDescription->setGeometry(QRect(40, 20, 451, 131));
        levelDescription->setFont(font1);
        levelDescription->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        levelDescription->setWordWrap(true);
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(500, 0, 361, 151));
        nextLevelButton = new QPushButton(centralwidget);
        nextLevelButton->setObjectName("nextLevelButton");
        nextLevelButton->setGeometry(QRect(320, 360, 331, 101));
        failLabel = new QLabel(centralwidget);
        failLabel->setObjectName("failLabel");
        failLabel->setGeometry(QRect(280, 340, 401, 151));
        failLabel->setAlignment(Qt::AlignCenter);
        retryButton = new QPushButton(centralwidget);
        retryButton->setObjectName("retryButton");
        retryButton->setGeometry(QRect(440, 510, 80, 24));
        resetButton = new QPushButton(centralwidget);
        resetButton->setObjectName("resetButton");
        resetButton->setGeometry(QRect(840, 710, 80, 41));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1000, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Untitled Logic Gate Game", nullptr));
        canvas->setText(QString());
        addANDGate->setText(QCoreApplication::translate("MainWindow", "New AND Gate", nullptr));
        addORGate->setText(QCoreApplication::translate("MainWindow", "New OR Gate", nullptr));
        addNOTGate->setText(QCoreApplication::translate("MainWindow", "New NOT Gate", nullptr));
        startButton->setText(QCoreApplication::translate("MainWindow", "Start\n"
"Simulation!", nullptr));
        levelDescription->setText(QCoreApplication::translate("MainWindow", "this is the level description", nullptr));
        nextLevelButton->setText(QCoreApplication::translate("MainWindow", "GO TO NEXT LEVEL", nullptr));
        failLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        retryButton->setText(QCoreApplication::translate("MainWindow", "Try Again!", nullptr));
        resetButton->setText(QCoreApplication::translate("MainWindow", "Reset \n"
"Level", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
