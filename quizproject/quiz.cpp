#include <iostream>
#include <string>

using namespace std;

int guess;
int total;

class question {
    private:
        string Question_Text;
        string Answer_1;
        string Answer_2;
        string Answer_3;
        string Answer_4;
        int correct_Answer;
        int Question_Score;

    public:
        void setvalue(string, string, string, string, string, int, int);
        void askquestion();
};

void question::setvalue(string q, string a1, string a2, string a3, string a4, int ca, int pa) {
    Question_Text = q;
    Answer_1 = a1;
    Answer_2 = a2;
    Answer_3 = a3;
    Answer_4 = a4;
    correct_Answer = ca;
    Question_Score = pa;
}

void question::askquestion() {
    cout << endl;
    cout << Question_Text << endl;
    cout << "1. " << Answer_1 << endl;
    cout << "2. " << Answer_2 << endl;
    cout << "3. " << Answer_3 << endl;
    cout << "4. " << Answer_4 << endl;
    cout << endl;
    cout << "What is your answer: ";
    cin >> guess;

    if (guess == correct_Answer) {
        cout << endl;
        cout << "Great, you are correct!" << endl;
        total = total + Question_Score;
        cout << "Score: " << Question_Score << " out of " << Question_Score << endl;
    } else {
        cout << "Oh, no, you are wrong" << endl;
        cout << "Score: 0 out of " << Question_Score << endl;
        cout << "The correct answer is: " << correct_Answer << endl;
    }
    cout << endl;
}

int main() {
    cout << "Welcome to the quiz" << endl;
    cout << "Press Enter to start the quiz" << endl;
    cin.get();

    string name;
    int age;
    cout << "What's your name: ";
    cin.ignore(); // Clear the input buffer
    getline(cin, name);
    cout << "Enter your age: ";
    cin >> age;

    string respond;
    cout << "Are you ready for the quiz " << name << "? (yes/no): ";
    cin >> respond;

    if (respond == "yes") {
        cout << "Ok, good luck!" << endl;
    } else {
        cout << "Ok, good bye" << endl;
        return 0;
    }

    question question1, question2, question3, question4, question5, question6, question7, question8, question9, question10;

    question1.setvalue("What is meant by WHO?",
                        "World Health Organization",
                        "World Hero Organization",
                        "World How Orbit",
                        "None of the above",
                        1, 10);

    question2.setvalue("When did India get independence?",
                        "1940",
                        "1947",
                        "1847",
                        "None of the above",
                        2, 10);

    question3.setvalue("When did India become a republic?",
                        "Jan 12",
                        "Jan 26",
                        "Feb 26",
                        "None of the above",
                        2, 10);

    question4.setvalue("Who is the father of our nation?",
                        "Kamarajar",
                        "Patel",
                        "Mahatma Gandhi",
                        "None of the above",
                        3, 10);

    question5.setvalue("When do we celebrate Independence Day?",
                        "Aug 15",
                        "Sep 25",
                        "Oct 02",
                        "None of the above",
                        1, 10);

    question6.setvalue("Which book is written by Abdul Kalam?",
                        "Agni Siragugal",
                        "Pattinam",
                        "Victory",
                        "None of the above",
                        1, 10);

    question7.setvalue("Which is the largest river in India?",
                        "Ganges",
                        "Krishna",
                        "Kaveri",
                        "None of the above",
                        1, 10);

    question8.setvalue("What is the height of Himalaya?",
                        "1123 m",
                        "8848 m",
                        "8888 m",
                        "None of the above",
                        2, 10);

    question9.setvalue("Where was APJ Abdul Kalam born?",
                        "Theni",
                        "Madurai",
                        "Rameshwaram",
                        "None of the above",
                        3, 10);

    question10.setvalue("Who is the current Prime Minister of India?",
                        "Radhakrishnan",
                        "Modi",
                        "OPS",
                        "None of the above",
                        2, 10);

    question1.askquestion();
    question2.askquestion();
    question3.askquestion();
    question4.askquestion();
    question5.askquestion();
    question6.askquestion();
    question7.askquestion();
    question8.askquestion();
    question9.askquestion();
    question10.askquestion();

    cout << "Your total score is " << total << " out of 100" << endl;

    if (total >= 70) {
        cout << "Great, you passed the quiz!" << endl;
    } else {
        cout << "Sorry, you failed the quiz." << endl;
    }

    return 0;
}
