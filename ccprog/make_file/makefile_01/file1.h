// file1.h

class test1 {
	public:
		test1(int a, int b) {
			a_ = a;
    b_ = b;
  }

  ~test1() {}

  void print_value();

private:
  int a_;
  int b_;
};
