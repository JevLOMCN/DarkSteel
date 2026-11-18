// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// GetValue1 @ 147b710a0

void __thiscall
FRawDistribution::GetValue1
          (FRawDistribution *this,float param_1,float *param_2,int param_3,FRandomStream *param_4)

{
  uchar uVar1;
  
  uVar1 = (this->LookupTable).Op;
  if (uVar1 == '\x01') {
    GetValue1None(this,param_1,param_2);
    return;
  }
  if (uVar1 != '\x02') {
    if (uVar1 != '\x03') {
      *param_2 = 0.0;
      return;
    }
    GetValue1Extreme(this,param_1,param_2,param_3,param_4);
    return;
  }
  GetValue1Random(this,param_1,param_2,param_4);
  return;
}

// GetValue1Extreme @ 147b710e0

void __thiscall
FRawDistribution::GetValue1Extreme
          (FRawDistribution *this,float param_1,float *param_2,int param_3,FRandomStream *param_4)

{
  uint uVar1;
  longlong lVar2;
  float fVar3;
  float *local_res8;
  float local_res20 [2];
  
  local_res20[0] = 0.0;
  if (param_4 == (FRandomStream *)0x0) {
    fVar3 = FGenericPlatformMath::SRand();
  }
  else {
    uVar1 = param_4->Seed * 0xbb38435 + 0x3619636b;
    param_4->Seed = uVar1;
    fVar3 = (float)(uVar1 >> 9 | 0x3f800000) - __real_3f800000;
  }
  FDistributionLookupTable::GetEntry
            (&this->LookupTable,param_1,(float **)&param_4,&local_res8,local_res20);
  if ((0 < param_3) || ((param_3 == 0 && (__real_3f000000 < fVar3)))) {
    lVar2 = 4;
  }
  else {
    lVar2 = 0;
  }
  fVar3 = *(float *)((longlong)&param_4->InitialSeed + lVar2);
  *param_2 = (*(float *)(lVar2 + (longlong)local_res8) - fVar3) * local_res20[0] + fVar3;
  return;
}

// GetValue1None @ 147b711d0

void __thiscall FRawDistribution::GetValue1None(FRawDistribution *this,float param_1,float *param_2)

{
  float local_res8 [4];
  float *local_res18;
  float *local_res20;
  
  local_res8[0] = 0.0;
  FDistributionLookupTable::GetEntry
            (&this->LookupTable,param_1,&local_res18,&local_res20,local_res8);
  *param_2 = (*local_res20 - *local_res18) * local_res8[0] + *local_res18;
  return;
}

// GetValue1Random @ 147b71230

void __thiscall
FRawDistribution::GetValue1Random
          (FRawDistribution *this,float param_1,float *param_2,FRandomStream *param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float local_res8 [2];
  float *local_res18;
  float *local_res20;
  
  local_res8[0] = 0.0;
  if (param_3 == (FRandomStream *)0x0) {
    fVar2 = FGenericPlatformMath::SRand();
  }
  else {
    uVar1 = param_3->Seed * 0xbb38435 + 0x3619636b;
    param_3->Seed = uVar1;
    fVar2 = (float)(uVar1 >> 9 | 0x3f800000) - __real_3f800000;
  }
  FDistributionLookupTable::GetEntry
            (&this->LookupTable,param_1,&local_res18,&local_res20,local_res8);
  fVar3 = (*local_res20 - *local_res18) * local_res8[0] + *local_res18;
  *param_2 = (((local_res20[1] - local_res18[1]) * local_res8[0] + local_res18[1]) - fVar3) * fVar2
             + fVar3;
  return;
}

// GetValue3 @ 147b71310

void __thiscall
FRawDistribution::GetValue3
          (FRawDistribution *this,float param_1,float *param_2,int param_3,FRandomStream *param_4)

{
  uchar uVar1;
  
  uVar1 = (this->LookupTable).Op;
  if (uVar1 == '\x01') {
    GetValue3None(this,param_1,param_2);
    return;
  }
  if (uVar1 != '\x02') {
    if (uVar1 == '\x03') {
      GetValue3Extreme(this,param_1,param_2,param_3,param_4);
      return;
    }
    return;
  }
  GetValue3Random(this,param_1,param_2,param_4);
  return;
}

// GetValue3Extreme @ 147b71340

void __thiscall
FRawDistribution::GetValue3Extreme
          (FRawDistribution *this,float param_1,float *param_2,int param_3,FRandomStream *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float *local_res8;
  float local_res20 [2];
  
  local_res20[0] = 0.0;
  if (param_4 == (FRandomStream *)0x0) {
    fVar7 = FGenericPlatformMath::SRand();
  }
  else {
    uVar4 = param_4->Seed * 0xbb38435 + 0x3619636b;
    param_4->Seed = uVar4;
    fVar7 = (float)(uVar4 >> 9 | 0x3f800000) - __real_3f800000;
  }
  FDistributionLookupTable::GetEntry
            (&this->LookupTable,param_1,(float **)&param_4,&local_res8,local_res20);
  if ((0 < param_3) || ((param_3 == 0 && (__real_3f000000 < fVar7)))) {
    lVar5 = 0xc;
    lVar6 = 0x14;
  }
  else {
    lVar5 = 0;
    lVar6 = 8;
  }
  fVar7 = *(float *)((longlong)&param_4->InitialSeed + lVar5);
  fVar1 = *(float *)((longlong)&param_4->Seed + lVar5);
  fVar2 = *(float *)((longlong)&param_4->InitialSeed + lVar6);
  fVar3 = *(float *)(lVar6 + (longlong)local_res8);
  *param_2 = (*(float *)(lVar5 + (longlong)local_res8) - fVar7) * local_res20[0] + fVar7;
  fVar7 = *(float *)(lVar5 + 4 + (longlong)local_res8);
  param_2[2] = (fVar3 - fVar2) * local_res20[0] + fVar2;
  param_2[1] = (fVar7 - fVar1) * local_res20[0] + fVar1;
  return;
}

// GetValue3None @ 147b71470

void __thiscall FRawDistribution::GetValue3None(FRawDistribution *this,float param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_res8 [4];
  float *local_res18;
  float *local_res20;
  
  local_res8[0] = 0.0;
  FDistributionLookupTable::GetEntry
            (&this->LookupTable,param_1,&local_res18,&local_res20,local_res8);
  fVar1 = local_res20[2];
  fVar2 = local_res18[2];
  fVar3 = *local_res20;
  fVar4 = *local_res18;
  fVar5 = local_res18[2];
  fVar6 = *local_res18;
  param_2[1] = (local_res20[1] - local_res18[1]) * local_res8[0] + local_res18[1];
  param_2[2] = (fVar1 - fVar2) * local_res8[0] + fVar5;
  *param_2 = (fVar3 - fVar4) * local_res8[0] + fVar6;
  return;
}

// GetValue3Random @ 147b71500

void __thiscall
FRawDistribution::GetValue3Random
          (FRawDistribution *this,float param_1,float *param_2,FRandomStream *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uchar uVar5;
  float fVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_res8 [2];
  float *local_res18;
  float *local_res20;
  
  fVar10 = __real_3f800000;
  local_res8[0] = 0.0;
  if (param_3 == (FRandomStream *)0x0) {
    fVar8 = FGenericPlatformMath::SRand();
    fVar9 = FGenericPlatformMath::SRand();
    fVar10 = FGenericPlatformMath::SRand();
  }
  else {
    uVar7 = param_3->Seed * 0xbb38435 + 0x3619636b;
    param_3->Seed = uVar7;
    fVar8 = (float)(uVar7 >> 9 | 0x3f800000) - fVar10;
    uVar7 = param_3->Seed * 0xbb38435 + 0x3619636b;
    param_3->Seed = uVar7;
    fVar9 = (float)(uVar7 >> 9 | 0x3f800000) - fVar10;
    uVar7 = param_3->Seed * 0xbb38435 + 0x3619636b;
    param_3->Seed = uVar7;
    fVar10 = (float)(uVar7 >> 9 | 0x3f800000) - fVar10;
  }
  uVar5 = (this->LookupTable).LockFlag;
  if ((uVar5 == '\x01') ||
     (((fVar6 = fVar8, uVar5 != '\x02' && (fVar6 = fVar9, uVar5 != '\x03')) &&
      (fVar6 = fVar10, fVar10 = fVar8, uVar5 == '\x04')))) {
    fVar6 = fVar10;
    fVar9 = fVar8;
  }
  FDistributionLookupTable::GetEntry
            (&this->LookupTable,param_1,&local_res18,&local_res20,local_res8);
  fVar11 = (*local_res20 - *local_res18) * local_res8[0] + *local_res18;
  fVar13 = (local_res20[2] - local_res18[2]) * local_res8[0] + local_res18[2];
  fVar12 = (local_res20[1] - local_res18[1]) * local_res8[0] + local_res18[1];
  fVar10 = local_res20[4];
  fVar1 = local_res18[4];
  fVar2 = local_res18[4];
  fVar3 = local_res20[5];
  fVar4 = local_res18[5];
  *param_2 = (((local_res20[3] - local_res18[3]) * local_res8[0] + local_res18[3]) - fVar11) * fVar8
             + fVar11;
  fVar8 = local_res18[5];
  param_2[1] = (((fVar10 - fVar1) * local_res8[0] + fVar2) - fVar12) * fVar9 + fVar12;
  param_2[2] = (((fVar3 - fVar4) * local_res8[0] + fVar8) - fVar13) * fVar6 + fVar13;
  return;
}

// GetValue @ 147b71750

void __thiscall
FRawDistribution::GetValue
          (FRawDistribution *this,float param_1,float *param_2,int param_3,int param_4,
          FRandomStream *param_5)

{
  uchar uVar1;
  
  uVar1 = (this->LookupTable).Op;
  if (uVar1 == '\x01') {
    if (param_3 == 1) {
      GetValue1None(this,param_1,param_2);
      return;
    }
    GetValue3None(this,param_1,param_2);
    return;
  }
  if (uVar1 == '\x02') {
    if (param_3 == 1) {
      GetValue1Random(this,param_1,param_2,param_5);
      return;
    }
    GetValue3Random(this,param_1,param_2,param_5);
    return;
  }
  if (uVar1 != '\x03') {
    return;
  }
  if (param_3 == 1) {
    GetValue1Extreme(this,param_1,param_2,param_4,param_5);
    return;
  }
  GetValue3Extreme(this,param_1,param_2,param_4,param_5);
  return;
}

// TryGetDistributionObjectFromRawDistributionProperty @ 147b8f5f0

UObject * __cdecl
FRawDistribution::TryGetDistributionObjectFromRawDistributionProperty
          (FStructProperty *param_1,uchar *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  FNameEntryId FVar4;
  undefined4 extraout_var;
  UObject *pUVar5;
  undefined4 extraout_var_00;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  
  uVar1 = ((param_1->Struct).field0_0x0.DebugPtr)->_padding_;
  FVar4 = FNameEntryId::FromValidEName((EName)local_res8);
  if (uVar1 != *(uint *)CONCAT44(extraout_var,FVar4.Value)) {
    uVar1 = ((param_1->Struct).field0_0x0.DebugPtr)->_padding_;
    FVar4 = FNameEntryId::FromValidEName((EName)local_res18);
    if (uVar1 != *(uint *)CONCAT44(extraout_var_00,FVar4.Value)) {
      return (UObject *)0x0;
    }
    if ((int)param_1->_padding_ < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar5 = (UObject *)(*pcVar2)();
        return pUVar5;
      }
    }
    if (param_2 == (uchar *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar5 = (UObject *)(*pcVar2)();
        return pUVar5;
      }
    }
    return *(UObject **)(param_2 + (longlong)*(int *)((longlong)&param_1->_padding_ + 4) + 0x58);
  }
  if ((int)param_1->_padding_ < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar5 = (UObject *)(*pcVar2)();
      return pUVar5;
    }
  }
  if (param_2 == (uchar *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ContainerPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2de,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar5 = (UObject *)(*pcVar2)();
      return pUVar5;
    }
  }
  return *(UObject **)(param_2 + (longlong)*(int *)((longlong)&param_1->_padding_ + 4) + 0x28);
}

