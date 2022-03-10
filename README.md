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
![image](https://user-images.githubusercontent.com/60728498/157633689-664b4f26-5d19-410a-b590-5cf2efca8806.png)

> We essentially have a mainwindow class. This class wil be responsible for executing most of our commands that will branch off into other classes. In the MainWindow Class, we have 5 big buttons. 1 button is responsible for playlist 1 and the other is for playlist 2. The Save As button will save the merged files together. We have an exit quit button that will quit the program after being clicked. When you press each of the playlist buttons, you will prompted with a popup window explorer/finder window which will let you select the playlist. This function will will whitelist the files types you can select such as .txt or .text. After the files have been selected and imported, we have a openFile function that will print and read through the list within the text file. This openFile function will be responsible for importing the data into a Vector. We will then import the titles and songs into a corresponding vector. Vectors Lines, Lines2, Lines3 are responisble for storing in all the strings of our songs. Our MergerPlaylist Class will be responsible for acquiring the two vector playlist and merging them together with the similar songs and authors. If it failed to merge, we will run a a few tests that will print out failed. The PlaylistMaker class is responsible for making a new text file once the save button is clicked which will take the similarSongs Vector from the SongPlaylistMerger class and give a prompt on where to save the file. After the 2 buttons in the menu will restore their default stage and the user can quit the program after.

> ## Phase III
 > The design pattern that we chose to implement is the composite pattern. We chose this pattern because it prevents us from writing the same code for different objects and makes adding components simple. We may decide to add more components later and the composite pattern allows us to make these additions easily. The feature we implemented using this pattern was for the playlist. The design pattern helps us write better code because it allows us to minimize the amount of repetitive code, resulting in more clear and concise code. Another feature that we implemented using a composite pattern was when creating the opening and saving of a .txt file. Since they are basically the same function with just one difference of reading and writing we used a composite pattern. We also did this by including a .txt file to playlist1 and playlist2 just into different vectors. We also managed to add a composite design pattern into a few of our buttons likes copy, paste, undo and redo. Since these buttons were built and behaved similarly, we saw it was best to use the composite design pattern for this situation. 

 
 > ## Final deliverable
 
 ## Screenshots
 > <img src = "https://user-images.githubusercontent.com/60487909/157635598-d5815b2b-86fc-4c1b-8e70-a62280266d84.png" width = "400" height = "300" >
 > <img src = "https://user-images.githubusercontent.com/60487909/157635678-f60f71c2-e5ba-4788-b078-92c163f32959.png" width = "400" height = "300" >
 > <img src = "https://user-images.githubusercontent.com/60487909/157635731-cf0d34a3-8482-4550-a63f-f91e2b28e690.png" width = "400" height = "300" >
 
 ## Installation/Usage
 > The application requires QT Creator to run. 
 > 1. Click the download dropdown to download the files. 
 > 2. Open QT Creator and import the project. 
 > 3. Go to Build-> Run on QT Creator to run the application. 
 > 4. Once the GUI is up you click on "Playlist1" button where it will open up file explorer
 > 5. From here you select the desired txt playlist and click on it. This will show the entire playlist on the left screen.
 > 6. Repeat the proccess for "Playlist2" button.
 > 7. Click on Merge and it will show the playlist that contains similar songs in both Playlist1 and Playlist2. 
 > 8. Click "save as" button to download the new merged playlist into a txt file.
 > 9. Select Quit to exit application.

 ## Testing
 > The project was tested by user interactions to test if the UI worked and by unit testing with Google Test to verify that the functions of a class worked as expected. The Google Tests tested our mergePlaylist function and all the tests passed with no memory leaks on Valgrind.


 
