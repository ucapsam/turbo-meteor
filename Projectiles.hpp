//
//  Projectiles.hpp
//  Test SFML
//
//  Created by Henry Banks on 01/11/2016.
//  Copyright © 2016 HBanks. All rights reserved.
//

#ifndef Projectiles_hpp
#define Projectiles_hpp

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
#include <sstream>
#include <string>
#include <SFML/System.hpp>
#include <SFML/OpenGL.hpp>
#include <math.h>
#include <vector>
#include "ResourcePath.hpp"
#include "Ship.hpp"




class Projectiles{
public:
    Projectiles();
    virtual ~Projectiles();
    void addProj(sf::CircleShape newProj, float xMove, float yMove);
    //void addProjSprite(sf::CircleShape newProj, float xMove, float yMove);
    void drawProjs(sf::RenderWindow &window);
    void drawProjsSprites(sf::RenderWindow &window);
    void updateProjs(float elapsedTime);
    void updateProjsSprites(float elapsedTime);
    std::vector<sf::CircleShape> getProjs();
    void checkForDeletion(sf::RenderWindow &window);
    void checkForDeletionSprites(sf::RenderWindow &window);
    int getNumProjs();
    void shoot(float xf, float yf, float xi, float yi, float rad);
    void shootSpecial(sf::Event event, sf::CircleShape markerShip);
    bool checkCollision(sf::CircleShape target);
    void checkCollShots(std::vector<sf::CircleShape> shotVec, Ship &ship);
    
protected:
    std::vector<sf::CircleShape> vecProjs;
    std::vector<std::vector<float> > vecVels;
    std::vector<sf::Sprite> vecSprites;
    sf::Texture texture;
    sf::SoundBuffer shotSoundBuffer;
    sf::Sound shotSound;
    int speed;
    
private:
    
    
    
};

#endif /* Projectiles_hpp */
