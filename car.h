#ifndef CAR_H
#define CAR_H

#include "Position.h"

class Car {
public:
    Car(int initialX, int initialY, int carWidth, int carHeight);

    ~Car();

    void update();

    void render();

    int getWidth() const;
    int getHeight() const;

private:
    Position position;
    int width;
    int height;
    int speed;
};

#endif // CAR_H