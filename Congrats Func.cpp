#include <iostream>

using namespace std;

void congratulate()
{
   string name;

   cout<< "Enter your name";
   cin>>name;

   cout <<"Congratulations"<< name <<"!";
}

int main()
{
    congratulate();

    return 0;
}
