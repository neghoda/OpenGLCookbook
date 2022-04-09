#include "scene.h"
#include "scenerunner.h"
#include "scenehdrbloom.h"

#include <memory>

int main(int argc, char *argv[]) {
	
	SceneRunner runner("Chapter 5 - hdrbloom", 500, 500);

	std::unique_ptr<Scene> scene = std::unique_ptr<Scene>(new SceneHdrBloom());

	return runner.run(*scene);
}


