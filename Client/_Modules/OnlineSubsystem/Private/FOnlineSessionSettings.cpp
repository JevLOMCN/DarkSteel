// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 25

// Get<int> @ 14eb2aee0

bool __thiscall
FOnlineSessionSettings::Get<int>(FOnlineSessionSettings *this,FName param_1,int *param_2)

{
  FOnlineSessionSetting *pFVar1;
  
  pFVar1 = TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
           ::Find((TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
                   *)&this->Settings,param_1);
  if (pFVar1 == (FOnlineSessionSetting *)0x0) {
    return false;
  }
  if ((pFVar1->Data).Type == Int32) {
    *param_2 = (pFVar1->Data).Value.AsInt;
    return true;
  }
  *param_2 = 0;
  return true;
}

// Get<float> @ 14eb2af80

bool __thiscall
FOnlineSessionSettings::Get<float>(FOnlineSessionSettings *this,FName param_1,float *param_2)

{
  FOnlineSessionSetting *pFVar1;
  
  pFVar1 = TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
           ::Find((TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
                   *)&this->Settings,param_1);
  if (pFVar1 == (FOnlineSessionSetting *)0x0) {
    return false;
  }
  if ((pFVar1->Data).Type == Float) {
    *param_2 = (float)(pFVar1->Data).Value.AsInt;
    return true;
  }
  *param_2 = 0.0;
  return true;
}

// Get<double> @ 14eb2b020

bool __thiscall
FOnlineSessionSettings::Get<double>(FOnlineSessionSettings *this,FName param_1,double *param_2)

{
  FOnlineSessionSetting *pFVar1;
  
  pFVar1 = TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
           ::Find((TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
                   *)&this->Settings,param_1);
  if (pFVar1 == (FOnlineSessionSetting *)0x0) {
    return false;
  }
  if ((pFVar1->Data).Type == Double) {
    *param_2 = (double)(pFVar1->Data).Value.AsInt64;
    return true;
  }
  *param_2 = 0.0;
  return true;
}

// Get<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> @ 14eb2b0b0

bool __thiscall
FOnlineSessionSettings::Get<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
          (FOnlineSessionSettings *this,FName param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  FOnlineSessionSetting *this_00;
  
  this_00 = TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
            ::Find((TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
                    *)&this->Settings,param_1);
  if (this_00 != (FOnlineSessionSetting *)0x0) {
    FVariantData::GetValue(&this_00->Data,param_2);
    return true;
  }
  return false;
}

// Get<FString> @ 14eb2b150

bool __thiscall
FOnlineSessionSettings::Get<FString>(FOnlineSessionSettings *this,FName param_1,FString *param_2)

{
  Type TVar1;
  wchar_t *pwVar2;
  FOnlineSessionSetting *pFVar3;
  
  pFVar3 = TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
           ::Find((TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
                   *)&this->Settings,param_1);
  if (pFVar3 == (FOnlineSessionSetting *)0x0) {
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

// Get<unsigned___int64> @ 14eb2b200

bool __thiscall
FOnlineSessionSettings::Get<unsigned___int64>
          (FOnlineSessionSettings *this,FName param_1,ulong64 *param_2)

{
  FOnlineSessionSetting *pFVar1;
  
  pFVar1 = TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
           ::Find((TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
                   *)&this->Settings,param_1);
  if (pFVar1 == (FOnlineSessionSetting *)0x0) {
    return false;
  }
  if ((pFVar1->Data).Type == UInt64) {
    *param_2 = (pFVar1->Data).Value.AsInt64;
    return true;
  }
  *param_2 = 0;
  return true;
}

// Get<bool> @ 14eb2b2a0

bool __thiscall
FOnlineSessionSettings::Get<bool>(FOnlineSessionSettings *this,FName param_1,bool *param_2)

{
  FOnlineSessionSetting *pFVar1;
  
  pFVar1 = TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
           ::Find((TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
                   *)&this->Settings,param_1);
  if (pFVar1 == (FOnlineSessionSetting *)0x0) {
    return false;
  }
  if ((pFVar1->Data).Type == Bool) {
    *param_2 = (pFVar1->Data).Value.AsBool;
    return true;
  }
  *param_2 = false;
  return true;
}

// Set<int> @ 14eb2c0a0

void __thiscall
FOnlineSessionSettings::Set<int>
          (FOnlineSessionSettings *this,FName param_1,int *param_2,Type param_3)

{
  Type TVar1;
  uint uVar2;
  FOnlineSessionSetting *pFVar3;
  FName local_res10;
  FOnlineSessionSetting local_38;
  
  local_res10 = param_1;
  pFVar3 = TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
           ::Find((TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
                   *)&this->Settings,param_1);
  uVar2 = *param_2;
  if (pFVar3 == (FOnlineSessionSetting *)0x0) {
    local_38.Data.CachedEstimatedMaxEscapedStringSize = 0;
    local_38.Data.Value._8_8_ = 0;
    local_38.Data.Value.AsInt64._4_4_ = 0;
    local_38.Data.Value.AsInt = uVar2;
    local_38.Data.Type = Int32;
    local_38.ID = -1;
    local_38.AdvertisementType = param_3;
    TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
    ::Emplace<FName_const_&,FOnlineSessionSetting>
              ((TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
                *)&this->Settings,&local_res10,&local_38);
    if (((local_38.Data.Type == String) || (local_38.Data.Type == Blob)) ||
       (local_38.Data.Type == Json)) {
      operator_delete__(local_38.Data.Value.AsTCHAR);
    }
  }
  else {
    TVar1 = (pFVar3->Data).Type;
    if (((TVar1 == String) || (TVar1 == Blob)) || (TVar1 == Json)) {
      operator_delete__((pFVar3->Data).Value.AsTCHAR);
    }
    (pFVar3->Data).Value.AsInt64 = 0;
    *(undefined8 *)((longlong)&(pFVar3->Data).Value + 8) = 0;
    (pFVar3->Data).CachedEstimatedMaxEscapedStringSize = 0;
    (pFVar3->Data).Type = Int32;
    (pFVar3->Data).Value.AsInt = uVar2;
    pFVar3->AdvertisementType = param_3;
  }
  return;
}

// Set<int> @ 14eb2c180

void __thiscall
FOnlineSessionSettings::Set<int>
          (FOnlineSessionSettings *this,FName param_1,int *param_2,Type param_3,int param_4)

{
  Type TVar1;
  uint uVar2;
  FOnlineSessionSetting *pFVar3;
  FName local_res10;
  FOnlineSessionSetting local_38;
  
  local_res10 = param_1;
  pFVar3 = TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
           ::Find((TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
                   *)&this->Settings,param_1);
  uVar2 = *param_2;
  if (pFVar3 == (FOnlineSessionSetting *)0x0) {
    local_38.Data.CachedEstimatedMaxEscapedStringSize = 0;
    local_38.Data.Value._8_8_ = 0;
    local_38.Data.Value.AsInt64._4_4_ = 0;
    local_38.Data.Value.AsInt = uVar2;
    local_38.Data.Type = Int32;
    local_38.ID = param_4;
    local_38.AdvertisementType = param_3;
    TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
    ::Emplace<FName_const_&,FOnlineSessionSetting>
              ((TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
                *)&this->Settings,&local_res10,&local_38);
    if (((local_38.Data.Type == String) || (local_38.Data.Type == Blob)) ||
       (local_38.Data.Type == Json)) {
      operator_delete__(local_38.Data.Value.AsTCHAR);
    }
  }
  else {
    TVar1 = (pFVar3->Data).Type;
    if (((TVar1 == String) || (TVar1 == Blob)) || (TVar1 == Json)) {
      operator_delete__((pFVar3->Data).Value.AsTCHAR);
    }
    (pFVar3->Data).Value.AsInt64 = 0;
    *(undefined8 *)((longlong)&(pFVar3->Data).Value + 8) = 0;
    (pFVar3->Data).CachedEstimatedMaxEscapedStringSize = 0;
    (pFVar3->Data).Type = Int32;
    (pFVar3->Data).Value.AsInt = uVar2;
    pFVar3->AdvertisementType = param_3;
    pFVar3->ID = param_4;
  }
  return;
}

// Set<float> @ 14eb2c470

void __thiscall
FOnlineSessionSettings::Set<float>
          (FOnlineSessionSettings *this,FName param_1,float *param_2,Type param_3)

{
  float fVar1;
  Type TVar2;
  FOnlineSessionSetting *pFVar3;
  FName local_res10;
  FOnlineSessionSetting local_48;
  
  local_res10 = param_1;
  pFVar3 = TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
           ::Find((TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
                   *)&this->Settings,param_1);
  fVar1 = *param_2;
  if (pFVar3 == (FOnlineSessionSetting *)0x0) {
    local_48.Data.CachedEstimatedMaxEscapedStringSize = 0;
    local_48.Data.Value._8_8_ = 0;
    local_48.Data.Value.AsInt64._4_4_ = 0;
    local_48.Data.Value.AsFloat = fVar1;
    local_48.Data.Type = Float;
    local_48.ID = -1;
    local_48.AdvertisementType = param_3;
    TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
    ::Emplace<FName_const_&,FOnlineSessionSetting>
              ((TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
                *)&this->Settings,&local_res10,&local_48);
    if (((local_48.Data.Type == String) || (local_48.Data.Type == Blob)) ||
       (local_48.Data.Type == Json)) {
      operator_delete__(local_48.Data.Value.AsTCHAR);
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
    pFVar3->AdvertisementType = param_3;
  }
  return;
}

// Set<float> @ 14eb2c560

void __thiscall
FOnlineSessionSettings::Set<float>
          (FOnlineSessionSettings *this,FName param_1,float *param_2,Type param_3,int param_4)

{
  float fVar1;
  Type TVar2;
  FOnlineSessionSetting *pFVar3;
  FName local_res10;
  FOnlineSessionSetting local_48;
  
  local_res10 = param_1;
  pFVar3 = TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
           ::Find((TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
                   *)&this->Settings,param_1);
  fVar1 = *param_2;
  if (pFVar3 == (FOnlineSessionSetting *)0x0) {
    local_48.Data.CachedEstimatedMaxEscapedStringSize = 0;
    local_48.Data.Value._8_8_ = 0;
    local_48.Data.Value.AsInt64._4_4_ = 0;
    local_48.Data.Value.AsFloat = fVar1;
    local_48.Data.Type = Float;
    local_48.ID = param_4;
    local_48.AdvertisementType = param_3;
    TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
    ::Emplace<FName_const_&,FOnlineSessionSetting>
              ((TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
                *)&this->Settings,&local_res10,&local_48);
    if (((local_48.Data.Type == String) || (local_48.Data.Type == Blob)) ||
       (local_48.Data.Type == Json)) {
      operator_delete__(local_48.Data.Value.AsTCHAR);
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
    pFVar3->AdvertisementType = param_3;
    pFVar3->ID = param_4;
  }
  return;
}

// Set<double> @ 14eb2c860

void __thiscall
FOnlineSessionSettings::Set<double>
          (FOnlineSessionSettings *this,FName param_1,double *param_2,Type param_3)

{
  void *pvVar1;
  Type TVar2;
  FOnlineSessionSetting *pFVar3;
  FName local_res10;
  FOnlineSessionSetting local_48;
  
  local_res10 = param_1;
  pFVar3 = TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
           ::Find((TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
                   *)&this->Settings,param_1);
  pvVar1 = (void *)*param_2;
  if (pFVar3 == (FOnlineSessionSetting *)0x0) {
    local_48.Data.CachedEstimatedMaxEscapedStringSize = 0;
    local_48.Data.Value._8_8_ = 0;
    local_48.Data.Type = Double;
    local_48.ID = -1;
    local_48.Data.Value.AsInt64 = (long64)pvVar1;
    local_48.AdvertisementType = param_3;
    TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
    ::Emplace<FName_const_&,FOnlineSessionSetting>
              ((TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
                *)&this->Settings,&local_res10,&local_48);
    if (((local_48.Data.Type == String) || (local_48.Data.Type == Blob)) ||
       (local_48.Data.Type == Json)) {
      operator_delete__(local_48.Data.Value.AsTCHAR);
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
    pFVar3->AdvertisementType = param_3;
  }
  return;
}

// Set<double> @ 14eb2c950

void __thiscall
FOnlineSessionSettings::Set<double>
          (FOnlineSessionSettings *this,FName param_1,double *param_2,Type param_3,int param_4)

{
  void *pvVar1;
  Type TVar2;
  FOnlineSessionSetting *pFVar3;
  FName local_res10;
  FOnlineSessionSetting local_48;
  
  local_res10 = param_1;
  pFVar3 = TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
           ::Find((TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
                   *)&this->Settings,param_1);
  pvVar1 = (void *)*param_2;
  if (pFVar3 == (FOnlineSessionSetting *)0x0) {
    local_48.Data.CachedEstimatedMaxEscapedStringSize = 0;
    local_48.Data.Value._8_8_ = 0;
    local_48.Data.Type = Double;
    local_48.ID = param_4;
    local_48.Data.Value.AsInt64 = (long64)pvVar1;
    local_48.AdvertisementType = param_3;
    TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
    ::Emplace<FName_const_&,FOnlineSessionSetting>
              ((TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
                *)&this->Settings,&local_res10,&local_48);
    if (((local_48.Data.Type == String) || (local_48.Data.Type == Blob)) ||
       (local_48.Data.Type == Json)) {
      operator_delete__(local_48.Data.Value.AsTCHAR);
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
    pFVar3->AdvertisementType = param_3;
    pFVar3->ID = param_4;
  }
  return;
}

// Set<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> @ 14eb2cc00

void __thiscall
FOnlineSessionSettings::Set<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
          (FOnlineSessionSettings *this,FName param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2,Type param_3)

{
  FOnlineSessionSetting *this_00;
  FName local_res10;
  FOnlineSessionSetting local_38;
  
  local_res10 = param_1;
  this_00 = TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
            ::Find((TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
                    *)&this->Settings,param_1);
  if (this_00 == (FOnlineSessionSetting *)0x0) {
    FVariantData::FVariantData<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
              (&local_38.Data,param_2);
    local_38.ID = -1;
    local_38.AdvertisementType = param_3;
    TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
    ::Emplace<FName_const_&,FOnlineSessionSetting>
              ((TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
                *)&this->Settings,&local_res10,&local_38);
    if (((local_38.Data.Type == String) || (local_38.Data.Type == Blob)) ||
       (local_38.Data.Type == Json)) {
      operator_delete__(local_38.Data.Value.AsTCHAR);
    }
  }
  else {
    FVariantData::SetValue
              (&this_00->Data,param_2->ArrayNum,(uchar *)(param_2->AllocatorInstance).Data);
    this_00->AdvertisementType = param_3;
  }
  return;
}

// Set<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> @ 14eb2ccb0

void __thiscall
FOnlineSessionSettings::Set<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
          (FOnlineSessionSettings *this,FName param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2,Type param_3,int param_4)

{
  FOnlineSessionSetting *this_00;
  FName local_res10;
  FOnlineSessionSetting local_38;
  
  local_res10 = param_1;
  this_00 = TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
            ::Find((TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
                    *)&this->Settings,param_1);
  if (this_00 == (FOnlineSessionSetting *)0x0) {
    FVariantData::FVariantData<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
              (&local_38.Data,param_2);
    local_38.ID = param_4;
    local_38.AdvertisementType = param_3;
    TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
    ::Emplace<FName_const_&,FOnlineSessionSetting>
              ((TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
                *)&this->Settings,&local_res10,&local_38);
    if (((local_38.Data.Type == String) || (local_38.Data.Type == Blob)) ||
       (local_38.Data.Type == Json)) {
      operator_delete__(local_38.Data.Value.AsTCHAR);
    }
  }
  else {
    FVariantData::SetValue
              (&this_00->Data,param_2->ArrayNum,(uchar *)(param_2->AllocatorInstance).Data);
    this_00->ID = param_4;
    this_00->AdvertisementType = param_3;
  }
  return;
}

// Set<FString> @ 14eb2cf40

void __thiscall
FOnlineSessionSettings::Set<FString>
          (FOnlineSessionSettings *this,FName param_1,FString *param_2,Type param_3)

{
  FOnlineSessionSetting *this_00;
  FName local_res10;
  FOnlineSessionSetting local_38;
  
  local_res10 = param_1;
  this_00 = TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
            ::Find((TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
                    *)&this->Settings,param_1);
  if (this_00 == (FOnlineSessionSetting *)0x0) {
    FVariantData::FVariantData<FString>(&local_38.Data,param_2);
    local_38.ID = -1;
    local_38.AdvertisementType = param_3;
    TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
    ::Emplace<FName_const_&,FOnlineSessionSetting>
              ((TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
                *)&this->Settings,&local_res10,&local_38);
    if (((local_38.Data.Type == String) || (local_38.Data.Type == Blob)) ||
       (local_38.Data.Type == Json)) {
      operator_delete__(local_38.Data.Value.AsTCHAR);
    }
  }
  else if ((param_2->Data).ArrayNum == 0) {
    FVariantData::SetValue(&this_00->Data,L"");
    this_00->AdvertisementType = param_3;
  }
  else {
    FVariantData::SetValue(&this_00->Data,(wchar_t *)(param_2->Data).AllocatorInstance.Data);
    this_00->AdvertisementType = param_3;
  }
  return;
}

// Set<FString> @ 14eb2d010

void __thiscall
FOnlineSessionSettings::Set<FString>
          (FOnlineSessionSettings *this,FName param_1,FString *param_2,Type param_3,int param_4)

{
  FOnlineSessionSetting *this_00;
  wchar_t *pwVar1;
  FName local_res10;
  FOnlineSessionSetting local_38;
  
  local_res10 = param_1;
  this_00 = TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
            ::Find((TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
                    *)&this->Settings,param_1);
  if (this_00 == (FOnlineSessionSetting *)0x0) {
    FVariantData::FVariantData<FString>(&local_38.Data,param_2);
    local_38.ID = param_4;
    local_38.AdvertisementType = param_3;
    TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
    ::Emplace<FName_const_&,FOnlineSessionSetting>
              ((TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
                *)&this->Settings,&local_res10,&local_38);
    if (((local_38.Data.Type == String) || (local_38.Data.Type == Blob)) ||
       (local_38.Data.Type == Json)) {
      operator_delete__(local_38.Data.Value.AsTCHAR);
    }
  }
  else {
    if ((param_2->Data).ArrayNum == 0) {
      pwVar1 = L"";
    }
    else {
      pwVar1 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    FVariantData::SetValue(&this_00->Data,pwVar1);
    this_00->ID = param_4;
    this_00->AdvertisementType = param_3;
  }
  return;
}

// Set<unsigned___int64> @ 14eb2d2f0

void __thiscall
FOnlineSessionSettings::Set<unsigned___int64>
          (FOnlineSessionSettings *this,FName param_1,ulong64 *param_2,Type param_3)

{
  Type TVar1;
  void *pvVar2;
  FOnlineSessionSetting *pFVar3;
  FName local_res10;
  FOnlineSessionSetting local_38;
  
  local_res10 = param_1;
  pFVar3 = TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
           ::Find((TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
                   *)&this->Settings,param_1);
  pvVar2 = (void *)*param_2;
  if (pFVar3 == (FOnlineSessionSetting *)0x0) {
    local_38.Data.CachedEstimatedMaxEscapedStringSize = 0;
    local_38.Data.Value._8_8_ = 0;
    local_38.Data.Type = UInt64;
    local_38.ID = -1;
    local_38.Data.Value.AsInt64 = (long64)pvVar2;
    local_38.AdvertisementType = param_3;
    TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
    ::Emplace<FName_const_&,FOnlineSessionSetting>
              ((TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
                *)&this->Settings,&local_res10,&local_38);
    if (((local_38.Data.Type == String) || (local_38.Data.Type == Blob)) ||
       (local_38.Data.Type == Json)) {
      operator_delete__(local_38.Data.Value.AsTCHAR);
    }
  }
  else {
    TVar1 = (pFVar3->Data).Type;
    if (((TVar1 == String) || (TVar1 == Blob)) || (TVar1 == Json)) {
      operator_delete__((pFVar3->Data).Value.AsTCHAR);
    }
    (pFVar3->Data).Value.AsInt64 = 0;
    *(undefined8 *)((longlong)&(pFVar3->Data).Value + 8) = 0;
    (pFVar3->Data).CachedEstimatedMaxEscapedStringSize = 0;
    (pFVar3->Data).Type = UInt64;
    (pFVar3->Data).Value.AsUInt64 = (ulong64)pvVar2;
    pFVar3->AdvertisementType = param_3;
  }
  return;
}

// Set<unsigned___int64> @ 14eb2d3d0

void __thiscall
FOnlineSessionSettings::Set<unsigned___int64>
          (FOnlineSessionSettings *this,FName param_1,ulong64 *param_2,Type param_3,int param_4)

{
  Type TVar1;
  void *pvVar2;
  FOnlineSessionSetting *pFVar3;
  FName local_res10;
  FOnlineSessionSetting local_38;
  
  local_res10 = param_1;
  pFVar3 = TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
           ::Find((TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
                   *)&this->Settings,param_1);
  pvVar2 = (void *)*param_2;
  if (pFVar3 == (FOnlineSessionSetting *)0x0) {
    local_38.Data.CachedEstimatedMaxEscapedStringSize = 0;
    local_38.Data.Value._8_8_ = 0;
    local_38.Data.Type = UInt64;
    local_38.ID = param_4;
    local_38.Data.Value.AsInt64 = (long64)pvVar2;
    local_38.AdvertisementType = param_3;
    TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
    ::Emplace<FName_const_&,FOnlineSessionSetting>
              ((TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
                *)&this->Settings,&local_res10,&local_38);
    if (((local_38.Data.Type == String) || (local_38.Data.Type == Blob)) ||
       (local_38.Data.Type == Json)) {
      operator_delete__(local_38.Data.Value.AsTCHAR);
    }
  }
  else {
    TVar1 = (pFVar3->Data).Type;
    if (((TVar1 == String) || (TVar1 == Blob)) || (TVar1 == Json)) {
      operator_delete__((pFVar3->Data).Value.AsTCHAR);
    }
    (pFVar3->Data).Value.AsInt64 = 0;
    *(undefined8 *)((longlong)&(pFVar3->Data).Value + 8) = 0;
    (pFVar3->Data).CachedEstimatedMaxEscapedStringSize = 0;
    (pFVar3->Data).Type = UInt64;
    (pFVar3->Data).Value.AsUInt64 = (ulong64)pvVar2;
    pFVar3->AdvertisementType = param_3;
    pFVar3->ID = param_4;
  }
  return;
}

// Set<bool> @ 14eb2d6c0

void __thiscall
FOnlineSessionSettings::Set<bool>
          (FOnlineSessionSettings *this,FName param_1,bool *param_2,Type param_3)

{
  bool bVar1;
  Type TVar2;
  FOnlineSessionSetting *pFVar3;
  FName local_res10;
  FOnlineSessionSetting local_38;
  
  local_res10 = param_1;
  pFVar3 = TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
           ::Find((TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
                   *)&this->Settings,param_1);
  bVar1 = *param_2;
  if (pFVar3 == (FOnlineSessionSetting *)0x0) {
    local_38.Data.CachedEstimatedMaxEscapedStringSize = 0;
    local_38.Data.Value._8_8_ = 0;
    local_38.Data.Value.AsInt64._1_7_ = 0;
    local_38.Data.Value.AsBool = bVar1;
    local_38.Data.Type = Bool;
    local_38.ID = -1;
    local_38.AdvertisementType = param_3;
    TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
    ::Emplace<FName_const_&,FOnlineSessionSetting>
              ((TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
                *)&this->Settings,&local_res10,&local_38);
    if (((local_38.Data.Type == String) || (local_38.Data.Type == Blob)) ||
       (local_38.Data.Type == Json)) {
      operator_delete__(local_38.Data.Value.AsTCHAR);
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
    (pFVar3->Data).Type = Bool;
    (pFVar3->Data).Value.AsBool = bVar1;
    pFVar3->AdvertisementType = param_3;
  }
  return;
}

// Set<bool> @ 14eb2d7a0

void __thiscall
FOnlineSessionSettings::Set<bool>
          (FOnlineSessionSettings *this,FName param_1,bool *param_2,Type param_3,int param_4)

{
  bool bVar1;
  Type TVar2;
  FOnlineSessionSetting *pFVar3;
  FName local_res10;
  FOnlineSessionSetting local_38;
  
  local_res10 = param_1;
  pFVar3 = TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
           ::Find((TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
                   *)&this->Settings,param_1);
  bVar1 = *param_2;
  if (pFVar3 == (FOnlineSessionSetting *)0x0) {
    local_38.Data.CachedEstimatedMaxEscapedStringSize = 0;
    local_38.Data.Value._8_8_ = 0;
    local_38.Data.Value.AsInt64._1_7_ = 0;
    local_38.Data.Value.AsBool = bVar1;
    local_38.Data.Type = Bool;
    local_38.ID = param_4;
    local_38.AdvertisementType = param_3;
    TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
    ::Emplace<FName_const_&,FOnlineSessionSetting>
              ((TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
                *)&this->Settings,&local_res10,&local_38);
    if (((local_38.Data.Type == String) || (local_38.Data.Type == Blob)) ||
       (local_38.Data.Type == Json)) {
      operator_delete__(local_38.Data.Value.AsTCHAR);
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
    (pFVar3->Data).Type = Bool;
    (pFVar3->Data).Value.AsBool = bVar1;
    pFVar3->AdvertisementType = param_3;
    pFVar3->ID = param_4;
  }
  return;
}

// GetAdvertisementType @ 14ebfd530

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
FOnlineSessionSettings::GetAdvertisementType(FOnlineSessionSettings *this,FName param_1)

{
  FOnlineSessionSetting *pFVar1;
  FName local_res10 [3];
  FString local_28;
  FString local_18;
  
  local_res10[0] = param_1;
  pFVar1 = TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
           ::Find((TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
                   *)&this->Settings,param_1);
  if (pFVar1 != (FOnlineSessionSetting *)0x0) {
    return pFVar1->AdvertisementType;
  }
  if (2 < (byte)LogOnlineSession._0_1_) {
    ::FName::ToString(local_res10,&local_18);
    ::FString::PrintfImpl(&local_28,L"Unable to find key for advertisement type request: %s");
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSession);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return DontAdvertise;
}

// GetID @ 14ec00520

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall FOnlineSessionSettings::GetID(FOnlineSessionSettings *this,FName param_1)

{
  FOnlineSessionSetting *pFVar1;
  FName local_res10 [3];
  FString local_28;
  FString local_18;
  
  local_res10[0] = param_1;
  pFVar1 = TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
           ::Find((TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
                   *)&this->Settings,param_1);
  if (pFVar1 != (FOnlineSessionSetting *)0x0) {
    return pFVar1->ID;
  }
  if (2 < (byte)LogOnlineSession._0_1_) {
    ::FName::ToString(local_res10,&local_18);
    ::FString::PrintfImpl(&local_28,L"Unable to find key for ID request: %s");
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSession);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return -1;
}

// Remove @ 14ec0fc50

bool __thiscall FOnlineSessionSettings::Remove(FOnlineSessionSettings *this,FName param_1)

{
  uint uVar1;
  int iVar2;
  FName local_res8;
  FName local_res10;
  
  if (*(int *)&(this->Settings).field_0x8 != *(int *)&(this->Settings).field_0x34) {
    local_res8 = param_1;
    local_res10 = param_1;
    uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    iVar2 = TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
            ::RemoveImpl<FName>((TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
                                 *)&this->Settings,local_res10.Number + uVar1,&local_res8);
    return 0 < iVar2;
  }
  return false;
}

// Set @ 14ec119c0

void __thiscall
FOnlineSessionSettings::Set
          (FOnlineSessionSettings *this,FName param_1,FOnlineSessionSetting *param_2)

{
  FOnlineSessionSetting *this_00;
  FName local_res10;
  
  local_res10 = param_1;
  this_00 = TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
            ::Find((TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
                    *)&this->Settings,param_1);
  if (this_00 != (FOnlineSessionSetting *)0x0) {
    FVariantData::operator=(&this_00->Data,&param_2->Data);
    this_00->AdvertisementType = param_2->AdvertisementType;
    return;
  }
  TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
  ::Emplace<FName_const_&,FOnlineSessionSetting_const_&>
            ((TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
              *)&this->Settings,&local_res10,param_2);
  return;
}

