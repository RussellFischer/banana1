#include iostream;
using namespace std;

class token {
  public:
  private:
};

token::token (void) {
  cout << "Object is being created" << endl;
}

token::~token(void) {
  cout << "Object is being deleted" << endl;
}
