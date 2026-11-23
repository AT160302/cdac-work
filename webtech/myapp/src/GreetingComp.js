const GreetingComp = ()=>{

    // creating a function
    const greeting = ()=>{
        window.alert("nice to meet you");
    }

    const welcome= ()=> {
        window.alert("welcome to all");
    }
    return <div>
        <h2>this is a greeting</h2>
        <button type="button" onClick={()=>greeting()} >click on me</button>
        <h2 onMouseOver={()=>welcome()}>hover on me </h2>
    </div>
}

export default GreetingComp;