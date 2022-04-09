#include "scene.h"
#include "scenerunner.h"
#include "scenediscard.h"

#include <memory>

int main(int argc, char *argv[]) {
	
	SceneRunner runner("Chapter 2 - scenediscard", 500, 500);

	std::unique_ptr<Scene> scene = std::unique_ptr<Scene>(new SceneDiscard());

	return runner.run(*scene);
}


