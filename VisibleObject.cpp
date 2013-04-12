#include "VisibleObject.h"

VisibleObject::VisibleObject()
{
    isLoaded = false;
}

VisibleObject::~VisibleObject()
{
}

void VisibleObject::Load(std::string filepath)
{
  if(texture.loadFromFile(filepath) == false)
  {
    filePath = "";
    isLoaded = false;
  }
  else
  {
    filePath = filepath;
    sprite.setTexture(texture);
    isLoaded = true;
  }
}

void VisibleObject::Draw(sf::RenderWindow & window)
{
  if(isLoaded)
  {
    window.draw(sprite);
  }
}

void VisibleObject::SetPosition(float x, float y)
{
  if(isLoaded)
  {
    sprite.setPosition(x,y);
  }
}