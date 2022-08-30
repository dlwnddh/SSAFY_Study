// 객체 리터럴

const ssafy = {
  name: "임베디드",
  study: function () {
    console.log("임베디드 공부하기");
  },
};

// 생성자 방식

const ssafy1 = new Object();
ssafy1.name = "임베디드";
ssafy1.study = function () {
  console.log("임베디드 공부하기");
};

console.log(ssafy1);
