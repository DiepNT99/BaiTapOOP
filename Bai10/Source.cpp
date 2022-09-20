/*Bài tập tự luyện

Để xử lý văn bản người ta xây dựng lớp VanBan  có thuộc tính riêng là một xâu ký tự.

Yêu cầu 1: Xây dựng hàm khởi tạo VanBan(), VanBan(String st).

Yêu cầu 2: Xây dựng phương thức đếm số từ của văn bản.

Yêu cầu 3: Xây dựng phương thức đếm số lượng ký tự A( không phân biệt hoa thường) của văn bản.

Yêu cầu 4: Chuẩn hoá văn bản theo tiêu chuẩn sau: Ở đầu và cuối sâu không có ký tự trống, 
ở giữa sâu không có 2 hoặc nhiều hơn các ký tự khoảng trắng kiền kề nhau.*/
#include"VanBan.h"
int main()
{
	cout << "Nhap van ban ban muon lam cac probty: "; string sTemp{ "" }; getline(cin, sTemp);VanBan vanban{ sTemp };
	cout << "So ki tu cua van ban la: " << vanban.WordCount() << endl;
	cout << "So ki tu A trong van ban la:" << vanban.ACount() << endl;
	cout << "Chuan hoa chuoi: " << vanban.Correct();
	return 0;
}