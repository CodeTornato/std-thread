# in the book, I learn one of the side effect of using std::mutex to luck the function, is that it might introduce deadlock problem
# what is deadlock, guess locking the thread it can not exit, and other thread will not able to access share data
#include <isotream>
#include <thread>
#include <mutex>

std::mutex mtx;

void lock_func1(){
  // acquire the mutex
  std::lock_guard<std::mutex>(mutex); 
  while(){
  std::cout << "fucn1 is being executed..." << std::endl;
  }
}


void lock_func2(){
// unable to get lock since func1 got the lock all the time
std::cout << "func2 is being executed..." << std::endl;

}

int main(){
  
  return 0;
}

