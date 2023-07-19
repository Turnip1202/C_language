const person = {
  name: "turnip",
  age: 19,
  gender: '男',
  // toJSON() {
  //   return "警告"
  // }
}
// let obj = JSON.stringify(person, (key, val) => {
//   if (key == "gender") {
//     return undefined;
//   }
//   return val;
// })
let obj = JSON.stringify(person, (k, v) => v)
console.log(obj)

function f(a) {
  if (1) {
    a();
  }
}
