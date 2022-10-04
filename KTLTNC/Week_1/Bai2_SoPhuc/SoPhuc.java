package Week_1.Bai2_SoPhuc;

// Xây dựng lớp SoPhuc biểu diễn khái niệm số phức bao gồm:
// •	Hai thành phần dữ liệu là phần thực và phần ảo, 
// •	Các hàm nhập, xuất số phức,
// •	Các phép toán cộng, trừ, nhân, chia hai số phức. 
// Viết chương trình cho phép nhập vào hai số phức và in ra kết quả của các phép toán cộng, trừ, nhân, chia hai số phức kể trên.
import java.util.Scanner;

public class SoPhuc {
    Scanner sc = new Scanner(System.in);
    //Nhap so phuc
    public double thuc;
    public double ao;
    public double getThuc() {
        return thuc;
    }
    public double getAo() {
        return ao;
    }
    public SoPhuc() {
        this.thuc = 0;
        this.ao = 1;
    }
    public SoPhuc(double thuc, double ao) {
        this.thuc = thuc;
        this.ao = ao;
    }
    public void nhapSoThuc1() {
        System.out.print("Nhap phan thuc thu nhat: ");
        thuc = sc.nextDouble();
        System.out.print("Nhap phan ao thu nhat: ");
        ao = sc.nextDouble();
    }
    public void nhapSoThuc2() {
        System.out.print("Nhap phan thuc thu hai: ");
        thuc = sc.nextDouble();
        System.out.print("Nhap phan ao thu hai: ");
        ao = sc.nextDouble();
    }
    //Xuat so phuc
    public void xuatSoThuc() {
        System.out.println(thuc + " + " + ao + "i");
    }
    //Các phép toán cộng, trừ, nhân, chia hai số phức. 
    public SoPhuc cong(SoPhuc sp2) {
        SoPhuc sp3 = new SoPhuc();
        sp3.thuc = this.thuc + sp2.thuc;
        sp3.ao = this.ao + sp2.ao;
        return sp3;
    }
    public SoPhuc tru(SoPhuc sp2) {
        SoPhuc sp3 = new SoPhuc();
        sp3.thuc = this.thuc - sp2.thuc;
        sp3.ao = this.ao - sp2.ao;
        return sp3;
    }
    public SoPhuc nhan(SoPhuc sp2) {
        SoPhuc sp3 = new SoPhuc();
        sp3.thuc = this.thuc * sp2.thuc - this.ao * sp2.ao;
        sp3.ao = this.thuc * sp2.ao + this.ao * sp2.thuc;
        return sp3;
    }
    public SoPhuc chia(SoPhuc sp2) {
        SoPhuc sp3 = new SoPhuc();
        sp3.thuc = (this.thuc * sp2.thuc + this.ao * sp2.ao) / (sp2.thuc * sp2.thuc + sp2.ao * sp2.ao);
        sp3.ao = (this.ao * sp2.thuc - this.thuc * sp2.ao) / (sp2.thuc * sp2.thuc + sp2.ao * sp2.ao);
        return sp3;
    }

}