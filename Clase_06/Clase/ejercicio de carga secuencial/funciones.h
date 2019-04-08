
/**
 * \brief Carga un vector de enteros
 * \param Vector a cargar
 * \param Tamaño del vector
 *
 */
void cargaSecuencial (int vec[], int tam);


/**
 * \brief Muestra valores dentro del vector
 * \param Vector a mostrar
 * \param Tamaño del vector
 *
 */
void mostrarvector (int vec [], int tam);


/**
 * \brief Busca el numero maximo en el vector
 * \param Vector a buscar
 * \param Tamaño del vector
 * \return El numero maximo encontrado
 *
 */
int buscarMax (int vec [], int tam);


/**
 * \brief Busca el numero mínimo en el vector
 * \param Vector a buscar
 * \param Tamaño del vector
 * \return El numero mínimo encontrado
 *
 */
 int buscarMin (int vec [], int tam);


/**
 * \brief Busca el numero solicitado en el vector
 * \param Vector a buscar
 * \param Tamaño del vector
 * \param Numero a buscar
 * \return -1 o la posicion encontrada
 *
 */
int buscarInt (int vec [], int tam, int indice);
