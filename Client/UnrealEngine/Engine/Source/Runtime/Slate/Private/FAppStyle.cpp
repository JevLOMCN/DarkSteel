// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 2

// GetBrush @ 14280e020

FSlateBrush * __cdecl FAppStyle::GetBrush(FName param_1,char *param_2)

{
  ISlateStyle *pIVar1;
  FSlateBrush *pFVar2;
  
  pIVar1 = Get();
                    /* WARNING: Could not recover jumptable at 0x00014280e052. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar2 = (FSlateBrush *)(**(code **)((longlong)*pIVar1 + 0x50))(pIVar1,param_1,param_2,0);
  return pFVar2;
}

// GetWidgetStyle<FTextBlockStyle> @ 1429b47d0

FTextBlockStyle * __cdecl FAppStyle::GetWidgetStyle<FTextBlockStyle>(FName param_1,char *param_2)

{
  code *pcVar1;
  FName FVar2;
  ISlateStyle *pIVar3;
  FString *pFVar4;
  FTextBlockStyle *pFVar5;
  ForAnyElementType FVar6;
  FName local_res8;
  FName local_res10;
  FString local_48;
  FString local_38;
  FString local_28;
  
  pIVar3 = Get();
  pcVar1 = *(code **)((longlong)*pIVar3 + 0xa0);
  FVar2 = param_1;
  local_res10 = param_1;
  if (param_2 != (char *)0x0) {
    ::FString::FString(&local_38,param_2);
    pFVar4 = ::FName::ToString(&local_res10,&local_28);
    ::FString::ConcatFF(&local_48,pFVar4,&local_38);
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar6.Data = local_48.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,(wchar_t *)FVar6.Data);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    FVar2 = local_res8;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
      FVar2 = local_res8;
    }
  }
  local_res8 = FVar2;
  pFVar5 = (FTextBlockStyle *)(*pcVar1)(pIVar3,FTextBlockStyle::TypeName,local_res8,0,1);
  if (pFVar5 == (FTextBlockStyle *)0x0) {
    pFVar5 = FTextBlockStyle::GetDefault();
  }
  return pFVar5;
}

