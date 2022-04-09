#include "scene.h"
#include "scenerunner.h"
#include "scenesmoke.h"

#include <memory>

int main(int argc, char *argv[]) {
	
	SceneRunner runner("Chapter 9 - smoke", 500, 500);

	std::unique_ptr<Scene> scene = std::unique_ptr<Scene>(new SceneSmoke());

	return runner.run(*scene);
}


