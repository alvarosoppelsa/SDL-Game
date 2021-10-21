#include "ModuleScene.h"

ModuleScene::~ModuleScene()
{
}

bool ModuleScene::Init()
{
    return true;
}

update_status ModuleScene::PreUpdate()
{
    return UPDATE_CONTINUE;
}

update_status ModuleScene::Update()
{
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
