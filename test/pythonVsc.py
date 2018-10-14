letters_only = True if input().isalpha() else False

nums=[x for x in range(500)]
print(nums)

nums[len(nums):]=[500]
print(nums)