#include<vector>
using namespace std;

struct StructRange
{
  int StartRangeNumber;
  int EndRangeNumber;
  int NoOfRangeSequence;
};

void PrinttheRange(int StartingRange,int EndingRange,int NoOfReads);

void AnalyseRange(const int* CurrentRange,int NoOfRanges,std::vector<StructRange*>& RangeInfo_st);
