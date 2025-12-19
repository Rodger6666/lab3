#include "doctorview.h"
#include "ui_doctorview.h"

DocterView::DocterView(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::DocterView)
{
    ui->setupUi(this);
}

DocterView::~DocterView()
{
    delete ui;
}

