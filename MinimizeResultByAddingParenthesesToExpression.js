/**
 * @param {string} expression
 * @return {string}
 */
var minimizeResult = function(expression) {
  let arr = expression.split("+");
  let value = 999999999
  let current;


  for (let i = 0; i < arr[0].length; i++) {
        let left1 = arr[0].slice(0, i);
        let left2 = arr[0].slice(i)
        for (let j = arr[1].length; j >= 0; j--) {
            let right1 = arr[1].slice(0, j)
            let right2 = arr[1].slice(j);
            const result = parseInt(left1 !== '' ? left1 : 1) * 
                        (parseInt(left2 !== '' ? left2 : 1) + 
                        parseInt(right1 !== '' ? right1 : 1)) * 
                        parseInt(right2 !== '' ? right2 : 1);
            if (result < value) {
                value = result
                current = left1 + '(' + left2 + '+' + right1 + ')' + right2
            }

        }
  }

  return current
};
