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
 >  * the 2 text files with the list of songs and their corresponding author will be the input
 >  * the output will be 1 text file similar to the format of the first 2 playlists
 >  * ability to save the merged playlist as a new text file ("Save as" button)
 >  * undo, redo, copy, and paste buttons to quickly make changes to the text files
 >  * quit button to exit the program

 > ## Phase II

## Class Diagram
![image](https://user-images.githubusercontent.com/60728498/157631716-75d53961-7e6e-450b-b359-f02ca2a5df71.png)

> We essentially have a mainwindow class. This class wil be responsible for executing most of our commands that will branch off into other classes. In the MainWindow Class, we have 5 big buttons. 1 button is responsible for playlist 1 and the other is for playlist 2. We have an exit quit button that will quit the program after being clicked. When you press each of the playlist buttons, you will prompted with a popup window explorer/finder window which will let you select the playlist. This function will will whitelist the files types you can select such as .txt or .text. After the files have been selected and imported, we have a openFile function that will print and read through the list within the text file. This openFile function will be responsible for importing the data into a Vector. We will then import the titles and songs into a corresponding vector. Our MergerPlaylist Class will be responsible for acquiring the two vector playlist and merging them together with the similar songs and authors. If it failed to merge, we will run a a few tests that will print out failed. The PlaylistMaker class is responsible for making a new text file once the save button is clicked which will take the similarSongs Vector from the SongPlaylistMerger class and give a prompt on where to save the file. After the 2 buttons in the menu will restore their default stage and the user can quit the program after.

> ## Phase III
 > The design pattern that we chose to implement is the composite pattern. We chose this pattern because it prevents us from writing the same code for different objects and makes adding components simple. We may decide to add more components later and the composite pattern allows us to make these additions easily. The feature we implemented using this pattern was for the playlist. The design pattern helps us write better code because it allows us to minimize the amount of repetitive code, resulting in more clear and concise code. Another feature that we implemented using a composite pattern was when creating the opening and saving of a .txt file. Since they are basically the same function with just one difference of reading and writing we used a composite pattern. We also did this by including a .txt file to playlist1 and playlist2 just into different vectors. We also managed to add a composite design pattern into a few of our buttons likes copy, paste, undo and redo. Since these buttons were built and behaved similarly, we saw it was best to use the composite design pattern for this situation. 

 
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


 
