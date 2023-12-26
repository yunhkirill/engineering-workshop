/********************************************************************************
** Form generated from reading UI file 'object_parameters.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBJECT_PARAMETERS_H
#define UI_OBJECT_PARAMETERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_object_parameters
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QSplitter *splitter_4;
    QSplitter *splitter;
    QLabel *label;
    QLineEdit *obj_coord_x;
    QSplitter *splitter_2;
    QLabel *label_2;
    QLineEdit *obj_coord_y;
    QSplitter *splitter_3;
    QLabel *label_3;
    QLineEdit *obj_coord_z;
    QGroupBox *groupBox_2;
    QSplitter *splitter_5;
    QSplitter *splitter_6;
    QLabel *label_7;
    QLineEdit *obj_speed_x;
    QSplitter *splitter_7;
    QLabel *label_8;
    QLineEdit *obj_speed_y;
    QSplitter *splitter_8;
    QLabel *label_9;
    QLineEdit *obj_speed_z;
    QGroupBox *groupBox_3;
    QSplitter *splitter_10;
    QSplitter *splitter_11;
    QLabel *label_10;
    QLineEdit *obj_accel_x;
    QSplitter *splitter_12;
    QLabel *label_11;
    QLineEdit *obj_accel_y;
    QSplitter *splitter_13;
    QLabel *label_12;
    QLineEdit *obj_accel_z;
    QSplitter *splitter_9;
    QPushButton *pushButton;
    QPushButton *create_new_obj;

    void setupUi(QDialog *object_parameters)
    {
        if (object_parameters->objectName().isEmpty())
            object_parameters->setObjectName("object_parameters");
        object_parameters->resize(424, 548);
        layoutWidget = new QWidget(object_parameters);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 20, 381, 481));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName("groupBox");
        groupBox->setMaximumSize(QSize(16777215, 140));
        groupBox->setFlat(false);
        splitter_4 = new QSplitter(groupBox);
        splitter_4->setObjectName("splitter_4");
        splitter_4->setGeometry(QRect(20, 40, 341, 77));
        splitter_4->setOrientation(Qt::Vertical);
        splitter = new QSplitter(splitter_4);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        label = new QLabel(splitter);
        label->setObjectName("label");
        splitter->addWidget(label);
        obj_coord_x = new QLineEdit(splitter);
        obj_coord_x->setObjectName("obj_coord_x");
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(obj_coord_x->sizePolicy().hasHeightForWidth());
        obj_coord_x->setSizePolicy(sizePolicy);
        obj_coord_x->setMaximumSize(QSize(150, 16777215));
        splitter->addWidget(obj_coord_x);
        splitter_4->addWidget(splitter);
        splitter_2 = new QSplitter(splitter_4);
        splitter_2->setObjectName("splitter_2");
        splitter_2->setOrientation(Qt::Horizontal);
        label_2 = new QLabel(splitter_2);
        label_2->setObjectName("label_2");
        splitter_2->addWidget(label_2);
        obj_coord_y = new QLineEdit(splitter_2);
        obj_coord_y->setObjectName("obj_coord_y");
        sizePolicy.setHeightForWidth(obj_coord_y->sizePolicy().hasHeightForWidth());
        obj_coord_y->setSizePolicy(sizePolicy);
        obj_coord_y->setMaximumSize(QSize(150, 16777215));
        splitter_2->addWidget(obj_coord_y);
        splitter_4->addWidget(splitter_2);
        splitter_3 = new QSplitter(splitter_4);
        splitter_3->setObjectName("splitter_3");
        splitter_3->setOrientation(Qt::Horizontal);
        label_3 = new QLabel(splitter_3);
        label_3->setObjectName("label_3");
        splitter_3->addWidget(label_3);
        obj_coord_z = new QLineEdit(splitter_3);
        obj_coord_z->setObjectName("obj_coord_z");
        sizePolicy.setHeightForWidth(obj_coord_z->sizePolicy().hasHeightForWidth());
        obj_coord_z->setSizePolicy(sizePolicy);
        obj_coord_z->setMaximumSize(QSize(150, 16777215));
        splitter_3->addWidget(obj_coord_z);
        splitter_4->addWidget(splitter_3);

        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(layoutWidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setMaximumSize(QSize(16777215, 140));
        groupBox_2->setFlat(false);
        splitter_5 = new QSplitter(groupBox_2);
        splitter_5->setObjectName("splitter_5");
        splitter_5->setGeometry(QRect(20, 40, 341, 77));
        splitter_5->setOrientation(Qt::Vertical);
        splitter_6 = new QSplitter(splitter_5);
        splitter_6->setObjectName("splitter_6");
        splitter_6->setOrientation(Qt::Horizontal);
        label_7 = new QLabel(splitter_6);
        label_7->setObjectName("label_7");
        splitter_6->addWidget(label_7);
        obj_speed_x = new QLineEdit(splitter_6);
        obj_speed_x->setObjectName("obj_speed_x");
        sizePolicy.setHeightForWidth(obj_speed_x->sizePolicy().hasHeightForWidth());
        obj_speed_x->setSizePolicy(sizePolicy);
        obj_speed_x->setMaximumSize(QSize(150, 16777215));
        splitter_6->addWidget(obj_speed_x);
        splitter_5->addWidget(splitter_6);
        splitter_7 = new QSplitter(splitter_5);
        splitter_7->setObjectName("splitter_7");
        splitter_7->setOrientation(Qt::Horizontal);
        label_8 = new QLabel(splitter_7);
        label_8->setObjectName("label_8");
        splitter_7->addWidget(label_8);
        obj_speed_y = new QLineEdit(splitter_7);
        obj_speed_y->setObjectName("obj_speed_y");
        sizePolicy.setHeightForWidth(obj_speed_y->sizePolicy().hasHeightForWidth());
        obj_speed_y->setSizePolicy(sizePolicy);
        obj_speed_y->setMaximumSize(QSize(150, 16777215));
        splitter_7->addWidget(obj_speed_y);
        splitter_5->addWidget(splitter_7);
        splitter_8 = new QSplitter(splitter_5);
        splitter_8->setObjectName("splitter_8");
        splitter_8->setOrientation(Qt::Horizontal);
        label_9 = new QLabel(splitter_8);
        label_9->setObjectName("label_9");
        splitter_8->addWidget(label_9);
        obj_speed_z = new QLineEdit(splitter_8);
        obj_speed_z->setObjectName("obj_speed_z");
        sizePolicy.setHeightForWidth(obj_speed_z->sizePolicy().hasHeightForWidth());
        obj_speed_z->setSizePolicy(sizePolicy);
        obj_speed_z->setMaximumSize(QSize(150, 16777215));
        splitter_8->addWidget(obj_speed_z);
        splitter_5->addWidget(splitter_8);

        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(layoutWidget);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setMaximumSize(QSize(16777215, 140));
        groupBox_3->setFlat(false);
        splitter_10 = new QSplitter(groupBox_3);
        splitter_10->setObjectName("splitter_10");
        splitter_10->setGeometry(QRect(20, 40, 341, 77));
        splitter_10->setOrientation(Qt::Vertical);
        splitter_11 = new QSplitter(splitter_10);
        splitter_11->setObjectName("splitter_11");
        splitter_11->setOrientation(Qt::Horizontal);
        label_10 = new QLabel(splitter_11);
        label_10->setObjectName("label_10");
        splitter_11->addWidget(label_10);
        obj_accel_x = new QLineEdit(splitter_11);
        obj_accel_x->setObjectName("obj_accel_x");
        sizePolicy.setHeightForWidth(obj_accel_x->sizePolicy().hasHeightForWidth());
        obj_accel_x->setSizePolicy(sizePolicy);
        obj_accel_x->setMaximumSize(QSize(150, 16777215));
        splitter_11->addWidget(obj_accel_x);
        splitter_10->addWidget(splitter_11);
        splitter_12 = new QSplitter(splitter_10);
        splitter_12->setObjectName("splitter_12");
        splitter_12->setOrientation(Qt::Horizontal);
        label_11 = new QLabel(splitter_12);
        label_11->setObjectName("label_11");
        splitter_12->addWidget(label_11);
        obj_accel_y = new QLineEdit(splitter_12);
        obj_accel_y->setObjectName("obj_accel_y");
        sizePolicy.setHeightForWidth(obj_accel_y->sizePolicy().hasHeightForWidth());
        obj_accel_y->setSizePolicy(sizePolicy);
        obj_accel_y->setMaximumSize(QSize(150, 16777215));
        splitter_12->addWidget(obj_accel_y);
        splitter_10->addWidget(splitter_12);
        splitter_13 = new QSplitter(splitter_10);
        splitter_13->setObjectName("splitter_13");
        splitter_13->setOrientation(Qt::Horizontal);
        label_12 = new QLabel(splitter_13);
        label_12->setObjectName("label_12");
        splitter_13->addWidget(label_12);
        obj_accel_z = new QLineEdit(splitter_13);
        obj_accel_z->setObjectName("obj_accel_z");
        sizePolicy.setHeightForWidth(obj_accel_z->sizePolicy().hasHeightForWidth());
        obj_accel_z->setSizePolicy(sizePolicy);
        obj_accel_z->setMaximumSize(QSize(150, 16777215));
        splitter_13->addWidget(obj_accel_z);
        splitter_10->addWidget(splitter_13);

        verticalLayout->addWidget(groupBox_3);

        splitter_9 = new QSplitter(object_parameters);
        splitter_9->setObjectName("splitter_9");
        splitter_9->setGeometry(QRect(200, 510, 200, 32));
        splitter_9->setOrientation(Qt::Horizontal);
        pushButton = new QPushButton(splitter_9);
        pushButton->setObjectName("pushButton");
        splitter_9->addWidget(pushButton);
        create_new_obj = new QPushButton(splitter_9);
        create_new_obj->setObjectName("create_new_obj");
        splitter_9->addWidget(create_new_obj);

        retranslateUi(object_parameters);
        QObject::connect(pushButton, &QPushButton::clicked, object_parameters, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(object_parameters);
    } // setupUi

    void retranslateUi(QDialog *object_parameters)
    {
        object_parameters->setWindowTitle(QCoreApplication::translate("object_parameters", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("object_parameters", "\320\235\320\260\321\207\320\260\320\273\321\214\320\275\321\213\320\265 \320\272\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\321\213", nullptr));
        label->setText(QCoreApplication::translate("object_parameters", "\320\232\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\320\260 \320\277\320\276 \320\276\321\201\320\270 X", nullptr));
        label_2->setText(QCoreApplication::translate("object_parameters", "\320\232\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\320\260 \320\277\320\276 \320\276\321\201\320\270 Y", nullptr));
        label_3->setText(QCoreApplication::translate("object_parameters", "\320\232\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\320\260 \320\277\320\276 \320\276\321\201\320\270 Z", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("object_parameters", "\320\232\320\276\320\274\320\277\320\276\320\275\320\265\320\275\321\202\321\213 \320\262\320\265\320\272\321\202\320\276\321\200\320\260 \321\201\320\272\320\276\321\200\320\276\321\201\321\202\320\270", nullptr));
        label_7->setText(QCoreApplication::translate("object_parameters", "\320\232\320\276\321\215\321\204\321\204\320\270\321\206\320\270\320\265\320\275\321\202 X", nullptr));
        label_8->setText(QCoreApplication::translate("object_parameters", "\320\232\320\276\321\215\321\204\321\204\320\270\321\206\320\270\320\265\320\275\321\202 Y", nullptr));
        label_9->setText(QCoreApplication::translate("object_parameters", "\320\232\320\276\321\215\321\204\321\204\320\270\321\206\320\270\320\265\320\275\321\202 Z", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("object_parameters", "\320\232\320\276\320\274\320\277\320\276\320\275\320\265\320\275\321\202\321\213 \320\262\320\265\320\272\321\202\320\276\321\200\320\260 \321\203\321\201\320\272\320\276\321\200\320\265\320\275\320\270\321\217", nullptr));
        label_10->setText(QCoreApplication::translate("object_parameters", "\320\232\320\276\321\215\321\204\321\204\320\270\321\206\320\270\320\265\320\275\321\202 X", nullptr));
        label_11->setText(QCoreApplication::translate("object_parameters", "\320\232\320\276\321\215\321\204\321\204\320\270\321\206\320\270\320\265\320\275\321\202 Y", nullptr));
        label_12->setText(QCoreApplication::translate("object_parameters", "\320\232\320\276\321\215\321\204\321\204\320\270\321\206\320\270\320\265\320\275\321\202 Z", nullptr));
        pushButton->setText(QCoreApplication::translate("object_parameters", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        create_new_obj->setText(QCoreApplication::translate("object_parameters", "\320\237\321\200\320\270\320\275\321\217\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class object_parameters: public Ui_object_parameters {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBJECT_PARAMETERS_H
