class Hardware extends Product{
    private String brand;
    private String model;

    public Hardware(String brand, String model){
        this.model = model;
        this.brand = brand;
    }

    public Hardware(){
    }

    public String getBrand(){
        return brand;
    }
    
    public void setBrand(String brand){
        this.brand = brand;
    }

    public String getModel(){
        return model;
    }

    public void setModel(String model){
        this.model = model;
    }

    public void outs(){
        System.out.println("\nID Produk: " + this.getIdProduct());
        System.out.println("Harga: " + this.getPrice());
        System.out.println("Brand: " + this.getBrand());
        System.out.println("Model: " + this.getModel());
    }
}