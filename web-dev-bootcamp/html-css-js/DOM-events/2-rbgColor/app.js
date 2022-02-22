const btn = document.querySelector('button');


const randomColor = function(){
    const r = Math.floor(Math.random() *255);
    const g = Math.floor(Math.random() *255);
    const b = Math.floor(Math.random() *255);
    const newColor = `rgb(${r},${g},${b})`
}

btn.addEventListener('click',function(){
         document.body.style.backgroundColor =  newColor;
            h1.innerText= `${newColor}`
})

const h1 = document.querySelector('h1');

const buttons = document.querySelectorAll('button')
for (let button of buttons){
    button.addEventListener('click',()=>{
        button.style.backgroundColor = randomColor();
    })
}