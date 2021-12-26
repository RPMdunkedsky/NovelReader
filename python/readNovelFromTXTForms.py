class ReadForms:
    def ReadNovel(name,type=".txt"):
        try:
            name=str(name)
            name+=type
        except:
            return -1
        else:
            try:
                with open(name,"r+",encoding='UTF-8') as fileObj:
                    f=fileObj.read()
            except:
                return -1
            else
                return f
        