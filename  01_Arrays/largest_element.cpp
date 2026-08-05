#include<iostream>
using namespace std;
int main(){
int array[5]={4,8,2,15,7};
int size=5;
int largest=array[0];
for(int i=1;i<size;i++){
    if(array[i]>largest){
        largest=array[i];
    }
}
 cout<<"Largest Element: "<<largest<<endl;
return 0;
}
