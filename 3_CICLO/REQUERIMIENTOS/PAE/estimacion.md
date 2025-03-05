# Estimación de Software para el Proyecto de Pago de Pasajes con Código QR  

## **1. Cálculo de Puntos de Función (PF)**  

El cálculo de puntos de función se realiza mediante la siguiente fórmula:  

**PF = CT × [ 0.65 + 0.01 × SUM(Fi) ]**  

Donde:  
- **CT**: Cuenta total de puntos de función sin ajuste.  
- **SUM(Fi)**: Sumatoria de los factores de ajuste de complejidad.  

### **1.1 Cálculo de la Cuenta Total (CT)**  

Se determinan los puntos de función para cada componente del sistema:  

| **Parámetro**             | **Cuenta** | **Simple** | **Medio** | **Complejo** | **PF Parcial** |
|--------------------------|-----------|-----------|---------|------------|--------------|
| **Entradas de usuario**   | 3         | 4         | 6       | 9          | 9            |
| **Salidas de usuario**    | 4         | 5         | 7       | 16         | 16           |
| **Peticiones de usuario** | 5         | 4         | 6       | 15         | 15           |
| **Archivos**              | 3         | 10        | 15      | 30         | 30           |
| **Interfaces externas**   | 4         | 7         | 11      | 20         | 20           |
| **Total (CT)**           |           |           |         |            | **90**       |

### **1.2 Factores de Complejidad (Fi)**  

Se evalúa la complejidad del sistema mediante el cuestionario de Pressman, asignando valores de 0 a 5 según su impacto.  

| **Factor** | **Valor** |
|-----------|---------|
| Copias de seguridad y recuperación | 5 |
| Comunicaciones de datos | 4 |
| Procesamiento distribuido | 5 |
| Rendimiento crítico | 4 |
| Ejecución en entorno operativo existente | 2 |
| Entrada de datos interactiva | 2 |
| Transacciones en múltiples pantallas | 3 |
| Actualización interactiva de archivos maestros | 4 |
| Complejidad de entradas, salidas y archivos | 2 |
| Complejidad del procesamiento interno | 2 |
| Código reutilizable | 4 |
| Conversión e instalación | 4 |
| Múltiples instalaciones en diferentes organizaciones | 2 |
| Facilidad de uso y mantenimiento | 4 |
| **Sumatoria de Fi** | **47** |

### **1.3 Cálculo de Puntos de Función Ajustados**  

PF = 90 × [ 0.65 + 0.01 × 47 ]  
PF = 90 × [ 0.65 + 0.47 ]  
PF = 90 × 1.12 = **101 (aproximado)**  

---

## **2. Estimación con el Modelo COCOMO**  

Usamos el **modo orgánico**, aplicando las siguientes ecuaciones:  

- **E = ab × (KPF)^bb**  
- **D = cb × (E)^db**  

Donde:  
- **ab = 2.4**, **bb = 1.05**  
- **cb = 2.5**, **db = 0.38**  
- **KPF = 101 / 1000 = 0.101**  

### **2.1 Cálculo del esfuerzo (E) en personas-mes**  

E = 2.4 × (0.101)^1.05  
E = 2.4 × 0.103  
E = **0.2472 ≈ 1 persona-mes**  

### **2.2 Cálculo del tiempo de desarrollo (D) en meses**  

D = 2.5 × (1)^0.38  
D = 2.5 × 1  
D = **2.5 ≈ 3 meses**  

---

## **3. Estimación con el Modelo PUTNAM**  

Se emplea la ecuación:  

- **Tmin = 8.14 × (LDC / P)^0.43**  
- **E = 180B × t^3**  

Donde:  
- **LDC = 5000** líneas de código (estimado).  
- **P = 10000** (productividad para software comercial).  
- **B = 0.16** para sistemas pequeños.  

### **3.1 Cálculo del tiempo mínimo (Tmin) en meses**  

Tmin = 8.14 × (5000 / 10000)^0.43  
Tmin = 8.14 × (0.5)^0.43  
Tmin = 8.14 × 0.77 = **6.27 ≈ 6 meses**  

### **3.2 Cálculo del esfuerzo en personas-mes**  

E = 180 × 0.16 × (6)^3  
E = 180 × 0.16 × 216  
E = **622 personas-mes**  

---

## **4. Conclusión**  

La estimación de esfuerzo y tiempo para el desarrollo del sistema de pago de pasajes con código QR es la siguiente:  

| **Modelo**   | **Esfuerzo (Personas-Mes)** | **Tiempo (Meses)** |
|-------------|----------------------------|-------------------|
| **COCOMO**  | 1 persona-mes               | 3 meses          |
| **PUTNAM**  | 6 personas-mes              | 6 meses          |

Según **COCOMO**, el desarrollo del sistema tomará **3 meses con 1 persona trabajando a tiempo completo**. Según **PUTNAM**, se requerirán **6 meses con un equipo de 6 personas**.  

Se recomienda utilizar **COCOMO** por su mayor precisión en proyectos de software de tamaño medio, pero considerando los valores de **PUTNAM** para ajustes en la gestión de recursos.