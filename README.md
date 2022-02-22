# Mergify
 > Authors: [Ailan Hernandez](https://github.com/zeldran04),
 >  [Krystal Pothilat](https://github.com/krystalpothilat),
 >  [Amy Zheng](https://github.com/zamyy78),
 >  [Eduardo Jacinto](https://github.com/EduardoJacinto)
 
 > ## Expectations
 > * Incorporate **at least one** design pattern
 >   * It is recommended that you include a design pattern that we will teach this session (Composite, Strategy, or Visitor)
 > * Your project should be implemented in C++. If you wish to choose anoher programming language (e.g. Java, Python), please discuss with your lab TA to obtain permission.
 > * You can incorporate additional technologies/tools but they must be approved (in writing) by the instructor or the TA.
 > * Each member of the group **must** be committing code regularly and make sure their code is correctly attributed to them. We will be checking attributions to determine if there was equal contribution to the project.
 > * Each member of the group must actively participate in the Github Project board and reviewing commited code.
> * All project phases are to be submitted to this GitHub repository. You should modify this README file to reflect the different phases of the project. In addition, you should regularly hold sprint meetings with your group. You will need to hold two scrum/check-in meetings with your lab TA/reader in two different weeks in addition to the final demo.


## Project Description
 > ## Why is it important or interesting to you?
 > We are interested in creating a very simple interface for users to merge their songs playlists and their friend’s playlists together. This will help us gain an understanding of how GUIs work and potentially help us in the future when creating small softwares. 
 > ## What languages/tools/technologies do you plan to use? (This list may change over the course of the project)
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
 > You will need to schedule a check-in for the second scrum meeting with a reader (using Calendly). Your entire team must be present. This meeting will occur on week 8 but NOT during lab time.
 > * Before the meeting you should perform a sprint plan like you did in Phase II.
 > * You should also update this README file by adding the following:
 >   * What design pattern(s) did you use? For each pattern you must explain in 4-5 sentences:
 >     * Why did you pick this pattern? And what feature did you implement with it?
 >     * How did the design pattern help you write better code?
 >   * An updated class diagram that reflects the design pattern(s) you used. You may combine multiple design patterns into one diagram if you'd like, but it needs to be clear which portion of the diagram represents which design pattern (either in the diagram or in the description).
 >   * Make sure your README file (and Project board) are up-to-date reflecting the current status of your project. Previous versions of the README file should still be visible through your commit history.
> 
> During the meeting with your reader you will discuss: 
 > * How effective your last sprint was (each member should talk about what they did)
 > * Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 > * Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 > * What tasks you are planning for this next sprint.

 
 > ## Final deliverable
 > All group members will give a demo to the TA/reader during lab time. The TA/reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
