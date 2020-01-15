#ifndef TEXTSTYLELAB_H
#define TEXTSTYLELAB_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class TextStyleLab; }
QT_END_NAMESPACE

class TextStyleLab : public QMainWindow
{
    Q_OBJECT

public:
    TextStyleLab(QWidget *parent = nullptr);
    ~TextStyleLab();

private slots:
    void on_updateButton_clicked();

    void on_FgdRedButton_clicked();

    void on_FgdBlueButton_clicked();

    void on_bkgRedButton_clicked();

    void on_bkgBlueButton_clicked();

    void on_alignLeftButton_clicked();

    void on_alignCenterButton_clicked();

    void on_alignRightButton_clicked();

    void on_endButton_clicked();

private:
    Ui::TextStyleLab *ui;
};
#endif // TEXTSTYLELAB_H
