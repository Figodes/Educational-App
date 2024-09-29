/********************************************************************************
** Form generated from reading UI file 'welcomescreen.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMESCREEN_H
#define UI_WELCOMESCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_welcomeScreen
{
public:
    QLabel *welcomeText;
    QPushButton *continueButton;
    QLabel *gameDescription;
    QLabel *controlDescription;

    void setupUi(QDialog *welcomeScreen)
    {
        if (welcomeScreen->objectName().isEmpty())
            welcomeScreen->setObjectName("welcomeScreen");
        welcomeScreen->resize(400, 400);
        welcomeText = new QLabel(welcomeScreen);
        welcomeText->setObjectName("welcomeText");
        welcomeText->setGeometry(QRect(160, 130, 151, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Ravie")});
        font.setPointSize(18);
        welcomeText->setFont(font);
        continueButton = new QPushButton(welcomeScreen);
        continueButton->setObjectName("continueButton");
        continueButton->setGeometry(QRect(290, 370, 80, 24));
        gameDescription = new QLabel(welcomeScreen);
        gameDescription->setObjectName("gameDescription");
        gameDescription->setGeometry(QRect(30, 40, 341, 211));
        gameDescription->setWordWrap(true);
        controlDescription = new QLabel(welcomeScreen);
        controlDescription->setObjectName("controlDescription");
        controlDescription->setGeometry(QRect(30, 10, 341, 361));
        controlDescription->setWordWrap(true);

        retranslateUi(welcomeScreen);

        QMetaObject::connectSlotsByName(welcomeScreen);
    } // setupUi

    void retranslateUi(QDialog *welcomeScreen)
    {
        welcomeScreen->setWindowTitle(QCoreApplication::translate("welcomeScreen", "Welcome!", nullptr));
        welcomeText->setText(QCoreApplication::translate("welcomeScreen", "Welcome!", nullptr));
        continueButton->setText(QCoreApplication::translate("welcomeScreen", "Continue", nullptr));
        gameDescription->setText(QCoreApplication::translate("welcomeScreen", "Welcome to Untitled Logic Gate Game!\n"
"This game aims to teach you about basic digital logic.\n"
"Digital logic consists of connecting inputs and outputs. In between them is a series of gates that manipulate the inputs into the desired outputs. A 1 represents an active input, while a 0 represents an inactive input. An \342\200\234on\342\200\235 input will be light green, while an \"off\" input will be dark red.\n"
"\n"
"In this game you will have to use logic gates to manipulate inputs to give the desired output.\n"
"\n"
"Good Luck! ", nullptr));
        controlDescription->setText(QCoreApplication::translate("welcomeScreen", "<html><head/><body><p>To operate our game:</p><p>Click on one of the buttons on the top right to select a gate, and drag it into the box.</p><p>Click on one of the input \342\200\230+\342\200\231 buttons, and drag to to a gate button to connect an input to a gate.</p><p>To connect a gate to an output, click on a \342\200\230+\342\200\231 button on the right side of the gate and drag to an output.</p><p>To delete a gate, right click on it, while you do not have it selected.  To delete an existing connection, click on both of the input/output ports it connects.</p><p>To delete an existing connection, drag the same connection again and it will dissapear.</p><p>For each level, we will give instructions/tips, but the main thing you should look at is the truth table.</p><p>It will show you what input combinations, manipulated by your gates, should yield which outputs. For example, you will have to figure out what gates will make a 0, 0 input yield a 1 output.</p><p><br/></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class welcomeScreen: public Ui_welcomeScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMESCREEN_H
