#pragma once

#include <iostream>

/// Interface class for searchable collections of integers
struct searchable {
    virtual bool contains(int x) const = 0;
};
// PART 4: MAKE range A SUBCLASS OF searchable

/// Represents a range between begin (inclusive) and end (exclusive)
struct range {
    int begin;
    int end;

    range(int b, int e) : begin(b), end(e) {}

    // PART 2: SECOND range CONSTRUCTOR GOES HERE

    // PART 3: empty METHOD GOES HERE
};

// PART 1: operator<< FOR range GOES HERE
