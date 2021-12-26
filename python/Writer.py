
def interface():
    Active=True
    while Active:
        print("---writer interface--")
        print("Option:")
        print("1.Write Novels.")
        print("2.Exit.")
        a=int(input())
        if(a==1):
            a=input("Name?")
            print("\n\nInput 00 To EXIT!")
            try:
                with open("\\novels\\"+a+".txt",r+) as FObj:
                    a=input()
                    FObj.write(a)
                    while(a!="00"):
                        a=input()
                        FObj.write(a)
                print("\n\n Thanks For Using!")
            except:
                with open("/novels/"+a+".txt",r+) as FObj:
                    a=input()
                    FObj.write(a)
                    while(a!="00"):
                        a=input()
                        FObj.write(a)
                print("\n\n Thanks For Using!")
        else:
            Active=False

        

                
                
