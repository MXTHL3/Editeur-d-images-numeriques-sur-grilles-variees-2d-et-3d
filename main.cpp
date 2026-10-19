#include "main_window.h"

#include <QApplication>

int main() {
    QApplication app(argc, argv);
    MainWindow main_window;
    main_window.show();
    return app.exec();
}