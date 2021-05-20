#include<iostream>

using namespace std;

void PrinttheRange(StartingRange,EndingRange,NoOfReads)
{
  cout<<StartingRange<<"-"<<EndingRange<<\t<<NoOfReads+1<<\n;
}


void AnalyseRange(const int* CurrentRange,int NoOfRanges,std::vector<StructRange*>& RangeInfo_st)
{
  int StartRange, EndRange, NoOfReadings;
  cout<<"/*----------------------------------------------*/"<<\n;
  cout<<"Range"<<\t<<"Readings"<<\n;
  
    StartRange = CurrentRange[0];
    EndRange   = CurrentRange[0];
  for(i=0,i<NoOfRanges,i++)
  {
    if((CurrentRange[i+1] - CurrentRange[i]) <= 1)
    {
      NoOfReadings++;
      EndRange   = CurrentRange[i];
    }
    else
    {
      PrinttheRange(StartRange,EndRange,NoOfReadings);
      RangeInfo_st.push_back(new StructRange{StartRange,EndRange,NoOfReadings+1});
      StartRange = CurrentRange[i+1];
      EndRange   = CurrentRange[i+1];
      NoOfReadings = 0;
    }
  }
}

