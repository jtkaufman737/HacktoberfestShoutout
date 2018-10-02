let name = 'Zitro'
let enjoy = ['JavaScript',
'Ruby-On-Rail', 'HTML', 'CSS', 'Machine Learning', 'Computer Vision']

function cheers(name, arr){
  console.log(`I'm ${name} and I enjoy ${arr.join(', ')} and a bunch of other fun stuff.`)
}

cheers(name, enjoy)
