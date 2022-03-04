// axios.get("https://swapi.dev/api/people/1/").then(res =>{
//     return console.log(res);
// })
// .catch(e=>{
//     console.log('Error',e);
// })

const getStarWarsPerson = async (id) =>{
    try{
      const response = await axios.get(`https://swapi.dev/api/people/${id}/`)
     console.log(response.data)  
    }catch(e){
        console.log(e);
    }
};
getStarWarsPerson(5);
getStarWarsPerson(10);


const jokes = document.querySelector('#jokes');

const getDadJokes= async () =>{
    const config = {headers: {Accept: 'application/json'}}
    const res = await axios.get('https://icanhazdadjoke.com/',config)
    const newLi = document.createElement('LI');
    newLi.append(res.data.joke);
    jokes.append(newLi);
}
const btnJoke = document.querySelector('#btn')
btnJoke.addEventListener('click', getDadJokes);