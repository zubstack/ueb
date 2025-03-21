### **Tabla de Requisitos del Sistema de Pago de Pasajes con Código QR**  

| **Código**   | **Nombre del Requisito**       | **Descripción**  |  
|-------------|------------------------------|----------------|  
| RF-001      | Generación de Código QR      | El sistema debe generar un código QR único para cada transacción de pago de pasaje. |  
| RF-002      | Escaneo de Código QR         | El conductor debe poder escanear el código QR del pasajero para validar el pago. |  
| RF-003      | Validación de Pago           | El sistema debe verificar en tiempo real si el código QR escaneado corresponde a un pago válido. |  
| RF-004      | Registro de Transacciones    | Todas las transacciones deben almacenarse en una base de datos para su control y auditoría. |  
| RF-005      | Notificación de Pago         | El pasajero y el conductor deben recibir una confirmación instantánea del pago. |  
| RF-006      | Métodos de Pago Integrados   | El sistema debe permitir pagos a través de billeteras electrónicas y tarjetas bancarias. |  
| RF-007      | Compatibilidad con Móviles   | La aplicación debe ser compatible con dispositivos Android e iOS. |  
| RNF-001     | Seguridad de Datos           | Los datos de los usuarios y las transacciones deben estar protegidos con cifrado SSL/TLS. |  
| RNF-002     | Disponibilidad del Sistema   | El sistema debe estar operativo al menos el 99% del tiempo para evitar interrupciones en el servicio. |  
| RNF-003     | Accesibilidad Offline        | El sistema debe permitir la validación del pago en caso de fallos temporales de conexión a Internet. |  
| RNF-004     | Interfaz Intuitiva           | La aplicación debe contar con una interfaz amigable y fácil de usar para conductores y pasajeros. |  
| RNF-005     | Soporte y Mantenimiento      | Debe existir un sistema de soporte técnico para atender problemas en el uso del sistema. |  

Esta tabla incluye **requisitos funcionales (RF)** y **no funcionales (RNF)**, asegurando que el sistema cumpla con las necesidades identificadas en el análisis de requerimientos.