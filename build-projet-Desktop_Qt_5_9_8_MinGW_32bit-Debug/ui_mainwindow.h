/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QToolBox *toolBox;
    QWidget *page;
    QTabWidget *tabWidget;
    QWidget *tab_8;
    QLabel *reference;
    QLineEdit *age;
    QLabel *type;
    QLineEdit *nom;
    QLineEdit *cin;
    QLabel *quantite;
    QLineEdit *prenom;
    QLabel *prix;
    QPushButton *ajouter;
    QLineEdit *matricule;
    QLabel *reference_4;
    QLineEdit *numcontart;
    QLabel *reference_6;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSlider *verticalSlider;
    QWidget *tab_9;
    QLabel *label_18;
    QPushButton *modifier_2;
    QLabel *type_7;
    QLineEdit *nom_4;
    QLabel *reference_8;
    QLabel *quantite_8;
    QComboBox *comboBox_3;
    QLabel *prix_7;
    QLineEdit *matricule_4;
    QLineEdit *prenom_4;
    QLineEdit *age_4;
    QLineEdit *num_contrat;
    QLabel *type_8;
    QLabel *type_11;
    QWidget *tab_10;
    QTableView *tabemployer;
    QLabel *label_31;
    QCheckBox *checkBox_2;
    QLineEdit *lineEdit_19;
    QWidget *tab_11;
    QPushButton *supprimer;
    QLabel *label_20;
    QLineEdit *sup;
    QLabel *reference_sup_4;
    QComboBox *comboBox_5;
    QPushButton *pushButton_3;
    QWidget *tab_2;
    QWidget *layoutWidget;
    QFormLayout *formLayout_3;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLineEdit *server_3;
    QLineEdit *port_3;
    QLineEdit *uname_3;
    QLineEdit *paswd_3;
    QPlainTextEdit *msg_3;
    QLineEdit *rcpt_3;
    QLineEdit *subject_3;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *exitBtn_3;
    QPushButton *sendBtn_3;
    QWidget *page_2;
    QTabWidget *tabWidget_2;
    QWidget *tab_12;
    QLabel *reference_2;
    QLineEdit *type_3;
    QLineEdit *date_fin;
    QLabel *quantite_2;
    QLineEdit *cine;
    QLabel *prix_2;
    QPushButton *ajouter_2;
    QLineEdit *date_debut;
    QLabel *reference_5;
    QLineEdit *num_conge;
    QLabel *reference_7;
    QWidget *tab_13;
    QLabel *label_19;
    QPushButton *modifier_3;
    QLabel *type_9;
    QLineEdit *nom_5;
    QLabel *reference_9;
    QLabel *quantite_9;
    QComboBox *comboBox_4;
    QLabel *prix_8;
    QLineEdit *matricule_5;
    QLineEdit *prenom_5;
    QLineEdit *age_5;
    QLabel *type_10;
    QWidget *tab_14;
    QTableView *tabconge;
    QLabel *label_32;
    QCheckBox *checkBox_3;
    QLineEdit *lineEdit_20;
    QWidget *tab_15;
    QPushButton *supprimer_2;
    QLabel *label_21;
    QLineEdit *sup_2;
    QLabel *reference_sup_5;
    QComboBox *comboBox_6;
    QWidget *tab;
    QCustomPlot *customPlot;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1124, 680);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        toolBox = new QToolBox(centralwidget);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setGeometry(QRect(10, 10, 1091, 611));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 1091, 549));
        tabWidget = new QTabWidget(page);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1041, 531));
        QFont font;
        font.setPointSize(8);
        font.setBold(true);
        font.setUnderline(false);
        font.setWeight(75);
        tabWidget->setFont(font);
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        reference = new QLabel(tab_8);
        reference->setObjectName(QStringLiteral("reference"));
        reference->setGeometry(QRect(190, 130, 111, 20));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setUnderline(false);
        font1.setWeight(75);
        reference->setFont(font1);
        age = new QLineEdit(tab_8);
        age->setObjectName(QStringLiteral("age"));
        age->setGeometry(QRect(340, 190, 211, 22));
        type = new QLabel(tab_8);
        type->setObjectName(QStringLiteral("type"));
        type->setGeometry(QRect(194, 220, 111, 20));
        type->setFont(font1);
        nom = new QLineEdit(tab_8);
        nom->setObjectName(QStringLiteral("nom"));
        nom->setGeometry(QRect(340, 100, 211, 22));
        cin = new QLineEdit(tab_8);
        cin->setObjectName(QStringLiteral("cin"));
        cin->setGeometry(QRect(340, 60, 211, 22));
        quantite = new QLabel(tab_8);
        quantite->setObjectName(QStringLiteral("quantite"));
        quantite->setGeometry(QRect(190, 160, 81, 20));
        quantite->setFont(font1);
        prenom = new QLineEdit(tab_8);
        prenom->setObjectName(QStringLiteral("prenom"));
        prenom->setGeometry(QRect(340, 130, 211, 22));
        prix = new QLabel(tab_8);
        prix->setObjectName(QStringLiteral("prix"));
        prix->setGeometry(QRect(190, 190, 141, 20));
        prix->setFont(font1);
        ajouter = new QPushButton(tab_8);
        ajouter->setObjectName(QStringLiteral("ajouter"));
        ajouter->setGeometry(QRect(380, 260, 131, 28));
        matricule = new QLineEdit(tab_8);
        matricule->setObjectName(QStringLiteral("matricule"));
        matricule->setGeometry(QRect(340, 160, 211, 22));
        reference_4 = new QLabel(tab_8);
        reference_4->setObjectName(QStringLiteral("reference_4"));
        reference_4->setGeometry(QRect(190, 100, 111, 20));
        reference_4->setFont(font1);
        numcontart = new QLineEdit(tab_8);
        numcontart->setObjectName(QStringLiteral("numcontart"));
        numcontart->setGeometry(QRect(340, 220, 211, 22));
        reference_6 = new QLabel(tab_8);
        reference_6->setObjectName(QStringLiteral("reference_6"));
        reference_6->setGeometry(QRect(190, 60, 111, 20));
        reference_6->setFont(font1);
        pushButton = new QPushButton(tab_8);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(650, 180, 93, 28));
        pushButton_2 = new QPushButton(tab_8);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(770, 180, 93, 28));
        verticalSlider = new QSlider(tab_8);
        verticalSlider->setObjectName(QStringLiteral("verticalSlider"));
        verticalSlider->setGeometry(QRect(740, 20, 22, 160));
        verticalSlider->setOrientation(Qt::Vertical);
        tabWidget->addTab(tab_8, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        label_18 = new QLabel(tab_9);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(210, 110, 321, 16));
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setUnderline(true);
        font2.setWeight(75);
        label_18->setFont(font2);
        modifier_2 = new QPushButton(tab_9);
        modifier_2->setObjectName(QStringLiteral("modifier_2"));
        modifier_2->setGeometry(QRect(250, 390, 201, 28));
        modifier_2->setFont(font);
        type_7 = new QLabel(tab_9);
        type_7->setObjectName(QStringLiteral("type_7"));
        type_7->setGeometry(QRect(160, 260, 81, 20));
        type_7->setFont(font1);
        nom_4 = new QLineEdit(tab_9);
        nom_4->setObjectName(QStringLiteral("nom_4"));
        nom_4->setGeometry(QRect(310, 200, 211, 22));
        reference_8 = new QLabel(tab_9);
        reference_8->setObjectName(QStringLiteral("reference_8"));
        reference_8->setGeometry(QRect(160, 170, 111, 20));
        reference_8->setFont(font1);
        quantite_8 = new QLabel(tab_9);
        quantite_8->setObjectName(QStringLiteral("quantite_8"));
        quantite_8->setGeometry(QRect(160, 200, 121, 20));
        quantite_8->setFont(font1);
        comboBox_3 = new QComboBox(tab_9);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(310, 170, 211, 22));
        prix_7 = new QLabel(tab_9);
        prix_7->setObjectName(QStringLiteral("prix_7"));
        prix_7->setGeometry(QRect(160, 230, 141, 20));
        prix_7->setFont(font1);
        matricule_4 = new QLineEdit(tab_9);
        matricule_4->setObjectName(QStringLiteral("matricule_4"));
        matricule_4->setGeometry(QRect(310, 260, 211, 22));
        prenom_4 = new QLineEdit(tab_9);
        prenom_4->setObjectName(QStringLiteral("prenom_4"));
        prenom_4->setGeometry(QRect(310, 230, 211, 22));
        age_4 = new QLineEdit(tab_9);
        age_4->setObjectName(QStringLiteral("age_4"));
        age_4->setGeometry(QRect(310, 300, 211, 22));
        num_contrat = new QLineEdit(tab_9);
        num_contrat->setObjectName(QStringLiteral("num_contrat"));
        num_contrat->setGeometry(QRect(310, 340, 211, 22));
        type_8 = new QLabel(tab_9);
        type_8->setObjectName(QStringLiteral("type_8"));
        type_8->setGeometry(QRect(160, 300, 61, 20));
        type_8->setFont(font1);
        type_11 = new QLabel(tab_9);
        type_11->setObjectName(QStringLiteral("type_11"));
        type_11->setGeometry(QRect(160, 340, 121, 20));
        type_11->setFont(font1);
        tabWidget->addTab(tab_9, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QStringLiteral("tab_10"));
        tabemployer = new QTableView(tab_10);
        tabemployer->setObjectName(QStringLiteral("tabemployer"));
        tabemployer->setGeometry(QRect(30, 70, 661, 381));
        label_31 = new QLabel(tab_10);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(70, 40, 101, 16));
        label_31->setFont(font1);
        checkBox_2 = new QCheckBox(tab_10);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(410, 40, 121, 21));
        lineEdit_19 = new QLineEdit(tab_10);
        lineEdit_19->setObjectName(QStringLiteral("lineEdit_19"));
        lineEdit_19->setGeometry(QRect(190, 40, 201, 22));
        tabWidget->addTab(tab_10, QString());
        tab_11 = new QWidget();
        tab_11->setObjectName(QStringLiteral("tab_11"));
        supprimer = new QPushButton(tab_11);
        supprimer->setObjectName(QStringLiteral("supprimer"));
        supprimer->setGeometry(QRect(360, 170, 201, 28));
        supprimer->setFont(font);
        label_20 = new QLabel(tab_11);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(240, 106, 321, 20));
        label_20->setFont(font2);
        sup = new QLineEdit(tab_11);
        sup->setObjectName(QStringLiteral("sup"));
        sup->setEnabled(false);
        sup->setGeometry(QRect(570, 140, 113, 22));
        reference_sup_4 = new QLabel(tab_11);
        reference_sup_4->setObjectName(QStringLiteral("reference_sup_4"));
        reference_sup_4->setGeometry(QRect(240, 140, 101, 16));
        reference_sup_4->setFont(font1);
        comboBox_5 = new QComboBox(tab_11);
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));
        comboBox_5->setGeometry(QRect(360, 140, 201, 22));
        pushButton_3 = new QPushButton(tab_11);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(340, 340, 281, 31));
        tabWidget->addTab(tab_11, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        layoutWidget = new QWidget(tab_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(140, 20, 631, 380));
        formLayout_3 = new QFormLayout(layoutWidget);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout_3->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout_3->setRowWrapPolicy(QFormLayout::WrapLongRows);
        formLayout_3->setVerticalSpacing(9);
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(layoutWidget);
        label_15->setObjectName(QStringLiteral("label_15"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_15);

        label_16 = new QLabel(layoutWidget);
        label_16->setObjectName(QStringLiteral("label_16"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_16);

        label_17 = new QLabel(layoutWidget);
        label_17->setObjectName(QStringLiteral("label_17"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_17);

        label_22 = new QLabel(layoutWidget);
        label_22->setObjectName(QStringLiteral("label_22"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_22);

        label_23 = new QLabel(layoutWidget);
        label_23->setObjectName(QStringLiteral("label_23"));

        formLayout_3->setWidget(4, QFormLayout::LabelRole, label_23);

        label_24 = new QLabel(layoutWidget);
        label_24->setObjectName(QStringLiteral("label_24"));

        formLayout_3->setWidget(5, QFormLayout::LabelRole, label_24);

        label_25 = new QLabel(layoutWidget);
        label_25->setObjectName(QStringLiteral("label_25"));

        formLayout_3->setWidget(6, QFormLayout::LabelRole, label_25);

        server_3 = new QLineEdit(layoutWidget);
        server_3->setObjectName(QStringLiteral("server_3"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, server_3);

        port_3 = new QLineEdit(layoutWidget);
        port_3->setObjectName(QStringLiteral("port_3"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, port_3);

        uname_3 = new QLineEdit(layoutWidget);
        uname_3->setObjectName(QStringLiteral("uname_3"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, uname_3);

        paswd_3 = new QLineEdit(layoutWidget);
        paswd_3->setObjectName(QStringLiteral("paswd_3"));
        paswd_3->setEchoMode(QLineEdit::Password);

        formLayout_3->setWidget(3, QFormLayout::FieldRole, paswd_3);

        msg_3 = new QPlainTextEdit(layoutWidget);
        msg_3->setObjectName(QStringLiteral("msg_3"));

        formLayout_3->setWidget(6, QFormLayout::FieldRole, msg_3);

        rcpt_3 = new QLineEdit(layoutWidget);
        rcpt_3->setObjectName(QStringLiteral("rcpt_3"));

        formLayout_3->setWidget(4, QFormLayout::FieldRole, rcpt_3);

        subject_3 = new QLineEdit(layoutWidget);
        subject_3->setObjectName(QStringLiteral("subject_3"));

        formLayout_3->setWidget(5, QFormLayout::FieldRole, subject_3);

        layoutWidget_2 = new QWidget(tab_2);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(140, 20, 242, 30));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        exitBtn_3 = new QPushButton(tab_2);
        exitBtn_3->setObjectName(QStringLiteral("exitBtn_3"));
        exitBtn_3->setGeometry(QRect(670, 430, 93, 28));
        sendBtn_3 = new QPushButton(tab_2);
        sendBtn_3->setObjectName(QStringLiteral("sendBtn_3"));
        sendBtn_3->setGeometry(QRect(550, 430, 93, 28));
        tabWidget->addTab(tab_2, QString());
        toolBox->addItem(page, QStringLiteral("Gestion employer"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 1091, 549));
        tabWidget_2 = new QTabWidget(page_2);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(0, 0, 1001, 481));
        tabWidget_2->setFont(font);
        tab_12 = new QWidget();
        tab_12->setObjectName(QStringLiteral("tab_12"));
        reference_2 = new QLabel(tab_12);
        reference_2->setObjectName(QStringLiteral("reference_2"));
        reference_2->setGeometry(QRect(190, 130, 111, 20));
        reference_2->setFont(font1);
        type_3 = new QLineEdit(tab_12);
        type_3->setObjectName(QStringLiteral("type_3"));
        type_3->setGeometry(QRect(340, 160, 211, 22));
        date_fin = new QLineEdit(tab_12);
        date_fin->setObjectName(QStringLiteral("date_fin"));
        date_fin->setGeometry(QRect(340, 130, 211, 22));
        quantite_2 = new QLabel(tab_12);
        quantite_2->setObjectName(QStringLiteral("quantite_2"));
        quantite_2->setGeometry(QRect(190, 160, 81, 20));
        quantite_2->setFont(font1);
        cine = new QLineEdit(tab_12);
        cine->setObjectName(QStringLiteral("cine"));
        cine->setGeometry(QRect(340, 190, 211, 22));
        prix_2 = new QLabel(tab_12);
        prix_2->setObjectName(QStringLiteral("prix_2"));
        prix_2->setGeometry(QRect(190, 190, 141, 20));
        prix_2->setFont(font1);
        ajouter_2 = new QPushButton(tab_12);
        ajouter_2->setObjectName(QStringLiteral("ajouter_2"));
        ajouter_2->setGeometry(QRect(380, 260, 131, 28));
        date_debut = new QLineEdit(tab_12);
        date_debut->setObjectName(QStringLiteral("date_debut"));
        date_debut->setGeometry(QRect(340, 100, 211, 22));
        reference_5 = new QLabel(tab_12);
        reference_5->setObjectName(QStringLiteral("reference_5"));
        reference_5->setGeometry(QRect(190, 100, 111, 20));
        reference_5->setFont(font1);
        num_conge = new QLineEdit(tab_12);
        num_conge->setObjectName(QStringLiteral("num_conge"));
        num_conge->setGeometry(QRect(340, 60, 211, 22));
        reference_7 = new QLabel(tab_12);
        reference_7->setObjectName(QStringLiteral("reference_7"));
        reference_7->setGeometry(QRect(190, 60, 111, 20));
        reference_7->setFont(font1);
        tabWidget_2->addTab(tab_12, QString());
        tab_13 = new QWidget();
        tab_13->setObjectName(QStringLiteral("tab_13"));
        label_19 = new QLabel(tab_13);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(210, 110, 321, 16));
        label_19->setFont(font2);
        modifier_3 = new QPushButton(tab_13);
        modifier_3->setObjectName(QStringLiteral("modifier_3"));
        modifier_3->setGeometry(QRect(250, 390, 201, 28));
        modifier_3->setFont(font);
        type_9 = new QLabel(tab_13);
        type_9->setObjectName(QStringLiteral("type_9"));
        type_9->setGeometry(QRect(160, 260, 61, 20));
        type_9->setFont(font1);
        nom_5 = new QLineEdit(tab_13);
        nom_5->setObjectName(QStringLiteral("nom_5"));
        nom_5->setGeometry(QRect(310, 200, 211, 22));
        reference_9 = new QLabel(tab_13);
        reference_9->setObjectName(QStringLiteral("reference_9"));
        reference_9->setGeometry(QRect(160, 170, 111, 20));
        reference_9->setFont(font1);
        quantite_9 = new QLabel(tab_13);
        quantite_9->setObjectName(QStringLiteral("quantite_9"));
        quantite_9->setGeometry(QRect(160, 200, 101, 20));
        quantite_9->setFont(font1);
        comboBox_4 = new QComboBox(tab_13);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));
        comboBox_4->setGeometry(QRect(310, 170, 211, 22));
        prix_8 = new QLabel(tab_13);
        prix_8->setObjectName(QStringLiteral("prix_8"));
        prix_8->setGeometry(QRect(160, 230, 141, 20));
        prix_8->setFont(font1);
        matricule_5 = new QLineEdit(tab_13);
        matricule_5->setObjectName(QStringLiteral("matricule_5"));
        matricule_5->setGeometry(QRect(310, 260, 211, 22));
        prenom_5 = new QLineEdit(tab_13);
        prenom_5->setObjectName(QStringLiteral("prenom_5"));
        prenom_5->setGeometry(QRect(310, 230, 211, 22));
        age_5 = new QLineEdit(tab_13);
        age_5->setObjectName(QStringLiteral("age_5"));
        age_5->setGeometry(QRect(310, 290, 211, 22));
        type_10 = new QLabel(tab_13);
        type_10->setObjectName(QStringLiteral("type_10"));
        type_10->setGeometry(QRect(160, 290, 111, 20));
        type_10->setFont(font1);
        tabWidget_2->addTab(tab_13, QString());
        tab_14 = new QWidget();
        tab_14->setObjectName(QStringLiteral("tab_14"));
        tabconge = new QTableView(tab_14);
        tabconge->setObjectName(QStringLiteral("tabconge"));
        tabconge->setGeometry(QRect(30, 70, 661, 381));
        label_32 = new QLabel(tab_14);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(70, 40, 101, 16));
        label_32->setFont(font1);
        checkBox_3 = new QCheckBox(tab_14);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setGeometry(QRect(410, 40, 121, 21));
        lineEdit_20 = new QLineEdit(tab_14);
        lineEdit_20->setObjectName(QStringLiteral("lineEdit_20"));
        lineEdit_20->setGeometry(QRect(190, 40, 201, 22));
        tabWidget_2->addTab(tab_14, QString());
        tab_15 = new QWidget();
        tab_15->setObjectName(QStringLiteral("tab_15"));
        supprimer_2 = new QPushButton(tab_15);
        supprimer_2->setObjectName(QStringLiteral("supprimer_2"));
        supprimer_2->setGeometry(QRect(360, 170, 201, 28));
        supprimer_2->setFont(font);
        label_21 = new QLabel(tab_15);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(240, 110, 321, 16));
        label_21->setFont(font2);
        sup_2 = new QLineEdit(tab_15);
        sup_2->setObjectName(QStringLiteral("sup_2"));
        sup_2->setEnabled(false);
        sup_2->setGeometry(QRect(570, 140, 113, 22));
        reference_sup_5 = new QLabel(tab_15);
        reference_sup_5->setObjectName(QStringLiteral("reference_sup_5"));
        reference_sup_5->setGeometry(QRect(240, 140, 101, 16));
        reference_sup_5->setFont(font1);
        comboBox_6 = new QComboBox(tab_15);
        comboBox_6->setObjectName(QStringLiteral("comboBox_6"));
        comboBox_6->setGeometry(QRect(360, 140, 201, 22));
        tabWidget_2->addTab(tab_15, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        customPlot = new QCustomPlot(tab);
        customPlot->setObjectName(QStringLiteral("customPlot"));
        customPlot->setGeometry(QRect(30, 10, 881, 331));
        tabWidget_2->addTab(tab, QString());
        toolBox->addItem(page_2, QStringLiteral("Gestion conge"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1124, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        toolBox->setCurrentIndex(0);
        tabWidget->setCurrentIndex(3);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        reference->setText(QApplication::translate("MainWindow", "prenom", Q_NULLPTR));
        type->setText(QApplication::translate("MainWindow", "num contrat", Q_NULLPTR));
        quantite->setText(QApplication::translate("MainWindow", "matricul", Q_NULLPTR));
        prix->setText(QApplication::translate("MainWindow", "age", Q_NULLPTR));
        ajouter->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        reference_4->setText(QApplication::translate("MainWindow", "nom", Q_NULLPTR));
        reference_6->setText(QApplication::translate("MainWindow", "cin", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "play", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "pause", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_8), QApplication::translate("MainWindow", "Ajouter un employer", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "Saisir le cin de l'employer \303\240 modifier :", Q_NULLPTR));
        modifier_2->setText(QApplication::translate("MainWindow", "Modifier employer", Q_NULLPTR));
        type_7->setText(QApplication::translate("MainWindow", "matricule", Q_NULLPTR));
        reference_8->setText(QApplication::translate("MainWindow", "cin", Q_NULLPTR));
        quantite_8->setText(QApplication::translate("MainWindow", "nom", Q_NULLPTR));
        prix_7->setText(QApplication::translate("MainWindow", "prenom", Q_NULLPTR));
        type_8->setText(QApplication::translate("MainWindow", "age", Q_NULLPTR));
        type_11->setText(QApplication::translate("MainWindow", "num contrat", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_9), QApplication::translate("MainWindow", "Modifier employer", Q_NULLPTR));
        label_31->setText(QApplication::translate("MainWindow", "cin", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("MainWindow", "decroissant", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_10), QApplication::translate("MainWindow", "Afficher un employer", Q_NULLPTR));
        supprimer->setText(QApplication::translate("MainWindow", "Supprimer employer", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindow", "Saisir le cin de l'employer \303\240 supprimer:", Q_NULLPTR));
        reference_sup_4->setText(QApplication::translate("MainWindow", "cin", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "Supprimer toutes les employes retraites", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_11), QApplication::translate("MainWindow", "Supprimer un employer", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "Smtp-server:", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "Server port:", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "email", Q_NULLPTR));
        label_22->setText(QApplication::translate("MainWindow", "mdp", Q_NULLPTR));
        label_23->setText(QApplication::translate("MainWindow", "destinataire", Q_NULLPTR));
        label_24->setText(QApplication::translate("MainWindow", "sujet", Q_NULLPTR));
        label_25->setText(QApplication::translate("MainWindow", "message", Q_NULLPTR));
        server_3->setText(QApplication::translate("MainWindow", "smtp.gmail.com", Q_NULLPTR));
        port_3->setText(QApplication::translate("MainWindow", "465", Q_NULLPTR));
        paswd_3->setInputMask(QString());
        exitBtn_3->setText(QApplication::translate("MainWindow", "quitter", Q_NULLPTR));
        sendBtn_3->setText(QApplication::translate("MainWindow", "envoyer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "envoyer email", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("MainWindow", "Gestion employer", Q_NULLPTR));
        reference_2->setText(QApplication::translate("MainWindow", "date fin", Q_NULLPTR));
        quantite_2->setText(QApplication::translate("MainWindow", "type", Q_NULLPTR));
        prix_2->setText(QApplication::translate("MainWindow", "cin employer", Q_NULLPTR));
        ajouter_2->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        reference_5->setText(QApplication::translate("MainWindow", "date debut", Q_NULLPTR));
        reference_7->setText(QApplication::translate("MainWindow", "num_conge", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_12), QApplication::translate("MainWindow", "Ajouter un conge", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "Saisir le numero du conge \303\240 modifier :", Q_NULLPTR));
        modifier_3->setText(QApplication::translate("MainWindow", "Modifier employer", Q_NULLPTR));
        type_9->setText(QApplication::translate("MainWindow", "type", Q_NULLPTR));
        reference_9->setText(QApplication::translate("MainWindow", "num conge", Q_NULLPTR));
        quantite_9->setText(QApplication::translate("MainWindow", "date_debut", Q_NULLPTR));
        prix_8->setText(QApplication::translate("MainWindow", "date_fin", Q_NULLPTR));
        type_10->setText(QApplication::translate("MainWindow", "cin employer", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_13), QApplication::translate("MainWindow", "Modifier conger", Q_NULLPTR));
        label_32->setText(QApplication::translate("MainWindow", "cin", Q_NULLPTR));
        checkBox_3->setText(QApplication::translate("MainWindow", "decroissant", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_14), QApplication::translate("MainWindow", "Afficher conge", Q_NULLPTR));
        supprimer_2->setText(QApplication::translate("MainWindow", "Supprimer conge", Q_NULLPTR));
        label_21->setText(QApplication::translate("MainWindow", "Saisir le num du conge \303\240 supprimer:", Q_NULLPTR));
        reference_sup_5->setText(QApplication::translate("MainWindow", "num conge", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_15), QApplication::translate("MainWindow", "Supprimer conge", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab), QApplication::translate("MainWindow", "statistique", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("MainWindow", "Gestion conge", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
