import React from 'react'
import Carousel from 'react-bootstrap/Carousel';
import imgpath from '../shared/constant/constantData';

const MyCarouselComp = () => {
  return (
    <div>
        <Carousel>
      <Carousel.Item>
       <img src={imgpath.gulabjamun} alt= "gulab jamun"  style={{height: "500px", width:"300 px"}} />
       
        <Carousel.Caption>
          <h3>First slide label</h3>
          <p>Nulla vitae elit libero, a pharetra augue mollis interdum.</p>
        </Carousel.Caption>
      </Carousel.Item>
      <Carousel.Item>
       <img  src={imgpath.sweet2} alt= "sweet 2" style={{height: "500px", width:"300 px"}}/>
        <Carousel.Caption>
          <h3>Second slide label</h3>
          <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit.</p>
        </Carousel.Caption>
      </Carousel.Item>
      <Carousel.Item>
        <img src={imgpath.gulabjamun} alt= "gulab jamun" style={{height: "500px", width:"300 px"}} />
        <Carousel.Caption>
          <h3>Third slide label</h3>
          <p>
            Praesent commodo cursus magna, vel scelerisque nisl consectetur.
          </p>
        </Carousel.Caption>
      </Carousel.Item>
    </Carousel>

    </div>
    
  )
}

export default MyCarouselComp