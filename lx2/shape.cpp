#include<shape.h>
#include<iostream>

Circle::Circle(float rr)
{
    r=rr;
}

float Circle::Area()
{
    return (3.14*r*r);
}

Rectangle::Rectangle(float ll,float ww)
{
    l=ll;
    w=ww;
}
