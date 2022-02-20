class Memory extends Hardware{
    private int frequency;
    private String memorySize;
    private boolean isSupportsCuda;

    public Memory(String brand, String model, int price, String idProduct, int frequency, String memorySize, boolean isSupportsCuda){
        setBrand(brand);
        setModel(model);
        setPrice(price);
        setIdProduct(idProduct);
        this.frequency = frequency;
        this.memorySize = memorySize;
        this.isSupportsCuda = isSupportsCuda;
    }

    public Memory(int frequency, String memorySize, boolean isSupportsCuda){
        this.frequency = frequency;
        this.memorySize = memorySize;
        this.isSupportsCuda = isSupportsCuda;
    }
    
    public Memory(){
    }

    public int getFrequency(){
        return frequency;
    }
    
    public void setFrequency(int frequency){
        this.frequency = frequency;
    }

    public String getMemorySize(){
        return memorySize;
    }

    public void setMemorySize(String memorySize){
        this.memorySize = memorySize;
    }
 
    public boolean getIsSupportsCuda(){
        return isSupportsCuda;
    }

    public void setIsSupportsCuda(boolean isSupportsCuda){
        this.isSupportsCuda = isSupportsCuda;
    }
    public void outs(){
        System.out.println("\nID Produk: " + this.getIdProduct());
        System.out.println("Harga: " + this.getPrice());
        System.out.println("Brand: " + this.getBrand());
        System.out.println("Model: " + this.getModel());
        System.out.println("Frekuensi: " + this.getFrequency());
        System.out.println("Kapasitas Memori: " + this.getMemorySize());
        System.out.println("Apakah Support CUDA? " + this.getIsSupportsCuda());
    }
}