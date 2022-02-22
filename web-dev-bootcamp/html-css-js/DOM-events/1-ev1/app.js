let b1 = document.querySelector("#btn1");


let click = b1.onclick = function () { 
    console.log('you cliked me!')   
};

const scream = function(){
    console.log("AAAAAAAAAAAAAAAAAAAAAAAA!!")
    console.log("AAAAAAAAAAAAAAAAAAAAAAAA!!")
    
}
// b1.onmouseenter = scream;

const b3 = document.querySelector('#btn3')

b3.addEventListener('dclick', function(){
    alert('clicked!')
})