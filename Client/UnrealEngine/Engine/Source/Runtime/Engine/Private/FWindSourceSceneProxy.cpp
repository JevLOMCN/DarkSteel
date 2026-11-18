// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// ApplyWorldOffset @ 1489cb6a0

void __thiscall
FWindSourceSceneProxy::ApplyWorldOffset(FWindSourceSceneProxy *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if (this->bIsPointSource != false) {
    dVar1 = (param_1->field0_0x0)._s_0.Y;
    dVar2 = (this->Position).field0_0x0._s_0.Y;
    (this->Position).field0_0x0._s_0.X =
         (param_1->field0_0x0)._s_0.X + (this->Position).field0_0x0._s_0.X;
    dVar3 = (param_1->field0_0x0)._s_0.Z;
    dVar4 = (this->Position).field0_0x0._s_0.Z;
    (this->Position).field0_0x0._s_0.Y = dVar1 + dVar2;
    (this->Position).field0_0x0._s_0.Z = dVar3 + dVar4;
  }
  return;
}

// GetDirectionalWindParameters @ 1489e80d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FWindSourceSceneProxy::GetDirectionalWindParameters
          (FWindSourceSceneProxy *this,FWindData *param_1,float *param_2)

{
  double dVar1;
  double dVar2;
  uint uStack_2c;
  
  dVar2 = _UNK_150689518;
  dVar1 = ___xmm_00000000000000003ff0000000000000;
  if (this->bIsPointSource != false) {
    *param_2 = 0.0;
    param_1->Speed = 0.0;
    param_1->MinGustAmt = 0.0;
    *(ulonglong *)&param_1->MaxGustAmt = (ulonglong)uStack_2c << 0x20;
    (param_1->Direction).field0_0x0._s_0.X = dVar1;
    (param_1->Direction).field0_0x0._s_0.Y = dVar2;
    (param_1->Direction).field0_0x0._s_0.Z = 0.0;
    return false;
  }
  *param_2 = this->Strength;
  dVar1 = (this->Direction).field0_0x0._s_0.Y;
  (param_1->Direction).field0_0x0._s_0.X = (this->Direction).field0_0x0._s_0.X;
  (param_1->Direction).field0_0x0._s_0.Y = dVar1;
  (param_1->Direction).field0_0x0._s_0.Z = (this->Direction).field0_0x0._s_0.Z;
  param_1->Speed = this->Speed;
  param_1->MinGustAmt = this->MinGustAmt;
  param_1->MaxGustAmt = this->MaxGustAmt;
  return true;
}

// GetWindParameters @ 1489f0d80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FWindSourceSceneProxy::GetWindParameters
          (FWindSourceSceneProxy *this,TVector<double> *param_1,FWindData *param_2,float *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  uint uStack_4c;
  
  dVar6 = _UNK_150689518;
  dVar3 = ___xmm_00000000000000003ff0000000000000;
  if (this->bIsPointSource == false) {
    *param_3 = this->Strength;
    dVar3 = (this->Direction).field0_0x0._s_0.Y;
    (param_2->Direction).field0_0x0._s_0.X = (this->Direction).field0_0x0._s_0.X;
    (param_2->Direction).field0_0x0._s_0.Y = dVar3;
    (param_2->Direction).field0_0x0._s_0.Z = (this->Direction).field0_0x0._s_0.Z;
    param_2->Speed = this->Speed;
    param_2->MinGustAmt = this->MinGustAmt;
    param_2->MaxGustAmt = this->MaxGustAmt;
    return true;
  }
  dVar10 = (this->Position).field0_0x0._s_0.X;
  dVar11 = (param_1->field0_0x0)._s_0.X;
  dVar12 = (param_1->field0_0x0)._s_0.Y;
  dVar9 = dVar10 - dVar11;
  dVar5 = (this->Position).field0_0x0._s_0.Y - dVar12;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  dVar2 = (this->Position).field0_0x0._s_0.Z - dVar1;
  auVar4._0_8_ = dVar2 * dVar2;
  auVar4._8_8_ = 0;
  auVar7._0_8_ = dVar5 * dVar5 + dVar9 * dVar9 + auVar4._0_8_;
  auVar7._8_8_ = 0;
  auVar4 = sqrtpd(auVar4,auVar7);
  fVar13 = (float)auVar4._0_8_;
  if (fVar13 <= this->Radius) {
    dVar1 = dVar1 - (this->Position).field0_0x0._s_0.Z;
    dVar12 = dVar12 - (this->Position).field0_0x0._s_0.Y;
    dVar11 = dVar11 - dVar10;
    dVar10 = __real_3ff0000000000000 / (double)this->Radius;
    dVar6 = dVar10 * dVar11;
    dVar3 = dVar10 * dVar12;
    dVar10 = dVar10 * dVar1;
    dVar3 = __real_3ff0000000000000 - (dVar3 * dVar3 + dVar6 * dVar6 + dVar10 * dVar10);
    if (dVar3 <= 0.0) {
      dVar3 = 0.0;
    }
    fVar8 = (float)dVar3;
    dVar3 = __real_3ff0000000000000 / (double)fVar13;
    (param_2->Direction).field0_0x0._s_0.X = dVar3 * dVar11;
    (param_2->Direction).field0_0x0._s_0.Y = dVar3 * dVar12;
    (param_2->Direction).field0_0x0._s_0.Z = dVar3 * dVar1;
    param_2->Speed = fVar8 * this->Speed;
    param_2->MinGustAmt = fVar8 * this->MinGustAmt;
    param_2->MaxGustAmt = fVar8 * this->MaxGustAmt;
    *param_3 = ((this->Radius - fVar13) / this->Radius) * this->Strength;
    return true;
  }
  *param_3 = 0.0;
  param_2->Speed = 0.0;
  param_2->MinGustAmt = 0.0;
  *(ulonglong *)&param_2->MaxGustAmt = (ulonglong)uStack_4c << 0x20;
  (param_2->Direction).field0_0x0._s_0.X = dVar3;
  (param_2->Direction).field0_0x0._s_0.Y = dVar6;
  (param_2->Direction).field0_0x0._s_0.Z = 0.0;
  return false;
}

