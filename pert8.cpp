//deret fibonacci

#include <iostrema>

using namespace std;

int main() {
  int n, f_n, f_n1, f_n2;
  
  cout<<"Masukkan nilai n : ";
  cin>>n;
  
  f_n1 = 1;
  f_n2 = 0;
  cout<<f_n2<<" ";
  cout<<f_n1<<" ";
  
  for(int i = 1; i < n; i++){
    f_n = f_n1 + f_n2;
    f_n2 = f_n1;
    f_n1 = f_n;
    cout<<f_n<<" ";
  }
  
  cout<<"\n";
  
  cin.get();
  
  return 0;
}
