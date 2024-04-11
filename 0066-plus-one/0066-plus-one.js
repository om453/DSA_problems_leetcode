/**
 * @param {number[]} digits
 * @return {number[]}
 */
var plusOne = function(digits) {
    for(let i=digits.length - 1; i>=0; i--){
      if(digits[i] < 9){         // if digits in array is <9
      digits[i] = digits[i] + 1; // increment it and return 
      return digits;
      }
      else{
        digits[i] = 0;        // make all digits zero
      }

    }
      digits.unshift(1);   // --> [1,0,0,0] - add 1 to the starting 
      return digits;
};