#include <SDL.h>

class Position {
public:
    Position();
    Position(int initialX, int initialY);

    void increment(int deltaX, int deltaY);
    void decrement(int deltaX, int deltaY);

    int getX() const;
    int getY() const;

private:
    int xAxis;
    int yAxis;
};

Position::Position() : xAxis(0), yAxis(0) {}

Position::Position(int initialX, int initialY) : xAxis(initialX), yAxis(initialY) {}

void Position::increment(int deltaX, int deltaY) {
    xAxis += deltaX;
    yAxis += deltaY;
}

void Position::decrement(int deltaX, int deltaY) {
    xAxis -= deltaX;
    yAxis -= deltaY;
}

int Position::getX() const {
    return xAxis;
}

int Position::getY() const {
    return yAxis;
}