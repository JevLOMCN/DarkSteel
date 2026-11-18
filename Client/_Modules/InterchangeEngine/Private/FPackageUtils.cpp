// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 2

// IsMapPackageAsset @ 14e4fe9f0

bool __cdecl UE::Interchange::FPackageUtils::IsMapPackageAsset(FString *param_1)

{
  bool bVar1;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  bVar1 = IsMapPackageAsset(param_1,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// IsMapPackageAsset @ 14e4fea30

bool __cdecl UE::Interchange::FPackageUtils::IsMapPackageAsset(FString *param_1,FString *param_2)

{
  FScriptContainerElement *_Src;
  bool bVar1;
  int iVar2;
  int iVar3;
  FString *pFVar4;
  int iVar5;
  int iVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  iVar2 = ::FString::Find(param_1,L".",1,CaseSensitive,FromStart,-1);
  iVar3 = (param_1->Data).ArrayNum;
  iVar5 = 0;
  if (iVar2 == -1) {
    _Src = (param_1->Data).AllocatorInstance.Data;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = iVar3;
    if (iVar3 == 0) {
      local_38.Data.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar3,0,(ForAnyElementType *)&local_38,iVar3,&local_38.Data.ArrayMax);
      memcpy(local_38.Data.AllocatorInstance.Data,_Src,(longlong)iVar3 * 2);
    }
  }
  else {
    iVar6 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar6 = iVar5;
    }
    if (iVar2 < iVar6) {
      iVar6 = iVar2;
    }
    iVar2 = 0;
    if (0 < iVar6) {
      iVar2 = iVar6;
    }
    if (iVar3 == 0) {
      ::FString::ConstructFromPtrSize(&local_38,L"",iVar2);
    }
    else {
      ::FString::ConstructFromPtrSize
                (&local_38,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar2);
    }
  }
  iVar3 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar3 = iVar5;
  }
  if (0 < iVar3) {
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    bVar1 = FPackageName::DoesPackageExist(&local_38,&local_28,true);
    if (bVar1) {
      FPaths::GetExtension(&local_18,&local_28,true);
      pFVar4 = FPackageName::GetMapPackageExtension();
      iVar3 = (pFVar4->Data).ArrayNum;
      if (local_18.Data.ArrayNum == iVar3) {
        if (1 < local_18.Data.ArrayNum) {
          iVar3 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)local_18.Data.AllocatorInstance.Data,
                             (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
          bVar1 = iVar3 == 0;
          goto LAB_14e4feb70;
        }
      }
      else {
        bVar1 = local_18.Data.ArrayNum + iVar3 == 1;
LAB_14e4feb70:
        if (!bVar1) {
          if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_18.Data.AllocatorInstance.Data);
          }
          goto LAB_14e4feb85;
        }
      }
      iVar3 = local_28.Data.ArrayNum + -1;
      if (local_28.Data.ArrayNum == 0) {
        iVar3 = iVar5;
      }
      ::FString::AssignRange(param_2,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar3);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      bVar1 = true;
      goto LAB_14e4feb95;
    }
LAB_14e4feb85:
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  bVar1 = false;
LAB_14e4feb95:
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

