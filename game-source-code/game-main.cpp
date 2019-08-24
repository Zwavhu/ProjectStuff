#include "Players.h"
#include "gameObjects.h"
#include <iostream>


using namespace std;

int main()
{
    
    //creating a game window
    sf::RenderWindow window(sf::VideoMode(510,510), "Space", sf::Style::Close | sf::Style::Titlebar);
    sf::Event eve;
    
//    auto player1 = sf::RectangleShape(sf::Vector2f(100.0f,100.0f));
//    player1.setPosition(200,400);
//    player1.setFillColor(sf::Color(255, 111, 255));
//    player1.setOutlineColor(sf::Color(255, 174, 210));
    
   // auto myCanon = Player1{};
    
    //creating a Player object
    Players player1;
    
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
            
            //movement
//            if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left))
//            {
//                player1.move(-5.1f, 0.0f);
//            }
//            
//            if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right))
//            {
//                player1.move(5.1f, 0.0f);
//            }
            
            //updating game
            
            //rendering game
            window.clear(sf::Color::Black);
            
            window.draw(player1.rect2);
            window.draw(player1.rect);
            player1.updateMotion();

            //Drawing game here
            
            window.display();  //tells app that game is done drawing
        }
    }
    
  return 0;
}