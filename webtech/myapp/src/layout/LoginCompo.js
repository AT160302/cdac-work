import React , {useRef }from 'react'
import { useNavigate } from 'react-router-dom';




const LoginCompo = () => {

  const nav = useNavigate();
           let uid =  useRef();
           let upass =  useRef();

const getdetails= ()=>{
  console.log(uid.current.value);
  // let userid = uid.current.values;
  // let userpass = upass.current.value;
}

  return (
    <div style={{width:"400px",border:"2px solid blue",margin:"auto", padding: "10px"}}>
      <h2>LoginCompo</h2>
      <form>
        <label>Enter user ID: </label>
        <input type="text" name="uid" className='form-control'/> <br/>

        <label>Enter user passocde: </label>
        <input type="text" name="upass" className='form-control'/> <br/>
        <button type='button onClick ={()=>getDetail()}' >Submit</button>
      </form>
      </div>
  )
}

export default LoginCompo