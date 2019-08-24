#ifndef PLAYER1_H
#define PLAYER1_H
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
class Player1
{
 public:
      // function declaration
      Player1();
      virtual ~Player1();
      void update();
      void render();
   
 private:
    // Define some constants
    //const int gameWidth = 1920;
    //const int gameHeight = 1080;
    void initWindow();
    void initVariables();
    //sf::RectangleShape Canon12{};
    virtual void initPlayer1(); //creating virtual void to make inheritance easy

    
    
};







#endif