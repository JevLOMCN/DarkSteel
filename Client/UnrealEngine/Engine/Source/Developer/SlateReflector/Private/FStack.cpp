// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 1

// AddTab @ 142e2bc00

TSharedRef<FTabManager::FStack,1> * __thiscall
FTabManager::FStack::AddTab
          (FStack *this,TSharedRef<FTabManager::FStack,1> *__return_storage_ptr__,FName param_1,
          Type param_2)

{
  int *piVar1;
  FName *pFVar2;
  FScriptContainerElement *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TSharedRef<FTabManager::FStack,1> *pTVar8;
  TSharedRef<FTabManager::FLayoutNode,1> *pTVar9;
  longlong lVar10;
  uint uStack_3c;
  TSharedRef<FTabManager::FLayoutNode,1> local_38;
  FName local_28;
  FName FStack_20;
  Type local_18;
  FScriptContainerElement local_14;
  undefined4 local_10;
  FScriptContainerElement local_c;
  FScriptContainerElement local_b;
  FScriptContainerElement local_a;
  
  if (param_2 == SidebarTab) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InTabState != ETabState::SidebarTab",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Docking\\TabManager.h"
                       ,0x201,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSharedRef<FTabManager::FStack,1> *)(*pcVar5)();
      return pTVar8;
    }
  }
  uStack_3c = CONCAT31(uStack_3c._1_3_,1);
  local_14 = (FScriptContainerElement)0x2;
  local_10 = 0;
  local_c = (FScriptContainerElement)0x0;
  local_a = (FScriptContainerElement)0x0;
  FStack_20.Number = uStack_3c;
  FStack_20.ComparisonIndex.Value = 0xffffffff;
  local_28 = param_1;
  local_18 = param_2;
  if (param_2 == SidebarTab) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InTabState != ETabState::SidebarTab",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Docking\\TabManager.h"
                       ,0x1dd,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSharedRef<FTabManager::FStack,1> *)(*pcVar5)();
      return pTVar8;
    }
  }
  pFVar2 = (FName *)(this->Tabs).AllocatorInstance.Data;
  if ((pFVar2 <= &local_28) && (&local_28 < pFVar2 + (longlong)(this->Tabs).ArrayMax * 4)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSharedRef<FTabManager::FStack,1> *)(*pcVar5)();
      return pTVar8;
    }
  }
  iVar7 = (this->Tabs).ArrayNum;
  piVar1 = &(this->Tabs).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x420,&(this->Tabs).AllocatorInstance,piVar1);
  }
  pFVar3 = (this->Tabs).AllocatorInstance.Data;
  (this->Tabs).ArrayNum = iVar7 + 1;
  lVar10 = (longlong)iVar7 * 0x20;
  *(FName *)(pFVar3 + lVar10) = local_28;
  ((FName *)(pFVar3 + lVar10))[1] = FStack_20;
  *(Type *)(pFVar3 + lVar10 + 0x10) = local_18;
  pFVar3[lVar10 + 0x14] = local_14;
  *(undefined4 *)(pFVar3 + lVar10 + 0x18) = local_10;
  pFVar3[lVar10 + 0x1e] = (FScriptContainerElement)0x0;
  pFVar3[lVar10 + 0x1c] = local_c;
  pFVar3[lVar10 + 0x1e] = local_a;
  if (local_a != (FScriptContainerElement)0x0) {
    pFVar3[lVar10 + 0x1d] = local_b;
  }
  pTVar9 = TSharedFromThis<FTabManager::FLayoutNode,1>::AsShared
                     ((TSharedFromThis<FTabManager::FLayoutNode,1> *)&this->_padding_,&local_38);
  __return_storage_ptr__->Object = (FStack *)pTVar9->Object;
  pTVar4 = (pTVar9->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

