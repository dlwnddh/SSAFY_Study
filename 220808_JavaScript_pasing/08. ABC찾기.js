const a = "ABCABCMABCABCMCBBQABC";

let cnt = 0;
let x = -1;

while (1) {
  x = a.indexOf("ABC", x + 1);
  if (x === -1) break;

  cnt++;
}

console.log(cnt);
