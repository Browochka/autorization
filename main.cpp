#include "autorization.h"
#include "main_window.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "firstprojec_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
    MainWindow w;
    Autorization autorization;
    QObject::connect(&w, &MainWindow::on_pushButton_clicked, [&autorization]() {
        autorization.show();  // Открываем второе окно
    });
    w.show();
    return a.exec();
}
