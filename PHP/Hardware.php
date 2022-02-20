<?php
include_once 'Product.php';

class Hardware extends Product
{
    private $brand = "Lorem 3000";
    private $model = "Ipsum";

    //Construct
    public function __construct($brand = "Lorem 3000", $model = "Ipsum"){
        $this->Brand = $brand;
        $this->model = $model;
    }

    /*Get-Set*/
    public function setBrand($brand){
        $this->brand = $brand;
    }

    public function getBrand(){
        return $this->brand;
    }

    public function setModel($model){
        $this->model = $model;
    }

    public function getModel(){
        return $this->model;
    }
}

//Tampil data semua termasuk kelas produk 
function showDataHWPR($Hardware){
    echo "Data Produk" ."<br>";
    echo "ID: " .$Hardware->getIdProduct() ."<br>";
    echo "Harga: " .$Hardware->getPrice() ."<br>";
    echo "Brand: " .$Hardware->getBrand() ."<br>";
    echo "Model: " .$Hardware->getModel() ."<br> ======== <br>";
}

?>
