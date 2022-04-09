#include "scene.h"
#include "scenerunner.h"
#include "scenerendertotex.h"

#include <memory>

int main(int argc, char *argv[]) {
	
	SceneRunner runner("Chapter 4 - rendertotex", 500, 500);

	std::unique_ptr<Scene> scene = std::unique_ptr<Scene>(new SceneRenderToTex());

	return runner.run(*scene);
}


