#include "scene.h"
#include "scenerunner.h"
#include "scenereflectcube.h"

#include <memory>

int main(int argc, char *argv[]) {
	
	SceneRunner runner("Chapter 4 - reflectcube", 500, 500);

	std::unique_ptr<Scene> scene = std::unique_ptr<Scene>(new SceneReflectCube());

	return runner.run(*scene);
}


