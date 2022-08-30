class Hero {
  constructor(hp) {
    this.hp = hp;
  }
  walk() {
    console.log("조금 빠르게 걷기");
  }
  run() {
    this.hp = this.hp - 10;
  }
}

class SuperMan extends Hero {
  constructor(hp, mp) {
    super(hp);  // 부모에 있는 것을 가져올 때 사용
    this.mp = mp;
  }
  walk() {  // Hero에 있는 walk와 이름이 동일. 다형성
    super.walk();
    console.log("완전 빠르게 걷기");
  }
  fly() {
    console.log("fly");
    console.log(this.hp);
  }
  getHP() { // 캡슐화
    return this.hp;
  }
}

const superman = new SuperMan(100, 100);

superman.run();
superman.walk();
superman.fly();

console.log(superman.getHP());