#include "scene.h"
#include "scenerunner.h"
#include "scenetoon.h"

#include <memory>

int main(int argc, char *argv[]) {
	
	SceneRunner runner("Chapter 3 - toon", 500, 500);

	std::unique_ptr<Scene> scene = std::unique_ptr<Scene>(new SceneToon());

	return runner.run(*scene);
}


