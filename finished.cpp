#include <iostream>
using namespace std;

class Abstract_Lecturer{
    protected:
        string F_Name;
        string L_Name;
        string Lecture_Name;
        
    public:
        Abstract_Lecturer(string F_Name,string L_Name,string Lecture_Name){
            this->F_Name=F_Name;
            this->L_Name=L_Name;
            this->Lecture_Name=Lecture_Name;
        }
        
        virtual void lecturer_Teaching()=0;
        
        string getF_Name(){
            return F_Name;
        }
        
        void setF_Name(string F_Name){
            this-> F_Name = F_Name;
        }
        
        
        string getL_Name(){
            return L_Name;
        }
        
        void setL_Name(string L_Name){
            this->L_Name=L_Name;
        }
        
        string getLecture_Name(){
            return Lecture_Name;
        }
        
        
        void setLecture_Name(string Lecture_Name){
            this->Lecture_Name=Lecture_Name;
        }
};

class skillWill_Lecturer:public Abstract_Lecturer{
    protected:
        string Chapter;
        string Level;
    
    public:
        skillWill_Lecturer(string F_Name,string L_Name,string Lecture_Name,string Chapter,string Level):Abstract_Lecturer(F_Name,L_Name,Lecture_Name){
            this->Chapter=Chapter;
            this->Level=Level;
        }
        
        
        void lecturer_Teaching(){
            cout<<Level<<" "<<F_Name<< " "<<L_Name<<" is conducts a lecture about "<<Lecture_Name<<Chapter<<endl;
        }
};

class Abstract_Student{
    protected:
        string First_name;
        string Last_name;
        int Age;
        string Subject_name;
        
    public:
        Abstract_Student(string First_name,string Last_name,int Age,string Subject_name){
            this->First_name=First_name;
            this->Last_name=Last_name;
            this->Age=Age;
            this->Subject_name=Subject_name;
        }
        
        virtual void student_attending()=0;
        
        string getFirst_name(){
            return First_name;
        }
        
        void setFirst_name(string First_name){
            this->First_name=First_name;
        }
        
        string getLast_name(){
            return Last_name;
        }
        
        void setLast_name(string Last_name){
            this->Last_name=Last_name;
        }
        
        
        int getAge(){
            return Age;
        }
        
        void setAge(int Age){
            this->Age=Age;
        }
        
        string getSubject_name(){
            return Subject_name;
        }
        
        void setSubject_name(string Subject_name){
            this->Subject_name=Subject_name;
        }
        
        virtual void student_is_Online()=0;
};


class skillWill_Student:public Abstract_Student{
    protected:
        string Section;
        string Course;
        int Quiz_Score;
    
    public:
        skillWill_Student(string First_name,string Last_name,int Age,string Subject_name,string Section,string Course,int Quiz_Score):Abstract_Student(First_name,Last_name,Age,Subject_name){
            this->Section=Section;
            this->Course=Course;
            this->Quiz_Score=Quiz_Score;
        }
        
        
        void student_attending(){
            cout<<"Student: "<<First_name<<" "<<Last_name<<" "<<Subject_name<<" "<<Age<<" "<<Section<<" "<<Course<<" "<<Quiz_Score<<endl;
        }
        
        
        int getQuiz_Score(){
            return Quiz_Score;
        }
        
        void updateQuiz_Score(int newQuiz_Score){
            Quiz_Score += newQuiz_Score;
        }
        
        void Total_Score(){
            cout<<getFirst_name()<<" "<<getLast_name()<< " Kahoot Quiz final score is: "<<Quiz_Score<<endl;
        }
        
        void student_is_Online(){
            cout<<"The student is on the lecture"<<endl;
        }
};

class Abstract_Subject{
    protected:
        string Sub_name;
        int Course_Duration;
        string Start_Date;
    
    public:
        Abstract_Subject(string Sub_name,int Course_Duration,string Start_Date){
            this->Sub_name=Sub_name;
            this->Course_Duration=Course_Duration;
            this->Start_Date=Start_Date;
        }
        
        string getSub_name(){
            return Sub_name;
        }
        
        void setSub_name(string Sub_name){
            this->Sub_name=Sub_name;
        }
        
        int getCourse_Duration(){
            return Course_Duration;
        }
        
        void setCourse_Duration(int Course_Duration){
            this->Course_Duration=Course_Duration;
        }
        
        string getStart_Date(){
            return Start_Date;
        }
        
        
        void setStart_Date(string Start_Date){
            this->Start_Date=Start_Date;
        }
        
        
        virtual void Starting_Lecture_Name()=0;
};


class skillWill_Subject:public Abstract_Subject{
    protected:
        string Lecture_Title;
        
    public:
        skillWill_Subject(string Sub_name,int Course_Duration,string Start_Date,string Lecture_Title):Abstract_Subject(Sub_name,Course_Duration,Start_Date){
            this->Lecture_Title=Lecture_Title;
        }
        
        void Starting_Lecture_Name(){
            cout<<"The lecture is "<<Lecture_Title<<endl;
        }
        
};



int main()
{
    skillWill_Lecturer lect("Zorbeg","Zorbegiani","React","Java","Junior");
    lect.lecturer_Teaching();
    
    skillWill_Student sudent("Dato","Tsanava ",43," IT","B","Front",3400);
    sudent.student_attending();
    
    skillWill_Student obj1("Dato","Tsanava",30,"Front-end","B","IT",500);
    skillWill_Student obj2("Vakho","Tsaava",32,"Front-end","C","IT",800);
    obj2.student_is_Online();
    // skillWill_Lecturer lecture1("John","Dow","CS50","Chapter 5","Junior");
    
    // obj1.updateQuiz_Score(800);
    // obj1.updateQuiz_Score(500);
    // obj1.Total_Score();
    // obj2.updateQuiz_Score(5000);
    // obj2.Total_Score();
    
    

    return 0;
}


