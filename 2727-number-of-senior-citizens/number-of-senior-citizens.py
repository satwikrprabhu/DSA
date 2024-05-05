class Solution:
    def countSeniors(self, details: List[str]) -> int:
        count=0
        age=[]
        for i in details:
            a=i[11:13]
            age.append(int(a))
        for j in age:
            if j > 60:
                count=count+1
        return count