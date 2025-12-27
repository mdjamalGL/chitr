#pragma once
#include <wx/wx.h>
#include <media/MediaContext.h>

class VideoContext : public MediaContext {

public:
    VideoContext();
    int       getListSize() override;
    void      setCurrentIndex(int newIndex) override;
    int       getCurrentIndex() override;
    void      addVideo(wxString );
    wxString  getVideoByIndex(int index);
};