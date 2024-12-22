# Function to find the missing number from the given array.
def find_missing_number(arr):
    range = len(arr)
    sum_of_range = (range*(range+1))/2
    sum_of_arr = 0
    for num in arr: sum_of_arr+=num
    return sum_of_range-sum_of_arr

# Main execution block
testingArray = [0,1,2,3,4,5,6,7,8]
print(f"Missing number is : {find_missing_number(testingArray)}")