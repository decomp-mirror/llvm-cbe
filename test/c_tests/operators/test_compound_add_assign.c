//===---------------------- LLVM C Backend test file ----------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This code tests to see that the CBE can handle the
// Compound Addition Assignment(a+=b) operator.
// *TW
//
//===----------------------------------------------------------------------===//

int main() {
  int a = 3;
  int b = 3;

  a += b;
  if (a == 6) {
    return 6;
  }
  return 1;
}
