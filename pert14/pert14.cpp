#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    string line;
    int num[10];
    ifstream myfile("datane-nyong.txt");
    
    if(myfile.is_open()){
        for(int i = 1; i < 6; i++)
            myfile>>num[i];
        myfile.close();
    
    }
    
    else cout<<"Tidak dapat membuka file !";
    
    for(int i = 1; i < 6; i++)
        cout<<num[i]<<" ";
        
    return 0;
}
