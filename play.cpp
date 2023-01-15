#include<bits/stdc++.h>
using namespace std;

int main() {
  int i,count=0,index,right=0,l;
  bool contains=false,poor=false;
    char ch,chr;
    char words[][20]={
        "able","acid","stone","spring","sorry","smart","sister","report","remain","also",
        "prayer","order","apply","newspaper","national","mother","bank","basic","garden","football",
        "female","episode","emergency","education","doctor","discover","department","daughter","creative","concept",
        "care","chair","club","color","dear","elite","fade","gift","hero","item",
        "comment","junior","classroom","childhood","chemical","brother","birthday","background","network","night",
        "nobody","normal","number","object","ocean","online","operator","orange","otherwise","package",
        "parent","pattern","period","personal","picture","planet","policy","potato","present","product",
        "project","proud","quick","radio","rapid","recent","reduce","remote","salary","science",
        "search","season","shadow","signal","silver","talent","theme","town","useful","variable",
        "volume","waste","where","window","write","yellow","zone","young","ticket","system",
        "mango","world","economy","fashion","framework","yourself","smarter","government","correct","highway",
        "journey","understand","police","health","attention","thanks","criminal","eyebrows","games","something",
        "quintessential","instantly","coronavirus","common","symptoms","meaning","recently","someone","immediately","between",
        "temporary","manager","morning","follow","contacts","university","pressure","foreign","romantic","organization",
        "advice","example","sentence","standard","software","technology","television","vegetable","without","website",
        "victory","village","visitor","warning","weather","white","window","wonderful","workshop","yesterday",
        "typical","temperature","successful","solution","religion","province","primary","principal","principle","president",
        "pregnant","murder","monitor","message","location","library","knowledge","investigation","investment","introduction",
        "interview","international","instructor","independence","independent","importance","impossible","improvement","holiday","honest",
        "headline","grandfather","grandmother","graduate","generation","gentleman","furniture","fundamental","function","friendship",

        "","","","","","","","","","",
        "","","","","","","","","","",
        "","","","","","","","","","",
        "","","","","","","","","","",
        "","","","","","","","","",""
    };
    srand(time(0));
    index=rand()%200;
    //printf("%s is at %d\n",words[index],index);
    char already[100];
    strcpy(already,"");
    char con[10];
    char word[20];
    strcpy(word,"");
    strcpy(word,words[index]);
    char temp[strlen(word)];
    for(i = 0; word[i]; i++){
        word[i] = tolower(word[i]);
    }
    for(i=0;i<strlen(word);i++){
        temp[i]='-';
    }

    //printf("%d %d\n",strlen(word),strlen(temp));

    cout<<"Your word template ("<<strlen(word)<<" Letters): ";
    while(strcmp(temp,word)){
        contains=false;
        printf("   %s   { Match:%d/%d, Already Entered: [%s] in %d Try }\n\n",temp,right,strlen(word),already,count);
        printf("Guess a Letter: ");
        //scanf("%c",&ch);
        //ch=getchar();
        cin>>chr;
        ch=tolower(chr);
        con[0]=ch;
        con[1]='\0';

        for(i=0;i<strlen(already);i++){
            if(ch==already[i]){
                contains=true;
                //cout<<"repeat of "<<ch<<endl;
                break;
            }
        }
        if(contains==false){
            strcat(already,con);
            strcat(already," ");
        }


        if(contains==false){
            for(i=0;i<strlen(word);i++){
                if(ch==word[i]){
                temp[i]=ch;
                right++;
                }
            }
        }

        count++;
        if(count>26){
            poor=true;
            break;

        }
    }

    if(!poor){
        printf("   %s\n",temp);
        printf("\n!!! CONGRATS !!! You were able to guess the word '%s' after %d tries \n\n",word,count);

    }

    else{
        printf("OOOOPPPPS !!!  Number of tries ran out \n");
        printf("The word was %s \n\n",word);
    }
    return 0;
}
