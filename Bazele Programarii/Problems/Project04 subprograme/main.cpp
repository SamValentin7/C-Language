#include<iostream>
#include<stdio.h>

using namespace std;
int schimb (int k){
  if (k==9) return 1;
  else return k+=1;
}
 
 void  tipar (int n, int m){
   int k=n;
   for (int i=1; i<=m; i++{
     for (int j=; j<=i; j++){
       cout<<k<<" ";
       k=schimb(k);
     }
     cout<<endl;
   }
 }

  return 0;
}