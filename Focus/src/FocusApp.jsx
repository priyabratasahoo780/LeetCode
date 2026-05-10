import React, { useState, useEffect } from 'react';
import './FocusApp.css';

const FocusApp = () => {
  const [rotation, setRotation] = useState(0);

  useEffect(() => {
    const intervalId = setInterval(() => {
      setRotation((prevRotation) => (prevRotation + 1) % 360);
    }, 16);

    return () => clearInterval(intervalId);
  }, []);

  return (
    <div className="illusion-container">
      {/* The 16:9 bounded box */}
      <div className="ratio-16-9-box">
        {/* The rotating content inside the 16:9 box */}
        <div 
          className="rotating-layer"
          style={{ transform: `rotate(${rotation}deg)` }}
        >
          <img 
            src="/illusion.png" 
            alt="Optical Illusion" 
            className="illusion-image"
            onError={(e) => {
              e.target.style.display = 'none';
              document.getElementById('css-fallback').style.display = 'block';
            }}
          />

          <div id="css-fallback" className="css-illusion-fallback" style={{ display: 'none' }}>
            <div className="ring ring1"></div>
            <div className="ring ring2"></div>
            <div className="ring ring3"></div>
          </div>
        </div>
      </div>
    </div>
  );
};

export default FocusApp;
