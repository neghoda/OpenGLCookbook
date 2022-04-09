#include "scene.h"
#include "scenerunner.h"
#include "scenediffuse.h"

#include <memory>

int main(int argc, char *argv[]) {
	
	SceneRunner runner("Chapter 2 - diffuse", 500, 500);

	std::unique_ptr<Scene> scene = std::unique_ptr<Scene>(new SceneDiffuse());

	return runner.run(*scene);
}


