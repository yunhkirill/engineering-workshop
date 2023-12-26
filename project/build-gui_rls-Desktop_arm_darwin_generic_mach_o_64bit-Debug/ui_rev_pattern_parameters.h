/********************************************************************************
** Form generated from reading UI file 'rev_pattern_parameters.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REV_PATTERN_PARAMETERS_H
#define UI_REV_PATTERN_PARAMETERS_H

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

class Ui_rev_pattern_parameters
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

    void setupUi(QDialog *rev_pattern_parameters)
    {
        if (rev_pattern_parameters->objectName().isEmpty())
            rev_pattern_parameters->setObjectName("rev_pattern_parameters");
        rev_pattern_parameters->resize(233, 166);
        verticalLayoutWidget = new QWidget(rev_pattern_parameters);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(30, 20, 171, 51));
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

        splitter_9 = new QSplitter(rev_pattern_parameters);
        splitter_9->setObjectName("splitter_9");
        splitter_9->setGeometry(QRect(80, 110, 141, 31));
        splitter_9->setOrientation(Qt::Horizontal);
        pushButton = new QPushButton(splitter_9);
        pushButton->setObjectName("pushButton");
        splitter_9->addWidget(pushButton);
        add_new_pattern = new QPushButton(splitter_9);
        add_new_pattern->setObjectName("add_new_pattern");
        splitter_9->addWidget(add_new_pattern);

        retranslateUi(rev_pattern_parameters);
        QObject::connect(pushButton, &QPushButton::clicked, rev_pattern_parameters, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(rev_pattern_parameters);
    } // setupUi

    void retranslateUi(QDialog *rev_pattern_parameters)
    {
        rev_pattern_parameters->setWindowTitle(QCoreApplication::translate("rev_pattern_parameters", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("rev_pattern_parameters", "\320\240\320\260\320\264\320\270\321\203\321\201", nullptr));
        pushButton->setText(QCoreApplication::translate("rev_pattern_parameters", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        add_new_pattern->setText(QCoreApplication::translate("rev_pattern_parameters", "\320\237\321\200\320\270\320\275\321\217\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rev_pattern_parameters: public Ui_rev_pattern_parameters {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REV_PATTERN_PARAMETERS_H
