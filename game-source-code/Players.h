/*
 --THIS IS A CHILD CLASS TO MOVABLEGAMEOBJECTS, GRANDCHILD TO OBJECTS(means it can also inherit from objects)
 --AND IS CLASS TO PLAYER1 AND PLAYER2(THESE TWO ARE INSTANCES OF PLAYERS)
*/
#ifndef PLAYERS_H
#define PLAYERS_H

#include "gameObjects.h"

class Players : public gameObjects //THIS SHOWS THAT IT'S INHERITING FROM THE GAMEOBJECTS CLASS
{
public:
    Players();
    float motionSpeed = 5.0f;
    void setPlayer1Pos();
    
private:
    const int rectWidth = 50;
    const int rectHeight = 50;
    const float  x1Pos = (510-rectHeight)*0.5; //placing player1 at center
    const float y1Pos = 510-rectHeight;     //placing player1 at the bottom. NOTE:510 is the height of screen, should change for sun=bmission
    const float  x2Pos = (rectHeight-510)*0.5; //placing player2 at center
    const float y2Pos = rectHeight-510;     //placing player2 at the Top. NOTE:510 is the
    
};

#endif