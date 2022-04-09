#include "scene.h"
#include "scenerunner.h"
#include "scenetexture.h"

#include <memory>

int main(int argc, char *argv[]) {
	
	SceneRunner runner("Chapter 4 - texture", 500, 500);

	std::unique_ptr<Scene> scene = std::unique_ptr<Scene>(new SceneTexture());

	return runner.run(*scene);
}


