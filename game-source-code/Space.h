#ifndef SPACE_H
#define SPACE_H
//////////////////////////////////////////////////////////////
//// Headers
//////////////////////////////////////////////////////////////
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <cmath>
#include <ctime>
#include <cstdlib>


/*
 ---
*/
class Space
{
 public:
      // function declaration
      Space();
      sf::RectangleShape createPlayerOne();
      void update();
      void render();
   
 private:
    // Define some constants
    const int gameWidth = 1920;
    const int gameHeight = 1080;
    void initWindow();
    void initVariables();
    
    
};











#endif