#include "scene.h"
#include "scenerunner.h"
#include "scenesubroutine.h"

#include <memory>

int main(int argc, char *argv[]) {
	
	SceneRunner runner("Chapter 2 - scenesubroutine", 500, 500);

	std::unique_ptr<Scene> scene = std::unique_ptr<Scene>(new SceneSubroutine());

	return runner.run(*scene);
}


