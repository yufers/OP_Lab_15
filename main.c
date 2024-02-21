#include <stdio.h>
#include "libs/data_structures/vector/vector.h"
#include "libs/data_structures/matrix/matrix.h"

void test_createVector() {
    vector vec = createVector(5);

    assert(vec.capacity == 5);
    assert(vec.size == 0);
    assert(vec.data != NULL);

    deleteVector(&vec);
}

void test_reserve() {
    vector vec = createVector(5);
    reserve(&vec, 8);

    assert(vec.capacity == 8);
    assert(vec.size == 0);
    assert(vec.data != NULL);

    reserve(&vec, 3);

    assert(vec.capacity == 3);
    assert(vec.size == 0);
    assert(vec.data != NULL);

    pushBack(&vec, 1);
    pushBack(&vec, 2);
    pushBack(&vec, 3);

    reserve(&vec, 2);

    assert(vec.capacity == 2);
    assert(vec.size == 2);
    assert(vec.data != NULL);
}

void test_clear() {
    vector vec = createVector(5);

    pushBack(&vec, 1);
    pushBack(&vec, 2);
    pushBack(&vec, 3);

    assert(vec.capacity == 5);
    assert(vec.size == 3);
    assert(vec.data != NULL);

    clear(&vec);

    assert(vec.capacity == 5);
    assert(vec.size == 0);
    assert(vec.data != NULL);
}

void test_shrinkToFit() {
    vector vec = createVector(6);

    shrinkToFit(&vec);

    assert(vec.capacity == 0);
    assert(vec.size == 0);
    assert(vec.data != NULL);
}

void test_deleteVector() {
    vector vec = createVector(6);

    deleteVector(&vec);

    assert(vec.capacity == 0);
    assert(vec.size == 0);
    assert(vec.data == NULL);
}
//
bool test_isEmpty() {
    vector vec = createVector(6);

    bool res = isEmpty(&vec);

    assert(res);
}

bool test_isFull() {
    vector vec = createVector(6);

    bool res = isFull(&vec);

    assert(!res);
}

int test_getVectorValue() {
    vector vec = createVector(6);

    int x = 4;

    pushBack(&vec, 1);
    pushBack(&vec, 2);
    pushBack(&vec, x);

    int res = getVectorValue(&vec, 2);

    assert(res == x);
}

void test_pushBack_emptyVector() {
    vector vec = createVector(0);

    assert(vec.capacity == 0);
    assert(vec.size == 0);
    assert(vec.data != NULL);

    int x = 4;
    pushBack(&vec, x);

    assert(vec.capacity == 1);
    assert(vec.size == 1);
    assert(vec.data != NULL);

    assert(vec.data[0] == 4);
}

void test_pushBack_fullVector() {
    vector vec = createVector(2);

    assert(vec.capacity == 2);
    assert(vec.size == 0);
    assert(vec.data != NULL);

    int x = 4;
    pushBack(&vec, 1);
    pushBack(&vec, x);

    assert(vec.capacity == 2);
    assert(vec.size == 2);
    assert(vec.data != NULL);

    assert(vec.data[1] == x);

    int y = 5;
    pushBack(&vec, y);

    assert(vec.capacity == 4);
    assert(vec.size == 3);
    assert(vec.data != NULL);

    assert(vec.data[2] == y);
}

void test_popBack() {
    vector vec = createVector(0);
    pushBack(&vec, 10);

    assert(vec.size == 1);

    popBack(&vec);

    assert(vec.size == 0);
    assert(vec.capacity == 1);
}

void test_atVector_notEmptyVector() {
    vector vec = createVector(5);
    int val = 3;
    pushBack(&vec, 1);
    pushBack(&vec, 2);
    pushBack(&vec, val);
    pushBack(&vec, 4);
    pushBack(&vec, 5);

    assert(vec.size > 0);

    int *res = atVector(&vec, 2);

    assert(val == *res);
}

void test_atVector_requestToLastElement() {
    vector vec = createVector(5);
    int val = 5;
    pushBack(&vec, 1);
    pushBack(&vec, 2);
    pushBack(&vec, 3);
    pushBack(&vec, 4);
    pushBack(&vec, val);

    int *res = atVector(&vec, 4);

    assert(val == *res);
}

void test_back_oneElementInVector() {
    vector vec = createVector(1);

    pushBack(&vec, 1);
    pushBack(&vec, 2);

    int *res = back(&vec);

    assert(&vec.data[1] == res);
}

void test_front_oneElementInVector() {
    vector vec = createVector(1);

    pushBack(&vec, 1);
    pushBack(&vec, 2);

    int *res = front(&vec);

    assert(&vec.data[0] == res);
}

void test() {
    test_createVector();
    test_reserve();
    test_clear();
    test_shrinkToFit();
    test_deleteVector();
    test_isEmpty();
    test_isFull();
    test_getVectorValue();
    test_pushBack_emptyVector();
    test_pushBack_fullVector();
    test_popBack();
    test_atVector_notEmptyVector();
    test_atVector_requestToLastElement();
    test_back_oneElementInVector();
    test_front_oneElementInVector();
}

int main() {
//    test();

    matrix m = getMemMatrix(3, 3);
    matrix *ms = getMemArrayOfMatrices(3, 2, 2);

//    inputMatrix(&m);
//    outputMatrix(m);

    inputMatrices(ms, 3);
    outputMatrices(ms, 3);

    return 0;
}
