#include "chitr/MainFrame.h"
#include "chitr/ChitrLogger.h"
#include <wx/wx.h>

class Chitr : public wxApp {
public:
    virtual bool OnInit() wxOVERRIDE {
        LOG_INFO("Application Initializing");
        MainFrame *mainFrame = new MainFrame("Chitr : Media Player");
        mainFrame->Show(true);
        return true;
    }
};

#ifdef _WIN32
    wxIMPLEMENT_APP_CONSOLE(Chitr);
#else
    wxIMPLEMENT_APP(Chitr);
#endif