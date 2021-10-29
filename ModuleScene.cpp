#include "Globals.h"
#include "Application.h"
#include "ModuleScene.h"
#include "ModuleRender.h"
#include "ModuleTextures.h"
#include "SDL/include/SDL.h"

ModuleScene::ModuleScene()
{
    background = new SDL_Rect();
    background->x = 0;
    background->y = 0;
    background->w = 250;
    background->h = 250;
}

ModuleScene::~ModuleScene()
{
    delete background;
}

bool ModuleScene::Init()
{
    return true;
}

bool ModuleScene::Start()
{
    texture = App->textures->Load("sprites.png");
    return true;
}

update_status ModuleScene::PreUpdate()
{
    return UPDATE_CONTINUE;
}

update_status ModuleScene::Update()
{
    App->renderer->Blit(texture, 0, 0, background);
    return UPDATE_CONTINUE;
}

update_status ModuleScene::PostUpdate()
{
    return UPDATE_CONTINUE;
}

bool ModuleScene::CleanUp()
{
    return true;
}
