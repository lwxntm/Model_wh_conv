#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui {
class Dialog;
}
QT_END_NAMESPACE

class Dialog : public QDialog {
  Q_OBJECT

private slots:
  void on_wf_changed(QString);
  void on_h_changed(QString);

public:
  Dialog(QWidget *parent = nullptr);
  ~Dialog();

private:
  Ui::Dialog *ui;

  void iniSIGNALSLOTS();
};
#endif // DIALOG_H
