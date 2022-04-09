#include "scene.h"
#include "scenerunner.h"
#include "scenemsaa.h"

#include <memory>

int main(int argc, char *argv[]) {

	SceneRunner runner("Chapter 5 - msaa", 500, 500, 8);

	std::unique_ptr<Scene> scene = std::unique_ptr<Scene>(new SceneMsaa());

	return runner.run(*scene);
}


