#ifndef INTERVAL_H
#define INTERVAL_H


class Interval
{
private:
    float min;
    float max;
public:
    Interval();
    Interval(float aMin, float aMax);
    float getMin();
    float getMax();
    float getSize();
    float calculateIntersection(Interval* other);
    ~Interval();
};

#endif // INTERVAL_H
