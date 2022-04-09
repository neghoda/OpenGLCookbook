#include "scene.h"
#include "scenerunner.h"
#include "sceneshadewire.h"

#include <memory>

int main(int argc, char *argv[]) {
	
	SceneRunner runner("Chapter 6 - shaderwire", 500, 500);

	std::unique_ptr<Scene> scene = std::unique_ptr<Scene>(new SceneShadeWire());

	return runner.run(*scene);
}


