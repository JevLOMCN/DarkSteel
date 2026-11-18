// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Projects
// Functions: 1

// Visit @ 141e44d00

bool __thiscall
FPakFileSearchVisitor::Visit(FPakFileSearchVisitor *this,wchar_t *param_1,bool param_2)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 uVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FString local_18;
  
  if (!param_2) {
    ::FString::FString(&local_18,param_1);
    bVar3 = ::FString::MatchesWildcard(&local_18,L"*.pak",5,IgnoreCase);
    if (bVar3) {
      pFVar7 = (this->FoundFiles->AllocatorInstance).Data;
      pFVar8 = pFVar7 + (longlong)this->FoundFiles->ArrayNum * 0x10;
      uVar6 = local_18.Data._8_8_;
      for (; pFVar7 != pFVar8; pFVar7 = pFVar7 + 0x10) {
        iVar5 = *(int *)(pFVar7 + 8);
        if (iVar5 == (int)uVar6) {
          if (iVar5 < 2) goto LAB_141e44ea0;
          iVar5 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)pFVar7,(wchar_t *)local_18.Data.AllocatorInstance.Data);
          bVar3 = iVar5 == 0;
          uVar6 = local_18.Data._8_8_;
        }
        else {
          bVar3 = iVar5 + (int)uVar6 == 1;
        }
        if (bVar3) goto LAB_141e44ea0;
      }
      pTVar1 = this->FoundFiles;
      pFVar7 = (pTVar1->AllocatorInstance).Data;
      if (((pFVar7 <= (FScriptContainerElement *)&local_18) &&
          ((FScriptContainerElement *)&local_18 < pFVar7 + (longlong)pTVar1->ArrayMax * 0x10)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      iVar5 = pTVar1->ArrayNum;
      if (iVar5 == pTVar1->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
      }
      _Src.Data = local_18.Data.AllocatorInstance.Data;
      pTVar1->ArrayNum = iVar5 + 1;
      pFVar7 = (pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
      *(undefined8 *)pFVar7 = 0;
      *(int *)(pFVar7 + 8) = local_18.Data.ArrayNum;
      if (local_18.Data.ArrayNum == 0) {
        *(int *)(pFVar7 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_18.Data.ArrayNum,
                   (int *)(pFVar7 + 0xc));
        memcpy(*(void **)pFVar7,_Src.Data,(longlong)local_18.Data.ArrayNum * 2);
      }
    }
LAB_141e44ea0:
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return true;
}

