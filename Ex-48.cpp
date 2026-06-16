// Ex - 48.
// Bo sung: #include<string.h>
// Doc thong tin tu file data_46.txt, va hien thi ra man hinh
/*
Ho ten: => char hoten[100]; =>fgets
Tuoi: => int => fscanf(fp, "%d", &x); 
Quan quan: => char quequan[100]; => fgets

Ghi ra man hinh

   // Goi y cach lam	
   // 3. Doc thong tin tu file theo dung thu tu da ghi

    // Doc Ho ten (dung fgets vi ho ten co khoang trang)
    if (fgets(hoten, sizeof(hoten), fp) != NULL) {
        // Xoa ky tu xuong dong '\n' o cuoi chuoi
        hoten[strcspn(hoten, "\n")] = '\0'; => Tim dau xuong dong va bo di
    }

    // Doc Tuoi (dung fscanf de doc so nguyen)
    fscanf(fp, "%d", &tuoi);

    // QUAN TRONG: Nuot ky tu xuong dong '\n' con sot lai sau khi doc so
    // Tranh bi troi lenh khi goi fgets o phia duoi
    fgetc(fp); 

    // Doc Que quan (dung fgets vi que quan co khoang trang)
    if (fgets(quequan, sizeof(quequan), fp) != NULL) {
        // Xoa ky tu xuong dong '\n' o cuoi chuoi
        quequan[strcspn(quequan, "\n")] = '\0';
    }
    
*/
*/

