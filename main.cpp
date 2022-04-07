#include <iostream>

using namespace std;

int main()
{   int number,gess;
    cin>>number;
    cout<<"Doan xem nao ban:";
    cin>>gess;
    while(gess!=number){
        cout<<"Sai roi,doan lai di :";
        cin>>gess;
    }
    cout<<"Chuc mung";
    return 0;
}
