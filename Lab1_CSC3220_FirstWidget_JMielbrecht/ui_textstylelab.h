/********************************************************************************
** Form generated from reading UI file 'textstylelab.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTSTYLELAB_H
#define UI_TEXTSTYLELAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TextStyleLab
{
public:
    QWidget *centralwidget;
    QPushButton *updateButton;
    QPlainTextEdit *inputText;
    QLabel *promptLabel;
    QLabel *targetLabel;
    QLabel *BkgLabel;
    QPushButton *bkgRedButton;
    QPushButton *bkgBlueButton;
    QPushButton *FgdRedButton;
    QLabel *FgdLabel;
    QPushButton *FgdBlueButton;
    QPushButton *alignLeftButton;
    QPushButton *alignCenterButton;
    QPushButton *alignRightButton;
    QPushButton *endButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TextStyleLab)
    {
        if (TextStyleLab->objectName().isEmpty())
            TextStyleLab->setObjectName(QString::fromUtf8("TextStyleLab"));
        TextStyleLab->resize(525, 315);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(85, 85, 85, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(127, 127, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(106, 106, 106, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(42, 42, 42, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(56, 56, 56, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        QBrush brush8(QColor(0, 0, 0, 128));
        brush8.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        QBrush brush9(QColor(255, 255, 255, 128));
        brush9.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        TextStyleLab->setPalette(palette);
        centralwidget = new QWidget(TextStyleLab);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        updateButton = new QPushButton(centralwidget);
        updateButton->setObjectName(QString::fromUtf8("updateButton"));
        updateButton->setGeometry(QRect(390, 20, 111, 31));
        inputText = new QPlainTextEdit(centralwidget);
        inputText->setObjectName(QString::fromUtf8("inputText"));
        inputText->setGeometry(QRect(130, 20, 251, 31));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        inputText->setPalette(palette1);
        promptLabel = new QLabel(centralwidget);
        promptLabel->setObjectName(QString::fromUtf8("promptLabel"));
        promptLabel->setGeometry(QRect(20, 25, 111, 21));
        targetLabel = new QLabel(centralwidget);
        targetLabel->setObjectName(QString::fromUtf8("targetLabel"));
        targetLabel->setGeometry(QRect(130, 110, 251, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Comic Sans MS"));
        font.setPointSize(15);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        targetLabel->setFont(font);
        targetLabel->setFrameShape(QFrame::Box);
        BkgLabel = new QLabel(centralwidget);
        BkgLabel->setObjectName(QString::fromUtf8("BkgLabel"));
        BkgLabel->setGeometry(QRect(20, 80, 111, 21));
        bkgRedButton = new QPushButton(centralwidget);
        bkgRedButton->setObjectName(QString::fromUtf8("bkgRedButton"));
        bkgRedButton->setGeometry(QRect(130, 70, 91, 31));
        bkgBlueButton = new QPushButton(centralwidget);
        bkgBlueButton->setObjectName(QString::fromUtf8("bkgBlueButton"));
        bkgBlueButton->setGeometry(QRect(290, 70, 91, 31));
        FgdRedButton = new QPushButton(centralwidget);
        FgdRedButton->setObjectName(QString::fromUtf8("FgdRedButton"));
        FgdRedButton->setGeometry(QRect(130, 160, 91, 31));
        FgdLabel = new QLabel(centralwidget);
        FgdLabel->setObjectName(QString::fromUtf8("FgdLabel"));
        FgdLabel->setGeometry(QRect(20, 190, 111, 21));
        FgdBlueButton = new QPushButton(centralwidget);
        FgdBlueButton->setObjectName(QString::fromUtf8("FgdBlueButton"));
        FgdBlueButton->setGeometry(QRect(290, 160, 91, 31));
        alignLeftButton = new QPushButton(centralwidget);
        alignLeftButton->setObjectName(QString::fromUtf8("alignLeftButton"));
        alignLeftButton->setGeometry(QRect(40, 230, 81, 31));
        alignCenterButton = new QPushButton(centralwidget);
        alignCenterButton->setObjectName(QString::fromUtf8("alignCenterButton"));
        alignCenterButton->setGeometry(QRect(130, 230, 81, 31));
        alignRightButton = new QPushButton(centralwidget);
        alignRightButton->setObjectName(QString::fromUtf8("alignRightButton"));
        alignRightButton->setGeometry(QRect(220, 230, 81, 31));
        endButton = new QPushButton(centralwidget);
        endButton->setObjectName(QString::fromUtf8("endButton"));
        endButton->setGeometry(QRect(390, 230, 111, 31));
        TextStyleLab->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TextStyleLab);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 525, 22));
        TextStyleLab->setMenuBar(menubar);
        statusbar = new QStatusBar(TextStyleLab);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        TextStyleLab->setStatusBar(statusbar);

        retranslateUi(TextStyleLab);

        QMetaObject::connectSlotsByName(TextStyleLab);
    } // setupUi

    void retranslateUi(QMainWindow *TextStyleLab)
    {
        TextStyleLab->setWindowTitle(QApplication::translate("TextStyleLab", "TextStyleLab", nullptr));
        updateButton->setText(QApplication::translate("TextStyleLab", "Update", nullptr));
        promptLabel->setText(QApplication::translate("TextStyleLab", "Enter Your Message:", nullptr));
        targetLabel->setText(QApplication::translate("TextStyleLab", "Hi There!", nullptr));
        BkgLabel->setText(QApplication::translate("TextStyleLab", "Background:", nullptr));
        bkgRedButton->setText(QApplication::translate("TextStyleLab", "Red", nullptr));
        bkgBlueButton->setText(QApplication::translate("TextStyleLab", "Blue", nullptr));
        FgdRedButton->setText(QApplication::translate("TextStyleLab", "Red", nullptr));
        FgdLabel->setText(QApplication::translate("TextStyleLab", "Foreground", nullptr));
        FgdBlueButton->setText(QApplication::translate("TextStyleLab", "Blue", nullptr));
        alignLeftButton->setText(QApplication::translate("TextStyleLab", "Left", nullptr));
        alignCenterButton->setText(QApplication::translate("TextStyleLab", "Center", nullptr));
        alignRightButton->setText(QApplication::translate("TextStyleLab", "Right", nullptr));
        endButton->setText(QApplication::translate("TextStyleLab", "End", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TextStyleLab: public Ui_TextStyleLab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTSTYLELAB_H
