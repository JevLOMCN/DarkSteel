// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 2

// HasWidgetStyle<FToolBarStyle> @ 1427a2d90

bool __thiscall
ISlateStyle::HasWidgetStyle<FToolBarStyle>(ISlateStyle *this,FName param_1,char *param_2)

{
  code *pcVar1;
  FName FVar2;
  FString *pFVar3;
  longlong lVar4;
  ForAnyElementType FVar5;
  FName local_res8;
  FName local_res10;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pcVar1 = *(code **)((longlong)*this + 0xa0);
  FVar2 = param_1;
  local_res10 = param_1;
  if (param_2 != (char *)0x0) {
    ::FString::FString(&local_28,param_2);
    pFVar3 = ::FName::ToString(&local_res10,&local_18);
    ::FString::ConcatFF(&local_38,pFVar3,&local_28);
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar5.Data = local_38.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,(wchar_t *)FVar5.Data);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    FVar2 = local_res8;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      FVar2 = local_res8;
    }
  }
  local_res8 = FVar2;
  lVar4 = (*pcVar1)(this,FToolBarStyle::TypeName,local_res8,0,0);
  return lVar4 != 0;
}

// Join @ 14281f9f0

FName __cdecl ISlateStyle::Join(FName param_1,char *param_2)

{
  FString *pFVar1;
  ForAnyElementType FVar2;
  char *in_R8;
  FName local_res10 [3];
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (in_R8 == (char *)0x0) {
    *(char **)param_1 = param_2;
    return param_1;
  }
  local_res10[0] = (FName)param_2;
  ::FString::FString(&local_28,in_R8);
  pFVar1 = ::FName::ToString(local_res10,&local_18);
  ::FString::ConcatFF(&local_38,pFVar1,&local_28);
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar2.Data = local_38.Data.AllocatorInstance.Data;
  }
  ::FName::FName((FName *)param_1,(wchar_t *)FVar2.Data);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return param_1;
}

