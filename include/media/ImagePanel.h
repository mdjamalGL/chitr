#pragma once
#include <wx/wx.h>
#include <wx/notebook.h>
#include <wx/event.h>
#include <functional>
#include <memory>
#include "chitr/Resource.h"
#include "media/ImageContext.h"
#include "media/MediaPanel.h"
#include "media/ImagePanel.h"

class ImagePanel: public MediaPanel {

protected:
    virtual std::vector<wxString> GetFilesInDirectory(const wxString& dirPath) override;

private:
    void uploadHandler(wxCommandEvent &event);
    void updateImageViewer(wxString imageFilePath);
    void slideshowOpenClose(wxCommandEvent &event);
    void slideshowHandler(wxTimerEvent &event);
    void nextHandler(wxCommandEvent &event);
    void previousHandler(wxCommandEvent &event);

public:
    ImagePanel(wxFrame *, wxNotebook *, std::shared_ptr<Resource>);
    virtual void init() override;
    virtual void setSizers() override;
    virtual void setBindings() override;

    //check which members can be changed to private
    wxStaticBitmap      *imageViewer;
    wxButton            *uploadButton;
    wxButton            *nextButton;
    wxButton            *previousButton;
    wxButton            *slideShowButton;
    bool                slideShowFlag;
    wxTimer             slideShowTimer;
    ImageContext        *context;
    
};