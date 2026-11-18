// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 3

// AddMetaData<FTagMetaData,FTagMetaData> @ 142d534b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FArguments * __thiscall
TSlateBaseNamedArgs<SButton>::AddMetaData<FTagMetaData,FTagMetaData>
          (TSlateBaseNamedArgs<SButton> *this,FTagMetaData *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  FArguments *pFVar7;
  longlong *plVar8;
  TReferenceControllerBase<1> *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  
  puVar1 = &this->field_0x1e8;
  pTVar6 = ::operator_new(0x20);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    local_28 = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFTagMetaData___00_SharedPointerInternals__6B_;
    pTVar6[1]._padding_ = (longlong)&___7FTagMetaData__6B_;
    uVar3 = (param_1->Tag).Number;
    pTVar6[1].SharedReferenceCount = (atomic<int>)(param_1->Tag).ComparisonIndex.Value;
    pTVar6[1].WeakReferenceCount = (atomic<int>)uVar3;
    if (pTVar6 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FArguments *)(*pcVar2)();
        return pFVar7;
      }
    }
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    local_28 = pTVar6 + 1;
    pTStack_20 = pTVar6;
  }
  if ((*(TReferenceControllerBase<1> ***)puVar1 <= &local_28) &&
     (&local_28 <
      *(TReferenceControllerBase<1> ***)puVar1 + (longlong)*(int *)&this->field_0x1f4 * 2)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FArguments *)(*pcVar2)();
      return pFVar7;
    }
  }
  iVar5 = *(int *)&this->field_0x1f0;
  if (iVar5 == *(int *)&this->field_0x1f4) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)puVar1,(int *)&this->field_0x1f4);
  }
  *(int *)&this->field_0x1f0 = iVar5 + 1;
  plVar8 = (longlong *)(*(longlong *)puVar1 + (longlong)iVar5 * 0x10);
  *plVar8 = (longlong)local_28;
  plVar8[1] = (longlong)pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  param_1->_padding_ = (longlong)&___7ISlateMetaData__6B_;
  return (FArguments *)this;
}

// ToolTipText<SSidebarButton> @ 142d5bc10

FArguments * __thiscall
TSlateBaseNamedArgs<SCheckBox>::ToolTipText<SSidebarButton>
          (TSlateBaseNamedArgs<SCheckBox> *this,SSidebarButton *param_1,pmf_27539715 *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  this->field_0x10 = 1;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x18,
             (FWriteAccessScope *)&local_38);
  local_20 = &this->field_0x20;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    pTVar10 = (pTVar8->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar8->Object;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSSidebarButton___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = pSVar1;
    puVar7[4] = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    puVar7[5] = uVar2;
    puVar7[6] = uVar3;
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return (FArguments *)this;
}

// Visibility<SSidebarDrawerContent,FName,TWeakPtr<ISidebarDrawerContent,1>_> @ 142d5bde0

FArguments * __thiscall
TSlateBaseNamedArgs<SBox>::
Visibility<SSidebarDrawerContent,FName,TWeakPtr<ISidebarDrawerContent,1>_>
          (TSlateBaseNamedArgs<SBox> *this,SSidebarDrawerContent *param_1,pmf_2aafdeaf *param_2,
          FName param_3,TWeakPtr<ISidebarDrawerContent,1> *param_4)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  SWidget *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined8 *puVar10;
  TSharedRef<SWidget_const_,1> *pTVar11;
  ulong64 uVar12;
  TReferenceControllerBase<1> *pTVar13;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar5 = *(undefined8 *)param_2;
  uVar6 = *(undefined8 *)&param_2->field_0x8;
  this->field_0x89 = 1;
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x90,
             (FWriteAccessScope *)&local_38);
  local_20 = &this->field_0x98;
  puVar10 = UE::Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)local_20);
  if (puVar10 == (undefined8 *)0x0) {
    pTVar13 = (TReferenceControllerBase<1> *)((ulonglong)param_4 & 0xffffffff00000000);
  }
  else {
    pTVar11 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    pTVar13 = (pTVar11->SharedReferenceCount).ReferenceController;
    pSVar3 = pTVar11->Object;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar10 = &
               ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__VFName__V__TWeakPtr_VISidebarDrawerContent___00____6B_
    ;
    *(FName *)(puVar10 + 1) = param_3;
    puVar10[2] = param_4->Object;
    pTVar4 = (param_4->WeakReferenceCount).ReferenceController;
    puVar10[3] = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar10[4] = uVar12;
    *puVar10 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSSidebarDrawerContent___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__VFName__V__TWeakPtr_VISidebarDrawerContent___00____6B_
    ;
    puVar10[5] = pSVar3;
    puVar10[6] = pTVar13;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar9 = true;
    bVar8 = true;
    bVar7 = true;
    puVar10[7] = uVar5;
    puVar10[8] = uVar6;
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  pTVar13 = (param_4->WeakReferenceCount).ReferenceController;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar13->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar13->_padding_ + 8))(pTVar13,1);
    }
  }
  return (FArguments *)this;
}

