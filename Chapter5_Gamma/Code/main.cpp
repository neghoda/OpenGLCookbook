#include "scene.h"
#include "scenerunner.h"
#include "scenegamma.h"

#include <memory>

int main(int argc, char *argv[]) {
	
	SceneRunner runner("Chapter 5 - blur", 500, 500);

	std::unique_ptr<Scene> scene = std::unique_ptr<Scene>(new SceneGamma());

	return runner.run(*scene);
}


