Shell Sort is a sorting technique that makes use of the gap system to sort elements.

Let's understand how Shell Sort works with an example:

Suppose we have the following array to sort: [5, 2, 9, 1, 5, 6]

1. First, we choose a gap sequence. A common choice is to start with a large gap and reduce it over time. For this example, let's use the gap sequence: 3, 1.
2. We start with the first gap (3) and compare elements that are 3 positions apart. We take the subarrays formed by these elements and sort them using insertion sort.
   - For gap 3, we have the following subarrays:
     - [5, 1]
     - [2, 5]
     - [9, 6]
   - After sorting these subarrays, we get: [1, 2, 5, 5, 6, 9]
3. Next, we reduce the gap to 1 and perform a final insertion sort on the entire array.
   - The array is already sorted, so no changes are made.

The final sorted array is: [1, 2, 5, 5, 6, 9]


So the gap starts as ---- n/2 , then n/4 .............. until it becomes 1.



 while(1)
        {
            left = 0,right = gap;
            while(right<n)
            {
                if(nums1[left]>nums1[right])
                swap(nums1[left],nums1[right]);

                right++;
                left++;
            }
            if(gap==1)
            break;

            gap = gap/2 + gap%2;
            // m = gap;
        } 
