#include "ihm_post.h"
#include "ui_ihm_post.h"

ihm_post::ihm_post(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ihm_post)
{
    ui->setupUi(this);
}

ihm_post::~ihm_post()
{
    delete ui;
}
