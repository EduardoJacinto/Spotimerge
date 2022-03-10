#include "MergePlaylist.hpp"

#include "gtest/gtest.h"

#include <iostream>
#include <vector>
#include <string>

using namespace std;

TEST(mergeTest, checkNotEmptyMergedPlaylist) {
        MergePlaylist test;
        vector<string> playlist1 = {"Panda - Desiigner", "Cheap Thrills - Sia","One Dance - Drake", "Diamonds - Rihanna",
        "Famous - Kanye West"};
        vector<string> playlist2 = {"Cheap Thrills - Sia", "Panda - Desiigner", "One Dance - Drake",
        "Work from Home - Fifth Harmony", "NEUNEU - Uffie"};
        vector<string> playlist3;

        test.findCommonSongs(playlist1, playlist2, playlist3);

        for (int i = 0; i < playlist3.size(); ++i) {
		cout << playlist3.at(i) << endl;
	}

}


TEST(mergeTest, checkMergedPlaylist1) {
	MergePlaylist test;
	vector<string> playlist1 = {"Panda - Desiigner", "Cheap Thrills - Sia","One Dance - Drake", "Diamonds - Rihanna",
	"Famous - Kanye West"};
	vector<string> playlist2 = {"Cheap Thrills - Sia", "Panda - Desiigner", "One Dance - Drake", 
	"Work from Home - Fifth Harmony", "NEUNEU - Uffie"};
	vector<string> playlist3;

	vector<string> expectedPlaylist = {"Panda - Desiigner", "Cheap Thrills - Sia", "One Dance - Drake"};

	test.findCommonSongs(playlist1, playlist2, playlist3);

	EXPECT_EQ(playlist3,expectedPlaylist);

}

TEST(mergeTest, checkMergedPlaylist2) {
	MergePlaylist test;
	vector<string> playlist1 = {"Panda - Desiigner", "Cheap Thrills - Sia", "Diamonds - Rihanna", "Famous - Kanye West"};
	vector<string> playlist2 = {"Panda - Desiigner", "Cheap Thrills - Sia", "One Dance - Drake"};

	vector<string> playlist3;

	vector<string> expectedPlaylist = {"Panda - Desiigner", "Cheap Thrills - Sia"};

	test.findCommonSongs(playlist1, playlist2, playlist3);

	EXPECT_EQ(playlist3, expectedPlaylist);

}

TEST(mergeTest, playlistSameSongName) {
	MergePlaylist test;

	vector<string> playlist1 = {"Panda - Josh Levi", "Cheap Thrills - Sia"};
        vector<string> playlist2 = {"Panda - Desiigner", "Cheap Thrills - Sia", "One Dance - Drake"};

        vector<string> playlist3;

        vector<string> expectedPlaylist = {"Cheap Thrills - Sia"};

        test.findCommonSongs(playlist1, playlist2, playlist3);

        EXPECT_EQ(playlist3, expectedPlaylist);


}

int main(int argc, char **argv) {
		::testing::InitGoogleTest(&argc, argv);
		return RUN_ALL_TESTS();
}
