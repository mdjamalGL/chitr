#pragma once
#include <wx/wx.h>
#include <vector>

class MediaContext {
    
protected:
    std::vector<wxString>   mediaList;
    int                     currentIndex;

public:
    virtual int       getListSize() = 0;
    virtual void      setCurrentIndex(int newIndex) = 0;
    virtual int       getCurrentIndex() = 0;

};