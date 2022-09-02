const mysql = require("mysql2/promise");

const pool = mysql.createPool({
    // aws ip
    host: "3.38.65.199",
    // mysql username
    user: "gorani",
    // mysql user password
    password: "rhfksl123",
    // db name
    database: "order_system",
    waitForConnections: true,
    connectionLimit: 10,
    queueLimit: 0,
});

module.exports = { pool };