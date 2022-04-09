#include "scene.h"
#include "scenerunner.h"
#include "scenepcf.h"

#include <memory>

int main(int argc, char *argv[]) {
	
	SceneRunner runner("Chapter 7 - pcf", 500, 500);

	std::unique_ptr<Scene> scene = std::unique_ptr<Scene>(new ScenePcf());

	return runner.run(*scene);
}


