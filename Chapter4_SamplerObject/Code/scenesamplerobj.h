#ifndef SCENESAMPLEROBJ_H
#define SCENESAMPLEROBJ_H

#include "scene.h"
#include "glslprogram.h"
#include "plane.h"
#include "cube.h"

#include <glm/glm.hpp>

class SceneSamplerObj : public Scene {
private:
    GLSLProgram prog;

    Plane plane;
    Cube cube;


    float angle;
    GLuint linearSampler, nearestSampler;

    void setMatrices();
    void compileAndLinkShader();

public:
    SceneSamplerObj();

    void initScene();
    void update(float t);
    void render();
    void resize(int, int);
};

#endif
