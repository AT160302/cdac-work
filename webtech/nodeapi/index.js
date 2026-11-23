require("dotenv").config();
const bodyParser = require("body-parser");
const con = require("./connection");
const express = require("express");
const cors= require('cors');
const app = express();

const port = process.env.PORT;
const host = process.env.HOST;

app.use(bodyParser.urlencoded());
app.use(bodyParser.json({ extended: true }));

app.use(cors());

app.get("/", (req, res, next) => {
  res.send("simple get request");
});

// naming routing
app.get("/user", (req, res, next) => {
  // res.send("simple get request for user");
  con.query("Select * FROM user", (error, result) => {
    if (error) throw error;
    res.send(result);
  });
});

// app.get('/user/:id',(req,res,next)=>{
// con.query(`select * from user where id =${req.params.id}`,(error, result)=>{
//     if (error) throw error;
//     res.send(result);
// })

// ================= NAME ROUTING =================

// UPDATED: /user/:name → /user/name/:name
app.get("/user/name/:name", (req, res, next) => {
  con.query(
    `Select * FROM user where name="${req.params.name}"`,
    (error, result) => {
      if (error) throw error;
      res.send(result);
    },
  );
});

// ================= POST ROUTING =================

// UPDATED: /user/:post → /user/post/:post
// app.get('/user/post/:post', (req, res, next) => {

//     con.query(
//         `Select * FROM user where post="${req.params.post}"`,
//         (error, result) => {
//             if (error) throw error;
//             res.send(result);
//         }
//     )

// });

app.get("/user/:post", (req, res, next) => {
  con.query(
    `Select * FROM user where post="${req.params.post}"`,
    (error, result) => {
      if (error) throw error;
      res.send(result);
    },
  );
});

//
// app.get('/test', (req, res) => {

//     con.query('SELECT * FROM user', (error, result) => {

//         if (error) {
//             console.log(error);
//             return res.status(500).send(error);
//         }

//         console.log(result);
//         res.send(result);
//     });

// });

// // delete request
app.delete("/user/:id", (req, res, next) => {
  con.query(`DELETE FROM user where id=${req.params.id}`, (error, result) => {
    if (error) throw error;
    res.send(result);
  });
});

// // post request
app.post("/user", (req, res, next) => {
  // res.send("simple post request for user");
  // let name= req.body.name;
  // let post = req.body.post;
  // let salary = req.body.salary;

  const { Name, Post, Salary } = req.body;

  let insertQuery = `INSERT INTO user(Name,Post,Salary) VALUES(?,?,?)`;
  con.query(insertQuery, [Name, Post, Salary], (error, result) => {
    if (error) throw error;
    res.send(result);
  });
});

// // put request
// app.put("/user", (req, res, next) => {
//   res.send("simple post request for user");
// });

app.put("/user/:id", (req, res, next) => {
  // res.send("simple post request for user");
  // let name= req.body.name;
  // let post = req.body.post;
  // let salary = req.body.salary;

  const { Name, Post, Salary } = req.body;

  let updateQuery = `Update user Set Name=?, Post=?, Salary=? where id = ${req.params.id}`;
  con.query(updateQuery, [Name, Post, Salary], (error, result) => {
    if (error) throw error;
    res.send(result);
  });
});

app.listen(port, () => {
  console.log(`server is started on ${host}:${port}`);
});
