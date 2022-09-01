const express = require("express");
const cors = require("cors");
const { pool } = require("./db");

// morgan 불러오기
const morgan = require("morgan")

const app = express();
const PORT = 8080;

// morgan 활용
app.use(morgan('dev'));

app.use(express.json());
app.use(cors());

app.get("/api/menus", async (req, res) => {
  try {
    const data = await pool.query("SELECT * FROM menus");
    return res.json(data);
  } catch (error) {
    return res.json(error);
  }
});

app.post("/api/menus", async (req, res) => {
  try {
    const data = await pool.query("INSERT INTO menus (menu_name, menu_description) VALUES (?, ?)",
    [req.body.menu_name, req.body.menu_description])

    return res.json(data);
  } catch (error) {
    console.log(error);
  }
});

app.listen(PORT, () => console.log(`this server listening on ${PORT}`));
