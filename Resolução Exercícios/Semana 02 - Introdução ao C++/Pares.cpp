#include <iostream>
 
using namespace std;
 
int main() {
 
    int num, pos=0;
    
    for( int i=0; i < 5 ; i++){
        cin >> num;
        
        if(num%2 == 0){
            num = pos;
            
            pos++;
        }
    }
    
    cout << pos << " valores pares" << endl;
 
    return 0;
}