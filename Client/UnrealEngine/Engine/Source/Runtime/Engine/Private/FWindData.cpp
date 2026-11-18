// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// AddWeighted @ 1489ca810

void __thiscall FWindData::AddWeighted(FWindData *this,FWindData *param_1,float param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  this->Speed = param_2 * param_1->Speed + this->Speed;
  this->MinGustAmt = param_2 * param_1->MinGustAmt + this->MinGustAmt;
  dVar5 = (double)param_2;
  this->MaxGustAmt = param_2 * param_1->MaxGustAmt + this->MaxGustAmt;
  dVar1 = (param_1->Direction).field0_0x0._s_0.Z;
  dVar2 = (param_1->Direction).field0_0x0._s_0.X;
  dVar3 = (this->Direction).field0_0x0._s_0.Z;
  dVar4 = (this->Direction).field0_0x0._s_0.X;
  (this->Direction).field0_0x0._s_0.Y =
       dVar5 * (param_1->Direction).field0_0x0._s_0.Y + (this->Direction).field0_0x0._s_0.Y;
  (this->Direction).field0_0x0._s_0.Z = dVar5 * dVar1 + dVar3;
  (this->Direction).field0_0x0._s_0.X = dVar5 * dVar2 + dVar4;
  return;
}

// NormalizeByTotalWeight @ 1489fd800

void __thiscall FWindData::NormalizeByTotalWeight(FWindData *this,float param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  TVector<double> *this_00;
  float fVar5;
  double dVar6;
  
  if (0.0 < param_1) {
    fVar5 = __real_3f800000 / param_1;
    this->Speed = fVar5 * this->Speed;
    this->MaxGustAmt = fVar5 * this->MaxGustAmt;
    dVar6 = __real_3ff0000000000000;
    this->MinGustAmt = fVar5 * this->MinGustAmt;
    dVar4 = __real_3e45798ee0000000;
    this_00 = &this->Direction;
    dVar6 = dVar6 / (double)param_1;
    dVar3 = (this->Direction).field0_0x0._s_0.Y * dVar6;
    dVar1 = (this->Direction).field0_0x0._s_0.Z;
    auVar2._8_4_ = SUB84(dVar3,0);
    auVar2._0_8_ = (this_00->field0_0x0)._s_0.X * dVar6;
    auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    *(undefined1 (*) [16])&this_00->field0_0x0 = auVar2;
    (this->Direction).field0_0x0._s_0.Z = dVar6 * dVar1;
    UE::Math::TVector<double>::Normalize(this_00,dVar4);
    return;
  }
  return;
}

// PrepareForAccumulate @ 148a02260

void __thiscall FWindData::PrepareForAccumulate(FWindData *this)

{
  this->Speed = 0.0;
  this->MinGustAmt = 0.0;
  *(undefined8 *)&this->MaxGustAmt = 0;
  (this->Direction).field0_0x0._s_0.X = 0.0;
  (this->Direction).field0_0x0._s_0.Y = 0.0;
  (this->Direction).field0_0x0._s_0.Z = 0.0;
  return;
}

