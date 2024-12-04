#include <iostream>
//concurrent programing and multithreading usig stl library 

// Mutexes:
// Mutexes are tools that allow you to synchronize access to shared resources between threads. They can be thought of as keys to a locker that can only be held by one worker at a time. For example, if two workers need to access a tool at the same time, they can use a mutex to ensure that only one worker has access at a time. Similarly, in C++, you can use mutexes to synchronize access to shared resources between threads.

// Condition Variables:
// Condition variables are tools that allow you to wait for a specific condition to be met before continuing execution. They can be thought of as traffic lights that control the flow of workers in a factory. For example, if a worker needs a part to complete a task, they can wait at a traffic light until the part is available before continuing. Similarly, in C++, you can use condition variables to wait for a specific condition to be met before continuing execution.

// Futures and Promises:
// Futures and promises are tools that allow you to execute a function in a separate thread and retrieve its result later. They can be thought of as sending a worker to a supplier to pick up a part and bring it back to the factory. For example, if a worker needs a part from a supplier, they can send another worker to pick up the part and bring it back to the factory. Similarly, in C++, you can use futures and promises to execute a function in a separate thread and retrieve its result later.

// In summary, concurrent programming and multithreading in C++ are techniques used to improve the performance and responsiveness of programs that need to perform multiple tasks simultaneously. They can be used for a variety of purposes, such as improving the performance of computationally intensive tasks or improving the responsiveness of user interfaces. Understanding these techniques and how they can be used in real-world scenarios can help you write more efficient and effective code in your C++ programs.