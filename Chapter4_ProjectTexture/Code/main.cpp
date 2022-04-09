#include "scene.h"
#include "scenerunner.h"
#include "sceneprojtex.h"

#include <memory>

int main(int argc, char *argv[]) {
	
	SceneRunner runner("Chapter 4 - reflectcube", 500, 500);

	std::unique_ptr<Scene> scene = std::unique_ptr<Scene>(new SceneProjTex());

	return runner.run(*scene);
}


