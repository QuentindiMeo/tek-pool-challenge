/*
** EPITECH CHALLENGE, 2023
** sort_int_array tests
*/

#include <criterion/criterion.h>

void my_sort_int_array(int *array, int size);

Test(my_sort_int_array, test_ordered)
{
    int array[] = { 1, 2, 3, 4, 5 };

    my_sort_int_array(array, 5);
    cr_assert_eq(array[0], 1, "Expected 1, got %d", array[0]);
    cr_assert_eq(array[1], 2, "Expected 2, got %d", array[1]);
    cr_assert_eq(array[2], 3, "Expected 3, got %d", array[2]);
    cr_assert_eq(array[3], 4, "Expected 4, got %d", array[3]);
    cr_assert_eq(array[4], 5, "Expected 5, got %d", array[4]);
}

Test(my_sort_int_array, test_reversed)
{
    int array[] = { 5, 4, 3, 2, 1 };

    my_sort_int_array(array, 5);
    cr_assert_eq(array[0], 1, "Expected 1, got %d", array[0]);
    cr_assert_eq(array[1], 2, "Expected 2, got %d", array[1]);
    cr_assert_eq(array[2], 3, "Expected 3, got %d", array[2]);
    cr_assert_eq(array[3], 4, "Expected 4, got %d", array[3]);
    cr_assert_eq(array[4], 5, "Expected 5, got %d", array[4]);
}

Test(my_sort_int_array, test_random)
{
    int array[] = { 5, 2, 4, 1, 3 };

    my_sort_int_array(array, 5);
    cr_assert_eq(array[0], 1, "Expected 1, got %d", array[0]);
    cr_assert_eq(array[1], 2, "Expected 2, got %d", array[1]);
    cr_assert_eq(array[2], 3, "Expected 3, got %d", array[2]);
    cr_assert_eq(array[3], 4, "Expected 4, got %d", array[3]);
    cr_assert_eq(array[4], 5, "Expected 5, got %d", array[4]);
}

Test(my_sort_int_array, test_empty)
{
    int array[] = {  };

    my_sort_int_array(array, 0);
}

Test(my_sort_int_array, test_one)
{
    int array[] = { 1 };

    my_sort_int_array(array, 1);
    cr_assert_eq(array[0], 1, "Expected 1, got %d", array[0]);
}

Test(my_sort_int_array, test_two)
{
    int array[] = { 2, 1 };

    my_sort_int_array(array, 2);
    cr_assert_eq(array[0], 1, "Expected 1, got %d", array[0]);
    cr_assert_eq(array[1], 2, "Expected 2, got %d", array[1]);
}

Test(my_sort_int_array, test_three)
{
    int array[] = { 3, 2, 1 };

    my_sort_int_array(array, 3);
    cr_assert_eq(array[0], 1, "Expected 1, got %d", array[0]);
    cr_assert_eq(array[1], 2, "Expected 2, got %d", array[1]);
    cr_assert_eq(array[2], 3, "Expected 3, got %d", array[2]);
}

Test(my_sort_int_array, test_ten_random)
{
    int array[] = { 5, 2, 4, 1, 3, 9, 8, 7, 6, 10 };

    my_sort_int_array(array, 10);
    cr_assert_eq(array[0], 1, "Expected 1, got %d", array[0]);
    cr_assert_eq(array[1], 2, "Expected 2, got %d", array[1]);
    cr_assert_eq(array[2], 3, "Expected 3, got %d", array[2]);
    cr_assert_eq(array[3], 4, "Expected 4, got %d", array[3]);
    cr_assert_eq(array[4], 5, "Expected 5, got %d", array[4]);
    cr_assert_eq(array[5], 6, "Expected 6, got %d", array[5]);
    cr_assert_eq(array[6], 7, "Expected 7, got %d", array[6]);
    cr_assert_eq(array[7], 8, "Expected 8, got %d", array[7]);
    cr_assert_eq(array[8], 9, "Expected 9, got %d", array[8]);
    cr_assert_eq(array[9], 10, "Expected 10, got %d", array[9]);
}
