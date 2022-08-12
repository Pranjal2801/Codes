#include <iostream>
using namespace std;

class Fraction{
    int num;
    int denom;
    
    public:
    
    Fraction(int num, int denom){
        this -> num = num;
        this -> denom = denom;
    }
    
    void print(){
        cout << num << "/" << denom; 
    }
    
    void simplify(){
        int j = min(num, denom);
        int gcd = 1;
        for(int i = 2; i <= j; i++){
            if(num%i == 0 && denom%i == 0){
                gcd = i;
            }
        }
        num = num/gcd;
        denom = denom/gcd;
    }
    
    void add(Fraction const &f2){                     // so that object f2 properties can't be changed
        int lcm = denom * (f2.denom);
        int m1 = lcm/denom;
        int m2 = lcm/(f2.denom);
        int numsum = (num*m1) + ((f2.num)*m2);
        num = numsum;
        denom = lcm;
        simplify();
        print();
    }
};

int main(){
    Fraction f1(12, 3);
    Fraction f2(1, 4);
    
    cout << "1st fraction is : ";
    f1.print();
    cout << endl;
    cout << "2nd fraction is : ";
    f2.print();
    cout << endl;
    cout << "Sum of f1 and f2 is : ";
    f1.add(f2);
    cout << endl;
}
