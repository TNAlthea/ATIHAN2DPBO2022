from platform import freedesktop_os_release
from hardware import Hardware

class Memory(Hardware):
    #private members      
    __Frequency = 1000
    __MemorySize = "1000 TB"
    __isSupportCuda = True

    #construct
    def __init__(self, Frequency = 1000, MemorySize = "1000 TB", isSupportCuda = True):
        self.__Frequency = Frequency
        self.__MemorySize = MemorySize
        self.__isSupportCuda = isSupportCuda

    #Get Set
    def setFrequency(self, Frequency):
        self.__Frequency = Frequency

    def getFrequency(self):
        return self.__Frequency

    def setMemorySize(self, MemorySize):
        self.__MemorySize = MemorySize

    def getMemorySize(self):
        return self.__MemorySize

    def setIsSupportCuda(self, isSupportCuda):
        self.__isSupportCuda = isSupportCuda

    def getMemorySize(self):
        return self.__isSupportCuda

    #Print kelas sendiri
    def outs(self):
        print("Frekuensi: %d" % (self.__Frequency))
        print("Kapasitas Memori: %s" % (self.__MemorySize))
        print("Apakah Support Cuda? %s" % (self.__isSupportCuda))

    #Print kelas sendiri beserta orang tua 
    def outsAll(self):
        print("ID Produk: %s" % (self.__idProduct))
        print("Harga: %d" % (self.__Price))
        print("Brand: %s" % (self.__Brand))
        print("Model: %s" % (self.__model))
        print("Frekuensi: %d" % (self.__Frequency))
        print("Kapasitas Memori: %s" % (self.__MemorySize))
        print("Apakah Support Cuda? %s" % (self.__isSupportCuda))

    