from cmath import sqrt


class Quadrangle:
    """Quadrangle"""

    def __init__(self):
        """Constructer"""
        self.x1 = 0
        self.y1 = 0
        self.x2 = 0
        self.y2 = 0
        self.x3 = 0
        self.y3 = 0
        self.x4 = 0
        self.y4 = 0

    def set_coordinates(self, x1, y1, x2, y2, x3, y3, x4, y4):
        """Coordinate setter"""
        self.x1 = x1
        self.y1 = y1
        self.x2 = x2
        self.y2 = y2
        self.x3 = x3
        self.y3 = y3
        self.x4 = x4
        self.y4 = y4

    def get_perimeter(self):
        """Quadrangle getter"""
        return calculate_length(self.x1, self.y1, self.x2, self.y2) + calculate_length(self.x2, self.y2, self.x3, self.y3) + calculate_length(self.x3, self.y3, self.x4, self.y4) + calculate_length(self.x4, self.y4, self.x1, self.y1)


def calculate_length(x1, y1, x2, y2):
    return sqrt((x2 - x1)**2 + (y2 - y1)**2)
