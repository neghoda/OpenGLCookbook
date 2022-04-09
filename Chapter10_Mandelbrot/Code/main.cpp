#include "scene.h"
#include "scenerunner.h"
#include "scenemandelbrot.h"

#include <memory>

int main(int argc, char *argv[]) {
	
	SceneRunner runner("Chapter 10 - scenemandelbrot", 500, 500);

	std::unique_ptr<Scene> scene = std::unique_ptr<Scene>(new SceneMandelbrot());

	return runner.run(*scene);
}


