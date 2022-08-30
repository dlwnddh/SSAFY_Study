const a = "ABCMINMIN";
const b = "BBQCOCO";

const result = a + b;
const array = [];

for (let i = result.length - 1; i >= 0; i--) {
  if (i % 2 === 0) {
    array.push(result[i]);
  }
}

alert(array);