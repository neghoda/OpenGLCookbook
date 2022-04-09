#include "scene.h"
#include "scenerunner.h"
#include "sceneoit.h"

#include <memory>

int main(int argc, char *argv[]) {
	
	SceneRunner runner("Chapter 5 - oit", 500, 500);

	std::unique_ptr<Scene> scene = std::unique_ptr<Scene>(new SceneOit());

	return runner.run(*scene);
}


