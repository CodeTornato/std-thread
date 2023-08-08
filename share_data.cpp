#include <iostream>
#include <pthread>
#include <mutex>

std::mutex num_mutex;

void printNum(double num){
  std::lock_guard<std::mutex> num_lock(num_mutex);
  std::cout << "number is: " << num << std::endl;
}

void addNum(double num){
  std::lock_guard<std::mutex> num_lock(num_mutex);
  // modifying shared number here by adding 1
  num+=1;
}

int main(){

  double num = 0;
  std::thread t1(printNum,num);
  std::thread t2(addNum,num);
  t1.join();
  t2.join();
  // I want to execute multipy time here , how can I do it ?
}
