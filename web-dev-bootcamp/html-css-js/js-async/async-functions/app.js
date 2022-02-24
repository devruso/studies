// async function hello(){

// }

// const sing = async () =>{
//     throw new Error('oh no!')
//     return 'lalalla'
// }
// sing().then((data)=>{
//     console.log('promise resolved with', data)
// })
// .catch(err =>{
//     console.log('foi nao fi');
//     console.log(err)
// })


const login = async (username, password)=> {
    if(!username|| !password) throw 'Faltando algo/ Something`s missing'
    if(password === 'margozinhopft') return 'Welcome!'
    throw 'Invalid password'
}   

login('milsinho top','margozinhopft')
.then(msg =>{
    console.log('Logged in :)')
})
.catch(err =>{
    console.log('Erro, algo faltando')
})