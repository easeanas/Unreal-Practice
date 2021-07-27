# Flying Game
Comp313 - Assignment 1

Anastasia Ease

Video: https://drive.google.com/file/d/1RiifgY2PbK6-i0Jwkd0E673DCDZBagfi/view?usp=sharing

All music and sound effects found on https://freesound.org/

## Game description:
The main action in the game is to fly through the map collecting the good points and avoiding the badpoints that move around. 
The goal is to reach the final checkpoint to progress to the next level or finish the game.


The hardest part to get working in unreal was keeping the scores consistent across levels. 
I had some issues with this because I had made variables in multiple places to save the score and it was not clear which 
one was being used where. It was also hard to figure out a way for the widget to show a score that saves between levels. 
To do this I ended up storing the score variable in the FlyingGame class, to make sure it was accessible everywhere.

The most interesting part of the game is the movement of the "badpoints". These points damage the player and make them lose points. 
They move from left to right continuously to make it harder for the player to avoid running into them. I found this the most interesting
because I think it adds more dynamic to the game and creates a challenge. It was also the most interesting to figure out how to implement.

## Special Notes:
Because of gitgubs file size limit, some files could not be pushed. To fix this I had to use a cleaning tool (BFG Repo-Cleaner) to clean up my commits 
so that they could be pushed. This means some files are missing (such as backgroundMusic.uasset). Most of these files are non-essential but the game 
may not work the same as it does in the video.
