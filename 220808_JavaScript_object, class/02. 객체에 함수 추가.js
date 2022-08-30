// 객체 안에 속성으로 함수를 추가하는 것이 가능하다

const a = {};

const b = {
    teamname: "bbq",
    dance: function () {
        console.log("치킨")
    }
}

b.dance();