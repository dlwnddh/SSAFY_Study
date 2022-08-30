// prompt
const result = prompt("새 문자열 입력");
console.log(result);

// 문자열 -> 배열의 형태
// split " "을 기반으로 나누기

const splitResult = result.split(" ");
console.log(splitResult);

const array = [];

for (let i = 0; i < splitResult.length; i++) {
  array.push(splitResult[i]);
}
