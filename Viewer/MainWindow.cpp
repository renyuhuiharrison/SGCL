#include "MainWindow.h"

//vtk
#include <QVTKOpenGLNativeWidget.h>
#include <QVTKOpenGLWidget.h>
#include <vtkGenericOpenGLRenderWindow.h>
#include <vtkRenderer.h>
#include <vtkContextScene.h>
#include <vtkContextView.h>

//local
#include "TestContextItem.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

	m_ctxView = vtkSmartPointer<vtkContextView>::New();
	m_ctxView->SetRenderWindow(ui.viewer->renderWindow());
	m_ctxView->SetInteractor(ui.viewer->interactor());

	m_ctxView->GetRenderer()->SetBackground(0.0, 0.0, 0.0);

	m_testCtxItem = vtkSmartPointer<TestContextItem>::New();
	m_ctxView->GetScene()->AddItem(m_testCtxItem);

}
