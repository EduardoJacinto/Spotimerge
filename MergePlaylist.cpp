#include "MergePlaylist.hpp"

void MergePlaylist::findCommonSongs() {
	vector<string> mergedSongs;
        vector<string> commonSongs;

	
	on_playlist1Button_clicked();
	on_playlist2Button_clicked();


        for (int i = 0; i < playlist1.size(); ++i) {
        	 mergedSongs.push_back(playlist1.at(i));
        }
        for (int i = 0; i < playlist2.size(); ++i) {
        	 mergedSongs.push_back(playlist2.at(i));
        }

        sort(mergedSongs.begin(), mergedSongs.end());

        for (int i = 0; i < mergedSongs.size() - 1; ++i) {

        if (mergedSongs.at(i) == mergedSongs.at(i + 1)) {
        	commonSongs.push_back(mergedSongs.at(i));
        }
}

