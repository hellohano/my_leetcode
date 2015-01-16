class Solution:
    # @return a tuple, (index1, index2)
    def twoSum(self, num, target):
        d = {}
        index1 = 0
        index2 = 0
        for index, value in enumerate(num):
            print index, value
            if target - value in d:
                print "get result"
                index1 = d[target - value]
                index2 = index
                break
            else:
                print "not get result", value
                d[value] = index
            print d
        return (index1, index2)

if __name__ == "__main__":
    print Solution().twoSum([3, 2, 4], 6)