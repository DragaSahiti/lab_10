/*3.Create a class for rectangle that stores data of length and breadth and has two functions : area() and perimeter(). Write a program that uses this class to create two rectangles (rectangle objects) of user inputted length and breadth. Compare the areas and perimeter of the those rectangles.
*/

//library
#include <iostream>
using namespace std;

class rectangle{
   public:
   //length of the rectangle
   double length;
   //breadth of the rectangle
   double breadth;
   
   //member function declarations
   double getarea(void);
   double getperimeter(void);
   void setlength(double len);
   void setbreadth(double bre);

};

//member function definition
double rectangle::getarea(void){
    return length * breadth;
}
double rectangle::getperimeter(void){
    return 2*length + 2*breadth;
}
void rectangle::setlength(double len){
    length = len;
}
void rectangle::setbreadth(double bre){
    breadth = bre;
}

//main function
int main(){
    //declare a rec1 of type rectangle
    rectangle rec;
    //store the area of the rectangle
    double area = 0.0;
    //store the perimeter of the rec
    double perimeter = 0.0;
    
    //specification of the rec
    rec.setlength(5.0);
    rec.setbreadth(4.0);
    
    //area of rec
    area = rec.getarea();
    cout << "area of the rec is " << area << endl;
    
    //perimeter of the rec
    perimeter = rec.getperimeter();
    cout << "perimeter of the rec is " << perimeter << endl;

    return 0;
}
