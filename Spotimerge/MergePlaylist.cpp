
#include "MergePlaylist.hpp"

#include "mainwindow.h"

#include <QVector>
#include <QString>

QVector<QString> MergePlaylist::findCommonSongs(QVector<QString> lines12, QVector<QString> lines22, QVector<QString> lines34) {

	MainWindow obj;
    lines34.clear();
    for(int i = 0; i < lines12.size(); ++i) {
        for(int j = 0; j < lines22.size(); ++j) {
            if(lines12.at(i) == lines22.at(j)) {
                lines34.append(lines12.at(i));
           }
        }
    }

return lines34;
}

