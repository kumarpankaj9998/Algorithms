class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        list1,list2=[],[]
        for i in range(len(nums)-2):
            for j in range(i+1,len(nums)-1):
                for k in range(j+1,len(nums)):
                    if(nums[i]+nums[j]+nums[k]==0):
                        list1.append(nums[i])
                        list1.append(nums[j])
                        list1.append(nums[k])
                        list1.sort()
                        list2.append(list1)
                        list1=[]
        list3=[]
        for i in list2:
            if i not in list3:
                list3.append(i)
        list2=list3;
        return list2
