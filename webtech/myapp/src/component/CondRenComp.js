import React, { Component } from "react";

class CondRenComp extends Component {
    constructor (props){
        super (props);

        this.state = {
            iscondition : true
        }
    }

    render(){
        // if (this.iscondition=true) {
        //     return <h2>Admin login</h2>;
        // }
        // else {
        //     return <h2>user login </h2>
        // }

        // using if else but using variable
        // let msg= "";
        // if (this.iscondition=true) {
        //      msg =" Admin login";
        // }
        // else {
        //      msg = " user login";
        // }
        // return <h2>{msg}</h2>;


        // // use of teranary operator 
        // return (!this.state.iscondition)?<h2> admin login</h2>:<h2>user login</h2>;

        // use of short circuit
        return this.state.iscondition && <h2>Admin login </h2>

    
    }
}

export default CondRenComp;