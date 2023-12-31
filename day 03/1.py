class Solution:
    def findMatrix(self, nums: List[int]) -> List[List[int]]:
        answer = []
        for num in nums:
            for sub_arr in answer:
                if num not in sub_arr:
                    sub_arr.append(num)
                    break
            else:
                answer.append([num])
        return answer


        # bigger_array=[]
        # for i in range(len(unique_list)):
        #     small_array=[]
        #     for j in range(i+1):
        #         small_array.append(unique_list[j])
        #     bigger_array.append(small_array)
        # return bigger_array
            

