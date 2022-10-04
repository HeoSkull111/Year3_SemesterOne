package Week_1.ThuVien;

public class Bao extends Item {
    //Ngày phát hành
    public int ngayPhatHanh;
    public Bao() {
        super();
    }
    public Bao(String maTaiLieu, String tenNhaXuatBan, int soBanPhatHanh, int ngayPhatHanh) {
        super(maTaiLieu, tenNhaXuatBan, soBanPhatHanh);
        this.ngayPhatHanh = ngayPhatHanh;
    }
}