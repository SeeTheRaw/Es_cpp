#include "SystemMonitor.hpp"

int main()
{
    // Creazione degli oggetti RAMUsage e CPUUsage
    RAMUsage ramUsage(600);
    CPUUsage cpuUsage(70);

    // Creazione dell'oggetto SystemMonitor che monitora RAMUsage e CPUUsage
    SystemMonitor systemMonitor(&cpuUsage, &ramUsage);

    // Aggiunta dell'osservatore (SystemMonitor) agli oggetti osservati
    ramUsage.AddObserver(&systemMonitor);
    cpuUsage.AddObserver(&systemMonitor);

    // Simulazione di cambiamenti di stato
    ramUsage.setRamFree(400);
    cpuUsage.setCPUUsage(90);

    // Rimozione dell'osservatore dagli oggetti osservati
    ramUsage.RemoveObserver(&systemMonitor);
    cpuUsage.RemoveObserver(&systemMonitor);

    return 0;
}