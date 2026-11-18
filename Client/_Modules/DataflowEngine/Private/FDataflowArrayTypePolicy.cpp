// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 1

// GetElementType @ 1462dcef0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FName __cdecl FDataflowArrayTypePolicy::GetElementType(FName param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  size_t sVar5;
  FName FVar6;
  FName *pFVar7;
  int iVar8;
  int iVar9;
  FName in_RDX;
  FScriptContainerElement *pFVar10;
  int iVar11;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FString local_58;
  FString local_48;
  FString local_38;
  
  local_res10 = in_RDX;
  pFVar4 = ::FName::ToString(&local_res18,&local_48);
  sVar5 = wcslen(L"TArray<");
  bVar3 = ::FString::StartsWith(pFVar4,L"TArray<",(int)sVar5,IgnoreCase);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (!bVar3) {
    *(FName *)param_1 = local_res10;
    return param_1;
  }
  sVar5 = wcslen(L"TArray<");
  pFVar4 = ::FName::ToString(&local_res10,&local_38);
  ::FString::RemoveAt(pFVar4,0,(int)sVar5,No);
  pFVar1 = (pFVar4->Data).AllocatorInstance.Data;
  (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar9 = (pFVar4->Data).ArrayNum;
  (pFVar4->Data).ArrayNum = 0;
  (pFVar4->Data).ArrayMax = 0;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (1 < iVar9) {
    iVar8 = iVar9 + -2;
    if ((iVar8 < 0) || (iVar9 + -1 <= iVar8)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x113,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        FVar6 = (FName)(*pcVar2)();
        return FVar6;
      }
    }
    if (*(short *)(pFVar1 + (longlong)iVar8 * 2) == 0x3e) goto LAB_1462dd035;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("!RightStr.IsEmpty() && RightStr[RightStr.Len() - 1] == \'>\'",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowTypePolicy.h"
                     ,0xf8,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    FVar6 = (FName)(*pcVar2)();
    return FVar6;
  }
LAB_1462dd035:
  iVar8 = iVar9 + -1;
  if (iVar9 == 0) {
    iVar8 = 0;
  }
  if (iVar8 + -1 < iVar8) {
    iVar8 = iVar8 + -1;
  }
  iVar11 = 0;
  if (0 < iVar8) {
    iVar11 = iVar8;
  }
  pFVar10 = (FScriptContainerElement *)L"";
  if (iVar9 != 0) {
    pFVar10 = pFVar1;
  }
  ::FString::ConstructFromPtrSize(&local_58,(wchar_t *)pFVar10,iVar11);
  iVar9 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar9 = 0;
  }
  pFVar7 = ::FName::FName(&local_res20,iVar9,(wchar_t *)local_58.Data.AllocatorInstance.Data,
                          FNAME_Add);
  *(FName *)param_1 = *pFVar7;
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return param_1;
}

