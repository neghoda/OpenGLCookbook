#include "scene.h"
#include "scenerunner.h"
#include "sceneparticlesfeedback.h"

#include <memory>

int main(int argc, char *argv[]) {
	
	SceneRunner runner("Chapter 9 - particlesfeedback", 500, 500);

	std::unique_ptr<Scene> scene = std::unique_ptr<Scene>(new SceneParticlesFeedback());

	return runner.run(*scene);
}


