
const container = document.querySelector('#container');
const baseURL = 'https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/pokemon/'
container.style.alignContent= 'center';
for  (let i=1; i<=150;i++){

        // DIV para cada pokemon
    const divPoke = document.createElement('div');
        divPoke.classList.add('pokemon')
        // criação da imagem, aição do endereço e adição da imagem à div individual
    const newPoke = document.createElement('img');
    newPoke.src = `${baseURL}${i}.png`;
    divPoke.appendChild(newPoke);


        // número, texto e adição de cada número à DIV individual
    const numPoke = document.createElement('span');
    numPoke.innerText = `#${i}`;
    divPoke.appendChild(numPoke);
    numPoke.classList.add('num')
        

        // adição da div individual na geral
    container.appendChild(divPoke)

}