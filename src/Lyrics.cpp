#include "Lyrics.h"

#include <filesystem>
#include <utility>

LyricFile::LyricFile(string filePath, string fileFormat) {
    this->filePath = std::move(filePath);
    this->fileFormat = std::move(fileFormat);
}

bool LyricFile::isValidFile() const {
    return filesystem::exists(this->filePath);
}

void LyricFile::parse() {
    if (!isValidFile()) {
        return;
    }
    ifstream file(this->filePath);
    //TODO
}


