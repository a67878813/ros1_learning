/********************************************************************************
** Form generated from reading UI file 'co2SensorProperties.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CO2SENSORPROPERTIES_H
#define UI_CO2SENSORPROPERTIES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CO2SensorProperties
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLineEdit *maxDistance;
    QLineEdit *y_;
    QLineEdit *x_;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label;
    QLineEdit *orientation;
    QLabel *label_7;
    QLineEdit *frequency;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *refreshButton;

    void setupUi(QWidget *CO2SensorProperties)
    {
        if (CO2SensorProperties->objectName().isEmpty())
            CO2SensorProperties->setObjectName(QStringLiteral("CO2SensorProperties"));
        CO2SensorProperties->resize(289, 214);
        gridLayout_2 = new QGridLayout(CO2SensorProperties);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        maxDistance = new QLineEdit(CO2SensorProperties);
        maxDistance->setObjectName(QStringLiteral("maxDistance"));

        gridLayout->addWidget(maxDistance, 1, 1, 1, 1);

        y_ = new QLineEdit(CO2SensorProperties);
        y_->setObjectName(QStringLiteral("y_"));
        y_->setReadOnly(false);

        gridLayout->addWidget(y_, 3, 1, 1, 1);

        x_ = new QLineEdit(CO2SensorProperties);
        x_->setObjectName(QStringLiteral("x_"));
        x_->setReadOnly(false);

        gridLayout->addWidget(x_, 2, 1, 1, 1);

        label_5 = new QLabel(CO2SensorProperties);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        label_3 = new QLabel(CO2SensorProperties);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_4 = new QLabel(CO2SensorProperties);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        label = new QLabel(CO2SensorProperties);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        orientation = new QLineEdit(CO2SensorProperties);
        orientation->setObjectName(QStringLiteral("orientation"));

        gridLayout->addWidget(orientation, 0, 1, 1, 1);

        label_7 = new QLabel(CO2SensorProperties);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 4, 0, 1, 1);

        frequency = new QLineEdit(CO2SensorProperties);
        frequency->setObjectName(QStringLiteral("frequency"));

        gridLayout->addWidget(frequency, 4, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(CO2SensorProperties);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(pushButton);

        refreshButton = new QPushButton(CO2SensorProperties);
        refreshButton->setObjectName(QStringLiteral("refreshButton"));
        refreshButton->setMinimumSize(QSize(100, 0));
        refreshButton->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(refreshButton);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);

        QWidget::setTabOrder(orientation, maxDistance);
        QWidget::setTabOrder(maxDistance, x_);
        QWidget::setTabOrder(x_, y_);
        QWidget::setTabOrder(y_, frequency);
        QWidget::setTabOrder(frequency, pushButton);
        QWidget::setTabOrder(pushButton, refreshButton);

        retranslateUi(CO2SensorProperties);

        QMetaObject::connectSlotsByName(CO2SensorProperties);
    } // setupUi

    void retranslateUi(QWidget *CO2SensorProperties)
    {
        CO2SensorProperties->setWindowTitle(QApplication::translate("CO2SensorProperties", "CO2 sensor", Q_NULLPTR));
        maxDistance->setText(QApplication::translate("CO2SensorProperties", "3.0", Q_NULLPTR));
        y_->setText(QApplication::translate("CO2SensorProperties", "0.0", Q_NULLPTR));
        x_->setText(QApplication::translate("CO2SensorProperties", "0.0", Q_NULLPTR));
        label_5->setText(QApplication::translate("CO2SensorProperties", "Translation - y (m)", Q_NULLPTR));
        label_3->setText(QApplication::translate("CO2SensorProperties", "Max distance (m)", Q_NULLPTR));
        label_4->setText(QApplication::translate("CO2SensorProperties", "Translation - x (m)", Q_NULLPTR));
        label->setText(QApplication::translate("CO2SensorProperties", "Orientation", Q_NULLPTR));
        label_7->setText(QApplication::translate("CO2SensorProperties", "Frequency", Q_NULLPTR));
        pushButton->setText(QApplication::translate("CO2SensorProperties", "Update", Q_NULLPTR));
        refreshButton->setText(QApplication::translate("CO2SensorProperties", "Refresh", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CO2SensorProperties: public Ui_CO2SensorProperties {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CO2SENSORPROPERTIES_H
