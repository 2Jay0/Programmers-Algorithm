#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int cnt=0;
    int max;
    for(int i=0;i<win_nums.size();i++)
    {
        auto it = find(lottos.begin(),lottos.end(),win_nums[i]);
        if(it!=lottos.end())
            cnt++;
    }
    max = cnt+count(lottos.begin(),lottos.end(),0);
    
    if(max>1)
        answer.push_back(7-max);
    else
        answer.push_back(6);
    
    if(cnt>1)
        answer.push_back(7-cnt);
    else
        answer.push_back(6);
    return answer;
}