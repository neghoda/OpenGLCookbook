#include "scene.h"
#include "scenerunner.h"
#include "scenedecay.h"

#include <memory>

int main(int argc, char *argv[]) {
	
	SceneRunner runner("Chapter 8 - decay", 500, 500);

	std::unique_ptr<Scene> scene = std::unique_ptr<Scene>(new SceneDecay());

	return runner.run(*scene);
}


