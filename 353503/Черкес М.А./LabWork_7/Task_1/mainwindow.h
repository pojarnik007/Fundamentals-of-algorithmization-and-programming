#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "deque.h"

QT_BEGIN_NAMESPACE

namespace Ui {
class MainWindow;
}

QT_END_NAMESPACE

class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  explicit MainWindow(QWidget* parent = nullptr);
  ~MainWindow() override;

 private slots:
  void pushBackClicked();
  void pushFrontClicked();
  void popFrontClicked();
  void popBackClicked();
  void clearClicked();
  void emptyClicked();
  void sizeClicked();
  void taskClicked();

 private:
  Ui::MainWindow* ui;
  void displayDeque();
  Deque<int> deque;
};
#endif  // MAINWINDOW_H
