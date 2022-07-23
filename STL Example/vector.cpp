/**
 * @file vector.cpp
 * 
 * @author Pushpanshu Ranjan Singh (pushpanshuranjansingh@gmail.com)
 * @brief Vector Implementation
 * @version 1.0
 * @date 2022-07-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/**
 * @brief Vector : Vectors are the same as dynamic arrays which adjust its size automatically on addition or deletion of elements.
 * Key Points:
 * 1. Vector is a dynamic array.
 * 2. Elements are place in contiguous storage so it can be accessed by index.
 * 3. Vector is resizable.
 * 4. Vector is mutable.
 * 5. Vector is STL container.
 * 6. Vector is STL forward iterator.
 * 7. O(1) for insertion, deletion and access.
 * 
 * 
 * It has additional functions mentioned below.:
 * 
 * Modifer:
 * 1. push_back() : Adds an element to the end of the vector.
 * 2. pop_back() : Removes the last element from the vector.
 * 3. insert() : Inserts an element at a specified position.
 * 4. erase() : Removes an element from a specified position or range of position.
 * 5. clear() : Removes all elements from the vector.
 * 6. size() : Returns the number of elements in the vector.
 * 7. empty() : Returns true if the vector is empty, false otherwise.
 * 8. front() : Returns the first element in the vector.
 * 9. back() : Returns the last element in the vector.
 * 10. swap() : Swaps the contents of two vectors.
 * 
 * 
 * 11. operator[]() : Returns the element at a specified position.
 * 12. operator=() : Assigns the contents of one vector to another.
 * 13. operator==() : Returns true if two vectors are equal, false otherwise.
 * 14. operator!=() : Returns true if two vectors are not equal, false otherwise.
 * 15. operator+() : Returns the sum of two vectors.
 * 16. operator-() : Returns the difference of two vectors.
 * 17. operator*() : Returns the product of two vectors.
 * 18. operator/() : Returns the quotient of two vectors.
 * 
 * Accessing Vector Elements:
 * 19. begin() : Returns an iterator to the first element in the vector.
 * 20. end() : Returns an iterator to the last element in the vector.
 * 21. rbegin() : Returns an iterator to the last element in the vector.
 * 22. rend() : Returns an iterator to the first element in the vector.
 * 23. cbegin() : Returns a const_iterator to the first element in the vector.
 * 24. cend() : Returns a const_iterator to the last element in the vector.
 * 25. crbegin() : Returns a const_reverse_iterator to the last element in the vector.
 * 26. crend() : Returns a const_reverse_iterator to the first element in the vector.
 * 
 * 
 * Capacity:
 * 27. max_size() : Returns the maximum number of elements the vector can hold.
 * 28. resize(n) : Changes the size of the vector. Data loss can occur if the new size is smaller than the old size.
 * 29. capacity() : Returns the number of elements the vector can hold. It can be equal to the size of the vector or more(the extra space allowing to accommodate for growth without the need to reallocate on each insertion).
 * 30. shrink_to_fit() : Reduces the capacity of the vector to the size of the vector.
 * 31. reserve() : Requests that the vector capacity be at least enough to contain n elements. It does not change the size of the vector and any data loss.
 * 32. size() : Returns the number of elements in the vector.
 * 33. empty() : Returns true if the vector is empty, false otherwise.
 * 
 * 
 * Element access:
 * 34. reference operator[g() : Returns the element at a specified position. v1=v2 => elements of v2 are assigned to v1.
 * 35. at(n) : Returns the element at a specified position.
 * 36. data() : Returns a pointer to the first element in the vector.
 * 
 * The time complexity for doing various operations on vectors is-
 *
 * Random access – constant O(1)
 * Insertion or removal of elements at the end – constant O(1)
 * Insertion or removal of elements – linear in the distance to the end of the vector O(N)
 * Knowing the size – constant O(1)
 * Resizing the vector- Linear O(N)
 * 
 * 
 * @warning It won't give any Exception error, you need to check for it.
 * 
 */

#include<iostream>
#include<vector>

using namespace std;

void Modifierfunc();
void Capacityfunc();

int main(){
        //Initializing a vector 
    // vector<int> v;
    // int n;

    // cout<<"\n\n*** Inserting elements into vector using push_back(): ";
    // v.push_back(67);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // v.push_back(5);
    // cout<<"\n Data in vector: ";

    // vector <int>::iterator it;
    // for(it=v.begin();it<v.end();it++){
    //     cout<<*it<<" ";
    // }


    Modifierfunc();





cout<<"\n\n";
    return 0;
}

// ------------------------------------------------------------ Capacity ------------------------------------------------------------

void CapacityFunc(){

    //Initializing a vector 
    vector<int> v;
    int n;

    cout<<"Enter 5 Integer elements in the vector: ";
    for(int i=0;i<5;i++){
        cin>>n;
        v.push_back(n); //Inserting elements at the end of the vector.
    }

    cout<<"\nSize of vector: "<<v.size();
    cout<<"\nCapcity of vector: "<<v.capacity();
    cout<<"\nMax Size of vector: "<<v.max_size();

    cout<<"\n\n*** Resizing vector to 2 less elements ***";
    v.resize(v.size()-2); //Resizing the vector.
    cout<<"\nSize of vector: "<<v.size();

    cout<<"\n\n*** Shrinking vector capacity to fit the size ***";
    v.shrink_to_fit(); //Reduces the capacity of the vector to the size of the vector.
    cout<<"\nCapacity of vector: "<<v.capacity();

    cout<<"\n\n*** Reserving vector capacity to 8 elements ***";
    v.reserve(8); //Requests that the vector capacity be at least enough to contain 8 elements.
    cout<<"\nCapacity of vector: "<<v.capacity();
    cout<<"\nSize of vector: "<<v.size();


    cout<<"\n\n*** Check if vector is empty ***";
    if(v.empty()){ //Returns true if the vector is empty, false otherwise.
        cout<<"\nVector is empty";
    }
    else{
        cout<<"\nVector is not empty";
    }

    cout<<"\n\n*** Clearing vector elements ***";
    v.clear(); //Removes all elements from the vector.
    cout<<"\nSize of vector: "<<v.size();

    /**
     * @warning auto :: 'auto' type specifier is a C++11 extension.
     */
    // for (auto i = v.begin(); i != v.end(); ++i)
    //     cout << *i << " ";

    // Traversing the vector using iterator
    vector<int>  :: iterator it;
    cout<<"\n\n*** Traversing the vector using iterator: ";
    for (it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";
    cout<<"\n\n";

  }

// ------------------------------------------------------------ Modifier ------------------------------------------------------------

void Modifierfunc(){
        //Initializing a vector 
    vector<int> v;
    int n;

    cout<<"\n\n*** Inserting elements into vector using push_back(): ";
    v.push_back(67);
    v.push_back(23);
    v.push_back(45);
    v.push_back(421);
    v.push_back(5211);
    cout<<"\n Data in vector: ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }


    cout<<"\n\n*** Deleting the last element from vector using pop_back(): ";
    v.pop_back();
    cout<<"\n Data in vector: ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    cout<<"\n\n*** Inserting '6' into vector using insert(pos,val) at specific position: ";
    v.insert(v.end(),6);
    cout<<"\n Data in vector: ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    cout<<"\n\n*** Inserting 69 (3 times) into vector using insert(pos,no_of_times,val) at specific position with repetation: ";
    v.insert(v.begin()+3,3,69);
    cout<<"\n Data in vector: ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    /**
     * @attention Need to how this works.
     */
    cout<<"\n\n*** Inserting element into vector using insert(pos, iterator1, iterator2): ";
    vector<int> :: iterator it1 = v.begin();
    vector<int> :: iterator it2 = v.end();
    it2++;it2++;it2++;
    v.insert(v.begin(),it1,it2);
    cout<<"\n Data in vector: ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    cout<<"\n\n*** Erasing element from vector using erase()(Specific Position: 3): ";
    v.erase(v.begin()+3);
    cout<<"\n Data in vector: ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    cout<<"\n\n*** Erasing element from vector using erase()(Range Position: 2 to last index): ";
    v.erase(v.begin()+5, v.end());
    cout<<"\n Data in vector: ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    cout<<"\n\n*** Front element of vector: "<<v.front();
    cout<<"\n\n*** Back element of vector: "<<v.back();

    cout<<"\n\n*** Swapping Data from vector1 to vector 2: ";
    vector<int> v2;
    v2.push_back(1);
    v2.push_back(2);
    v2.push_back(3);

    cout<<"\n Data in vector1: ";
      copy(v.begin(),
         v.end(),
         ostream_iterator<int>(cout, " "));
    cout<<"\n Data in vector2: ";
        copy(v2.begin(),
             v2.end(),
             ostream_iterator<int>(cout, " "));

    v.swap(v2);
    
    cout<<"\n Data in vector1: ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n Data in vector2: ";
    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }

    cout<<"\n\n*** Pointer at first element[data, address]: "<<*v.data()<<", "<<v.data();

    cout<<"\n\n*** Element at(n) where n=1: "<<v.at(1);



}











