//
//  mscpp.cpp
//  MyOwnProgramming
//
//  Created by 박민석 on 2015. 3. 31..
//  Copyright (c) 2015년 박민석. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cmath>
#include "mscpp.h"
#define true 1
#define false 0

void msAbout(){
    std::cout << "########################"<<std::endl;
    std::cout << "# Hello World!         #"<<std::endl;
    std::cout << "# This is ms Library!  #"<<std::endl;
    std::cout << "#                      #"<<std::endl;
    std::cout << "# This is made for     #"<<std::endl;
    std::cout << "# education of me,     #"<<std::endl;
    std::cout << "#         minseok!     #"<<std::endl;
    std::cout << "########################"<<std::endl;
}

void msDecToBin(){
    int x=0, i=0;
    
    std::cout << "10 진수를 입력하시오 : ";
    std::cin >> x;
    
    // 2진수 몇자리까지 가능한지 파악
    
    
    while( pow(2,i) < x ){
        i++;
    }
    
    
    // 최대 자리에서 한 자리씩 빼며 계산
    std::cout << "\n";
    
    while( i >= 0 ){
        if( x >= pow(2,i)){
            std::cout << "1";
            x-= pow(2,i);
        }else if( x == 1){
            std::cout << "1";
        }else if( x == 0 ){
            std::cout << "0";
        }
        i--;
        
    }
    std::cout << "\n";
}

double msDecToHex(int dec){
    return printf("%x", dec);
    
}

double msDecToBin(int dec){
    return printf("%x", dec);
    
}

double msHexToDec(int dec){
    return printf("%x", dec);
    
}

double msBinToDec(int dec){
    return printf("%x", dec);
    
}