// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 12

// FRemoveOnBreakData @ 143f8b8f0

FRemoveOnBreakData * __thiscall
GeometryCollection::Facades::FRemoveOnBreakData::FRemoveOnBreakData
          (FRemoveOnBreakData *this,TVector4<float> *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(this->PackedData).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  *(undefined8 *)((longlong)&(this->PackedData).field0_0x0 + 8) = uVar1;
  return this;
}

// FRemoveOnBreakData @ 143f8b900

FRemoveOnBreakData * __thiscall
GeometryCollection::Facades::FRemoveOnBreakData::FRemoveOnBreakData(FRemoveOnBreakData *this)

{
  (this->PackedData).field0_0x0._s_0 = (TVector4<float>_u_0_s_0)DisabledPackedData.field0_0x0;
  return this;
}

// FRemoveOnBreakData @ 143f8b920

FRemoveOnBreakData * __thiscall
GeometryCollection::Facades::FRemoveOnBreakData::FRemoveOnBreakData
          (FRemoveOnBreakData *this,bool param_1,TVector2<float> *param_2,bool param_3,
          TVector2<float> *param_4)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  uVar1 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  *(undefined8 *)&(this->PackedData).field0_0x0 = 0;
  (this->PackedData).field0_0x0._s_0.Z = 0.0;
  (this->PackedData).field0_0x0._s_0.W = 1.0;
  fVar3 = __real_34000000;
  fVar4 = (float)((uint)(param_2->field0_0x0)._s_0.X & uVar1);
  fVar5 = (float)((uint)(param_2->field0_0x0)._s_0.Y & uVar1);
  fVar6 = fVar4;
  if (fVar5 <= fVar4) {
    fVar6 = fVar5;
  }
  if (fVar4 <= fVar5) {
    fVar4 = fVar5;
  }
  (this->PackedData).field0_0x0._s_0.Y = fVar4;
  (this->PackedData).field0_0x0._s_0.X = fVar6;
  if (fVar6 <= fVar3) {
    (this->PackedData).field0_0x0._s_0.X = 0.0;
    fVar6 = 0.0;
  }
  fVar4 = (float)((uint)(param_4->field0_0x0)._s_0.X & uVar1);
  fVar7 = (float)((uint)(param_4->field0_0x0)._s_0.Y & uVar1);
  fVar5 = fVar4;
  if (fVar7 <= fVar4) {
    fVar5 = fVar7;
  }
  if (fVar4 <= fVar7) {
    fVar4 = fVar7;
  }
  (this->PackedData).field0_0x0._s_0.W = fVar4;
  fVar4 = __real_b4000000;
  uVar2 = __xmm_80000000800000008000000080000000;
  if (fVar5 <= fVar3) {
    fVar5 = 0.0;
  }
  fVar6 = (float)((uint)fVar6 & uVar1);
  (this->PackedData).field0_0x0._s_0.X = fVar6;
  if (param_1) {
    if (fVar6 <= fVar3) {
      (this->PackedData).field0_0x0._s_0.X = 0.0;
    }
  }
  else if (fVar6 == 0.0) {
    (this->PackedData).field0_0x0._s_0.X = fVar4;
  }
  else {
    (this->PackedData).field0_0x0._s_0.X = (float)((uint)fVar6 ^ uVar2);
  }
  fVar5 = (float)((uint)fVar5 & uVar1);
  (this->PackedData).field0_0x0._s_0.Z = fVar5;
  if (param_3) {
    if (fVar5 != 0.0) {
      fVar4 = (float)((uint)fVar5 ^ uVar2);
    }
    (this->PackedData).field0_0x0._s_0.Z = fVar4;
    return this;
  }
  if (fVar5 <= fVar3) {
    (this->PackedData).field0_0x0._s_0.Z = 0.0;
  }
  return this;
}

// GetBreakTimer @ 143fafc10

TVector2<float> __thiscall
GeometryCollection::Facades::FRemoveOnBreakData::GetBreakTimer(FRemoveOnBreakData *this)

{
  TVector2<float>_u_0 in_RDX;
  
  *(uint *)in_RDX =
       (uint)(this->PackedData).field0_0x0._s_0.X & __xmm_7fffffff7fffffff7fffffff7fffffff;
  *(uint *)((longlong)in_RDX + 4) =
       (uint)(this->PackedData).field0_0x0._s_0.Y & __xmm_7fffffff7fffffff7fffffff7fffffff;
  return (TVector2<float>)in_RDX;
}

// GetClusterCrumbling @ 143faff30

bool __thiscall
GeometryCollection::Facades::FRemoveOnBreakData::GetClusterCrumbling(FRemoveOnBreakData *this)

{
  float *pfVar1;
  
  if ((0.0 < (this->PackedData).field0_0x0._s_0.X || (this->PackedData).field0_0x0._s_0.X == 0.0) &&
     (pfVar1 = &(this->PackedData).field0_0x0._s_0.Z, *pfVar1 <= 0.0 && *pfVar1 != 0.0)) {
    return true;
  }
  return false;
}

// GetPackedData @ 143fb1950

TVector4<float> * __thiscall
GeometryCollection::Facades::FRemoveOnBreakData::GetPackedData(FRemoveOnBreakData *this)

{
  return &this->PackedData;
}

// GetRemovalTimer @ 143fb2040

TVector2<float> __thiscall
GeometryCollection::Facades::FRemoveOnBreakData::GetRemovalTimer(FRemoveOnBreakData *this)

{
  TVector2<float>_u_0 in_RDX;
  
  *(uint *)in_RDX =
       (uint)(this->PackedData).field0_0x0._s_0.Z & __xmm_7fffffff7fffffff7fffffff7fffffff;
  *(uint *)((longlong)in_RDX + 4) =
       (uint)(this->PackedData).field0_0x0._s_0.W & __xmm_7fffffff7fffffff7fffffff7fffffff;
  return (TVector2<float>)in_RDX;
}

// IsEnabled @ 143fb78c0

bool __thiscall GeometryCollection::Facades::FRemoveOnBreakData::IsEnabled(FRemoveOnBreakData *this)

{
  return 0.0 < (this->PackedData).field0_0x0._s_0.X || (this->PackedData).field0_0x0._s_0.X == 0.0;
}

// SetBreakTimer @ 143fc7e80

void __thiscall
GeometryCollection::Facades::FRemoveOnBreakData::SetBreakTimer
          (FRemoveOnBreakData *this,float param_1,float param_2)

{
  float fVar1;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar2;
  
  fVar3 = (float)((uint)param_1 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar4 = (float)((uint)param_2 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar1 = (this->PackedData).field0_0x0._s_0.X;
  fVar2 = (this->PackedData).field0_0x0._s_0.X;
  fVar5 = fVar3;
  if (fVar4 <= fVar3) {
    fVar5 = fVar4;
  }
  if (fVar3 <= fVar4) {
    fVar3 = fVar4;
  }
  (this->PackedData).field0_0x0._s_0.X = fVar5;
  (this->PackedData).field0_0x0._s_0.Y = fVar3;
  if (fVar2 <= 0.0 && fVar1 != 0.0) {
    if (fVar5 == 0.0) {
      (this->PackedData).field0_0x0._s_0.X = __real_b4000000;
      return;
    }
    (this->PackedData).field0_0x0._s_0.X =
         (float)((uint)fVar5 ^ __xmm_80000000800000008000000080000000);
    return;
  }
  if (fVar5 <= __real_34000000) {
    (this->PackedData).field0_0x0._s_0.X = 0.0;
  }
  return;
}

// SetClusterCrumbling @ 143fc7ee0

void __thiscall
GeometryCollection::Facades::FRemoveOnBreakData::SetClusterCrumbling
          (FRemoveOnBreakData *this,bool param_1)

{
  float fVar1;
  
  fVar1 = (float)((uint)(this->PackedData).field0_0x0._s_0.Z &
                 __xmm_7fffffff7fffffff7fffffff7fffffff);
  (this->PackedData).field0_0x0._s_0.Z = fVar1;
  if (!param_1) {
    if (fVar1 <= __real_34000000) {
      (this->PackedData).field0_0x0._s_0.Z = 0.0;
    }
    return;
  }
  if (fVar1 == 0.0) {
    (this->PackedData).field0_0x0._s_0.Z = __real_b4000000;
    return;
  }
  (this->PackedData).field0_0x0._s_0.Z =
       (float)((uint)fVar1 ^ __xmm_80000000800000008000000080000000);
  return;
}

// SetEnabled @ 143fc82e0

void __thiscall
GeometryCollection::Facades::FRemoveOnBreakData::SetEnabled(FRemoveOnBreakData *this,bool param_1)

{
  float fVar1;
  
  fVar1 = (float)((uint)(this->PackedData).field0_0x0._s_0.X &
                 __xmm_7fffffff7fffffff7fffffff7fffffff);
  (this->PackedData).field0_0x0._s_0.X = fVar1;
  if (param_1) {
    if (fVar1 <= __real_34000000) {
      (this->PackedData).field0_0x0._s_0.X = 0.0;
    }
    return;
  }
  if (fVar1 == 0.0) {
    (this->PackedData).field0_0x0._s_0.X = __real_b4000000;
    return;
  }
  (this->PackedData).field0_0x0._s_0.X =
       (float)((uint)fVar1 ^ __xmm_80000000800000008000000080000000);
  return;
}

// SetRemovalTimer @ 143fc9710

void __thiscall
GeometryCollection::Facades::FRemoveOnBreakData::SetRemovalTimer
          (FRemoveOnBreakData *this,float param_1,float param_2)

{
  float *pfVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (((this->PackedData).field0_0x0._s_0.X <= 0.0 && (this->PackedData).field0_0x0._s_0.X != 0.0)
     || (pfVar1 = &(this->PackedData).field0_0x0._s_0.Z, 0.0 < *pfVar1 || *pfVar1 == 0.0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  fVar5 = (float)((uint)param_1 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar4 = (float)((uint)param_2 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar3 = fVar5;
  if (fVar4 <= fVar5) {
    fVar3 = fVar4;
  }
  if (fVar5 <= fVar4) {
    fVar5 = fVar4;
  }
  (this->PackedData).field0_0x0._s_0.Z = fVar3;
  (this->PackedData).field0_0x0._s_0.W = fVar5;
  if (bVar2) {
    if (fVar3 == 0.0) {
      (this->PackedData).field0_0x0._s_0.Z = __real_b4000000;
      return;
    }
    (this->PackedData).field0_0x0._s_0.Z =
         (float)((uint)fVar3 ^ __xmm_80000000800000008000000080000000);
    return;
  }
  if (fVar3 <= __real_34000000) {
    (this->PackedData).field0_0x0._s_0.Z = 0.0;
  }
  return;
}

