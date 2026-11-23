const fs =require('fs');

const express =require('express')
const app =express();

app.get("/",(req,res,next)=>{
    // res.send("simple get request")
    res.sendFile(__dirname+"/My portfolio.html"); 
    // entering html page 
});

app.get("/home",(req,res,next)=>{
    res.send("Home is here")
});

app.get("/about",(req,res,next)=>{
    res.send("about is here")
});

app.get("/gallery",(req,res,next)=>{
    res.send("gallery is here")
});
app.get("/service",(req,res,next)=>{
    res.send("service is here")
});

app.get("/contact",(req,res,next)=>{
    res.send("contact is here")
});

app.listen(5050,()=>{
    console.log("server started..")
})