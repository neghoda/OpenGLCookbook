#include "scene.h"
#include "scenerunner.h"
#include "scenedirectional.h"

#include <memory>

int main(int argc, char *argv[]) {
	
	SceneRunner runner("Chapter 3 - directional", 500, 500);

	std::unique_ptr<Scene> scene = std::unique_ptr<Scene>(new SceneDirectional());

	return runner.run(*scene);
}


