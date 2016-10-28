//
//  main.cpp
//  HelpDivideInput
//
//  Created by 姜况童 on 2016/10/27.
//  Copyright © 2016年 Vayne-Lover. All rights reserved.
//

#include <iostream>
using namespace std;
void HelpInput(int sum1,int sum2,int a,int b,int c=0,int d=0,int e=0)
{
    int  s=0;
    s=a+b+c+d+e;
    cout<<sum1*a/s<<" "<<sum1*b/s<<" "<<sum1*c/s<<" "<<sum1*d/s<<" "<<sum1*e/s<<endl;
    cout<<sum2*a/s<<" "<<sum2*b/s<<" "<<sum2*c/s<<" "<<sum2*d/s<<" "<<sum2*e/s<<endl;
}
int main(int argc, const char * argv[]) {
    HelpInput(1224,434,1,3);
    return 0;
}
