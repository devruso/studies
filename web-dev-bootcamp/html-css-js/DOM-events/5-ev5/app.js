const form = document.querySelector('form');
const lista = document.querySelector('#list');

const product = document.querySelector('#product');
    const number = document.querySelector('#qty');

 product.addEventListener('input',()=>{
     let dinamicTitle = document.querySelector('h1');
     if(product.value ==''){
         dinamicTitle.innerText == 'ME MUDA VAAAI';
     }else{
        dinamicTitle.innerText = `${product.value}` 
     }

    
})   
    form.addEventListener('submit',(e)=>{
    
        e.preventDefault(); 
        
    
        const newLi = document.createElement('li');
        newLi.innerText =`${number.value} ${product.value}`;
        lista.appendChild(newLi);

        product.value = '';
        number.value = '';
})


