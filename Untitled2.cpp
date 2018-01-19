include <string>
using namespace std;

class rokok{

	public:
			void bahan(string tembakau);
			string merk;
			double batang;
};


int main(){
	rokok sampoerna;
	
	sampoerna.merk ="menthol";
	sampoerna.batang =16;
	
		
	cout<<"sampoerna menthol 16 "<< (sampoerna.merk)<<endl;
	cout<<"Harga murah "<< (sampoerna.batang)<<endl;
	
	sampoerna.bahan("tembakau nya padat");
}

void rokok::bahan(string tembakau){
	cout<<"Jangan ragukan tembakaunya "<<tembakau<<" tembakau pilihan "<<endl;
}

