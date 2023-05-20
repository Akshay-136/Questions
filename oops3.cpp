#include<iostream>
using namespace std;
 class topper{
    public:
        topper(string z){//constructor
            setdata(z);

        }
        void setdata(string x){
            name = x;
        }
        string getdata(){
            return name;
        }
   private:
         string name;

 };

 int main(){
   topper ak("good booy \n");
   cout<<ak.getdata();

    topper ak1("morning \n");
    cout<<ak1.getdata();

    return 0;
 }