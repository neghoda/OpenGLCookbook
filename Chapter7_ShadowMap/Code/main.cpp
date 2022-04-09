#include "scene.h"
#include "scenerunner.h"
#include "sceneshadowmap.h"

#include <memory>

int main(int argc, char *argv[]) {
	
	SceneRunner runner("Chapter 7 - shadowmap", 500, 500);

	std::unique_ptr<Scene> scene = std::unique_ptr<Scene>(new SceneShadowMap());

	return runner.run(*scene);
}


