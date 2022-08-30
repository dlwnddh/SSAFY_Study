class Hero {
  constructor() {
    this.hp = 100;
  }

  run() {
    this.hp -= 10;
  }
}

class SuperMan extends Hero { // Hero라는 부모에서 자식 class 생성
  fly() {
    console.log("fly");
    console.log(this.hp);
  }
}

const superman = new SuperMan();

superman.run(); // 부모의 메서드를 사용할 수 있다.
superman.fly();