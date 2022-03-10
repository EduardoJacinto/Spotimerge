# Mergify
 > Authors: [Ailan Hernandez](https://github.com/zeldran04),
 >  [Krystal Pothilat](https://github.com/krystalpothilat),
 >  [Amy Zheng](https://github.com/zamyy78),
 >  [Eduardo Jacinto](https://github.com/EduardoJacinto)

## Project Description
 > ## Why is it important or interesting to you?
 > We are interested in creating a very simple interface for users to merge their songs playlists and their friend’s playlists together. This will help us gain an understanding of how GUIs work and potentially help us in the future when creating small softwares. 
 > ## What languages/tools/technologies do you plan to use?
 > We plan to utilize C++ for our language and use a GUI library to make our merged playlist. We plan on using the terminal as our way of interacting with the features at first and then potentially create a friendly user interface for the user to use. We will have a menu that will pop up that has all the buttons needed.

 > ## What will be the input/output of your project? What are the features that the project provides?
 > The input in our project will be two playlists textfiles and the output will contain one playlist of merged songs that are in both playlists. 
 > The features that the project provides include:
 >  * Able to select files through navigating through windows explorer/Finder
 >  * the 2 text files with the list of songs/author will be the input
 >  * select between merge of Artists or Songs or both
 >  * the output will be 1 text file similar to the format of the first 2 playlists
 >  * quit button to exit the program.

 > ## Phase II

## Class Diagram
![image](https://user-images.githubusercontent.com/60728498/155226332-bd1c33c6-96fb-4962-98ff-a70d647e3dc4.png)

> We essentially have a menu class. This class wil be responsible for executing most of our commands that will branch off into other classes. In the Menu Class, we start with 3 buttons. 1 button is responsible for playlist 1 and the other is for playlist 2. We have an exit quit button that will quit the program after being clicked. When you press each of the playlist buttons, you will prompted with a popup window explorer/finder window which will let you select the playlist. This function will be in the ImportListPopUp class and we will whitelist the files types you can select such as .txt or .text. After the files have been selected and imported, we have a Playlist class that will print and read through the list within the text file. This Playlist Class will be responsible for importing the data into a Vector called SongList and number of songs. Within this class we plan on having a function that will split each element in half, from song title (getTitle) and song author (getAuthor). We will then import the titles and songs into a corresponding vector, authorList[] and SongList[]. Our SongPlaylist Merger Class will be responsible for acquiring the two vector playlist and merging them together with the similar songs and authors. If it failed to merge, we will run a a few tests that will print out failed. The PlaylistMaker class is responsible for making a new text file which will take the similarSongs Vector from the SongPlaylistMerger class and give a prompt on where to save the file. After the 2 buttons in the menu will restore their default stage and the user can quit the program after.

> ## Phase III
 > The design pattern that we chose to implement is the composite pattern. We chose this pattern because it prevents us from writing the same code for different objects and makes adding components simple. We may decide to add more components later and the composite pattern allows us to make these additions easily. The feature we implemented using this pattern was for the playlist. The design pattern helps us write better code because it allows us to minimize the amount of repetitive code, resulting in more clear and concise code. Another feature that we implemented using a composite pattern was when creating the opening and saving of a .txt file. Since they are basically the same function with just one difference of reading and writing we used a composite pattern. We also did this by including a .txt file to playlist1 and playlist2 just into different vectors. 

 
 > ## Final deliverable
 
 ## Screenshots
 > <img src = "https://user-images.githubusercontent.com/60487909/157627023-5b6ed906-2dd8-4feb-9f9f-eded1267f173.png"  width  = "400" height  =  "350" >
 > <img src =  "https://user-images.githubusercontent.com/60487909/157627119-4e1f1fa7-74e0-4a5b-bea1-a4b01ff2ec4f.png"  width = "400" height = "350" >
 > <img src = "https://user-images.githubusercontent.com/60487909/157627132-b0a2d45d-ed48-4440-afd3-24616a04ba3a.png"  width = "600" height = "350" >

 
 ## Installation/Usage
 > The application requires QT Creator to run. 
 > 1. Click the download dropdown to download the files. 
 > 2. Open QT Creator and import the project. 
 > 3. Go to Build-> Run on QT Creator to run the application. 

 ## Testing
 > The project was tested by user interactions to test if the UI worked and by unit testing with Google Test to verify that the functions of a class worked as expected. The Google Tests tested our mergePlaylist function and all the tests passed with no memory leaks on Valgrind.


 
