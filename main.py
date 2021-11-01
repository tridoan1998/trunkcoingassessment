threeSum(self, nums: List[int]) -> List[List[int]]:

nums.sort()  # will make spoting of duplicates easy

triplets = []
length = len(nums)

for i in range(length - 2):  # ignore last two

    # check if element is a duplicate. the first cannot be a duplicate
    if i > 0 and nums[i] == nums[i - 1]:
        # skip handling an element if it's similar to the one before it
        # because it is sorted, we effectively skip duplicates
        continue

    # TWO SUM for a sorted array
    # 1. find elements that will add up to 0
    # 2. check inner elements