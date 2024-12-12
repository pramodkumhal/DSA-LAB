#include<iostream>
using namespace std;
void printmove(int start, int end)
{
    cout<<start<<"->"<<end<<endl;
}
void hanoi(int n, int start, int end)
{
    if(n==1)
    {
        printmove(start,end);
    }
    else
    {
        int other = 6 - (start + end);
        hanoi(n-1, start, other);
        printmove(start,end);
        hanoi(n-1,other,end);
    }
}
int main()
{
    int n, start, end;
    cout<<"Enter the number of disk in one column: ";
    cin>>n;
    cout<<"Enter the start and end column: ";
    cin>>start>>end;
    hanoi(n, start, end);
    return 0;
}