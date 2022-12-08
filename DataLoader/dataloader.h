#ifndef DATALOADER_H
#define DATALOADER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class DataLoader; }
QT_END_NAMESPACE

class DataLoader : public QMainWindow
{
    Q_OBJECT

public:
    DataLoader(QWidget *parent = nullptr);
    ~DataLoader();

private:
    Ui::DataLoader *ui;
};
#endif // DATALOADER_H
