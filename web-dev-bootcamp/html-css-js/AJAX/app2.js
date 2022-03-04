// fetch('https://api.tvmaze.com/singlesearch/shows?q=girls')
// .then(res=>{
//     console.log("response, waiting to parse",res)
//     return res.json();
// })
// .then(data =>{
//     console.log("Data parsed:". data)
// })
// .catch(e =>{
//     console.log('oh no, an error!', e)
// });

// const jokes = document.querySelector('#jokes');

// const getDadJokes= async () =>{
//     const headers = {headers: {Accept: 'application/json'}}
//     const res = await axios.get('https://icanhazdadjoke.com/',headers)
//     const newLi = document.createElement('LI');
//     newLi.append(res.data.joke);
//     jokes.append(newLi);
// }
// const btnJoke = document.querySelector('#btn')
// btnJoke.addEventListener('click', getDadJokes);

// Redone fetch /////////////

// fetch("https://swapi.dev/api/people/1/")
// .then(res=>{
//     console.log("Resolved!",res);
//     // res.json().then(data => console.log("JSON done!", data))
//     return res.json();
// })
// .then(data =>{
//     console.log(data);
//     return fetch("https://swapi.dev/api/people/2/")
// })
// .then(res =>{
//     return res.json()
// })
// .then(data => {
//     return console.log("Here it is!",data)
// })
// .catch(err=>{
//     console.log("Error",err);
// })

const loadStarWarsPeople = async () =>{
    try{
        const response = await fetch("https://swapi.dev/api/people/1/")
        const data = await res.json();
        console.log(data)
        

    } catch(e){
        console.log(e);
    }
    
}