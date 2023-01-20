def majorityElement( nums) :
        dic ={}
        for i in nums :
            if(dic.get(i)):
                dic[i]= dic[i]+1 
            else :
                dic[i]= 1 
        

        for i,j in dic.items():
            print(i, j)
        



li =[2,2,1,1,1,2,2]
majorityElement(li)