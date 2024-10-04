#ifndef AUTORIZATION_H
#define AUTORIZATION_H

#include <QDialog>
namespace Ui {
class autorization;
}

class autorization: public QDialog
{
public:
    autorization(QWidget *parent = nullptr);
    ~autorization();
private slots:
    void on_pushButton_clicked();

private:
    Ui::autorization *ui;
};


#endif // AUTORIZATION_H
