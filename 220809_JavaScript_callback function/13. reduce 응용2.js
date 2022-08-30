// 짝수, 홀수 개수를 각각 카운트하는 reduce 생성
const nums = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13];

const newNums = nums.reduce((acc, cur) => {
  if (cur % 2 === 1) {
    if (acc["홀수"]) acc["홀수"] += 1;
    else acc["홀수"] = 1;
  } else {
    if (acc["짝수"]) acc["짝수"] += 1;
    else acc["짝수"] = 1;
  }
  return acc;
}, {});
console.log(newNums);
