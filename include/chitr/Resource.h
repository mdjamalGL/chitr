#pragma once
#include <wx/wx.h>

class Resource
{
    public :

    wxColour        headerBackgroundColour;
    wxColour        bodyBackgroundColour;
    wxColour        footerBackgroundColour;

    wxBitmap        uploadIcon;
    wxBitmap        nextIcon;
    wxBitmap        previousIcon;
    wxBitmap        slideshowIcon;
    wxBitmap        closeIcon;
    wxBitmap        playIcon;
    wxBitmap        stopIcon;
    wxBitmap        pauseIcon;
    wxBitmap        volumeIcon;
    wxBitmap        imageIcon;
    wxBitmap        musicIcon;


    Resource();

    private :
    wxBitmap GetIconAsBitmap(const char* utf8IconCode, int size, const wxColour& color);
};