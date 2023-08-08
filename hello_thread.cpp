#include <thread>
#include <isotream>

void helloThread(int num){
  std::cout << "Thead " << num << "is being called! " << std::endl; 
}

int main(){
  std::thread t1(helloThread,2);
  t1.join();
  return 0;
}
