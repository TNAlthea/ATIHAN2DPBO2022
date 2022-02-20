import java.util.*;

public class Main{
    public static void main (String[] args){
        int n = 0;

        //input hardcode tim pertama
        Memory NVIDIA = new Memory();
        NVIDIA.setBrand("NVIDIA");
        NVIDIA.setModel("RTX 3060");
        NVIDIA.setPrice(12000000);
        NVIDIA.setIdProduct("3060NV");
        NVIDIA.setFrequency(1875);
        NVIDIA.setMemorySize("12GB");
        NVIDIA.setIsSupportsCuda(true);
        

        //input dinamis tim kedua dan seterusnya
        Scanner sc = new Scanner(System.in);
        try{
            n = sc.nextInt();
        }catch(Exception e){}

        Memory[] Produk = new Memory[n];

        int i = 0;
        // int frekuensi = 0, harga = 0;
        // String brand = "lorem", model = "ipsum", ID = "dolor", size = "100 GB";
        // boolean isSupport = false;

        for (i = 0; i < n; i++){
            //antisipasi nextLine skip
            if (i == 0) sc.nextLine();
            
            System.out.println("Masukkan Brand: "); String brand = sc.nextLine();
            System.out.println("Masukkan Model: "); String model = sc.nextLine();
            System.out.println("Masukkan ID: "); String ID = sc.nextLine();
            System.out.println("Masukkan Memory Size: "); String size = sc.nextLine();
            System.out.println("Masukkan Harga: "); int harga = sc.nextInt();
            System.out.println("Masukkan Frekuensi: "); int frekuensi = sc.nextInt();
            System.out.println("Apakah Support CUDA? "); Boolean isSupport = sc.nextBoolean();

            //inisiasi setiap objek pada array
            Produk[i] = new Memory("NVIDIA", "RTX", 1880000, "3070RTX", 1815, "12GB", true);
            Produk[i] = new Memory(brand, model, harga, ID, frekuensi, size, isSupport);
        }

        //output manual
        System.out.println("===== 1 =====");  
        System.out.println("ID Produk: " + NVIDIA.getIdProduct());
        System.out.println("Harga: " + NVIDIA.getPrice());
        System.out.println("Brand: " + NVIDIA.getBrand());
        System.out.println("Model: " + NVIDIA.getModel());
        System.out.println("Frekuensi: " + NVIDIA.getFrequency());
        System.out.println("Kapasitas Memori: " + NVIDIA.getMemorySize());
        System.out.println("Apakah Support CUDA? " + NVIDIA.getIsSupportsCuda());

        //output dengan prosedur
        for (i = 0; i < n; i++){
            System.out.printf("===== %d =====", (i+2));
            Produk[i].outs();
        }

    }
}