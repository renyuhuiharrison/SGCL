#include "MainWindow.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
#ifndef _DEBUG
	vtkOutputWindow::SetGlobalWarningDisplay(0);
#endif // DEBUG

	//  ≈‰∏ﬂ∑÷∆¡
	QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
	QCoreApplication::setAttribute(Qt::AA_UseHighDpiPixmaps);
	qputenv("QT_AUTO_SCREEN_SCALE_FACTOR", "1");


    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
