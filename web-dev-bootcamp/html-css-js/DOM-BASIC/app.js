const allLinks = document.querySelectorAll('a');

// for (let link of allLinks) {
//     link.innerText = 'I AM A LINK!!!!'
// }


// for (let link of allLinks) {
//     link.style.color = 'rgb(0, 108, 134)';
//     link.style.textDecorationColor = 'magenta';
//     link.style.textDecorationStyle = 'wavy'
// }

const lis = document.querySelectorAll('li');
for (let el of lis){
    if(el.classList.contains('highlight') === true){
        el.classLis.toggle('highlight');
    }else if(el.classList.contains('highlight') === false){
        el.classList.add('highlight');
    }
}

const p = document.querySelector('p');
// p.append('Yaaay')

const newB = document.createElement('b');
newB.append("hi")
const h2 = document.createElement('h2');
h2.append('Algo incrivel');

const h1 = document.querySelector('h1');
h1.insertAdjacentElement('afterend', h2);

// less used
//const h3 = document.createElement('h3')
//document.innerText('I am h3');
//h1.after(h3)

//-------------------------------------------
// 100 btn
// const d = document.querySelector('#container');

// for(let i =0; i<100;i++){
    
//     const btn = document.createElement('button');
//     btn.innerText=''
//     d.appendChild(btn)
    

// }
