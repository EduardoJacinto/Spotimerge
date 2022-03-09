
#include "MergePlaylist.hpp"

#include "mainwindow.h"

#include <QVector>
#include <QString>

void MergePlaylist::findCommonSongs(QVector<QString> lines, QVector<QString> lines2, QVector<QString> lines3) {
	//vector<string> mergedSongs;
        //vector<string> commonSongs;
	MainWindow obj;
	lines3.clear();
    for(int i = 0; i < lines.size(); ++i) {
        for(int j = 0; j < lines2.size(); ++j) {
            if(lines.at(i) == lines2.at(j)) {
                lines3.append(lines.at(i));
           }
        }
    }
	//on_playlist1Button_clicked();
	//on_playlist2Button_clicked();


        //for (int i = 0; i < playlist1.size(); ++i) {
        //	 mergedSongs.push_back(playlist1.at(i));
        //}
        //for (int i = 0; i < playlist2.size(); ++i) {
        //	 mergedSongs.push_back(playlist2.at(i));
        //}

        //sort(mergedSongs.begin(), mergedSongs.end());

        //for (int i = 0; i < mergedSongs.size() - 1; ++i) {

        //if (mergedSongs.at(i) == mergedSongs.at(i + 1)) {
        //	commonSongs.push_back(mergedSongs.at(i));
        //}


	
}

