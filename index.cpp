#include <iostream>

using namespace std;
int main() {
    int array[5];
    int* a=array;
    int sum=0;
    cout<<"Введіть елементи масиву:"<<endl;
    for(int i=0;i<5;i++){
        cin>>array[i];
    }
    for(int i=0;i<5;i++){
        sum+=*(a+i);
    }
    cout<<"Сумма елементыв масиву: "<<sum;
}
