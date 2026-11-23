
// function  FunComp(){
//     return <h2> "this is function component"</h2>;
// }

// const FunComp = (pros)=> {
//     return <div>
//         <h2> this is function component</h2>;
//         <p>this is a paragraph for FunComp</p>
//         <p> Fname: {props.fname},Lname: {props.lanme}</p>
//     </div>
     
// }

const FunComp = (props)=> {

    const {fname,lanme,pin}= props;     // destructed
    return <div>
        <h2> this is function component</h2>;
        <p>this is a paragraph for FunComp</p>
        <p> Fname: {fname},Lname: {lanme}, Pin: {pin}</p>
    </div>
     
}

export default FunComp;