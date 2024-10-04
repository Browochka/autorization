#include "autorization.h"
#include "./ui_autorization.h"
#include <QLabel>>
#include <QLineEdit>
#include <QVBoxLayout>>
#include <QWidget>
#include <QPushButton>>



autorization::autorization(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::autorization)
{
    ui->setupUi(this);




    QLabel *autorizat= new QLabel("Авторизируйтесь",this);
    QLabel *passw= new QLabel("Пароль:",this);
    QLabel *log= new QLabel("Логин:",this);


    QLineEdit *login = new QLineEdit(this);
    QLineEdit *pass = new QLineEdit(this);
    QPushButton *end = new QPushButton("Войти", this);
    QHBoxLayout *row1 = new QHBoxLayout;
    row1->addWidget(log);
    row1->addWidget(login);

    QHBoxLayout *row2 = new QHBoxLayout;
    row2->addWidget(passw);
    row2->addWidget(pass);
    QVBoxLayout *vbox = new QVBoxLayout;

    vbox->addWidget(autorizat);
    vbox->addLayout(row1);
    vbox->addLayout(row2);
    vbox->addWidget(end);
    QHBoxLayout *hbox = new QHBoxLayout;
    hbox->addStretch();

    hbox->addLayout(vbox);

    hbox->addStretch();


    hbox->setAlignment(Qt::AlignCenter);




    setLayout(hbox);



}
autorization::~autorization() {
    delete ui;
}

void autorization::on_pushButton_clicked()
{
    //QString
}

