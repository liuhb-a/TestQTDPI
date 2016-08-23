#include "BasicDlg.h"
#include "windowsdpiscale.h"
#include <QDebug>

BasicDlg::BasicDlg(QWidget *parent) :
    QDialog(parent)
{
    qDebug()<<"Parent";
}

int BasicDlg::exec()
{
    updateSizeOnDPIChange();
    return QDialog::exec();
}

void BasicDlg::updateSizeOnDPIChange()
{
#ifdef Q_OS_WIN
    float fScaleX = windowsDpiScale_x();
    float fScaleY = windowsDpiScale_y();
    setFixedHeight(height() * fScaleY);
    setFixedWidth(width() * fScaleX);
#endif
}

void BasicDlg::show()
{
    updateSizeOnDPIChange();
    QDialog::show();
}
