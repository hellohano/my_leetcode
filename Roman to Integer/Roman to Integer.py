class Solution:
    # @return an integer
    def romanToInt(self, s):
    	transit = {"I":1, "V":5, "X":10, "L":50, "C":100, "D":500, "M":1000}
    	roman_list = list(s)
    	result = 0
    	for index, char in enumerate(roman_list):
    		value = transit.get(char)
    		if(index == len(roman_list) - 1):
    			#last number
    			result = result + value
    		else:
    			next_value = transit.get(roman_list[index + 1])
    			if next_value > value:
    				result = result - value
    			else:
    				result = result + value
    	return result


if __name__ == "__main__":
	print Solution().romanToInt("MCMXCVI")

