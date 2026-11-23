import React from 'react'
import NavCompo from "../layout/NavCompo"
import FooterCompo from './FooterCompo';
import { Outlet } from 'react-router-dom';


const DashboardCompo = () => {
  return (
    <div className= 'container mt-2'>
    <div className='card border-primary'>
        <div className='card-header'>
            <NavCompo/>
        </div>
        <div className='card-body'>
            <Outlet/>

        </div>
        <div className='card-footer'>
            <FooterCompo/>

        </div>


        
    </div>

    </div>
    
  )
}

export default DashboardCompo;
