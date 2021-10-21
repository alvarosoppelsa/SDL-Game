#pragma once
#include "Module.h"
#include "Globals.h"

class ModuleScene : public Module
{
	ModuleScene();
	~ModuleScene();

	bool Init() override;
	update_status PreUpdate() override;
	update_status Update() override;
	update_status PostUpdate() override;
	bool CleanUp() override;
};

