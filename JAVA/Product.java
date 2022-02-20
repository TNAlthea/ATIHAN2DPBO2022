class Product{
    private String idProduct;
    private int price;

    public Product(String idProduct, int price){
        this.idProduct = idProduct;
        this.price = price;
    }

    public Product(){
    }

    public String getIdProduct(){
        return idProduct;
    }
    
    public void setIdProduct(String idProduct){
        this.idProduct = idProduct;
    }

    public int getPrice(){
        return price;
    }

    public void setPrice(int price){
        this.price = price;
    }

    public void outs(){
        System.out.println("\nID Produk: " + this.getIdProduct());
        System.out.println("Harga: " + this.getPrice());
    }
}