unsigned long PrintTracker;
unsigned int MilliPrintTime = 1; // Time between prints in milliseconds

void printValues() {
  if(millis() >= PrintTracker && printing) {
    PrintTracker = (millis() + MilliPrintTime);
    PitchRoll();
    Theta();
    Serial.println();
  }
}

void CompareGyroAccelPitchRoll() {
  Serial.print(" thetaX2: "); Serial.print(thetaX2);
  Serial.print(" gx: "); Serial.print(gx);
  Serial.print(" thetaY2: "); Serial.print(thetaY2);
  Serial.print(" gy: "); Serial.print(gy);
}

void CompareRoRm() {
  Serial.print(" xRo:"); Serial.print(xRo);
  Serial.print(" yRo:"); Serial.print(yRo);
  Serial.print(" zRo:"); Serial.print(zRo);
  Serial.print(" xRm:"); Serial.print(xRm);
  Serial.print(" yRm:"); Serial.print(yRm);
  Serial.print(" zRm:"); Serial.print(zRm);
}

void IntegratedGyroValues() {
  Serial.print(" GyroPitch:"); Serial.print(gy);
  Serial.print(" GyroRoll:"); Serial.print(gx);
  Serial.print(" GyroYaw:"); Serial.print(gz);
}

void MilliLoopTime() {
  Serial.print(" LoopTime:"); Serial.print(LoopTime);
}

void VolatileControls() {
  Serial.print(" RightHorizontalVolatile:"); Serial.print(RightHorizontalVolatile);
  Serial.print(" LeftVerticalVolatile:"); Serial.print(LeftVerticalVolatile);
  Serial.print(" RightVerticalVolatile:"); Serial.print(RightVerticalVolatile);
  Serial.print(" LeftHorizontalVolatile:"); Serial.print(LeftHorizontalVolatile);

}

void Controls() {
  Serial.print(" RightHorizontal:"); Serial.print(RightHorizontal());
  Serial.print(" LeftVertical:"); Serial.print(LeftVertical());
  Serial.print(" RightVertical:"); Serial.print(RightVertical());
  Serial.print(" LeftHorizontal:"); Serial.print(LeftHorizontal());

}

void ZeroControls() {
  Serial.print(" RightHorizontalZero:"); Serial.print(RightHorizontalZero);
  Serial.print(" LeftVerticalZero:"); Serial.print(LeftVerticalZero);
  Serial.print(" RightVerticalZero:"); Serial.print(RightVerticalZero);
  Serial.print(" LeftHorizontalZero:"); Serial.print(LeftHorizontalZero);
}

void LevelAccelTilts() {
  Serial.print(" LevelPitch:"); Serial.print(LevelPitch);
  Serial.print(" LevelRoll:"); Serial.print(LevelRoll);
}

//void PIDSerovOutputs() {
//  Serial.print(" NwT:"); Serial.print(NwT);
//  Serial.print(" SwT:"); Serial.print(SwT);
//  Serial.print(" SeT:"); Serial.print(SeT);
//  Serial.print(" NeT:"); Serial.print(NeT);
//}

void DPS() {
  Serial.print(" xdps:"); Serial.print(xdps);
  Serial.print(" ydps:"); Serial.print(ydps);
  Serial.print(" zdps:"); Serial.print(zdps);
  //Serial.print(" R:"); Serial.print(Reduced);
}

void PitchRoll() {
  Serial.print(" pitch:"); Serial.print(pitch);
  Serial.print(" roll:"); Serial.print(roll);
}

void fPitchRoll() {
  Serial.print(" fpitch:"); Serial.print(fpitch);
  Serial.print(" froll:"); Serial.print(froll);
}

void MATLABGraph() {
  Serial.print("       "); Serial.print(thetaX);
  Serial.print("       "); Serial.print(0);
  Serial.print("       "); Serial.print(0);
  Serial.print("       "); Serial.print(millis());
}

  
void Accel() {
  Serial.print(" ax:"); Serial.print(ax);
  Serial.print(" ay:"); Serial.print(ay);
  Serial.print(" az:"); Serial.print(az);
}

void AccelandGyro() {
  Serial.print("  gx:"); Serial.print(gx);
  Serial.print("  thetaX:"); Serial.print(thetaX);
  Serial.print("  gy:"); Serial.print(gy);
  Serial.print("  thetaY:"); Serial.print(thetaY);
  Serial.print("  gz:"); Serial.print(gz);
  Serial.print("  thetaZ:"); Serial.print(thetaZ);
  Serial.print(" pitch:"); Serial.print(pitch);
  Serial.print("     roll:"); Serial.print(roll);
}

void Theta() {
  Serial.print(" thetaX:"); Serial.print(thetaX);
  Serial.print(" thetaY:"); Serial.print(thetaY);
//  Serial.print(" thetaZ:"); Serial.print(thetaZ);
//  Serial.print(" thetaX2:"); Serial.print(thetaX2);
//  Serial.print(" thetaY2:"); Serial.print(thetaY2);
//  Serial.print(" thetaZ2:"); Serial.print(thetaZ2);
}

//void pidvalues() {
//  Serial.print(" pitch:"); Serial.print(pitch);
//  Serial.print("     NSComplement:"); Serial.print(NSComplement);
//  Serial.print("     roll:"); Serial.print(roll);
//  Serial.print("     WEComplement:"); Serial.print(WEComplement);
//  Serial.print("     North Motor:"); Serial.print((HoverThrottle - NSComplement + (MaxWave - HoverThrottle) / 2));
//  Serial.print("     South Motor:"); Serial.print((HoverThrottle + NSComplement + (MaxWave - HoverThrottle) / 2));
//}
