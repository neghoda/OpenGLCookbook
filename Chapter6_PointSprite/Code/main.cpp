#include "scene.h"
#include "scenerunner.h"
#include "scenepointsprite.h"

#include <memory>

int main(int argc, char *argv[]) {
	
	SceneRunner runner("Chapter 6 - pointsprite", 500, 500);

	std::unique_ptr<Scene> scene = std::unique_ptr<Scene>(new ScenePointSprite());

	return runner.run(*scene);
}


