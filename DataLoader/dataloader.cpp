#include "dataloader.h"
#include "ui_dataloader.h"

DataLoader::DataLoader(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::DataLoader)
{
    ui->setupUi(this);
}

DataLoader::~DataLoader()
{
    delete ui;
}

