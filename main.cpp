//
//  main.cpp
//  ООП ДЗ 2
//
//  Created by Павел on 22.12.2022.
//
#include "start1.hpp"
#include <iostream>
#include <string>

int main(int argc, const char * argv[]) {
    
    A prim;
    std::cout<<"Сумма чисел: "<<prim.RES()<<std::endl;
    B prim1;
    std::cout<<"Разность чисел: "<<prim1.RES()<<std::endl;
    C prim2;
    std::cout<<"Произведение  чисел: "<<prim2.RES()<<std::endl;
    
    std::cout << "=============" << std::endl;
    
    prim.setX(98);
    prim.setY(120);
    std::cout<<"Если X=  :"<<prim.getX()<<std::endl;
    std::cout<<"Если Y=  :"<<prim.getY()<<std::endl;
    std::cout<<"Сумма чисел: "<<prim.RES()<<std::endl;
    std::cout << "=============" << std::endl;
    prim1.setX1(5403);
    prim1.setY1(1992);
    std::cout<<"Если X1 = :"<<prim1.getX1()<<std::endl;
    std::cout<<"Если Y1=  :"<<prim1.getY1()<<std::endl;
    std::cout<<"Разность чисел: "<<prim1.RES()<<std::endl;
    std::cout << "=============" << std::endl;
    prim2.setX2(123);
    prim2.setY2(121);
    std::cout << "Если X2=  : " << prim2.getX2() << std::endl;
    std::cout<<  "Если Y2=  : " << prim2.getY2() << std::endl;
    std::cout<<"Произведение  чисел: "<<prim2.RES()<<std::endl;
    std::cout<<std::endl;
    
    return 0;
}
