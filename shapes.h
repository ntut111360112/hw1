#ifndef _SHAPES_H_
#define _SHAPES_H_

#define PI 3.1415926

// Base class
class Shape{
public:
    virtual float getArea() = 0; //pure virtual function
};

class Triangle:public Shape{
private:
    float base;
    float height;
public:
    Triangle(float b, float h){
        base = b;
        height = h;
    }
    float getArea(){
        return 0.5*base*height;
    }
};

class Rectangle:public Shape{
private:
    float length;
    float width;
public:
    Rectangle(float l, float w){
        length = l;
        width = w;
    }
    float getArea(){
        return length*width;
    }
};

class Circle:public Shape{
private:
    float radius;
public:
    Circle(float r){
        radius = r;
    }
    float getArea(){
        return PI*radius*radius;
    }
};
#endif
