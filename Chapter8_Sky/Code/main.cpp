#include "scene.h"
#include "scenerunner.h"
#include "scenesky.h"

#include <memory>

int main(int argc, char *argv[]) {
	
	SceneRunner runner("Chapter 8 - sky", 500, 500);

	std::unique_ptr<Scene> scene = std::unique_ptr<Scene>(new SceneSky());

	return runner.run(*scene);
}


