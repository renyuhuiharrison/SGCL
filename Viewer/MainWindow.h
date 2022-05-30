#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MainWindow.h"

#include <vtkSmartPointer.h>

class TestContextItem;
class vtkContextView;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = Q_NULLPTR);

private:
    Ui::MainWindowClass ui;

	vtkSmartPointer<vtkContextView> m_ctxView;
	vtkSmartPointer<TestContextItem> m_testCtxItem;
};
