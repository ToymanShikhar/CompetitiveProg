#include <iostream>
using namespace std;

void patternPrint (int a[][1000], int sr, int er, int sc, int ec){
    
    static int num= 1;    
    
    //Base case
    if(sr>er and sc>ec){
        return;
    }
    
    //Rec case
    int i;
    for(i=sc;i<=ec;i++){
        a[sr][i]=num;
    }
    sr++;
    
    for(i=sr;i<=er;i++){
        a[i][ec]=num;
    }
    ec--;
    
    for(int i=sc;i<=ec;i++){
        a[er][i]=num;
    }
    er--;
    
    for(int i=sr;i<=er;i++){
        a[i][sc]=num;
    }
    sc++;
    
    num++;
    
    patternPrint(a,sr,er,sc,ec);
    
    return;
}

//Driver Program

int main (){
  int n;
  cin >> n;
  int a[1000][1000] {0};
    
  patternPrint(a,0,n-1,0,n-1);
  
  for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
          cout<<a[i][j]<<" ";
      }
      cout<<endl;
  }
  
  return 0;
}

