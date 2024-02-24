#include "Car.h"
#include <SDL.h>

Car::Car(int initialX, int initialY, int carWidth, int carHeight)
    : position(initialX, initialY), width(carWidth), height(carHeight), speed(5) {
}

Car::~Car() {
}

void Car::update() {
    const Uint8* keyState = SDL_GetKeyboardState(NULL);

    if (keyState[SDL_SCANCODE_UP]) {
        position.increment(0, -speed);
    }

    if (keyState[SDL_SCANCODE_DOWN]) {
        position.increment(0, speed);
    }

    if (keyState[SDL_SCANCODE_LEFT]) {
        position.increment(-speed, 0);
    }

    if (keyState[SDL_SCANCODE_RIGHT]) {
        position.increment(speed, 0);
    }
}

void Car::render() {
}

int Car::getWidth() const {
    return width;
}

int Car::getHeight() const {
    return height;
}