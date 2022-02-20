from product import Product

class Hardware(Product):
    #private members      
    __Brand = "Lorem"
    __model = "Ipsum 3000" 

    def __init__(self, brand = "Lorem", model = "Ipsum 3000"):
        self.__Brand = brand
        self.__model = model

    def setBrand(self, brand):
        self.__Brand = brand

    def getBrand(self):
        return self.__Brand

    def setModel(self, model):
        self.__model = model

    def getModel(self):
        return self.__model


    def outs(self):
        print("Brand: %s" % (self.__Brand))
        print("Model: %s" % (self.__model))

    def outsAll(self):
        print("ID Produk: %s" % (self.__idProduct))
        print("Harga: %d" % (self.__Price))
        print("Brand: %s" % (self.__Brand))
        print("Model: %s" % (self.__model))
    