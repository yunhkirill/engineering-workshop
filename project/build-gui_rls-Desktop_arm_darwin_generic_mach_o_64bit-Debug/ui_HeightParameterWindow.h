/********************************************************************************
** Form generated from reading UI file 'HeightParameterWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEIGHTPARAMETERWINDOW_H
#define UI_HEIGHTPARAMETERWINDOW_H

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

class Ui_change_height_pattern_parameters
{
public:
    QSplitter *splitter_9;
    QPushButton *pushButton;
    QPushButton *add_new_pattern;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *height_difference;

    void setupUi(QDialog *change_height_pattern_parameters)
    {
        if (change_height_pattern_parameters->objectName().isEmpty())
            change_height_pattern_parameters->setObjectName("change_height_pattern_parameters");
        change_height_pattern_parameters->resize(292, 161);
        splitter_9 = new QSplitter(change_height_pattern_parameters);
        splitter_9->setObjectName("splitter_9");
        splitter_9->setGeometry(QRect(140, 110, 141, 31));
        splitter_9->setOrientation(Qt::Horizontal);
        pushButton = new QPushButton(splitter_9);
        pushButton->setObjectName("pushButton");
        splitter_9->addWidget(pushButton);
        add_new_pattern = new QPushButton(splitter_9);
        add_new_pattern->setObjectName("add_new_pattern");
        splitter_9->addWidget(add_new_pattern);
        verticalLayoutWidget = new QWidget(change_height_pattern_parameters);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(30, 20, 231, 51));
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

        height_difference = new QLineEdit(verticalLayoutWidget);
        height_difference->setObjectName("height_difference");

        horizontalLayout->addWidget(height_difference);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(change_height_pattern_parameters);
        QObject::connect(pushButton, &QPushButton::clicked, change_height_pattern_parameters, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(change_height_pattern_parameters);
    } // setupUi

    void retranslateUi(QDialog *change_height_pattern_parameters)
    {
        change_height_pattern_parameters->setWindowTitle(QCoreApplication::translate("change_height_pattern_parameters", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("change_height_pattern_parameters", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        add_new_pattern->setText(QCoreApplication::translate("change_height_pattern_parameters", "\320\237\321\200\320\270\320\275\321\217\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("change_height_pattern_parameters", "\320\230\320\267\320\274\320\265\320\275\320\265\320\275\320\270\320\265 \320\262\321\213\321\201\320\276\321\202\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class change_height_pattern_parameters: public Ui_change_height_pattern_parameters {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEIGHTPARAMETERWINDOW_H
