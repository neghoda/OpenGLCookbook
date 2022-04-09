#include "scenefog.h"
#include "scenerunner.h"
#include "scenefog.h"

#include <memory>

int main(int argc, char *argv[]) {
	
	SceneRunner runner("Chapter 3 - fog", 500, 500);

	std::unique_ptr<Scene> scene = std::unique_ptr<Scene>(new SceneFog());

	return runner.run(*scene);
}


