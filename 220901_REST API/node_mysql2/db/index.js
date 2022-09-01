const mysql = require("mysql2/promise");

const pool = mysql.createPool({
  host: "3.38.65.199",
  user: "gorani",
  password: "rhfksl123",
  database: "jony",
  waitForConnections: true,
  connectionLimit: 10,
  queueLimit: 0,
});

module.exports = { pool };
