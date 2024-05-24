// a namespace  holding a class and all member variables
namespace shapes {
    class Square;
    class Triangle;
    class Circle;

    class Area {
    public:
        static double calculateSquareArea(const Square& square);
        static double calculateTriangleArea(const Triangle& triangle);
        static double calculateCircleArea(const Circle& circle);
    };
}