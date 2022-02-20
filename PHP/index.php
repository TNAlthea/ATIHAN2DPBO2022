<?php
include_once "Memory.php";
include_once "Hardware.php";
include_once "Product.php";

$GPU = new Memory();
$GPU->setIdProduct("3070NV");
$GPU->setPrice(15450000);
$GPU->setBrand("NVIDIA");
$GPU->setModel("RTX3070");
$GPU->setFrequency(1815);
$GPU->setMemorySize("8GB");
$GPU->setIsSupportCuda(TRUE);

$GPU2 = new Memory();
$GPU2->setIdProduct("6700XTRDN");
$GPU2->setPrice(16899000);
$GPU2->setBrand("RADEON");
$GPU2->setModel("RX6700XT");
$GPU2->setFrequency(2548);
$GPU2->setMemorySize("12GB");
$GPU2->setIsSupportCuda(FALSE);

tampilData($GPU);
tampilData($GPU2);

?>
