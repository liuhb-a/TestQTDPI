#include <QLabel>
#include <QGroupBox>
#include <QComboBox>
#include <QVBoxLayout>
#include <QGridLayout>
#include <QPushButton>
#include <QRadioButton>
#include <QDialogButtonBox>

#include "TestTempDlg.h"

#include <QDebug>

TestTempDlg::TestTempDlg(QWidget *parent) :
    BasicDlg(parent)
{
    initUI();
    qDebug()<<"children";
    updateSizeOnDPIChange();
}

void TestTempDlg::initUI()
{
    setWindowTitle(tr("GPS_SetCalcCost"));
    setWindowFlags(Qt::Window | Qt::WindowCloseButtonHint);

    // 创建布局
    QGridLayout *pGridLayout = new QGridLayout();
    pGridLayout->setSpacing(10);

    QGroupBox *pGrbCalcStyle = new QGroupBox(this);
    pGrbCalcStyle->setTitle(tr("GPS_MultiCalcCost"));

    // "单专业"单选创建
    QRadioButton *pRdbSingleTrade = new QRadioButton(this);
    // GPS_SingleTradeCalcCost="单专业取费"
    pRdbSingleTrade->setText(tr("GPS_SingleTradeCalcCost"));

    // "多专业"单选创建
    QRadioButton *pRdbMultileTrade = new QRadioButton(this);
    // GPS_MultiTradeCalcCost="多专业取费"
    pRdbMultileTrade->setText(tr("GPS_MultiTradeCalcCost"));


    // 水平布局"单专业"、"多专业",添加到GroupBox
    QGridLayout *pGrlCalcStyle = new QGridLayout(pGrbCalcStyle);
    pGrlCalcStyle->addWidget(pRdbSingleTrade, 0, 0, 1, 1);
    pGrlCalcStyle->addWidget(pRdbMultileTrade, 0, 1, 1, 1);

    // 添加取费方式到gridlayout
    pGridLayout->addWidget(pGrbCalcStyle, 0, 0, 1, 3);

    // 创建默认取费专业列表框
    // GPS_DefaultTrade="默认取费专业:"
    QLabel *pLblDefaultTrade = new QLabel(tr("GPS_DefaultTrade"), this);
    QComboBox *pCmbDefaultTrade = new QComboBox(this);

    // 添加默认取费专业到gridlayout
    pGridLayout->addWidget(pLblDefaultTrade, 1, 0, 1, 1);
    pGridLayout->addWidget(pCmbDefaultTrade, 1, 1, 1, 2);

    QDialogButtonBox *pButtonBox = new QDialogButtonBox(this);
    pButtonBox->setOrientation(Qt::Horizontal);

    QPushButton *pBtnOk = pButtonBox->addButton(tr("GPS_OK"), QDialogButtonBox::AcceptRole);
    pBtnOk->setObjectName("m_pBtnOk");
    QPushButton *pBtnCancel = pButtonBox->addButton(tr("GPS_Cancel"), QDialogButtonBox::RejectRole);
    pBtnCancel->setObjectName("m_pBtnCancel");

    QVBoxLayout *vLayout = new QVBoxLayout;
    vLayout->addLayout(pGridLayout);
    vLayout->addWidget(pButtonBox);

    setLayout(vLayout);

    setFixedSize(300, 130);
}
