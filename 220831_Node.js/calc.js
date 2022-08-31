const a = 2;
const b = 4;

const calc = {
  add: (a, b) => a + b,
  sub: (a, b) => a - b,
  mul: (a, b) => a * b,
  div: (a, b) => a / b,
};

console.log(`주어진 수:   ${a}  ${b}`);
console.log(`덧셈 결과:   ${calc.add(a, b)}`);
console.log(`뺄셈 결과:   ${calc.sub(a, b)}`);
console.log(`곱셈 결과:   ${calc.mul(a, b)}`);
console.log(`나눗셈 결과: ${calc.div(a, b)}`);
