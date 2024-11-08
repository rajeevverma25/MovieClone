#include<iostream>
#include<queue>
using namespace std;
int main()
{
    string str = "aaaabbbcc";
    int freq[26]={0};
    for(char ch : str)
    {
        freq[ch-'a']++;
    }
    priority_queue<pair<int,char>> maxheap;
    for(int i =0;i<26;i++)
    {
        if(freq[i]>0){
        maxheap.push({freq[i],i+'a'});
        }
    }
    string out = "";
    while(!maxheap.empty()){
        if(maxheap.size()==1){
            pair<int,char> p1stmax = maxheap.top(); maxheap.pop();
            if(p1stmax.first>1)
            {
                out =""; 
            }else{
                out += p1stmax.second;
            }
        }else{
            pair<int , char> p1stmax = maxheap.top(); maxheap.pop();
            pair<int , char> p2ndmax = maxheap.top(); maxheap.pop();
            out += p1stmax.second;
            out+= p2ndmax.second;
            p1stmax.first--;
            if(p1stmax.first > 0 )
            {
                maxheap.push(p1stmax);
            }
             p2ndmax.first--;
            if(p2ndmax.first > 0 )
            {
                maxheap.push(p2ndmax);
            }
        }
    }
    cout<<out;
    return 0;
}
