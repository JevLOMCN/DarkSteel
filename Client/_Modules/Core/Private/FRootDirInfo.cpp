// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// Init @ 1416a2730

/* WARNING: Removing unreachable block (ram,0x0001416a298a) */

void __thiscall
FPersistentStorageManager::FRootDirInfo::Init
          (FRootDirInfo *this,TArrayView<FPersistentStorageCategory_const_,int> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FString *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FPersistentStorageCategory *pFVar10;
  FPersistentStorageCategory *pFVar11;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  pFVar7 = FPaths::ProjectPersistentDownloadDir(&local_28);
  FPaths::ConvertRelativePathToFull(&local_38,pFVar7);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pFVar10 = param_1->DataPtr;
  pFVar11 = pFVar10 + param_1->ArrayNum;
  for (; pFVar10 != pFVar11; pFVar10 = pFVar10 + 1) {
    iVar6 = (pFVar10->Directories).ArrayNum;
    pFVar8 = (pFVar10->Directories).AllocatorInstance.Data;
    pFVar9 = pFVar8 + (longlong)iVar6 * 0x10;
    while( true ) {
      if ((pFVar10->Directories).ArrayNum != iVar6) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar8 == pFVar9) break;
      bVar4 = ManagedStorageInternal::IsUnderDirectory((FString *)pFVar8,&local_38);
      if (!bVar4) {
        pFVar2 = (this->RootDirectories).AllocatorInstance.Data;
        if (((pFVar2 <= pFVar8) &&
            (pFVar8 < pFVar2 + (longlong)(this->RootDirectories).ArrayMax * 0x10)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = (this->RootDirectories).ArrayNum;
        piVar1 = &(this->RootDirectories).ArrayMax;
        if (iVar5 == *piVar1) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,(ForAnyElementType *)this,piVar1);
        }
        (this->RootDirectories).ArrayNum = iVar5 + 1;
        ::FString::FString((FString *)
                           ((this->RootDirectories).AllocatorInstance.Data + (longlong)iVar5 * 0x10)
                           ,(FString *)pFVar8);
      }
      pFVar8 = pFVar8 + 0x10;
    }
  }
  pFVar8 = (this->RootDirectories).AllocatorInstance.Data;
  if (((pFVar8 <= (FScriptContainerElement *)&local_38) &&
      ((FScriptContainerElement *)&local_38 <
       pFVar8 + (longlong)(this->RootDirectories).ArrayMax * 0x10)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = (this->RootDirectories).ArrayNum;
  piVar1 = &(this->RootDirectories).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,piVar1);
  }
  (this->RootDirectories).ArrayNum = iVar6 + 1;
  pFVar8 = (this->RootDirectories).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  *(undefined8 *)pFVar8 = 0;
  *(FScriptContainerElement **)pFVar8 = local_38.Data.AllocatorInstance.Data;
  *(int *)(pFVar8 + 8) = local_38.Data.ArrayNum;
  *(int *)(pFVar8 + 0xc) = local_38.Data.ArrayMax;
  return;
}

