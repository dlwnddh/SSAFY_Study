const nums = [1, 2, 3, 4, 5];

// 수 더하기
const sum = nums.reduce((acc, cur) => {
  console.log("acc", acc);
  console.log("cur", cur);
  return acc + cur;
});
console.log(sum); // 15


// 축약
const sum1 = nums.reduce((acc, cur) => acc + cur);
console.log(sum); // 15


// 초기값이 있을 때
const newNums = nums.reduce((acc, cur) => {
  acc.push(cur + 1);
  return acc; // (acc, cur)의 acc 변수에 return 되면서(누적되면서) 순회된다.
}, []);
console.log(newNums); // [2, 3, 4, 5, 6]


// 응용
const arr = ["피카츄", "라이츄", "파이리", "꼬부기", "피카츄", "파이리"];
const result = arr.reduce((acc, cur) => {
  if (acc[cur]) { // acc.cur : acc 객체 내의 'cur'라는 key 값으로 바로 접근
                  // cur가 변수가 아니라 'cur'라는 값으로 인식됨
    acc[cur] += 1;
  } else {
    acc[cur] = 1;
  }
  return acc;
}, {});
console.log(result);  // {피카츄: 2, 라이츄: 1, 파이리: 2, 꼬부기: 1}