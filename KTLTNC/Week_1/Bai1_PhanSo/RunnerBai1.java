//import scanner
package Week_1.Bai1_PhanSo;
public class RunnerBai1 {
    public static void main(String[] args) {
        PhanSo ps1 = new PhanSo();
        PhanSo ps2 = new PhanSo();
        PhanSo ps3 = new PhanSo();
        PhanSo ps4 = new PhanSo();
        PhanSo ps5 = new PhanSo();
        PhanSo ps6 = new PhanSo();
        ps1.nhapPhanSo1();
        ps2.nhapPhanSo2();
        ps3 = ps1.cong(ps2);
        ps4 = ps1.tru(ps2);
        ps5 = ps1.nhan(ps2);
        ps6 = ps1.chia(ps2);
        System.out.print("Cong hai phan so: ");
        ps3.xuatPhanSo();
        System.out.print("Tru hai phan so: ");
        ps4.xuatPhanSo();
        System.out.print("Nhan hai phan so: ");
        ps5.xuatPhanSo();
        System.out.print("Chia hai phan so: "); 
        ps6.xuatPhanSo();
        //so sanh 2 phan so
        System.out.print("So sanh hai phan so: ");
        if (ps1.getTu() * ps2.getMau() > ps2.getTu() * ps1.getMau()) {
            System.out.println("Phan so 1 lon hon phan so 2");
        } else if (ps1.getTu() * ps2.getMau() < ps2.getTu() * ps1.getMau()) {
            System.out.println("Phan so 1 nho hon phan so 2");
        } else {
            System.out.println("Phan so 1 bang phan so 2");
        }
    }
}