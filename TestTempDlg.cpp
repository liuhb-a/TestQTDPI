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

    // ��������
    QGridLayout *pGridLayout = new QGridLayout();
    pGridLayout->setSpacing(10);

    QGroupBox *pGrbCalcStyle = new QGroupBox(this);
    pGrbCalcStyle->setTitle(tr("GPS_MultiCalcCost"));

    // "��רҵ"��ѡ����
    QRadioButton *pRdbSingleTrade = new QRadioButton(this);
    // GPS_SingleTradeCalcCost="��רҵȡ��"
    pRdbSingleTrade->setText(tr("GPS_SingleTradeCalcCost"));

    // "��רҵ"��ѡ����
    QRadioButton *pRdbMultileTrade = new QRadioButton(this);
    // GPS_MultiTradeCalcCost="��רҵȡ��"
    pRdbMultileTrade->setText(tr("GPS_MultiTradeCalcCost"));


    // ˮƽ����"��רҵ"��"��רҵ",��ӵ�GroupBox
    QGridLayout *pGrlCalcStyle = new QGridLayout(pGrbCalcStyle);
    pGrlCalcStyle->addWidget(pRdbSingleTrade, 0, 0, 1, 1);
    pGrlCalcStyle->addWidget(pRdbMultileTrade, 0, 1, 1, 1);

    // ���ȡ�ѷ�ʽ��gridlayout
    pGridLayout->addWidget(pGrbCalcStyle, 0, 0, 1, 3);

    // ����Ĭ��ȡ��רҵ�б��
    // GPS_DefaultTrade="Ĭ��ȡ��רҵ:"
    QLabel *pLblDefaultTrade = new QLabel(tr("GPS_DefaultTrade"), this);
    QComboBox *pCmbDefaultTrade = new QComboBox(this);

    // ���Ĭ��ȡ��רҵ��gridlayout
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
