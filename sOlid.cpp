#include<bits/stdc++.h>
using namespace std;



//calulate area logic should be inside each shape so that each shape should know that how thier area is being calculated and we dont have to repeat the logic each and everytime we add a new shape; 


class Shape{
    public:
    virtual double calculateArea() const=0;
    virtual ~Shape(){} 
};

class Rectangle: public Shape{
    public:
    double length;
    double breadth;
        Rectangle(double length,double breadth){
            this->length=length;
            this->breadth=breadth;
        }
        // override
        double calculateArea() const override{
            return this->length *this->breadth;
        }
};
class Circle:public Shape{
    public:
    double radius;
        Circle(double radius){
            this->radius=radius;
        }
         double calculateArea() const override{
            return M_PI* this->radius* this->radius;
        }
};

// class areaCalculator{
//     public:
//     double calulateArea(const Rectangle& rect){
//         // Rectangle rect=(Rectangle)shape;
//         return rect.length * rect.breadth;
//     }
//      double calulateArea(const Circle &circle){
//         return M_PI*circle.radius * circle.radius;
//     }
// };

int main(){
    Rectangle rect(4,5);
    Circle cir(5);
    // Use polymorphism
    Shape* shapes[] = { &rect, &cir };

    for (auto shape : shapes) {
        cout << "Area: " << shape->calculateArea() << endl;
    }

    return 0;
    // areaCalculator area;
    // cout<<"the area of rect is "<< rect.calulateArea(rect)<<endl;
    // cout<<"the area of circle is "<< area.calulateArea(cir);
}