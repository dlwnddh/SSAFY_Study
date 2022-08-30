// 3 초과인 수만 filter하는 함수(reduce 이용)
const nums = [1, 2, 3, 4, 5];

const newNums = nums.reduce((acc, cur) => {
  if (cur > 3) acc.push(cur);
  return acc;
}, []);
console.log(newNums);
