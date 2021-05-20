#include<iostream>
#include <algorithm>
#include"current_ranges.h"

void PrinttheRange(int StartingRange,int EndingRange,int NoOfReads)
{
  cout<<StartingRange<<"-"<<EndingRange<<"\t"<<NoOfReads<<"\n";
}


void AnalyseRange(const int* CurrentRange,int NoOfRanges,std::vector<StructRange*>& RangeInfo_st)
{
  int StartRange, EndRange, NoOfReadings;
  cout<<"/*----------------------------------------------*/"<<"\n";
  cout<<"Range"<<"\t"<<"Readings"<<"\n";
  
    StartRange = CurrentRange[0];
    EndRange   = CurrentRange[0];
    NoOfReadings = 1;
  for(int i=0;i<NoOfRanges;i++)
  {
    if((CurrentRange[i+1] - CurrentRange[i]) <= 1)
    {
      NoOfReadings++;
      EndRange   = CurrentRange[i+1];
      cout<<CurrentRange[i]<<"\n";
    }
    else
    {
      PrinttheRange(StartRange,EndRange,NoOfReadings);
      RangeInfo_st.push_back(new StructRange{StartRange,EndRange,NoOfReadings});
      StartRange = CurrentRange[i+1];
      EndRange   = CurrentRange[i+1];
      NoOfReadings = 0;
    }
  }
    EndRange   = CurrentRange[NoOfRanges - 1];
    PrinttheRange(StartRange,EndRange,NoOfReadings);
    RangeInfo_st.push_back(new StructRange{StartRange,EndRange,NoOfReadings});
}


