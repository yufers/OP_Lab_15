#include <stdio.h>
#include "libs/data_structures/bitset/bitset.h"
#include "libs/data_structures/array_set/unordered_array_set.h"
#include "libs/data_structures/array_set/ordered_array_set.h"
#include "libs/data_structures/vector/vector.h"
#include "libs/data_structures/vector/vectorVoid.h"

//void test_unordered_array_set_create() {
//    unordered_array_set set1 =
//            unordered_array_set_create(2);
//
//    assert(set1.size == 0);
//    assert(set1.capacity == 2);
//
//    unordered_array_set_delete(set1);
//}
//
//void test_unordered_array_set_create_from_array() {
//    int exp_data[] = {1, 2};
//    unordered_array_set set1 =
//            unordered_array_set_create_from_array((int[]) {1, 2}, 2);
//
//    assert(set1.size == 2);
//    assert(set1.capacity == 2);
//
//    for (int i = 0; i < set1.size; i++) {
//        assert(set1.data[i] == exp_data[i]);
//    }
//
//    unordered_array_set_delete(set1);
//}
//
//void test_unordered_array_set_in() {
//    int exp_data[] = {1, 2, 5, 7};
//    unordered_array_set set1 =
//            unordered_array_set_create_from_array(exp_data, 4);
//
//    assert(set1.size == 4);
//    assert(set1.capacity == 4);
//
//    assert(unordered_array_set_in(set1, 5));
//
//    unordered_array_set_delete(set1);
//}
//
//void test_unordered_array_set_isSubset() {
//    unordered_array_set subset =
//            unordered_array_set_create_from_array((int[]) {1, 2, 7}, 3);
//    unordered_array_set set =
//            unordered_array_set_create_from_array((int[]) {3, 1, 2, 7}, 4);
//
//    assert (unordered_array_set_isSubset(subset, set) == 1);
//
//    unordered_array_set_delete(subset);
//    unordered_array_set_delete(set);
//}
//
//void test_unordered_array_set_insert() {
//    unordered_array_set set1 =
//            unordered_array_set_create_from_array((int[]) {1, 2}, 2);
//    unordered_array_set expectedSet =
//            unordered_array_set_create_from_array((int[]) {1, 2, 3}, 3);
//
//    unordered_array_set_insert(&set1, 3);
//    assert (unordered_array_set_isEqual(set1, expectedSet));
//
//    unordered_array_set_delete(set1);
//    unordered_array_set_delete(expectedSet);
//}
//
//void test_unordered_array_set_deleteElement1() {
//    unordered_array_set set1 =
//            unordered_array_set_create_from_array((int[]) {1, 2, 3}, 3);
//    unordered_array_set expectedSet =
//            unordered_array_set_create_from_array((int[]) {1, 2}, 2);
//
//    unordered_array_set_deleteElement(&set1, 3);
//    assert (unordered_array_set_isEqual(set1, expectedSet));
//
//    unordered_array_set_delete(set1);
//    unordered_array_set_delete(expectedSet);
//}
//
//void test_unordered_array_set_deleteElement2() {
//    unordered_array_set set1 =
//            unordered_array_set_create_from_array((int[]) {1, 2, 3}, 3);
//    unordered_array_set expectedSet =
//            unordered_array_set_create_from_array((int[]) {2, 3}, 2);
//
//    unordered_array_set_deleteElement(&set1, 1);
//    assert (unordered_array_set_isEqual(set1, expectedSet));
//
//    unordered_array_set_delete(set1);
//    unordered_array_set_delete(expectedSet);
//}
//
//void test_unordered_array_set_intersection() {
//    unordered_array_set set1 =
//            unordered_array_set_create_from_array((int[]) {1, 2}, 2);
//    unordered_array_set set2 =
//            unordered_array_set_create_from_array((int[]) {2, 3}, 2);
//    unordered_array_set resSet =
//            unordered_array_set_intersection(set1, set2);
//    unordered_array_set expectedSet =
//            unordered_array_set_create_from_array((int[]) {2}, 1);
//    assert (unordered_array_set_isEqual(resSet, expectedSet));
//
//    unordered_array_set_delete(set1);
//    unordered_array_set_delete(set2);
//    unordered_array_set_delete(resSet);
//    unordered_array_set_delete(expectedSet);
//}
//
//void test_unordered_array_set_difference() {
//    unordered_array_set set1 =
//            unordered_array_set_create_from_array((int[]) {1, 2}, 2);
//    unordered_array_set set2 =
//            unordered_array_set_create_from_array((int[]) {2, 3}, 2);
//    unordered_array_set resSet =
//            unordered_array_set_difference(set1, set2);
//    unordered_array_set expectedSet =
//            unordered_array_set_create_from_array((int[]) {1}, 1);
//    assert (unordered_array_set_isEqual(resSet, expectedSet));
//
//    unordered_array_set_delete(set1);
//    unordered_array_set_delete(set2);
//    unordered_array_set_delete(resSet);
//    unordered_array_set_delete(expectedSet);
//}
//
//void test_unordered_array_set_symmetricDifference() {
//    unordered_array_set set1 =
//            unordered_array_set_create_from_array((int[]) {1, 2}, 2);
//    unordered_array_set set2 =
//            unordered_array_set_create_from_array((int[]) {2, 3}, 2);
//    unordered_array_set resSet =
//            unordered_array_set_symmetricDifference(set1, set2);
//    unordered_array_set expectedSet =
//            unordered_array_set_create_from_array((int[]) {1, 3}, 2);
//    assert (unordered_array_set_isEqual(resSet, expectedSet));
//
//    unordered_array_set_delete(set1);
//    unordered_array_set_delete(set2);
//    unordered_array_set_delete(resSet);
//    unordered_array_set_delete(expectedSet);
//}
//
//void test_unordered_array_set_complement() {
//    unordered_array_set set1 =
//            unordered_array_set_create_from_array((int[]) {2}, 1);
//    unordered_array_set set2 =
//            unordered_array_set_create_from_array((int[]) {1, 2, 3, 6}, 4);
//    unordered_array_set resSet =
//            unordered_array_set_complement(set1, set2);
//    unordered_array_set expectedSet =
//            unordered_array_set_create_from_array((int[]) {1, 3, 6}, 3);
//    assert (unordered_array_set_isEqual(resSet, expectedSet));
//
//    unordered_array_set_delete(set1);
//    unordered_array_set_delete(set2);
//    unordered_array_set_delete(resSet);
//    unordered_array_set_delete(expectedSet);
//}
//
//void test_unordered_array_set_union1() {
//    unordered_array_set set1 =
//            unordered_array_set_create_from_array((int[]) {1, 2}, 2);
//    unordered_array_set set2 =
//            unordered_array_set_create_from_array((int[]) {2, 3}, 2);
//    unordered_array_set resSet =
//            unordered_array_set_union(set1, set2);
//    unordered_array_set expectedSet =
//            unordered_array_set_create_from_array((int[]) {1, 2, 3}, 3);
//    assert (unordered_array_set_isEqual(resSet, expectedSet));
//
//    unordered_array_set_delete(set1);
//    unordered_array_set_delete(set2);
//    unordered_array_set_delete(resSet);
//    unordered_array_set_delete(expectedSet);
//}
//
//void test_unordered_array_set_union2() {
//    unordered_array_set set1 = unordered_array_set_create_from_array((int[]) {1, 2, 3}, 3);
//    unordered_array_set set2 =
//            unordered_array_set_create_from_array((int[]) {}, 0);
//    unordered_array_set resSet =
//            unordered_array_set_union(set1, set2);
//    unordered_array_set expectedSet =
//            unordered_array_set_create_from_array((int[]) {1, 2, 3}, 3);
//    assert (unordered_array_set_isEqual(resSet, expectedSet));
//
//    unordered_array_set_delete(set1);
//    unordered_array_set_delete(set2);
//    unordered_array_set_delete(resSet);
//    unordered_array_set_delete(expectedSet);
//}
//
//void test_unordered_array_set_union() {
//    test_unordered_array_set_union1();
//    test_unordered_array_set_union2();
//}
//
//void test_unordered_array_set_deleteElement() {
//    test_unordered_array_set_deleteElement1();
//    test_unordered_array_set_deleteElement2();
//}
//
////---------------------------------------------------------------------------
//
//void test_ordered_array_set_create() {
//    ordered_array_set set1 =
//            ordered_array_set_create(2);
//
//    assert(set1.size == 0);
//    assert(set1.capacity == 2);
//
//    ordered_array_set_delete(set1);
//}
//
//void test_ordered_array_set_create_from_array() {
//    int exp_data[] = {1, 2};
//    ordered_array_set set1 =
//            ordered_array_set_create_from_array((int[]) {2, 1}, 2);
//
//    assert(set1.size == 2);
//    assert(set1.capacity == 2);
//
//    for (int i = 0; i < set1.size; i++) {
//        assert(set1.data[i] == exp_data[i]);
//    }
//
//    ordered_array_set_delete(set1);
//}
//
//void test_ordered_array_set_in() {
//    ordered_array_set set1 =
//            ordered_array_set_create_from_array((int[]){7, 5, 9, 1}, 4);
//
//    assert(set1.size == 4);
//    assert(set1.capacity == 4);
//
//    assert(ordered_array_set_in(&set1, 5));
//
//    ordered_array_set_delete(set1);
//}
//
//void test_ordered_array_set_isSubset() {
//    ordered_array_set subset =
//            ordered_array_set_create_from_array((int[]) {7, 1, 2}, 3);
//    ordered_array_set set =
//            ordered_array_set_create_from_array((int[]) {6, 1, 2, 7}, 4);
//
//    assert (ordered_array_set_isSubset(subset, set) == 0);
//
//    ordered_array_set_delete(subset);
//    ordered_array_set_delete(set);
//}
//
//void test_ordered_array_set_insert() {
//    ordered_array_set set1 =
//            ordered_array_set_create_from_array((int[]) {1, 3}, 2);
//    ordered_array_set expectedSet =
//            ordered_array_set_create_from_array((int[]) {1, 3, 3}, 3);
//
//    ordered_array_set_insert(&set1, 3);
//    assert (ordered_array_set_isEqual(set1, expectedSet));
//
//    ordered_array_set_delete(set1);
//    ordered_array_set_delete(expectedSet);
//}
//
//void test_ordered_array_set_deleteElement1() {
//    ordered_array_set set1 =
//            ordered_array_set_create_from_array((int[]) {1, 2, 3}, 3);
//    ordered_array_set expectedSet =
//            ordered_array_set_create_from_array((int[]) {1, 2}, 2);
//
//    ordered_array_set_deleteElement(&set1, 3);
//    assert (ordered_array_set_isEqual(set1, expectedSet));
//
//    ordered_array_set_delete(set1);
//    ordered_array_set_delete(expectedSet);
//}
//
//void test_ordered_array_set_deleteElement2() {
//    ordered_array_set set1 =
//            ordered_array_set_create_from_array((int[]) {1, 2, 3}, 3);
//    ordered_array_set expectedSet =
//            ordered_array_set_create_from_array((int[]) {2, 3}, 2);
//
//    ordered_array_set_deleteElement(&set1, 1);
//    assert (ordered_array_set_isEqual(set1, expectedSet));
//
//    ordered_array_set_delete(set1);
//    ordered_array_set_delete(expectedSet);
//}
//
//void test_ordered_array_set_intersection() {
//    ordered_array_set set1 =
//            ordered_array_set_create_from_array((int[]) {1, 2}, 2);
//    ordered_array_set set2 =
//            ordered_array_set_create_from_array((int[]) {2, 3}, 2);
//    ordered_array_set resSet =
//            ordered_array_set_intersection(set1, set2);
//    ordered_array_set expectedSet =
//            ordered_array_set_create_from_array((int[]) {2}, 1);
//    assert (ordered_array_set_isEqual(resSet, expectedSet));
//
//    ordered_array_set_delete(set1);
//    ordered_array_set_delete(set2);
//    ordered_array_set_delete(resSet);
//    ordered_array_set_delete(expectedSet);
//}
//
//void test_ordered_array_set_difference() {
//    ordered_array_set set1 =
//            ordered_array_set_create_from_array((int[]) {1, 2}, 2);
//    ordered_array_set set2 =
//            ordered_array_set_create_from_array((int[]) {2, 3}, 2);
//    ordered_array_set resSet =
//            ordered_array_set_difference(set1, set2);
//    ordered_array_set expectedSet =
//            ordered_array_set_create_from_array((int[]) {1}, 1);
//    assert (ordered_array_set_isEqual(resSet, expectedSet));
//
//    ordered_array_set_delete(set1);
//    ordered_array_set_delete(set2);
//    ordered_array_set_delete(resSet);
//    ordered_array_set_delete(expectedSet);
//}
//
//void test_ordered_array_set_symmetricDifference() {
//    ordered_array_set set1 =
//            ordered_array_set_create_from_array((int[]) {1, 2}, 2);
//    ordered_array_set set2 =
//            ordered_array_set_create_from_array((int[]) {2, 3}, 2);
//    ordered_array_set resSet =
//            ordered_array_set_symmetricDifference(set1, set2);
//    ordered_array_set expectedSet =
//            ordered_array_set_create_from_array((int[]) {1, 3}, 2);
//    assert (ordered_array_set_isEqual(resSet, expectedSet));
//
//    ordered_array_set_delete(set1);
//    ordered_array_set_delete(set2);
//    ordered_array_set_delete(resSet);
//    ordered_array_set_delete(expectedSet);
//}
//
//void test_ordered_array_set_complement() {
//    ordered_array_set set1 =
//            ordered_array_set_create_from_array((int[]) {2}, 1);
//    ordered_array_set set2 =
//            ordered_array_set_create_from_array((int[]) {1, 2, 3, 6}, 4);
//    ordered_array_set resSet =
//            ordered_array_set_complement(set1, set2);
//    ordered_array_set expectedSet =
//            ordered_array_set_create_from_array((int[]) {1, 3, 6}, 3);
//    assert (ordered_array_set_isEqual(resSet, expectedSet));
//
//    ordered_array_set_delete(set1);
//    ordered_array_set_delete(set2);
//    ordered_array_set_delete(resSet);
//    ordered_array_set_delete(expectedSet);
//}
//
//void test_ordered_array_set_union1() {
//    ordered_array_set set1 =
//            ordered_array_set_create_from_array((int[]) {1, 2}, 2);
//    ordered_array_set set2 =
//            ordered_array_set_create_from_array((int[]) {2, 3}, 2);
//    ordered_array_set resSet =
//            ordered_array_set_union(set1, set2);
//    ordered_array_set expectedSet =
//            ordered_array_set_create_from_array((int[]) {1, 2, 3}, 3);
//    assert (ordered_array_set_isEqual(resSet, expectedSet));
//
//    ordered_array_set_delete(set1);
//    ordered_array_set_delete(set2);
//    ordered_array_set_delete(resSet);
//    ordered_array_set_delete(expectedSet);
//}
//
//void test_ordered_array_set_union2() {
//    ordered_array_set set1 = ordered_array_set_create_from_array((int[]) {1, 2, 3}, 3);
//    ordered_array_set set2 =
//            ordered_array_set_create_from_array((int[]) {}, 0);
//    ordered_array_set resSet =
//            ordered_array_set_union(set1, set2);
//    ordered_array_set expectedSet =
//            ordered_array_set_create_from_array((int[]) {1, 2, 3}, 3);
//    assert (ordered_array_set_isEqual(resSet, expectedSet));
//
//    ordered_array_set_delete(set1);
//    ordered_array_set_delete(set2);
//    ordered_array_set_delete(resSet);
//    ordered_array_set_delete(expectedSet);
//}
//
//void test_ordered_array_set_union() {
//    test_ordered_array_set_union1();
//    test_ordered_array_set_union2();
//}
//
//void test_ordered_array_set_deleteElement() {
//    test_ordered_array_set_deleteElement1();
//    test_ordered_array_set_deleteElement2();
//}
//
//void test() {
//    test_unordered_array_set_create();
//    test_unordered_array_set_create_from_array();
//    test_unordered_array_set_in();
//    test_unordered_array_set_isSubset();
//    test_unordered_array_set_insert();
//    test_unordered_array_set_deleteElement();
//    test_unordered_array_set_union();
//    test_unordered_array_set_intersection();
//    test_unordered_array_set_difference();
//    test_unordered_array_set_symmetricDifference();
//    test_unordered_array_set_complement();
//
//    //--------------------------------------------------------
//
//    test_ordered_array_set_create();
//    test_ordered_array_set_create_from_array();
//    test_ordered_array_set_in();
//    test_ordered_array_set_isSubset();
//    test_ordered_array_set_insert();
//    test_ordered_array_set_deleteElement();
//    test_ordered_array_set_union();
//    test_ordered_array_set_intersection();
//    test_ordered_array_set_difference();
//    test_ordered_array_set_symmetricDifference();
//    test_ordered_array_set_complement();
//}

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

//--------------------------------------------------------

vectorVoid test_createVectorV() {
    vectorVoid vec = createVectorV(5, sizeof(int));

    assert(vec.capacity == 5);
    assert(vec.size == 0);
    assert(vec.data != NULL);
    assert(vec.baseTypeSize == sizeof(int));

    deleteVectorV(&vec);
}

void test_reserveV() {
    vectorVoid vec = createVectorV(5, sizeof(int));
    reserveV(&vec, 8);

    assert(vec.capacity == 8);
    assert(vec.size == 0);
    assert(vec.data != NULL);
    assert(vec.baseTypeSize == sizeof(int));

    reserveV(&vec, 3);

    assert(vec.capacity == 3);
    assert(vec.size == 0);
    assert(vec.data != NULL);
    assert(vec.baseTypeSize == sizeof(int));

    int i = 1;
    pushBackV(&vec, &i);
    i = 2;
    pushBackV(&vec, &i);
    i = 3;
    pushBackV(&vec, &i);

    reserveV(&vec, 2);

    assert(vec.capacity == 2);
    assert(vec.size == 2);
    assert(vec.data != NULL);
    assert(vec.baseTypeSize == sizeof(int));
}

void test_shrinkToFitV() {
    vectorVoid vec = createVectorV(6, sizeof(int));

    shrinkToFitV(&vec);

    assert(vec.capacity == 0);
    assert(vec.size == 0);
    assert(vec.data != NULL);
}

void test_clearV() {
    vectorVoid vec = createVectorV(5, sizeof(int));

    int i = 1;
    pushBackV(&vec, &i);
    i = 2;
    pushBackV(&vec, &i);
    i = 3;
    pushBackV(&vec, &i);

    assert(vec.capacity == 5);
    assert(vec.size == 3);
    assert(vec.data != NULL);

    clearV(&vec);

    assert(vec.capacity == 5);
    assert(vec.size == 0);
    assert(vec.data != NULL);
}

void test_deleteVectorV() {
    vectorVoid vec = createVectorV(6, sizeof(int));

    deleteVectorV(&vec);

    assert(vec.capacity == 0);
    assert(vec.size == 0);
    assert(vec.data == NULL);
}
//
bool test_isEmptyV() {
    vectorVoid vec = createVectorV(6, sizeof(int));

    bool res = isEmptyV(&vec);

    assert(res);
}

bool test_isFullV() {
    vectorVoid vec = createVectorV(6, sizeof(int));

    bool res = isFullV(&vec);

    assert(!res);
}

void test_getVectorValueV() {
    vectorVoid vec = createVectorV(6, sizeof(int));

    int x = 4;

    int i = 1;
    pushBackV(&vec, &i);
    i = 2;
    pushBackV(&vec, &i);
    i = 3;
    pushBackV(&vec, &x);

    int j = 3;
    getVectorValueV(&vec, 2, &j);

    assert(&j != &i);
}

void test_setVectorValueV() {
    vectorVoid vec = createVectorV(6, sizeof(int));

    int x = 4;

    int i = 1;
    pushBackV(&vec, &i);
    i = 2;
    pushBackV(&vec, &i);
    i = 3;
    setVectorValueV(&vec, 1, &x);

    int j = 3;
    getVectorValueV(&vec, 1, &j);

    assert(&j != &i);
}

void test_popBackV() {
    vectorVoid vec = createVectorV(0, sizeof(int));

    int j = 10;
    pushBackV(&vec, &j);

    assert(vec.size == 1);

    popBackV(&vec);

    assert(vec.size == 0);
    assert(vec.capacity == 1);
}

void test_pushBack_emptyVectorV() {
    vectorVoid vec = createVectorV(0, sizeof(int));

    assert(vec.capacity == 0);
    assert(vec.size == 0);
    assert(vec.data != NULL);

    int x = 4;
    pushBackV(&vec, &x);

    assert(vec.capacity == 1);
    assert(vec.size == 1);
    assert(vec.data != NULL);

    assert(((int *) vec.data)[0] == 4);
}

void test_pushBack_fullVectorV() {
    vectorVoid vec = createVectorV(2, sizeof(int));

    assert(vec.capacity == 2);
    assert(vec.size == 0);
    assert(vec.data != NULL);

    int a = 1;
    int x = 4;
    pushBackV(&vec, &a);
    pushBackV(&vec, &x);

    assert(vec.capacity == 2);
    assert(vec.size == 2);
    assert(vec.data != NULL);

    assert(((int *) vec.data)[1] == 4);

    int y = 5;
    pushBackV(&vec, &y);

    assert(vec.capacity == 4);
    assert(vec.size == 3);
    assert(vec.data != NULL);

    assert(((int *) vec.data)[0] == 1);
    assert(((int *) vec.data)[2] == 5);
}

void test_functional1() {
    int n = 10;

    int test_data[] = {3, 6, 7, 1, 0, 8, 9, 3, 2, 16};

    vectorVoid v = createVectorV(0, sizeof(int));
    for (int i = 0; i < n; i++) {
        int x = test_data[i];
        pushBackV(&v, &x);
    }
    for (int i = 0; i < n; i++) {
        int x;
        getVectorValueV(&v, i, &x);
        assert(x == test_data[i]);
    }
}

void test_functional2() {
    int n = 10;

    float test_data[] = {3.12f, 6.124f, 7.14f, 1.891f, 0.13f, 8.1245f, 9.03f, 3.463f, 2.124f, 16.096f};

    vectorVoid v = createVectorV(0, sizeof(float));
    for (int i = 0; i < n; i++) {
        float x = test_data[i];
        pushBackV(&v, &x);
    }
    for (int i = 0; i < n; i++) {
        float x;
        getVectorValueV(&v, i, &x);
        assert(x == test_data[i]);
    }
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

    //--------------------------------------------------------

    test_createVectorV();
    test_reserveV();
    test_shrinkToFitV();
    test_clearV();
    test_deleteVectorV();
    test_isEmptyV();
    test_isFullV();
    test_getVectorValueV();
    test_setVectorValueV();
    test_popBackV();
    test_pushBack_emptyVectorV();
    test_pushBack_fullVectorV();
    test_functional1();
    test_functional2();
}

int main() {
    test();
    vectorVoid test;



    return 0;
}
