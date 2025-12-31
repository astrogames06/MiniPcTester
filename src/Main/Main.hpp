#ifndef MAIN_H
#define MAIN_H

#include "../Scene/Scene.hpp"

class Main : public Scene
{
public:
    void Init() override;
    void Update() override;
    void Draw() override;
    void DrawUI() override;
};

#endif