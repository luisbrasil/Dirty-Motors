#include "EnemyCar.h"
#include <SDL.h>

EnemyCar::EnemyCar(int initialX, int initialY, int enemyCarWidth, int enemyCarHeight, int initialSpeed)
    : Position(initialX, initialY), width(enemyCarWidth), height(enemyCarHeight), speed(initialSpeed) {
}

EnemyCar::~EnemyCar() {
}

void EnemyCar::update() {
    increment(0, speed);
}

void EnemyCar::render() {
    
}

void EnemyCar::setSpeed(int newSpeed) {
    speed = newSpeed;
}

int EnemyCar::getSpeed() const {
    return speed;
}