#include "scene.h"
#include "scenerunner.h"
#include "scenerefractcube.h"

#include <memory>

int main(int argc, char *argv[]) {
	
	SceneRunner runner("Chapter 4 - refractcube", 500, 500);

	std::unique_ptr<Scene> scene = std::unique_ptr<Scene>(new SceneRefractCube());

	return runner.run(*scene);
}


