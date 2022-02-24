const fakeRequest = (url) =>{
    return new Promise((resolve, reject)=>{
        const random = Math.random();
        setTimeout(() => {
            if(random < 0.7){
             resolve('Deu certo');
            }
            reject('Deu certo n');
        }, 1000)
    })
};

fakeRequest('/dogs/1')
.then((data)=>(console.log('done, yaay')
))
.catch((err)=>(console.log('NOOOOOOO',err)
));
//////////////////////////////////////////////////////
const oneSecColor = (newColor, delay) =>{
    return new Promise ((resolve, reject)=>{
        setTimeout(()=>{
            document.body.style.backgroundColor = newColor;
            resolve();
        },delay)
    })
}

oneSecColor('red',1000)
.then(()=>oneSecColor('orange',1000))
.then(()=>oneSecColor('yellow',1000))
.then(()=>oneSecColor('green',1000))