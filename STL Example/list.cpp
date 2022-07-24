/**
 * @file list.cpp
 *
 * @author Pushpanshu Ranjan Singh (pushpanshuranjansingh@gmail.com)
 * @brief List Implementation
 * @version 1.0
 * @date 2022-07-24
 *
 * @copyright Copyright (c) 2022
 *
 */

/**
 * @brief  List : List is a container that stores elements in a linear order. It behaves like a doubly linked list.
 * Key Points:
 * 1. Elements can access squentially only not in random order like vector.
 * 2. List is a doubly linked list(Bidirectional linear list).
 * 3. List is STL container.
 * 4. Single List is STL forward iterator but in doubly linked list it is bidirectonal.
 * 5. O(1) for insertion and deletion.
 * 6. non-contiguous memory allocation.
 *
 * It has additional functions mentioned below.:
 *
 * 1. front() : Returns the first element in the list.
 * 2. back() : Returns the last element in the list.
 * 3. push_front() : Adds an element to the front of the list.
 * 4. push_back() : Adds an element to the back of the list.
 * 5. pop_front() : Removes the first element from the list.
 * 6. pop_back() : Removes the last element from the list.
 * 7. insert() : Inserts an element at a specified position.
 * 8. empty() : Returns true if the list is empty, false otherwise.
 * 8. erase() : Removes an element from a specified position or range of position.
 * 9. assign() : Assigns the contents of one list to another.
 * 10. remove() : Removes an element from a specified position.
 * 11. remove_if() : Removes elements from the list based on a predicate.
 * 12. reverse() : Reverses the order of the elements in the list.
 * 13. size() : Returns the number of elements in the list.
 * 14. resize() : Resizes the list to a specified number of elements.
 * 15. sort() : Sorts the elements in the list.
 * 17. max_size() : Returns the maximum number of elements that the list can contain.
 * 18. unique() : Removes duplicates from the list.
 * 19. emplace_front() : Adds an element to the front of the list.
 * 20. emplace_back() : Adds an element to the back of the list.
 * 21. clear() : Removes all elements from the list.
 * 22. operator = : Assigns the contents of one list to another.
 * 23. swap() : Swaps the contents of two lists.
 * 24. splice() : Moves elements from one list to another.
 * 25. merge() : Merges two sorted lists into a single sorted list.
 * 26. emplace() : Adds an element to the list.
 * 27. advance(): iterator to point to ith position
 *
 * Space Auxiliary: O(1)
 * Insertion: O(1)
 * Deletion: O(1)
 * Search: O(n)
 * Sorting: O(n log n)
 */

#include <iostream>
#include <list>

using namespace std;
void printList(list<int>);

int main()
{

    list<int> l;
    list<int> l2;

    l.push_back(1);
    l.push_back(2);
    l.push_front(3);
    l.push_front(4);
    l.push_back(5);
    l2.push_back(57);
    l2.push_back(34);
    l2.push_front(7);

    list<int>::iterator it = l.begin(); // initializing iterator to point to first element of list

    cout << "\n\nData in list: ";
    printList(l);

    cout << "\n\n*** Data at first index: " << l.front();
    cout << "\n\n*** Data at last index: " << l.back();

    cout << "\n\n*** Data insert at index 3 using advance: ";
    advance(it, 3); // iterator to point to 'i'th position
    l.insert(it, 40);
    printList(l);

    /**
     * @attention: Need to check how @code
     * {l.erase(it);}
     * @endcode
     * works.
     */
    cout << "\n\n*** Data erase at index 1: ";
    // advance(it,2); // iterator to point to 'i'th position
    l.erase(it);
    printList(l);
    cout<<"SOMETHING WRONG HERE!!!";

    cout << "\n\n*** Pushing 99 in front: ";
    l.push_front(99);
    printList(l);

    cout << "\n\n*** Pushing 88 in back: ";
    l.push_back(88);
    printList(l);

    cout << "\n\n*** Poping element from front: ";
    l.pop_front();
    printList(l);

    cout << "\n\n*** Poping element form back: ";
    l.pop_back();
    printList(l);

    cout << "\n\n*** Sorting the list: ";
    l.sort();
    printList(l);

    cout << "\n\n*** Reversing element of list: ";
    l.reverse();
    printList(l);

    cout << "\n\n*** Merging two list: ";
    l.merge(l2);
    printList(l);

    cout << "\n\n";
    return 0;
}

void printList(list<int> l)
{
    list<int>::iterator it;
    for (it = l.begin(); it != l.end(); it++)
        cout << *it << " ";
}