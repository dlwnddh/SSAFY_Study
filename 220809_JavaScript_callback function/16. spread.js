const square = {
  width: 200,
  height: 200,
};

const colorSquare = {
  ...square,  // spread. 객체를 통채로 들고 와서 펼친다.
  color: 'red',
};

console.log(colorSquare);