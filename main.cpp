#include <SFML/Graphics.hpp>



int main()
{
  sf::RenderWindow window(sf::VideoMode(sf::Vector2u(1920,1080)),"Works"); 
  sf::CircleShape shape(100.f);
  sf::CircleShape shape1(50.0f); 
  sf::CircleShape shape2(300.f);
  sf::RectangleShape shape3(sf::Vector2f(5,5));
  shape1.setPosition(sf::Vector2f(200,500));
  shape1.setFillColor(sf::Color::Green);
  shape.setFillColor(sf::Color::Red);
  shape2.setPosition(sf::Vector2f(500,200));
  shape2.setFillColor(sf::Color::Blue);
  shape3.setPosition(sf::Vector2f(1915,1075));
  shape3.setFillColor(sf::Color::White);
  while(window.isOpen()){ 
  sf::Event event; 
  while(window.pollEvent(event)){ 
    if(event.type == sf::Event::Closed)
    {
      window.close(); 
    }
  } 
  window.clear();
  window.draw(shape); 
  window.draw(shape1);
  window.draw(shape2);
  window.draw(shape3);
  window.display();
  } 
}
