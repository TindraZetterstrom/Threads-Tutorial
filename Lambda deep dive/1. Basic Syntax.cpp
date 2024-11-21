//A lambda expression is an anonymous function that you can define inline.
// It is especially useful in scenarios like threading, callbacks, and algorithms where you need a short function without explicitly declaring one.

// 1. Basic syntax

// [capture](parameters) -> return_type { body }

// Capture Clause ([]): Specifies how external variables are captured (e.g., by value or reference).
// Parameters (()): Input parameters like a regular function.
// Return Type (-> return_type): Optional. Automatically deduced if omitted.
// Body ({}): The actual code executed by the lambda.