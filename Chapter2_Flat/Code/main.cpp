#include "scene.h"
#include "scenerunner.h"
#include "sceneflat.h"

#include <memory>

int main(int argc, char *argv[]) {
	
	SceneRunner runner("Chapter 2 - flat", 500, 500);

	std::unique_ptr<Scene> scene = std::unique_ptr<Scene>(new SceneFlat());

	return runner.run(*scene);
}


