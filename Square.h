#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <cmath>
#define PI 3.14159265

#ifndef TRIUNGHI_NERVOS_SQUARE_H
#define TRIUNGHI_NERVOS_SQUARE_H


class Square
{
public:
    Square();
    ~Square();

    void init(std::string textureName, sf::Vector2f position);
    void moveTowards(sf::Vector2f targetPos, float speed, float dt);

    sf::Sprite getSprite();

private:
    sf::Texture texture;
    sf::Sprite sprite;
    sf::Vector2f position;
    float speed;
};


#endif