class Hero {
    constructor (HP) {
        this.HP = HP;
    }

    showHP() {
        console.log(this.HP);
    }

    run() {
        this.HP = this.HP - 10;
    }
}

const batman = new Hero(100);
batman.showHP();
batman.run();
batman.run();
batman.showHP();