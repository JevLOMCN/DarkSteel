// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 13

// SDockingNode @ 1426fe770

SDockingNode * __thiscall SDockingNode::SDockingNode(SDockingNode *this)

{
  SCompoundWidget::SCompoundWidget((SCompoundWidget *)this);
  this->SizeCoefficient = 1.0;
  this->_padding_ = (longlong)&___7SDockingNode__6B_;
  (this->ParentNodePtr).Object = (SDockingSplitter *)0x0;
  (this->ParentNodePtr).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// CleanUpNodes @ 142712590

ECleanupRetVal __thiscall SDockingNode::CleanUpNodes(SDockingNode *this)

{
  return NoTabsUnderNode;
}

// GetAllChildTabs @ 142739e30

TArray<TSharedRef<SDockTab,1>,TSizedDefaultAllocator<32>_> * __thiscall
SDockingNode::GetAllChildTabs
          (SDockingNode *this,
          TArray<TSharedRef<SDockTab,1>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetDockArea @ 14273d960

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SDockingArea,1> * __thiscall
SDockingNode::GetDockArea(SDockingNode *this,TSharedPtr<SDockingArea,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  TSharedPtr<SDockingArea,1> *pTVar5;
  undefined8 *puVar6;
  SDockingSplitter *pSVar7;
  SDockingSplitter *pSVar8;
  SDockingSplitter *pSVar9;
  bool bVar10;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  if ((((this->ParentNodePtr).Object == (SDockingSplitter *)0x0) ||
      (pTVar1 = (this->ParentNodePtr).WeakReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) {
    __return_storage_ptr__->Object = (SDockingArea *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    return __return_storage_ptr__;
  }
  pSVar8 = (SDockingSplitter *)(this->ParentNodePtr).WeakReferenceCount.ReferenceController;
  pSVar7 = pSVar8;
  pSVar9 = (SDockingSplitter *)0x0;
  if (pSVar8 != (SDockingSplitter *)0x0) {
    aVar3 = *(atomic<int> *)&pSVar8->_padding_;
    do {
      pSVar7 = (SDockingSplitter *)0x0;
      pSVar9 = (SDockingSplitter *)0x0;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14273d9d1;
      LOCK();
      aVar4 = *(atomic<int> *)&pSVar8->_padding_;
      bVar10 = aVar3 == aVar4;
      if (bVar10) {
        *(atomic<int> *)&pSVar8->_padding_ = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar10);
    pSVar9 = (this->ParentNodePtr).Object;
    pSVar7 = pSVar8;
    if (pSVar9 != (SDockingSplitter *)0x0) goto LAB_14273d9f7;
  }
LAB_14273d9d1:
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  pSVar8 = pSVar7;
  if (bVar10) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedPtr<SDockingArea,1> *)(*pcVar2)();
    return pTVar5;
  }
LAB_14273d9f7:
  puVar6 = (undefined8 *)(**(code **)(pSVar9->_padding_ + 0x260))(pSVar9,local_18);
  __return_storage_ptr__->Object = (SDockingArea *)*puVar6;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)puVar6[1];
  puVar6[1] = 0;
  *puVar6 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar8);
  return __return_storage_ptr__;
}

// GetDockArea @ 14273da80

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SDockingArea_const_,1> * __thiscall
SDockingNode::GetDockArea
          (SDockingNode *this,TSharedPtr<SDockingArea_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  TSharedPtr<SDockingArea_const_,1> *pTVar6;
  longlong *plVar7;
  SDockingArea *pSVar8;
  SDockingArea *pSVar9;
  int iVar10;
  int iVar11;
  SDockingArea *pSVar12;
  bool bVar13;
  SDockingArea *local_res8;
  longlong local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  
  pSVar8 = (SDockingArea *)0x0;
  bVar3 = false;
  if ((((this->ParentNodePtr).Object == (SDockingSplitter *)0x0) ||
      (pTVar1 = (this->ParentNodePtr).WeakReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) {
    plVar7 = &local_38;
    iVar11 = 0;
    local_38 = 0;
    pTStack_30 = (TReferenceControllerBase<1> *)0x0;
    bVar3 = true;
    iVar10 = iVar11;
    goto LAB_14273db66;
  }
  local_res8 = (SDockingArea *)(this->ParentNodePtr).WeakReferenceCount.ReferenceController;
  pSVar9 = local_res8;
  pSVar12 = pSVar8;
  if (local_res8 == (SDockingArea *)0x0) {
LAB_14273daf1:
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    local_res8 = pSVar9;
    if (bVar13) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TSharedPtr<SDockingArea_const_,1> *)(*pcVar2)();
      return pTVar6;
    }
  }
  else {
    aVar4 = *(atomic<int> *)&local_res8->_padding_;
    do {
      pSVar9 = pSVar8;
      pSVar12 = (SDockingArea *)0x0;
      if (aVar4 == (atomic<int>)0x0) goto LAB_14273daf1;
      LOCK();
      aVar5 = *(atomic<int> *)&local_res8->_padding_;
      bVar13 = aVar4 == aVar5;
      if (bVar13) {
        *(atomic<int> *)&local_res8->_padding_ = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar13);
    pSVar12 = (SDockingArea *)(this->ParentNodePtr).Object;
    pSVar9 = local_res8;
    if (pSVar12 == (SDockingArea *)0x0) goto LAB_14273daf1;
  }
  plVar7 = (longlong *)(**(code **)(pSVar12->_padding_ + 0x260))(pSVar12,local_28);
  iVar11 = 2;
  pSVar8 = (SDockingArea *)*plVar7;
  iVar10 = 1;
LAB_14273db66:
  __return_storage_ptr__->Object = pSVar8;
  pTVar1 = (TReferenceControllerBase<1> *)plVar7[1];
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (bVar3) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  }
  if (iVar11 != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  }
  if (iVar10 != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_res8);
  }
  return __return_storage_ptr__;
}

// GetNumTabs @ 142740750

int __thiscall SDockingNode::GetNumTabs(SDockingNode *this)

{
  return 0;
}

// GetSizeCoefficient @ 142743ca0

float __thiscall SDockingNode::GetSizeCoefficient(SDockingNode *this)

{
  return this->SizeCoefficient;
}

// GetSizeRule @ 142743cb0

ESizeRule __thiscall SDockingNode::GetSizeRule(SDockingNode *this)

{
  return FractionOfParent;
}

// OnLiveTabAdded @ 142765ce0

void __thiscall SDockingNode::OnLiveTabAdded(SDockingNode *this)

{
  SDockingSplitter *pSVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  TAttribute<EVisibility> local_28;
  
  local_28.Value = (EVisibility)EVisibility::Visible.Value.Value;
  local_28.bIsSet = true;
  local_28.Getter._16_8_ = 0;
  local_28.Getter._0_8_ = 0;
  local_28.Getter._8_8_ = 0;
  SCompoundWidget::SetVisibility((SCompoundWidget *)this,&local_28);
  pTVar5 = (this->ParentNodePtr).WeakReferenceCount.ReferenceController;
  pTVar3 = pTVar5;
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
LAB_142765d81:
    pTVar5 = pTVar3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  else {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      pTVar3 = (TReferenceControllerBase<1> *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142765d81;
      LOCK();
      aVar4 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar4;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar6);
    pSVar1 = (this->ParentNodePtr).Object;
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    if (pSVar1 != (SDockingSplitter *)0x0) {
      (**(code **)(pSVar1->_padding_ + 0x298))(pSVar1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return;
}

// OnResized @ 14276a320

void __thiscall SDockingNode::OnResized(SDockingNode *this)

{
  return;
}

// OnUserAttemptingDock @ 14276ccf0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SDockingNode::OnUserAttemptingDock
          (SDockingNode *this,FReply *__return_storage_ptr__,RelativeDirection param_1,
          FDragDropEvent *param_2)

{
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// SetParentNode @ 142785df0

void __thiscall
SDockingNode::SetParentNode(SDockingNode *this,TSharedRef<SDockingSplitter,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  (this->ParentNodePtr).Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (this->ParentNodePtr).WeakReferenceCount.ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->ParentNodePtr).WeakReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    (this->ParentNodePtr).WeakReferenceCount.ReferenceController = pTVar3;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetSizeCoefficient @ 142786ca0

void __thiscall SDockingNode::SetSizeCoefficient(SDockingNode *this,float param_1)

{
  this->SizeCoefficient = param_1;
                    /* WARNING: Could not recover jumptable at 0x000142786cab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2a0))();
  return;
}

