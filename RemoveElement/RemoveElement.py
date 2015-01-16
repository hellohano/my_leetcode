class Solution:
    # @param    A       a list of integers
    # @param    elem    an integer, value need to be removed
    # @return an integer
    def removeElement(self, A, elem):
    	print "len A is ", len(A)
    	result = []
    	for index, i in enumerate(A):
    		if i == elem:
    			# deleteNum = deleteNum + 1
    			result.append(i)
    	print result
    	if len(result) > 0:
    		for i in result:
    			A.remove(i)
    	return len(A)

class Solution2:
    # @param    A       a list of integers
    # @param    elem    an integer, value need to be removed
    # @return an integer
    def removeElement(self, A, elem):
        while A.count(elem) != 0:
            A.remove(A[A.index(elem)])
        return len(A)

if __name__ == "__main__":
    print Solution2().removeElement([3, 3], 3)