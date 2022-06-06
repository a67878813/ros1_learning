/********************************************************************************
** Form generated from reading UI file 'sonarVisualization.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SONARVISUALIZATION_H
#define UI_SONARVISUALIZATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sonarVisualization
{
public:
    QProgressBar *sonarDistBar;
    QLabel *sonarDist;
    QLabel *sonarMaxDist;
    QLabel *sonarMinDist;

    void setupUi(QWidget *sonarVisualization)
    {
        if (sonarVisualization->objectName().isEmpty())
            sonarVisualization->setObjectName(QStringLiteral("sonarVisualization"));
        sonarVisualization->resize(313, 65);
        sonarDistBar = new QProgressBar(sonarVisualization);
        sonarDistBar->setObjectName(QStringLiteral("sonarDistBar"));
        sonarDistBar->setGeometry(QRect(10, 10, 291, 21));
        sonarDistBar->setMaximum(1000);
        sonarDistBar->setValue(0);
        sonarDistBar->setTextVisible(true);
        sonarDist = new QLabel(sonarVisualization);
        sonarDist->setObjectName(QStringLiteral("sonarDist"));
        sonarDist->setGeometry(QRect(50, 40, 211, 20));
        sonarDist->setFrameShape(QFrame::StyledPanel);
        sonarDist->setFrameShadow(QFrame::Plain);
        sonarDist->setTextFormat(Qt::AutoText);
        sonarDist->setAlignment(Qt::AlignCenter);
        sonarMaxDist = new QLabel(sonarVisualization);
        sonarMaxDist->setObjectName(QStringLiteral("sonarMaxDist"));
        sonarMaxDist->setGeometry(QRect(260, 40, 51, 20));
        sonarMaxDist->setFrameShape(QFrame::StyledPanel);
        sonarMaxDist->setFrameShadow(QFrame::Plain);
        sonarMaxDist->setTextFormat(Qt::AutoText);
        sonarMaxDist->setAlignment(Qt::AlignCenter);
        sonarMinDist = new QLabel(sonarVisualization);
        sonarMinDist->setObjectName(QStringLiteral("sonarMinDist"));
        sonarMinDist->setGeometry(QRect(0, 40, 51, 20));
        sonarMinDist->setFrameShape(QFrame::StyledPanel);
        sonarMinDist->setFrameShadow(QFrame::Plain);
        sonarMinDist->setTextFormat(Qt::AutoText);
        sonarMinDist->setAlignment(Qt::AlignCenter);

        retranslateUi(sonarVisualization);

        QMetaObject::connectSlotsByName(sonarVisualization);
    } // setupUi

    void retranslateUi(QWidget *sonarVisualization)
    {
        sonarVisualization->setWindowTitle(QApplication::translate("sonarVisualization", "Form", Q_NULLPTR));
        sonarDistBar->setFormat(QString());
        sonarDist->setText(QApplication::translate("sonarVisualization", "0 m", Q_NULLPTR));
        sonarMaxDist->setText(QApplication::translate("sonarVisualization", "0 m", Q_NULLPTR));
        sonarMinDist->setText(QApplication::translate("sonarVisualization", "0 m", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class sonarVisualization: public Ui_sonarVisualization {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SONARVISUALIZATION_H
