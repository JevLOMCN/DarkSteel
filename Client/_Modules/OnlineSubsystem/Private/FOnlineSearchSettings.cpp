// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 22

// Get<int> @ 14eb2ae90

bool __thiscall
FOnlineSearchSettings::Get<int>(FOnlineSearchSettings *this,FName param_1,int *param_2)

{
  FOnlineSessionSearchParam *pFVar1;
  
  pFVar1 = TMapBase<FName,FOnlineSessionSearchParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>_>
           ::Find((TMapBase<FName,FOnlineSessionSearchParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>_>
                   *)&this->SearchParams,param_1);
  if (pFVar1 == (FOnlineSessionSearchParam *)0x0) {
    return false;
  }
  if ((pFVar1->Data).Type == Int32) {
    *param_2 = (pFVar1->Data).Value.AsInt;
    return true;
  }
  *param_2 = 0;
  return true;
}

// Get<float> @ 14eb2af30

bool __thiscall
FOnlineSearchSettings::Get<float>(FOnlineSearchSettings *this,FName param_1,float *param_2)

{
  FOnlineSessionSearchParam *pFVar1;
  
  pFVar1 = TMapBase<FName,FOnlineSessionSearchParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>_>
           ::Find((TMapBase<FName,FOnlineSessionSearchParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>_>
                   *)&this->SearchParams,param_1);
  if (pFVar1 == (FOnlineSessionSearchParam *)0x0) {
    return false;
  }
  if ((pFVar1->Data).Type == Float) {
    *param_2 = (float)(pFVar1->Data).Value.AsInt;
    return true;
  }
  *param_2 = 0.0;
  return true;
}

// Get<double> @ 14eb2afd0

bool __thiscall
FOnlineSearchSettings::Get<double>(FOnlineSearchSettings *this,FName param_1,double *param_2)

{
  FOnlineSessionSearchParam *pFVar1;
  
  pFVar1 = TMapBase<FName,FOnlineSessionSearchParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>_>
           ::Find((TMapBase<FName,FOnlineSessionSearchParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>_>
                   *)&this->SearchParams,param_1);
  if (pFVar1 == (FOnlineSessionSearchParam *)0x0) {
    return false;
  }
  if ((pFVar1->Data).Type == Double) {
    *param_2 = (double)(pFVar1->Data).Value.AsInt64;
    return true;
  }
  *param_2 = 0.0;
  return true;
}

// Get<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> @ 14eb2b070

bool __thiscall
FOnlineSearchSettings::Get<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
          (FOnlineSearchSettings *this,FName param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  FOnlineSessionSearchParam *this_00;
  
  this_00 = TMapBase<FName,FOnlineSessionSearchParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>_>
            ::Find((TMapBase<FName,FOnlineSessionSearchParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>_>
                    *)&this->SearchParams,param_1);
  if (this_00 != (FOnlineSessionSearchParam *)0x0) {
    FVariantData::GetValue(&this_00->Data,param_2);
    return true;
  }
  return false;
}

// Get<FString> @ 14eb2b0f0

bool __thiscall
FOnlineSearchSettings::Get<FString>(FOnlineSearchSettings *this,FName param_1,FString *param_2)

{
  Type TVar1;
  wchar_t *pwVar2;
  FOnlineSessionSearchParam *pFVar3;
  
  pFVar3 = TMapBase<FName,FOnlineSessionSearchParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>_>
           ::Find((TMapBase<FName,FOnlineSessionSearchParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>_>
                   *)&this->SearchParams,param_1);
  if (pFVar3 == (FOnlineSessionSearchParam *)0x0) {
    return false;
  }
  TVar1 = (pFVar3->Data).Type;
  if (((TVar1 == String) || (TVar1 == Json)) &&
     (pwVar2 = (pFVar3->Data).Value.AsTCHAR, pwVar2 != (wchar_t *)0x0)) {
    ::FString::operator=(param_2,pwVar2);
    return true;
  }
  ::FString::Reset(param_2,0);
  return true;
}

// Get<unsigned___int64> @ 14eb2b1b0

bool __thiscall
FOnlineSearchSettings::Get<unsigned___int64>
          (FOnlineSearchSettings *this,FName param_1,ulong64 *param_2)

{
  FOnlineSessionSearchParam *pFVar1;
  
  pFVar1 = TMapBase<FName,FOnlineSessionSearchParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>_>
           ::Find((TMapBase<FName,FOnlineSessionSearchParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>_>
                   *)&this->SearchParams,param_1);
  if (pFVar1 == (FOnlineSessionSearchParam *)0x0) {
    return false;
  }
  if ((pFVar1->Data).Type == UInt64) {
    *param_2 = (pFVar1->Data).Value.AsInt64;
    return true;
  }
  *param_2 = 0;
  return true;
}

// Get<bool> @ 14eb2b250

bool __thiscall
FOnlineSearchSettings::Get<bool>(FOnlineSearchSettings *this,FName param_1,bool *param_2)

{
  FOnlineSessionSearchParam *pFVar1;
  
  pFVar1 = TMapBase<FName,FOnlineSessionSearchParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>_>
           ::Find((TMapBase<FName,FOnlineSessionSearchParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>_>
                   *)&this->SearchParams,param_1);
  if (pFVar1 == (FOnlineSessionSearchParam *)0x0) {
    return false;
  }
  if ((pFVar1->Data).Type == Bool) {
    *param_2 = (pFVar1->Data).Value.AsBool;
    return true;
  }
  *param_2 = false;
  return true;
}

// Set<int> @ 14eb2bea0

void __thiscall
FOnlineSearchSettings::Set<int>(FOnlineSearchSettings *this,FName param_1,int *param_2,Type param_3)

{
  Type TVar1;
  uint uVar2;
  FOnlineSessionSearchParam *pFVar3;
  TPairInitializer<FName_const_&,FOnlineSessionSearchParam_&&> local_res8;
  FOnlineSessionSearchParam **local_58;
  char *local_50;
  char local_48 [8];
  void *local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  Type local_28;
  undefined4 local_24;
  
  local_res8.Value = (FOnlineSessionSearchParam *)param_1;
  pFVar3 = TMapBase<FName,FOnlineSessionSearchParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>_>
           ::Find((TMapBase<FName,FOnlineSessionSearchParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>_>
                   *)&this->SearchParams,param_1);
  uVar2 = *param_2;
  if (pFVar3 != (FOnlineSessionSearchParam *)0x0) {
    TVar1 = (pFVar3->Data).Type;
    if (((TVar1 == String) || (TVar1 == Blob)) || (TVar1 == Json)) {
      operator_delete__((pFVar3->Data).Value.AsTCHAR);
    }
    (pFVar3->Data).Value.AsInt64 = 0;
    *(undefined8 *)((longlong)&(pFVar3->Data).Value + 8) = 0;
    (pFVar3->Data).CachedEstimatedMaxEscapedStringSize = 0;
    (pFVar3->Data).Type = Int32;
    (pFVar3->Data).Value.AsInt = uVar2;
    pFVar3->ComparisonOp = param_3;
    return;
  }
  local_58 = &local_res8.Value;
  local_30 = 0;
  local_48[0] = '\x01';
  local_50 = local_48;
  uStack_38 = 0;
  local_40 = (void *)(ulonglong)uVar2;
  local_24 = 0xffffffff;
  local_28 = param_3;
  TSet<TTuple<FName,FOnlineSessionSearchParam>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FOnlineSessionSearchParam_&&>_>
            ((TSet<TTuple<FName,FOnlineSessionSearchParam>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>,FDefaultSetAllocator>
              *)&this->SearchParams,&local_res8,(bool *)&local_58);
  if (((local_48[0] == '\x06') || (local_48[0] == '\b')) || (local_48[0] == '\n')) {
    operator_delete__(local_40);
  }
  return;
}

// Set<int> @ 14eb2bfa0

void __thiscall
FOnlineSearchSettings::Set<int>
          (FOnlineSearchSettings *this,FName param_1,int *param_2,Type param_3,int param_4)

{
  Type TVar1;
  uint uVar2;
  FOnlineSessionSearchParam *pFVar3;
  TPairInitializer<FName_const_&,FOnlineSessionSearchParam_&&> local_res8;
  FOnlineSessionSearchParam **local_58;
  char *local_50;
  char local_48 [8];
  void *local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  Type local_28;
  int local_24;
  
  local_res8.Value = (FOnlineSessionSearchParam *)param_1;
  pFVar3 = TMapBase<FName,FOnlineSessionSearchParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>_>
           ::Find((TMapBase<FName,FOnlineSessionSearchParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>_>
                   *)&this->SearchParams,param_1);
  uVar2 = *param_2;
  if (pFVar3 != (FOnlineSessionSearchParam *)0x0) {
    TVar1 = (pFVar3->Data).Type;
    if (((TVar1 == String) || (TVar1 == Blob)) || (TVar1 == Json)) {
      operator_delete__((pFVar3->Data).Value.AsTCHAR);
    }
    (pFVar3->Data).Value.AsInt64 = 0;
    *(undefined8 *)((longlong)&(pFVar3->Data).Value + 8) = 0;
    (pFVar3->Data).CachedEstimatedMaxEscapedStringSize = 0;
    (pFVar3->Data).Type = Int32;
    (pFVar3->Data).Value.AsInt = uVar2;
    pFVar3->ComparisonOp = param_3;
    pFVar3->ID = param_4;
    return;
  }
  local_24 = param_4;
  local_58 = &local_res8.Value;
  local_30 = 0;
  local_50 = local_48;
  local_48[0] = '\x01';
  uStack_38 = 0;
  local_40 = (void *)(ulonglong)uVar2;
  local_28 = param_3;
  TSet<TTuple<FName,FOnlineSessionSearchParam>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FOnlineSessionSearchParam_&&>_>
            ((TSet<TTuple<FName,FOnlineSessionSearchParam>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>,FDefaultSetAllocator>
              *)&this->SearchParams,&local_res8,(bool *)&local_58);
  if (((local_48[0] == '\x06') || (local_48[0] == '\b')) || (local_48[0] == '\n')) {
    operator_delete__(local_40);
  }
  return;
}

// Set<float> @ 14eb2c270

void __thiscall
FOnlineSearchSettings::Set<float>
          (FOnlineSearchSettings *this,FName param_1,float *param_2,Type param_3)

{
  float fVar1;
  Type TVar2;
  FOnlineSessionSearchParam *pFVar3;
  TPairInitializer<FName_const_&,FOnlineSessionSearchParam_&&> local_res8;
  FOnlineSessionSearchParam **local_68;
  char *local_60;
  char local_58 [8];
  void *local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  Type local_38;
  undefined4 local_34;
  
  local_res8.Value = (FOnlineSessionSearchParam *)param_1;
  pFVar3 = TMapBase<FName,FOnlineSessionSearchParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>_>
           ::Find((TMapBase<FName,FOnlineSessionSearchParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>_>
                   *)&this->SearchParams,param_1);
  fVar1 = *param_2;
  if (pFVar3 == (FOnlineSessionSearchParam *)0x0) {
    local_68 = &local_res8.Value;
    local_40 = 0;
    local_58[0] = '\a';
    local_60 = local_58;
    uStack_48 = 0;
    local_50 = (void *)(ulonglong)(uint)fVar1;
    local_34 = 0xffffffff;
    local_38 = param_3;
    TSet<TTuple<FName,FOnlineSessionSearchParam>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,FOnlineSessionSearchParam_&&>_>
              ((TSet<TTuple<FName,FOnlineSessionSearchParam>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>,FDefaultSetAllocator>
                *)&this->SearchParams,&local_res8,(bool *)&local_68);
    if (((local_58[0] == '\x06') || (local_58[0] == '\b')) || (local_58[0] == '\n')) {
      operator_delete__(local_50);
    }
  }
  else {
    TVar2 = (pFVar3->Data).Type;
    if (((TVar2 == String) || (TVar2 == Blob)) || (TVar2 == Json)) {
      operator_delete__((pFVar3->Data).Value.AsTCHAR);
    }
    (pFVar3->Data).Value.AsInt64 = 0;
    *(undefined8 *)((longlong)&(pFVar3->Data).Value + 8) = 0;
    (pFVar3->Data).CachedEstimatedMaxEscapedStringSize = 0;
    (pFVar3->Data).Value.AsFloat = fVar1;
    (pFVar3->Data).Type = Float;
    pFVar3->ComparisonOp = param_3;
  }
  return;
}

// Set<float> @ 14eb2c370

void __thiscall
FOnlineSearchSettings::Set<float>
          (FOnlineSearchSettings *this,FName param_1,float *param_2,Type param_3,int param_4)

{
  float fVar1;
  Type TVar2;
  FOnlineSessionSearchParam *pFVar3;
  TPairInitializer<FName_const_&,FOnlineSessionSearchParam_&&> local_res8;
  FOnlineSessionSearchParam **local_68;
  char *local_60;
  char local_58 [8];
  void *local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  Type local_38;
  int local_34;
  
  local_res8.Value = (FOnlineSessionSearchParam *)param_1;
  pFVar3 = TMapBase<FName,FOnlineSessionSearchParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>_>
           ::Find((TMapBase<FName,FOnlineSessionSearchParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>_>
                   *)&this->SearchParams,param_1);
  fVar1 = *param_2;
  if (pFVar3 == (FOnlineSessionSearchParam *)0x0) {
    local_34 = param_4;
    local_68 = &local_res8.Value;
    local_40 = 0;
    local_60 = local_58;
    local_58[0] = '\a';
    uStack_48 = 0;
    local_50 = (void *)(ulonglong)(uint)fVar1;
    local_38 = param_3;
    TSet<TTuple<FName,FOnlineSessionSearchParam>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,FOnlineSessionSearchParam_&&>_>
              ((TSet<TTuple<FName,FOnlineSessionSearchParam>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>,FDefaultSetAllocator>
                *)&this->SearchParams,&local_res8,(bool *)&local_68);
    if (((local_58[0] == '\x06') || (local_58[0] == '\b')) || (local_58[0] == '\n')) {
      operator_delete__(local_50);
    }
  }
  else {
    TVar2 = (pFVar3->Data).Type;
    if (((TVar2 == String) || (TVar2 == Blob)) || (TVar2 == Json)) {
      operator_delete__((pFVar3->Data).Value.AsTCHAR);
    }
    (pFVar3->Data).Value.AsInt64 = 0;
    *(undefined8 *)((longlong)&(pFVar3->Data).Value + 8) = 0;
    (pFVar3->Data).CachedEstimatedMaxEscapedStringSize = 0;
    (pFVar3->Data).Value.AsFloat = fVar1;
    (pFVar3->Data).Type = Float;
    pFVar3->ComparisonOp = param_3;
    pFVar3->ID = param_4;
  }
  return;
}

// Set<double> @ 14eb2c660

void __thiscall
FOnlineSearchSettings::Set<double>
          (FOnlineSearchSettings *this,FName param_1,double *param_2,Type param_3)

{
  void *pvVar1;
  Type TVar2;
  FOnlineSessionSearchParam *pFVar3;
  TPairInitializer<FName_const_&,FOnlineSessionSearchParam_&&> local_res8;
  FOnlineSessionSearchParam **local_68;
  char *local_60;
  char local_58 [8];
  void *local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  Type local_38;
  undefined4 local_34;
  
  local_res8.Value = (FOnlineSessionSearchParam *)param_1;
  pFVar3 = TMapBase<FName,FOnlineSessionSearchParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>_>
           ::Find((TMapBase<FName,FOnlineSessionSearchParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>_>
                   *)&this->SearchParams,param_1);
  pvVar1 = (void *)*param_2;
  if (pFVar3 == (FOnlineSessionSearchParam *)0x0) {
    local_68 = &local_res8.Value;
    local_40 = 0;
    local_58[0] = '\x05';
    local_60 = local_58;
    uStack_48 = 0;
    local_34 = 0xffffffff;
    local_50 = pvVar1;
    local_38 = param_3;
    TSet<TTuple<FName,FOnlineSessionSearchParam>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,FOnlineSessionSearchParam_&&>_>
              ((TSet<TTuple<FName,FOnlineSessionSearchParam>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>,FDefaultSetAllocator>
                *)&this->SearchParams,&local_res8,(bool *)&local_68);
    if (((local_58[0] == '\x06') || (local_58[0] == '\b')) || (local_58[0] == '\n')) {
      operator_delete__(local_50);
    }
  }
  else {
    TVar2 = (pFVar3->Data).Type;
    if (((TVar2 == String) || (TVar2 == Blob)) || (TVar2 == Json)) {
      operator_delete__((pFVar3->Data).Value.AsTCHAR);
    }
    (pFVar3->Data).Value.AsInt64 = 0;
    *(undefined8 *)((longlong)&(pFVar3->Data).Value + 8) = 0;
    (pFVar3->Data).CachedEstimatedMaxEscapedStringSize = 0;
    (pFVar3->Data).Value.AsDouble = (double)pvVar1;
    (pFVar3->Data).Type = Double;
    pFVar3->ComparisonOp = param_3;
  }
  return;
}

// Set<double> @ 14eb2c760

void __thiscall
FOnlineSearchSettings::Set<double>
          (FOnlineSearchSettings *this,FName param_1,double *param_2,Type param_3,int param_4)

{
  void *pvVar1;
  Type TVar2;
  FOnlineSessionSearchParam *pFVar3;
  TPairInitializer<FName_const_&,FOnlineSessionSearchParam_&&> local_res8;
  FOnlineSessionSearchParam **local_68;
  char *local_60;
  char local_58 [8];
  void *local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  Type local_38;
  int local_34;
  
  local_res8.Value = (FOnlineSessionSearchParam *)param_1;
  pFVar3 = TMapBase<FName,FOnlineSessionSearchParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>_>
           ::Find((TMapBase<FName,FOnlineSessionSearchParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>_>
                   *)&this->SearchParams,param_1);
  pvVar1 = (void *)*param_2;
  if (pFVar3 == (FOnlineSessionSearchParam *)0x0) {
    local_34 = param_4;
    local_68 = &local_res8.Value;
    local_40 = 0;
    local_60 = local_58;
    local_58[0] = '\x05';
    uStack_48 = 0;
    local_50 = pvVar1;
    local_38 = param_3;
    TSet<TTuple<FName,FOnlineSessionSearchParam>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,FOnlineSessionSearchParam_&&>_>
              ((TSet<TTuple<FName,FOnlineSessionSearchParam>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>,FDefaultSetAllocator>
                *)&this->SearchParams,&local_res8,(bool *)&local_68);
    if (((local_58[0] == '\x06') || (local_58[0] == '\b')) || (local_58[0] == '\n')) {
      operator_delete__(local_50);
    }
  }
  else {
    TVar2 = (pFVar3->Data).Type;
    if (((TVar2 == String) || (TVar2 == Blob)) || (TVar2 == Json)) {
      operator_delete__((pFVar3->Data).Value.AsTCHAR);
    }
    (pFVar3->Data).Value.AsInt64 = 0;
    *(undefined8 *)((longlong)&(pFVar3->Data).Value + 8) = 0;
    (pFVar3->Data).CachedEstimatedMaxEscapedStringSize = 0;
    (pFVar3->Data).Value.AsDouble = (double)pvVar1;
    (pFVar3->Data).Type = Double;
    pFVar3->ComparisonOp = param_3;
    pFVar3->ID = param_4;
  }
  return;
}

// Set<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> @ 14eb2ca50

void __thiscall
FOnlineSearchSettings::Set<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
          (FOnlineSearchSettings *this,FName param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2,Type param_3)

{
  FOnlineSessionSearchParam *this_00;
  TPairInitializer<FName_const_&,FOnlineSessionSearchParam_&&> local_res8;
  FOnlineSessionSearchParam **local_58;
  FVariantData *local_50;
  FVariantData local_48;
  Type local_28;
  undefined4 local_24;
  
  local_res8.Value = (FOnlineSessionSearchParam *)param_1;
  this_00 = TMapBase<FName,FOnlineSessionSearchParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>_>
            ::Find((TMapBase<FName,FOnlineSessionSearchParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>_>
                    *)&this->SearchParams,param_1);
  if (this_00 != (FOnlineSessionSearchParam *)0x0) {
    FVariantData::SetValue
              (&this_00->Data,param_2->ArrayNum,(uchar *)(param_2->AllocatorInstance).Data);
    this_00->ComparisonOp = param_3;
    return;
  }
  FVariantData::FVariantData<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>(&local_48,param_2);
  local_58 = &local_res8.Value;
  local_50 = &local_48;
  local_24 = 0xffffffff;
  local_28 = param_3;
  TSet<TTuple<FName,FOnlineSessionSearchParam>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FOnlineSessionSearchParam_&&>_>
            ((TSet<TTuple<FName,FOnlineSessionSearchParam>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>,FDefaultSetAllocator>
              *)&this->SearchParams,&local_res8,(bool *)&local_58);
  if (((local_48.Type == String) || (local_48.Type == Blob)) || (local_48.Type == Json)) {
    operator_delete__(local_48.Value.AsTCHAR);
  }
  return;
}

// Set<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> @ 14eb2cb20

void __thiscall
FOnlineSearchSettings::Set<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
          (FOnlineSearchSettings *this,FName param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2,Type param_3,int param_4)

{
  FOnlineSessionSearchParam *this_00;
  TPairInitializer<FName_const_&,FOnlineSessionSearchParam_&&> local_res8;
  FOnlineSessionSearchParam **local_58;
  FVariantData *local_50;
  FVariantData local_48;
  Type local_28;
  int local_24;
  
  local_res8.Value = (FOnlineSessionSearchParam *)param_1;
  this_00 = TMapBase<FName,FOnlineSessionSearchParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>_>
            ::Find((TMapBase<FName,FOnlineSessionSearchParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>_>
                    *)&this->SearchParams,param_1);
  if (this_00 != (FOnlineSessionSearchParam *)0x0) {
    FVariantData::SetValue
              (&this_00->Data,param_2->ArrayNum,(uchar *)(param_2->AllocatorInstance).Data);
    this_00->ID = param_4;
    this_00->ComparisonOp = param_3;
    return;
  }
  FVariantData::FVariantData<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>(&local_48,param_2);
  local_24 = param_4;
  local_58 = &local_res8.Value;
  local_50 = &local_48;
  local_28 = param_3;
  TSet<TTuple<FName,FOnlineSessionSearchParam>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FOnlineSessionSearchParam_&&>_>
            ((TSet<TTuple<FName,FOnlineSessionSearchParam>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>,FDefaultSetAllocator>
              *)&this->SearchParams,&local_res8,(bool *)&local_58);
  if (((local_48.Type == String) || (local_48.Type == Blob)) || (local_48.Type == Json)) {
    operator_delete__(local_48.Value.AsTCHAR);
  }
  return;
}

// Set<FString> @ 14eb2cd70

void __thiscall
FOnlineSearchSettings::Set<FString>
          (FOnlineSearchSettings *this,FName param_1,FString *param_2,Type param_3)

{
  FOnlineSessionSearchParam *this_00;
  TPairInitializer<FName_const_&,FOnlineSessionSearchParam_&&> local_res8;
  FOnlineSessionSearchParam **local_58;
  FVariantData *local_50;
  FVariantData local_48;
  Type local_28;
  undefined4 local_24;
  
  local_res8.Value = (FOnlineSessionSearchParam *)param_1;
  this_00 = TMapBase<FName,FOnlineSessionSearchParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>_>
            ::Find((TMapBase<FName,FOnlineSessionSearchParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>_>
                    *)&this->SearchParams,param_1);
  if (this_00 == (FOnlineSessionSearchParam *)0x0) {
    FVariantData::FVariantData<FString>(&local_48,param_2);
    local_58 = &local_res8.Value;
    local_50 = &local_48;
    local_24 = 0xffffffff;
    local_28 = param_3;
    TSet<TTuple<FName,FOnlineSessionSearchParam>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,FOnlineSessionSearchParam_&&>_>
              ((TSet<TTuple<FName,FOnlineSessionSearchParam>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>,FDefaultSetAllocator>
                *)&this->SearchParams,&local_res8,(bool *)&local_58);
    if (((local_48.Type == String) || (local_48.Type == Blob)) || (local_48.Type == Json)) {
      operator_delete__(local_48.Value.AsTCHAR);
    }
    return;
  }
  if ((param_2->Data).ArrayNum != 0) {
    FVariantData::SetValue(&this_00->Data,(wchar_t *)(param_2->Data).AllocatorInstance.Data);
    this_00->ComparisonOp = param_3;
    return;
  }
  FVariantData::SetValue(&this_00->Data,L"");
  this_00->ComparisonOp = param_3;
  return;
}

// Set<FString> @ 14eb2ce60

void __thiscall
FOnlineSearchSettings::Set<FString>
          (FOnlineSearchSettings *this,FName param_1,FString *param_2,Type param_3,int param_4)

{
  FOnlineSessionSearchParam *this_00;
  wchar_t *pwVar1;
  TPairInitializer<FName_const_&,FOnlineSessionSearchParam_&&> local_res8;
  FOnlineSessionSearchParam **local_58;
  FVariantData *local_50;
  FVariantData local_48;
  Type local_28;
  int local_24;
  
  local_res8.Value = (FOnlineSessionSearchParam *)param_1;
  this_00 = TMapBase<FName,FOnlineSessionSearchParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>_>
            ::Find((TMapBase<FName,FOnlineSessionSearchParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>_>
                    *)&this->SearchParams,param_1);
  if (this_00 != (FOnlineSessionSearchParam *)0x0) {
    if ((param_2->Data).ArrayNum == 0) {
      pwVar1 = L"";
    }
    else {
      pwVar1 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    FVariantData::SetValue(&this_00->Data,pwVar1);
    this_00->ID = param_4;
    this_00->ComparisonOp = param_3;
    return;
  }
  FVariantData::FVariantData<FString>(&local_48,param_2);
  local_24 = param_4;
  local_58 = &local_res8.Value;
  local_50 = &local_48;
  local_28 = param_3;
  TSet<TTuple<FName,FOnlineSessionSearchParam>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FOnlineSessionSearchParam_&&>_>
            ((TSet<TTuple<FName,FOnlineSessionSearchParam>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>,FDefaultSetAllocator>
              *)&this->SearchParams,&local_res8,(bool *)&local_58);
  if (((local_48.Type == String) || (local_48.Type == Blob)) || (local_48.Type == Json)) {
    operator_delete__(local_48.Value.AsTCHAR);
  }
  return;
}

// Set<unsigned___int64> @ 14eb2d0e0

void __thiscall
FOnlineSearchSettings::Set<unsigned___int64>
          (FOnlineSearchSettings *this,FName param_1,ulong64 *param_2,Type param_3)

{
  Type TVar1;
  void *pvVar2;
  FOnlineSessionSearchParam *pFVar3;
  TPairInitializer<FName_const_&,FOnlineSessionSearchParam_&&> local_res8;
  FOnlineSessionSearchParam **local_58;
  char *local_50;
  char local_48 [8];
  void *local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  Type local_28;
  undefined4 local_24;
  
  local_res8.Value = (FOnlineSessionSearchParam *)param_1;
  pFVar3 = TMapBase<FName,FOnlineSessionSearchParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>_>
           ::Find((TMapBase<FName,FOnlineSessionSearchParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>_>
                   *)&this->SearchParams,param_1);
  pvVar2 = (void *)*param_2;
  if (pFVar3 != (FOnlineSessionSearchParam *)0x0) {
    TVar1 = (pFVar3->Data).Type;
    if (((TVar1 == String) || (TVar1 == Blob)) || (TVar1 == Json)) {
      operator_delete__((pFVar3->Data).Value.AsTCHAR);
    }
    (pFVar3->Data).Value.AsInt64 = 0;
    *(undefined8 *)((longlong)&(pFVar3->Data).Value + 8) = 0;
    (pFVar3->Data).CachedEstimatedMaxEscapedStringSize = 0;
    (pFVar3->Data).Type = UInt64;
    (pFVar3->Data).Value.AsUInt64 = (ulong64)pvVar2;
    pFVar3->ComparisonOp = param_3;
    return;
  }
  local_58 = &local_res8.Value;
  local_30 = 0;
  local_48[0] = '\x04';
  local_50 = local_48;
  uStack_38 = 0;
  local_24 = 0xffffffff;
  local_40 = pvVar2;
  local_28 = param_3;
  TSet<TTuple<FName,FOnlineSessionSearchParam>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FOnlineSessionSearchParam_&&>_>
            ((TSet<TTuple<FName,FOnlineSessionSearchParam>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>,FDefaultSetAllocator>
              *)&this->SearchParams,&local_res8,(bool *)&local_58);
  if (((local_48[0] == '\x06') || (local_48[0] == '\b')) || (local_48[0] == '\n')) {
    operator_delete__(local_40);
  }
  return;
}

// Set<unsigned___int64> @ 14eb2d1e0

void __thiscall
FOnlineSearchSettings::Set<unsigned___int64>
          (FOnlineSearchSettings *this,FName param_1,ulong64 *param_2,Type param_3,int param_4)

{
  Type TVar1;
  void *pvVar2;
  FOnlineSessionSearchParam *pFVar3;
  TPairInitializer<FName_const_&,FOnlineSessionSearchParam_&&> local_res8;
  FOnlineSessionSearchParam **local_58;
  char *local_50;
  char local_48 [8];
  void *local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  Type local_28;
  int local_24;
  
  local_res8.Value = (FOnlineSessionSearchParam *)param_1;
  pFVar3 = TMapBase<FName,FOnlineSessionSearchParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>_>
           ::Find((TMapBase<FName,FOnlineSessionSearchParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>_>
                   *)&this->SearchParams,param_1);
  pvVar2 = (void *)*param_2;
  if (pFVar3 != (FOnlineSessionSearchParam *)0x0) {
    TVar1 = (pFVar3->Data).Type;
    if (((TVar1 == String) || (TVar1 == Blob)) || (TVar1 == Json)) {
      operator_delete__((pFVar3->Data).Value.AsTCHAR);
    }
    (pFVar3->Data).Value.AsInt64 = 0;
    *(undefined8 *)((longlong)&(pFVar3->Data).Value + 8) = 0;
    (pFVar3->Data).CachedEstimatedMaxEscapedStringSize = 0;
    (pFVar3->Data).Type = UInt64;
    (pFVar3->Data).Value.AsUInt64 = (ulong64)pvVar2;
    pFVar3->ComparisonOp = param_3;
    pFVar3->ID = param_4;
    return;
  }
  local_24 = param_4;
  local_58 = &local_res8.Value;
  local_30 = 0;
  local_50 = local_48;
  local_48[0] = '\x04';
  uStack_38 = 0;
  local_40 = pvVar2;
  local_28 = param_3;
  TSet<TTuple<FName,FOnlineSessionSearchParam>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FOnlineSessionSearchParam_&&>_>
            ((TSet<TTuple<FName,FOnlineSessionSearchParam>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>,FDefaultSetAllocator>
              *)&this->SearchParams,&local_res8,(bool *)&local_58);
  if (((local_48[0] == '\x06') || (local_48[0] == '\b')) || (local_48[0] == '\n')) {
    operator_delete__(local_40);
  }
  return;
}

// Set<bool> @ 14eb2d4c0

void __thiscall
FOnlineSearchSettings::Set<bool>
          (FOnlineSearchSettings *this,FName param_1,bool *param_2,Type param_3)

{
  bool bVar1;
  Type TVar2;
  FOnlineSessionSearchParam *pFVar3;
  TPairInitializer<FName_const_&,FOnlineSessionSearchParam_&&> local_res8;
  FOnlineSessionSearchParam **local_58;
  char *local_50;
  char local_48 [8];
  void *local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  Type local_28;
  undefined4 local_24;
  
  local_res8.Value = (FOnlineSessionSearchParam *)param_1;
  pFVar3 = TMapBase<FName,FOnlineSessionSearchParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>_>
           ::Find((TMapBase<FName,FOnlineSessionSearchParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>_>
                   *)&this->SearchParams,param_1);
  bVar1 = *param_2;
  if (pFVar3 != (FOnlineSessionSearchParam *)0x0) {
    TVar2 = (pFVar3->Data).Type;
    if (((TVar2 == String) || (TVar2 == Blob)) || (TVar2 == Json)) {
      operator_delete__((pFVar3->Data).Value.AsTCHAR);
    }
    (pFVar3->Data).Value.AsInt64 = 0;
    *(undefined8 *)((longlong)&(pFVar3->Data).Value + 8) = 0;
    (pFVar3->Data).CachedEstimatedMaxEscapedStringSize = 0;
    (pFVar3->Data).Type = Bool;
    (pFVar3->Data).Value.AsBool = bVar1;
    pFVar3->ComparisonOp = param_3;
    return;
  }
  local_58 = &local_res8.Value;
  local_30 = 0;
  local_48[0] = '\t';
  local_50 = local_48;
  uStack_38 = 0;
  local_40 = (void *)(ulonglong)bVar1;
  local_24 = 0xffffffff;
  local_28 = param_3;
  TSet<TTuple<FName,FOnlineSessionSearchParam>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FOnlineSessionSearchParam_&&>_>
            ((TSet<TTuple<FName,FOnlineSessionSearchParam>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>,FDefaultSetAllocator>
              *)&this->SearchParams,&local_res8,(bool *)&local_58);
  if (((local_48[0] == '\x06') || (local_48[0] == '\b')) || (local_48[0] == '\n')) {
    operator_delete__(local_40);
  }
  return;
}

// Set<bool> @ 14eb2d5c0

void __thiscall
FOnlineSearchSettings::Set<bool>
          (FOnlineSearchSettings *this,FName param_1,bool *param_2,Type param_3,int param_4)

{
  bool bVar1;
  Type TVar2;
  FOnlineSessionSearchParam *pFVar3;
  TPairInitializer<FName_const_&,FOnlineSessionSearchParam_&&> local_res8;
  FOnlineSessionSearchParam **local_58;
  char *local_50;
  char local_48 [8];
  void *local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  Type local_28;
  int local_24;
  
  local_res8.Value = (FOnlineSessionSearchParam *)param_1;
  pFVar3 = TMapBase<FName,FOnlineSessionSearchParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>_>
           ::Find((TMapBase<FName,FOnlineSessionSearchParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>_>
                   *)&this->SearchParams,param_1);
  bVar1 = *param_2;
  if (pFVar3 != (FOnlineSessionSearchParam *)0x0) {
    TVar2 = (pFVar3->Data).Type;
    if (((TVar2 == String) || (TVar2 == Blob)) || (TVar2 == Json)) {
      operator_delete__((pFVar3->Data).Value.AsTCHAR);
    }
    (pFVar3->Data).Value.AsInt64 = 0;
    *(undefined8 *)((longlong)&(pFVar3->Data).Value + 8) = 0;
    (pFVar3->Data).CachedEstimatedMaxEscapedStringSize = 0;
    (pFVar3->Data).Type = Bool;
    (pFVar3->Data).Value.AsBool = bVar1;
    pFVar3->ComparisonOp = param_3;
    pFVar3->ID = param_4;
    return;
  }
  local_24 = param_4;
  local_58 = &local_res8.Value;
  local_30 = 0;
  local_50 = local_48;
  local_48[0] = '\t';
  uStack_38 = 0;
  local_40 = (void *)(ulonglong)bVar1;
  local_28 = param_3;
  TSet<TTuple<FName,FOnlineSessionSearchParam>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FOnlineSessionSearchParam_&&>_>
            ((TSet<TTuple<FName,FOnlineSessionSearchParam>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>,FDefaultSetAllocator>
              *)&this->SearchParams,&local_res8,(bool *)&local_58);
  if (((local_48[0] == '\x06') || (local_48[0] == '\b')) || (local_48[0] == '\n')) {
    operator_delete__(local_40);
  }
  return;
}

// GetComparisonOp @ 14ebff7a0

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall FOnlineSearchSettings::GetComparisonOp(FOnlineSearchSettings *this,FName param_1)

{
  FOnlineSessionSearchParam *pFVar1;
  FName local_res10 [3];
  FString local_28;
  FString local_18;
  
  local_res10[0] = param_1;
  pFVar1 = TMapBase<FName,FOnlineSessionSearchParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>_>
           ::Find((TMapBase<FName,FOnlineSessionSearchParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>_>
                   *)&this->SearchParams,param_1);
  if (pFVar1 != (FOnlineSessionSearchParam *)0x0) {
    return pFVar1->ComparisonOp;
  }
  if (2 < (byte)LogOnlineSession._0_1_) {
    ::FName::ToString(local_res10,&local_18);
    ::FString::PrintfImpl(&local_28,L"Unable to find key for comparison op request: %s");
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSession);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return Equals;
}

