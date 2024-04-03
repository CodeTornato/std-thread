# in the book, I learn one of the side effect of using std::mutex to luck the function, is that it might introduce deadlock problem
# what is deadlock, guess locking the thread it can not exit, and other thread will not able to access share data
#include <isotream>
#include <thread>
#include <mutex>

std::mutex mtx;

void lock_func1(){
  // acquire the mutex
  std::lock_guard<std::mutex> guard(mutex); 
  while(){
  std::cout << "fucn1 is being executed..." << std::endl;
  }  // here func1 is unable to release mutex since its in a dead loop,so func2 will never get the mutex
}


void lock_func2(){
  
// fail to get lock if lock_func1 was started first
std::lock_guard<std::mutex> guard(mutex);
std::cout << "func2 is being executed..." << std::endl;

}

int main(){
  std::thread f1_thread(lock_func1);
  std::thread f2_thread(lock_func2);
  f1_thread.join();
  f2_thread.join();
  return 0;
}

