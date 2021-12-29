class Shape
{
public:
    virtual float Area(){return 0.0;}
    virtual void Name()=0;
};

class Circle:public Shape
{
protected:
    float r;
public:
    Circle(float rr=0.0);
    virtual float Area();
    virtual void Name();
};

class Rectangle:public Shape
{
protected:
    float l,w;
public:
    Rectangle(float ll=0.0,float ww=0.0);
    virtual float Area();
    virtual void Name();
};