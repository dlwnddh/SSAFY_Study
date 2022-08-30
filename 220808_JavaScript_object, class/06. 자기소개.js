class Lawyer {
  constructor(name, age, int) {
    this.name = name;
    this.age = age;
    this.int = int;
  }

  introduce() {
    console.log("이름: " + this.name);
    console.log("나이: " + this.age);
    console.log("자기소개: " + this.int);
  }
}

const person1 = new Lawyer("우영우", "27", "기러기 토마토 스위스 역삼역");
person1.introduce();

const person2 = new Lawyer("최수연", "27", "봄날의 햇살");
person2.introduce();
