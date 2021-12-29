#include <iostream>
#include <string.h>
#include <time.h>

using namespace std;

int main(){
    typedef struct
    {
        int a;
    }Date;
    Date d1 = {1};
    Date d2 = d1;
    cout << d2.a;
}