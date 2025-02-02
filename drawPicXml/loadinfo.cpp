#include "loadinfo.h"
#include "ui_loadinfo.h"


loadInfo::loadInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loadInfo)
{
    ui->setupUi(this);
	setWindowTitle("Draw Picture");
	setWindowIcon(QIcon(":/icon/title"));

}

void loadInfo::setStartPointX(const QString &startPointX)
{
    ui->lineEditStartPointX->setText(startPointX);
}
void loadInfo::setStartPointY(const QString &startPointY)
{
    ui->lineEditStartPointY->setText(startPointY);
}
void loadInfo::setEndPointX(const QString &endPointX)
{
    ui->lineEditEndPointX->setText(endPointX);
}
void loadInfo::setEndPointY(const QString &endPointY)
{
    ui->lineEditEndPointY->setText(endPointY);
}

void loadInfo::resetComboBox()
{
    ui->comboBoxDifficult->setCurrentIndex(0);
    ui->comboBoxName->setCurrentIndex(0);
    ui->comboBoxPose->setCurrentIndex(0);
    ui->comboBoxTruncated->setCurrentIndex(0);
}

QString loadInfo::getObjName()
{
    return ui->comboBoxName->currentText();
}
QString	loadInfo::getObjPose()
{
    return ui->comboBoxPose->currentText();
}
QString	loadInfo::getTruncated()
{
    return ui->comboBoxTruncated->currentText();
}
QString	loadInfo::getDifficult()
{
    return ui->comboBoxDifficult->currentText();
}
QString	loadInfo::getStartPointX()
{
    return ui->lineEditStartPointX->text();
}
QString	loadInfo::getStartPointY()
{
    return ui->lineEditStartPointY->text();
}
QString	loadInfo::getEndPointX()
{
    return ui->lineEditEndPointX->text();
}
QString	loadInfo::getEndPointY()
{
    return ui->lineEditEndPointY->text();
}


loadInfo::~loadInfo()
{
    delete ui;
}
