/********************************************************************************
** Form generated from reading UI file 'SpeedParameterWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPEEDPARAMETERWINDOW_H
#define UI_SPEEDPARAMETERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_change_speed_pattern_parameters
{
public:
    QSplitter *splitter_9;
    QPushButton *pushButton;
    QPushButton *add_new_pattern;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *desired_speed;

    void setupUi(QDialog *change_speed_pattern_parameters)
    {
        if (change_speed_pattern_parameters->objectName().isEmpty())
            change_speed_pattern_parameters->setObjectName("change_speed_pattern_parameters");
        change_speed_pattern_parameters->resize(274, 163);
        splitter_9 = new QSplitter(change_speed_pattern_parameters);
        splitter_9->setObjectName("splitter_9");
        splitter_9->setGeometry(QRect(120, 110, 141, 31));
        splitter_9->setOrientation(Qt::Horizontal);
        pushButton = new QPushButton(splitter_9);
        pushButton->setObjectName("pushButton");
        splitter_9->addWidget(pushButton);
        add_new_pattern = new QPushButton(splitter_9);
        add_new_pattern->setObjectName("add_new_pattern");
        splitter_9->addWidget(add_new_pattern);
        verticalLayoutWidget = new QWidget(change_speed_pattern_parameters);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(20, 20, 221, 51));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label);

        desired_speed = new QLineEdit(verticalLayoutWidget);
        desired_speed->setObjectName("desired_speed");

        horizontalLayout->addWidget(desired_speed);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(change_speed_pattern_parameters);
        QObject::connect(pushButton, &QPushButton::clicked, change_speed_pattern_parameters, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(change_speed_pattern_parameters);
    } // setupUi

    void retranslateUi(QDialog *change_speed_pattern_parameters)
    {
        change_speed_pattern_parameters->setWindowTitle(QCoreApplication::translate("change_speed_pattern_parameters", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("change_speed_pattern_parameters", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        add_new_pattern->setText(QCoreApplication::translate("change_speed_pattern_parameters", "\320\237\321\200\320\270\320\275\321\217\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("change_speed_pattern_parameters", "\320\226\320\265\320\273\320\260\320\265\320\274\320\260\321\217 \321\201\320\272\320\276\321\200\320\276\321\201\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class change_speed_pattern_parameters: public Ui_change_speed_pattern_parameters {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPEEDPARAMETERWINDOW_H
