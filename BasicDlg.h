#ifndef BASICDLG_H
#define BASICDLG_H

#include <QDialog>

class BasicDlg : public QDialog
{
    Q_OBJECT
public:
    explicit BasicDlg(QWidget *parent = 0);

    int exec();

protected:
    void updateSizeOnDPIChange();

public Q_SLOTS:
    void show();

public slots:

};

#endif // BASICDLG_H
