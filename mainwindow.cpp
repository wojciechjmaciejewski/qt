#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_3_clicked()
{
ui->textBrowser->clear();
ui->textBrowser->append("Witaj po raz drugi");
}

void MainWindow::on_pushButton_2_clicked()
{
   text = ui->textEdit->toPlainText();
   ui->textBrowser->clear();

   ui->textBrowser->append("Witaj "+text);
}

void MainWindow::on_radioButton_toggled(bool checked)
{
       ui->textBrowser->setTextColor((Qt::red));
}

void MainWindow::on_radioButton_2_toggled(bool checked)
{
       ui->textBrowser->setTextColor((Qt::green));
}

void MainWindow::on_radioButton_3_toggled(bool checked)
{
       ui->textBrowser->setTextColor((Qt::blue));
}

void MainWindow::on_verticalSlider_valueChanged(int value)
{
    if(value>50)
    {

        text = ui->textEdit->toPlainText();
        ui->textBrowser->clear();

        ui->textBrowser->append("Cześć "+text);
    }
    if(value>80)
    {
        text = ui->textEdit->toPlainText();
        ui->textBrowser->clear();

        ui->textBrowser->append("Dzień dobry "+text);
    }
}
