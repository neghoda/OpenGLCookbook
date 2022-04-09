#include "scene.h"
#include "scenerunner.h"
#include "scenenormalmap.h"

#include <memory>

int main(int argc, char *argv[]) {
	
	SceneRunner runner("Chapter 4 - normalmap", 500, 500);

	std::unique_ptr<Scene> scene = std::unique_ptr<Scene>(new SceneNormalMap());

	return runner.run(*scene);
}


