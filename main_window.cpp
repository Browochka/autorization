#include "main_window.h"
#include "./ui_main_window.h"

#include <QPushButton>
#include <QVBoxLayout>


MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    QPushButton *button = new QPushButton("Авторизация", centralWidget());
    button->setFixedSize(250,50);
    connect(button, &QPushButton::clicked, this, &MainWindow::on_pushButton_clicked);

    QVBoxLayout *layout = new QVBoxLayout();
    layout->addStretch();
    layout->addWidget(button, 0, Qt::AlignCenter);
    layout->addStretch();

    centralWidget()->setLayout(layout);
    setCentralWidget(centralWidget());

}

MainWindow::~MainWindow()
{
    delete ui;
}



