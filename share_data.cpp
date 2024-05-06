#include <iostream>
#include <thread>
#include <mutex>

std::mutex num_mutex;

void printNum(double& num){
  std::lock_guard<std::mutex> num_lock(num_mutex);
  std::cout << "number: " << num << std::endl;
}


void addNum(double& num){
  std::lock_guard<std::mutex> num_lock(num_mutex);
  // add shared number by 1
  num+=1;
  std::cout << "after add num: " << num << std::endl;
}

int main(){
  
  double num = 0;
  // execute multipy times
  int time_to_execute = 5;
  for(int i = 0; i < time_to_execute; i++){
      std::thread t1(printNum,std::ref(num));
      std::thread t2(addNum,std::ref(num));
      t1.join();
      t2.join();
  }

  return 0;
}
