/********************************************************************************
** Form generated from reading UI file 'vlcplayer.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VLCPLAYER_H
#define UI_VLCPLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VlcPlayer
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QListView *listView;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit;
    QSlider *horizontalSlider;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *local;
    QSpacerItem *horizontalSpacer;
    QPushButton *playorpause;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *stop;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *mute;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *fullscreen;
    QSpacerItem *horizontalSpacer_7;
    QLineEdit *lineEdit_3;
    QSlider *horizontalSlider_2;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *lineEdit_4;

    void setupUi(QWidget *VlcPlayer)
    {
        if (VlcPlayer->objectName().isEmpty())
            VlcPlayer->setObjectName(QString::fromUtf8("VlcPlayer"));
        VlcPlayer->resize(800, 600);
        verticalLayout = new QVBoxLayout(VlcPlayer);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widget = new QWidget(VlcPlayer);
        widget->setObjectName(QString::fromUtf8("widget"));

        horizontalLayout->addWidget(widget);

        listView = new QListView(VlcPlayer);
        listView->setObjectName(QString::fromUtf8("listView"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listView->sizePolicy().hasHeightForWidth());
        listView->setSizePolicy(sizePolicy);
        listView->setMinimumSize(QSize(120, 0));
        listView->setMaximumSize(QSize(120, 16777215));

        horizontalLayout->addWidget(listView);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lineEdit = new QLineEdit(VlcPlayer);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);
        lineEdit->setMinimumSize(QSize(60, 0));
        lineEdit->setMaximumSize(QSize(60, 16777215));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);"));
        lineEdit->setFrame(false);
        lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEdit);

        horizontalSlider = new QSlider(VlcPlayer);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(horizontalSlider->sizePolicy().hasHeightForWidth());
        horizontalSlider->setSizePolicy(sizePolicy2);
        horizontalSlider->setMinimumSize(QSize(0, 12));
        horizontalSlider->setMaximumSize(QSize(16777215, 12));
        horizontalSlider->setPageStep(1);
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSlider);

        lineEdit_2 = new QLineEdit(VlcPlayer);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        sizePolicy1.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy1);
        lineEdit_2->setMinimumSize(QSize(60, 0));
        lineEdit_2->setMaximumSize(QSize(60, 16777215));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);"));
        lineEdit_2->setFrame(false);
        lineEdit_2->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        local = new QPushButton(VlcPlayer);
        local->setObjectName(QString::fromUtf8("local"));

        horizontalLayout_3->addWidget(local);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        playorpause = new QPushButton(VlcPlayer);
        playorpause->setObjectName(QString::fromUtf8("playorpause"));

        horizontalLayout_3->addWidget(playorpause);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        stop = new QPushButton(VlcPlayer);
        stop->setObjectName(QString::fromUtf8("stop"));

        horizontalLayout_3->addWidget(stop);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        mute = new QPushButton(VlcPlayer);
        mute->setObjectName(QString::fromUtf8("mute"));

        horizontalLayout_3->addWidget(mute);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        fullscreen = new QPushButton(VlcPlayer);
        fullscreen->setObjectName(QString::fromUtf8("fullscreen"));

        horizontalLayout_3->addWidget(fullscreen);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        lineEdit_3 = new QLineEdit(VlcPlayer);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setMinimumSize(QSize(30, 0));
        lineEdit_3->setMaximumSize(QSize(30, 16777215));
        lineEdit_3->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);"));
        lineEdit_3->setFrame(false);
        lineEdit_3->setReadOnly(true);

        horizontalLayout_3->addWidget(lineEdit_3);

        horizontalSlider_2 = new QSlider(VlcPlayer);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setMinimumSize(QSize(150, 12));
        horizontalSlider_2->setMaximumSize(QSize(150, 12));
        horizontalSlider_2->setPageStep(10);
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(horizontalSlider_2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_3);

        lineEdit_4 = new QLineEdit(VlcPlayer);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);"));
        lineEdit_4->setFrame(false);
        lineEdit_4->setReadOnly(true);

        verticalLayout->addWidget(lineEdit_4);


        retranslateUi(VlcPlayer);

        QMetaObject::connectSlotsByName(VlcPlayer);
    } // setupUi

    void retranslateUi(QWidget *VlcPlayer)
    {
        VlcPlayer->setWindowTitle(QApplication::translate("VlcPlayer", "VlcPlayer", nullptr));
        local->setText(QApplication::translate("VlcPlayer", "\346\211\223\345\274\200", nullptr));
        playorpause->setText(QApplication::translate("VlcPlayer", "\346\222\255\346\224\276/\346\232\202\345\201\234", nullptr));
        stop->setText(QApplication::translate("VlcPlayer", "\345\201\234\346\255\242", nullptr));
        mute->setText(QApplication::translate("VlcPlayer", "\351\235\231\351\237\263", nullptr));
        fullscreen->setText(QApplication::translate("VlcPlayer", "\345\205\250\345\261\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VlcPlayer: public Ui_VlcPlayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VLCPLAYER_H
