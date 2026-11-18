// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 4

// GetResource @ 146e8f830

FAINamedID<FAIResCounter> * __cdecl FAIResources::GetResource(int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FAINamedID<FAIResCounter> *pFVar4;
  
  if (-1 < param_1) {
    if (param_1 < ResourceIDs.ArrayNum) {
      uVar3 = 0;
      if (param_1 < ResourceIDs.ArrayNum) {
        uVar3 = (uint)~param_1 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FAINamedID<FAIResCounter> *)(*pcVar1)();
          return pFVar4;
        }
      }
      return (FAINamedID<FAIResCounter> *)
             (ResourceIDs.AllocatorInstance.Data + (longlong)param_1 * 0xc);
    }
  }
  return &InvalidResource;
}

// GetResourcesCount @ 146e8f8c0

int __cdecl FAIResources::GetResourcesCount(void)

{
  return ResourceIDs.ArrayNum;
}

// GetSetDescription @ 146e8f9f0

FString * __cdecl
FAIResources::GetSetDescription(FString *__return_storage_ptr__,FAIResourcesSet param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FString *pFVar4;
  int iVar5;
  int iVar6;
  ForAnyElementType FVar7;
  byte bVar8;
  ulonglong uVar9;
  FString local_28;
  FString local_18;
  
  if (param_1.Flags == 0) {
    ::FString::FString(__return_storage_ptr__,L"(empty)");
    return __return_storage_ptr__;
  }
  uVar9 = 0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayMax = 0;
  FVar7.Data = (FScriptContainerElement *)0x0;
  iVar3 = ResourceIDs.ArrayNum;
  iVar5 = 0;
  iVar6 = 0;
  if ((char)ResourceIDs.ArrayNum != '\0') {
    do {
      if ((param_1.Flags >> ((uint)uVar9 & 0x1f) & 1) != 0) {
        if ((iVar3 <= (int)(uint)uVar9) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FString *)(*pcVar1)();
          return pFVar4;
        }
        pFVar4 = ::FName::ToString((FName *)(ResourceIDs.AllocatorInstance.Data +
                                            (uVar9 * 3 + 1) * 4),&local_18);
        iVar5 = (pFVar4->Data).ArrayNum;
        iVar3 = iVar5 + -1;
        if (iVar5 == 0) {
          iVar3 = 0;
        }
        ::FString::AppendChars(&local_28,(wchar_t *)(pFVar4->Data).AllocatorInstance.Data,iVar3);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
        ::FString::AppendChars(&local_28,L", ",2);
        iVar3 = ResourceIDs.ArrayNum;
      }
      bVar8 = (char)uVar9 + 1;
      uVar9 = (ulonglong)bVar8;
      FVar7.Data = local_28.Data.AllocatorInstance.Data;
      iVar5 = local_28.Data.ArrayNum;
      iVar6 = local_28.Data.ArrayMax;
    } while (bVar8 < (byte)iVar3);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = FVar7.Data;
  (__return_storage_ptr__->Data).ArrayNum = iVar5;
  (__return_storage_ptr__->Data).ArrayMax = iVar6;
  return __return_storage_ptr__;
}

// RegisterResource @ 146e9a9a0

void __cdecl FAIResources::RegisterResource(FAINamedID<FAIResCounter> *param_1)

{
  FScriptContainerElement *pFVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  uVar5 = ResourceIDs.ArrayNum;
  if (uVar5 < (byte)FAINamedID<FAIResCounter>::Counter) {
    iVar7 = (byte)FAINamedID<FAIResCounter>::Counter - uVar5;
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,iVar7,&ResourceIDs.AllocatorInstance,&ResourceIDs.ArrayNum,
                       &ResourceIDs.ArrayMax);
    memset(ResourceIDs.AllocatorInstance.Data + (longlong)iVar6 * 0xc,0,(longlong)iVar7 * 0xc);
    uVar5 = ResourceIDs.ArrayNum;
  }
  bVar2 = param_1->Index;
  if ((int)uVar5 <= (int)(uint)bVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = ResourceIDs.AllocatorInstance.Data + (ulonglong)bVar2 * 0xc;
  *pFVar1 = (FScriptContainerElement)param_1->Index;
  *(FName *)(pFVar1 + 4) = param_1->Name;
  return;
}

