/*
The Setup:
Imagine you’re at brunch, and you want to quickly jot down a small task for later. 
Instead of pulling out a giant planner (creating a full function), you grab a napkin and scribble it down. That’s a lambda function — a quick, lightweight, one-off way to write code.

What is a Lambda in C++?
A lambda is like a mini function that you create on the spot. 
It’s great for small, short-lived tasks where you don’t want to waste time setting up something formal.



TLDR:
Lambda: Jotting a note or texting yourself = Efficient, on-the-spot mini tasks.



1. Basic syntax

[capture](parameters) -> return_type { body }

Capture Clause ([]): Specifies how external variables are captured (e.g., by value or reference).
Parameters (()): Input parameters like a regular function.
Return Type (-> return_type): Optional. Automatically deduced if omitted.
Body ({}): The actual code executed by the lambda.
*/



int main()
{
    auto myLambda = []() { std::cout << "Hello, this is a lambda!" << std::endl; };
    myLambda(); // Call the lambda 




}











/*
A little deeper dive brought to you by ChatGTP:



1. **Lambdas = Quick Text Notes:**
   - Writing a regular function in C++ is like carrying a **notebook** for a single grocery item. It’s useful but bulky.
   - Lambdas are like texting yourself, "Don’t forget oat milk 🥛." It’s quick, gets the job done, and doesn’t stick around forever.



2. **Captures = Borrowing Accessories:**
   - When you write a lambda, sometimes it needs to "borrow" things (like variables) from the surrounding code. This is called **capturing**.
   - For example, if you’re shopping and your friend says, "I’ll get oat milk, remind me what size you like?" The size info is **captured** by your friend.

   In C++:
   ```cpp
   int oatMilkSize = 2;
   auto grabOatMilk = [oatMilkSize]() { 
       std::cout << "Buying oat milk size " << oatMilkSize << std::endl; 
   };
   grabOatMilk();
   ```



3. **Anonymous = Low Commitment:**
   - Lambdas don’t even need a name if you’re only using them once. It’s like handing your friend a sticky note and saying, "Here’s the plan for today," but you throw it away after brunch.

   Example:
   ```cpp
   []() { std::cout << "Quick task done!" << std::endl; }();
   ```



4. **Flexible Uses = Multitasking Queen:**
   - Lambdas can do so many things! They’re perfect for things like sorting, filtering, or passing as callbacks.

   Example: Sorting with a lambda
   
   ```cpp

   std::vector<int> nums = {3, 1, 4, 1, 5};
   std::sort(nums.begin(), nums.end(), [](int a, int b) { return a < b; });
   
   ```

   Translation? Sorting your online cart by price, on the fly.
   */