#include "Player1.h"
#include <iostream>

using namespace std;
int main()
{

    //creating a game window
    sf::RenderWindow window(sf::VideoMode(1920,1080), "Space Invaders Game",sf::Style::Close | sf::Style::Resize);
    sf::Event eve;
    
    //Creating Game Loop
    while(window.isOpen())
    {
        //implementing event polling
        while(window.pollEvent(eve))
        {
            switch(eve.type)
            {
                case sf::Event::Closed:
                    window.close();
                    break;
                case sf::Event::KeyPressed:
                   if(eve.key.code == sf::Keyboard::C)
                       window.close();
                  break;
            }
            
            //updating game
            
            //rendering game
            window.clear(sf::Color::Black);
            
            //Drawing game here
            
            window.display();  //tells app that game is done drawing
        }
    }
    
  return 0;
}