#include "autorization.h"
#include "./ui_autorization.h"
#include <QLabel>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QWidget>
#include <QPushButton>



Autorization::Autorization(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Autorization)
{
    ui->setupUi(this);




    QLabel *LabelAutoriz= new QLabel("Авторизируйтесь",this);

    QLabel *LabelLog= new QLabel("Логин:",this);
    QLineEdit *LineLog = new QLineEdit(this);
    QHBoxLayout *row1 = new QHBoxLayout;
    row1->addWidget(LabelLog);
    row1->addWidget(LineLog);

    QLineEdit *linePass = new QLineEdit(this);
    QLabel *labelPass= new QLabel("Пароль:",this);
    QHBoxLayout *row2 = new QHBoxLayout;
    row2->addWidget(labelPass);
    row2->addWidget(linePass);

    QPushButton *buttonEnd = new QPushButton("Войти", this);

    QVBoxLayout *vbox = new QVBoxLayout;
    vbox->addWidget(LabelAutoriz);
    vbox->addLayout(row1);
    vbox->addLayout(row2);
    vbox->addWidget(buttonEnd);

    QHBoxLayout *hbox = new QHBoxLayout;
    hbox->addStretch();
    hbox->addLayout(vbox);
    hbox->addStretch();
    hbox->setAlignment(Qt::AlignCenter);

    setLayout(hbox);
}
Autorization::~Autorization() {
    delete ui;
}

void Autorization::on_pushButton_clicked()
{
    //QString
}

