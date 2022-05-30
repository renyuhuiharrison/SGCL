#if 1
#include "MainWindow.h"
#include <QtWidgets/QApplication>

//VTK
#include <vtkAutoInit.h>
//VTK_MODULE_INIT(vtkRenderingOpenGL2)
//VTK_MODULE_INIT(vtkInteractionStyle)
//VTK_MODULE_INIT(vtkRenderingFreeType)
VTK_MODULE_INIT(vtkRenderingContextOpenGL2)
#include <QVTKOpenGLNativeWidget.h>

int main(int argc, char *argv[])
{
#ifndef _DEBUG
	vtkOutputWindow::SetGlobalWarningDisplay(0);
#endif // DEBUG

	QSurfaceFormat::setDefaultFormat(QVTKOpenGLNativeWidget::defaultFormat());

	//  ≈‰∏ﬂ∑÷∆¡
	QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
	QCoreApplication::setAttribute(Qt::AA_UseHighDpiPixmaps);
	qputenv("QT_AUTO_SCREEN_SCALE_FACTOR", "1");


    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
#endif
