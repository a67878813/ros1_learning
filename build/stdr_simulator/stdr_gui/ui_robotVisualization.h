/********************************************************************************
** Form generated from reading UI file 'robotVisualization.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROBOTVISUALIZATION_H
#define UI_ROBOTVISUALIZATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_robotVisualization
{
public:
    QLabel *robotImage;
    QLabel *robotPose;
    QLabel *robotSpeeds;
    QLabel *robotPoseX;
    QLabel *robotPoseY;
    QLabel *robotPoseTheta;
    QLabel *robotSpeedLinear;
    QLabel *robotSpeedAngular;
    QLabel *robotSpeedLinearY;

    void setupUi(QWidget *robotVisualization)
    {
        if (robotVisualization->objectName().isEmpty())
            robotVisualization->setObjectName(QStringLiteral("robotVisualization"));
        robotVisualization->resize(333, 490);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(robotVisualization->sizePolicy().hasHeightForWidth());
        robotVisualization->setSizePolicy(sizePolicy);
        robotVisualization->setMinimumSize(QSize(333, 490));
        robotVisualization->setMaximumSize(QSize(333, 490));
        robotImage = new QLabel(robotVisualization);
        robotImage->setObjectName(QStringLiteral("robotImage"));
        robotImage->setGeometry(QRect(11, 12, 310, 310));
        robotImage->setMinimumSize(QSize(310, 310));
        robotImage->setMaximumSize(QSize(310, 310));
        robotImage->setFrameShape(QFrame::StyledPanel);
        robotPose = new QLabel(robotVisualization);
        robotPose->setObjectName(QStringLiteral("robotPose"));
        robotPose->setGeometry(QRect(10, 330, 311, 17));
        robotSpeeds = new QLabel(robotVisualization);
        robotSpeeds->setObjectName(QStringLiteral("robotSpeeds"));
        robotSpeeds->setGeometry(QRect(10, 411, 311, 17));
        robotPoseX = new QLabel(robotVisualization);
        robotPoseX->setObjectName(QStringLiteral("robotPoseX"));
        robotPoseX->setGeometry(QRect(10, 350, 311, 17));
        robotPoseY = new QLabel(robotVisualization);
        robotPoseY->setObjectName(QStringLiteral("robotPoseY"));
        robotPoseY->setGeometry(QRect(10, 370, 311, 17));
        robotPoseTheta = new QLabel(robotVisualization);
        robotPoseTheta->setObjectName(QStringLiteral("robotPoseTheta"));
        robotPoseTheta->setGeometry(QRect(10, 390, 311, 17));
        robotSpeedLinear = new QLabel(robotVisualization);
        robotSpeedLinear->setObjectName(QStringLiteral("robotSpeedLinear"));
        robotSpeedLinear->setGeometry(QRect(10, 430, 311, 17));
        robotSpeedAngular = new QLabel(robotVisualization);
        robotSpeedAngular->setObjectName(QStringLiteral("robotSpeedAngular"));
        robotSpeedAngular->setGeometry(QRect(10, 470, 311, 17));
        robotSpeedLinearY = new QLabel(robotVisualization);
        robotSpeedLinearY->setObjectName(QStringLiteral("robotSpeedLinearY"));
        robotSpeedLinearY->setGeometry(QRect(10, 450, 311, 17));

        retranslateUi(robotVisualization);

        QMetaObject::connectSlotsByName(robotVisualization);
    } // setupUi

    void retranslateUi(QWidget *robotVisualization)
    {
        robotVisualization->setWindowTitle(QApplication::translate("robotVisualization", "Form", Q_NULLPTR));
        robotImage->setText(QString());
        robotPose->setText(QApplication::translate("robotVisualization", "Pose [x,y,theta] : ", Q_NULLPTR));
        robotSpeeds->setText(QApplication::translate("robotVisualization", "Speeds [u,w] : ", Q_NULLPTR));
        robotPoseX->setText(QApplication::translate("robotVisualization", "x = ", Q_NULLPTR));
        robotPoseY->setText(QApplication::translate("robotVisualization", "y = ", Q_NULLPTR));
        robotPoseTheta->setText(QApplication::translate("robotVisualization", "theta = ", Q_NULLPTR));
        robotSpeedLinear->setText(QApplication::translate("robotVisualization", "u_x = ", Q_NULLPTR));
        robotSpeedAngular->setText(QApplication::translate("robotVisualization", "w = ", Q_NULLPTR));
        robotSpeedLinearY->setText(QApplication::translate("robotVisualization", "u_y = ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class robotVisualization: public Ui_robotVisualization {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROBOTVISUALIZATION_H
