#include<iostream>
using namespace std;
int main (){
	int bayar,total_bayar,uang_bayar,uang_kembali;
	string nama_pembeli,yesNo,ulang;
	int harga,banyak,total_semua,pil;
    int x=0;
	int diskon=10;
	char pilih;
	cout<<"**************************WELCOME TO***************************"<<endl;
	cout<<"                     WARUNG MAKANAN MURAH                  "<<endl;
	cout<<"                        M*SYAMSUL HADI                      "<<endl;
	cout<<"                JLN.BERAIM LAUQ NO 23 OKE OKE               "<<endl;
	cout<<"**************************************************************"<<endl;
	cout<<"MASUKAN NAMA PEMBELI :";
	cin>>nama_pembeli;
	do{
	cout<<"***********************PILIH MENU*****************************"<<endl;
	cout<<"                    [1] MAKANAN                               "<<endl;
	cout<<"                    [2] MINUMAN                               "<<endl;
	cout<<"                    [3] CEMILAN                               "<<endl;
	cout<<"**************************************************************"<<endl;
	cout<<"======SILAHKAN PILIH MENU YANG ANDA INGINKAN========"<<endl;
	cin>>pil;
	switch (pil){
		case 1:
			cout<<"*****************************************MENU MAKANAN*****************************************"<<endl;
			cout<<"[1] AYAM GORENG + NASI     : Rp.15.000,00             [6] MIE AYAM              :Rp.10.000,00"<<endl;
			cout<<"[2] NASI GORENG            : Rp.10.000,00             [7] SATE SAPI + NASI      :Rp.25.000,00"<<endl;
			cout<<"[3] PECEL LELE + NASI      : Rp.12.000,00             [8] GADO GADO + NASI      :Rp.15.000,00 "<<endl;
			cout<<"[4] BAKSO MANTAP           : Rp.10.000,00             [9] RENDANG SAPI + NASI   :Rp.50.000,00"<<endl;
			cout<<"[5] NASI BALAP             : Rp.15.000,00                                                     "<<endl;
			cout<<"**********************************************************************************************"<<endl;
			
			cout<<endl;
			cout<<"MASUKAN PILIHAN ANDA :";
			cin>>pilih;
			
			if (pilih == '1'){
				cout<<" AYAM GORENG"<<endl;
				harga=15000;
			} else if(pilih =='2'){
					cout<<" NASI GORENG"<<endl;
				harga=10000;
			} else if(pilih =='3'){
					cout<<" PECEL LELE + NASI"<<endl;
				harga=12000;
			} else if(pilih =='4'){
				cout<<"BAKSO MANTAP "<<endl;
				harga=10000;
			} else if(pilih =='5'){
				cout<<"NASI BALAP "<<endl;
				harga=15000;
			} else if(pilih =='6'){
			   	cout<<" MIE AYAM "<<endl;
			    harga=12000;
			} else if(pilih =='7'){
			   	cout<<"  SATE SAPI + NASI "<<endl;
				harga=25000;
			} else if(pilih =='8'){
		    	cout<<" GADO GADO + NASI "<<endl;
				harga=15000;		
			} else if(pilih =='9'){
				cout<<" RENDANG SAPI + NASI "<<endl;
					harga=50000;
			}else{
				cout<<"MAKANAN TIDAK TERSEDIA"<<endl;
			}
			
			cout<<"BERAPA BANYAK PESANAN =";
			cin>>banyak;
			total_bayar=banyak*harga;
			cout<<"TOTAL BAYAR ADALAH ="<<total_bayar<<endl;
			cout<<"MAU PESAN MENU YANG LAIN ?y/n"<<endl;
			cin>>yesNo;
			cout<<endl;
			break;
		case 2:
			cout<<"****************************************MENU MINUMAN***************************************"<<endl;
			cout<<"[1] JUS MANGGA            :Rp.8.000,00               [6] JUS JERUK    :Rp.5.000,00"<<endl;				
			cout<<"[2] AIR PUTIH DINGIN      :Rp.3.000,00               [7] COCACOLA     :Rp.6.000,00"<<endl;
			cout<<"[3] JOS SUSU DINGIN       :Rp.7.000,00               [8] ES BOBA      :Rp.15.000,00"<<endl;
			cout<<"[4] JOS SUSU DINGIN       :Rp.4.500,00               [9] VODKA        :Rp.100,000,00"<<endl;
			cout<<"[5] ES TELER              :Rp.5.000,00                                              "<<endl;  
			cout<<"*******************************************************************************************"<<endl;
			cout<<endl;
			cout<<"MASUKAN PILIHAN ANDA :";
			cin>>pilih;
			
			if (pilih == '1'){
				cout<<" JUS MANGGA "<<endl;
				harga=8000;
			} else if(pilih =='2'){
				cout<<"[2] AIR PUTIH DINGIN"<<endl;
				harga=3000;
			} else if(pilih =='3'){
				cout<<" JOS SUSU DINGIN"<<endl;
				harga=7000;
			} else if(pilih =='4'){
				cout<<" JOS SUSU DINGIN"<<endl;
				harga=4500;
			} else if(pilih =='5'){
				cout<<" ES TELER "<<endl;
				harga=5000;
			} else if (pilih =='6'){
				cout<<" JUS JERUK "<<endl;
				harga=5000;
			} else if (pilih =='7'){
				cout<<" COCACOLA "<<endl;
				harga=6000;
			} else if (pilih =='8'){
				cout<<" ES BOBA "<<endl;
				harga=15000;
 			} else if (pilih =='9'){
				cout<<" VODKA   "<<endl;
				harga=100000;
			}else {
				cout<<"MAKANAN TIDAK TERSEDIA"<<endl;
			}
			
			cout<<"BERAPA BANYAK PESANAN =";
			cin>>banyak;
			total_bayar=banyak*harga;
			cout<<"TOTAL BAYAR ADALAH ="<<total_bayar<<endl;
			
			cout<<"MAU PESAN MENU YANG LAIN ?y/n"<<endl;
			cin>>yesNo;
			cout<<endl;
			break;
			
		case 3:
			cout<<"***************************************MENU CEMILAN*******************************************"<<endl;
			cout<<"                       [1] SOSIS BAKAR       :Rp.12.000,00 \n";
			cout<<"                       [2] ROTI BAKAR        :Rp.15.000,00\n";
			cout<<"                       [3] KENTANG GORENG    :Rp.10.000,00\n";
			cout<<"                       [4] PISANG GORENG     :Rp.8.000,00\n";
			cout<<"                       [5] KERIPIK SINGKONG  :Rp.5.000,00\n";
			cout<<"**********************************************************************************************"<<endl;
			cout<<endl;
			cout<<"MASUKAN PILIHAN ANDA =";
			cin>>pilih;
			
			if (pilih =='1'){
				cout<<" SOSIS BAKAR"<<endl;
				harga=12000;
			} else if(pilih=='2'){
				cout<<" ROTI BAKAR"<<endl;
				harga=15000;
			}else if(pilih =='3'){
				cout<<" KENTANG GORENG "<<endl;
				harga=10000;
			}else if(pilih =='4'){
				cout<<" PISANG GORENG "<<endl;
				harga=8000;
			}else if(pilih =='5'){
				cout<<" KERIPIK SINGKONG  "<<endl;
				harga=5000;
			}
				cout<<"CEMILAN TIDAK TERSEDIA"<<endl;
			{
			
		}
			cout<<"BERAPA BANYAK PESANAN =";
			cin>>banyak;
			total_bayar=harga*banyak;
			cout<<"TOTAL BANYAR ADALAH ="<<total_bayar<<endl;
	
			cout<<"MAU PESAN MENU YANG LAIN ? =y/n"<<endl;
			cin>>yesNo;
			cout<<endl;
			break;
	}
	

   	for (int i=0;i<x;i++);{
	total_semua=total_bayar+total_semua;
	}
	cout<<endl;
	
	} while (yesNo =="y" || yesNo=="Y");
	
	cout<<"**************************************************************"<<endl;
	cout<<"                     WARUNG MAKANAN MURAH                  "<<endl;
	cout<<"                        M*SYAMSUL HADI                      "<<endl;
	cout<<"                JLN.BERAIM LAUQ NO 23 OKE OKE               "<<endl;
	cout<<"**************************************************************"<<endl;
	cout<<"                            KASIR PEMBAYARAN                    "<<endl;
	cout<<"**************************************************************"<<endl;
	cout<<"TOTAL PESANAN  :"<<total_semua<<endl;
	cout<<"DISKON 10% :"<<total_semua/diskon<<endl;
	total_semua=total_semua-(total_semua/diskon);
	cout<<"TOTAL SEMUA PEMBAYARAN :"<<total_semua<<endl;
	do{
	cout<<"*************************************************************"<<endl;
    	cout<<"UANG BAYAR:";
		cin>>uang_bayar;
		if(uang_bayar>=total_semua){
		uang_kembali =uang_bayar - total_semua;
		cout<<"UANG KEMBALI: "<<uang_kembali<<endl;
        cout<<"==================================================================================================="<<endl;
		cout<<"************   ***   ***   *********   *********  ***  ***    ***     ***  ***   ***   *********   "<<endl;
		cout<<"************   ***   ***   *********   *********  *** ***      ***   ***   ***   ***   *********   "<<endl;
		cout<<"     ***       *********   ***   ***   ***   ***  ******        *******    ***   ***   ***   ***    "<<endl;
		cout<<"     ***       *********   *********   ***   ***  ******          ***      ***   ***   ***   ***   "<<endl;
		cout<<"     ***       ***   ***   *********   ***   ***  *** ***         ***      *********   *********   "<<endl;
		cout<<"     ***       ***   ***   ***   ***   ***   ***  ***  ***        ***      *********   *********   "<<endl;
        cout<<"==================================================================================================="<<endl;
        cout<<"==================================================================================================="<<endl;
		break;
		}else{
		cout<<"uang anda kurang :"<<uang_bayar-total_semua-(total_semua/diskon)<<endl;
	cout<<"***************************************************************"<<endl;	
	}
		cout<<"ULANGI / NGUTANG : y/n"<<endl;
		cin>>ulang;
	} while (ulang =="y"  || ulang =="Y");

}


