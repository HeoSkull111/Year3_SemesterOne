package Week_1.Bai1_PhanSo;

/*Thiết lập lớp PhanSo để biểu diễn khái niệm phân số bao gồm:
	Hai thành phần dữ liệu là tử số và mẫu số, 
	Các phép toán rút gọn phân số; cộng, trừ, nhân, chia hai và so sánh hai phân số,
	Các hàm nhập, xuất phân số. 
Viết chương trình nhập vào hai phân số và in ra kết quả là các phân số rút gọn của các phép toán cộng, trừ, nhân, chia hai phân số kể trên, 
đồng thời so sánh hai phân số kể trên. */
import java.util.Scanner;

public class PhanSo {
    Scanner sc = new Scanner(System.in);
    double tu, mau;
    public PhanSo(double tu, double mau) {
        this.tu = tu;
        this.mau = mau;
    }
    public PhanSo() {
        this.tu = 0;
        this.mau = 1;
    }
    //get tu, mau
    public double getTu() {
        return tu;
    }
    public double getMau() {
        return mau;
    }
    //Nhap phan so
    public void nhapPhanSo1() {
        System.out.print("Nhap tu so thu nhat: ");
        tu = sc.nextDouble();
        System.out.print("Nhap mau so thu nhat: ");
        mau = sc.nextDouble();
    }
    public void nhapPhanSo2() {
        System.out.print("Nhap tu so thu hai: ");
        tu = sc.nextDouble();
        System.out.print("Nhap mau so thu hai: ");
        mau = sc.nextDouble();
    }
    //Xuat phan so
    public void xuatPhanSo() {
        System.out.println(tu + "/" + mau);
    }
    //rut gon phan so
    public void rutGon() {
        double a = this.tu;
        double b = this.mau;
        while (a != b) {
            if (a > b) {
                a -= b;
            } else {
                b -= a;
            }
        }
        this.tu /= a;
        this.mau /= a;
    }
    //cong tru nhan chia phan so
    public PhanSo cong(PhanSo ps) {
        PhanSo kq = new PhanSo();
        kq.tu = this.tu * ps.mau + this.mau * ps.tu;
        kq.mau = this.mau * ps.mau;
        kq.rutGon();
        return kq;
    }
    public PhanSo tru(PhanSo ps) {
        PhanSo kq = new PhanSo();
        kq.tu = this.tu * ps.mau - this.mau * ps.tu;
        kq.mau = this.mau * ps.mau;
        kq.rutGon();
        return kq;
    }
    public PhanSo nhan(PhanSo ps) {
        PhanSo kq = new PhanSo();
        kq.tu = this.tu * ps.tu;
        kq.mau = this.mau * ps.mau;
        kq.rutGon();
        return kq;
    }
    public PhanSo chia(PhanSo ps) {
        PhanSo kq = new PhanSo();
        kq.tu = this.tu * ps.mau;
        kq.mau = this.mau * ps.tu;
        kq.rutGon();
        return kq;
    }
}