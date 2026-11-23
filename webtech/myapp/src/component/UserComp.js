import React from 'react'

const UserComp =(props)=>{
//   return (
//     <div>
//         <h1>This is user component</h1>
//         <h2>This is : (props.user) Component </h2>
//     </div>
//   )

if(props.user==="AQSA") {
    throw Error("Not a user");
}
return<h2>This is : {props.user}</h2>

}

export default UserComp;
