// import React, { Component } from 'react'

//  class ErrorBoundary extends Component {
//     constructor(props) {
//         super(props)

//         this.state = {
//             isCondition: false
//         }
//     }

//     static getDerivedStateFromError() {
//         return {
//             isCondition:true
//         }
//     }

//     componentDidCatch(error) {
//         console.log(error);
//     }


//   render() {
//     if(this.state.isCondition) {
//         return <p> Not a User</p>2
//     }
//     return this.props.children;
//   }
// }

// export default ErrorBoundary;