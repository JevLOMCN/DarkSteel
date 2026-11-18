// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCore
// Functions: 1

// SafeNormalize @ 14362f050

double __thiscall Chaos::TVector<double,3>::SafeNormalize(TVector<double,3> *this,double param_1)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  undefined1 auVar5 [16];
  
  dVar1 = *(double *)this;
  dVar2 = *(double *)&this->field_0x10;
  auVar5._0_8_ = dVar1 * dVar1;
  auVar5._8_8_ = 0;
  dVar4 = *(double *)&this->field_0x8 * *(double *)&this->field_0x8 + auVar5._0_8_ + dVar2 * dVar2;
  if (dVar4 < param_1) {
    *(undefined8 *)this = 0x3ff0000000000000;
    *(undefined8 *)&this->field_0x8 = 0;
    *(undefined8 *)&this->field_0x10 = 0;
    return 0.0;
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = dVar4;
  auVar5 = sqrtpd(auVar5,auVar3);
  dVar4 = __real_3ff0000000000000 / auVar5._0_8_;
  *(double *)&this->field_0x8 = dVar4 * *(double *)&this->field_0x8;
  *(double *)this = dVar4 * dVar1;
  *(double *)&this->field_0x10 = dVar4 * dVar2;
  return auVar5._0_8_;
}

