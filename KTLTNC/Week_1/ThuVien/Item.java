package Week_1.ThuVien;
// Mỗi tài liệu gồm có các thuộc tính sau: Mã tài liệu(Mã tài liệu là duy nhất), Tên nhà xuất bản, số bản phát hành.
public class Item {
    public String maTaiLieu;
    public String tenNhaXuatBan;
    public int soBanPhatHanh;
    public Item() {

    }
    public Item(String maTaiLieu, String tenNhaXuatBan, int soBanPhatHanh) {
        this.maTaiLieu = maTaiLieu;
        this.tenNhaXuatBan = tenNhaXuatBan;
        this.soBanPhatHanh = soBanPhatHanh;
    }
}
