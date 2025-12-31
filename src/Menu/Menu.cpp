#include "Menu.hpp"

#include <raygui.h>
#include "../Game/Game.hpp"
#include "../Main/Main.hpp"

extern Game game;
namespace Scenes
{
    extern std::unique_ptr<Main> main_scene;
}

void Menu::Init()
{

}

void Menu::Update()
{

}

void Menu::Draw()
{

}

void Menu::DrawUI()
{
    if (GuiButton({(float)game.WIDTH/2-100/2, (float)game.HEIGHT/2-40/2, 100, 40}, "Start"))
    {
        game.SetScene(Scenes::main_scene.get());
    }
}