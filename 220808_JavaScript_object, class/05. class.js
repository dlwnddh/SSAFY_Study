// 첫글자는 대문자로
class Human {

    // 생성자 (초기화 부분)
    constructor(name) {
        this.name = name;
    }

    // 메서드
    sayMyName() {
        console.log("이름: " + this.name);
    }
}

const person1 = new Human("이온유");
person1.sayMyName();