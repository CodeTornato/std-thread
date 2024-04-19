# std-thread
this repo is for learning C++ std::thread

   ``std::thread ``

   hello_thread.cpp --- the example of how to create a std::thread

   share_data.cpp    --- how to use std::mutex to lock a thread which is acessing data,mutual exclusion.\

   thread ownership and transfering ownership?
   
    std::aysnc
    std::future
    std::result_of
    std::bind
    std::forward
   future - promise --- single shot thread communication 

    
   more topic to cover --- atomic,thread sync, lock free design, lock-step
    std::atomic
   thread pools
    message queue
   condition variables
   synchronizing data betweens different threads
   
multi-threading use case: 
   - same operating on the multiple data.
   - different operation on the same data.
   - paralle compute?
