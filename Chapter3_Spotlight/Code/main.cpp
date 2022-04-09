#include "scene.h"
#include "scenerunner.h"
#include "scenespot.h"

#include <memory>

int main(int argc, char *argv[]) {
	
	SceneRunner runner("Chapter 3 - spotlight", 500, 500);

	std::unique_ptr<Scene> scene = std::unique_ptr<Scene>(new SceneSpot());

	return runner.run(*scene);
}


