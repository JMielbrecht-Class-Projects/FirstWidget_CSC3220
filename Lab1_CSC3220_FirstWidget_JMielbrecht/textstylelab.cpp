#include "textstylelab.h"
#include "ui_textstylelab.h"

TextStyleLab::TextStyleLab(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TextStyleLab)
{
    ui->setupUi(this);
}

TextStyleLab::~TextStyleLab()
{
    delete ui;
}


void TextStyleLab::on_updateButton_clicked()
{
    QString message = ui->inputText->toPlainText();

    //Challenge: update the target text only if the message is valid (i.e. length > 0)
    if (message.length() > 0){
        ui->targetLabel->setText(message);
    }
}

void TextStyleLab::on_FgdRedButton_clicked()
{
    QPalette palette = ui->targetLabel->palette();
    palette.setColor(QPalette::WindowText, Qt::red);

    ui->targetLabel->setPalette(palette);
}

void TextStyleLab::on_FgdBlueButton_clicked()
{
    QPalette palette = ui->targetLabel->palette();
    palette.setColor(QPalette::WindowText, Qt::blue);

    ui->targetLabel->setPalette(palette);
}

void TextStyleLab::on_bkgRedButton_clicked()
{
    QPalette palette = ui->targetLabel->palette();
    palette.setColor(QPalette::Window, Qt::red);

    ui->targetLabel->setAutoFillBackground(true);
    ui->targetLabel->setPalette(palette);
}

void TextStyleLab::on_bkgBlueButton_clicked()
{
    QPalette palette = ui->targetLabel->palette();
    palette.setColor(QPalette::Window, Qt::blue);

    ui->targetLabel->setAutoFillBackground(true);
    ui->targetLabel->setPalette(palette);
}

void TextStyleLab::on_alignLeftButton_clicked()
{
    ui->targetLabel->setAlignment(Qt::AlignLeft);
}

void TextStyleLab::on_alignCenterButton_clicked()
{
    ui->targetLabel->setAlignment(Qt::AlignHCenter);
}

void TextStyleLab::on_alignRightButton_clicked()
{
    ui->targetLabel->setAlignment(Qt::AlignRight);
}

void TextStyleLab::on_endButton_clicked()
{
    QApplication::quit();
}
