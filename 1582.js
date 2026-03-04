/**
 * @param {number[][]} mat
 * @return {number}
 */
var numSpecial = function(mat) {
    let rows = mat.length;
    let cols = mat[0].length;
    let count = 0;

    for(let i = 0; i < rows; i++){
        for(let j = 0; j < cols; j++){

            if(mat[i][j] === 1){

                let rowCount = 0;
                let colCount = 0;

        
                for(let k = 0; k < cols; k++){
                    if(mat[i][k] === 1){
                        rowCount++;
                    }
                }

                
                for(let k = 0; k < rows; k++){
                    if(mat[k][j] === 1){
                        colCount++;
                    }
                }

                if(rowCount === 1 && colCount === 1){
                    count++;
                }
            }
        }
    }

    return count;
};

console.log(numSpecial([[1,0,0],[0,0,1],[1,0,0]])); 