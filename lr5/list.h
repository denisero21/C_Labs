

class List
{
	private:
	struct node
	{
		float data;
		node *next;
		node *prev;
	};

	node *head, *tail;

	public:
	List()
	{
		head = nullptr;
		tail = nullptr;
	}

	void Add(float value);

	void GetNode();

	void DeleteElement(int pos);

	void DeleteFirst();

	int ChooseElement(int pos);

	float LongSumLong(float x, float y);

	float LongSubLong(float x, float y);

	float LongMulLong(float x, float y);

	float LongDivLong(float x, float y);

};
