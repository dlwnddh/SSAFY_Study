const express = require("express");

const app = express();
const PORT = 8080;

const cors = require("cors");
app.use(cors());

const morgan = require("morgan");
const { pool } = require("./db");
app.use(morgan("dev"));

app.use(express.json());

// backend와 DB는 분리되어 있기 때문에, 비동기
app.get("/api/menus", async (req, res) => {
  try {
    const data = await pool.query("SELECT * FROM menus");
    // 필요로 하는 데이터가 0번 index에 들어 있기 때문에 data[0]
    return res.json(data[0]);
  } catch (error) {
    return res.json({
      success: false,
      message: "전체 메뉴 목록 조회에 실패하였습니다.",
    });
  }
});

app.get("/api/menus/:id", async (req, res) => {
  try {
    const data = await pool.query("SELECT * FROM menus WHERE id = ?", [
      req.params.id,
    ]);
    console.log(data[0]);
    // data[0]는 객체인데,단 하나밖에 없는 객체이므로,[]를 제거하기 위해 data[0][0]
    return res.json(data[0][0]);
  } catch (error) {
    return res.json({
      success: false,
      message: "메뉴 조회에 실패하였습니다.",
    });
  }
});

app.post("/api/orders", async (req, res) => {
  try {
    const data = await pool.query(
      `INSERT INTO orders (quantity, request_detail, menus_id) VALUES (?, ?, ?)`,
      [req.body.quantity, req.body.request_detail, req.body.menus_id]
    );
    return res.json({
      success: true,
      message: "주문에 성공하였습니다.",
    });
  } catch (error) {
    console.log(error);
    return res.json({
      success: false,
      message: "주문에 실패하였습니다.",
    });
  }
});

app.listen(PORT, () => console.log(`this server listening on ${PORT}`));
