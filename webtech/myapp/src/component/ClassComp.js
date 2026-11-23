import React, {Component} from "react";

// class ClassComp extends Component{
//     render() {
//         return <div>
//         <h2>This is a ClassComp</h2>
//         <p>
//             Product:{this.props.pname},Price:{this.props.pprice}, Company:{this.props.pcompany}
//         </p>
//         </div>
        
//     }
// }


class ClassComp extends Component{
    render() {
        const {pname,pprice,pcompany} = this.props; // destructuring of props
        return <div>
        <h2>This is a ClassComp</h2>
        <p>
            Product:{pname},Price:{pprice}, Company:{pcompany}
        </p>
        </div>
        
    }
}

export default ClassComp;