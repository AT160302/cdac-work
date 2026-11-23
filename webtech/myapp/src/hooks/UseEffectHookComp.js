import React,{useEffect, useState} from "react";

const UseEffectHookComp = () => {

    const[age,setAge]= useState(19);
    const[sal,setSal]= useState(3000);


    // case1 : no dependency value
    useEffect(()=>{
        setAge(age+1);
    });

    return (
        <div>
            <h2> this is useeffect hook comp</h2>
            Age:{age}
            <hr/>
            salary: {sal}

        </div>
    )
}

export default UseEffectHookComp
