/********************************************************************************
** Form generated from reading UI file 'kinematicProperties.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KINEMATICPROPERTIES_H
#define UI_KINEMATICPROPERTIES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KinematicProperties
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QPushButton *updateButton;

    void setupUi(QWidget *KinematicProperties)
    {
        if (KinematicProperties->objectName().isEmpty())
            KinematicProperties->setObjectName(QStringLiteral("KinematicProperties"));
        KinematicProperties->resize(271, 80);
        gridLayout = new QGridLayout(KinematicProperties);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(KinematicProperties);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(KinematicProperties);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout->addWidget(comboBox);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        updateButton = new QPushButton(KinematicProperties);
        updateButton->setObjectName(QStringLiteral("updateButton"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(updateButton->sizePolicy().hasHeightForWidth());
        updateButton->setSizePolicy(sizePolicy);
        updateButton->setMaximumSize(QSize(200, 16777215));

        gridLayout->addWidget(updateButton, 1, 0, 1, 1, Qt::AlignHCenter);


        retranslateUi(KinematicProperties);

        QMetaObject::connectSlotsByName(KinematicProperties);
    } // setupUi

    void retranslateUi(QWidget *KinematicProperties)
    {
        KinematicProperties->setWindowTitle(QApplication::translate("KinematicProperties", "Kinematic", Q_NULLPTR));
        label->setText(QApplication::translate("KinematicProperties", "Kinematic type", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("KinematicProperties", "Skid steer (Ideal)", Q_NULLPTR)
         << QApplication::translate("KinematicProperties", "Omnidirectional", Q_NULLPTR)
        );
        updateButton->setText(QApplication::translate("KinematicProperties", "Update", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class KinematicProperties: public Ui_KinematicProperties {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KINEMATICPROPERTIES_H
