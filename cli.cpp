#include <iostream>

#include "cpphttplib/httplib.h"

using namespace std;

int main()
{
  using namespace httplib;

  Client cli("localhost", 3000);

  auto res = cli.Get("/");
  if(res){
    cout << res->status << endl;
    cout << res->body << endl;
  }

  return 0;
}