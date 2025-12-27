#pragma once
#include <wx/wx.h>
#include <media/MediaContext.h>

class ImageContext : public MediaContext {

public:
    ImageContext();
    int       getListSize() override;
    void      setCurrentIndex(int newIndex) override;
    int       getCurrentIndex() override;
    void      addImage(wxString );
    wxString  getImageByIndex(int index);
};