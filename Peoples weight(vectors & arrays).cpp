#include <iostream>
#include <iomanip>              // For setprecision
#include <vector>
using namespace std;

int main(){
   
  double total, avg, max;
  double w;
  vector<double> weight;
   
   for (int i = 1; i < 6; i++){
      cout << "Enter weight " << i << ":" << endl;
      cin >> w;
      //cout << endl;
      
      weight.push_back(w);
   }
  cout << "You entered: ";
  
   for (int i = 0; i < 5; i++){
      
      cout << fixed << setprecision(2) << weight[i] << " ";
   }  
   cout << endl;
   
   for (int i = 0 ;i < 5 ; i++ ){      
      total+=weight[i];
      }   
   cout << endl;
   cout << "Total weight: " << fixed << setprecision(2) << total << endl;
   
   avg = total / 5;
   
   cout << "Average weight: " << fixed << setprecision(2) << avg << endl;
   
   for (int i = 0; i < weight[i]; i++){
      
      if (max < weight[i]) {
       max = weight[i];  
      }
      
   }

   cout << "Max weight: " << fixed << setprecision(2) << max << endl;
   
   return 0;
}