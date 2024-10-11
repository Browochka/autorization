#ifndef Autorization_H
#define Autorization_H

#include <QDialog>
namespace Ui {
class Autorization;
}

class Autorization: public QDialog
{
public:
    Autorization(QWidget *parent = nullptr);
    ~Autorization();
private slots:
    void on_pushButton_clicked();

private:
    Ui::Autorization *ui;
};


#endif // Autorization_H
