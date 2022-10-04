package Week_1.ThuVien;

public class TapChi extends Item {
    //Số phát hành, tháng phát hành
    public int soPhatHanh;
    public int thangPhatHanh;
    public TapChi() {
        super();
    }
    public TapChi(String maTaiLieu, String tenNhaXuatBan, int soBanPhatHanh, int soPhatHanh, int thangPhatHanh) {
        super(maTaiLieu, tenNhaXuatBan, soBanPhatHanh);
        this.soPhatHanh = soPhatHanh;
        this.thangPhatHanh = thangPhatHanh;
    }
}