/********************************************************************************
** Form generated from reading UI file 'reversal_pattern_parameters.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REVERSAL_PATTERN_PARAMETERS_H
#define UI_REVERSAL_PATTERN_PARAMETERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_reversal_pattern_parameters
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *radius;
    QSplitter *splitter_9;
    QPushButton *pushButton;
    QPushButton *add_new_pattern;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *radius_2;
    QSplitter *splitter_10;
    QPushButton *pushButton_2;
    QPushButton *add_new_pattern_2;

    void setupUi(QWidget *reversal_pattern_parameters)
    {
        if (reversal_pattern_parameters->objectName().isEmpty())
            reversal_pattern_parameters->setObjectName("reversal_pattern_parameters");
        reversal_pattern_parameters->setEnabled(true);
        reversal_pattern_parameters->resize(232, 167);
        reversal_pattern_parameters->setStyleSheet(QString::fromUtf8(""));
        verticalLayoutWidget = new QWidget(reversal_pattern_parameters);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(30, 30, 171, 51));
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

        radius = new QLineEdit(verticalLayoutWidget);
        radius->setObjectName("radius");

        horizontalLayout->addWidget(radius);


        verticalLayout->addLayout(horizontalLayout);

        splitter_9 = new QSplitter(reversal_pattern_parameters);
        splitter_9->setObjectName("splitter_9");
        splitter_9->setGeometry(QRect(80, 120, 141, 31));
        splitter_9->setOrientation(Qt::Horizontal);
        pushButton = new QPushButton(splitter_9);
        pushButton->setObjectName("pushButton");
        splitter_9->addWidget(pushButton);
        add_new_pattern = new QPushButton(splitter_9);
        add_new_pattern->setObjectName("add_new_pattern");
        splitter_9->addWidget(add_new_pattern);
        verticalLayoutWidget_2 = new QWidget(reversal_pattern_parameters);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(50, 50, 171, 51));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName("label_2");
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label_2);

        radius_2 = new QLineEdit(verticalLayoutWidget_2);
        radius_2->setObjectName("radius_2");

        horizontalLayout_2->addWidget(radius_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        splitter_10 = new QSplitter(reversal_pattern_parameters);
        splitter_10->setObjectName("splitter_10");
        splitter_10->setGeometry(QRect(100, 140, 141, 31));
        splitter_10->setOrientation(Qt::Horizontal);
        pushButton_2 = new QPushButton(splitter_10);
        pushButton_2->setObjectName("pushButton_2");
        splitter_10->addWidget(pushButton_2);
        add_new_pattern_2 = new QPushButton(splitter_10);
        add_new_pattern_2->setObjectName("add_new_pattern_2");
        splitter_10->addWidget(add_new_pattern_2);

        retranslateUi(reversal_pattern_parameters);

        QMetaObject::connectSlotsByName(reversal_pattern_parameters);
    } // setupUi

    void retranslateUi(QWidget *reversal_pattern_parameters)
    {
        reversal_pattern_parameters->setWindowTitle(QCoreApplication::translate("reversal_pattern_parameters", "Form", nullptr));
        label->setText(QCoreApplication::translate("reversal_pattern_parameters", "\320\240\320\260\320\264\320\270\321\203\321\201", nullptr));
        pushButton->setText(QCoreApplication::translate("reversal_pattern_parameters", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        add_new_pattern->setText(QCoreApplication::translate("reversal_pattern_parameters", "\320\237\321\200\320\270\320\275\321\217\321\202\321\214", nullptr));
        label_2->setText(QCoreApplication::translate("reversal_pattern_parameters", "\320\240\320\260\320\264\320\270\321\203\321\201", nullptr));
        pushButton_2->setText(QCoreApplication::translate("reversal_pattern_parameters", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        add_new_pattern_2->setText(QCoreApplication::translate("reversal_pattern_parameters", "\320\237\321\200\320\270\320\275\321\217\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class reversal_pattern_parameters: public Ui_reversal_pattern_parameters {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REVERSAL_PATTERN_PARAMETERS_H
