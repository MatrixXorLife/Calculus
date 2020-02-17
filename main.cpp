#include<iostream>
#include <math.h>
#include <iomanip>
using namespace std;
long double trigVal();
int menu();
int point();
int reference();
int pythag();
int degChart();
int rfunc();
int coterminal();

int main() {
  int m = menu();  
}
int menu() {
    int choice;
    cout << "------------------------MENU------------------------\n";
    cout << "_____________________________________________________\n\n";
    cout << "1. Find Trig Values(with 2 sides)\n";
    cout << "2. Pythagorean Theorum\n";
    cout << "3. Reference Angle\n";
    cout << "4. Point\n";
    cout << "5. Degree Chart\n";
    cout << "6. X Y R Trig Values\n";
    cout << "7. Coterminal\n";
    cout << "_____________________________________________________\n";
    cin >> choice;
    if (choice == 1) {
      long double c = trigVal();
      //cout << setprecision(2) << fixed << c << "\n\n\n";
    }
    if (choice == 2){
      int py = pythag();
    }
    if (choice == 3) {
      int refr = reference();
    }
    if (choice == 4) {
      int poi = point();
    }
    if (choice == 5){
      int deg = degChart();
    }
    if (choice == 6){
      int rfun = rfunc();
    }
    if (choice == 7){
      int coter = coterminal();
    }
    return menu(); 
}
long double trigVal() {
    long double pi = 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706798214808651328230664709384460955058223172535940812848111745028410270193852110555964462294895493038196442881097566593344612847564823378678316527120190914564856692346034861045432664821339360726024914127372458700660631558817488152092096282925409171536436789259036001133053054882046652138414695194151160943305727036575959195309218611738193261179310511854807446237996274956735188575272489122793818301194912983367336244065664308602139494639522473719070217986094370277053921717629317675238467481846766940513200056812714526356082778577134275778960917363717872146844090122495343014654958537105079227968925892354201995611212902196086403441815981362977477130996051870721134999999837297804995105973173281609631859502445945534690830264252230825334468503526193118817101000313783875288658753320838142061717766914730359825349042875546873115956286388235378759375195778185778053217122680661300192787661119590921642019893809525720106548586327886593615338182796823030195203530185296899577362259941389124972177528347913151557485724245415069595082953311686172785588907509838175463746493931925506040092770167113900984882401285836160356;
    long int a, b;
    long double c;
    cout << "-------------------------PYTHAGOREAN THEORUM-------------------------\n";
    cout << "input a and b.\n";
    cin >> a >> b;
    c = sqrt((a * a) + (b * b));
    cout << "c = " << c << "\n";
    c = (atan(a/b) * (180.0000/pi));
    cout  << setprecision(2) << fixed << c << "\n";
    return c;
}
int reference(){
  int input, answer;
  cout << "-------------------REFERENCE ANGLE-------------------\n";
  cout << "Please input the degree amount.\n";
  cin >> input;
    if (input < 90) {
      answer = (input - 0);
    }
    if (input > 90 && input < 180) {
      answer = (180 - input);
    }
    if (input < 270 && input > 180) {
      answer = (input - 180);
    }
    if (input > 270 && input < 360) {
      answer = (360 - input);
    }
    if (input > 360 && input < 450) {
      answer = (450 - input);
    }
    if (input > 450 && input < 540){
      answer = (540 - input);
    }
    if (input > 540 && input < 630){
      answer = (630 - input);
    }
    if (input > 630 && input < 720){
      answer = (720 - input);
    }
  cout << "The reference angle is: " << answer << "\n\n";
  return main();
}
int pythag(){
  int a, b, c, choose;
  float answer;
  cout << "-----------------PYTHAGOREAN THEORUM-----------------\n";
  cout << "Please choose sides\n";
  cout << "1. a and b\n" << "2. a and c\n";
  cin >> choose;
  if (choose == 1){
    cout << "Doing sides a and b, please input a and b\n";
    cin >> a >> b;
    answer = (a * a) + (b * b);
    cout << "Value of c squared: " << answer << "\n";
    answer = sqrt(answer);
    std::cout << setprecision(3) << fixed << "Square rooted: " << answer << "\n";
  }
  if (choose == 2){
    cout << "Doing sides a and c, please input a and c\n";
    cin >> a >> c;
    answer = (c * c) - (a * a);
    cout << "Value of b squared: " << answer << "\n";
    answer = sqrt(answer);
    std::cout << setprecision(3) << fixed << "Square rooted: " << answer << "\n";
  }
  return main();
}
int point(){
  int trigI, pointx, pointy, r;
  float rsqu;
  cout << "-------------------------POINT-------------------------\n";
  cout << "Please input x and y points.\n";
  cin >> pointx >> pointy;
  r = (pointx * pointx) + (pointy * pointy); //r^2 = x^2 + y^2
  rsqu = sqrt(r);
  cout << setprecision(2) << fixed << "r = " << rsqu << "\n";
  cout << "r = Squareroot(" << r << ")\n";
  cout << "Which trig value are we finding? (1.sin, 2.cos, 3.tan, 4.sec, 5.csc, 6.cot)\n";
  cin >> trigI;
  if (trigI == 1){
    //sin = y/r
    float sinDec = (pointy / rsqu);
    cout << "Answer in fraction: " << pointy << "/" << "sqrt-" << r << "\n";
    cout << "Answer in decimal: " << sinDec << "\n";
  }
  if (trigI == 2){
    //cos = x/r
    float cosDec = (pointx / r);
    cout << "Answer in fraction: " << pointx << "/" << "sqrt-" << r << "\n";
    cout << "Answer in decimal: " << cosDec << "/";
  }
  if (trigI == 3){
    //tan = y/x
    float tanDec = (pointy / pointx);
    cout << "Answer in fraction: " << pointy << "/" << pointx << "\n";
    cout << "Answer in decimal: " << tanDec << "\n";
  }
  if (trigI == 4){
    //csc = r/y
    float cscDec = (rsqu / pointy);
    cout << "Answer in fraction: " << "sqrt-" << r << "/" << pointy << "\n";
    cout << "Answer in decimal: " << cscDec << "\n";
  }
  if (trigI == 5){
    //sec = r/x
    float secDec = (rsqu / pointx);
    cout << "Answer in fraction: " << "sqrt-" << r << "/" << pointx << "\n";
    cout << "Answer in decimal: " << secDec << "\n";
    
  }
  if (trigI == 6){
    //cot = x/y
    float cotDec = (pointx / pointy);
    cout << "Answer in fraction: " << pointx << "/" << pointy << "\n";
    cout << "Answer in decimal: " << cotDec << "\n";
    
  }
  return main();
}
int degChart(){
  cout << "---------------------DEGREE CHART---------------------\n";
  cout << "_____________________________________________________\n\n";
  cout << "Degree" << setw(10) << "Sin" << setw(15) << "Cos" << setw(15) << "Tan" << setw(15) << "\n";
  cout << "_____________________________________________________\n";
  cout << "30" << setw(14) << "1/2" << setw(18) << "rt(3)/2" << setw(16) << "rt(3)/3" << setw(10) << "\n";
  cout << "45" << setw(18) << "rt(2)/2" << setw(14) << "rt(2)/2" << setw(10) << "1" << setw(10) << "\n";
  cout << "60" << setw(18) << "rt(3)/2" << setw(10) << "1/2" << setw(18) << "rt(3)" << setw(10) << "\n";
  cout << "_____________________________________________________\n\n\n";
  return main(); 
}
int rfunc(){
  int x, y, r;
  cout << "XYR Functions\n";
  cout << "Please input x y and r.\n";
  cin >> x >> y >> r;
  cout << "Sin: " << y << "/" << r << "\n";
  cout << "Cos: " << x << "/" << r << "\n";
  cout << "Tan: " << y << "/" << x << "\n";
  cout << "Csc: " << r << "/" << y << "\n";
  cout << "Sec: " << r << "/" << x << "\n";
  cout << "Cot: " << x << "/" << y << "\n";
  return main();
}
int coterminal(){
  int angle, trig;
  cout << "Coterminal Values\n";
  cout << "Please input reference angle (0, 30, 45, 60)\n";
  cin >> angle;
  if (angle == 0){
    cout << "You chose 0\n";
    cout << "What trig value are we finding? (sin, cos, tan, csc, sec, cot)\n";
  }
  if (angle == 30){
    cout << "You chose 30\n";
    cout << "What trig value are we finding? (1.sin, 2.cos, 3.tan, 4.csc, 5.sec, 6.cot)\n";
    cin >> trig;
    if (trig == 1){
      cout << "Sin30 = " << "1/2\n";
    }
    if (trig == 2){
      cout << "Cos30 = " << "rt[3]/2\n";
    }
    if (trig == 3){
      cout << "Tan30 = " << "rt[3]/3\n";
    }
    if (trig == 4){
      cout << "Csc30 = " << "2\n";
    }
    if (trig == 5){
      cout << "Sec30 = " << "2rt[3]/3\n";
    }
    if (trig == 6){
      cout << "Cot30 = " << "rt[3]\n";
    }
  }
  if (angle == 45){
    cout << "You chose 45\n";
    cout << "What trig value are we finding? (1.sin, 2.cos, 3.tan, 4.csc, 5.sec, 6.cot)\n";
    cin >> trig;
    if (trig == 1){
      cout << "Sin45 = " << "rt[2]/2\n";
    }
    if (trig == 2){
      cout << "Cos45 = " << "rt[2]/2\n";
    }
    if (trig == 3){
      cout << "Tan45 = " << "1\n";
    }
    if (trig == 4){
      cout << "Csc45 = " << "rt[2]\n";
    }
    if (trig == 5){
      cout << "Sec45 = " << "rt[2]\n";
    }
    if (trig == 6){
      cout << "Cot45 = " << "1";
    }
  }
  if (angle == 60){
    cout << "You chose 60\n";
    cout << "What trig value are we finding? (1.sin, 2.cos, 3.tan, 4.csc, 5.sec, 6.cot)\n";
    cin >> trig;
    if (trig == 1){
      cout << "Sin60 = " << "rt[3]/2\n";
    }
    if (trig == 2){
      cout << "Cos60 = " << "1/2\n";
    }
    if (trig == 3){
      cout << "Tan60 = " << "rt[3]\n";
    }
    if (trig == 4){
      cout << "Csc60 = " << "2rt[3]/3\n";
    }
    if (trig == 5){
      cout << "Sec60 = " << "2\n";
    }
    if (trig == 6){
      cout << "Cot60 = " << "rt[3]/3\n";
    }
  }

  return main();
}
