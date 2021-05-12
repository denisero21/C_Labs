#include <list>
#include <string>
#include <vector>
using namespace std;

std::list<int> castStrToList(std::string str)
{
	  std::list<int> ans;
	  for (int i = 0; i < str.size(); ++i)
	  {
			ans.push_back(str[i] - '0');
	  }

	  return ans;
}

std::list<int> LongAddLong(std::list<int> left, std::list<int> right)
{
	  int rank1 = left.size();
	  int rank2 = right.size();

	  if (rank1 < rank2)
	  {
			for (int i = 0; i < rank2 - rank1; ++i) {
			  left.push_front(0);
			}
	  }
	  else if (rank1 > rank2)
	  {
			for (int i = 0; i < rank1 - rank2; ++i) {
			  right.push_front(0);
			}
	  }

	  std::list<int> ans;
	  int add = 0;
	  auto i = --left.end();
	  for (auto j = --right.end(); j != --right.begin(); --i, --j)
	  {
			int leftDig = *i;
			int rightDig = *j;
			short int sum = leftDig + rightDig + add;
			if (sum > 9)
			{
				sum -= 10;
				add = 1;
			}
			else add = 0;
			ans.push_front(sum);
	  }
	  if (rank1 == rank2)
	  {
			if (add == 1)
			{
				ans.push_front(1);
			}
	  }
	  else
	  {
			if (add == 1)
			{
				ans.push_front(*(i++) + 1);
			}
			for (; i != --left.begin(); --i)
			{
				ans.push_front(*i);
			}
	  }
	  return ans;
}

vector<int> convert(string number)
{
	  vector <int> convert_number;
	  for (int i = number.size() - 1; i >= 0; i--)
	  {
			convert_number.push_back(number[i] - '0');
	  }

	  return convert_number;
}

void remove_leading_zeros(vector<int>& number)
{
	  while (number.size() > 0 && number.back() == 0)
	  {
			number.pop_back();
	  }
	  if (number.size() == 0)
	  {
			number.push_back(0);
	  }
}

vector<int> LongSubLong(vector<int> first_number, vector<int> second_number)
{
	  for (size_t i = 0; i < first_number.size(); i++)
	  {
			if (i < second_number.size())
			{
				first_number[i] -= second_number[i];
			}
			if (first_number[i] < 0)
			{
				first_number[i] += 10;
				first_number[i + 1]--;
			}
	  }

	  remove_leading_zeros(first_number);
	  return first_number;
}

bool less_or_equal(vector<int> first_number, vector<int> second_number)
{
	  if (second_number.size() > first_number.size())
	  {
			return true;
	  }
	  if (first_number.size() > second_number.size())
	  {
			return false;
	  }
	  for (int i = second_number.size() - 1; i >= 0; i--)
	  {
			if (second_number[i] != first_number[i]) {
			  return first_number[i] < second_number[i];
			}
	  }

	  return true;
}

