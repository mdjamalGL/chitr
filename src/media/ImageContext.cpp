#include "media/ImageContext.h"
#include "chitr/ChitrLogger.h"
#include <exception>

ImageContext::ImageContext() {
    currentIndex = 0;
}

int ImageContext::getListSize() {
    return mediaList.size();
}

void ImageContext::setCurrentIndex(int newIndex) {
    try{
        if(newIndex >= getListSize())
        {
            throw std::invalid_argument("Image index is out of bound");
        }
        LOG_INFO("Image Index set to %d", newIndex);
        currentIndex = newIndex;
    }
    catch(std::invalid_argument &error)
    {
        LOG_ERROR(error.what());
    }
}

int ImageContext::getCurrentIndex() {
    return currentIndex;
}

void ImageContext::addImage(wxString imagePath) {
    mediaList.push_back(imagePath);
    LOG_INFO("Image with Path \"%s\" Added", imagePath.ToStdString());
}

wxString ImageContext::getImageByIndex(int index) {
    try {
        if(index >= mediaList.size()) {
            throw std::invalid_argument("Image index is out of bound");
        }
        LOG_INFO("Found Image with Index %d", index);
        return mediaList[index];
    } catch(std::invalid_argument &error) {
        LOG_ERROR(error.what());
        return wxString("");
    }
}