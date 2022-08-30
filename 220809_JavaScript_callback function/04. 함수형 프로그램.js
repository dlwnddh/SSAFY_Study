// 함수형 프로그램 예제. 함수로 함수를 만든다.
const adder = (x) => (y) => x + y;
add5 = adder(5); // add5가 함수가 된다.
console.log(add5(1)); // 6