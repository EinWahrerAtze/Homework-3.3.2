#ifndef COUNTER_H_
#define COUNTER_H_
class Counter
{
public:
	void count_up();
	void count_down();
	void count_show(void);
	Counter(const int n);
	~Counter();
private:
	int counter;
};
#endif