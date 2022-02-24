const fakeRequest = (url) =>{
    return new Promise((resolve, reject)=>{
        const delay = Math.floor(Math.random()* 4500) + 500;
        setTimeout(() => {
            if(delay < 4000){
             resolve('Deu certo');
            }
            reject('Deu certo n');
        }, 1000)
    })
};

// fakeRequest('/dogs/1')
// .then((data)=>(console.log('done, yaay')
// ))
// .catch((err)=>(console.log('NOOOOOOO',err)
// ));

async function makeTwoRequests(){
    try{
      let data1 = await fakeRequest('/page1');
    console.log(data1)  
    }catch(e){
        console.log('acontece/ it happens!',e)
    }
    
}


//////////////////////////////////////////////////////
const oneSecColor = (newColor, delay) =>{
    return new Promise ((resolve, reject)=>{
        setTimeout(()=>{
            document.body.style.backgroundColor = newColor;
            resolve();
        },delay)
    })
}

// oneSecColor('red',1000)
// .then(()=>oneSecColor('orange',1000))
// .then(()=>oneSecColor('yellow',1000))
// .then(()=>oneSecColor('green',1000))

async function rainbow(){
    await oneSecColor('red',1000) 
    await oneSecColor('orange',1000)
    await oneSecColor('yellow',1000)
    await oneSecColor('green',1000)
    await oneSecColor('blue',1000)
    await oneSecColor('indigo',1000)
    await oneSecColor('violet',1000)
}