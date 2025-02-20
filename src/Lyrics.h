#ifndef LYRICS_H
#define LYRICS_H

#include <fstream>
#include <string>
#include <vector>

using namespace std;

struct lyric {
    string text;
    double time;
};

class LyricFile {
    string filePath, fileFormat;
    pmr::vector<lyric> lyrics;

    public:
        LyricFile(string filePath, string fileFormat);
        bool isValidFile() const;
        void parse();
        pmr::vector<lyric> getLyricVector();
};

#endif //LYRICS_H
