#pragma once
#include <wx/wx.h>
#include <wx/event.h>
#include <functional>
#include <memory>
#include "chitr/Resource.h"
#include "media/MediaContext.h"

class MediaPanel {

public :
    wxFrame         *mainFrame;
    wxPanel         *rootPanel;
    wxPanel         *visualPanel;
    wxPanel         *controlPanel;

    wxBoxSizer      *rootSizer;
    wxBoxSizer      *visualSizer;
    wxBoxSizer      *controlSizer;

    std::shared_ptr<Resource> assets;

    virtual void init() = 0;
    virtual void setSizers() = 0;
    virtual void setBindings() = 0;
protected :
    virtual std::vector<wxString> GetFilesInDirectory(const wxString& dirPath) = 0;
};