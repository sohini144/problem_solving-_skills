#include <iostream>
#include <string>

using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   ?? n;
   ?? sum;
   ?? a;

   a =1;
   sum =0;
   raptor_prompt_variable_zzyz ="enter the number";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> n;
   while (!(a>n))
   {
      cout << a << endl;      sum =sum+a;
      a =a+1;
   }
   cout << sum << endl;
   return 0;
}
