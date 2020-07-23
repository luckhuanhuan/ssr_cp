#include <QApplication>
//#include "ssrtools.h"
#include "screenrecorder.h"
#include "CommandLineOptions.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    CommandLineOptions command_line_options;

    Logger logger;

    //ssrtools ssr;
    //ssr.show();
    ScreenRecorder sr;
    sr.show();
    return a.exec();
}
