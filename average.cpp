#include<iostream>
#include<cstdlib>

using namespace std;

int main(int argc, char *argv[]) {
    int i;
    int sum = 0;
    if(argc == 1){
        cout << "Please input numbers to find average.";
    }else{
        for(i = 1; i < argc; i++){
            sum += atoi(argv[i]);
        }
        cout << "---------------------------------" << endl;
        cout << "Average of " << i-1 << " numbers = " << sum/(i-1) << endl;
        cout << "---------------------------------";
    }
return 0;
}