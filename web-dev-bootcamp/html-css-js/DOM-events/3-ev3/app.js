// document.querySelector('button').addEventListener('click', function(evt){
//     console.log(evt);
// })

// const input = document.querySelector('input');
// input.addEventListener('keydown',function(){
//     console.log('kEYDOWN')
// })
const  ul = document.querySelector('#cats');
const form = document.querySelector('#shelter');
const input = document.querySelector('#catName');

form.addEventListener('submit',function(e){
    e.preventDefault();

    let newCat = document.createElement('li');
    newCat.innerText = input.value;
    ul.appendChild(newCat);
    input.value = '';
})