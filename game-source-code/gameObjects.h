/*
 * --THIS IS A PARENT CLASS TO MOVABLE OBJECTS, IMMOVABLE OBJECTS 
*/
#ifndef GAMEOBJECTS_H
#define GAMEOBJECTS_H

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <cstdlib>

class gameObjects

{
public:
    sf::Sprite spriteIm;
    sf::RectangleShape rect; //player1 at bottom
    sf::RectangleShape rect2; //Player 2 at top
    sf::Text text; //just incase
    
    
private:
    
};



#endif
