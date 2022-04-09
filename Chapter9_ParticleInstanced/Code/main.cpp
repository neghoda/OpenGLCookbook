#include "scene.h"
#include "scenerunner.h"
#include "sceneparticlesinstanced.h"

#include <memory>

int main(int argc, char *argv[]) {
	
	SceneRunner runner("Chapter 9 - particlesinstanced", 500, 500);

	std::unique_ptr<Scene> scene = std::unique_ptr<Scene>(new SceneParticlesInstanced());

	return runner.run(*scene);
}


