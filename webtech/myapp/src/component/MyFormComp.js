import React, { useState } from 'react'

const MyFormComp = () => {
    const [user,setUser] = useState({
        uname:"",
        upass: "",
        term: false,
    
    });

    const inputchangehandler = (event)=> {
        const {type,name,value,checked} =event.target;
        setUser({...user,[name]:type=="checkbox"?checked:value});
    }

    const checkData= (event) =>{
        event.preventDefault();
        if(user.uname===""){
            window.alert("user name is required");
            return false;
        }

         if(user.upass===""){
            window.alert("user password is required");
            return false;
        }

         if(!user.term){
            window.alert("please accept term n condition");
            return false;
        }

        window.alert(JSON.stringify(user));
    }

  return (
    <div>
        <h2> this is a form component</h2>
        <form>
            <label className='form-label'>Enter user name: </label>
            <input type='text' name= "uname" onChange={inputchangehandler} value={user.uname}/>
            <label className='form-label'>Enter password: </label>
            <input type='text' name= "upass" value={user.upass}/>
             <label className='form-label'>
            <input type='checkbox' name= "term" onChange={inputchangehandler}/>
            I agree to term and condition 
            </label> 
            <br/>
            <button type='submit' className='btn btn-success btn-sm mt-2'>Submit</button>

        </form>
    </div>
  )
}

export default MyFormComp;