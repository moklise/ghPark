//
//  mscpp.h
//  MyOwnProgramming
//
//  Created by 박민석 on 2015. 3. 31..
//  Copyright (c) 2015년 박민석. All rights reserved.
//


class msStudent{ // 시험을 위한 학생 form
public:
    char name[30];
    int info1;
    int info2;
    int info3;
    int info4;
    double infoD;
    
    double msAvg(const int num1, const int num2)                                 { return (num1+num2)/2; };
    double msAvg(const int num1, const int num2, const int num3)                 { return (num1+num2+num3)/3; };
    double msAvg(const int num1, const int num2, const int num3, const int num4) { return (num1+num2+num3+num4)/4; };
}; // class msStudent

void msAbout();             // About mscpp Library
void msDecToBin();          // Show Dec to Bin
double msDecToHex(int dec); // Dec to Hex
double msDecToBin(int dec); // Dec to Bin
double msHexToDec(int dec); // Hex to Dec
double msBinToDec(int dec); // Bin to Dec