// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GlobalConfigurationData
// Functions: 5

// GetDataWithDefault<int> @ 14e9bb170

int __cdecl UE::GlobalConfigurationData::GetDataWithDefault<int>(FString *param_1,int *param_2)

{
  bool bVar1;
  int local_res18 [4];
  
  bVar1 = TryGetData(param_1,local_res18);
  if (!bVar1) {
    local_res18[0] = *param_2;
  }
  return local_res18[0];
}

// GetDataWithDefault<float> @ 14e9bb1a0

float __cdecl
UE::GlobalConfigurationData::GetDataWithDefault<float>(FString *param_1,float *param_2)

{
  bool bVar1;
  float local_res18 [4];
  
  bVar1 = TryGetData(param_1,local_res18);
  if (bVar1) {
    return local_res18[0];
  }
  return *param_2;
}

// GetDataWithDefault<FString> @ 14e9bb1e0

FString * __cdecl
UE::GlobalConfigurationData::GetDataWithDefault<FString>
          (FString *__return_storage_ptr__,FString *param_1,FString *param_2)

{
  bool bVar1;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  bVar1 = TryGetData(param_1,&local_18);
  if (bVar1) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_18.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_18.Data.ArrayMax;
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,param_2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetDataWithDefault<FText> @ 14e9bb270

FText * __cdecl
UE::GlobalConfigurationData::GetDataWithDefault<FText>
          (FText *__return_storage_ptr__,FString *param_1,FText *param_2)

{
  ITextData *pIVar1;
  bool bVar2;
  undefined1 local_res20 [8];
  FText local_18;
  
  FText::FText(&local_18);
  bVar2 = TryGetData(param_1,&local_18);
  if (bVar2) {
    FText::FText(__return_storage_ptr__,&local_18);
  }
  else {
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar1 = (param_2->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res20);
    }
    __return_storage_ptr__->Flags = param_2->Flags;
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetDataWithDefault<bool> @ 14e9bb300

bool __cdecl UE::GlobalConfigurationData::GetDataWithDefault<bool>(FString *param_1,bool *param_2)

{
  bool bVar1;
  bool local_res18 [16];
  
  bVar1 = TryGetData(param_1,local_res18);
  if (!bVar1) {
    local_res18[0] = *param_2;
  }
  return local_res18[0];
}

