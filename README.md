<strong>Tuliskan program untuk membaca file daftar perguruan tinggi pada file berikut dan menampilkan daftar perguruan tinggi yang berlokasi Jawa Barat. <br>
 ```https://apipuro.del.ac.id/v1/file/9a4723613e823fd1c6aa216b64eec391```
<br>
Contoh output yang diharapkan untuk daftar perguruan tinggi yang berlokasi di DKI Jakarta<strong>
![image](https://github.com/suffrizz/Read-a-file/assets/128014102/adde0933-405e-4071-88e1-3c28e7389536)
 
## Solution :
 
 #### Define the function and the file that we will use in this program
```
 int main()
{
    FILE *ptr;
    char ch;
    ptr = fopen("data.txt", "r");
```
 #### Prove that ptr is null or not
 
