#include<iostream>

using namespace std;

int adiff(int A, int B){
  if (A >= 360 || A < -360){
    A = A%360;
  }

  if (B >= 360 || B < -360){
    B = B%360;
  }

  int C;

  C = A - B;

  if (C < (0-360)){
    if (A > B){
      B = 360 + B;
    } else {
      A = 360 + A;
    }
    C = A + B;
  }

  if (C < 0){
    C = C * (0-1);
  }
  
  if (C > 180){
    if (A > B){
      A = 360 - A;
    } else {
      B = 360 - B;
    }
    C = A + B;
  }

  return C;
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