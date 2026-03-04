using namespace std;

class User {
private:
    string username;
    string password;

public:
    User(const string& uname, const string& pwd) {
        username = uname;
        password = pwd;
    }

    bool login(const string& inputUser, const string& inputPwd) const {
        return (inputUser == username) && (inputPwd == password);
    }

    void updatePassword(const string& newPwd) {
        password = newPwd;
    }

};
