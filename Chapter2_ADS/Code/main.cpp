#include "scene.h"
#include "scenerunner.h"
#include "sceneads.h"

#include <memory>

int main(int argc, char *argv[]) {
	
	SceneRunner runner("Chapter 2 - ads", 500, 500);

	std::unique_ptr<Scene> scene = std::unique_ptr<Scene>(new SceneADS());

	return runner.run(*scene);
}


