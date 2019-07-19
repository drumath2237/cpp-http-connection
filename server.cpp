#include <iostream>

#include "cpphttplib/httplib.h"

int main(){
  using namespace httplib;
  using namespace std;

  Server svr;

  svr.Get("/", [](const Request& req, Response& res){
    res.set_content("Hello, World!", "text/plain");
    cout << "Get / accessed" << endl;
    
  });

  svr.listen("localhost", 3000);
  std::cout << "listen on port 3000" << std::endl;
  return 0;
}