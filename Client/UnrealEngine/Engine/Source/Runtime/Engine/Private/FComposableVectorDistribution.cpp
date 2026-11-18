// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// FComposableVectorDistribution @ 147b38c80

FComposableVectorDistribution * __thiscall
FComposableVectorDistribution::FComposableVectorDistribution(FComposableVectorDistribution *this)

{
  float local_18 [4];
  
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined4 *)&this->field_0x18 = 0;
  this->field_0x1c = 0;
  local_18[0] = 0.0;
  local_18[1] = 0.0;
  local_18[2] = 0.0;
  local_18[3] = 0.0;
  BuildConstantLookupTable((FDistributionLookupTable *)this,3,local_18);
  return this;
}

// AddConstantVector @ 147b42580

void __thiscall
FComposableVectorDistribution::AddConstantVector
          (FComposableVectorDistribution *this,TVector<double> *param_1)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  float local_28;
  float local_24;
  float local_20;
  
  fVar2 = __real_40400000;
  if ((float)(int)((uint)(byte)this->field_0x1a - (uint)(byte)this->field_0x1b) != __real_40400000)
  {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LookupTable.GetValuesPerEntry() == 3",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x663,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_28 = (float)(param_1->field0_0x0)._s_0.X;
  local_24 = (float)(param_1->field0_0x0)._s_0.Y;
  local_20 = (float)(param_1->field0_0x0)._s_0.Z;
  AddConstantToLookupTable((FDistributionLookupTable *)this,&local_28,3);
  if ((float)(int)((uint)(byte)this->field_0x1a - (uint)(byte)this->field_0x1b) != fVar2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LookupTable.GetValuesPerEntry() == 3",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x666,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// AddDistribution @ 147b42cd0

void __thiscall
FComposableVectorDistribution::AddDistribution
          (FComposableVectorDistribution *this,UDistributionVector *param_1)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  char cVar4;
  UDistributionVector *local_res10 [3];
  FDistributionLookupTable local_38;
  
  fVar2 = __real_40400000;
  local_res10[0] = param_1;
  if ((float)(int)((uint)(byte)this->field_0x1a - (uint)(byte)this->field_0x1b) != __real_40400000)
  {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LookupTable.GetValuesPerEntry() == 3",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x68b,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1 != (UDistributionVector *)0x0) {
    cVar4 = (**(code **)(param_1->_padding_ + 0x2e0))(param_1);
    if (cVar4 != '\0') {
      local_38.TimeScale = 0.0;
      local_38.TimeBias = 0.0;
      local_38.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Values.ArrayNum = 0;
      local_38.Values.ArrayMax = 0;
      local_38.Op = '\0';
      local_38.EntryCount = '\0';
      local_38.EntryStride = '\0';
      local_38.SubEntryStride = '\0';
      local_38.LockFlag = '\0';
      BuildLookupTable<UDistributionVector_const_*>(&local_38,local_res10);
      AddLookupTableToLookupTable((FDistributionLookupTable *)this,&local_38);
      if (local_38.Values.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Values.AllocatorInstance.Data);
      }
    }
  }
  if ((float)(int)((uint)(byte)this->field_0x1a - (uint)(byte)this->field_0x1b) != fVar2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LookupTable.GetValuesPerEntry() == 3",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x692,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Initialize @ 147b77360

void __thiscall
FComposableVectorDistribution::Initialize
          (FComposableVectorDistribution *this,UDistributionVector *param_1)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  char cVar4;
  UDistributionVector *local_res10 [3];
  float local_28 [8];
  
  fVar2 = __real_40400000;
  local_res10[0] = param_1;
  if ((float)(int)((uint)(byte)this->field_0x1a - (uint)(byte)this->field_0x1b) != __real_40400000)
  {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LookupTable.GetValuesPerEntry() == 3",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x63e,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1 != (UDistributionVector *)0x0) {
    cVar4 = (**(code **)(param_1->_padding_ + 0x2e0))(param_1);
    if (cVar4 != '\0') {
      BuildLookupTable<UDistributionVector_const_*>((FDistributionLookupTable *)this,local_res10);
      goto LAB_147b77404;
    }
  }
  local_28[0] = 0.0;
  local_28[1] = 0.0;
  local_28[2] = 0.0;
  local_28[3] = 0.0;
  BuildConstantLookupTable((FDistributionLookupTable *)this,3,local_28);
LAB_147b77404:
  if ((float)(int)((uint)(byte)this->field_0x1a - (uint)(byte)this->field_0x1b) != fVar2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LookupTable.GetValuesPerEntry() == 3",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x647,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// InitializeWithConstant @ 147b777f0

void __thiscall
FComposableVectorDistribution::InitializeWithConstant
          (FComposableVectorDistribution *this,TVector<double> *param_1)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  float local_28;
  float local_24;
  float local_20;
  
  fVar2 = __real_40400000;
  if ((float)(int)((uint)(byte)this->field_0x1a - (uint)(byte)this->field_0x1b) != __real_40400000)
  {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LookupTable.GetValuesPerEntry() == 3",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x64c,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_28 = (float)(param_1->field0_0x0)._s_0.X;
  local_24 = (float)(param_1->field0_0x0)._s_0.Y;
  local_20 = (float)(param_1->field0_0x0)._s_0.Z;
  BuildConstantLookupTable((FDistributionLookupTable *)this,3,&local_28);
  if ((float)(int)((uint)(byte)this->field_0x1a - (uint)(byte)this->field_0x1b) != fVar2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LookupTable.GetValuesPerEntry() == 3",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x64f,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Resample @ 147b85060

void __thiscall
FComposableVectorDistribution::Resample
          (FComposableVectorDistribution *this,float param_1,float param_2)

{
  FDistributionLookupTable local_48 [2];
  
  FDistributionLookupTable::FDistributionLookupTable(local_48,(FDistributionLookupTable *)this);
  ResampleLookupTable((FDistributionLookupTable *)this,local_48,param_1,param_2,0x80);
  if (local_48[0].Values.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Values.AllocatorInstance.Data);
  }
  return;
}

// ScaleByConstant @ 147b86db0

void __thiscall
FComposableVectorDistribution::ScaleByConstant(FComposableVectorDistribution *this,float param_1)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  
  fVar2 = __real_40400000;
  if ((float)(int)((uint)(byte)this->field_0x1a - (uint)(byte)this->field_0x1b) != __real_40400000)
  {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LookupTable.GetValuesPerEntry() == 3",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x654,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ScaleLookupTableByConstant((FDistributionLookupTable *)this,param_1);
  if ((float)(int)((uint)(byte)this->field_0x1a - (uint)(byte)this->field_0x1b) != fVar2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LookupTable.GetValuesPerEntry() == 3",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x656,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ScaleByConstantVector @ 147b86e70

void __thiscall
FComposableVectorDistribution::ScaleByConstantVector
          (FComposableVectorDistribution *this,TVector<double> *param_1)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  float local_28;
  float local_24;
  float local_20;
  
  fVar2 = __real_40400000;
  if ((float)(int)((uint)(byte)this->field_0x1a - (uint)(byte)this->field_0x1b) != __real_40400000)
  {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LookupTable.GetValuesPerEntry() == 3",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x65b,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_28 = (float)(param_1->field0_0x0)._s_0.X;
  local_24 = (float)(param_1->field0_0x0)._s_0.Y;
  local_20 = (float)(param_1->field0_0x0)._s_0.Z;
  ScaleLookupTableByConstants((FDistributionLookupTable *)this,&local_28,3);
  if ((float)(int)((uint)(byte)this->field_0x1a - (uint)(byte)this->field_0x1b) != fVar2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LookupTable.GetValuesPerEntry() == 3",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x65e,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ScaleByDistribution @ 147b870a0

void __thiscall
FComposableVectorDistribution::ScaleByDistribution
          (FComposableVectorDistribution *this,UDistributionFloat *param_1)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  char cVar4;
  UDistributionFloat *local_res10 [3];
  float local_48 [4];
  FDistributionLookupTable local_38;
  
  fVar2 = __real_40400000;
  local_res10[0] = param_1;
  if ((float)(int)((uint)(byte)this->field_0x1a - (uint)(byte)this->field_0x1b) != __real_40400000)
  {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LookupTable.GetValuesPerEntry() == 3",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x66b,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1 != (UDistributionFloat *)0x0) {
    cVar4 = (**(code **)(param_1->_padding_ + 0x2d8))(param_1);
    if (cVar4 != '\0') {
      local_38.TimeScale = 0.0;
      local_38.TimeBias = 0.0;
      local_38.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Values.ArrayNum = 0;
      local_38.Values.ArrayMax = 0;
      local_38.Op = '\0';
      local_38.EntryCount = '\0';
      local_38.EntryStride = '\0';
      local_38.SubEntryStride = '\0';
      local_38.LockFlag = '\0';
      BuildLookupTable<UDistributionFloat_const_*>(&local_38,local_res10);
      ScaleLookupTableByLookupTable((FDistributionLookupTable *)this,&local_38);
      if (local_38.Values.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Values.AllocatorInstance.Data);
      }
      goto LAB_147b8717f;
    }
  }
  local_48[0] = 0.0;
  local_48[1] = 0.0;
  local_48[2] = 0.0;
  local_48[3] = 0.0;
  BuildConstantLookupTable((FDistributionLookupTable *)this,3,local_48);
LAB_147b8717f:
  if ((float)(int)((uint)(byte)this->field_0x1a - (uint)(byte)this->field_0x1b) != fVar2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LookupTable.GetValuesPerEntry() == 3",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x676,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ScaleByVectorDistribution @ 147b871e0

void __thiscall
FComposableVectorDistribution::ScaleByVectorDistribution
          (FComposableVectorDistribution *this,UDistributionVector *param_1)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  char cVar4;
  UDistributionVector *local_res10 [3];
  float local_48 [4];
  FDistributionLookupTable local_38;
  
  fVar2 = __real_40400000;
  local_res10[0] = param_1;
  if ((float)(int)((uint)(byte)this->field_0x1a - (uint)(byte)this->field_0x1b) != __real_40400000)
  {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LookupTable.GetValuesPerEntry() == 3",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x67b,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1 != (UDistributionVector *)0x0) {
    cVar4 = (**(code **)(param_1->_padding_ + 0x2e0))(param_1);
    if (cVar4 != '\0') {
      local_38.TimeScale = 0.0;
      local_38.TimeBias = 0.0;
      local_38.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Values.ArrayNum = 0;
      local_38.Values.ArrayMax = 0;
      local_38.Op = '\0';
      local_38.EntryCount = '\0';
      local_38.EntryStride = '\0';
      local_38.SubEntryStride = '\0';
      local_38.LockFlag = '\0';
      BuildLookupTable<UDistributionVector_const_*>(&local_38,local_res10);
      ScaleLookupTableByLookupTable((FDistributionLookupTable *)this,&local_38);
      if (local_38.Values.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Values.AllocatorInstance.Data);
      }
      goto LAB_147b872bf;
    }
  }
  local_48[0] = 0.0;
  local_48[1] = 0.0;
  local_48[2] = 0.0;
  local_48[3] = 0.0;
  BuildConstantLookupTable((FDistributionLookupTable *)this,3,local_48);
LAB_147b872bf:
  if ((float)(int)((uint)(byte)this->field_0x1a - (uint)(byte)this->field_0x1b) != fVar2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LookupTable.GetValuesPerEntry() == 3",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x686,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Splat @ 147b8e900

void __thiscall
FComposableVectorDistribution::Splat(FComposableVectorDistribution *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  
  if ((3 < (uint)param_1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ChannelIndex >= 0 && ChannelIndex <= 3",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                         ,0x697,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  fVar5 = __real_40400000;
  if (((float)(int)((uint)(byte)this->field_0x1a - (uint)(byte)this->field_0x1b) != __real_40400000)
     && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("LookupTable.GetValuesPerEntry() == 3",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                            ,0x698,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar3 = *(int *)&this->field_0x10;
  uVar9 = 0;
  if (0 < (longlong)iVar3) {
    lVar8 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar9 < *(int *)&this->field_0x10) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar9 = uVar9 + 3;
      puVar1 = (undefined4 *)(*(longlong *)&this->field_0x8 + lVar8 * 4);
      lVar8 = lVar8 + 3;
      uVar2 = puVar1[param_1];
      *puVar1 = uVar2;
      puVar1[1] = uVar2;
      puVar1[2] = uVar2;
    } while (lVar8 < iVar3);
  }
  if (((float)(int)((uint)(byte)this->field_0x1a - (uint)(byte)this->field_0x1b) != fVar5) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("LookupTable.GetValuesPerEntry() == 3",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                         ,0x6a4,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  return;
}

