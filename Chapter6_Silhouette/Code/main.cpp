#include "scene.h"
#include "scenerunner.h"
#include "scenesilhouette.h"

#include <memory>

int main(int argc, char *argv[]) {
	
	SceneRunner runner("Chapter 6 - silhouette", 500, 500);

	std::unique_ptr<Scene> scene = std::unique_ptr<Scene>(new SceneSilhouette());

	return runner.run(*scene);
}


