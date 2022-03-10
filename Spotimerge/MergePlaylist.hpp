#ifndef _MERGE_PLAYLIST_HPP
#define _MERGE_PLAYLIST_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <QVector>
#include <QString>

#include "mainwindow.h"

using namespace std;

class MergePlaylist {
	private:

	public:
		QVector<QString> findCommonSongs(QVector<QString>, QVector<QString>, QVector<QString>);
};

#endif //_MERGE_PLAYLIST_HPP
