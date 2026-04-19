// Copyright 2021 NNTU-CS
#ifndef INCLUDE_TSTACK_H_
#define INCLUDE_TSTACK_H_

template<typename T, int size>
class TStack {
 private:
  static const int kSize = size;
  T arr[kSize];
  int top_idx;

 public:
  TStack() : top_idx(-1) {}

  void push(const T& value) {
    if (top_idx < kSize - 1) {
      arr[++top_idx] = value;
    }
  }

  T pop() {
    if (top_idx >= 0) {
      return arr[top_idx--];
    }
    return T();
  }

  T top() const {
    if (top_idx >= 0) {
      return arr[top_idx];
    }
    return T();
  }

  bool isEmpty() const {
    return top_idx == -1;
  }

  bool isFull() const {
    return top_idx == kSize - 1;
  }
};

#endif  // INCLUDE_TSTACK_H_
