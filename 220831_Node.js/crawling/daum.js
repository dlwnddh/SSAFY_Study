const puppeteer = require("puppeteer");

const main = async () => {
  // 브라우저 생성
  const browser = await puppeteer.launch({
    headless: true, // 기본값 : true, 창이 뜨지 않는 상태
  });
  const page = await browser.newPage();

  await page.goto("https://news.daum.net/digital#1");
  
  // 원래 Node에서는 DOM에 접근할 수 없다.
  // DOM 사용을 허용하기 위해 evaluate를 사용한다.
  const data = await page.evaluate(() => {
    const newsList = document.querySelectorAll(".list_newsmajor strong a");
    const titles = Array.from(newsList).map(li => li.textContent);
    return titles;
  })

  console.log(data);

  await browser.close();
};

main();
