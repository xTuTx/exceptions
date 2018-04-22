#include <iostream>

using namespace std;

int main()
{
    try {
        int dadage=50;
        int sonage=53;
        if (sonage>dadage){
            throw 99;
        }
    }catch(int x){
        cout << "son can not be older than dad ERROR MESSAGE: " << x << endl;
    }

    return 0;
}
