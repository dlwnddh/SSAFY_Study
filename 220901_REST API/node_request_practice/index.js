const express = require("express");
const cors = require("cors");
const morgan = require("morgan");
const { query } = require("express");

const app = express();
const PORT = 8080;

app.use(morgan("dev"));
app.use(express.json());
app.use(cors());

app.get("/user/:id", (req, res) => {
  try {
    return res.json({
      getid: true,
      id: req.params.id,
      name: req.query.name,
    });
  } catch (error) {
    return res.json({ getid: false });
  }
});

app.post("/user", (req, res) => {
  try {
    return res.json({
      signup: true,
      id: req.body.id,
      password: req.body.password,
    });
  } catch (error) {
    return res.json({ signup: false });
  }
});

app.patch("/user/:id", (req, res) => {
  try {
    return res.json({
      update: true,
      id: req.params.id,
      name: req.body.name,
    });
  } catch (error) {
    return res.json({ update: false });
  }
});

app.delete("/user/:id", (req, res) => {
    try {
      return res.json({
        delete: true,
        id: req.params.id,
      });
    } catch (error) {
      return res.json({ update: false });
    }
  });

app.listen(PORT, () => console.log(`${PORT} 가동중`));
