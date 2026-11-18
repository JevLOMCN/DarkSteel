// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// FQueryFastData @ 14373d3f0

FQueryFastData * __thiscall
Chaos::FQueryFastData::FQueryFastData
          (FQueryFastData *this,TVector<double,3> *param_1,double param_2)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  uVar5 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar4 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar3 = __real_3e45798ee0000000;
  dVar2 = __real_3ff0000000000000;
  this->Dir = param_1;
  dVar7 = *(double *)&param_1->field_0x10;
  if (dVar3 <= (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) & uVar5,SUB84(dVar7,0) & uVar4)) {
    dVar7 = dVar2 / dVar7;
  }
  else {
    dVar7 = 0.0;
  }
  if (dVar3 <= (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_1->field_0x8 >> 0x20) &
                                uVar5,(uint)*(undefined8 *)&param_1->field_0x8 & uVar4)) {
    dVar8 = dVar2 / *(double *)&param_1->field_0x8;
  }
  else {
    dVar8 = 0.0;
  }
  if (dVar3 <= (double)CONCAT44((uint)((ulonglong)*(undefined8 *)param_1 >> 0x20) & uVar5,
                                (uint)*(undefined8 *)param_1 & uVar4)) {
    dVar6 = dVar2 / *(double *)param_1;
  }
  else {
    dVar6 = 0.0;
  }
  *(double *)&this->InvDir = dVar6;
  *(double *)&(this->InvDir).field_0x8 = dVar8;
  *(double *)&(this->InvDir).field_0x10 = dVar7;
  this->bParallel[0] =
       (double)CONCAT44((uint)((ulonglong)*(undefined8 *)param_1 >> 0x20) & uVar5,
                        (uint)*(undefined8 *)param_1 & uVar4) < dVar3;
  this->bParallel[1] =
       (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_1->field_0x8 >> 0x20) & uVar5,
                        (uint)*(undefined8 *)&param_1->field_0x8 & uVar4) < dVar3;
  uVar1 = *(undefined8 *)&param_1->field_0x10;
  this->CurrentLength = param_2;
  this->bParallel[2] =
       (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) & uVar5,(uint)uVar1 & uVar4) < dVar3;
  if (param_2 != 0.0) {
    this->InvCurrentLength = dVar2 / param_2;
  }
  return this;
}

