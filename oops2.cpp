#include<iostream>
using namespace std;
 class topper{
    
    public:
        void setdata(string x){
         name = x;
        }
        void getdata(){
         cout<< " name is "<<name;
        }
   private:
         string name;
     


 };

 int main(){
   topper ak;
   ak.setdata("akshay");
   ak.getdata();



    return 0;
 }