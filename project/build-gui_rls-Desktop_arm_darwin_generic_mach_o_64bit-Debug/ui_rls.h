/********************************************************************************
** Form generated from reading UI file 'rls.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RLS_H
#define UI_RLS_H

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

class Ui_RLS
{
public:
    QSplitter *splitter_9;
    QPushButton *pushButton;
    QPushButton *add_signals_timer;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *signals_timer;

    void setupUi(QDialog *RLS)
    {
        if (RLS->objectName().isEmpty())
            RLS->setObjectName("RLS");
        RLS->resize(384, 161);
        splitter_9 = new QSplitter(RLS);
        splitter_9->setObjectName("splitter_9");
        splitter_9->setGeometry(QRect(220, 110, 141, 31));
        splitter_9->setOrientation(Qt::Horizontal);
        pushButton = new QPushButton(splitter_9);
        pushButton->setObjectName("pushButton");
        splitter_9->addWidget(pushButton);
        add_signals_timer = new QPushButton(splitter_9);
        add_signals_timer->setObjectName("add_signals_timer");
        splitter_9->addWidget(add_signals_timer);
        verticalLayoutWidget = new QWidget(RLS);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(30, 20, 321, 51));
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

        signals_timer = new QLineEdit(verticalLayoutWidget);
        signals_timer->setObjectName("signals_timer");

        horizontalLayout->addWidget(signals_timer);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(RLS);
        QObject::connect(pushButton, &QPushButton::clicked, RLS, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(RLS);
    } // setupUi

    void retranslateUi(QDialog *RLS)
    {
        RLS->setWindowTitle(QCoreApplication::translate("RLS", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("RLS", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        add_signals_timer->setText(QCoreApplication::translate("RLS", "\320\237\321\200\320\270\320\275\321\217\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("RLS", "\320\237\321\200\320\276\320\274\320\265\320\266\321\203\321\202\320\276\320\272 \320\262\321\213\320\277\321\203\321\201\320\272\320\260 \321\201\320\270\320\263\320\275\320\260\320\273\320\276\320\262", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RLS: public Ui_RLS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RLS_H
