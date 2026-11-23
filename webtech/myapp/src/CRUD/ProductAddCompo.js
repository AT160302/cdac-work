import axios from 'axios'
import React, { useEffect, useState } from 'react'
import { useNavigate } from 'react-router-dom'
const ProductAddCompo = () => {

    const nav= useNavigate();
    const [myproduct,setMyproducts]= useState({
      Name:"",
      Post: "",
      Salary: ""
    })

    

    const inputChangeHandler = (event)=>{
      const {type,Name,value} = event.target;
      setMyproducts({...myproduct,[Name]:value})
    }

    const addData=(event)=>{
      event.preventDefault();
      axios.post(`http://localhost:5050/user`,myproduct).then(()=>{
        window.alert("user added");
        
      }).catch((error)=>{})
    }


  
  return (
    <div>
      <h2>ProductAddCompo</h2>
      <div>
        <div className='col-md-3'></div>
        <div className='col-md-6'>
           <form onSubmit={addData}>
          <label className='form-label'> enter product name: </label>
          <input type='text' name="Name" className='form-contol' onChange={inputChangeHandler} value ={myproduct.Name} />

          <label className='form-label'> enter product name: </label>
          <input type='text' name="Post" className='form-contol' onChange={inputChangeHandler} value ={myproduct.Post} />

          <label className='form-label'> enter product name: </label>
          <input type='text' name="Salary" className='form-contol' onChange={inputChangeHandler} value ={myproduct.Salary}/>

          <button type='button' className='btn btn-success mt-2'> Submit</button>

        </form>
        </div>
       
        <div className='col-md-3'></div>
      </div>
      </div>
  )
}

export default ProductAddCompo