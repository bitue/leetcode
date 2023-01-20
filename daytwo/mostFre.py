def majorityElement( nums) :
        dic ={};
        res =[]
        ln = len(nums)
        nums.sort()
        for i in nums :
            if i%2 ==0 :
                if(dic.get(i)):
                    dic[i]= dic[i]+1 
                else :
                    dic[i]= 1 
        
        max_value = 0
        for i,j in dic.items():
            if(j > max_value ):
                max_value = j 
        

        for i, j in dic.items():
            if j == max_value:
                print(i)
                return i 
        
        return res
                
    



li =[2,2,1,1,1,4, 4]
u = majorityElement(li)
print(u)