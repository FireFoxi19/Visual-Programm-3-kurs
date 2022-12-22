#include "hint.h"
#include "ui_hint.h"

hint::hint(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::hint)
{
    ui->setupUi(this);
}

hint::~hint()
{
    delete ui;
}
