#include <iostream>
using namespace std;
int *rectangleArea3(int *w, int &h){
    int *result = new int;
    *result = *w * h;
    delete result;
    return result;
}
int main(int argc, char **argv){
    int a = 7, b = 3;
    int *x = rectangleArea3(&a, b);
    cout << x << endl;
    cout << *x << endl;
    return 0;
}
