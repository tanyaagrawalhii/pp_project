#include<bits/stdc++.h>
#include<vector>
#include<cmath>
using namespace std;

int main(){
    
    cout<<"==================MATRICES===================="<<endl;
    cout<<"1. Addition of matices"<<endl;
    cout<<"2. Multiplication of matices"<<endl;
    cout<<"3. Transpose of matrix"<<endl;
    cout<<"4. Inverse of matrix"<<endl;
    cout<<"5. To find rank and nullity of matrix"<<endl;
    cout<<"6. Solution of System of Linear Equation by Matrix Method"<<endl;
    cout<<"7. Exit"<<endl;
    cout<<"ENTER YOUR CHOICE"<<endl;
    int choice;
    cin>>choice;
    if(choice==1){
        cout<<"===========Addition of matices==========="<<endl;
        int rows, cols;
        cout << "Enter the number of rows for the matrices: ";
        cin >> rows;
        cout << "Enter the number of columns for the matrices: ";
        cin >> cols;
        cout << "Enter the elements for matrix 1:" << endl;
        int matrix1[rows][cols];
        int matrix2[rows][cols];
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> matrix1[i][j];
            }
        }

        cout << "Enter the elements for matrix 2:" << endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> matrix2[i][j];
            }
        }
        cout<<"Matrix before addition:  "<<endl;
        cout << "matrix 1:" << endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << matrix1[i][j] << " ";
            }
            cout << endl;
        }

        cout << "matrix 2:" << endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << matrix2[i][j] << " ";
            }
            cout << endl;
        }
        int result[rows][cols];
        cout<<"\nResult:  "<<endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }

        // Display the result matrix
    
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
    }
    else if(choice==2){
        cout<<"===========Multiplication of matices==========="<<endl;
        int rows1, cols1, rows2, cols2;
        cout << "Enter the number of rows for the matrix 1: ";
        cin >> rows1;
        cout << "Enter the number of columns for the matrix 1: ";
        cin >> cols1;
        cout << "Enter the number of rows for the matrix 2: ";
        cin >> rows2;
        cout << "Enter the number of columns for the matrix 2: ";
        cin >> cols2;
        if (cols1 != rows2) {
        cout << "Matrix multiplication is not possible. The number of columns in the first matrix must match the number of rows in the second matrix." << endl;
        return 1;
        }


        cout << "Enter the elements for matrix 1:" << endl;
        int matrix1[rows1][cols1];
        int matrix2[rows2][cols2];
        
        
        for (int i = 0; i < rows1; i++) {
            for (int j = 0; j < cols1; j++) {
                cin >> matrix1[i][j];
            }
        }

        cout << "Enter the elements for matrix 2:" << endl;
        for (int i = 0; i < rows2; i++) {
            for (int j = 0; j < cols2; j++) {
                cin >> matrix2[i][j];
            }
        }
        cout<<"Matrix before Multiplication:  "<<endl;
        cout << "matrix 1:" << endl;
        for (int i = 0; i < rows1; i++) {
            for (int j = 0; j < cols1; j++) {
                cout << matrix1[i][j] << " ";
            }
            cout << endl;
        }

        cout << "matrix 2:" << endl;
        for (int i = 0; i < rows2; i++) {
            for (int j = 0; j < cols2; j++) {
                cout << matrix2[i][j] << " ";
            }
            cout << endl;
        }
        int result[rows1][cols2];
        for (int i = 0; i < rows1; i++) {
            for (int j = 0; j < cols2; j++) {
                result[i][j] = 0;
                for (int k = 0; k < cols1; k++) {
                    result[i][j] += matrix1[i][k] * matrix2[k][j];
                }
            }
        }

        // Display the result matrix
        cout << "Result of matrix multiplication:" << endl;
        for (int i = 0; i < rows1; i++) {
            for (int j = 0; j < cols2; j++) {
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
    }
    else if(choice ==3){
        cout<<"===========Tranpose of matix==========="<<endl;
        int rows, cols;
        cout << "Enter the number of rows for the matrices: ";
        cin >> rows;
        cout << "Enter the number of columns for the matrices: ";
        cin >> cols;
        cout << "Enter the elements for matrix " << endl;
        int matrix[rows][cols];
        int transpose[rows][cols];
        
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> matrix[i][j];
            }
        }
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                transpose[j][i] = matrix[i][j];
            }
        }

        cout << "Transpose of matrix" << endl;
        for (int i = 0; i < cols; i++) {
            for (int j = 0; j < rows; j++) {
                cout << transpose[i][j] << " ";
            }
            cout << endl;
        }
        
        
    }
    else if(choice ==4){
        cout<<"===========Inverse of matix==========="<<endl;
        int rows, cols;
        cout << "Enter the number of rows for the matrices: ";
        cin >> rows;
        cout << "Enter the number of columns for the matrices: ";
        cin >> cols;
        cout << "Enter the elements for matrix " << endl;
        int matrix[rows][cols];
        
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> matrix[i][j];
            }
        }
     
       
        float determinant = 0;
        int i,j;
        for(i = 0; i < 3; i++)
            determinant = determinant + (matrix[0][i] * (matrix[1][(i+1)%3] * matrix[2][(i+2)%3] - matrix[1][(i+2)%3] * matrix[2][(i+1)%3]));
            cout<<"\n\ndeterminant: "<<determinant;
            cout<<"\n\nInverse of matrix is: \n";
            for(i = 0; i < 3; i++){
                for(j = 0; j < 3; j++)
                    cout<<((matrix[(j+1)%3][(i+1)%3] * matrix[(j+2)%3][(i+2)%3]) - (matrix[(j+1)%3][(i+2)%3] * matrix[(j+2)%3][(i+1)%3]))/ determinant<<"\t";
                    cout<<"\n";
            }
        
       
    }

    else if(choice==5){
        cout<<"================Rank and Nullity of matix==============="<<endl;
        int rows, cols;
        cout << "Enter the number of rows for the matrices: ";
        cin >> rows;
        cout << "Enter the number of columns for the matrices: ";
        cin >> cols;
        cout << "Enter the elements for matrix " << endl;
        int matrix[rows][cols];
        
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> matrix[i][j];
            }
        }
        int i,j,k,v,p,q,R,N,z;
        if(matrix[0][0]==0){
            for(j=0;j<cols;j++){
                z=-1;
                for(i=1;i<rows;i++){
                    if(matrix[i][j]!=0){
                        z=i;
                        break;
                    }
                }
                if(z!=-1){
                    for( v=0;v<cols;v++){
                        int t=matrix[0][v];
                        matrix[0][v]=matrix[i][v];
                        matrix[i][v]=t;
                    }
                    break; 
                }
            }
        }
        for(k=0;k<rows-1;k++){
            for(i=k+1;i<rows;i++){
                p=matrix[k][k];
                q=matrix[i][k];
                for(j=0;j<cols;j++){
                    matrix[i][j]=p*matrix[i][j] - q*matrix[k][j];
                }
            }
        }
        z=0;
        for(i=0;i<rows;i++){
            int c=0;
            for(j=0;j<cols;j++){
                if(matrix[i][j]==0){
                    c++;
                }
            }
            if(c==cols){
                z++;
            }
        }
        R=rows-z;
        N=cols-R;
        cout<<"Rank = "<<R<<endl;
        cout<<"Nullity = "<<N<<endl;
        
    }
    else if(choice==6){
        cout<<"============Solution of System of Linear Equation by Gauss Method=============="<<endl;
        int n; // Number of equations and variables

    cout << "Enter the number of equations/variables: ";
    cin >> n;

    vector<vector<double>> coefficients(n, vector<double>(n + 1));

    cout << "Enter the coefficients of the equations (matrix A) and the right-hand side values:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= n; j++) {
            cin >> coefficients[i][j];
        }
    }

    // Gauss-Jordan Elimination
    for (int i = 0; i < n; i++) {
        if (coefficients[i][i] == 0.0) {
            cout << "Pivot element is zero. Gauss-Jordan elimination cannot proceed." << endl;
            return 1;
        }

        for (int j = 0; j < n; j++) {
            if (i != j) {
                double ratio = coefficients[j][i] / coefficients[i][i];
                for (int k = 0; k <= n; k++) {
                    coefficients[j][k] -= ratio * coefficients[i][k];
                }
            }
        }
    }

    // Normalize the rows to make the diagonal elements equal to 1
    for (int i = 0; i < n; i++) {
        double divisor = coefficients[i][i];
        for (int j = 0; j <= n; j++) {
            coefficients[i][j] /= divisor;
        }
    }

    // Display the solution
    cout << "Solution for the variables:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "x" << i + 1 << " = " << coefficients[i][n] << endl;
    }

    }
    else if(choice==7){
       cout<<"=============EXIT============"<<endl;
    }
    else{
        cout<<"Invalid choice. Please enter a valid option."<<endl;
    }
    cout<<"==========THANK YOU==========="<<endl;


}
