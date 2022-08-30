function go(number) {
    return number * number;
}

const go1 = function (number) {
    return number * number;
}

// 화살표 함수는 기본적으로 함수의 이름이 없는 무명함수
const go2 = (number) => {
    return number * number;
}

// {}로 감싸지 않으면 return이 자동으로 포함된다.
const go3 = (number) => number * number;

// 인자가 하나일 경우, () 생략이 가능하다.
const go4 = number => number * number;




