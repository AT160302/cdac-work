const express = require('express');
const app = express();
const path= require('path');

const publicPath = path.join(__dirname,"/public");
console.log(publicPath);
// use of express.static middleware
app.use(express.static(publicPath));

app.get("/",(req,res,next)=>{
     res.send("simple get respond");

});
app.get("/home",(req,res,next)=>{
    res.send("simple get respond for home");
});
app.get("/gallery",(req,res,next)=>{
    res.send("simple get respond for gallery");
});


app.listen(5050,()=>{
    console.log("server started")
})