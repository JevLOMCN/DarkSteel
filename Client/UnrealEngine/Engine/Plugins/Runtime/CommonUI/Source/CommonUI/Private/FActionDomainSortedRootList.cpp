// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 5

// Add @ 14a7bd900

void __thiscall
UCommonUIActionRouterBase::FActionDomainSortedRootList::Add
          (FActionDomainSortedRootList *this,TSharedRef<FActivatableTreeRoot,1> *param_1)

{
  int *piVar1;
  TSharedRef<FActivatableTreeRoot,1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FIdentityFunctor local_res8 [8];
  
  pTVar2 = (TSharedRef<FActivatableTreeRoot,1> *)(this->RootList).AllocatorInstance.Data;
  if ((pTVar2 <= param_1) && (param_1 < pTVar2 + (this->RootList).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->RootList).ArrayNum;
  piVar1 = &(this->RootList).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,piVar1);
  }
  (this->RootList).ArrayNum = iVar6 + 1;
  pFVar7 = (this->RootList).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  *(FActivatableTreeRoot **)pFVar7 = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar7 + 8) = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  AlgoImpl::
  IntroSortInternal<TSharedRef<FActivatableTreeRoot,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedRef<FActivatableTreeRoot,1>,_UCommonUIActionRouterBase::FActionDomainSortedRootList::Sort_::__l2::<lambda_1>_>_>
            ((TSharedRef<FActivatableTreeRoot,1> *)(this->RootList).AllocatorInstance.Data,
             (this->RootList).ArrayNum,local_res8[0],(<lambda_1> *)local_res8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Contains @ 14a7c7a20

bool __thiscall
UCommonUIActionRouterBase::FActionDomainSortedRootList::Contains
          (FActionDomainSortedRootList *this,TSharedRef<FActivatableTreeRoot,1> *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->RootList).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (longlong)(this->RootList).ArrayNum * 0x10;
  if (pFVar1 != pFVar2) {
    do {
      if (*(FActivatableTreeRoot **)pFVar1 == param_1->Object) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((param_1->SharedReferenceCount).ReferenceController);
        return true;
      }
      pFVar1 = pFVar1 + 0x10;
    } while (pFVar1 != pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

// DebugDumpRootList @ 14a7d2c40

void __thiscall
UCommonUIActionRouterBase::FActionDomainSortedRootList::DebugDumpRootList
          (FActionDomainSortedRootList *this,FString *param_1,bool param_2,bool param_3,bool param_4
          )

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->RootList).ArrayNum;
  pFVar2 = (this->RootList).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->RootList).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<FActivatableTreeRoot,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    FActivatableTreeNode::DebugDumpRecursive
              (*(FActivatableTreeNode **)pFVar2,param_1,0,param_2,param_3,param_4);
    pFVar2 = pFVar2 + 0x10;
  }
  return;
}

// Remove @ 14a812b40

int __thiscall
UCommonUIActionRouterBase::FActionDomainSortedRootList::Remove
          (FActionDomainSortedRootList *this,TSharedRef<FActivatableTreeRoot,1> *param_1)

{
  TSharedRef<FActivatableTreeRoot,1> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  pTVar1 = (TSharedRef<FActivatableTreeRoot,1> *)(this->RootList).AllocatorInstance.Data;
  if (((pTVar1 <= param_1) && (param_1 < pTVar1 + (this->RootList).ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar5 = (this->RootList).ArrayNum;
  lVar6 = (longlong)iVar5;
  iVar11 = 0;
  if (iVar5 != 0) {
    pFVar2 = (this->RootList).AllocatorInstance.Data;
    lVar8 = 0;
    iVar12 = 0;
    bVar4 = *(FActivatableTreeRoot **)pFVar2 != param_1->Object;
    iVar11 = 0;
    do {
      lVar8 = lVar8 + 1;
      iVar10 = iVar11 + 1;
      if (lVar8 < lVar6) {
        pFVar7 = pFVar2 + lVar8 * 0x10;
        do {
          if (bVar4 != (*(FActivatableTreeRoot **)pFVar7 != param_1->Object)) break;
          iVar10 = iVar10 + 1;
          lVar8 = lVar8 + 1;
          pFVar7 = pFVar7 + 0x10;
        } while (lVar8 < lVar6);
      }
      iVar9 = iVar10 - iVar11;
      if (bVar4 == false) {
        DestructItems<TSharedRef<FActivatableTreeRoot,1>,int>
                  ((TSharedRef<FActivatableTreeRoot,1> *)(pFVar2 + (longlong)iVar11 * 0x10),iVar9);
      }
      else {
        if (iVar12 != iVar11) {
          memmove(pFVar2 + (longlong)iVar12 * 0x10,pFVar2 + (longlong)iVar11 * 0x10,
                  (longlong)iVar9 << 4);
        }
        iVar12 = iVar12 + iVar9;
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar11 = iVar10;
    } while (lVar8 < lVar6);
    iVar11 = iVar5 - iVar12;
    (this->RootList).ArrayNum = iVar12;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return iVar11;
}

// Sort @ 14a81e0a0

void __thiscall
UCommonUIActionRouterBase::FActionDomainSortedRootList::Sort(FActionDomainSortedRootList *this)

{
  FIdentityFunctor local_res8 [32];
  
  AlgoImpl::
  IntroSortInternal<TSharedRef<FActivatableTreeRoot,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedRef<FActivatableTreeRoot,1>,_UCommonUIActionRouterBase::FActionDomainSortedRootList::Sort_::__l2::<lambda_1>_>_>
            ((TSharedRef<FActivatableTreeRoot,1> *)(this->RootList).AllocatorInstance.Data,
             (this->RootList).ArrayNum,local_res8[0],(<lambda_1> *)local_res8);
  return;
}

