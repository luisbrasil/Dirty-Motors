#ifndef OBSTACLE_H
#define OBSTACLE_H

#include "Position.h"

class Obstacle : public Position {
public:
    Obstacle(int initialX, int initialY, int obstacleWidth, int obstacleHeight);

    ~Obstacle();

    void render();

private:
    int width;
    int height;
};

#endif // OBSTACLE_H