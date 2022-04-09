#include "scene.h"
#include "scenerunner.h"
#include "sceneparticles.h"

#include <memory>

int main(int argc, char *argv[]) {
	
	SceneRunner runner("Chapter 10 - particles", 500, 500);

	std::unique_ptr<Scene> scene = std::unique_ptr<Scene>(new SceneParticles());

	return runner.run(*scene);
}


