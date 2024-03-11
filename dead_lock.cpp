# in the book, I learn one of the side effect of using std::mutex to luck the function, is that it might introduce deadlock problem
# what is deadlock, guess locking the thread it can not exit, and other thread will not able to access share data
#include <isotream>
#include <thread>
#include <mutex>

std::mutex mtx;

void func(){
  // do something
}

int main(){
  return 0;
}

