#include<iostream>
#include<conio.h>
using namespace std;
#define pi 3.14
#include"shape.h"


main()
{
    int n;
    circle circle;
    square square;
    rectangle rectangle;
    int option;
    double radius=0;
    double side=0;
    double width=0;
    double height=0;
    cout<<"Calculate the shape that you want \n";

    cout<<"Choose a shape: \n";
    cout<<"1 : circle \n";
    cout<<"2 : square \n";
    cout<<"3 : rectangle \n";
    cin>>option;

    switch(option)
{
case 1:  //tinh circle
    {
    cout<<"Enter a radius: \n";
    cin>>radius;
    circle.circle(radius);
    cout<<"The area of the circle is: "<<circle.get_area()<<'\n';
    break;
    }
case 2: //tinh square
    {
    cout<<"Enter a side: \n";
    cin>>side;
    square.square(side);
    cout<<"The area of the square is: "<<square.get_area()<<'\n';
    break;
    }
case 3:  //tinh rectangle
    {
    cout<<"Enter a width and a height: \n";
    cin>>width>>height;
    rectangle.rectangle(width,height);
    cout<<"The area of the rectangle is: "<<rectangle.get_area()<<'\n';
    break;
    }
}
    getch();


}
