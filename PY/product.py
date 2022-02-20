class Product():
    #private members      
    __idProduct = "Lorem 1000"
    __Price = 1000

    def __init__(self, idProduct = "Lorem 1000", Price = 1000):
        self.__idProduct = idProduct
        self.__Price = Price

    def setIdProduct(self, idProduct):
        self.__idProduct = idProduct

    def getIdProduct(self):
        return self.__idProduct

    def setPrice(self, Price):
        self.__Price = Price

    def getPrice(self):
        return self.__Price


    def outs(self):
        print("ID Produk: %s" % (self.__idProduct))
        print("Harga: %d" % (self.__Price))

    