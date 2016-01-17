#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QUrl>
#include<QDesktopServices>
#include <QProcess>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setStyleSheet("border-image:url(C:/Users/shubhamnagaria/Desktop/10.jpg);");
    ui->pushButton->setStyleSheet("border-image:url(C:/Users/shubhamnagaria/Desktop/2.png);");
    ui->pushButton_2->setStyleSheet("border-image:url(C:/Users/shubhamnagaria/Desktop/4.png);");
    ui->pushButton_3->setStyleSheet("border-image:url(C:/Users/shubhamnagaria/Desktop/3.png);");
    ui->pushButton_4->setStyleSheet("border-image:url(C:/Users/shubhamnagaria/Desktop/5.png);");
    ui->pushButton_5->setStyleSheet("border-image:url(C:/Users/shubhamnagaria/Desktop/6.png);");
    ui->pushButton_6->setStyleSheet("border-image:url(C:/Users/shubhamnagaria/Desktop/7.png);");
    ui->centralWidget->setStyleSheet("color:#fff;");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
QDesktopServices::openUrl(QUrl("http://www.codechef.com", QUrl::TolerantMode));
}

void MainWindow::on_pushButton_2_clicked()
{
    QDesktopServices::openUrl(QUrl("http://www.topcoder.com", QUrl::TolerantMode));

}

void MainWindow::on_pushButton_6_clicked()
{
    QProcess *proc = new QProcess(this);
        proc->start("C:\\Qt\\Tools\\QtCreator\\bin\\qtcreator.exe");
}

void MainWindow::on_pushButton_3_clicked()
{
QDesktopServices::openUrl(QUrl("http://www.codeforces.com", QUrl::TolerantMode));
}

void MainWindow::on_pushButton_5_clicked()
{
    QProcess *proc = new QProcess(this);
        proc->start("C:\\""Program Files\\""Sublime Text 2\\""sublime_text.exe");
}

void MainWindow::on_pushButton_4_clicked()
{
    QDesktopServices::openUrl(QUrl("http://www.spoj.com", QUrl::TolerantMode));

}
