class Circle
{
private:
	double radius_;
	static int numberofobjects;
public:
	Circle();
	Circle(const double &x);
	~Circle();
	double getArea();
	double getRadius();
	void setRadius(const double &y);

	static int getnumberofobjects();
};
