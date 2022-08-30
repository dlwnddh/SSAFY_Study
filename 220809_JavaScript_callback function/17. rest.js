const chicken = {
  type: "양념",
  drumsticks: 2,
  wing: 2,
};

const { type, ...another } = chicken;
console.log(type); //  양념
console.log(another); // {drumsticks: 2, wing: 2}

const numberArray = [0, 1, 2, 3, 4, 5, 6];
const [one, two, ...anotherNum] = numberArray;
console.log(one); // 0
console.log(two); // 1
console.log(anotherNum); // [2, 3, 4, 5, 6]
