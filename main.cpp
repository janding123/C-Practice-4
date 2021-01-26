#include <iostream>
#include<cmath>
using namespace std;

double * read_poly(int &n){
  cout << "il grado: ";
  cin >> n;
  double * c=new double[n+1];
  for(int i=0;i<=n;i++){
    cout << "coefficient of degree " << i << ": ";
    cin >> c[i];
  }
  return c;
}

void print_poly(double *c, int n){
  int i;
  cout << c[0];
  if(n>0)
    cout << " + ";
  for(i=1;i<n;i++)
    cout << c[i] << "*x^" << i << " + ";
  if(n>0)
    cout << c[n] << "*x^" << i;
  cout << endl;
}

int calculate(double *c, int &n)
{
 int i,replace,x;
 cout<<"Input value of x for calculation ";
 cin>>x;
 replace=0;
 for(i=0;i<n;i++)
     replace=replace + c[i] * pow(x,i);
 return 0;
}

double * poli_sum (double *p1, int d1, double *p2, int d2)
{ 
   int dr = max(d1, d2); 
   double *sum = new double[dr]; 
  
   // Initialize the porduct polynomial 
   for (int i = 0; i<=d1; i++) 
     sum[i] = p1[i]; 
  
   // Take ever term of first polynomial 
   for (int i=0; i<=d2; i++) 
       sum[i] += p2[i]; 
  
   return sum; 
} 

double * poli_sum (double *p1, int d1, double *p2, int d2)
{ 
   int dr = max(d1, d2); 
   double *sum = new double[dr]; 
  
   // Initialize the porduct polynomial 
   for (int i = 0; i<=d1; i++) 
     sum[i] = p1[i]; 
  
   // Take ever term of first polynomial 
   for (int i=0; i<=d2; i++) 
       sum[i] += p2[i]; 
  
   return sum; 
} 

int main()
{
  double *p1, *p2, *p3, *add;
  int g1,g2,g3,cal;
  
  cout<<"Question 1: " << endl; 
  p1=read_poly(g1);
  print_poly(p1,g1);
  cal = calculate(p1,g1);
  cout<<"The value of the calculation is " <<cal << endl; 
  delete[] p1;
  
  cout<<"\nQuestion 2: " << endl;;
  p2=read_poly(g2);
  p3=read_poly(g3);
  cout << "First polynomial is \n"; 
  print_poly(p2, g2); 
  cout << "\nSecond polynomial is \n"; 
  print_poly(p3, g3); 
  
  int size = max(g2, g3);
  add = poli_sum (p2, g2, p3, g3); 
  cout << "\nsum polynomial is \n"; 
  print_poly (add,size); 
  delete[] p2, p3;
 
  

  return 0;
}