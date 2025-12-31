#include "Main.hpp"

#include <raylib.h>
#include "../Game/Game.hpp"
#include "../Block/Block.hpp"

extern Game game;

void Main::Init()
{
    ;
}

void Main::Update()
{
    if (IsMouseButtonDown(MOUSE_BUTTON_LEFT))
    {
        std::unique_ptr<Block> block = std::make_unique<Block>();
        block->x = GetMouseX();
        block->y = GetMouseY();

        game.AddEntity(std::move(block));
    }
}

void Main::Draw()
{
    ;
}

void Main::DrawUI()
{
    DrawFPS(20, game.HEIGHT-20);
}