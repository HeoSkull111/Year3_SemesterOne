//import scanner
package Week_1.Bai2_SoPhuc;
public class RunnerBai2 {
    public static void main(String[] args) {
        SoPhuc sp1 = new SoPhuc();
        SoPhuc sp2 = new SoPhuc();
        SoPhuc sp3 = new SoPhuc();
        SoPhuc sp4 = new SoPhuc();
        SoPhuc sp5 = new SoPhuc();
        SoPhuc sp6 = new SoPhuc();
        sp1.nhapSoThuc1();
        sp2.nhapSoThuc2();
        sp3 = sp1.cong(sp2);
        sp4 = sp1.tru(sp2);
        sp5 = sp1.nhan(sp2);
        sp6 = sp1.chia(sp2);
        System.out.print("Tong hai so phuc: ");
        sp3.xuatSoThuc();
        System.out.print("Hieu hai so phuc: ");
        sp4.xuatSoThuc();
        System.out.print("Tich hai so phuc: ");
        sp5.xuatSoThuc();
        System.out.print("Thuong hai so phuc: ");
        sp6.xuatSoThuc();
    }
}