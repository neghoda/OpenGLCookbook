#include "scene.h"
#include "scenerunner.h"
#include "scenecloth.h"

#include <memory>

int main(int argc, char *argv[]) {
	
	SceneRunner runner("Chapter 10 - cloth", 500, 500);

	std::unique_ptr<Scene> scene = std::unique_ptr<Scene>(new SceneCloth());

	return runner.run(*scene);
}


