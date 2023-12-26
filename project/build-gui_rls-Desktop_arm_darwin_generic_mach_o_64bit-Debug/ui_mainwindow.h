/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GUI
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *reversal_button;
    QPushButton *change_height_button;
    QPushButton *change_speed_button;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *add_object;
    QPushButton *delete_object;
    QPushButton *RLS_param;
    QPushButton *add_signals;
    QSplitter *splitter;
    QPushButton *stop_modeling;
    QPushButton *start_modeling;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_5;
    QComboBox *comboBox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GUI)
    {
        if (GUI->objectName().isEmpty())
            GUI->setObjectName("GUI");
        GUI->resize(800, 585);
        centralwidget = new QWidget(GUI);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(20, 280, 231, 181));
        verticalLayoutWidget = new QWidget(groupBox);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(20, 30, 191, 151));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        reversal_button = new QPushButton(verticalLayoutWidget);
        reversal_button->setObjectName("reversal_button");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(reversal_button->sizePolicy().hasHeightForWidth());
        reversal_button->setSizePolicy(sizePolicy);
        reversal_button->setMaximumSize(QSize(16777215, 34));

        verticalLayout_2->addWidget(reversal_button);

        change_height_button = new QPushButton(verticalLayoutWidget);
        change_height_button->setObjectName("change_height_button");
        sizePolicy.setHeightForWidth(change_height_button->sizePolicy().hasHeightForWidth());
        change_height_button->setSizePolicy(sizePolicy);
        change_height_button->setMaximumSize(QSize(16777215, 34));

        verticalLayout_2->addWidget(change_height_button);

        change_speed_button = new QPushButton(verticalLayoutWidget);
        change_speed_button->setObjectName("change_speed_button");
        sizePolicy.setHeightForWidth(change_speed_button->sizePolicy().hasHeightForWidth());
        change_speed_button->setSizePolicy(sizePolicy);
        change_speed_button->setMaximumSize(QSize(16777215, 34));

        verticalLayout_2->addWidget(change_speed_button);

        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 30, 211, 191));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        add_object = new QPushButton(layoutWidget);
        add_object->setObjectName("add_object");
        add_object->setEnabled(true);
        sizePolicy.setHeightForWidth(add_object->sizePolicy().hasHeightForWidth());
        add_object->setSizePolicy(sizePolicy);
        add_object->setMaximumSize(QSize(16777215, 40));

        verticalLayout->addWidget(add_object);

        delete_object = new QPushButton(layoutWidget);
        delete_object->setObjectName("delete_object");
        sizePolicy.setHeightForWidth(delete_object->sizePolicy().hasHeightForWidth());
        delete_object->setSizePolicy(sizePolicy);
        delete_object->setMaximumSize(QSize(16777215, 40));

        verticalLayout->addWidget(delete_object);

        RLS_param = new QPushButton(layoutWidget);
        RLS_param->setObjectName("RLS_param");
        sizePolicy.setHeightForWidth(RLS_param->sizePolicy().hasHeightForWidth());
        RLS_param->setSizePolicy(sizePolicy);
        RLS_param->setMaximumSize(QSize(16777215, 40));

        verticalLayout->addWidget(RLS_param);

        add_signals = new QPushButton(layoutWidget);
        add_signals->setObjectName("add_signals");
        sizePolicy.setHeightForWidth(add_signals->sizePolicy().hasHeightForWidth());
        add_signals->setSizePolicy(sizePolicy);
        add_signals->setMaximumSize(QSize(16777215, 40));

        verticalLayout->addWidget(add_signals);

        splitter = new QSplitter(centralwidget);
        splitter->setObjectName("splitter");
        splitter->setGeometry(QRect(40, 480, 191, 31));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy1);
        splitter->setMaximumSize(QSize(16777215, 35));
        splitter->setOrientation(Qt::Horizontal);
        stop_modeling = new QPushButton(splitter);
        stop_modeling->setObjectName("stop_modeling");
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(stop_modeling->sizePolicy().hasHeightForWidth());
        stop_modeling->setSizePolicy(sizePolicy2);
        stop_modeling->setMaximumSize(QSize(16777215, 35));
        splitter->addWidget(stop_modeling);
        start_modeling = new QPushButton(splitter);
        start_modeling->setObjectName("start_modeling");
        sizePolicy2.setHeightForWidth(start_modeling->sizePolicy().hasHeightForWidth());
        start_modeling->setSizePolicy(sizePolicy2);
        start_modeling->setMaximumSize(QSize(16777215, 35));
        splitter->addWidget(start_modeling);
        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(290, 29, 491, 491));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(40, 230, 191, 32));
        GUI->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GUI);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        GUI->setMenuBar(menubar);
        statusbar = new QStatusBar(GUI);
        statusbar->setObjectName("statusbar");
        GUI->setStatusBar(statusbar);

        retranslateUi(GUI);

        QMetaObject::connectSlotsByName(GUI);
    } // setupUi

    void retranslateUi(QMainWindow *GUI)
    {
        GUI->setWindowTitle(QCoreApplication::translate("GUI", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("GUI", "\320\234\320\260\320\275\320\265\320\262\321\200\321\213 \320\222\320\236", nullptr));
        reversal_button->setText(QCoreApplication::translate("GUI", "\320\240\320\260\320\267\320\262\320\276\321\200\320\276\321\202", nullptr));
        change_height_button->setText(QCoreApplication::translate("GUI", "\320\230\320\267\320\274\320\265\320\275\320\265\320\275\320\270\320\265 \320\262\321\213\321\201\320\276\321\202\321\213", nullptr));
        change_speed_button->setText(QCoreApplication::translate("GUI", "\320\230\320\267\320\274\320\265\320\275\320\265\320\275\320\270\320\265 \321\201\320\272\320\276\321\200\320\276\321\201\321\202\320\270", nullptr));
        add_object->setText(QCoreApplication::translate("GUI", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\276\320\261\321\212\320\265\320\272\321\202", nullptr));
        delete_object->setText(QCoreApplication::translate("GUI", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\276\320\261\321\212\320\265\320\272\321\202", nullptr));
        RLS_param->setText(QCoreApplication::translate("GUI", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \320\240\320\233\320\241", nullptr));
        add_signals->setText(QCoreApplication::translate("GUI", "\320\222\321\213\320\277\321\203\321\201\321\202\320\270\321\202\321\214 \321\201\320\270\320\263\320\275\320\260\320\273", nullptr));
        stop_modeling->setText(QCoreApplication::translate("GUI", "\320\241\321\202\320\276\320\277", nullptr));
        start_modeling->setText(QCoreApplication::translate("GUI", "\320\241\321\202\320\260\321\200\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GUI: public Ui_GUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
