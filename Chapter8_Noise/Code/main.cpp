#include "scene.h"
#include "scenerunner.h"
#include "scenenoise.h"

#include <memory>

int main(int argc, char *argv[]) {
	
	SceneRunner runner("Chapter 8 - noise", 500, 500);

	std::unique_ptr<Scene> scene = std::unique_ptr<Scene>(new SceneNoise());

	return runner.run(*scene);
}


