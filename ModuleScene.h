#pragma once
#include "Module.h"
#include "Globals.h"

struct SDL_Texture;
struct SDL_Rect;

class ModuleScene : public Module
{
public:
	ModuleScene();
	~ModuleScene();

	bool Init() override;
	bool Start() override;
	update_status PreUpdate() override;
	update_status Update() override;
	update_status PostUpdate() override;
	bool CleanUp() override;

private:
	SDL_Texture* texture = nullptr;
	SDL_Rect* background;
};

