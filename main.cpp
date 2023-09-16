#include <iostream>
#include <string>
using std::cin, std::cout, std::endl, std::string;

int main()
{
  string input;

  while (cin >> input)
  {

    for ( int i = 0; i < static_cast<int>(input.size()); ++i)
    {
       int prev = i-1;
       int after= i+1;
       

       if (prev >=0)
        {
           int diff = std::abs((static_cast<int>(input.at(i)) - static_cast<int>(input.at(prev))));
           
          if (diff <=1) {
             cout << input.at(i);
             continue;

          }
       }
       if (after < static_cast<int>(input.size()) ) {
          int diff =(std::abs( static_cast<int>(input.at(after)) - (static_cast<int>(input.at(i))) ));
          if (diff <= 1) {
             cout << input.at(i);
             continue;

          }
       }
    
    }
  
  cout <<endl;
  }

}
