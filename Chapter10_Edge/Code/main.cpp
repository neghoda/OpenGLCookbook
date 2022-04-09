#include "scene.h"
#include "scenerunner.h"
#include "sceneedge.h"

#include <memory>

int main(int argc, char *argv[]) {
	
	SceneRunner runner("Chapter 10 - edge", 500, 500);

	std::unique_ptr<Scene> scene = std::unique_ptr<Scene>(new SceneEdge());

	return runner.run(*scene);
}


