#include "mainwindow.h"
#include <QApplication>

// 1.0.1

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  MainWindow w;
  w.show();

  return a.exec();
}
