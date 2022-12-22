//
//  start1.cpp
//  ООП ДЗ 2
//
//  Created by Павел on 22.12.2022.
//

#include "start1.hpp"

A::A(){
    std::cout<<"конструктор A"<<std::endl;
}
int A::getX(){
    return x;
}
void A::setX(int _x){
    x = _x;
}
int A::getY(){
    return y;
}
void A::setY (int _y){
    y=_y;
}
int A::RES (){
    z=x+y;
return z;
}
 


B::B(){
    std::cout<<"конструктор B"<<std::endl;
}
int B::getX1(){
    return x1;
}
void B::setX1(int _x1){
    x1=_x1;
}
int B::getY1(){
    return y1;
}
void B::setY1(int _y1){
    y1=_y1;
}
int B::RES (){
    z1=x1-y1;
return z1;
}



C::C(){
    std::cout<<"конструктор C"<<std::endl;
}
int C::getX2(){
    return x2;
}
void C::setX2(int _x2){
    x2=_x2;
}
int C::getY2(){
    return y2;
}
void C::setY2(int _y2){
    y2=_y2;
}
int  C::RES (){
    z2=x2*y2;
return z2;
}

