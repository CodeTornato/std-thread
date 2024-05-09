#include <thread>
#include <future>

//something setting launch policy to asyn,and using promise and future ?

void func(){
  // do something
}

int main(){
  std::thread thread_{func};
  return 0;
  
}
