<?php

class Product
{
    private $idProduct = "Lorem 3000";
    private $price = 1000;

    //Construct
    public function __construct($idProduct = "Lorem 3000", $price = 1000){
        $this->idProduct = $idProduct;
        $this->price = $price;
    }

    /*Get-Set*/
    public function setIdProduct($idProduct){
        $this->idProduct = $idProduct;
    }

    public function getIdProduct(){
        return $this->idProduct;
    }

    public function setPrice($price){
        $this->price = $price;
    }

    public function getPrice(){
        return $this->price;
    }
}

//Tampil Data Produk
function tampilDataPR($Product){
    echo "Data Produk" ."<br>";
    echo "ID: " .$Product->getIdProduct() ."<br>";
    echo "Harga: " .$Product->getPrice() ."<br> ======== <br>";
}

?>
