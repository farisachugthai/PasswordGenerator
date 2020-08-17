/********************************************************************************
** Form generated from reading UI file 'passwordgeneratorwindowhGoyeo.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef PASSWORDGENERATORWINDOWHGOYEO_H
#define PASSWORDGENERATORWINDOWHGOYEO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *topLabelFrame;
    QLabel *topLabel;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *labelPasswordLength;
    QLineEdit *textPasswordLength;
    QLabel *labelSymbols;
    QCheckBox *checkSymbols;
    QLabel *labelNumbers;
    QCheckBox *checkNumbers;
    QLabel *labelLowercase;
    QCheckBox *checkLowercase;
    QLabel *labelUppercase;
    QCheckBox *checkUppercase;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalButtons;
    QLineEdit *textPassword;
    QPushButton *buttonGenerate;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(850, 378);
        MainWindow->setStyleSheet(QString::fromUtf8("font: 10pt \"DroidSansMono NF\";"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        topLabelFrame = new QFrame(centralwidget);
        topLabelFrame->setObjectName(QString::fromUtf8("topLabelFrame"));
        topLabelFrame->setGeometry(QRect(10, 10, 830, 80));
        topLabelFrame->setFrameShape(QFrame::StyledPanel);
        topLabelFrame->setFrameShadow(QFrame::Raised);
        topLabel = new QLabel(topLabelFrame);
        topLabel->setObjectName(QString::fromUtf8("topLabel"));
        topLabel->setGeometry(QRect(0, 5, 821, 71));
        QFont font;
        font.setFamily(QString::fromUtf8("DroidSansMono NF"));
        font.setPointSize(26);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        topLabel->setFont(font);
        topLabel->setStyleSheet(QString::fromUtf8("font: 26pt \"DroidSansMono NF\";"));
        topLabel->setAlignment(Qt::AlignCenter);
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(220, 110, 303, 107));
        QFont font1;
        font1.setFamily(QString::fromUtf8("DroidSansMono NF"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        formLayoutWidget->setFont(font1);
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        labelPasswordLength = new QLabel(formLayoutWidget);
        labelPasswordLength->setObjectName(QString::fromUtf8("labelPasswordLength"));
        labelPasswordLength->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, labelPasswordLength);

        textPasswordLength = new QLineEdit(formLayoutWidget);
        textPasswordLength->setObjectName(QString::fromUtf8("textPasswordLength"));
        textPasswordLength->setFont(font1);
        textPasswordLength->setMaxLength(2);

        formLayout->setWidget(0, QFormLayout::FieldRole, textPasswordLength);

        labelSymbols = new QLabel(formLayoutWidget);
        labelSymbols->setObjectName(QString::fromUtf8("labelSymbols"));
        labelSymbols->setFont(font1);

        formLayout->setWidget(1, QFormLayout::LabelRole, labelSymbols);

        checkSymbols = new QCheckBox(formLayoutWidget);
        checkSymbols->setObjectName(QString::fromUtf8("checkSymbols"));

        formLayout->setWidget(1, QFormLayout::FieldRole, checkSymbols);

        labelNumbers = new QLabel(formLayoutWidget);
        labelNumbers->setObjectName(QString::fromUtf8("labelNumbers"));
        labelNumbers->setFont(font1);

        formLayout->setWidget(2, QFormLayout::LabelRole, labelNumbers);

        checkNumbers = new QCheckBox(formLayoutWidget);
        checkNumbers->setObjectName(QString::fromUtf8("checkNumbers"));

        formLayout->setWidget(2, QFormLayout::FieldRole, checkNumbers);

        labelLowercase = new QLabel(formLayoutWidget);
        labelLowercase->setObjectName(QString::fromUtf8("labelLowercase"));
        labelLowercase->setFont(font1);

        formLayout->setWidget(3, QFormLayout::LabelRole, labelLowercase);

        checkLowercase = new QCheckBox(formLayoutWidget);
        checkLowercase->setObjectName(QString::fromUtf8("checkLowercase"));

        formLayout->setWidget(3, QFormLayout::FieldRole, checkLowercase);

        labelUppercase = new QLabel(formLayoutWidget);
        labelUppercase->setObjectName(QString::fromUtf8("labelUppercase"));
        labelUppercase->setFont(font1);

        formLayout->setWidget(4, QFormLayout::LabelRole, labelUppercase);

        checkUppercase = new QCheckBox(formLayoutWidget);
        checkUppercase->setObjectName(QString::fromUtf8("checkUppercase"));

        formLayout->setWidget(4, QFormLayout::FieldRole, checkUppercase);

        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(159, 280, 551, 89));
        verticalButtons = new QVBoxLayout(verticalLayoutWidget);
        verticalButtons->setObjectName(QString::fromUtf8("verticalButtons"));
        verticalButtons->setContentsMargins(0, 0, 0, 0);
        textPassword = new QLineEdit(verticalLayoutWidget);
        textPassword->setObjectName(QString::fromUtf8("textPassword"));
        textPassword->setReadOnly(true);

        verticalButtons->addWidget(textPassword);

        buttonGenerate = new QPushButton(verticalLayoutWidget);
        buttonGenerate->setObjectName(QString::fromUtf8("buttonGenerate"));

        verticalButtons->addWidget(buttonGenerate);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "PasswordGeneratorWindow", nullptr));
        topLabel->setText(QApplication::translate("MainWindow", "Password Generator", nullptr));
        labelPasswordLength->setText(QApplication::translate("MainWindow", "Password Length:", nullptr));
        labelSymbols->setText(QApplication::translate("MainWindow", "Symbols:", nullptr));
        checkSymbols->setText(QString());
        labelNumbers->setText(QApplication::translate("MainWindow", "Numbers:", nullptr));
        checkNumbers->setText(QString());
        labelLowercase->setText(QApplication::translate("MainWindow", "Lowercase:", nullptr));
        checkLowercase->setText(QString());
        labelUppercase->setText(QApplication::translate("MainWindow", "Uppercase:", nullptr));
        checkUppercase->setText(QString());
        buttonGenerate->setText(QApplication::translate("MainWindow", "Generate Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // PASSWORDGENERATORWINDOWHGOYEO_H
