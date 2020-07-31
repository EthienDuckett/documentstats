#include <iostream>
#include <string>
#include <vector>

// This code is really long, mostly because I don't know how to take enter as input.

class storage {
public:
    void addl(char what){
        // this took a while
        switch (what) {
            case 'a':
            lsl[0]+=1;
            break;
            case 'b':
            lsl[1]+=1;
            break;
            case 'c':
            lsl[2]+=1;
            break;
            case 'd':
            lsl[3]+=1;
            break;
            case 'e':
            lsl[4]+=1;
            break;
            case 'f':
            lsl[5]+=1;
            break;
            case 'g':
            lsl[6]+=1;
            break;
            case 'h':
            lsl[7]+=1;
            break;
            case 'i':
            lsl[8]+=1;
            break;
            case 'j':
            lsl[9]+=1;
            break;
            case 'k':
            lsl[10]+=1;
            break;
            case 'l':
            lsl[11]+=1;
            break;
            case 'm':
            lsl[12]+=1;
            break;
            case 'n':
            lsl[13]+=1;
            break;
            case 'o':
            lsl[14]+=1;
            break;
            case 'p':
            lsl[15]+=1;
            break;
            case 'q':
            lsl[16]+=1;
            break;
            case 'r':
            lsl[17]+=1;
            break;
            case 's':
            lsl[18]+=1;
            break;
            case 't':
            lsl[19]+=1;
            break;
            case 'u':
            lsl[20]+=1;
            break;
            case 'v':
            lsl[21]+=1;
            break;
            case 'w':
            lsl[22]+=1;
            break;
            case 'x':
            lsl[23]+=1;
            break;
            case 'y':
            lsl[24]+=1;
            break;
            case 'z':
            lsl[25]+=1;
            break;
            case 'A':
            lsl[0]+=1;
            break;
            case 'B':
            lsl[1]+=1;
            break;
            case 'C':
            lsl[2]+=1;
            break;
            case 'D':
            lsl[3]+=1;
            break;
            case 'E':
            lsl[4]+=1;
            break;
            case 'F':
            lsl[5]+=1;
            break;
            case 'G':
            lsl[6]+=1;
            break;
            case 'H':
            lsl[7]+=1;
            break;
            case 'I':
            lsl[8]+=1;
            break;
            case 'J':
            lsl[9]+=1;
            break;
            case 'K':
            lsl[10]+=1;
            break;
            case 'L':
            lsl[11]+=1;
            break;
            case 'M':
            lsl[12]+=1;
            break;
            case 'N':
            lsl[13]+=1;
            break;
            case 'O':
            lsl[14]+=1;
            break;
            case 'P':
            lsl[15]+=1;
            break;
            case 'Q':
            lsl[16]+=1;
            break;
            case 'R':
            lsl[17]+=1;
            break;
            case 'S':
            lsl[18]+=1;
            break;
            case 'T':
            lsl[19]+=1;
            break;
            case 'U':
            lsl[20]+=1;
            break;
            case 'V':
            lsl[21]+=1;
            break;
            case 'W':
            lsl[22]+=1;
            break;
            case 'X':
            lsl[23]+=1;
            break;
            case 'Y':
            lsl[24]+=1;
            break;
            case 'Z':
            lsl[25]+=1;
            break;
            default:
            return;
        }
        // I made this all look nice with white space, then I decided to shift some stuff around and it all compressed, thanks atom ide
        return;
    }
    void makeb(int where, std::string what){
        lsb[where] = what;
    }
    std::string returnb(int where){
        return (sa[where] + lsb[where]);
    }
    std::string returnlc (int where){
        return ("Number of " + alphabet[where] + ": " + std::to_string(lsl[where]));
    }
    int returntl(){
        return (lsl[0] + lsl[1] + lsl[2] + lsl[3] + lsl[4] + lsl[5] + lsl[6] + lsl[7] + lsl[8] + lsl[9] + lsl[10] + lsl[11] + lsl[12] + lsl[13] + lsl[14] + lsl[15] + lsl[16] + lsl[17] + lsl[18] + lsl[19] + lsl[20] + lsl[21] + lsl[22] + lsl[23] + lsl[24] + lsl[25]);

    }
private:
    std::string lsb[5] = {"newline","wordcount","charactercount", "lettercount","avwordlength"};
    int lsl[26] = {};
    std::string alphabet[26] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};
    std::string sa[5] = {"New lines (should be 100% accurate):   ", "Word count (based off logic):          ", "Character count (based off logic):     ", "Alphabetical character count:          ", "Average word length (based off logic): "};
};





std::string text;
std::string in;
int ia;
// std::string newlinels;
int a = 0;
int wordstart = 0;
int process1 = 0;
bool pass = false;
std::vector<int> vec;



// maybe I can make a version which uses pointers later on but I don't know how to point to an array with an array like can you do ls[30]=&letterstats and then do *ls[30][0] to get a's stats?

// python is a lot better for arrays I think but I will do the speed test soon!

// process1 could be phased out and replaced with the sum of all letter's count


int main(){
    // reads input
    storage all;

    std::cout << "input text like normal, type b; to finalize your entry" << std::endl;
    while (in != "b;"){
        std::getline(std::cin, in);
        if (in != "b;"){
            text+=in;
        }
        if (in != "b;"){
            ia = text.length();
            vec.emplace_back(ia);
        }
    }

    // prep for iteration
    int len1 = text.length();
    int len2 = vec.size();
// dissect user input and assign output to process1 and process2
    for (int c=0; c < len1; c++ ){
        all.addl(text[c]);
        //
        while ((text[c] == ' ') && c < len1){
            c+=1;


        }
        wordstart=c;
        while (text[c] != ' ' && c < len1 && pass == false){
            // edit the if statement to check for more symbols which will not be counted as words. Note that if these symbols are found in a word the word will be split up
            // maybe I should make this code more readable?
            if (text[c] == '.' && text[c] == ',' && text[c] == '!' && text[c] == '?' && text[c] == '@' && text[c] == '#' && text[c] == '$'){
                pass=true;
            }else{
                c+=1;
                all.addl(text[c]);
            }
        }

        // find new words by first finding words that have been identified by process2 i.e. anything which is processed as 1 character long. punctuation is not included in words apart from ' " and others
        if (c-wordstart > 0){
            process1++;
        }

        // find words by checking a variety of conditions, this finds if c's location in text is equal to a location of a new line and makes sure a does not exceed vec's length
        while (vec[a] < c && a < len2){
            // this section needs further testing...
            // checks if there is a word, and if there is it checks if the new line location vec has is the same as the one before and after it, it also makes sure that vec[a] is not counted in as a word in the event that the input is just a blank line, if it is then a is increased. new addition text[vec[a]-1] != ' ' makes sure that the line before it, if it had a space did not get an extra word
            if (c-wordstart > 0 && vec[a-1] != vec[a] && vec[a] != 0 && vec[a] != c && text[vec[a]-1] != ' '){
                process1++;
            }
            a+=1;
        }

        pass=false;
    }
    // assign values to document stats list
    int lcount = all.returntl();
    all.makeb(0, std::to_string(vec.size()-1));
    all.makeb(1, std::to_string(process1));
    all.makeb(2, std::to_string(len1));
    all.makeb(3, std::to_string(lcount));
    all.makeb(4, std::to_string(float(lcount)/process1));
    // std::cout << text << std::endl << len1 << std::endl;
    std::cout << all.returnb(0) << std::endl << all.returnb(1) << std::endl << all.returnb(2) << std::endl << all.returnb(3) << std::endl << all.returnb(4) << std::endl << std::endl << "Alphabet statistics (100% correct)" << std::endl;
    for (int c = 0; c < 26; c++){
        std::cout << all.returnlc(c) << std::endl;
    }
    std::cout << "check out ejware.com for more coding projects and make suggestions to ethienduckett@outlook.com" << std::endl;
}



// resources for testing and trouble shooting:

// Your edited question bears little resemblance to the original.
//
// You were trying to getline into an int, not a string or character buffer. The formatting operations of streams only work with

// heyhey
// hey hey
// hey


// hey
// hey hey
// hey
