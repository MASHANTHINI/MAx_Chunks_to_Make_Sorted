/**
 * @param {number[]} arr
 * @return {number}
 */
var maxChunksToSorted = function(arr) {
   let count=0;
    let max=0;
    for(let a=0;a<arr.length;a++)
    {
        max=Math.max(max,arr[a]);
        if(max==a)
        count++;
    }
    return count;
};
