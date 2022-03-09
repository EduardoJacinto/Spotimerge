
#include "MergePlaylist.hpp"

#include "mainwindow.h"

#include <QVector>
#include <QString>

QVector<QString> MergePlaylist::findCommonSongs(QVector<QString> lines12, QVector<QString> lines22, QVector<QString> lines34) {
	//vector<string> mergedSongs;
        //vector<string> commonSongs;
	MainWindow obj;
    lines34.clear();
    for(int i = 0; i < lines12.size(); ++i) {
        for(int j = 0; j < lines22.size(); ++j) {
            if(lines12.at(i) == lines22.at(j)) {
                lines34.append(lines12.at(i));
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

return lines34;
	
}

