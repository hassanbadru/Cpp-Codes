#include <iostream>

using namespace std;

#include <string>

int sms (char);
int main()
{
    char CODE;
    char MEANING;
   int endoption = 1;
   
    
    while (endoption==1)
    {        
    sms (CODE);
    
cout<<"ENTER '1' TO START ALL OVER AGAIN OR ANY OTHER NUMBER TO QUIT: "; //prompts the user to START ALL OVER AGAIN or quit
cin>> endoption ; //inputs an integer
}

if (endoption != 1) //if statement to quit
{
              return 0;
}
 
system ("pause");
return 0;
}    






int sms (char CODE )
{
     string S1,S2,S3;
    
    S1= "lol, btw, lmao, wen, jk, y, kk, naw, der, fyn, omg, ppl, sup, syl, thx";
    S2 = "ttyl, ur, wtf, lyk, aight, brb, lyl, ne-ways, wu, wuz";
	S3= "S3 TO COME TO THE AID OF THEIR COUNTRY 0123456789~!@#$%^&*()_+{}|:?><";
	
    
    cout<<S1<<"\n\n";
    cout<<S2<<endl<<endl;
     
    cout<< "Enter any message code that is include above: ";
    cin>> CODE;
    cout<< endl;
    
    cout<< "Enter the meaning of the code entered: ";
    cout<<endl;
    
    cout<<"     "<<endl;
    
    cout<< "Code #""       ""Code""         ""Code Meaning"<<endl;
    cout<< "------""       ""----""         ""------------"<<endl;
    cout<< "  1  ""        ""lol""         ""Laugh out loud"<<endl;
    cout<< "  2  ""        ""btw""            ""by the way"<<endl;
    cout<< "  3  ""       "" lmao""         ""laugh my ass off"<<endl;
    cout<< "  4  ""        ""wen""              ""when"<<endl;
    cout<< "  5  ""        "" jk""              ""joke"<<endl;
    cout<< "  6  ""        "" y""               ""why"<<endl;
    cout<< "  7  ""        "" kk""              "" ok"<<endl;
    cout<< "  8  ""        ""naw""              "" no"<<endl;
    cout<< "  9  ""        ""der""              ""there"<<endl;
    cout<<"  10  ""        ""fyn""              ""fine"<<endl;
    cout<<"  11  ""        ""omg""           "" oh my God"<<endl;
    cout<<"  12  ""        ""ppl""           ""   people"<<endl;
    cout<<"  13  ""        ""sup""           "" what's up"<<endl;
    cout<<"  14  ""        ""syl""          ""see you later"<<endl;
    cout<<"  15  ""        ""thx""            ""  thanks"<<endl;
    cout<<"  16  ""        ""ttyl""         ""talk to you later"<<endl;
    cout<<"  17  ""        "" ur""                ""your"<<endl;
    cout<<"  18  ""        ""wth""           ""what the hell"<<endl;
    cout<<"  19  ""        ""lyf""               ""life"<<endl;
    cout<<"  20  ""       ""aight""             ""alright"<<endl;
    cout<<"  21  ""        ""brb""          ""be right back"<<endl;
    cout<<"  22  ""        ""lyl""          ""love you lots"<<endl;
    cout<<"  23  ""       ""ne-ways""           ""anyways"<<endl;
    cout<<"  24  ""         ""wu""             ""what's up"<<endl;
    cout<<"  25  ""        ""wuz""               ""was"<<endl;
    
    return 0;
}
