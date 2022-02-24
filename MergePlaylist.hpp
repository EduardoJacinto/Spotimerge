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
		
		void findCommonSongs();
		
		


};

#endif //_MERGE_PLAYLIST_HPP
