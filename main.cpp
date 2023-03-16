#include <iostream>
using namespace std;
#include <stdlib.h>
#include <string.h>
#include "shapes.h"

const char *usage = "Usage: a.out [type] [num1] [num2] \n"
		    "	type - circle, rectangle, triangle \n"
		    "	num1 - width or radius \n"
		    "	num2 - length \n";

int main(int argc, char *argv[]) 
{
	Shape *s;
    Triangle t(10,20);
    Rectangle r(10,20);
    Circle c(5);

    s = &t;
    cout<<"Area of triangle is: "<<s->getArea()<<endl;

    s = &r;
    cout<<"Area of rectangle is: "<<s->getArea()<<endl;

    s = &c;
    cout<<"Area of circle is: "<<s->getArea()<<endl;

    return 0;
}
