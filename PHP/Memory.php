<?php
include_once 'Hardware.php';

class Memory extends Hardware
{
    private $frequency = 3000;
    private $memorySize = "100 TB";
    private $isSupportCuda = TRUE;

    //Construct
    public function __construct($frequency = 1000, $memorySize = "100 TB", $isSupportCuda = TRUE){
        $this->frequency = $frequency;
        $this->memorySize = $memorySize;
        $this->isSupportCuda = $isSupportCuda;
    }

    /*Get-Set*/
    public function setFrequency($frequency){
        $this->frequency = $frequency;
    }

    public function getFrequency(){
        return $this->frequency;
    }

    public function setMemorySize($memorySize){
        $this->memorySize = $memorySize;
    }

    public function getMemorySize(){
        return $this->memorySize;
    }

    public function setIsSupportCuda($isSupportCuda){
        $this->isSupportCuda = $isSupportCuda;
    }

    public function getIsSupportCuda(){
        return $this->isSupportCuda;
    }
}

//Tampil data semua termasuk kelas produk dan HW
function tampilData($Memory){
    echo "Data Produk" ."<br>";
    echo "Brand: " .$Memory->getBrand() ."<br>";
    echo "Harga: " .$Memory->getPrice() ."<br>";
    echo "Model: " .$Memory->getModel() ."<br>";
    echo "ID: " .$Memory->getIdProduct() ."<br>";
    echo "Frekuensi: " .$Memory->getFrequency() ."<br>";
    echo "Size Memori: " .$Memory->getMemorySize() ."<br>";
    echo "Support CUDA? " .$Memory->getIsSupportCuda() ."<br> ======== <br>";
}

?>
