var heightChecker = function(heights) {
    let temp = [].concat(heights)
    let counter = 0
    
    
    temp.sort(function(a, b) {return a - b})
    for (let i = 0; i < heights.length; i++) {
        if (temp[i] != heights[i])
            counter += 1;
    }
    return counter;
};
