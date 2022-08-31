const express = require("express");
const { pool } = require("./db");

const app = express();
const PORT = 8080;

const cors = require("cors");
app.use(cors());

app.get("/mysql_test", async (req, res) => {
  try {
    const data = await pool.query("SELECT * FROM menus");
    if (data[0]) {
      return res.json(data[0]);
    }
  } catch (error) {
    return res.json(error);
  }
});

app.listen(PORT, () => console.log(`this server listening on ${PORT}`));
