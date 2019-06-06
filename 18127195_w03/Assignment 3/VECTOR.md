
---
# **VECTOR**

---

- Là một mảng 1 chiều có thể thay đổi kích thước nằm trong thư viện <vector>
> Các hàm chức năng(thư viện c++ đã cung cấp):

1. size(): trả về kích thước của mảng

Ex:

---
vector <int> a;
int x = a.size();
cout << x;
...
output: 0

---

2. resize(): thay đổi kích thước mảng

Ex:

---
vector <int> a;
a.resize(5);
cout << x;
...
output: 5

---

3. push_back(): thêm phần tử vào cuối mảng

Ex:

---
vector <int> a;
a.push_back(5);
cout << a[0];
...
output: 5

---

4. pop_back(): xóa phần tử cuối mảng

Ex:

---
vector <int> a;
a.push_back(9);
cout << a.size() << "\n";
a.pop_back();
cout << a.size() << "\n";
...
output: 
1
0

---
