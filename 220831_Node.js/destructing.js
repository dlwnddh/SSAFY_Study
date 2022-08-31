const friends = {
  name1: "철수",
  name2: "영희",
  run: (word) => console.log(word, "가자"),
};

const { name1, name2, run } = friends;

console.log(name1);
console.log(name2);
console.log(run("하하"));
