#ifndef POSITION_H
#define POSITION_H

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

#endif