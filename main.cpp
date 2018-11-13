#include <iostream>
using namespace std;
int main() {
    int n=0;
    int number_of_substraction=0;
    cin >>n;
            int i=4;
            while (n!=0){
                if(n%2==0){
                    n-=2;
                    number_of_substraction++;

                } else if (n%3==0){
                    n-=3;
                    number_of_substraction++;

                } else if (n%i==0){
                    n-=i;
                    number_of_substraction++;
                } else{
                    i++;

                }
            }

    cout<<number_of_substraction;
    return 0;
}