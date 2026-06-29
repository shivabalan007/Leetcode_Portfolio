class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        arr = []
        
        n1 = 0
        n2 = 0

        while n1 < m and n2 < n:
            if nums1[n1] < nums2[n2]:
                arr.append(nums1[n1])
                n1 += 1
            else:
                arr.append(nums2[n2])
                n2 += 1
            
        while n1 < m:
            arr.append(nums1[n1])
            n1 += 1
        
        while n2 < n:
            arr.append(nums2[n2])
            n2 += 1
        
        for i in range(len(arr)):
            nums1[i] = arr[i]
        
            