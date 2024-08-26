#include "idlib/math/Vector.h"
#include "idlib/math/Matrix.h"
#include "idlib/Str.h"
#include <iostream>

int main() {
    // Example: Create and manipulate vectors
    idVec3 v1(1.0f, 2.0f, 3.0f);
    idVec3 v2(4.0f, 5.0f, 6.0f);

    idVec3 v3 = v1 + v2;  // Vector addition
    idVec3 v4 = v1.Cross(v2);  // Cross product
    float dotProduct = v1 * v2;  // Dot product

    std::cout << "v1 + v2 = (" << v3.x << ", " << v3.y << ", " << v3.z << ")\n";
    std::cout << "v1 cross v2 = (" << v4.x << ", " << v4.y << ", " << v4.z << ")\n";
    std::cout << "v1 dot v2 = " << dotProduct << "\n";

    // Example: Create and manipulate matrices
    idMat3 mat1;
    mat1.Identity();  // Initialize to identity matrix

    idMat3 mat2;
    mat2[0][0] = 2.0f; mat2[0][1] = 0.0f; mat2[0][2] = 0.0f;
    mat2[1][0] = 0.0f; mat2[1][1] = 2.0f; mat2[1][2] = 0.0f;
    mat2[2][0] = 0.0f; mat2[2][1] = 0.0f; mat2[2][2] = 2.0f;

    idMat3 resultMat = mat1 * mat2;  // Matrix multiplication

    std::cout << "Resultant Matrix:\n";
    for (int i = 0; i < 3; ++i) {
        std::cout << resultMat[i][0] << " " << resultMat[i][1] << " " << resultMat[i][2] << "\n";
    }

    // Example: String handling with idStr
    idStr str1("Hello ");
    idStr str2("World!");
    idStr str3 = str1 + str2;  // String concatenation

    std::cout << "Concatenated string: " << str3.c_str() << "\n";

    // Shutdown idLib
    idLib::common->Shutdown();

    return 0;
}
