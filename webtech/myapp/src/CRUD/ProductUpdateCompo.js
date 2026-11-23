import React,{useState} from 'react'
import axios from 'axios'
import { useEffect } from 'react'
import { useNavigate, useParams } from 'react-router-dom'


const ProductUpdateCompo = () => {

 const nav = useNavigate();      // to perform automatic navigation
  const {id} = useParams();       // to get id 
  
    const [myproduct,setMyproducts]= useState({
      Id:"",
      Name:"",
      Post: "",
      Salary: ""
    })

    useEffect(()=>{
      axios.get(`http://localhost:5050/user/${id}`).then((res)=>{
        setMyproducts(res.data)
      }).catch((error)=>{})
    },[])

    const inputChangeHandler = (event)=>{
      const {type,Name,value} = event.target;
      setMyproducts({...myproduct,[Name]:value})
    }

    const addData=(event)=>{
      event.preventDefault();
      axios.put(`http://localhost:5050/user/${id}`,myproduct).then(()=>{
        window.alert("user update");
        nav("/dashboard/user")

      }).catch((error)=>{})
    }

  return (
    <div>
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

export default ProductUpdateCompo;