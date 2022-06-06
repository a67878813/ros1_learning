/********************************************************************************
** Form generated from reading UI file 'robotFootprint.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROBOTFOOTPRINT_H
#define UI_ROBOTFOOTPRINT_H

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

class Ui_RobotFootprint
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLineEdit *robotFootprintX;
    QLabel *label_3;
    QLabel *label_2;
    QLineEdit *robotFootprintY;
    QHBoxLayout *horizontalLayout;
    QPushButton *updateButton;
    QPushButton *refresh_robot;

    void setupUi(QWidget *RobotFootprint)
    {
        if (RobotFootprint->objectName().isEmpty())
            RobotFootprint->setObjectName(QStringLiteral("RobotFootprint"));
        RobotFootprint->resize(348, 126);
        gridLayout_2 = new QGridLayout(RobotFootprint);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        robotFootprintX = new QLineEdit(RobotFootprint);
        robotFootprintX->setObjectName(QStringLiteral("robotFootprintX"));

        gridLayout->addWidget(robotFootprintX, 0, 1, 1, 1);

        label_3 = new QLabel(RobotFootprint);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_2 = new QLabel(RobotFootprint);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        robotFootprintY = new QLineEdit(RobotFootprint);
        robotFootprintY->setObjectName(QStringLiteral("robotFootprintY"));

        gridLayout->addWidget(robotFootprintY, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        updateButton = new QPushButton(RobotFootprint);
        updateButton->setObjectName(QStringLiteral("updateButton"));
        updateButton->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(updateButton);

        refresh_robot = new QPushButton(RobotFootprint);
        refresh_robot->setObjectName(QStringLiteral("refresh_robot"));
        refresh_robot->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(refresh_robot);


        gridLayout_2->addLayout(horizontalLayout, 2, 0, 1, 1);

        QWidget::setTabOrder(robotFootprintX, robotFootprintY);

        retranslateUi(RobotFootprint);

        QMetaObject::connectSlotsByName(RobotFootprint);
    } // setupUi

    void retranslateUi(QWidget *RobotFootprint)
    {
        RobotFootprint->setWindowTitle(QApplication::translate("RobotFootprint", "Robot", Q_NULLPTR));
        robotFootprintX->setText(QApplication::translate("RobotFootprint", "0.0", Q_NULLPTR));
        label_3->setText(QApplication::translate("RobotFootprint", "y", Q_NULLPTR));
        label_2->setText(QApplication::translate("RobotFootprint", "x", Q_NULLPTR));
        robotFootprintY->setText(QApplication::translate("RobotFootprint", "0.0", Q_NULLPTR));
        updateButton->setText(QApplication::translate("RobotFootprint", "Update", Q_NULLPTR));
        refresh_robot->setText(QApplication::translate("RobotFootprint", "Refresh", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RobotFootprint: public Ui_RobotFootprint {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROBOTFOOTPRINT_H
