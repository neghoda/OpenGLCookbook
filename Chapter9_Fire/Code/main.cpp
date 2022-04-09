#include "scene.h"
#include "scenerunner.h"
#include "scenefire.h"

#include <memory>

int main(int argc, char *argv[]) {
	
	SceneRunner runner("Chapter 9 - fire", 500, 500);

	std::unique_ptr<Scene> scene = std::unique_ptr<Scene>(new SceneFire());

	return runner.run(*scene);
}


