#include <thread>
#include <future>

//something setting launch policy to asyn,and using promise and future ?

void func(){
  // do something
  //...
}

int main(){
// create a thread or with a asyn?
  std::thread thread_{func};
  return 0;
  
}
