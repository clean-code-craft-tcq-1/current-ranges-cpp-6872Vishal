#include"current_ranges.h"
#include<iostream>
#include <stdio.h>
#include <assert.h>

int main ()
{

std::vector<StructRange*> AnalysedInfo;
cout<<"************************************Test_Case_1******************************************"<<\n;
int test_array[] ={3, 3, 4, 5, 10, 11, 12};
int NumofTestArray = sizeof(test_array)/test_array[0];
AnalyseRange(test_array,NumofTestArray,AnalysedInfo);
assert(AnalysedInfo.size()==2);
}
