#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "FeeSettingDlg.h"
#include "TestTempDlg.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    FeeSettingDlg *pDlg = new FeeSettingDlg(this);
    pDlg->show();

    TestTempDlg *pTempDlg =  new TestTempDlg(this);
    pTempDlg->show();
}
