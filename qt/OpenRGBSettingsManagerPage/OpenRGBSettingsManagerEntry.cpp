#include "OpenRGBSettingsManagerEntry.h"
#include "ui_OpenRGBSettingsManagerEntry.h"
#include "ResourceManager.h"
#include "SettingsManager.h"
#include <QLabel>
#include <QVBoxLayout>
#include <QListWidget>
#include <QCheckBox>

using namespace Ui;

OpenRGBSettingsManagerEntry::OpenRGBSettingsManagerEntry(std::string settings_key, json settings_proto, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OpenRGBSettingsManagerEntryUi)
{
    key     = settings_key;
    proto   = settings_proto;
    data    = ResourceManager::get()->GetSettingsManager()->GetSettings(key);

    ui->setupUi(this);

    ui->SettingsGroupBox->setTitle(QString::fromStdString(key));

    QVBoxLayout* layout = new QVBoxLayout;
    ui->SettingsGroupBox->setLayout(layout);

    for(json::const_iterator it = proto.begin(); it != proto.end(); it++)
    {
        std::string item_key    = it.key();
        std::string name        = proto[it.key()]["name"];
        std::string type        = proto[it.key()]["type"];

        QWidget* item;

        if(type == "boolean")
        {
            item = new QCheckBox;

            ((QCheckBox*)item)->setText(QString::fromStdString(name));

            if(data.contains(item_key))
            {
                ((QCheckBox*)item)->setChecked(data[item_key]);
            }
        }

        layout->addWidget(item);
    }
}

OpenRGBSettingsManagerEntry::~OpenRGBSettingsManagerEntry()
{
    delete ui;
}

void OpenRGBSettingsManagerEntry::changeEvent(QEvent *event)
{
    if(event->type() == QEvent::LanguageChange)
    {
        ui->retranslateUi(this);
    }
}
