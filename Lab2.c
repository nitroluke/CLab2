#include <stdio.h>
double getInput(char*);
double getNext(double, double);
void printTotal(double, char*);

int main(){
    double x1 = getInput("X1");
    double x2 = getInput("X2");
    double x3 = getNext(x1, x2);
    double x4 = getNext(x2,x3);
    double x5 = getNext(x3,x4);
    printTotal(x5, "x5");
    return 0;
}

double getInput(char* var){
    double userNum = 0;
    printf("Enter a  real number (%s) to calculate it's seqence > \n", var);
    scanf("%lf", &userNum);
    return userNum;
}

double getNext(double x1, double x2){
double x3 = (x1/2 + x2*3);
return x3;
}

void printTotal(double SeqVal, char* Seq){
printf("The total for %s is %.2lf\n", Seq, SeqVal);

}
