#include<iostream>
using namespace std;
class infectious_disease{
    public:
void malaria(){

cout<<"Result:Malaria"<<endl;
}

void typhoid(){

cout<<"Result:Typhoid"<<endl;
}

void dengue(){

cout<<"Result:Dengue"<<endl;
}
};

class major_diseases{
public:
    void heart_attack()
    {

      cout<<"Result:Heart attack"<<endl;
    }

    void stroke()
    {

    cout<<"Result:Stroke"<<endl;
    }

void migrane(){

cout<<"Result:Migrane"<<endl;
}

void depression(){

         cout<<"Result:depression"<<endl;
            }


};

class cancer
{
public:
    void skin_cancer(){

cout<<"Result:Skin cancer"<<endl;
}
void lung_cancer()
{

     cout<<"Result:Lung cancer"<<endl;
}
};

class reproductive_problems{
public:
    void reproductive_disease()
{

     cout<<"Result:May be Uterus cancer, Uterine fibroids, endometriosis, ovarian cysts"<<endl;
}

};

class intestinal_problems
{
public:
       void eating_disorder()
{

     cout<<"Result:bulimia or anorexia"<<endl;
}
          void internal_problems()
{

     cout<<"Result:infection of liver, pancreas, and gallbladder"<<endl;
}
};
class eye_problems{
public:
        void cataract()
{

     cout<<"Result:cataract"<<endl;
}



};

class most_suffered
{
    public:
       void diabetes()
{

     cout<<"Result:diabetes"<<endl;
}
           void blood_pressure()
{

     cout<<"Result:Blood pressure"<<endl;}
     void muscle_problems()
     {

         cout<<"Result:May be Joint problems,osteoporsis,calcium defficiency"<<endl;
     }

};

int main()
{
  infectious_disease d;
  major_diseases x;
  reproductive_problems y;
  intestinal_problems z;
  eye_problems w;
  most_suffered v;
  cancer u;
    string b,c,e,f,g;
cout<<"enter the symptoms"<<endl;
getline(cin,b) ;
getline(cin,c) ;
getline(cin,e) ;
getline(cin,f) ;
getline(cin,g) ;




if(f=="poor apetite"&&e=="high fever"&&b=="body ache"&&c=="constipation")
{
      d.typhoid();

}
if(b=="chills"&&c=="headache"&&e=="fever"&&f=="vomiting")
{

    d.malaria();


}
if(b=="muscle pain"&&c=="severe headache"&&e=="sudden high fever"&&f=="vomiting")
{
    d.dengue();

}
if(b=="cold sweat"&&c=="light headedness"&&e=="nausea"&&f=="shortness of breath")
{
    x.heart_attack();

}
if(b=="difficulty with speech"&&c=="dizziness "&&e==" sudden numbness"&&f=="loss of vision")
{
    x.stroke();

}

if(b=="coughing up blood"&&c=="phlegm"&&e=="pneumonia"&&f=="Severe wheezing")
{
    u.lung_cancer();

}
if(b=="anxiety"&&c=="fatigue"&&e=="tension"&&f==" worthlessness")
{
    x.depression();

}

if(b=="abdominal pain"&&c=="infertility"&&e=="itching"&&g=="pelvic Pain"&&f=="lower back pain")
{
    y.reproductive_disease();

}
if(b=="abdominal swelling"&&c=="chronic vomiting"&&e=="heartburn"&&f=="rectal bleeding")
{
    z.internal_problems();

}

if(b=="jaundice"&&c=="new moles on the skin"&&e=="painful skin lesions"&&f=="redness of face")
{
    u.skin_cancer();

}

if(b=="decreased grip strength"&&c=="excessive fatigue"&&f=="numbness"&&e=="muscle pains"&&g==" swelling")
{
       v.muscle_problems();

}

if(b=="fainting"&&c=="sudden headache"&&e=="vision problem"&&f=="vomiting")
{
    x.migrane();

}
if(b=="abnormal weight loss"&&c=="dehydration"&&e=="hunger"&&f=="refusing to eat"&&g=="vomit on purpose")
{
   z.eating_disorder();

}

if(b=="blurry"&&c=="cloudy or hazy vision"&&e=="double vision in a single eye"&&f=="seeing halos around lights")
{
    w.cataract();

}

if(b=="blurred vision"&&c=="frequent urination"&&e=="hunger"&&f=="tingling"&&g=="weight loss")
{
    v.diabetes();

}

if(b=="chest pain"&&c=="confusion"&&e=="difficulty breathing"&&f=="irregular heartbeat"&&g=="pounding in chest,neckor ears")
{
    v.blood_pressure();

}

else
{
    cout<<"It's a different set of symptoms "<<endl;
    cout<<"Shortly we will notify you with the disease"<<endl;

}
}







