#include <iostream>
#include <math.h>

using namespace std;

double r2(double x){
  double r_2 = exp((9 + 0.5663 + (0.4516 * x)/(0.8456 * x - 1.4117) - 3 * log(x))/3);
  return r_2;
}

double ramda(double x){
  double ram = 1/(3 * (1 - x * 0.1));
  return ram;
}
double e(double x, double y){
  return (0.4516 * 1.4117 * x)/pow(((1.4117 - 0.5662) * y - 1.4118), 2);
}

double r_new(double a, double b, double c){
  return (1 - 1/(3 * a + b * c))/0.15;
}

int main(void){
  double r1, r_prot;
  for(int i = 0; i < 10; i++){
    if(i == 0)r1 = 1.5;
    r_prot = r1 + 0.5 * ((r_new(ramda(r2(r1)), e(ramda(r2(r1)), r1), r1)) - r1);
    r1 = r_prot;
    cout << "r1 = " << r1 << " r2 == " << r2(r1) << endl;
  }
}

