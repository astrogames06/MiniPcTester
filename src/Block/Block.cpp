#include "Block.hpp"

#include "../Game/Game.hpp"

extern Game game;

const float SPEED = 300.f;

void Block::Init()
{
    texture = LoadTexture("blocky.png");
    color = {
        (unsigned char)GetRandomValue(0, 255),
        (unsigned char)GetRandomValue(0, 255),
        (unsigned char)GetRandomValue(0, 255), 255
    };

    velocity.x = (GetRandomValue(0, 1) == 0) ? -1 : 1;
    velocity.y = (GetRandomValue(0, 1) == 0) ? -1 : 1;
}

void Block::Update()
{
    x += velocity.x * SPEED * GetFrameTime();
    y += velocity.y * SPEED * GetFrameTime();

    for (Block* block : game.GetEntitiesOfType<Block>())
    {
        if (block != this) // Makes sure we arent getting this block
        {
            
        }
    }
}

void Block::Draw()
{
    DrawTexture(texture, x, y, color);
}