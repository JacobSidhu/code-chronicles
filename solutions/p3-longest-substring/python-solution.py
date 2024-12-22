# Function to return the length of unReapted charactors.
def length_of_unrepeated_string(str):
    # returning 0 if string is empty.
    if not str:
        return 0
    max_length = 0
    unique_set = set()
    
    # Checking for longest occurence of unique charactors.
    for char in str:
        if char in unique_set: return max_length
        else: 
            unique_set.add(char) 
            max_length+=1
    return max_length

# Main execution block
TEST_SIZE = 5
test_list = ["abcdeeda","","akdjfwsdasd","ksja","l"]
test_results = [5,0,7,4,1]

for test in range(0,TEST_SIZE):
    if length_of_unrepeated_string(test_list[test])==test_results[test]:
        print(f'✓ Test {test+1} Passed.\n')
    else:
        print(f'X Test {test+1} Failed.\n')

        
        