CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

SET(CMAKE_CXX_STANDARD 11)

ADD_SUBDIRECTORY(googletest)

ADD_EXECUTABLE(mergetests
	Spotimerge/MergePlaylist.cpp
        Spotimerge/MergePlaylistTests.cpp
)

TARGET_LINK_LIBRARIES(mergetests gtest)
TARGET_COMPILE_DEFINITIONS(mergetests PRIVATE gtest_disable_pthreads=ON)

