/*
ChatGTP explains threads with girl math!

TLDR:
C++ threads = Asking your friends to help multitask. Use them wisely, avoid drama (race conditions), 
and make sure everyone knows when to meet up (joining threads) to keep things smooth!



### The Setup:
Think of your computer program like planning a shopping day with your friends. 
You’ve got a **to-do list** (the tasks your program needs to do), but you want to do things **faster and smarter**. 
Instead of doing everything yourself, you decide to split the tasks among your friends. 
Each of your friends is like a **C++ thread**.



### How Threads Work:
1. **The Main Thread = You**:
    You’re the one coordinating everything. You’re the "main thread." If you try to do everything alone, it’ll take forever.

2. **Adding Threads = Hiring Extra Hands**:
    You call your friends (threads) to help you. For example:
    - You ask Friend A to grab the coffee.
    - Friend B shops for the dress.
    - Friend C checks for the best shoe deals online.

   Now everyone is working **at the same time** (parallel tasks), which means you’ll get things done faster!

3. **Joining Threads = Group Hangout**:
    After everyone finishes their tasks, you all meet up (calling `.join()` on the threads). 
You can't leave until everyone’s back.

4. **Detaching Threads = Independent Friends**:
    Sometimes you say, “You know what, just text me when you’re done, I’ll head out.” 
That’s like `.detach()`—your threads run independently, but you don’t wait for them.



### The Girl Math:
- **More Threads = Faster Results (Usually)**:
    Like delegating tasks to more friends, threads can speed things up, but there’s a catch! 
If you have too many friends (threads) running around and not enough space (resources like CPU), things can get messy (overhead and contention).

- **Mutex = Waiting for Your Turn**:
    If two friends need the same credit card (shared resource), only one can use it at a time. 
A **mutex** ensures they don’t both try to use it simultaneously, avoiding chaos.

- **Race Conditions = Shopping Drama**:
    If Friend A sees a cute bag online and Friend B tries to buy the same bag at the mall, they might accidentally 
double-purchase it. Synchronization (like mutexes) prevents this.


*/