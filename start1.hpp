//
//  start1.hpp
//  ООП ДЗ 2
//
//  Created by Павел on 22.12.2022.
//

#ifndef start1_hpp
#define start1_hpp
#include <iostream>
#include <stdio.h>
#include <string>

class A{
public:
    A();
    int getX();
    void setX (int x);
    int getY();
    void setY (int y);
    int RES ();
private:
    int x = 1;
    int y = 5;
    int z;
};


class B : public A {
public:
    B();
    int getX1();
    void setX1 (int x1);
    int getY1();
    void setY1 (int y1);
    int RES ();
private:
    int x1 = 7;
    int y1 = 9;
    int z1;
};

class C : public B {
public:
    C();
    int getX2();
    void setX2 (int x2);
    int getY2();
    void setY2 (int y2);
    int RES ();
private:
    int x2 = 10;
    int y2 = 15;
    int z2;
    
};

#endif /* start1_hpp */
