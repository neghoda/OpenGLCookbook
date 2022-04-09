#include "scene.h"
#include "scenerunner.h"
#include "scenedeferred.h"

#include <memory>

int main(int argc, char *argv[]) {
	
	SceneRunner runner("Chapter 5 - deferred", 500, 500);

	std::unique_ptr<Scene> scene = std::unique_ptr<Scene>(new SceneDeferred());

	return runner.run(*scene);
}


