#include <iostream>
 
using namespace std;
 
int main() {
 
    int IdadeMae, IdF1, IdF2, IdF3;
    
    cin >> IdadeMae >> IdF1 >> IdF2;
    
    IdF3 = IdadeMae - (IdF1 + IdF2);
    
    if(IdF3 > IdF1 && IdF3 > IdF2){
        cout << IdF3 << endl;
        
    }else if(IdF1 > IdF2 && IdF1 > IdF3){
         cout << IdF1 << endl;
         
    }else if(IdF2 > IdF1 && IdF2 > IdF3){
         cout << IdF2 << endl;
    }
    
 
    return 0;
}