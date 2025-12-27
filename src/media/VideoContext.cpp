#include "media/VideoContext.h"
#include "chitr/ChitrLogger.h"
#include <exception>

VideoContext::VideoContext() {
    currentIndex = 0;
}

int VideoContext::getListSize() {
    return mediaList.size();
}

void VideoContext::setCurrentIndex(int newIndex) {

    try{
        if(newIndex >= getListSize())
        {
            throw std::invalid_argument("Video index is out of bound");
        }
        LOG_INFO("Video Index set to %d", newIndex);
        currentIndex = newIndex;
    }
    catch(std::invalid_argument &exc)
    {
        LOG_ERROR(exc.what());
    }
}

int VideoContext::getCurrentIndex() {
    return currentIndex;
}

void VideoContext::addVideo(wxString videoPath) {
    mediaList.push_back(videoPath);
    LOG_INFO("Video with Path \"%s\" Added", videoPath.ToStdString());
}

wxString VideoContext::getVideoByIndex(int index) {
    try{
        if(index >= mediaList.size())
        {
            throw std::invalid_argument("Image index is out of bound");
        }
        LOG_INFO("Found Video with Index %d", index);
        return mediaList[index];
    }
    catch(std::invalid_argument &error)
    {
        LOG_ERROR(error.what());
        return wxString("");
    }
}