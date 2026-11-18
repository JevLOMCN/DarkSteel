// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 7

// ~FStack @ 142701730

void __thiscall FTabManager::FStack::~FStack(FStack *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  this->_padding_ = (longlong)&___7FStack_FTabManager__6B_;
  pFVar3 = (this->Tabs).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  this->_padding_ = (longlong)&___7FLayoutNode_FTabManager__6B_;
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000142701780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// AddTab @ 14270b380

TSharedRef<FTabManager::FStack,1> * __thiscall
FTabManager::FStack::AddTab
          (FStack *this,TSharedRef<FTabManager::FStack,1> *__return_storage_ptr__,FTabId *param_1,
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
                       ,0x208,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSharedRef<FTabManager::FStack,1> *)(*pcVar5)();
      return pTVar8;
    }
  }
  local_14 = (FScriptContainerElement)0x2;
  local_10 = 0;
  local_c = (FScriptContainerElement)0x0;
  local_a = (FScriptContainerElement)0x0;
  local_28 = param_1->TabType;
  FStack_20 = *(FName *)&param_1->InstanceId;
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

// AddTab @ 14270b570

TSharedRef<FTabManager::FStack,1> * __thiscall
FTabManager::FStack::AddTab
          (FStack *this,TSharedRef<FTabManager::FStack,1> *__return_storage_ptr__,FName param_1,
          Type param_2,ESidebarLocation param_3,float param_4,bool param_5)

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
  uint uStack_4c;
  TSharedRef<FTabManager::FLayoutNode,1> local_48;
  FName local_38;
  FName FStack_30;
  Type local_28;
  FScriptContainerElement local_24;
  float local_20;
  FScriptContainerElement local_1c;
  FScriptContainerElement local_1b;
  FScriptContainerElement local_1a;
  
  if ((param_2 == SidebarTab) && (param_3 == None)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InTabState != ETabState::SidebarTab || InSidebarLocation != ESidebarLocation::None"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Docking\\TabManager.h"
                       ,0x211,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSharedRef<FTabManager::FStack,1> *)(*pcVar5)();
      return pTVar8;
    }
  }
  uStack_4c = CONCAT31(uStack_4c._1_3_,1);
  local_24 = (FScriptContainerElement)param_3;
  local_1c = (FScriptContainerElement)param_5;
  local_1a = (FScriptContainerElement)0x0;
  FStack_30.Number = uStack_4c;
  FStack_30.ComparisonIndex.Value = 0xffffffff;
  local_20 = param_4;
  local_38 = param_1;
  local_28 = param_2;
  if ((param_2 == SidebarTab) && (param_3 == None)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InTabState != ETabState::SidebarTab || InSidebarLocation != ESidebarLocation::None"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Docking\\TabManager.h"
                       ,0x1e8,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSharedRef<FTabManager::FStack,1> *)(*pcVar5)();
      return pTVar8;
    }
  }
  pFVar2 = (FName *)(this->Tabs).AllocatorInstance.Data;
  if ((pFVar2 <= &local_38) && (&local_38 < pFVar2 + (longlong)(this->Tabs).ArrayMax * 4)) {
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
  *(FName *)(pFVar3 + lVar10) = local_38;
  ((FName *)(pFVar3 + lVar10))[1] = FStack_30;
  *(Type *)(pFVar3 + lVar10 + 0x10) = local_28;
  pFVar3[lVar10 + 0x14] = local_24;
  *(float *)(pFVar3 + lVar10 + 0x18) = local_20;
  pFVar3[lVar10 + 0x1e] = (FScriptContainerElement)0x0;
  pFVar3[lVar10 + 0x1c] = local_1c;
  pFVar3[lVar10 + 0x1e] = local_1a;
  if (local_1a != (FScriptContainerElement)0x0) {
    pFVar3[lVar10 + 0x1d] = local_1b;
  }
  pTVar9 = TSharedFromThis<FTabManager::FLayoutNode,1>::AsShared
                     ((TSharedFromThis<FTabManager::FLayoutNode,1> *)&this->_padding_,&local_48);
  __return_storage_ptr__->Object = (FStack *)pTVar9->Object;
  pTVar4 = (pTVar9->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// AsStack @ 14270dba0

TSharedPtr<FTabManager::FStack,1> * __thiscall
FTabManager::FStack::AsStack(FStack *this,TSharedPtr<FTabManager::FStack,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  FStack *pFVar2;
  TSharedRef<FTabManager::FLayoutNode,1> *pTVar3;
  TSharedRef<FTabManager::FLayoutNode,1> local_18;
  
  pTVar3 = TSharedFromThis<FTabManager::FLayoutNode,1>::AsShared
                     ((TSharedFromThis<FTabManager::FLayoutNode,1> *)&this->_padding_,&local_18);
  pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
  pFVar2 = (FStack *)pTVar3->Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    __return_storage_ptr__->Object = pFVar2;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    __return_storage_ptr__->Object = pFVar2;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// SetForegroundTab @ 142784920

TSharedRef<FTabManager::FStack,1> * __thiscall
FTabManager::FStack::SetForegroundTab
          (FStack *this,TSharedRef<FTabManager::FStack,1> *__return_storage_ptr__,FTabId *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  int iVar2;
  ETabIdFlags EVar3;
  undefined3 uVar4;
  TSharedRef<FTabManager::FLayoutNode,1> *pTVar5;
  TSharedRef<FTabManager::FLayoutNode,1> local_18;
  
  iVar2 = param_1->InstanceId;
  EVar3 = param_1->Flags;
  uVar4 = *(undefined3 *)&param_1->field_0xd;
  (this->ForegroundTabId).TabType = param_1->TabType;
  (this->ForegroundTabId).InstanceId = iVar2;
  (this->ForegroundTabId).Flags = EVar3;
  *(undefined3 *)&(this->ForegroundTabId).field_0xd = uVar4;
  pTVar5 = TSharedFromThis<FTabManager::FLayoutNode,1>::AsShared
                     ((TSharedFromThis<FTabManager::FLayoutNode,1> *)&this->_padding_,&local_18);
  __return_storage_ptr__->Object = (FStack *)pTVar5->Object;
  pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// SetHideTabWell @ 142784970

TSharedRef<FTabManager::FStack,1> * __thiscall
FTabManager::FStack::SetHideTabWell
          (FStack *this,TSharedRef<FTabManager::FStack,1> *__return_storage_ptr__,bool param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<FTabManager::FLayoutNode,1> *pTVar2;
  TSharedRef<FTabManager::FLayoutNode,1> local_18;
  
  this->bHideTabWell = param_1;
  pTVar2 = TSharedFromThis<FTabManager::FLayoutNode,1>::AsShared
                     ((TSharedFromThis<FTabManager::FLayoutNode,1> *)&this->_padding_,&local_18);
  __return_storage_ptr__->Object = (FStack *)pTVar2->Object;
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// SetSizeCoefficient @ 142786c50

TSharedRef<FTabManager::FStack,1> * __thiscall
FTabManager::FStack::SetSizeCoefficient
          (FStack *this,TSharedRef<FTabManager::FStack,1> *__return_storage_ptr__,float param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<FTabManager::FLayoutNode,1> *pTVar2;
  TSharedRef<FTabManager::FLayoutNode,1> local_18;
  
  *(float *)&this->_padding_ = param_1;
  pTVar2 = TSharedFromThis<FTabManager::FLayoutNode,1>::AsShared
                     ((TSharedFromThis<FTabManager::FLayoutNode,1> *)&this->_padding_,&local_18);
  __return_storage_ptr__->Object = (FStack *)pTVar2->Object;
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

