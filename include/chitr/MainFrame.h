#pragma once
#include <wx/wx.h>
#include <wx/notebook.h>
#include "Resource.h"

class MainFrame : public wxFrame {

private:
    wxNotebook                   *notebook;
    wxBoxSizer                   *mainSizer;
    std::shared_ptr<Resource>    assets;
    
    void LoadEmbeddedFont();
    void LoadImageHandlers();
public:
    MainFrame(const wxString &title); 

};

