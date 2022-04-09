#include "scene.h"
#include "scenerunner.h"
#include "scenemultitex.h"

#include <memory>

int main(int argc, char *argv[]) {
	
	SceneRunner runner("Chapter 4 - multitexture", 500, 500);

	std::unique_ptr<Scene> scene = std::unique_ptr<Scene>(new SceneMultiTex());

	return runner.run(*scene);
}


