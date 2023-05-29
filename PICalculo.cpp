#include <iostream>

// Estructura para almacenar los costos y tiempos de desplazamiento de cada medio de transporte
struct TransportData {
    double cost;
    double time;
};

// Función para obtener los datos de costos y tiempos de desplazamiento
TransportData getTransportData(const std::string& transportName) {
    TransportData data;
    
    // Aquí puedes implementar la lógica para obtener los datos de cada medio de transporte
    // desde una base de datos o archivos, o utilizar entradas manuales del usuario.
    
    std::cout << "Ingrese el costo anual de " << transportName << ": ";
    std::cin >> data.cost;
    
    std::cout << "Ingrese el tiempo promedio de desplazamiento en minutos de " << transportName << ": ";
    std::cin >> data.time;
    
    return data;
}

int main() {
    // Obtener los datos de costos y tiempos de desplazamiento para cada medio de transporte
    TransportData bikeData = getTransportData("bicicleta");
    TransportData carData = getTransportData("carro");
    TransportData publicTransportData = getTransportData("transporte público");
    TransportData motoData = getTransportData("moto");
    
    // Cálculo del costo por kilómetro recorrido
    double bikeCostPerKm = bikeData.cost / (bikeData.time / 60); // tiempo en horas
    double carCostPerKm = carData.cost / (carData.time / 60);
    double publicTransportCostPerKm = publicTransportData.cost / (publicTransportData.time / 60);
    double motoCostPerKm = motoData.cost / (motoData.time / 60);
    
    // Mostrar los resultados
    std::cout << "Costo por kilómetro recorrido:\n";
    std::cout << "Bicicleta: " << bikeCostPerKm << " pesos\n";
    std::cout << "Carro: " << carCostPerKm << " pesos\n";
    std::cout << "Transporte público: " << publicTransportCostPerKm << " pesos\n";
    std::cout << "Moto: " << motoCostPerKm << " pesos\n";
    
    return 0;
}
