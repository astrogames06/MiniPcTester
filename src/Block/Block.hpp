#ifndef BLOCK_H
#define BLOCK_H

#include "../Entity/Entity.hpp"

class Block : public Entity
{
public:
    Vector2 velocity;
    Color color;

    void Init() override;
    void Update() override;
    void Draw() override;
};

#endif
