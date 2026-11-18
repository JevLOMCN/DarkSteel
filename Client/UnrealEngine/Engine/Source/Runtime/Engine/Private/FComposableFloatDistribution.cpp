// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// FComposableFloatDistribution @ 147b38c30

FComposableFloatDistribution * __thiscall
FComposableFloatDistribution::FComposableFloatDistribution(FComposableFloatDistribution *this)

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
  BuildConstantLookupTable((FDistributionLookupTable *)this,1,local_18);
  return this;
}

// AddDistribution @ 147b42bb0

void __thiscall
FComposableFloatDistribution::AddDistribution
          (FComposableFloatDistribution *this,UDistributionFloat *param_1)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  char cVar4;
  UDistributionFloat *local_res10 [3];
  FDistributionLookupTable local_38;
  
  fVar2 = __real_3f800000;
  local_res10[0] = param_1;
  if ((float)(int)((uint)(byte)this->field_0x1a - (uint)(byte)this->field_0x1b) != __real_3f800000)
  {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LookupTable.GetValuesPerEntry() == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x616,L"");
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
      AddLookupTableToLookupTable((FDistributionLookupTable *)this,&local_38);
      if (local_38.Values.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Values.AllocatorInstance.Data);
      }
    }
  }
  if ((float)(int)((uint)(byte)this->field_0x1a - (uint)(byte)this->field_0x1b) != fVar2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LookupTable.GetValuesPerEntry() == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x61d,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Initialize @ 147b77260

void __thiscall
FComposableFloatDistribution::Initialize
          (FComposableFloatDistribution *this,UDistributionFloat *param_1)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  char cVar4;
  UDistributionFloat *local_res10 [3];
  float local_28 [8];
  
  fVar2 = __real_3f800000;
  local_res10[0] = param_1;
  if ((float)(int)((uint)(byte)this->field_0x1a - (uint)(byte)this->field_0x1b) != __real_3f800000)
  {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LookupTable.GetValuesPerEntry() == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x5ea,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1 != (UDistributionFloat *)0x0) {
    cVar4 = (**(code **)(param_1->_padding_ + 0x2d8))(param_1);
    if (cVar4 != '\0') {
      BuildLookupTable<UDistributionFloat_const_*>((FDistributionLookupTable *)this,local_res10);
      goto LAB_147b77304;
    }
  }
  local_28[0] = 0.0;
  local_28[1] = 0.0;
  local_28[2] = 0.0;
  local_28[3] = 0.0;
  BuildConstantLookupTable((FDistributionLookupTable *)this,1,local_28);
LAB_147b77304:
  if ((float)(int)((uint)(byte)this->field_0x1a - (uint)(byte)this->field_0x1b) != fVar2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LookupTable.GetValuesPerEntry() == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x5f3,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// InitializeWithConstant @ 147b77730

void __thiscall
FComposableFloatDistribution::InitializeWithConstant
          (FComposableFloatDistribution *this,float param_1)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  float local_res10 [6];
  
  fVar2 = __real_3f800000;
  local_res10[0] = param_1;
  if ((float)(int)((uint)(byte)this->field_0x1a - (uint)(byte)this->field_0x1b) != __real_3f800000)
  {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LookupTable.GetValuesPerEntry() == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x5f8,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  BuildConstantLookupTable((FDistributionLookupTable *)this,1,local_res10);
  if ((float)(int)((uint)(byte)this->field_0x1a - (uint)(byte)this->field_0x1b) != fVar2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LookupTable.GetValuesPerEntry() == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x5fa,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Normalize @ 147b7a270

void __thiscall
FComposableFloatDistribution::Normalize
          (FComposableFloatDistribution *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float local_res10 [2];
  float local_res18 [2];
  
  FDistributionLookupTable::GetRange((FDistributionLookupTable *)this,local_res10,local_res18);
  fVar2 = __real_3f800000;
  fVar1 = (float)((uint)local_res10[0] ^ __xmm_80000000800000008000000080000000);
  local_res18[0] = local_res18[0] - local_res10[0];
  *param_2 = local_res10[0];
  *param_1 = local_res18[0];
  if (__real_322bcc77 < (float)((uint)local_res18[0] & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar2 = fVar2 / local_res18[0];
  }
  local_res10[0] = fVar1;
  AddConstantToLookupTable((FDistributionLookupTable *)this,local_res10,1);
  ScaleLookupTableByConstant((FDistributionLookupTable *)this,fVar2);
  return;
}

// Resample @ 147b84ff0

void __thiscall
FComposableFloatDistribution::Resample
          (FComposableFloatDistribution *this,float param_1,float param_2)

{
  FDistributionLookupTable local_48 [2];
  
  FDistributionLookupTable::FDistributionLookupTable(local_48,(FDistributionLookupTable *)this);
  ResampleLookupTable((FDistributionLookupTable *)this,local_48,param_1,param_2,0x80);
  if (local_48[0].Values.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Values.AllocatorInstance.Data);
  }
  return;
}

// ScaleByConstant @ 147b86cf0

void __thiscall
FComposableFloatDistribution::ScaleByConstant(FComposableFloatDistribution *this,float param_1)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  
  fVar2 = __real_3f800000;
  if ((float)(int)((uint)(byte)this->field_0x1a - (uint)(byte)this->field_0x1b) != __real_3f800000)
  {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LookupTable.GetValuesPerEntry() == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x5ff,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ScaleLookupTableByConstant((FDistributionLookupTable *)this,param_1);
  if ((float)(int)((uint)(byte)this->field_0x1a - (uint)(byte)this->field_0x1b) != fVar2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LookupTable.GetValuesPerEntry() == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x601,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ScaleByDistribution @ 147b86f60

void __thiscall
FComposableFloatDistribution::ScaleByDistribution
          (FComposableFloatDistribution *this,UDistributionFloat *param_1)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  char cVar4;
  UDistributionFloat *local_res10 [3];
  float local_48 [4];
  FDistributionLookupTable local_38;
  
  fVar2 = __real_3f800000;
  local_res10[0] = param_1;
  if ((float)(int)((uint)(byte)this->field_0x1a - (uint)(byte)this->field_0x1b) != __real_3f800000)
  {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LookupTable.GetValuesPerEntry() == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x606,L"");
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
      goto LAB_147b8703f;
    }
  }
  local_48[0] = 0.0;
  local_48[1] = 0.0;
  local_48[2] = 0.0;
  local_48[3] = 0.0;
  BuildConstantLookupTable((FDistributionLookupTable *)this,1,local_48);
LAB_147b8703f:
  if ((float)(int)((uint)(byte)this->field_0x1a - (uint)(byte)this->field_0x1b) != fVar2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LookupTable.GetValuesPerEntry() == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x611,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

