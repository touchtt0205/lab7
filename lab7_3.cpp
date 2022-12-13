#include<iostream>

using namespace std;
int adiff(int x,int y){
    int z;
    int A =x-360;
    int B =y-360;
    
    if(x>y){
      z = (A-B)%360;
    }else{
      z = (B-A)%360;
    }
    if(z>180){
        z = z-360;
    }
    return abs(z);
}


int main(){
  cout << adiff(180,270);
  cout << adiff(210,45);
  cout << adiff(0,360);
  cout << adiff(10,350);
  cout << adiff(95,260);
  cout << adiff(90,-90);
  cout << adiff(1000,280);
  cout << adiff(60,244);
}
