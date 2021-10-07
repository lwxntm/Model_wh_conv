#include "dialog.h"
#include "ui_dialog.h"
void Dialog::on_wf_changed(QString) {
  bool ok = false;
  uint feetNum = ui->lineEditFeet->text().toUInt(&ok);
  if (!ok)
    feetNum = 0;
  uint inchNum = ui->lineEditInches->text().toUInt(&ok);
  if (!ok)
    inchNum = 0;
  auto cmNum = (feetNum * 12 + inchNum) * 2.54;
  ui->lineEditCm->setText(QString::number(cmNum));
}

void Dialog::on_h_changed(QString) {
  bool ok = false;
  uint lbs = ui->lineEditLbs->text().toUInt(&ok);
  if (!ok)
    lbs = 0;
  auto kgs = lbs * 0.45359237;
  ui->lineEditKg->setText(QString::number(kgs));
}

Dialog::Dialog(QWidget *parent) : QDialog(parent), ui(new Ui::Dialog) {
  ui->setupUi(this);
  iniSIGNALSLOTS();
}

Dialog::~Dialog()
{
  delete ui;
}

void Dialog::iniSIGNALSLOTS() {
  connect(ui->lineEditFeet, SIGNAL(textChanged(QString)), this,
          SLOT(on_wf_changed(QString)));
  connect(ui->lineEditInches, SIGNAL(textChanged(QString)), this,
          SLOT(on_wf_changed(QString)));
  connect(ui->lineEditLbs, SIGNAL(textChanged(QString)), this,
          SLOT(on_h_changed(QString)));
}
