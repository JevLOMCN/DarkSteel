// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 26

// ~SDockingSplitter @ 142702280

void __thiscall SDockingSplitter::~SDockingSplitter(SDockingSplitter *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  DestructItems<TSharedRef<SDockingNode,1>,int>
            ((TSharedRef<SDockingNode,1> *)(this->Children).AllocatorInstance.Data,
             (this->Children).ArrayNum);
  pFVar3 = (this->Children).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Splitter).SharedReferenceCount.ReferenceController);
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// AddChildNode @ 14270a4c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
SDockingSplitter::AddChildNode
          (SDockingSplitter *this,TSharedRef<SDockingNode,1> *param_1,int param_2)

{
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  TDelegate<SSplitter::ESizeRule___cdecl(void),FDefaultDelegateUserPolicy> *this_01;
  int *piVar1;
  TArray<TSharedRef<SDockingNode,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  void *pvVar3;
  SDockingNode *pSVar4;
  TSharedRef<SDockingNode,1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  FScopedWidgetSlotArguments *pFVar10;
  TAttribute<float> *pTVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  TAttribute<SSplitter::ESizeRule> *pTVar14;
  TReferenceControllerBase<1> *pTVar15;
  TSharedRef<SWidget,1> *pTVar16;
  longlong lVar17;
  FScriptContainerElement *pFVar18;
  undefined1 auStack_278 [32];
  TSharedRef<SDockingNode,1> *local_258;
  TSharedRef<SDockingNode,1> *local_250;
  longlong local_248;
  longlong local_240;
  undefined8 local_238;
  TReferenceControllerBase<1> *local_228;
  longlong lStack_220;
  undefined1 local_218 [8];
  FDelegateAllocation local_210;
  SDockingNode *local_200;
  FSharedReferencer<1> local_1f8;
  TSharedRef<SWidget,1> local_1f0;
  TSharedRef<SDockingNode,1> local_1e0;
  TSharedRef<SDockingNode,1> local_1d0;
  SWidget *local_1c0;
  TReferenceControllerBase<1> *local_1b8;
  FDestructionSentinel local_1b0;
  FDestructionSentinel local_198;
  FDelegateAllocation *local_180;
  code *local_178;
  longlong lStack_170;
  TAttribute<float> local_168;
  undefined1 local_148 [32];
  FScopedWidgetSlotArguments local_128;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_278;
  bVar8 = false;
  local_228 = (TReferenceControllerBase<1> *)((ulonglong)local_228 & 0xffffffff00000000);
  if (((this->Splitter).Object == (SSplitter *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar10 = SSplitter::AddSlot((this->Splitter).Object,&local_128,param_2);
  local_1e0.Object = param_1->Object;
  local_1e0.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  local_228 = (TReferenceControllerBase<1> *)SDockingNode::GetSizeCoefficient;
  lStack_220 = (ulonglong)local_1f0.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
  if (local_1e0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_178 = SDockingNode::GetSizeCoefficient;
  lStack_170 = lStack_220;
  pTVar11 = TAttribute<float>::TAttribute<float><SDockingNode>
                      (&local_168,&local_1e0,(pmf_93ef00b5 *)&local_178);
  this_00 = &pTVar11->Getter;
  *(float *)&pFVar10->_padding_ = pTVar11->Value;
  *(bool *)((longlong)&pFVar10->_padding_ + 4) = pTVar11->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar10->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar3 = *(void **)&(pTVar11->Getter).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  local_218 = (undefined1  [8])0x0;
  local_210.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_210.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_218,
             (FWriteAccessScope *)&local_198);
  local_180 = &local_210;
  puVar12 = UE::Core::Private::DelegateAllocate(0x38,&local_210);
  pTVar15 = local_228;
  if (puVar12 != (undefined8 *)0x0) {
    pTVar15 = (param_1->SharedReferenceCount).ReferenceController;
    pSVar4 = param_1->Object;
    local_228 = (TReferenceControllerBase<1> *)SDockingNode::SetSizeCoefficient;
    lStack_220 = (ulonglong)local_1f0.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar12 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar13;
    *puVar12 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSDockingNode___00__A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar12[3] = pSVar4;
    puVar12[4] = pTVar15;
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar15->WeakReferenceCount = (atomic<int>)((int)pTVar15->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar8 = true;
    puVar12[5] = local_228;
    puVar12[6] = lStack_220;
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  }
  if (local_198.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_198.Accessor,&local_198);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar10->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_218);
  local_1d0.Object = param_1->Object;
  local_1d0.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  lStack_220 = (ulonglong)local_1f0.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
  if (local_1d0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_228 = (TReferenceControllerBase<1> *)SDockingNode::_vcall__640__flat______;
  pTVar14 = TAttribute<enum_SSplitter::ESizeRule>::
            TAttribute<enum_SSplitter::ESizeRule><SDockingNode>
                      (local_148,&local_1d0,(pmf_b0575763 *)&local_228);
  this_01 = &pTVar14->Getter;
  *(ESizeRule *)&pFVar10->_padding_ = pTVar14->Value;
  *(bool *)((longlong)&pFVar10->_padding_ + 4) = pTVar14->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar10->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_01);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_01);
  pvVar3 = *(void **)&(pTVar14->Getter).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_01);
  pTVar15 = (param_1->SharedReferenceCount).ReferenceController;
  local_200 = param_1->Object;
  if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1f8.ReferenceController = pTVar15;
  if ((SDockingNode **)&pFVar10->_padding_ != &local_200) {
    pFVar10->_padding_ = (longlong)local_200;
    local_200 = (SDockingNode *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar10->_padding_,&local_1f8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1f8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_218,
             (FWriteAccessScope *)&local_1b0);
  if ((local_210.DelegateSize != 0) &&
     (local_210.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_210.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_210,0,0,0x10);
    local_210.DelegateSize = 0;
  }
  if (local_1b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b0.Accessor,&local_1b0);
  }
  if (local_210.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_210.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_218);
  TPanelChildren<SSplitter::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_128);
  pTVar2 = &this->Children;
  pTVar5 = (TSharedRef<SDockingNode,1> *)(pTVar2->AllocatorInstance).Data;
  if (param_2 == -1) {
    if ((pTVar5 <= param_1) &&
       (lVar17 = (longlong)(this->Children).ArrayMax, param_1 < pTVar5 + lVar17)) {
      local_240 = (longlong)(this->Children).ArrayNum;
      local_238 = 0x10;
      local_258 = param_1;
      local_250 = pTVar5;
      local_248 = lVar17;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar9 = (this->Children).ArrayNum;
    piVar1 = &(this->Children).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->Children).ArrayNum = iVar9 + 1;
    pFVar18 = (pTVar2->AllocatorInstance).Data;
    *(SDockingNode **)(pFVar18 + (longlong)iVar9 * 0x10) = param_1->Object;
    pTVar15 = (param_1->SharedReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)(pFVar18 + (longlong)iVar9 * 0x10 + 8) = pTVar15;
  }
  else {
    if ((pTVar5 <= param_1) &&
       (lVar17 = (longlong)(this->Children).ArrayMax, param_1 < pTVar5 + lVar17)) {
      local_240 = (longlong)(this->Children).ArrayNum;
      local_238 = 0x10;
      local_258 = param_1;
      local_250 = pTVar5;
      local_248 = lVar17;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar9 = (this->Children).ArrayNum;
    piVar1 = &(this->Children).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar2->AllocatorInstance,piVar1);
    }
    pFVar18 = (pTVar2->AllocatorInstance).Data;
    (this->Children).ArrayNum = iVar9 + 1;
    lVar17 = (longlong)param_2 * 0x10;
    pFVar18 = pFVar18 + lVar17;
    memmove(pFVar18 + 0x10,pFVar18,(longlong)(iVar9 - param_2) << 4);
    pFVar18 = (pTVar2->AllocatorInstance).Data;
    *(SDockingNode **)(pFVar18 + lVar17) = param_1->Object;
    pTVar15 = (param_1->SharedReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)(pFVar18 + lVar17 + 8) = pTVar15;
  }
  if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
    UNLOCK();
  }
  pSVar4 = param_1->Object;
  pcVar6 = *(code **)(pSVar4->_padding_ + 0x250);
  pTVar16 = TSharedFromThis<SWidget,1>::AsShared
                      ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1f0);
  local_1c0 = pTVar16->Object;
  local_1b8 = (pTVar16->SharedReferenceCount).ReferenceController;
  if (local_1b8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_1b8->SharedReferenceCount = (atomic<int>)((int)local_1b8->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_1f0.SharedReferenceCount.ReferenceController._4_4_,
                      local_1f0.SharedReferenceCount.ReferenceController._0_4_));
  (*pcVar6)(pSVar4,&local_1c0);
  return;
}

// AdjustDockedTabsIfNeeded @ 14270c930

/* WARNING: Type propagation algorithm not settling */

void __thiscall SDockingSplitter::AdjustDockedTabsIfNeeded(SDockingSplitter *this)

{
  longlong lVar1;
  SDockingSplitter *this_00;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  TSharedRef<SWidget,1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  FScriptContainerElement *pFVar11;
  TReferenceControllerBase<1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  FScriptContainerElement *pFVar14;
  bool bVar15;
  undefined4 local_res8;
  undefined4 uStackX_c;
  SWidget *local_78;
  FSharedReferencer<1> FStack_70;
  undefined8 local_68;
  FSharedReferencer<1> local_60;
  undefined8 local_58;
  FSharedReferencer<1> local_50;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  TSharedRef<SWidget,1> local_38;
  TSharedRef<SWidget,1> local_28;
  
  pTVar13 = (TReferenceControllerBase<1> *)0x0;
  local_res8 = 0;
  FStack_70.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (((((this->_padding_ == 0) || (this->_padding_ == 0)) || (*(int *)(this->_padding_ + 8) < 1))
      || ((this->_padding_ == 0 || (this->_padding_ == 0)))) || (*(int *)(this->_padding_ + 8) < 1))
  {
    iVar5 = (**(code **)(this->_padding_ + 0x248))();
    if (iVar5 == 2) {
      pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_38);
      pTVar10 = (pTVar8->SharedReferenceCount).ReferenceController;
      local_78 = pTVar8->Object;
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_68 = 0;
      local_60.ReferenceController = pTVar10;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_70,&local_60);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_60.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
      goto LAB_14270cb5e;
    }
LAB_14270cbe4:
    pTVar10 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    pTVar10 = (TReferenceControllerBase<1> *)this->_padding_;
    pTVar9 = pTVar13;
    pTVar12 = pTVar10;
    if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
LAB_14270c9e5:
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      pTVar10 = pTVar12;
      if (bVar15) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      aVar3 = pTVar10->SharedReferenceCount;
      do {
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
        pTVar12 = pTVar13;
        if (aVar3 == (atomic<int>)0x0) goto LAB_14270c9e5;
        LOCK();
        aVar4 = pTVar10->SharedReferenceCount;
        bVar15 = aVar3 == aVar4;
        if (bVar15) {
          pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar4 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar4;
      } while (!bVar15);
      pTVar9 = (TReferenceControllerBase<1> *)this->_padding_;
      pTVar12 = pTVar10;
      if (pTVar9 == (TReferenceControllerBase<1> *)0x0) goto LAB_14270c9e5;
    }
    plVar7 = (longlong *)(**(code **)(pTVar9->_padding_ + 0x260))(pTVar9,local_48);
    if ((*plVar7 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x416,L""), bVar15)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_78 = (SWidget *)*plVar7;
    pTVar9 = (TReferenceControllerBase<1> *)plVar7[1];
    plVar7[1] = 0;
    *plVar7 = 0;
    if ((local_78 == (SWidget *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L""), bVar15)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_58 = 0;
    local_50.ReferenceController = pTVar9;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_70,&local_50);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
LAB_14270cb5e:
    if (local_78 == (SWidget *)0x0) goto LAB_14270cbe4;
    if (((*(longlong *)
           ((longlong)&local_78[1].PersistentState.DesktopGeometry.AbsolutePosition.field0_0x0 + 4)
          == 0) ||
        (lVar1 = *(longlong *)
                  ((longlong)&local_78[1].PersistentState.DesktopGeometry.Position.field0_0x0 + 4),
        lVar1 == 0)) || (*(int *)(lVar1 + 8) < 1)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pTVar10 = pTVar13;
      pTVar13 = (TReferenceControllerBase<1> *)&DAT_00000001;
    }
    else {
      pTVar9 = *(TReferenceControllerBase<1> **)
                &local_78[1].PersistentState.DesktopGeometry.Position.field0_0x0._s_0.Y;
      pTVar10 = pTVar9;
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        aVar3 = pTVar9->SharedReferenceCount;
        do {
          pTVar10 = pTVar13;
          if (aVar3 == (atomic<int>)0x0) goto LAB_14270cbb1;
          LOCK();
          aVar4 = pTVar9->SharedReferenceCount;
          bVar15 = aVar3 == aVar4;
          if (bVar15) {
            pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
            aVar4 = aVar3;
          }
          UNLOCK();
          aVar3 = aVar4;
        } while (!bVar15);
        pTVar13 = *(TReferenceControllerBase<1> **)
                   ((longlong)
                    &local_78[1].PersistentState.DesktopGeometry.AbsolutePosition.field0_0x0 + 4);
        pTVar10 = pTVar9;
      }
LAB_14270cbb1:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      bVar15 = pTVar13 != (TReferenceControllerBase<1> *)0x0;
      pTVar13 = (TReferenceControllerBase<1> *)&DAT_00000001;
      if (bVar15) {
        bVar15 = true;
        goto LAB_14270cbef;
      }
    }
  }
  bVar15 = false;
LAB_14270cbef:
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar15) {
    iVar5 = (this->Children).ArrayNum;
    pFVar11 = (this->Children).AllocatorInstance.Data;
    pFVar14 = pFVar11 + (longlong)iVar5 * 0x10;
    while( true ) {
      if ((this->Children).ArrayNum != iVar5) {
        `TCheckedPointerIterator<TSharedRef<SDockingNode,1>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if (pFVar11 == pFVar14) goto LAB_14270ccff;
      iVar6 = (**(code **)(**(longlong **)pFVar11 + 0x248))();
      if ((iVar6 == 0) &&
         (lVar1 = *(longlong *)pFVar11,
         (TEnumAsByte<EVisibility::Private>)*(uchar *)(lVar1 + 0x39) ==
         EVisibility::Visible.Value.Value)) break;
      iVar6 = (**(code **)(**(longlong **)pFVar11 + 0x248))();
      if (iVar6 == 1) {
        pTVar13 = *(TReferenceControllerBase<1> **)(pFVar11 + 8);
        this_00 = *(SDockingSplitter **)pFVar11;
        if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
          UNLOCK();
        }
        AdjustDockedTabsIfNeeded(this_00);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13)
        ;
      }
      pFVar11 = pFVar11 + 0x10;
    }
    pTVar13 = *(TReferenceControllerBase<1> **)(pFVar11 + 8);
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar15 = FCurveSequence::IsInReverse((FCurveSequence *)(lVar1 + 0x338));
    if ((bVar15) &&
       (bVar15 = FCurveSequence::IsInReverse((FCurveSequence *)(lVar1 + 0x338)), bVar15)) {
      pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)(lVar1 + 8),&local_28);
      FCurveSequence::Play((FCurveSequence *)(lVar1 + 0x338),pTVar8,false,0.0,true);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
LAB_14270ccff:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_70.ReferenceController);
  return;
}

// CleanUpNodes @ 1427125a0

ECleanupRetVal __thiscall SDockingSplitter::CleanUpNodes(SDockingSplitter *this)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  SDockingSplitter *pSVar4;
  SSplitter *this_00;
  SDockingNode *pSVar5;
  code *pcVar6;
  ECleanupRetVal EVar7;
  bool bVar8;
  ECleanupRetVal EVar9;
  ECleanupRetVal EVar10;
  int iVar11;
  EOrientation EVar12;
  uint uVar13;
  EOrientation EVar14;
  TSharedRef<SDockingNode,1> *pTVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  float fVar20;
  undefined1 local_res8 [8];
  ECleanupRetVal local_res10;
  TSharedRef<SDockingNode,1> local_78;
  TAttribute<EVisibility> local_68;
  
  iVar11 = (this->Children).ArrayNum;
  EVar9 = NoTabsUnderNode;
  uVar17 = 0;
  if (0 < iVar11) {
    lVar19 = 0;
    do {
      uVar16 = 0;
      if ((int)uVar17 < (this->Children).ArrayNum) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      pFVar2 = (this->Children).AllocatorInstance.Data;
      EVar10 = (**(code **)(**(longlong **)(pFVar2 + lVar19 * 0x10) + 0x290))();
      EVar7 = EVar10;
      if ((int)EVar9 < (int)EVar10) {
        EVar7 = EVar9;
      }
      EVar9 = EVar7;
      local_res10 = EVar9;
      iVar11 = (**(code **)(**(longlong **)(pFVar2 + lVar19 * 0x10) + 0x248))();
      if (iVar11 == 0) {
        pTVar3 = *(TReferenceControllerBase<1> **)(pFVar2 + lVar19 * 0x10 + 8);
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (EVar10 == NoTabsUnderNode) {
          RemoveChildAt(this,uVar17);
        }
        else {
          uVar17 = uVar17 + 1;
          lVar19 = lVar19 + 1;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      }
      else if (iVar11 == 1) {
        pTVar3 = *(TReferenceControllerBase<1> **)(pFVar2 + lVar19 * 0x10 + 8);
        pSVar4 = *(SDockingSplitter **)(pFVar2 + lVar19 * 0x10);
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (EVar10 == NoTabsUnderNode) {
          RemoveChildAt(this,uVar17);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar3);
          EVar9 = local_res10;
        }
        else {
          if ((pSVar4->Children).ArrayNum != 1) {
            if (((this->Splitter).Object == (SSplitter *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              EVar9 = (*pcVar6)();
              return EVar9;
            }
            EVar14 = SSplitter::GetOrientation((this->Splitter).Object);
            if (((pSVar4->Splitter).Object == (SSplitter *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              EVar9 = (*pcVar6)();
              return EVar9;
            }
            EVar12 = SSplitter::GetOrientation((pSVar4->Splitter).Object);
            if (EVar12 != EVar14) {
              uVar17 = uVar17 + 1;
              lVar19 = lVar19 + 1;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar3);
              EVar9 = local_res10;
              goto LAB_1427128b3;
            }
          }
          fVar1 = *(float *)&pSVar4->_padding_;
          fVar20 = ComputeChildCoefficientTotal(pSVar4);
          RemoveChildAt(this,uVar17);
          uVar16 = 0;
          if (0 < (pSVar4->Children).ArrayNum) {
            lVar18 = 0;
            do {
              uVar13 = 0;
              if ((int)uVar16 < (pSVar4->Children).ArrayNum) {
                uVar13 = ~uVar16 >> 0x1f;
              }
              if ((uVar13 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                EVar9 = (*pcVar6)();
                return EVar9;
              }
              pFVar2 = (pSVar4->Children).AllocatorInstance.Data;
              local_78.Object = *(SDockingNode **)(pFVar2 + lVar18);
              local_78.SharedReferenceCount.ReferenceController =
                   *(TReferenceControllerBase<1> **)(pFVar2 + lVar18 + 8);
              if (local_78.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                     + 1);
                UNLOCK();
              }
              (local_78.Object)->SizeCoefficient =
                   (fVar1 / fVar20) * (local_78.Object)->SizeCoefficient;
              (**(code **)((local_78.Object)->_padding_ + 0x2a0))(local_78.Object);
              AddChildNode(this,&local_78,uVar17);
              uVar17 = uVar17 + 1;
              lVar19 = lVar19 + 1;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_78.SharedReferenceCount.ReferenceController);
              uVar16 = uVar16 + 1;
              lVar18 = lVar18 + 0x10;
            } while ((int)uVar16 < (pSVar4->Children).ArrayNum);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar3);
          EVar9 = local_res10;
        }
      }
      else {
        local_res8[0] = 0;
        `SDockingSplitter::CleanUpNodes'::__l26::<lambda_1>::operator()(local_res8);
      }
LAB_1427128b3:
      iVar11 = (this->Children).ArrayNum;
    } while ((int)uVar17 < iVar11);
  }
  if (iVar11 == 1) {
    iVar11 = (**(code **)(**(longlong **)(this->Children).AllocatorInstance.Data + 0x248))();
    if (iVar11 != 1) {
      if (((this->Children).ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      iVar11 = (**(code **)(**(longlong **)(this->Children).AllocatorInstance.Data + 0x248))();
      if (iVar11 != 2) goto LAB_142712af0;
    }
    if (((this->Children).ArrayNum < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      EVar9 = (*pcVar6)();
      return EVar9;
    }
    pFVar2 = (this->Children).AllocatorInstance.Data;
    pTVar3 = *(TReferenceControllerBase<1> **)(pFVar2 + 8);
    pSVar4 = *(SDockingSplitter **)pFVar2;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    RemoveChildAt(this,0);
    if (((this->Splitter).Object == (SSplitter *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      EVar9 = (*pcVar6)();
      return EVar9;
    }
    this_00 = (this->Splitter).Object;
    if (((pSVar4->Splitter).Object == (SSplitter *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      EVar9 = (*pcVar6)();
      return EVar9;
    }
    EVar14 = SSplitter::GetOrientation((pSVar4->Splitter).Object);
    SSplitter::SetOrientation(this_00,EVar14);
    fVar20 = ComputeChildCoefficientTotal(pSVar4);
    fVar1 = *(float *)&pSVar4->_padding_;
    uVar17 = 0;
    if (0 < (pSVar4->Children).ArrayNum) {
      lVar19 = 0;
      do {
        uVar16 = 0;
        if ((int)uVar17 < (pSVar4->Children).ArrayNum) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        pTVar15 = (TSharedRef<SDockingNode,1> *)((pSVar4->Children).AllocatorInstance.Data + lVar19)
        ;
        pSVar5 = pTVar15->Object;
        pSVar5->SizeCoefficient = (fVar1 / fVar20) * pSVar5->SizeCoefficient;
        (**(code **)(pSVar5->_padding_ + 0x2a0))();
        AddChildNode(this,pTVar15,-1);
        uVar17 = uVar17 + 1;
        lVar19 = lVar19 + 0x10;
      } while ((int)uVar17 < (pSVar4->Children).ArrayNum);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
LAB_142712af0:
  if ((((EVar9 == HistoryTabsUnderNode) && (this->_padding_ != 0)) && (this->_padding_ != 0)) &&
     (0 < *(int *)(this->_padding_ + 8))) {
    local_68.Value = (EVisibility)EVisibility::Collapsed.Value.Value;
    local_68.bIsSet = true;
    local_68.Getter._0_8_ = 0;
    local_68.Getter._8_8_ = 0;
    local_68.Getter._16_8_ = 0;
    SCompoundWidget::SetVisibility((SCompoundWidget *)this,&local_68);
  }
  return EVar9;
}

// ComputeChildCoefficientTotal @ 142715000

float __thiscall SDockingSplitter::ComputeChildCoefficientTotal(SDockingSplitter *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  float fVar7;
  
  uVar5 = 0;
  fVar7 = 0.0;
  if ((this->Children).ArrayNum < 1) {
    return 0.0;
  }
  lVar6 = 0;
  do {
    uVar4 = 0;
    if ((int)uVar5 < (this->Children).ArrayNum) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        fVar7 = (float)(*pcVar2)();
        return fVar7;
      }
    }
    uVar5 = uVar5 + 1;
    pFVar1 = (this->Children).AllocatorInstance.Data + lVar6;
    lVar6 = lVar6 + 0x10;
    fVar7 = fVar7 + *(float *)(*(longlong *)pFVar1 + 0x2b8);
  } while ((int)uVar5 < (this->Children).ArrayNum);
  return fVar7;
}

// Construct @ 142718730

void __thiscall
SDockingSplitter::Construct
          (SDockingSplitter *this,FArguments *param_1,TSharedRef<FTabManager::FSplitter,1> *param_2)

{
  longlong *this_00;
  TReferenceControllerBase<1> *pTVar1;
  FMemScope FVar2;
  TReferenceControllerBase<1> *pTVar3;
  FArguments *pFVar4;
  TSharedRef<SSplitter,1> *pTVar5;
  T0RequiredArgs local_res8 [16];
  FLLMScope local_res18 [2];
  FName local_res20;
  FMemScope local_2f8;
  TReferenceControllerBase<1> *pTStack_2f0;
  TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs> local_2e8;
  TSharedRef<SSplitter,1> local_2d0;
  FArguments local_2c0;
  
  pFVar4 = SSplitter::FArguments::FArguments(&local_2c0);
  pFVar4->_Orientation = param_2->Object->Orientation;
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2f8,&local_res20,true);
  TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs>
            (&local_2e8,"SSplitter",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SDockingSplitter.cpp"
             ,0xf,local_res8);
  FMemScope::~FMemScope(&local_2f8);
  FLLMScope::~FLLMScope(local_res18);
  if (local_2e8._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2e8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2e8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  pTVar1 = (this->Splitter).SharedReferenceCount.ReferenceController;
  (this->Splitter).Object = local_2e8._Widget.Object;
  (this->Splitter).SharedReferenceCount.ReferenceController =
       local_2e8._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar5 = TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs>::operator<<=
                     (&local_2e8,&local_2d0,pFVar4);
  this_00 = &this->_padding_;
  pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
  FVar2 = (FMemScope)pTVar5->Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)FVar2;
  this->_padding_ = (longlong)pTVar1;
  local_2f8 = FVar2;
  pTStack_2f0 = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2d0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2e8._Widget.SharedReferenceCount.ReferenceController);
  SSplitter::FArguments::~FArguments(&local_2c0);
  *(int *)&this->_padding_ = (int)param_2->Object->_padding_;
                    /* WARNING: Could not recover jumptable at 0x0001427188d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2a0))(this);
  return;
}

// DoesDirectionMatchOrientation @ 14272c960

bool __cdecl
SDockingSplitter::DoesDirectionMatchOrientation(RelativeDirection param_1,EOrientation param_2)

{
  if ((((param_1 & ~RightOf) != LeftOf) || (param_2 != Orient_Horizontal)) &&
     (((param_1 - Above & 0xfffffffd) != 0 || (param_2 != Orient_Vertical)))) {
    return false;
  }
  return true;
}

// FindTabStack @ 142736650

TSharedRef<SDockingNode,1> * __thiscall
SDockingSplitter::FindTabStack
          (SDockingSplitter *this,TSharedRef<SDockingNode,1> *__return_storage_ptr__,
          ETabStackToFind param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  EOrientation EVar5;
  uint uVar6;
  int iVar7;
  TSharedRef<SDockingNode,1> *pTVar8;
  longlong lVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  TReferenceControllerBase<1> **ppTVar12;
  SDockingSplitter *this_00;
  TReferenceControllerBase<1> *pTVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res8 [8];
  TReferenceControllerBase<1> *local_50;
  SDockingSplitter *local_48;
  TReferenceControllerBase<1> *local_40;
  
  uVar14 = 0;
  if (param_1 == UpperLeft) {
LAB_14273675f:
    iVar7 = (this->Children).ArrayNum;
    pFVar11 = (this->Children).AllocatorInstance.Data;
    pFVar15 = pFVar11 + (longlong)iVar7 * 0x10;
    while( true ) {
      if ((this->Children).ArrayNum != iVar7) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TSharedRef<SDockingNode,1>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar11 == pFVar15) {
        if ((this->Children).ArrayNum < 1) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            pTVar8 = (TSharedRef<SDockingNode,1> *)(*pcVar2)();
            return pTVar8;
          }
        }
        pFVar11 = (this->Children).AllocatorInstance.Data;
        pTVar13 = *(TReferenceControllerBase<1> **)(pFVar11 + 8);
        this_00 = *(SDockingSplitter **)pFVar11;
        local_50 = pTVar13;
        if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
          UNLOCK();
        }
        goto LAB_14273683d;
      }
      pTVar13 = *(TReferenceControllerBase<1> **)(pFVar11 + 8);
      this_00 = *(SDockingSplitter **)pFVar11;
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((TEnumAsByte<EVisibility::Private>)*(uchar *)((longlong)&this_00->_padding_ + 1) ==
          EVisibility::Visible.Value.Value) break;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
      pFVar11 = pFVar11 + 0x10;
    }
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_50 = pTVar13;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
LAB_14273683d:
    ppTVar12 = &local_50;
    bVar4 = false;
    uVar14 = 2;
  }
  else {
    if ((this->Splitter).Object == (SSplitter *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TSharedRef<SDockingNode,1> *)(*pcVar2)();
        return pTVar8;
      }
    }
    EVar5 = SSplitter::GetOrientation((this->Splitter).Object);
    if (EVar5 == Orient_Vertical) goto LAB_14273675f;
    iVar7 = (this->Children).ArrayNum;
    uVar10 = iVar7 - 1;
    uVar6 = uVar14;
    if ((int)uVar10 < iVar7) {
      uVar6 = ~uVar10 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TSharedRef<SDockingNode,1> *)(*pcVar2)();
        return pTVar8;
      }
    }
    lVar9 = (longlong)(this->Children).ArrayNum;
    pFVar11 = (this->Children).AllocatorInstance.Data;
    local_40 = *(TReferenceControllerBase<1> **)(pFVar11 + lVar9 * 0x10 + -8);
    this_00 = *(SDockingSplitter **)(pFVar11 + lVar9 * 0x10 + -0x10);
    local_48 = this_00;
    if (local_40 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
      UNLOCK();
    }
    ppTVar12 = &local_40;
    bVar4 = true;
    pTVar13 = local_50;
  }
  pTVar3 = local_40;
  pTVar1 = *ppTVar12;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (uVar14 != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  iVar7 = (**(code **)(this_00->_padding_ + 0x248))(this_00);
  if (iVar7 != 0) {
    if (iVar7 - 1U < 2) {
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      FindTabStack(this_00,__return_storage_ptr__,param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      goto LAB_14273690a;
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2651259620781194827>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SDockingSplitter.cpp"
                       ,0x1b5,"CandidateType == DockArea || CandidateType == DockSplitter");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar8 = (TSharedRef<SDockingNode,1> *)(*pcVar2)();
      return pTVar8;
    }
  }
  __return_storage_ptr__->Object = (SDockingNode *)this_00;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
LAB_14273690a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// FindTabStackToHouseWindowControls @ 142736930

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDockingTabStack,1> * __thiscall
SDockingSplitter::FindTabStackToHouseWindowControls
          (SDockingSplitter *this,TSharedRef<SDockingTabStack,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<SDockingNode,1> *pTVar2;
  TSharedRef<SDockingNode,1> local_18;
  
  pTVar2 = FindTabStack(this,&local_18,UpperRight);
  __return_storage_ptr__->Object = (SDockingTabStack *)pTVar2->Object;
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

// FindTabStackToHouseWindowIcon @ 142736980

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDockingTabStack,1> * __thiscall
SDockingSplitter::FindTabStackToHouseWindowIcon
          (SDockingSplitter *this,TSharedRef<SDockingTabStack,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<SDockingNode,1> *pTVar2;
  TSharedRef<SDockingNode,1> local_18;
  
  pTVar2 = FindTabStack(this,&local_18,UpperLeft);
  __return_storage_ptr__->Object = (SDockingTabStack *)pTVar2->Object;
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

// GatherPersistentLayout @ 142738700

TSharedPtr<FTabManager::FLayoutNode,1> * __thiscall
SDockingSplitter::GatherPersistentLayout
          (SDockingSplitter *this,TSharedPtr<FTabManager::FLayoutNode,1> *__return_storage_ptr__)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  FLayoutNode *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong *plVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  EOrientation EVar10;
  uint uVar11;
  int iVar12;
  FSplitter *pFVar13;
  TSharedPtr<FTabManager::FLayoutNode,1> *pTVar14;
  TSharedRef<FTabManager::FLayoutNode,1> *pTVar15;
  uint uVar16;
  FSplitter *pFVar17;
  TRawPtrProxy<FTabManager::FSplitter> local_res8;
  longlong local_88;
  TReferenceControllerBase<1> *pTStack_80;
  longlong local_78;
  TReferenceControllerBase<1> *pTStack_70;
  TSharedRef<FTabManager::FSplitter,1> local_68;
  TSharedRef<FTabManager::FLayoutNode,1> local_58;
  TSharedRef<FTabManager::FLayoutNode,1> local_48;
  TSharedRef<FTabManager::FLayoutNode,1> local_38;
  
  pFVar17 = (FSplitter *)0x0;
  bVar8 = false;
  pFVar13 = ::operator_new(0x38);
  local_res8.Object = pFVar17;
  if (pFVar13 != (FSplitter *)0x0) {
    pFVar13->_padding_ = 0;
    pFVar13->_padding_ = (longlong)&___7FSplitter_FTabManager__6B_;
    pFVar13->_padding_ = 0;
    *(undefined4 *)&pFVar13->_padding_ = 0x3f800000;
    pFVar13->Orientation = Orient_Horizontal;
    (pFVar13->ChildNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar13->ChildNodes).ArrayNum = 0;
    (pFVar13->ChildNodes).ArrayMax = 0;
    local_res8.Object = pFVar13;
  }
  TSharedRef<FTabManager::FSplitter,1>::TSharedRef<FTabManager::FSplitter,1><FTabManager::FSplitter>
            (&local_68,&local_res8);
  if (((this->Splitter).Object == (SSplitter *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pTVar14 = (TSharedPtr<FTabManager::FLayoutNode,1> *)(*pcVar7)();
    return pTVar14;
  }
  EVar10 = SSplitter::GetOrientation((this->Splitter).Object);
  (local_68.Object)->Orientation = EVar10;
  pTVar15 = TSharedFromThis<FTabManager::FLayoutNode,1>::AsShared
                      ((TSharedFromThis<FTabManager::FLayoutNode,1> *)&(local_68.Object)->_padding_,
                       &local_58);
  pTVar2 = (pTVar15->SharedReferenceCount).ReferenceController;
  pFVar3 = pTVar15->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  pFVar3->SizeCoefficient = *(float *)&this->_padding_;
  pTVar15 = TSharedFromThis<FTabManager::FLayoutNode,1>::AsShared
                      ((TSharedFromThis<FTabManager::FLayoutNode,1> *)&pFVar3->_padding_,&local_48);
  pTVar4 = (pTVar15->SharedReferenceCount).ReferenceController;
  pFVar3 = pTVar15->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  pFVar13 = pFVar17;
  if (0 < (this->Children).ArrayNum) {
    do {
      uVar16 = (uint)pFVar17;
      uVar11 = 0;
      if ((int)uVar16 < (this->Children).ArrayNum) {
        uVar11 = ~uVar16 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        pTVar14 = (TSharedPtr<FTabManager::FLayoutNode,1> *)(*pcVar7)();
        return pTVar14;
      }
      plVar5 = *(longlong **)
                ((longlong)&pFVar13->_padding_ + (longlong)(this->Children).AllocatorInstance.Data);
      (**(code **)(*plVar5 + 0x288))(plVar5,&local_78);
      if (local_78 != 0) {
        bVar8 = true;
        if ((local_78 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x408,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          pTVar14 = (TSharedPtr<FTabManager::FLayoutNode,1> *)(*pcVar7)();
          return pTVar14;
        }
        local_88 = local_78;
        pTStack_80 = pTStack_70;
        if (pTStack_70 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_70->SharedReferenceCount =
               (atomic<int>)((int)pTStack_70->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((local_78 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x25d,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          pTVar14 = (TSharedPtr<FTabManager::FLayoutNode,1> *)(*pcVar7)();
          return pTVar14;
        }
        if ((((longlong *)pFVar3[1]._padding_ <= &local_88) &&
            (&local_88 <
             (longlong *)pFVar3[1]._padding_ +
             (longlong)*(int *)((longlong)&pFVar3[1]._padding_ + 4) * 2)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar7 = (code *)swi(3);
          pTVar14 = (TSharedPtr<FTabManager::FLayoutNode,1> *)(*pcVar7)();
          return pTVar14;
        }
        iVar12 = (int)pFVar3[1]._padding_;
        piVar1 = (int *)((longlong)&pFVar3[1]._padding_ + 4);
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,(ForAnyElementType *)&pFVar3[1]._padding_,piVar1);
        }
        *(int *)&pFVar3[1]._padding_ = iVar12 + 1;
        lVar6 = pFVar3[1]._padding_;
        *(longlong *)(lVar6 + (longlong)iVar12 * 0x10) = local_88;
        *(TReferenceControllerBase<1> **)(lVar6 + 8 + (longlong)iVar12 * 0x10) = pTStack_80;
        if (pTStack_80 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_80->SharedReferenceCount =
               (atomic<int>)((int)pTStack_80->SharedReferenceCount + 1);
          UNLOCK();
        }
        pTVar15 = TSharedFromThis<FTabManager::FLayoutNode,1>::AsShared
                            ((TSharedFromThis<FTabManager::FLayoutNode,1> *)&pFVar3->_padding_,
                             &local_38);
        pTVar2 = (pTVar15->SharedReferenceCount).ReferenceController;
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_38.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_80);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_70);
      pFVar17 = (FSplitter *)(ulonglong)(uVar16 + 1);
      pFVar13 = (FSplitter *)&pFVar13->_padding_;
    } while ((int)(uVar16 + 1) < (this->Children).ArrayNum);
    if (bVar8) {
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      __return_storage_ptr__->Object = pFVar3;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
      goto LAB_142738a7b;
    }
  }
  __return_storage_ptr__->Object = (FLayoutNode *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
LAB_142738a7b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return __return_storage_ptr__;
}

// GetAllChildTabs @ 142739e50

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<TSharedRef<SDockTab,1>,TSizedDefaultAllocator<32>_> * __thiscall
SDockingSplitter::GetAllChildTabs
          (SDockingSplitter *this,
          TArray<TSharedRef<SDockTab,1>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TArray<TSharedRef<SDockTab,1>,TSizedDefaultAllocator<32>_> *pTVar7;
  uint uVar8;
  longlong lVar9;
  TSharedRef<SDockTab,1> *local_38;
  int local_30;
  
  uVar8 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  if (0 < (this->Children).ArrayNum) {
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (this->Children).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TSharedRef<SDockTab,1>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar7;
      }
      plVar2 = *(longlong **)((this->Children).AllocatorInstance.Data + lVar9);
      pTVar7 = (TArray<TSharedRef<SDockTab,1>,TSizedDefaultAllocator<32>_> *)
               (**(code **)(*plVar2 + 0x268))(plVar2,&local_38);
      if ((__return_storage_ptr__ == pTVar7) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x986,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TSharedRef<SDockTab,1>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar7;
      }
      iVar1 = pTVar7->ArrayNum;
      if (iVar1 != 0) {
        iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,8,iVar1,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
        memmove((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x10,
                (pTVar7->AllocatorInstance).Data,(longlong)iVar1 << 4);
        pTVar7->ArrayNum = 0;
      }
      DestructItems<TSharedRef<SDockTab,1>,int>(local_38,local_30);
      if (local_38 != (TSharedRef<SDockTab,1> *)0x0) {
        FMemory::Free(local_38);
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x10;
    } while ((int)uVar8 < (this->Children).ArrayNum);
  }
  return __return_storage_ptr__;
}

// GetChildNodes @ 14273b950

TArray<TSharedRef<SDockingNode,1>,TSizedDefaultAllocator<32>_> * __thiscall
SDockingSplitter::GetChildNodes(SDockingSplitter *this)

{
  return &this->Children;
}

// GetChildNodesRecursively @ 14273b960

TArray<TSharedRef<SDockingNode,1>,TSizedDefaultAllocator<32>_> * __thiscall
SDockingSplitter::GetChildNodesRecursively
          (SDockingSplitter *this,
          TArray<TSharedRef<SDockingNode,1>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  SDockingSplitter *this_00;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  TArray<TSharedRef<SDockingNode,1>,TSizedDefaultAllocator<32>_> *pTVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  longlong local_res8;
  TArray<TSharedRef<SDockingNode,1>,TSizedDefaultAllocator<32>_> local_38;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayNum;
  piVar2 = &__return_storage_ptr__->ArrayMax;
  *piVar1 = 0;
  uVar13 = 0;
  *piVar2 = 0;
  if (0 < (this->Children).ArrayNum) {
    local_res8 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar13 < (this->Children).ArrayNum) {
        uVar7 = ~uVar13 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TArray<TSharedRef<SDockingNode,1>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar10;
      }
      pFVar12 = (this->Children).AllocatorInstance.Data + local_res8;
      pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar11 <= pFVar12) && (pFVar12 < pFVar11 + (longlong)*piVar2 * 0x10)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TArray<TSharedRef<SDockingNode,1>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar10;
      }
      iVar8 = *piVar1;
      if (iVar8 == *piVar2) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&__return_storage_ptr__->AllocatorInstance,piVar2);
      }
      *piVar1 = iVar8 + 1;
      pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
      *(undefined8 *)pFVar11 = *(undefined8 *)pFVar12;
      lVar3 = *(longlong *)(pFVar12 + 8);
      *(longlong *)(pFVar11 + 8) = lVar3;
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      iVar8 = (**(code **)(**(longlong **)pFVar12 + 0x248))();
      if ((iVar8 == 1) || (iVar8 = (**(code **)(**(longlong **)pFVar12 + 0x248))(), iVar8 == 2)) {
        this_00 = *(SDockingSplitter **)pFVar12;
        pTVar4 = *(TReferenceControllerBase<1> **)(pFVar12 + 8);
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        pTVar10 = GetChildNodesRecursively(this_00,&local_38);
        if ((__return_storage_ptr__ == pTVar10) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x986,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TArray<TSharedRef<SDockingNode,1>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar10;
        }
        iVar8 = pTVar10->ArrayNum;
        if (iVar8 != 0) {
          iVar9 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,8,iVar8,&__return_storage_ptr__->AllocatorInstance,piVar1,piVar2);
          memmove((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar9 * 0x10,
                  (pTVar10->AllocatorInstance).Data,(longlong)iVar8 << 4);
          pTVar10->ArrayNum = 0;
        }
        DestructItems<TSharedRef<SDockingNode,1>,int>
                  ((TSharedRef<SDockingNode,1> *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
        if ((TSharedRef<SDockingNode,1> *)local_38.AllocatorInstance.Data !=
            (TSharedRef<SDockingNode,1> *)0x0) {
          FMemory::Free(local_38.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      }
      uVar13 = uVar13 + 1;
      local_res8 = local_res8 + 0x10;
    } while ((int)uVar13 < (this->Children).ArrayNum);
  }
  return __return_storage_ptr__;
}

// GetNodeType @ 142740730

Type __thiscall SDockingSplitter::GetNodeType(SDockingSplitter *this)

{
  return DockSplitter;
}

// GetNumTabs @ 142740760

int __thiscall SDockingSplitter::GetNumTabs(SDockingSplitter *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  iVar4 = 0;
  uVar6 = 0;
  if (0 < (this->Children).ArrayNum) {
    lVar7 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar6 < (this->Children).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      iVar5 = (**(code **)(**(longlong **)((this->Children).AllocatorInstance.Data + lVar7) + 0x270)
              )();
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x10;
      iVar4 = iVar4 + iVar5;
    } while ((int)uVar6 < (this->Children).ArrayNum);
  }
  return iVar4;
}

// GetOrientation @ 1427420b0

EOrientation __thiscall SDockingSplitter::GetOrientation(SDockingSplitter *this)

{
  code *pcVar1;
  bool bVar2;
  EOrientation EVar3;
  
  if ((this->Splitter).Object == (SSplitter *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  EVar3 = SSplitter::GetOrientation((this->Splitter).Object);
  return EVar3;
}

// GetSizeRule @ 142743cc0

ESizeRule __thiscall SDockingSplitter::GetSizeRule(SDockingSplitter *this)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Children).ArrayNum;
  if (0 < iVar1) {
    pFVar3 = (this->Children).AllocatorInstance.Data;
    pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((this->Children).ArrayNum != iVar1) {
        `TCheckedPointerIterator<TSharedRef<SDockingNode,1>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar3 == pFVar4) {
        return SizeToContent;
      }
      iVar2 = (**(code **)(**(longlong **)pFVar3 + 0x280))();
      if (iVar2 == 1) break;
      pFVar3 = pFVar3 + 0x10;
    }
  }
  return FractionOfParent;
}

// MostResponsibility @ 14275c700

ECleanupRetVal __cdecl
SDockingSplitter::MostResponsibility(ECleanupRetVal param_1,ECleanupRetVal param_2)

{
  if ((int)param_1 < (int)param_2) {
    param_2 = param_1;
  }
  return param_2;
}

// OnResized @ 14276a330

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockingSplitter::OnResized(SDockingSplitter *this)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<FTabManager,1> *pTVar3;
  SDockingArea *local_28;
  TReferenceControllerBase<1> *local_20;
  TSharedRef<FTabManager,1> local_18;
  
  (**(code **)(this->_padding_ + 0x260))(this,&local_28);
  if (local_28 != (SDockingArea *)0x0) {
    if ((local_28 == (SDockingArea *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pTVar3 = SDockingArea::GetTabManager(local_28,&local_18);
    FTabManager::RequestSavePersistentLayout(pTVar3->Object);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  return;
}

// PlaceNode @ 142772910

void __thiscall
SDockingSplitter::PlaceNode
          (SDockingSplitter *this,TSharedRef<SDockingNode,1> *param_1,RelativeDirection param_2,
          TSharedRef<SDockingNode,1> *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  EOrientation EVar4;
  FArguments *pFVar5;
  FSplitter *pFVar6;
  TSharedRef<FTabManager::FLayoutNode,1> *pTVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  TRawPtrProxy<FTabManager::FSplitter> local_res8;
  FLLMScope local_res18 [5];
  FName local_2c8;
  T1RequiredArgs<TSharedRef<FTabManager::FSplitter,1>_&&> local_2c0;
  FMemScope local_2b8;
  TSharedRef<FTabManager::FSplitter,1> local_2b0;
  TSharedRef<FTabManager::FSplitter,1> local_2a0;
  TSharedRef<FTabManager::FLayoutNode,1> local_290;
  TSharedRef<SDockingSplitter,1> local_278;
  TSharedRef<SDockingNode,1> local_268;
  TSlateDecl<SDockingSplitter,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FSplitter,1>_&&>_>
  local_258;
  FSlateBaseNamedArgs local_240;
  
  if (((this->Splitter).Object == (SSplitter *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  EVar4 = SSplitter::GetOrientation((this->Splitter).Object);
  if ((((param_2 & ~RightOf) != LeftOf) || (EVar4 != Orient_Horizontal)) &&
     (((param_2 - Above & 0xfffffffd) != 0 || (EVar4 != Orient_Vertical)))) {
    iVar8 = (this->Children).ArrayNum;
    if (((this->Splitter).Object == (SSplitter *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    EVar4 = SSplitter::GetOrientation((this->Splitter).Object);
    local_res8.Object = (FSplitter *)0x0;
    if (iVar8 != 1) {
      pFVar5 = FArguments::FArguments((FArguments *)&local_240);
      pFVar6 = ::operator_new(0x38);
      if (pFVar6 != (FSplitter *)0x0) {
        pFVar6->_padding_ = 0;
        pFVar6->_padding_ = (longlong)&___7FSplitter_FTabManager__6B_;
        pFVar6->_padding_ = 0;
        *(undefined4 *)&pFVar6->_padding_ = 0x3f800000;
        pFVar6->Orientation = Orient_Horizontal;
        (pFVar6->ChildNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar6->ChildNodes).ArrayNum = 0;
        (pFVar6->ChildNodes).ArrayMax = 0;
        local_res8.Object = pFVar6;
      }
      TSharedRef<FTabManager::FSplitter,1>::
      TSharedRef<FTabManager::FSplitter,1><FTabManager::FSplitter>(&local_2a0,&local_res8);
      (local_2a0.Object)->Orientation = (uint)(EVar4 == Orient_Horizontal);
      pTVar7 = TSharedFromThis<FTabManager::FLayoutNode,1>::AsShared
                         ((TSharedFromThis<FTabManager::FLayoutNode,1> *)
                          &(local_2a0.Object)->_padding_,&local_290);
      local_2b0.Object = (FSplitter *)pTVar7->Object;
      local_2b0.SharedReferenceCount.ReferenceController =
           (pTVar7->SharedReferenceCount).ReferenceController;
      if (local_2b0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_2b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_2b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_290.SharedReferenceCount.ReferenceController);
      local_2c0.Arg0 = &local_2b0;
      FLLMScope::FLLMScope
                (local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
      local_2c8 = LLMTagDeclaration_UI_Slate.UniqueName;
      FMemScope::FMemScope(&local_2b8,&local_2c8,true);
      TSlateDecl<SDockingSplitter,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FSplitter,1>_&&>_>
      ::
      TSlateDecl<SDockingSplitter,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FSplitter,1>_&&>_>
                (&local_258,"SDockingSplitter",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SDockingSplitter.cpp"
                 ,0x114,&local_2c0);
      FMemScope::~FMemScope(&local_2b8);
      FLLMScope::~FLLMScope(local_res18);
      TSlateDecl<SDockingSplitter,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FSplitter,1>_&&>_>
      ::operator<<=(&local_258,&local_278,pFVar5);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_258._Widget.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2b0.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2a0.SharedReferenceCount.ReferenceController);
      FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_240);
      local_268.Object = (SDockingNode *)local_278.Object;
      local_268.SharedReferenceCount.ReferenceController =
           local_278.SharedReferenceCount.ReferenceController;
      if (local_278.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      ReplaceChild(this,param_3,&local_268);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_278.SharedReferenceCount.ReferenceController);
      AddChildNode(local_278.Object,param_3,-1);
      PlaceNode(local_278.Object,param_1,param_2,param_3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_278.SharedReferenceCount.ReferenceController);
      return;
    }
    if (((this->Splitter).Object == (SSplitter *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    SSplitter::SetOrientation((this->Splitter).Object,(uint)(EVar4 == Orient_Horizontal));
  }
  pFVar1 = (this->Children).AllocatorInstance.Data;
  if (pFVar1 != pFVar1 + (longlong)(this->Children).ArrayNum * 0x10) {
    pFVar9 = pFVar1;
    do {
      if (*(SDockingNode **)pFVar9 == param_3->Object) {
        iVar8 = (int)((longlong)pFVar9 - (longlong)pFVar1 >> 4);
        if (iVar8 != -1) goto LAB_142772a9a;
        goto LAB_142772a74;
      }
      pFVar9 = pFVar9 + 0x10;
    } while (pFVar9 != pFVar1 + (longlong)(this->Children).ArrayNum * 0x10);
  }
  iVar8 = -1;
LAB_142772a74:
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("RelativeToMeIndex != INDEX_NONE",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SDockingSplitter.cpp"
                     ,0x11e,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_142772a9a:
  if (param_2 < RightOf) {
    AddChildNode(this,param_1,iVar8);
  }
  else {
    AddChildNode(this,param_1,iVar8 + 1);
  }
  return;
}

// RemoveChild @ 14277bec0

void __thiscall
SDockingSplitter::RemoveChild(SDockingSplitter *this,TSharedRef<SDockingNode,1> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->Children).AllocatorInstance.Data;
  if (pFVar1 != pFVar1 + (longlong)(this->Children).ArrayNum * 0x10) {
    pFVar5 = pFVar1;
    do {
      if (*(SDockingNode **)pFVar5 == param_1->Object) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 4);
        if (iVar4 == -1) goto LAB_14277bf03;
        goto LAB_14277bf29;
      }
      pFVar5 = pFVar5 + 0x10;
    } while (pFVar5 != pFVar1 + (longlong)(this->Children).ArrayNum * 0x10);
  }
  iVar4 = -1;
LAB_14277bf03:
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("IndexToRemove != INDEX_NONE",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SDockingSplitter.cpp"
                     ,0x4b,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14277bf29:
  RemoveChildAt(this,iVar4);
  return;
}

// RemoveChildAt @ 14277bf60

void __thiscall SDockingSplitter::RemoveChildAt(SDockingSplitter *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  
  uVar4 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  _Dst = (this->Children).AllocatorInstance.Data + (longlong)param_1 * 0x10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(_Dst + 8));
  iVar5 = (this->Children).ArrayNum + ~param_1;
  if (iVar5 != 0) {
    memmove(_Dst,_Dst + 0x10,(longlong)iVar5 << 4);
  }
  piVar1 = &(this->Children).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,&(this->Children).AllocatorInstance,(this->Children).ArrayNum,
             &(this->Children).ArrayMax);
  if ((this->Splitter).Object == (SSplitter *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SSplitter::RemoveAt((this->Splitter).Object,param_1);
  return;
}

// ReplaceChild @ 14277d6d0

void __thiscall
SDockingSplitter::ReplaceChild
          (SDockingSplitter *this,TSharedRef<SDockingNode,1> *param_1,
          TSharedRef<SDockingNode,1> *param_2)

{
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  TDelegate<SSplitter::ESizeRule___cdecl(void),FDefaultDelegateUserPolicy> *this_01;
  FScriptContainerElement *pFVar1;
  SDockingNode *pSVar2;
  void *pvVar3;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  uint uVar7;
  FSlot *this_02;
  TAttribute<float> *pTVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  TAttribute<SSplitter::ESizeRule> *pTVar11;
  TSharedRef<SWidget,1> *pTVar12;
  longlong lVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  TReferenceControllerBase<1> *pTVar16;
  bool bVar17;
  uint uStackX_c;
  longlong lStack_100;
  TSharedRef<SWidget,1> local_f8;
  TSharedRef<SDockingNode,1> local_e8;
  TSharedRef<SDockingNode,1> local_d8;
  SWidget *local_c8;
  TReferenceControllerBase<1> *local_c0;
  FDestructionSentinel local_b8;
  undefined1 *local_a0;
  code *local_98;
  longlong lStack_90;
  code *local_88;
  longlong lStack_80;
  longlong local_78;
  TReferenceControllerBase<1> *pTStack_70;
  TAttribute<float> local_68;
  undefined1 local_48 [32];
  
  bVar17 = false;
  pFVar1 = (this->Children).AllocatorInstance.Data;
  if (pFVar1 != pFVar1 + (longlong)(this->Children).ArrayNum * 0x10) {
    pFVar15 = pFVar1;
    do {
      if (*(SDockingNode **)pFVar15 == param_1->Object) {
        uVar14 = (uint)((longlong)pFVar15 - (longlong)pFVar1 >> 4);
        if (uVar14 != 0xffffffff) goto LAB_14277d76e;
        goto LAB_14277d733;
      }
      pFVar15 = pFVar15 + 0x10;
    } while (pFVar15 != pFVar1 + (longlong)(this->Children).ArrayNum * 0x10);
  }
  uVar14 = 0xffffffff;
LAB_14277d733:
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("IndexInParentSplitter != INDEX_NONE",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SDockingSplitter.cpp"
                     ,0x3a,L"");
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14277d76e:
  uVar7 = 0;
  if ((int)uVar14 < (this->Children).ArrayNum) {
    uVar7 = ~uVar14 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar16 = (param_2->SharedReferenceCount).ReferenceController;
  pFVar1 = (this->Children).AllocatorInstance.Data;
  pSVar2 = param_2->Object;
  lVar13 = (longlong)(int)uVar14;
  if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = *(TReferenceControllerBase<1> **)(pFVar1 + lVar13 * 0x10 + 8);
  *(SDockingNode **)(pFVar1 + lVar13 * 0x10) = pSVar2;
  *(TReferenceControllerBase<1> **)(pFVar1 + lVar13 * 0x10 + 8) = pTVar16;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  pSVar2 = param_2->Object;
  pSVar2->SizeCoefficient = param_1->Object->SizeCoefficient;
  (**(code **)(pSVar2->_padding_ + 0x2a0))();
  if ((this->Splitter).Object == (SSplitter *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this_02 = SSplitter::SlotAt((this->Splitter).Object,uVar14);
  local_e8.Object = param_2->Object;
  local_e8.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  lStack_100 = (ulonglong)local_f8.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
  if (local_e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98 = SDockingNode::GetSizeCoefficient;
  lStack_90 = lStack_100;
  pTVar8 = TAttribute<float>::TAttribute<float><SDockingNode>
                     (&local_68,&local_e8,(pmf_93ef00b5 *)&local_98);
  this_00 = &pTVar8->Getter;
  (this_02->SizeValue).Value = pTVar8->Value;
  (this_02->SizeValue).bIsSet = pTVar8->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this_02->SizeValue).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar3 = *(void **)&(pTVar8->Getter).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this_02->OnSlotResized_Handler,(FWriteAccessScope *)&local_b8);
  local_a0 = &(this_02->OnSlotResized_Handler).field_0x8;
  puVar9 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_a0);
  if (puVar9 == (undefined8 *)0x0) {
    pTVar16 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar16 = (param_2->SharedReferenceCount).ReferenceController;
    pSVar2 = param_2->Object;
    lStack_100 = (ulonglong)local_f8.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
    if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar9 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSDockingNode___00__A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar9[3] = pSVar2;
    puVar9[4] = pTVar16;
    if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar16->WeakReferenceCount = (atomic<int>)((int)pTVar16->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar17 = true;
    puVar9[5] = SDockingNode::SetSizeCoefficient;
    puVar9[6] = lStack_100;
  }
  if (bVar17) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  }
  if (local_b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
  }
  lStack_100 = (ulonglong)local_f8.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
  local_d8.Object = param_2->Object;
  local_d8.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  if (local_d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_88 = SDockingNode::_vcall__640__flat______;
  lStack_80 = lStack_100;
  pTVar11 = TAttribute<enum_SSplitter::ESizeRule>::
            TAttribute<enum_SSplitter::ESizeRule><SDockingNode>
                      (local_48,&local_d8,(pmf_b0575763 *)&local_88);
  this_01 = &pTVar11->Getter;
  (this_02->SizingRule).Value = pTVar11->Value;
  (this_02->SizingRule).bIsSet = pTVar11->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this_02->SizingRule).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_01);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_01);
  pvVar3 = *(void **)&(pTVar11->Getter).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_01);
  pTVar16 = (param_2->SharedReferenceCount).ReferenceController;
  pSVar2 = param_2->Object;
  if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
    UNLOCK();
  }
  FSlotBase::DetatchParentFromContent((FSlotBase *)this_02);
  local_78 = this_02->_padding_;
  pTStack_70 = (TReferenceControllerBase<1> *)this_02->_padding_;
  this_02->_padding_ = (longlong)pSVar2;
  this_02->_padding_ = (longlong)pTVar16;
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_02);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_70);
  pSVar2 = param_2->Object;
  pcVar4 = *(code **)(pSVar2->_padding_ + 0x250);
  pTVar12 = TSharedFromThis<SWidget,1>::AsShared
                      ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_f8);
  local_c8 = pTVar12->Object;
  local_c0 = (pTVar12->SharedReferenceCount).ReferenceController;
  if (local_c0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_c0->SharedReferenceCount = (atomic<int>)((int)local_c0->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_f8.SharedReferenceCount.ReferenceController._4_4_,
                      local_f8.SharedReferenceCount.ReferenceController._0_4_));
  (*pcVar4)(pSVar2,&local_c8);
  return;
}

// SetOrientation @ 142785810

void __thiscall SDockingSplitter::SetOrientation(SDockingSplitter *this,EOrientation param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->Splitter).Object == (SSplitter *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SSplitter::SetOrientation((this->Splitter).Object,param_1);
  return;
}

// operator() @ 1504931c0

bool __thiscall `SDockingSplitter::CleanUpNodes'::__l26::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2651259620781195062>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2651259620781195062>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

