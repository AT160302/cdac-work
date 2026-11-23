
import './App.css';
import FunComp from './component/FunComp';
import ClassComp from './component/ClassComp';
import GreetingComp from './GreetingComp';
import StateComp from './component/StateComp';
import ParentComp from './component/ParentComp';
import CondRenComp from './component/CondRenComp';
import Purecomp from './component/PureComp';
import { ImageComp } from './ImageComp';
import MylistComp from './component/MylistComp';
import MyCarouselComp from './component/MyCarouselComp';
import UserComp from './component/UserComp';
import ErrorBoundary from './component/ErrorBoundary';
import UseStateHookCom from './hooks/UseStateHookComp';
import UseEffectHookComp from './hooks/UseEffectHookComp';
import MyFormComp from './component/MyFormComp';

function App() {
  return (
    <div className="App">
      {/* <header className="App-header">
       
        <h1>
        Aqsa
        </h1>
       
      </header> */}
      {/* <h1> Welcome you all in react session </h1>
      <FunComp fname="Aqsa" lname= "tadvi" pin ={1234}/> */}
      {/* <ClassComp pname= "limited" price= "50000" company = "google"/> */}
      {/* <ClassComp>pname= "limited", price= "50000" company = "google"</ClassComp> */}
      {/* <FriendDetailsComp pname="Aqsa" contact={983488999} gender ="Female" address ="Pune"/> */}
      {/* <GreetingComp/> */}
      {/* <StateComp/> */}
      {/* <ParentComp/> */}
      {/* <CondRenComp/> */}
      {/* <Purecomp></Purecomp> */}
      {/* <ImageComp/> */}
      {/* <MylistComp/>
      <MyCarouselComp/> */}
      {/* <UserComp user="Aqsa"/> */}
      {/* <ErrorBoundary> 
        <UserComp user ="AQSA"/>
      </ErrorBoundary>
      <ErrorBoundary> 
        <UserComp user ="Tadvi"/>
      </ErrorBoundary>
      <ErrorBoundary> 
        <UserComp user ="Zulfeen"/>
      </ErrorBoundary>
      <UseEffectHookComp/> */}
      <UseStateHookCom/>
      {/* <MyFormComp/>  */}
    </div>
  );
}

export default App;
