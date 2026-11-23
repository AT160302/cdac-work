import React from "react";

const UseMemoComp = (props)=> {
    console.log("memo component render")
    return <div>
        <h2>Hi i am Memo component</h2>
        <div>Item: {props.newItem}</div>
    </div>
}

export default React.memo(UseMemoComp);