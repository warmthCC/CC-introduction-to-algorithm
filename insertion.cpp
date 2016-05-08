#include<iostream>
using namespace std;
int main(){
int array[6]={7,5,3,9,1,2};
int key,i,j;
for (j=1;j<6;++j)
{
    key=array[j];
    for(i=j-1;i>=0&&array[i]>key;--i)
        {array[i+1]=array[i];}
 //i=j-1;
 //while(i>=0&&array[i]>key){array[i+1]=array[i];--i;}
    array[i+1]=key;
}
cout<<"ordered list:";
for(i=0;i<6;++i)
cout<<array[i];
cout<<endl;

}
