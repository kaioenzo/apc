// @param tA Horário em segundos, quando passou em radar A.
// @param tB Horaŕio em segundos, quando passou em radar B.
// @param distancia Distância em KM entre o radar A e o radar B.
// @return Velocidade média em Km/H que o motorista fez do radar A ao radar B.
double calculaVelocidadeMedia(int tA, int tB, double distancia) {

  // 1. Converter segundos para minutos.
  double radar_A = (double) tA / 3600;
  double radar_B = (double) tB / 3600;

  // 2. Achara a velocidade.
  double velocidade = distancia / (radar_B - radar_A);

  return velocidade;

}

// @param tA Horário em segundos, quando passou em radar A.
// @param tB Horaŕio em segundos, quando passou em radar B.
// @param distancia Distância em KM entre o radar A e o radar B.
// @param velocidadeMaxima A velocidade media não pode passar.
// @return 1 se for multado, 0 se não for multado
int levouMulta(int tA, int tB, double distancia, double velocidadeMaxima) {

  if (calculaVelocidadeMedia(tA, tB, distancia) > velocidadeMaxima) return 1;
  else return 0;

}
