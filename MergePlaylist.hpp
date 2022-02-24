#ifndef _MERGE_PLAYLIST_HPP
#define _MERGE_PLAYLIST_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

class MergePlaylist {
	private:
		vector<string> playlist1;
		vector<string> playlist2;
		vector<string> commonSongsList;
	public:
		virtual void print() = 0;
		
		void findCommonSongs() {
			vector<string> mergedSongs;
			vector<string> commonSongs;

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
		}
		
		


};

#endif //_MERGE_PLAYLIST_HPP
