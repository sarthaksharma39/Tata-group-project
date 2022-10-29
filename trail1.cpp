#include <iostream>
using namespace std;
class TITAN
{
    public:
    string model[10]={"Edge Ceramic  ","Xylys         ","Edge mechanical","Nebula        "}; //customize category in which user can custom add with +
    string product_id[20]={"NQ1696KC01","9295DM04  ","1810NP01  ","5033DM01  "};         
    int code_no[20]={6969,9295,1810,5033};
    int price[20]={28999,33000,219500,525000};
    string extra[20]={"UNISEX","MEN","MEN","WOMEN"};
    
};          //company logo in terminal + voice command as samya     //customize category in which user can custom add with +    //operator overloading
class type : public TITAN
{
    public:
    //analog, digital , chronograph , smart watches

};
class analog : public type{
    public:
    string model[20]={"Titan Neo Iv","Titan Youth","Titan Karishma"}; //Titan Neo Economy
    string product_id[20]={"NL1805NM01","NL2480SM02","NL1774BM01"};         //NN1802SL04
    int code_no[20]={1805,2480,1774};//1802
    int price[20]={7145,2795,3365};  //1995
    string extra[20]={"MEN","WOMEN","MEN"};
};
class digital : public type{
    public:
    string model[20]={"SF Atomic","SF Arcade","SF Essentials"}; 
    string product_id[20]={"77097PP04","77100PP03","77112PP04"};         
    int code_no[20]={7709,7710,7711};
    int price[20]={900,700,745};
    string extra[20]={"MEN","MEN","UNISEX"};
};
class chronograph : public type{
    public:
    string model[20]={"Regalia","SOctane","Octane Signature"}; 
    string product_id[20]={"NN9308BM01","NM90047KM03","NP1761KP01"};         
    int code_no[20]={9308,9004,1761};
    int price[20]={11020,9475,10475};
    string extra[20]={"MEN","MEN","MEN"};
};
class smart : public type{
    public:
    string model[20]={"Traq","Smart Pro","Talk Smart"}; 
    string product_id[20]={"75004PP02","90149AP01","90156AP04"};         
    int code_no[20]={7500,9014,9015};
    int price[20]={17999,11959,9995};
    string extra[20]={"UNISEX","UNISEX","UNISEX"};
};
class men : public TITAN 
{
    public:
    string model[10]={"Titan Neo","SF Arcade","Smart 2"};
    string product_id[10]={"NL1805NM01","77100PP03","90149AP01"};
    double code_no[20]={1805,7710,9014};
    int price[20]={8000,750,12000};
    string extra[20]={"Analog","Digital","Smart watch"};
};
class women : public TITAN 
{
    public:
    string model[10]={"Titan Youth","Raga Viva","Smart 2"};
    string product_id[10]={"NL2480SM02","NN2603WL01","90149AP01"};
    int code_no[20]={2480,2603,9014};
    int price[20]={2795,4385,12000};
    string extra[20]={"Analog-Metal","Analog-Leather","Smart watch"};
};

int main(){
    TITAN tt;
    men m;
    analog ana; digital digi; chronograph chrono; smart smart;
    int choice;
    cout<<"Enter you choice :\n1. Luxury collection\n2. Type collection\n3. Men's collection\n4. Women's collection\n5. Custom\nYour choice:";
    cin>>choice;
    switch(choice){
        case 1:
        cout<<"\t\tYou are in Luxury collection category.\n";
        for(int t=0; t<3;t++){
            cout<<tt.code_no[t]<<"\t"<<tt.model[t]<<"\t"<<tt.product_id[t]<<"\t"<<tt.price[t]<<"\t"<<tt.extra[t]<<endl;
        }
        break;

        case 2:
        cout<<"\t\tYou are in Type collection category."<<endl;
        char keep;
        do{
        int type_choice;
        cout<<"1. Analog\t2. Digital\t3. Chronograph\t4. Smart watches\nYour choice:";
        cin>>type_choice;
        switch (type_choice)
        {
        case 1:
        cout<<"Analog watches :\n"<<endl;
        for(int t=0; t<3;t++){
            cout<<ana.code_no[t]<<"\t"<<ana.model[t]<<"\t"<<ana.product_id[t]<<"\t"<<ana.price[t]<<"\t"<<ana.extra[t]<<endl;
        }
            break;
        case 2:
        cout<<"Digital watches :\n"<<endl;
        for(int t=0; t<3;t++){
            cout<<digi.code_no[t]<<"\t"<<digi.model[t]<<"\t"<<digi.product_id[t]<<"\t"<<digi.price[t]<<"\t"<<digi.extra[t]<<endl;
        }
            break;
        case 3:
        cout<<"Chronograph watches :\n"<<endl;
        for(int t=0; t<3;t++){
            cout<<chrono.code_no[t]<<"\t"<<chrono.model[t]<<"\t"<<chrono.product_id[t]<<"\t"<<chrono.price[t]<<"\t"<<chrono.extra[t]<<endl;
        }
            break;
        case 4:
        cout<<"Smart watches :\n"<<endl;
        for(int t=0; t<3;t++){
            cout<<smart.code_no[t]<<"\t"<<smart.model[t]<<"\t"<<smart.product_id[t]<<"\t"<<smart.price[t]<<"\t"<<smart.extra[t]<<endl;
        }
            break;
        default:
        cout<<"OOPS! Invalid choice"<<endl;
            break;
        }
        cout<<"Want to continue:(y/n)   :";
        cin>>keep;
        }while(keep=='y');
        break;

        case 3:
        cout<<"you are in men's collection category.";
        for(int i=0; i<10; i++){
            cout<<m.model[i]<<" ";
        }
        break;

        case 4:
        cout<<"you are in Women's collection category.";
        for(int i=0; i<10; i++){
            cout<<m.model[i]<<" ";
        }
        break;

        case 5:
        cout<<"Customization category.";
        for(int i=0; i<10; i++){
            cout<<m.model[i]<<" ";
        }
        break;

        default:
        cout<<"invalid"<<endl;
    }
    return 0;
}
