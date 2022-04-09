#include "scene.h"
#include "scenerunner.h"
#include "scenemultilight.h"

#include <memory>

int main(int argc, char *argv[]) {
	
	SceneRunner runner("Chapter 3 - multilight", 500, 500);

	std::unique_ptr<Scene> scene = std::unique_ptr<Scene>(new SceneMultiLight());

	return runner.run(*scene);
}


