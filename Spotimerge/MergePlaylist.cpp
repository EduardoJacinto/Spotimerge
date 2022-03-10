#include "MergePlaylist.hpp"
#include <vector>
#include <string>

using namespace std;

vector<string> MergePlaylist::findCommonSongs(vector<string> lines12, vector<string> lines22, vector<string>& lines34) {

    lines34.clear();
    for(int i = 0; i < lines12.size(); ++i) {
        for(int j = 0; j < lines22.size(); ++j) {
            if(lines12.at(i) == lines22.at(j)) {
                lines34.push_back(lines12.at(i));
           }
        }
    }
return lines34;
}

