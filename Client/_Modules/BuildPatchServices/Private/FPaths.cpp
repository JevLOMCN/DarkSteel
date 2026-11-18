// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// CombineImpl<FString_const_&,FString_const_&> @ 1431adbe0

FString * __cdecl
FPaths::CombineImpl<FString_const_&,FString_const_&>
          (FString *__return_storage_ptr__,FString *param_1,FString *param_2)

{
  int iVar1;
  TStringView<wchar_t> local_28;
  FScriptContainerElement *local_18;
  int local_10;
  
  local_28.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  local_28.Size = iVar1 + -1;
  local_18 = (param_2->Data).AllocatorInstance.Data;
  if (iVar1 == 0) {
    local_28.Size = 0;
  }
  iVar1 = (param_2->Data).ArrayNum;
  local_10 = iVar1 + -1;
  if (iVar1 == 0) {
    local_10 = 0;
  }
  CombineInternal(__return_storage_ptr__,&local_28,2);
  return __return_storage_ptr__;
}

