#include "Obstacle.h"
#include <SDL.h>

Obstacle::Obstacle(int initialX, int initialY, int obstacleWidth, int obstacleHeight)
    : Position(initialX, initialY), width(obstacleWidth), height(obstacleHeight) {
}

Obstacle::~Obstacle() {
}

void Obstacle::render() {
}

int Obstacle::getWidth() const {
    return width;
}

int Obstacle::getHeight() const {
    return height;
}