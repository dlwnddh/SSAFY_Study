let str = "bts@macdonald.co.kr||inho@mincoding.co.kr||jason@jyp.com";

// str = str.replace(/co.kr|com/g, "net");
str = str.replace(/co.kr/g, "net");
str = tr.replace(/com/g, ".net");

let arr = str.split("||");
const ans = [];

for (let i = 0; i < arr.length; i++) {
  let x = arr[i].indexOf("@");
  let id = arr[i].substring(0, x);
  ans.push(id);
}

console.log(ans);
