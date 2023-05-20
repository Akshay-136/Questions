#include <iostream>
using namespace std;

int main(){
    int age;
    int numberofpeople=0;
    int agetotal = 0;
    cout<< " enter the first age or -1 to exit"<<endl;
    cin>>age;

    while(age != -1){
        agetotal=agetotal+age;
        numberofpeople++;
        
        cout<< " enter the next age or -1 to exit"<<endl;
        cin>>age;
    }
    {

    cout<< " the total no. of age entered"<<numberofpeople<<endl;
    cout << " average is "<<agetotal/numberofpeople<<endl;
    
    }
    

}