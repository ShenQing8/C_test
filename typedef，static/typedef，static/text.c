//static修饰的全局变量使其外部连接属性变为内部连接属性
static int tsyear = 2023;

//static修饰的函数同全局变量，外部连接属性被改为了内部连接属性
static int Add(int x, int y)
{
	return x + y;
}
