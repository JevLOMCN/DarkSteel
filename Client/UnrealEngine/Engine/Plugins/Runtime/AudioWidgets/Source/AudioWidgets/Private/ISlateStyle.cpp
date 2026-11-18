// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 1

// GetWidgetStyle<FAudioTextBoxStyle> @ 14d89d0f0

FAudioTextBoxStyle * __thiscall
ISlateStyle::GetWidgetStyle<FAudioTextBoxStyle>
          (ISlateStyle *this,FName param_1,char *param_2,FAudioTextBoxStyle *param_3)

{
  code *pcVar1;
  FName FVar2;
  FString *pFVar3;
  FAudioTextBoxStyle *pFVar4;
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
  pFVar4 = (FAudioTextBoxStyle *)
           (*pcVar1)(this,FAudioTextBoxStyle::TypeName,local_res8,param_3,
                     param_3 == (FAudioTextBoxStyle *)0x0);
  if (pFVar4 == (FAudioTextBoxStyle *)0x0) {
    pFVar4 = FAudioTextBoxStyle::GetDefault();
  }
  return pFVar4;
}

