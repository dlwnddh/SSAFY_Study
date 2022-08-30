const sampleFunc = (num) => console.log(num);

const nums = [3, 5, 4, 2];
nums.forEach((num) => console.log(num));
nums.forEach(sampleFunc); // 함수가 너무 길 경우
nums.forEach(sampleFunc()); // 함수의 결과 값을 넣음

const newNums = nums.map((num) => num + 1);
console.log(newNums);
