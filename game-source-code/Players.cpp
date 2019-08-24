/*
 --THIS IS A CHILD CLASS TO MOVABLEGAMEOBJECTS, GRANDCHILD TO OBJECTS(means it can also inherit from objects)
 --FOR PLAYER1 AND PLAYER2 IMPLEMENTATIONS
*/

#include "Players.h"

Players::Players()
{
    //use of inherited objects
    rect.setSize(sf::Vector2f(rectWidth,rectHeight));
    rect2.setSize(sf::Vector2f(rectWidth,rectHeight));
    rect.setPosition(sf::Vector2f(x1Pos,y1Pos));     //setting original position to bottom of screen 
    rect2.setPosition(sf::Vector2f(x2Pos,y2Pos)); 
    rect.setFillColor(sf::Color(255, 111, 0));
}

void Players::setPlayer1Pos()
{
    
}


    