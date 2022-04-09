#include "scene.h"
#include "scenerunner.h"
#include "sceneperfragment.h"

#include <memory>

int main(int argc, char *argv[]) {
	
	SceneRunner runner("Chapter 3 - perfragment", 500, 500);

	std::unique_ptr<Scene> scene = std::unique_ptr<Scene>(new ScenePerFragment());

	return runner.run(*scene);
}


