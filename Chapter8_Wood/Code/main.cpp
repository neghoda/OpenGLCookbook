#include "scene.h"
#include "scenerunner.h"
#include "scenewood.h"

#include <memory>

int main(int argc, char *argv[]) {
	
	SceneRunner runner("Chapter 8 - wood", 500, 500);

	std::unique_ptr<Scene> scene = std::unique_ptr<Scene>(new SceneWood());

	return runner.run(*scene);
}


