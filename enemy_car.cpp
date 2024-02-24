#ifndef ENEMYCAR_H
#define ENEMYCAR_H

#include "Position.h"

class EnemyCar : public Position {
public:
    EnemyCar(int initialX, int initialY, int enemyCarWidth, int enemyCarHeight, int initialSpeed);

    ~EnemyCar();

    void update();

    void render();

    void setSpeed(int newSpeed);

    int getSpeed() const;

private:
    int width;
    int height;
    int speed;
};

#endif // ENEMYCAR_H