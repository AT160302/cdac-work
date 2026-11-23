const mysql = require('mysql');
const connection = mysql.createConnection({
    host: "localhost",
    user: "root",
    password: "",
    database: "ycpdb"
});

connection.connect((error)=>{
    if (error) throw error;
    console.log("database connection done")
});

module.exports= connection;
