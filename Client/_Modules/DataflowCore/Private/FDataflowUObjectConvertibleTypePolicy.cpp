// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 2

// SupportsType @ 144466360

bool __thiscall
FDataflowUObjectConvertibleTypePolicy::SupportsType
          (FDataflowUObjectConvertibleTypePolicy *this,FName param_1)

{
  bool bVar1;
  
  bVar1 = SupportsTypeStatic(param_1);
  return bVar1;
}

// SupportsTypeStatic @ 144466800

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FDataflowUObjectConvertibleTypePolicy::SupportsTypeStatic(FName param_1)

{
  bool bVar1;
  int iVar2;
  FString *pFVar3;
  UClass *pUVar5;
  UObject *pUVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  FName local_res8;
  FString local_58;
  FString local_48;
  FString local_38;
  TStringView<wchar_t> local_28;
  FString local_18;
  size_t sVar4;
  
  pFVar8 = (FScriptContainerElement *)0x0;
  iVar7 = 0;
  local_res8 = param_1;
  pFVar3 = ::FName::ToString(&local_res8,(FString *)&local_28);
  bVar1 = ::FString::StartsWith(pFVar3,L"TObjectPtr<U",0xc,IgnoreCase);
  iVar2 = 0;
  if (bVar1) {
    pFVar3 = ::FString::RightChop(pFVar3,&local_38,0xc);
    iVar7 = (pFVar3->Data).ArrayNum;
    iVar9 = iVar7 + -1;
    if (iVar7 == 0) {
      iVar9 = iVar2;
    }
    if (iVar9 + -1 < iVar9) {
      iVar9 = iVar9 + -1;
    }
    iVar7 = iVar2;
    if (0 < iVar9) {
      iVar7 = iVar9;
    }
    ::FString::RemoveAt(pFVar3,iVar7,1,No);
    local_58.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = (pFVar3->Data).ArrayNum;
    local_58.Data.ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    pFVar3 = ::FString::TrimStartAndEnd(&local_58,&local_48);
    iVar7 = iVar2;
    if (&local_18 != pFVar3) {
      pFVar8 = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar7 = (pFVar3->Data).ArrayNum;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((FScriptContainerElement *)local_28.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.DataPtr);
  }
  if (bVar1) {
    if (iVar7 == 0) {
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x15060d16c;
LAB_144466946:
      sVar4 = wcslen((wchar_t *)local_58.Data.AllocatorInstance.Data);
      iVar2 = (int)sVar4;
    }
    else {
      local_58.Data.AllocatorInstance.Data = pFVar8;
      if (pFVar8 != (FScriptContainerElement *)0x0) goto LAB_144466946;
    }
    local_58.Data.ArrayNum = iVar2;
    pUVar5 = Z_Construct_UClass_UObject_NoRegister();
    local_28._12_4_ = local_58.Data.ArrayMax;
    local_28.Size = local_58.Data.ArrayNum;
    local_28.DataPtr = (wchar_t *)local_58.Data.AllocatorInstance.Data;
    pUVar6 = StaticFindFirstObject(pUVar5,&local_28,NativeFirst,NoLogging,(wchar_t *)0x0);
    if (pUVar6 != (UObject *)0x0) {
      bVar1 = true;
      goto LAB_144466985;
    }
  }
  bVar1 = false;
LAB_144466985:
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  return bVar1;
}

