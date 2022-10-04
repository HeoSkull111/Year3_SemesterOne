package Week_1.ThuVien;

public class Sach extends Item {
    public String tenTacGia;
    public int thangPhatHanh;
    public Sach() {
        super();
    }
    public Sach(String maTaiLieu, String tenNhaXuatBan, int soBanPhatHanh, String tenTacGia, int thangPhatHanh) {
        super(maTaiLieu, tenNhaXuatBan, soBanPhatHanh);
        this.tenTacGia = tenTacGia;
        this.thangPhatHanh = thangPhatHanh;
    }
}
