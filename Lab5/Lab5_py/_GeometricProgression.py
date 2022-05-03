from _TSeries import TSeries


class GeometricProgression(TSeries):
    def calculate_n(self, index):
        result = self.first * self.parameter**(index-1)
        return result

    def calculate_sum(self, index):
        result = (self.first*(self.parameter**index-1))/(self.parameter-1)
        return int(result)
