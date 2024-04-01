#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#pragma region 함수+변상수+스코프+라이프사이클
/*
변수와 상수 영역이란?
변/상수가 프로그램에 걸쳐서 영향을 미칠 수 있는 범위를 의미한다.
ㄴ 변/상수의 종류에 따라서 해당 변/상수에 접근할 수 있는 범위가 달라진다.
 ㄴ 효율적으로 사용을 하면, 데이터의 값을 보존하고 컴퓨터가 자동으로 최적화를 수행한다.
  ㄴ 할당된 메모리의 회수. == 라이프사이클

바꿔말해, 서로 다른 영역에서만 유효한 동일한 이름을 지니는 변/상수가 존재할 경우
각각의 변/상수를 서로 별개라는 의미이다.

또한 c/c++ 언어는 {  }의 조합을 통해서 특정 영역의 시작과 끝을 나태내는 것이 가능.
c/c++ 언어의 변/상수 종류

**  면접 사골문제 **
- 로컬 (지역)
 ㄴ 특정 영역에서만 접근이 가능한 변/상수 : for문(int i)

- 전역 (글로벌)
ㄴ 프로그램 전체에서 접근이 가능한 변/상수

- 정적 로컬 (지역)
ㄴ 특정 영역에서만 접근이 가능하지만 지역 변수와 달리 해당 변수의 값이 항상 유지되는 변/상수 ?static?

- 정적 전역 (글로벌)
ㄴ 전역 변수와 달리 해당 변/상수가 선언된 파일에서만 접근이 가능한 변/상수 : 

**  면접 사골문제 **
* -전역/지역/동적 변수등 변수의 lifeycle을 설명해보시요
*  A		-> R	 -> MP
* Allocate Realase MemoryPool
* 변수의 메모리가 확보된 시점부터 ~ 해제되어 가용메모리풀에 반환되는 시점을 의미한다.
* 변수는 자신이 선언된 scope 내에서 생성되고 소멸된다.
 
 ** 지역변수의 생명주기: 함수의 생명주기
 ** 전역변수의 생명주기: 어플리케이션 생명 주기

 for(int i= 0 ; i< length; i++)
 {
 
 }

for문이 돌아가면서 메모리에 int i 할당 (4byte) 반복문에서 빠져나가면서 해제되어 가용 메모리풀에 반환된다.	 (지역변수)

*/
#pragma endregion

void IncreaseValue(int Value);
void DecreaseValue(int Value);

static int g_Value = 0;
const int g_ConstantValue = 0;

void main()
{
	int Value = 0;
	cout << "정수 입력:";
	//10
	cin >> Value;
	cout << '\n';
	cout << " 값 증가시킨 후" << endl;

	IncreaseValue(Value);
	//10
	IncreaseValue(Value);
	//10

	cout << g_Value << endl << endl;
	//20
	cout << '\n';

	cout << "값 감소시킨 후" << endl;
	DecreaseValue(Value);
	//-10
	DecreaseValue(Value);
	//-20

	cout << g_Value << endl << endl;
	//0
	cout << '\n';

	// 다른언어세서 부러워 하는 기능
	// 특정 영역안에 새로운 영역을 만드는 기능
	{
		int Value = 0;
		int g_ConstantValue = 0;

		Value = 100;
		g_ConstantValue = 200; //데이터 재할당?

	} // 
	// 10
	cout << Value << endl;

	// 0
	cout << g_ConstantValue << endl;
}
//값을 증가시킨다.
void IncreaseValue(int Value)
{
	int LocalValue = 0;

	g_Value += Value;
	LocalValue += Value;

	cout << "값을 증가시키는 함수의 지역변수:" << LocalValue << endl;
}
//값을 감소시킨다.
void DecreaseValue(int Value)
{	//함수 내에서 
	// 한번만 초기화 됨.> 지역 변수와 달리 함수를 빠져나가도 소멸되지 않는다.
	// 정적 변/상수는 특정에서만 접근이 가능한 지역변수의 특징과 프로그램이 종료될때까지 
	// 사라지지 않는 전역 변수의 특성을 모두 지니고 있다.
	// 그렇기 때문에 선언하는 영역과 실행이 되는 그 첫 순간에만 유효하다는 것을 알 수 있다.

	static int LocalValue = 0;
	
	//함수 밖에서.
	g_Value -= Value;
	LocalValue -= Value;

	cout << "값을 감소시키는 함수의 지역변수:" << LocalValue << endl;

}