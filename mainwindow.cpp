#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "autorization.h"
#include <QPushButton>
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QWidget *centralWidget = new QWidget(this);


    QPushButton *button = new QPushButton("Авторизация", this);



    connect(button, &QPushButton::clicked, this, &MainWindow::on_pushButton_clicked);
    QVBoxLayout *layout = new QVBoxLayout();

    layout->addStretch();
    layout->addWidget(button, 0, Qt::AlignCenter);
    layout->addStretch();

    centralWidget->setLayout(layout);


    setCentralWidget(centralWidget);
    button->setFixedSize(250,50);


}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::on_pushButton_clicked()
{
    hide();
    window = new autorization();
    window->show();
}

