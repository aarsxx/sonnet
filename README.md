<div align="center">
<img width="400" height="300" src="https://mir-s3-cdn-cf.behance.net/project_modules/max_1200/136c1733609335.56b3b3ebd4b0c.png">
<p>Basic Programming ▲lgorithms implemented in C++ & Java</p>
    
<a href="https://andikaleonardo.com"><code>andikaleonardo.com</code></a>
</div>

# Introduction
<p align="right">
    <i>
        Everybody in this country should learn to program a computer, because it teaches you how to think.<br>
        — steve jobs<br>
    </i>
</p>

* [Intro](##Intro)
* [Book](##Book)
* [Algorithm](##Algorithm)
* [Data Structures](##DataStructures)

<p align="center">
    <i>
        Solutions are coded using C++<br>
        Languange used are English and Bahasa<br>
        For Learning Purpose only<br>
    </i>
</p>
<p align="center">
    <b>
       © 2018 Andika Leonardo. All Rights Reserved.
    </b>
</p>

## Book
<p align="center">
    <b>I normally don't read book</b><br>
    but I can recommend this E-book<br>
        <br>
    <b>Computer Science Distilled by Wladston Ferreira Filho.</b>
        <br>
    <br>
    <a href="https://drive.google.com/open?id=1lqpkykIgoiI57u9gLidcgP9rcqRRNONQ" target="_blank"">
        <img height=300 src="https://images-na.ssl-images-amazon.com/images/I/51TC80IuOSL._SX322_BO1,204,203,200_.jpg">
    </a>
</p>
<i>    
  This Book was originally from 
    <a href="https://sourcemaking.com/store">
            Source Making
        </a>
  for $22.50 <br>
    The Book was moved to GitHub by Andika Leonardo for collaborative updating and maintenance.<br><br>
</i>
    
    
## Algorithm & Basic Programming
**What is an algorithm?**

Informally, an algorithm is any well-defined computational procedure that takes
some value, or set of values, as input and produces some value, or set of values, as
output. An algorithm is thus a sequence of computational steps that transform the
input into the output.

An algorithm should have three important characteristics to be considered valid:

- **It should be finite**: If your algorithm never ends trying to solve the problem
it was designed to solve then it is useless
- **It should have well defined instructions**: Each step of the algorithm has to
be precisely defined; the instructions should be unambiguously specified for each case.
- **It should be effective**: The algorithm should solve the problem it was designed
to solve. And it should be possible to demonstrate that the algorithm converges with
just a paper and pencil.

### Basic Programming

| Meeting |                                                          Material                                                         |                                                                                          Solution                                                                                         |
|:---:|:--------------------------------------------------------------------------------------------------------------------------:|:-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------:|
|  1  | Input, Output, and Variable                                        | [pert1.cpp](https://github.com/andikaleonardo/Course-Net/blob/master/Algorithm/Pert1.cpp)                | 
|  2  | Aritmethic Operation                                               | [pert2.cpp](https://github.com/andikaleonardo/Course-Net/blob/master/Algorithm/pert2.cpp)                | 
|  3  | Iteration                                                          | [pert3.cpp](https://github.com/andikaleonardo/Course-Net/blob/master/Algorithm/pert3.cpp)                | 
|  4  | Repetition                                                         | [pert4.cpp](https://github.com/andikaleonardo/Course-Net/blob/master/Algorithm/pert4.cpp)                | 
|  5  | Array and Pointer                                                  | [pert5.cpp](https://github.com/andikaleonardo/Course-Net/blob/master/Algorithm/pert5.cpp)                | 
|  6  | Function                                                           | [pert7.cpp](https://github.com/andikaleonardo/Course-Net/blob/master/Algorithm/pert7.cpp)                | 
|  7  | Built-in Function                                                    | [pert8.cpp](https://github.com/andikaleonardo/Course-Net/blob/master/Algorithm/pert8.cpp)                | 
|  8  | Structures                                                           | [pert9.cpp](https://github.com/andikaleonardo/Course-Net/blob/master/Algorithm/pert9.cpp)                | 
|  9 | Sorting                                                               | [pert10.cpp](https://github.com/andikaleonardo/Course-Net/blob/master/Algorithm/Sorting-Basic.cpp)        | 
|  10 | Searching                                                            | [pert11.cpp](https://github.com/andikaleonardo/Course-Net/blob/master/Algorithm/pert10.cpp)               | 
|  11 | File Operation                                                       | [pert12.cpp](https://github.com/andikaleonardo/Course-Net/blob/master/Algorithm/pert11.cpp)               | 
|  12 | Exercise1                                                            | [pert13.cpp](https://github.com/andikaleonardo/Course-Net/blob/master/Algorithm/pert12.cpp)               | 
|  13 | Exercise2                                                           | [pert6.cpp](https://github.com/andikaleonardo/Course-Net/blob/master/Algorithm/pert6.cpp)                | 

## Sort Algorithms


### Bubble
![alt text][bubble-image]

From [Wikipedia][bubble-wiki]: Bubble sort, sometimes referred to as sinking sort, is a simple sorting algorithm that repeatedly steps through the list to be sorted, compares each pair of adjacent items and swaps them if they are in the wrong order. The pass through the list is repeated until no swaps are needed, which indicates that the list is sorted.

__Properties__
* Worst case performance    O(n^2)
* Best case performance    O(n)
* Average case performance    O(n^2)

##### View the algorithm in [action][bubble-toptal]



### Insertion
![alt text][insertion-image]

From [Wikipedia][insertion-wiki]: Insertion sort is a simple sorting algorithm that builds the final sorted array (or list) one item at a time. It is much less efficient on large lists than more advanced algorithms such as quicksort, heapsort, or merge sort. 
In the figure, each bar represents an element of an array that needs to be sorted. What happens at the first intersection of the top most and second top most bars is to swap these elements, represented by bars, because the second element has a higher precedence than the first element does. By repeating this method, insertion sort completes sorting.

__Properties__
* Worst case performance    O(n^2)
* Best case performance    O(n)
* Average case performance    O(n^2)

##### View the algorithm in [action][insertion-toptal]


### Merge
![alt text][merge-image]

From [Wikipedia][merge-wiki]: In computer science, merge sort (also commonly spelt mergesort) is an efficient, general-purpose, comparison-based sorting algorithm. Most implementations produce a stable sort, which means that the implementation preserves the input order of equal elements in the sorted output. Mergesort is a divide and conquer algorithm that was invented by John von Neumann in 1945.

__Properties__
* Worst case performance    O(n log n) (typical)
* Best case performance    O(n log n)
* Average case performance    O(n log n)


##### View the algorithm in [action][merge-toptal]

### Quick
![alt text][quick-image]

From [Wikipedia][quick-wiki]: Quicksort (sometimes called partition-exchange sort) is an efficient sorting algorithm, serving as a systematic method for placing the elements of an array in order.

__Properties__
* Worst case performance    O(n^2)
* Best case performance    O(n log n) or O(n) with three-way partition
* Average case performance    O(n log n)

##### View the algorithm in [action][quick-toptal]

### Selection
![alt text][selection-image]

From [Wikipedia][selection-wiki]: The algorithm divides the input list into two parts: the sublist of items already sorted, which is built up from left to right at the front (left) of the list, and the sublist of items remaining to be sorted that occupy the rest of the list. Initially, the sorted sublist is empty and the unsorted sublist is the entire input list. The algorithm proceeds by finding the smallest (or largest, depending on sorting order) element in the unsorted sublist, exchanging (swapping) it with the leftmost unsorted element (putting it in sorted order), and moving the sublist boundaries one element to the right.

__Properties__
* Worst case performance    O(n^2)
* Best case performance    O(n^2)
* Average case performance    O(n^2)

##### View the algorithm in [action][selection-toptal]

### Shell
![alt text][shell-image]

From [Wikipedia][shell-wiki]:  Shellsort is a generalization of insertion sort that allows the exchange of items that are far apart.  The idea is to arrange the list of elements so that, starting anywhere, considering every nth element gives a sorted list.  Such a list is said to be h-sorted.  Equivalently, it can be thought of as h interleaved lists, each individually sorted.

__Properties__
* Worst case performance O(nlog2 2n)
* Best case performance O(n log n)
* Average case performance depends on gap sequence

##### View the algorithm in [action][shell-toptal]

### Time-Complexity Graphs

Comparing the complexity of sorting algorithms (Bubble Sort, Insertion Sort, Selection Sort)

[Complexity Graphs](https://github.com/prateekiiest/Python/blob/master/sorts/sortinggraphs.png)

----------------------------------------------------------------------------------

## Search Algorithms

### Linear
![alt text][linear-image]

From [Wikipedia][linear-wiki]: linear search or sequential search is a method for finding a target value within a list. It sequentially checks each element of the list for the target value until a match is found or until all the elements have been searched.
  The linear search runs in at the worst linear time and makes at most n comparisons, where n is the length of the list.

__Properties__
* Worst case performance    O(n)
* Best case performance    O(1)
* Average case performance    O(n)
* Worst case space complexity    O(1) iterative

### Binary
![alt text][binary-image]

From [Wikipedia][binary-wiki]: Binary search, also known as half-interval search or logarithmic search, is a search algorithm that finds the position of a target value within a sorted array. It compares the target value to the middle element of the array; if they are unequal, the half in which the target cannot lie is eliminated and the search continues on the remaining half until it is successful.

__Properties__
* Worst case performance    O(log n)
* Best case performance    O(1)
* Average case performance    O(log n)
* Worst case space complexity    O(1) 

##### View the algorithm in [action][shell-toptal]

[bubble-toptal]: https://www.toptal.com/developers/sorting-algorithms/bubble-sort
[bubble-wiki]: https://en.wikipedia.org/wiki/Bubble_sort
[bubble-image]: https://upload.wikimedia.org/wikipedia/commons/thumb/8/83/Bubblesort-edited-color.svg/220px-Bubblesort-edited-color.svg.png "Bubble Sort"

[insertion-toptal]: https://www.toptal.com/developers/sorting-algorithms/insertion-sort
[insertion-wiki]: https://en.wikipedia.org/wiki/Insertion_sort
[insertion-image]: https://upload.wikimedia.org/wikipedia/commons/7/7e/Insertionsort-edited.png "Insertion Sort"

[quick-toptal]: https://www.toptal.com/developers/sorting-algorithms/quick-sort
[quick-wiki]: https://en.wikipedia.org/wiki/Quicksort
[quick-image]: https://upload.wikimedia.org/wikipedia/commons/6/6a/Sorting_quicksort_anim.gif "Quick Sort"

[merge-toptal]: https://www.toptal.com/developers/sorting-algorithms/merge-sort
[merge-wiki]: https://en.wikipedia.org/wiki/Merge_sort
[merge-image]: https://upload.wikimedia.org/wikipedia/commons/c/cc/Merge-sort-example-300px.gif "Merge Sort"

[selection-toptal]: https://www.toptal.com/developers/sorting-algorithms/selection-sort
[selection-wiki]: https://en.wikipedia.org/wiki/Selection_sort
[selection-image]: https://upload.wikimedia.org/wikipedia/commons/thumb/b/b0/Selection_sort_animation.gif/250px-Selection_sort_animation.gif "Selection Sort Sort"

[shell-toptal]: https://www.toptal.com/developers/sorting-algorithms/shell-sort
[shell-wiki]: https://en.wikipedia.org/wiki/Shellsort
[shell-image]: https://upload.wikimedia.org/wikipedia/commons/d/d8/Sorting_shellsort_anim.gif "Shell Sort"

[linear-wiki]: https://en.wikipedia.org/wiki/Linear_search
[linear-image]: http://www.tutorialspoint.com/data_structures_algorithms/images/linear_search.gif

[binary-wiki]: https://en.wikipedia.org/wiki/Binary_search_algorithm
[binary-image]: https://upload.wikimedia.org/wikipedia/commons/f/f7/Binary_search_into_array.png


--------------------------------------------------------------------

## Data Structures
**What is an Data Structure?**

A data structure is a specialized format for organizing and storing data. General data structure types include the array, the file, the record, the table, the tree, and so on. Any data structure is designed to organize data to suit a specific purpose so that it can be accessed and worked with in appropriate ways. In computer programming, a data structure may be selected or designed to store data for the purpose of working on it with various algorithms.



| Meeting |                                                          Material                                                         |                                                                                          Solution                                                                                         |
|:---:|:--------------------------------------------------------------------------------------------------------------------------:|:-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------:|
|  1  | Single Linked-List                          | [singleLinkedList.cpp](https://github.com/andikaleonardo/Course-Net/blob/master/DataStructures/singleLinkedlist.cpp)                | 
|  2  | Double Linked-List                          | [doubleLinkedList.cpp](https://github.com/andikaleonardo/Course-Net/blob/master/DataStructures/DoubleLinkedList.cpp)                | 
|  3  | Stack                                       | [stack.cpp](https://github.com/andikaleonardo/Course-Net/blob/master/DataStructures/3.Stack.cpp)                | 
|  4  | Queue                                       | [queue.cpp](https://github.com/andikaleonardo/Course-Net/blob/master/DataStructures/4.queue.cpp)                | 
|  5  | Binary Search Tree, AVL Tree                         | [pert5.cpp](https://github.com/andikaleonardo/Course-Net/blob/master/Algorithm/pert5.cpp)                | 
|  6  | Hashing, Heap                | [pert2.cpp](https://github.com/andikaleonardo/Course-Net/blob/master/Algorithm/pert2.cpp)                | 
|  7  | Graph                                       | [pert3.cpp](https://github.com/andikaleonardo/Course-Net/blob/master/Algorithm/pert3.cpp)                | 
|  8  |                                             | [pert4.cpp](https://github.com/andikaleonardo/Course-Net/blob/master/Algorithm/pert4.cpp)                | 
|  9  |                                             | [pert5.cpp](https://github.com/andikaleonardo/Course-Net/blob/master/Algorithm/pert5.cpp)                | 

