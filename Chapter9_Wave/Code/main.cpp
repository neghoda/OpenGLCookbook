#include "scene.h"
#include "scenerunner.h"
#include "scenewave.h"

#include <memory>

int main(int argc, char *argv[]) {
	
	SceneRunner runner("Chapter 9 - wave", 500, 500);

	std::unique_ptr<Scene> scene = std::unique_ptr<Scene>(new SceneWave());

	return runner.run(*scene);
}


