// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 276

// TAttribute<FMargin><float> @ 1426e65e0

TAttribute<FMargin> * __thiscall
TAttribute<FMargin>::TAttribute<FMargin><float>(TAttribute<FMargin> *this,float *param_1)

{
  float fVar1;
  
  fVar1 = *param_1;
  this->bIsSet = true;
  (this->Value).Left = fVar1;
  (this->Value).Top = fVar1;
  (this->Value).Right = fVar1;
  (this->Value).Bottom = fVar1;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

// TAttribute<TOptional<UE::Math::TVector2<double>_>_><UE::Math::TVector2<double>_> @ 1426e6610

TAttribute<TOptional<UE::Math::TVector2<double>_>_> * __thiscall
TAttribute<TOptional<UE::Math::TVector2<double>_>_>::
TAttribute<TOptional<UE::Math::TVector2<double>_>_><UE::Math::TVector2<double>_>
          (TAttribute<TOptional<UE::Math::TVector2<double>_>_> *this,TVector2<double> *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  (this->Value).bIsSet = true;
  (this->Value).TypedValue.field0_0x0._s_0.X = dVar1;
  (this->Value).TypedValue.field0_0x0._s_0.Y = dVar2;
  this->bIsSet = true;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

// TAttribute<EVisibility><EVisibility> @ 1426e6640

TAttribute<EVisibility> * __thiscall
TAttribute<EVisibility>::TAttribute<EVisibility><EVisibility>
          (TAttribute<EVisibility> *this,EVisibility *param_1)

{
  (this->Value).Value.Value = (param_1->Value).Value;
  this->bIsSet = true;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

// TAttribute<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_><TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> @ 1426e6890

TAttribute<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> * __thiscall
TAttribute<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>::
TAttribute<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_><TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>
          (TAttribute<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> *this,
          TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  piVar1 = &(this->Value).ArrayMax;
  (this->Value).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar2 = param_1->ArrayNum;
  _Src = (param_1->AllocatorInstance).Data;
  (this->Value).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
    memcpy((this->Value).AllocatorInstance.Data,_Src,(longlong)iVar2 << 4);
  }
  this->bIsSet = true;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

// TAttribute<FText><FText> @ 1426e7600

TAttribute<FText> * __thiscall
TAttribute<FText>::TAttribute<FText><FText>(TAttribute<FText> *this,FText *param_1)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  (this->Value).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (param_1->TextData).Reference;
  (this->Value).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (this->Value).Flags = param_1->Flags;
  this->bIsSet = true;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

// TAttribute<EVisibility><SDockingArea> @ 1426e7950

/* WARNING: Enum "Type": Some values do not have unique names */

TAttribute<EVisibility> * __thiscall
TAttribute<EVisibility>::TAttribute<EVisibility><SDockingArea>
          (TAttribute<EVisibility> *this,TSharedRef<SDockingArea,1> *param_1,pmf_66f1f6e4 *param_2)

{
  undefined1 *puVar1;
  SDockingArea *pSVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  uint uStackX_c;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  this->Value = (TEnumAsByte<EVisibility::Private>)0x19;
  this->bIsSet = true;
  bVar8 = false;
  uVar3 = *(undefined8 *)param_2;
  uVar4 = *(undefined8 *)&param_2->field_0x8;
  puVar1 = &(this->Getter).field_0x8;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar5 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)puVar1);
  if (puVar5 == (undefined8 *)0x0) {
    pTVar7 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar7 = (param_1->SharedReferenceCount).ReferenceController;
    pSVar2 = param_1->Object;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSDockingArea___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar5[3] = pSVar2;
    puVar5[4] = pTVar7;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar8 = true;
    puVar5[5] = uVar3;
    puVar5[6] = uVar4;
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// TAttribute<float><SDockingNode> @ 1426e7a60

TAttribute<float> * __thiscall
TAttribute<float>::TAttribute<float><SDockingNode>
          (TAttribute<float> *this,TSharedRef<SDockingNode,1> *param_1,pmf_93ef00b5 *param_2)

{
  undefined1 *puVar1;
  SDockingNode *pSVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  uint uStackX_c;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  this->bIsSet = true;
  bVar8 = false;
  this->Value = 0.0;
  uVar3 = *(undefined8 *)param_2;
  uVar4 = *(undefined8 *)&param_2->field_0x8;
  puVar1 = &(this->Getter).field_0x8;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar5 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)puVar1);
  if (puVar5 == (undefined8 *)0x0) {
    pTVar7 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar7 = (param_1->SharedReferenceCount).ReferenceController;
    pSVar2 = param_1->Object;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar5 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSDockingNode___00__A6AMXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar5[3] = pSVar2;
    puVar5[4] = pTVar7;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar8 = true;
    puVar5[5] = uVar3;
    puVar5[6] = uVar4;
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// TAttribute<enum_SSplitter::ESizeRule><SDockingNode> @ 1426e7b70

TAttribute<SSplitter::ESizeRule> * __thiscall
TAttribute<enum_SSplitter::ESizeRule>::TAttribute<enum_SSplitter::ESizeRule><SDockingNode>
          (void *this,TSharedRef<SDockingNode,1> *param_1,pmf_b0575763 *param_2)

{
  FDelegateAllocation *pFVar1;
  SDockingNode *pSVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  uint uStackX_c;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  *(undefined1 *)((longlong)this + 4) = 1;
  bVar8 = false;
  *(undefined4 *)this = 0;
  uVar3 = *(undefined8 *)param_2;
  uVar4 = *(undefined8 *)&param_2->field_0x8;
  pFVar1 = (FDelegateAllocation *)((longlong)this + 0x10);
  pFVar1->DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  (((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8))->AccessDetector)
  .State = (atomic<unsigned___int64>)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             (FWriteAccessScope *)&local_38);
  local_20 = pFVar1;
  puVar5 = UE::Core::Private::DelegateAllocate(0x38,pFVar1);
  if (puVar5 == (undefined8 *)0x0) {
    pTVar7 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar7 = (param_1->SharedReferenceCount).ReferenceController;
    pSVar2 = param_1->Object;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4ESizeRule_SSplitter__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSDockingNode___00__A6A_AW4ESizeRule_SSplitter__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar5[3] = pSVar2;
    puVar5[4] = pTVar7;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar8 = true;
    puVar5[5] = uVar3;
    puVar5[6] = uVar4;
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// Bind<SDockingTabStack> @ 1426e9320

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TAttribute<FSlateBrush_const_*>::Bind<SDockingTabStack>
          (TAttribute<FSlateBrush_const_*> *this,SDockingTabStack *param_1,pmf_be916642 *param_2)

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
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
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
              ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSDockingTabStack___00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
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
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Bind<SDockingTabStack> @ 1426e9450

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TAttribute<UE::Math::TVector2<double>_>::Bind<SDockingTabStack>
          (TAttribute<UE::Math::TVector2<double>_> *this,SDockingTabStack *param_1,
          pmf_b068b66d *param_2)

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
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
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
              ___7__TCommonDelegateInstanceState___A6A_AU__TVector2_N_Math_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSDockingTabStack___00__A6A_AU__TVector2_N_Math_UE__XZUFDefaultDelegateUserPolicy____V__6B_
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
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Bind<SDockingTabStack> @ 1426e9580

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TAttribute<EVisibility>::Bind<SDockingTabStack>
          (TAttribute<EVisibility> *this,SDockingTabStack *param_1,pmf_395bb40a *param_2)

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
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
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
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSDockingTabStack___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
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
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Bind<STabDrawerButton> @ 1426e96b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TAttribute<EVisibility>::Bind<STabDrawerButton>
          (TAttribute<EVisibility> *this,STabDrawerButton *param_1,pmf_17a327a0 *param_2)

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
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
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
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSTabDrawerButton___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
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
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Bind<SWindowTitleBar> @ 1426e97e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TAttribute<FSlateBrush_const_*>::Bind<SWindowTitleBar>
          (TAttribute<FSlateBrush_const_*> *this,SWindowTitleBar *param_1,pmf_1ce041d1 *param_2)

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
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
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
              ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSWindowTitleBar___00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
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
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Bind<SWindowTitleBar> @ 1426e9910

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TAttribute<FSlateColor>::Bind<SWindowTitleBar>
          (TAttribute<FSlateColor> *this,SWindowTitleBar *param_1,pmf_425d87c6 *param_2)

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
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
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
              ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSWindowTitleBar___00__A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
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
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Bind<SWindowTitleBar> @ 1426e9a40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TAttribute<FText>::Bind<SWindowTitleBar>
          (TAttribute<FText> *this,SWindowTitleBar *param_1,pmf_6b2ac180 *param_2)

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
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
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
              ___7__TBaseSPMethodDelegateInstance__00__CBVSWindowTitleBar___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
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
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// TAttribute<FSlateFontInfo> @ 1426f54f0

TAttribute<FSlateFontInfo> * __thiscall
TAttribute<FSlateFontInfo>::TAttribute<FSlateFontInfo>
          (TAttribute<FSlateFontInfo> *this,FSlateFontInfo *param_1)

{
  UObject *pUVar1;
  TReferenceControllerBase<1> *pTVar2;
  undefined8 uVar3;
  
  pUVar1 = (param_1->FontObject).field0_0x0.DebugPtr;
  (this->Value).FontObject.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  pUVar1 = (param_1->FontMaterial).field0_0x0.DebugPtr;
  (this->Value).FontMaterial.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  (this->Value).OutlineSettings.OutlineSize = (param_1->OutlineSettings).OutlineSize;
  (this->Value).OutlineSettings.bMiteredCorners = (param_1->OutlineSettings).bMiteredCorners;
  (this->Value).OutlineSettings.bSeparateFillAlpha = (param_1->OutlineSettings).bSeparateFillAlpha;
  (this->Value).OutlineSettings.bApplyOutlineToDropShadows =
       (param_1->OutlineSettings).bApplyOutlineToDropShadows;
  pUVar1 = (param_1->OutlineSettings).OutlineMaterial.field0_0x0.DebugPtr;
  (this->Value).OutlineSettings.OutlineMaterial.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  uVar3 = *(undefined8 *)((longlong)&(param_1->OutlineSettings).OutlineColor.field0_0x0 + 8);
  *(undefined8 *)&(this->Value).OutlineSettings.OutlineColor.field0_0x0 =
       *(undefined8 *)&(param_1->OutlineSettings).OutlineColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->Value).OutlineSettings.OutlineColor.field0_0x0 + 8) = uVar3;
  (this->Value).CompositeFont.Object = (param_1->CompositeFont).Object;
  pTVar2 = (param_1->CompositeFont).SharedReferenceCount.ReferenceController;
  (this->Value).CompositeFont.SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->Value).TypefaceFontName = param_1->TypefaceFontName;
  (this->Value).Size = param_1->Size;
  (this->Value).LetterSpacing = param_1->LetterSpacing;
  (this->Value).SkewAmount = param_1->SkewAmount;
  (this->Value).FontFallback = param_1->FontFallback;
  (this->Value).bForceMonospaced = param_1->bForceMonospaced;
  (this->Value).bMaterialIsStencil = param_1->bMaterialIsStencil;
  (this->Value).MonospacedWidth = param_1->MonospacedWidth;
  this->bIsSet = true;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

// TAttribute<TSharedPtr<IToolTip,1>_> @ 1426f55f0

TAttribute<TSharedPtr<IToolTip,1>_> * __thiscall
TAttribute<TSharedPtr<IToolTip,1>_>::TAttribute<TSharedPtr<IToolTip,1>_>
          (TAttribute<TSharedPtr<IToolTip,1>_> *this,TSharedPtr<IToolTip,1> *param_1)

{
  (this->Value).Object = param_1->Object;
  (this->Value).SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (IToolTip *)0x0;
  this->bIsSet = true;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

// TAttribute<TSharedPtr<IToolTip,1>_> @ 1426f5630

TAttribute<TSharedPtr<IToolTip,1>_> * __thiscall
TAttribute<TSharedPtr<IToolTip,1>_>::TAttribute<TSharedPtr<IToolTip,1>_>
          (TAttribute<TSharedPtr<IToolTip,1>_> *this)

{
  (this->Value).Object = (IToolTip *)0x0;
  (this->Value).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->bIsSet = false;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

// TAttribute<FText> @ 1426f5660

TAttribute<FText> * __thiscall
TAttribute<FText>::TAttribute<FText>(TAttribute<FText> *this,TAttribute<FText> *param_1)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  (this->Value).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (param_1->Value).TextData.Reference;
  (this->Value).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (this->Value).Flags = (param_1->Value).Flags;
  this->bIsSet = param_1->bIsSet;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  *(undefined4 *)&(this->Getter).field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->Getter,&param_1->Getter);
  return this;
}

// ~TAttribute<EVisibility> @ 1426feeb0

void __thiscall TAttribute<EVisibility>::~TAttribute<EVisibility>(TAttribute<EVisibility> *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  pvVar1 = *(void **)&(this->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Getter);
  return;
}

// ~TAttribute<TSharedPtr<IToolTip,1>_> @ 1426feef0

void __thiscall
TAttribute<TSharedPtr<IToolTip,1>_>::~TAttribute<TSharedPtr<IToolTip,1>_>
          (TAttribute<TSharedPtr<IToolTip,1>_> *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  pvVar1 = *(void **)&(this->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Value).SharedReferenceCount.ReferenceController);
  return;
}

// ~TAttribute<TSharedPtr<SDockingTabStack,1>_> @ 1426fef40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TAttribute<TSharedPtr<SDockingTabStack,1>_>::~TAttribute<TSharedPtr<SDockingTabStack,1>_>
          (TAttribute<TSharedPtr<SDockingTabStack,1>_> *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  pvVar1 = *(void **)&(this->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Value).SharedReferenceCount.ReferenceController);
  return;
}

// operator= @ 142702a80

TAttribute<TOptional<UE::Math::TVector2<double>_>_> * __thiscall
TAttribute<TOptional<UE::Math::TVector2<double>_>_>::operator=
          (TAttribute<TOptional<UE::Math::TVector2<double>_>_> *this,
          TAttribute<TOptional<UE::Math::TVector2<double>_>_> *param_1)

{
  double dVar1;
  
  if (param_1 != this) {
    if ((param_1->Value).bIsSet == false) {
      if ((this->Value).bIsSet != false) {
        (this->Value).bIsSet = false;
      }
    }
    else {
      dVar1 = (param_1->Value).TypedValue.field0_0x0._s_0.Y;
      (this->Value).TypedValue.field0_0x0._s_0.X = (param_1->Value).TypedValue.field0_0x0._s_0.X;
      (this->Value).TypedValue.field0_0x0._s_0.Y = dVar1;
      (this->Value).bIsSet = true;
    }
  }
  this->bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  return this;
}

// operator= @ 142702ad0

TAttribute<TSharedPtr<IToolTip,1>_> * __thiscall
TAttribute<TSharedPtr<IToolTip,1>_>::operator=
          (TAttribute<TSharedPtr<IToolTip,1>_> *this,TAttribute<TSharedPtr<IToolTip,1>_> *param_1)

{
  if (this != param_1) {
    (this->Value).Object = (param_1->Value).Object;
    (param_1->Value).Object = (IToolTip *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Value).SharedReferenceCount,&(param_1->Value).SharedReferenceCount);
  }
  this->bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  return this;
}

// operator= @ 142702b30

TAttribute<STabDrawerTextBlock::ERotation> * __thiscall
TAttribute<enum_STabDrawerTextBlock::ERotation>::operator=
          (void *this,TAttribute<STabDrawerTextBlock::ERotation> *param_1)

{
  longlong *plVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  *(ERotation *)this = param_1->Value;
  *(bool *)((longlong)this + 4) = param_1->bIsSet;
  if (&param_1->Getter !=
      (TDelegate<STabDrawerTextBlock::ERotation___cdecl(void),FDefaultDelegateUserPolicy> *)
      ((longlong)this + 8)) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&(param_1->Getter).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(param_1->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return this;
}

// Get @ 142739050

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SDockingTabStack,1> * __thiscall
TAttribute<TSharedPtr<SDockingTabStack,1>_>::Get(TAttribute<TSharedPtr<SDockingTabStack,1>_> *this)

{
  char cVar1;
  longlong *plVar2;
  undefined1 local_38 [48];
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FReadAccessScope *)(local_38 + 0x10));
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->Getter).field_0x8, plVar2 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar2 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)(local_38 + 0x10));
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
                 (FReadAccessScope *)(local_38 + 0x10));
      if (*(int *)&(this->Getter).field_0x10 == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)&(this->Getter).field_0x8;
      }
      (**(code **)(*plVar2 + 0x60))(plVar2,local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)(local_38 + 0x10));
      if (this != (TAttribute<TSharedPtr<SDockingTabStack,1>_> *)local_38) {
        (this->Value).Object = (SDockingTabStack *)local_38._0_8_;
        local_38._0_8_ = (SDockingTabStack *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->Value).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_38._8_8_);
      return &this->Value;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)(local_38 + 0x10));
  return &this->Value;
}

// Get @ 142739130

Type * __thiscall TAttribute<enum_ETabSpawnerMenuType::Type>::Get(void *this)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             &local_28);
  if ((*(int *)((longlong)this + 0x18) != 0) &&
     (*(longlong **)((longlong)this + 0x10) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
                 &local_28);
      if (*(int *)((longlong)this + 0x18) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)((longlong)this + 0x10);
      }
      uVar2 = (**(code **)(*plVar3 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      *(undefined4 *)this = uVar2;
      return this;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return this;
}

// IsBound @ 14274ccc0

bool __thiscall TAttribute<FText>::IsBound(TAttribute<FText> *this)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return true;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

// Steal @ 14278c050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVariant<FLinearColor,TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>_> *
__thiscall
TAttribute<FLinearColor>::Steal
          (TAttribute<FLinearColor> *this,
          TVariant<FLinearColor,TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  byte bVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  TVariant<FLinearColor,TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>_> *pTVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  FReadAccessScope local_80;
  undefined1 local_68 [24];
  byte local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  byte local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88 = 0;
  if (this->bIsSet == false) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Attribute.h"
                       ,0x1c1,
                       L"It is an error to call Steal() on an unset TAttribute. Check IsSet() before calling Steal()."
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TVariant<FLinearColor,TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>_>
                *)(*pcVar3)();
      return pTVar8;
    }
  }
  this->bIsSet = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_80);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->Getter).field_0x8, plVar2 != (longlong *)0x0)) {
    cVar6 = (**(code **)(*plVar2 + 0x38))();
    if (cVar6 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_80);
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
      local_50 = 1;
      puVar10 = (undefined8 *)local_68;
      bVar4 = true;
      bVar5 = false;
      goto LAB_14278c126;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_80);
  local_30 = 0;
  puVar10 = &local_48;
  bVar4 = false;
  bVar5 = true;
  local_48 = *(undefined8 *)&(this->Value).field0_0x0;
  uStack_40 = *(undefined8 *)((longlong)&(this->Value).field0_0x0 + 8);
LAB_14278c126:
  bVar1 = *(byte *)(puVar10 + 3);
  __return_storage_ptr__->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TVariant<FLinearColor,TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>_>
                *)(*pcVar3)();
      return pTVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<FLinearColor,TDelegate<struct_FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(__return_storage_ptr__,puVar10);
  if (bVar5) {
    uVar9 = (ulonglong)local_30;
    if (1 < uVar9) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TVariant<FLinearColor,TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>_>
                  *)(*pcVar3)();
        return pTVar8;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FLinearColor,TDelegate<struct_FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9] !=
        UE::Core::Private::TDestructorCaller<FLinearColor>::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FLinearColor,TDelegate<struct_FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9])(&local_48);
    }
  }
  if (bVar4) {
    uVar9 = (ulonglong)local_50;
    if (1 < uVar9) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TVariant<FLinearColor,TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>_>
                  *)(*pcVar3)();
        return pTVar8;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FLinearColor,TDelegate<struct_FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9] ==
        UE::Core::Private::
        TDestructorCaller<TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>_>::
        Destruct) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68);
      if ((void *)local_68._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_68._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_68);
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FLinearColor,TDelegate<struct_FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9])();
    }
  }
  return __return_storage_ptr__;
}

// TAttribute<int><int> @ 1427956b0

TAttribute<int> * __thiscall
TAttribute<int>::TAttribute<int><int>(TAttribute<int> *this,int *param_1)

{
  this->Value = *param_1;
  this->bIsSet = true;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

// TAttribute<float><int> @ 1427956d0

TAttribute<float> * __thiscall
TAttribute<float>::TAttribute<float><int>(TAttribute<float> *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  this->bIsSet = true;
  this->Value = (float)iVar1;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

// TAttribute<float><float> @ 142795700

TAttribute<float> * __thiscall
TAttribute<float>::TAttribute<float><float>(TAttribute<float> *this,float *param_1)

{
  this->Value = *param_1;
  this->bIsSet = true;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

// TAttribute<FOptionalSize><float> @ 142795720

TAttribute<FOptionalSize> * __thiscall
TAttribute<FOptionalSize>::TAttribute<FOptionalSize><float>
          (TAttribute<FOptionalSize> *this,float *param_1)

{
  (this->Value).Size = *param_1;
  this->bIsSet = true;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

// TAttribute<FSlateBrush_const_*><FSlateBrush_const_*> @ 142795740

TAttribute<FSlateBrush_const_*> * __thiscall
TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*><FSlateBrush_const_*>
          (TAttribute<FSlateBrush_const_*> *this,FSlateBrush **param_1)

{
  this->Value = *param_1;
  this->bIsSet = true;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

// TAttribute<FSlateColor><FLinearColor> @ 142795770

TAttribute<FSlateColor> * __thiscall
TAttribute<FSlateColor>::TAttribute<FSlateColor><FLinearColor>
          (TAttribute<FSlateColor> *this,FLinearColor *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)&param_1->field0_0x0;
  uVar2 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  (this->Value).ColorUseRule = UseColor_Specified;
  *(undefined8 *)&(this->Value).SpecifiedColor.field0_0x0 = uVar1;
  *(undefined8 *)((longlong)&(this->Value).SpecifiedColor.field0_0x0 + 8) = uVar2;
  this->bIsSet = true;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

// TAttribute<FMargin><FMargin> @ 1427957a0

TAttribute<FMargin> * __thiscall
TAttribute<FMargin>::TAttribute<FMargin><FMargin>(TAttribute<FMargin> *this,FMargin *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_1->Left;
  fVar2 = param_1->Top;
  fVar3 = param_1->Right;
  fVar4 = param_1->Bottom;
  this->bIsSet = true;
  (this->Value).Left = fVar1;
  (this->Value).Top = fVar2;
  (this->Value).Right = fVar3;
  (this->Value).Bottom = fVar4;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

// TAttribute<TSharedPtr<IToolTip,1>_><TSharedRef<SToolTip,1>_> @ 142795810

TAttribute<TSharedPtr<IToolTip,1>_> * __thiscall
TAttribute<TSharedPtr<IToolTip,1>_>::TAttribute<TSharedPtr<IToolTip,1>_><TSharedRef<SToolTip,1>_>
          (TAttribute<TSharedPtr<IToolTip,1>_> *this,TSharedRef<SToolTip,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  IToolTip *pIVar2;
  
  pIVar2 = (IToolTip *)&param_1->Object->_padding_;
  if (param_1->Object == (SToolTip *)0x0) {
    pIVar2 = (IToolTip *)0x0;
  }
  (this->Value).Object = pIVar2;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->Value).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->bIsSet = true;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

// TAttribute<bool><SMenuEntryBlock> @ 1427967a0

/* WARNING: Enum "Type": Some values do not have unique names */

TAttribute<bool> * __thiscall
TAttribute<bool>::TAttribute<bool><SMenuEntryBlock>
          (TAttribute<bool> *this,SMenuEntryBlock *param_1,pmf_c190d8e3 *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  TSharedRef<SWidget_const_,1> *pTVar5;
  ulong64 uVar6;
  TStatId *pTVar7;
  TStatId *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_58;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  this->Value = false;
  this->bIsSet = true;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  puVar1 = &(this->Getter).field_0x8;
  pTVar8 = (TStatId *)0x0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_48);
  local_30 = puVar1;
  puVar4 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)puVar1);
  if (puVar4 == (undefined8 *)0x0) {
    pTVar9 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar5 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_58);
    pTVar9 = (pTVar5->SharedReferenceCount).ReferenceController;
    pTVar7 = &pTVar5->Object[-1].StatID;
    if (pTVar5->Object == (SWidget *)0x0) {
      pTVar7 = pTVar8;
    }
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar4 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar6;
    *puVar4 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSMenuEntryBlock___00__A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[3] = pTVar7;
    puVar4[4] = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar8 = (TStatId *)0x3;
    puVar4[5] = uVar2;
    puVar4[6] = uVar3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
  if (((ulonglong)pTVar8 & 2) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
  if (((ulonglong)pTVar8 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return this;
}

// TAttribute<FSlateBrush_const_*><SToolBarComboButtonBlock> @ 142796a80

TAttribute<FSlateBrush_const_*> * __thiscall
TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*><SToolBarComboButtonBlock>
          (TAttribute<FSlateBrush_const_*> *this,SToolBarComboButtonBlock *param_1,
          pmf_e0746c1c *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  TSharedRef<SWidget_const_,1> *pTVar5;
  ulong64 uVar6;
  TStatId *pTVar7;
  TStatId *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_58;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  this->bIsSet = true;
  pTVar8 = (TStatId *)0x0;
  this->Value = (FSlateBrush *)0x0;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  puVar1 = &(this->Getter).field_0x8;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_48);
  local_30 = puVar1;
  puVar4 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)puVar1);
  if (puVar4 == (undefined8 *)0x0) {
    pTVar9 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar5 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_58);
    pTVar9 = (pTVar5->SharedReferenceCount).ReferenceController;
    pTVar7 = &pTVar5->Object[-1].StatID;
    if (pTVar5->Object == (SWidget *)0x0) {
      pTVar7 = pTVar8;
    }
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar6;
    *puVar4 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSToolBarComboButtonBlock___00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[3] = pTVar7;
    puVar4[4] = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar8 = (TStatId *)0x3;
    puVar4[5] = uVar2;
    puVar4[6] = uVar3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
  if (((ulonglong)pTVar8 & 2) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
  if (((ulonglong)pTVar8 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return this;
}

// TAttribute<enum_UE::Slate::PrioritizedWrapBox::EWrapMode><enum_UE::Slate::PrioritizedWrapBox::EWrapMode> @ 142796d70

TAttribute<UE::Slate::PrioritizedWrapBox::EWrapMode> * __thiscall
TAttribute<enum_UE::Slate::PrioritizedWrapBox::EWrapMode>::
TAttribute<enum_UE::Slate::PrioritizedWrapBox::EWrapMode><enum_UE::Slate::PrioritizedWrapBox::EWrapMode>
          (void *this,EWrapMode *param_1)

{
  *(EWrapMode *)this = *param_1;
  *(undefined1 *)((longlong)this + 1) = 1;
  *(undefined8 *)((longlong)this + 0x18) = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  return this;
}

// TAttribute<bool><bool> @ 142796da0

TAttribute<bool> * __thiscall
TAttribute<bool>::TAttribute<bool><bool>(TAttribute<bool> *this,bool *param_1)

{
  this->Value = *param_1;
  this->bIsSet = true;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

// Bind<SButtonRowBlock,bool_&> @ 142798df0

void __thiscall
TAttribute<EVisibility>::Bind<SButtonRowBlock,bool_&>
          (TAttribute<EVisibility> *this,SButtonRowBlock *param_1,pmf_ecaaedc9 *param_2,
          bool *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  TSharedRef<SWidget_const_,1> *pTVar4;
  ulong64 uVar5;
  TStatId *pTVar6;
  TStatId *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_58;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  pTVar6 = (TStatId *)0x0;
  this->bIsSet = true;
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_48);
  local_30 = &(this->Getter).field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_30);
  if (puVar3 == (undefined8 *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar4 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_58);
    pTVar8 = (pTVar4->SharedReferenceCount).ReferenceController;
    pTVar7 = &pTVar4->Object[-1].StatID;
    if (pTVar4->Object == (SWidget *)0x0) {
      pTVar7 = pTVar6;
    }
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy___N__6B_
    ;
    *(bool *)(puVar3 + 1) = *param_3;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar5;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSButtonRowBlock___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy___N__6B_
    ;
    puVar3[3] = pTVar7;
    puVar3[4] = pTVar8;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar6 = (TStatId *)0x3;
    puVar3[5] = uVar1;
    puVar3[6] = uVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  if (((ulonglong)pTVar6 & 2) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  if (((ulonglong)pTVar6 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return;
}

// Bind<SMultiBoxWidget> @ 142798f60

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
TAttribute<float>::Bind<SMultiBoxWidget>
          (TAttribute<float> *this,SMultiBoxWidget *param_1,pmf_e276b5bc *param_2)

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
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
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
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSMultiBoxWidget___00__A6AMXZUFDefaultDelegateUserPolicy____V__6B_
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
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Bind<SMultiBoxWidget> @ 142799090

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
TAttribute<FText>::Bind<SMultiBoxWidget>
          (TAttribute<FText> *this,SMultiBoxWidget *param_1,pmf_35343c35 *param_2)

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
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
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
              ___7__TBaseSPMethodDelegateInstance__00__CBVSMultiBoxWidget___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
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
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Bind<SToolBarButtonBlock> @ 1427991c0

void __thiscall
TAttribute<FSlateBrush_const_*>::Bind<SToolBarButtonBlock>
          (TAttribute<FSlateBrush_const_*> *this,SToolBarButtonBlock *param_1,pmf_7c3d37a6 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  TSharedRef<SWidget_const_,1> *pTVar4;
  ulong64 uVar5;
  TStatId *pTVar6;
  TStatId *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  this->bIsSet = true;
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  pTVar6 = (TStatId *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->Getter).field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar3 == (undefined8 *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar4 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    pTVar8 = (pTVar4->SharedReferenceCount).ReferenceController;
    pTVar7 = &pTVar4->Object[-1].StatID;
    if (pTVar4->Object == (SWidget *)0x0) {
      pTVar7 = pTVar6;
    }
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar5;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSToolBarButtonBlock___00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = pTVar7;
    puVar3[4] = pTVar8;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar6 = (TStatId *)0x3;
    puVar3[5] = uVar1;
    puVar3[6] = uVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  if (((ulonglong)pTVar6 & 2) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  if (((ulonglong)pTVar6 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// Bind<SToolBarButtonBlock> @ 142799320

void __thiscall
TAttribute<bool>::Bind<SToolBarButtonBlock>
          (TAttribute<bool> *this,SToolBarButtonBlock *param_1,pmf_9fa8a0bd *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  TSharedRef<SWidget_const_,1> *pTVar4;
  ulong64 uVar5;
  TStatId *pTVar6;
  TStatId *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  this->bIsSet = true;
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  pTVar6 = (TStatId *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->Getter).field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar3 == (undefined8 *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar4 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    pTVar8 = (pTVar4->SharedReferenceCount).ReferenceController;
    pTVar7 = &pTVar4->Object[-1].StatID;
    if (pTVar4->Object == (SWidget *)0x0) {
      pTVar7 = pTVar6;
    }
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar5;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSToolBarButtonBlock___00__A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = pTVar7;
    puVar3[4] = pTVar8;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar6 = (TStatId *)0x3;
    puVar3[5] = uVar1;
    puVar3[6] = uVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  if (((ulonglong)pTVar6 & 2) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  if (((ulonglong)pTVar6 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// Bind<SToolBarComboButtonBlock> @ 142799480

void __thiscall
TAttribute<FSlateBrush_const_*>::Bind<SToolBarComboButtonBlock>
          (TAttribute<FSlateBrush_const_*> *this,SToolBarComboButtonBlock *param_1,
          pmf_e0746c1c *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  TSharedRef<SWidget_const_,1> *pTVar4;
  ulong64 uVar5;
  TStatId *pTVar6;
  TStatId *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  this->bIsSet = true;
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  pTVar6 = (TStatId *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->Getter).field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar3 == (undefined8 *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar4 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    pTVar8 = (pTVar4->SharedReferenceCount).ReferenceController;
    pTVar7 = &pTVar4->Object[-1].StatID;
    if (pTVar4->Object == (SWidget *)0x0) {
      pTVar7 = pTVar6;
    }
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar5;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSToolBarComboButtonBlock___00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = pTVar7;
    puVar3[4] = pTVar8;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar6 = (TStatId *)0x3;
    puVar3[5] = uVar1;
    puVar3[6] = uVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  if (((ulonglong)pTVar6 & 2) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  if (((ulonglong)pTVar6 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// Bind<SToolBarComboButtonBlock> @ 1427995e0

void __thiscall
TAttribute<FSlateColor>::Bind<SToolBarComboButtonBlock>
          (TAttribute<FSlateColor> *this,SToolBarComboButtonBlock *param_1,pmf_a2cef929 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  TSharedRef<SWidget_const_,1> *pTVar4;
  ulong64 uVar5;
  TStatId *pTVar6;
  TStatId *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  this->bIsSet = true;
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  pTVar6 = (TStatId *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->Getter).field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar3 == (undefined8 *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar4 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    pTVar8 = (pTVar4->SharedReferenceCount).ReferenceController;
    pTVar7 = &pTVar4->Object[-1].StatID;
    if (pTVar4->Object == (SWidget *)0x0) {
      pTVar7 = pTVar6;
    }
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar5;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSToolBarComboButtonBlock___00__A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = pTVar7;
    puVar3[4] = pTVar8;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar6 = (TStatId *)0x3;
    puVar3[5] = uVar1;
    puVar3[6] = uVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  if (((ulonglong)pTVar6 & 2) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  if (((ulonglong)pTVar6 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// Bind<SToolBarStackButtonBlock> @ 142799740

void __thiscall
TAttribute<FText>::Bind<SToolBarStackButtonBlock>
          (TAttribute<FText> *this,SToolBarStackButtonBlock *param_1,pmf_21d67bb5 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  TSharedRef<SWidget_const_,1> *pTVar4;
  ulong64 uVar5;
  TStatId *pTVar6;
  TStatId *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  this->bIsSet = true;
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  pTVar6 = (TStatId *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->Getter).field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar3 == (undefined8 *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar4 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    pTVar8 = (pTVar4->SharedReferenceCount).ReferenceController;
    pTVar7 = &pTVar4->Object[-1].StatID;
    if (pTVar4->Object == (SWidget *)0x0) {
      pTVar7 = pTVar6;
    }
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar5;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSToolBarStackButtonBlock___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = pTVar7;
    puVar3[4] = pTVar8;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar6 = (TStatId *)0x3;
    puVar3[5] = uVar1;
    puVar3[6] = uVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  if (((ulonglong)pTVar6 & 2) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  if (((ulonglong)pTVar6 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// TAttribute<int> @ 1427a95d0

TAttribute<int> * __thiscall
TAttribute<int>::TAttribute<int>(TAttribute<int> *this,TAttribute<int> *param_1)

{
  this->Value = param_1->Value;
  this->bIsSet = param_1->bIsSet;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  *(undefined4 *)&(this->Getter).field_0x10 = 0;
  TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->Getter,&param_1->Getter);
  return this;
}

// TAttribute<float> @ 1427a9610

TAttribute<float> * __thiscall
TAttribute<float>::TAttribute<float>(TAttribute<float> *this,float *param_1)

{
  this->Value = *param_1;
  this->bIsSet = true;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

// TAttribute<float> @ 1427a9630

TAttribute<float> * __thiscall
TAttribute<float>::TAttribute<float>(TAttribute<float> *this,TAttribute<float> *param_1)

{
  this->Value = param_1->Value;
  this->bIsSet = param_1->bIsSet;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  *(undefined4 *)&(this->Getter).field_0x10 = 0;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->Getter,&param_1->Getter);
  return this;
}

// TAttribute<FSlateBrush_const_*> @ 1427a9670

TAttribute<FSlateBrush_const_*> * __thiscall
TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
          (TAttribute<FSlateBrush_const_*> *this,FSlateBrush **param_1)

{
  this->Value = *param_1;
  this->bIsSet = true;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

// TAttribute<EVisibility> @ 1427a96a0

TAttribute<EVisibility> * __thiscall
TAttribute<EVisibility>::TAttribute<EVisibility>
          (TAttribute<EVisibility> *this,TAttribute<EVisibility> *param_1)

{
  (this->Value).Value.Value = (param_1->Value).Value.Value;
  this->bIsSet = param_1->bIsSet;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  *(undefined4 *)&(this->Getter).field_0x10 = 0;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->Getter,&param_1->Getter);
  return this;
}

// TAttribute<FMargin> @ 1427a96e0

TAttribute<FMargin> * __thiscall
TAttribute<FMargin>::TAttribute<FMargin>(TAttribute<FMargin> *this,FMargin *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_1->Left;
  fVar2 = param_1->Top;
  fVar3 = param_1->Right;
  fVar4 = param_1->Bottom;
  this->bIsSet = true;
  (this->Value).Left = fVar1;
  (this->Value).Top = fVar2;
  (this->Value).Right = fVar3;
  (this->Value).Bottom = fVar4;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

// TAttribute<FMargin> @ 1427a9710

TAttribute<FMargin> * __thiscall
TAttribute<FMargin>::TAttribute<FMargin>(TAttribute<FMargin> *this,TAttribute<FMargin> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (param_1->Value).Top;
  fVar2 = (param_1->Value).Right;
  fVar3 = (param_1->Value).Bottom;
  (this->Value).Left = (param_1->Value).Left;
  (this->Value).Top = fVar1;
  (this->Value).Right = fVar2;
  (this->Value).Bottom = fVar3;
  this->bIsSet = param_1->bIsSet;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  *(undefined4 *)&(this->Getter).field_0x10 = 0;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->Getter,&param_1->Getter);
  return this;
}

// TAttribute<FSlateColor> @ 1427a9750

TAttribute<FSlateColor> * __thiscall
TAttribute<FSlateColor>::TAttribute<FSlateColor>(TAttribute<FSlateColor> *this,FSlateColor *param_1)

{
  undefined8 uVar1;
  EStyleColor EVar2;
  undefined2 uVar3;
  
  uVar1 = *(undefined8 *)((longlong)&(param_1->SpecifiedColor).field0_0x0 + 8);
  *(undefined8 *)&(this->Value).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->SpecifiedColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->Value).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = param_1->ColorTableId;
  uVar3 = *(undefined2 *)&param_1->field_0x12;
  (this->Value).ColorUseRule = param_1->ColorUseRule;
  (this->Value).ColorTableId = EVar2;
  *(undefined2 *)&(this->Value).field_0x12 = uVar3;
  this->bIsSet = true;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

// TAttribute<FSlateColor> @ 1427a9780

TAttribute<FSlateColor> * __thiscall
TAttribute<FSlateColor>::TAttribute<FSlateColor>
          (TAttribute<FSlateColor> *this,TAttribute<FSlateColor> *param_1)

{
  undefined8 uVar1;
  EStyleColor EVar2;
  undefined2 uVar3;
  
  uVar1 = *(undefined8 *)((longlong)&(param_1->Value).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->Value).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->Value).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->Value).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->Value).ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->Value).field_0x12;
  (this->Value).ColorUseRule = (param_1->Value).ColorUseRule;
  (this->Value).ColorTableId = EVar2;
  *(undefined2 *)&(this->Value).field_0x12 = uVar3;
  this->bIsSet = param_1->bIsSet;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>(&this->Getter,&param_1->Getter);
  return this;
}

// TAttribute<enum_EHorizontalAlignment> @ 1427a97c0

TAttribute<EHorizontalAlignment> * __thiscall
TAttribute<enum_EHorizontalAlignment>::TAttribute<enum_EHorizontalAlignment>
          (void *this,EHorizontalAlignment *param_1)

{
  *(EHorizontalAlignment *)this = *param_1;
  *(undefined1 *)((longlong)this + 4) = 1;
  *(undefined8 *)((longlong)this + 0x18) = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  return this;
}

// TAttribute<enum_UE::Slate::PrioritizedWrapBox::EWrapMode> @ 1427a97e0

TAttribute<UE::Slate::PrioritizedWrapBox::EWrapMode> * __thiscall
TAttribute<enum_UE::Slate::PrioritizedWrapBox::EWrapMode>::
TAttribute<enum_UE::Slate::PrioritizedWrapBox::EWrapMode>
          (void *this,TAttribute<UE::Slate::PrioritizedWrapBox::EWrapMode> *param_1)

{
  *(EWrapMode *)this = param_1->Value;
  *(bool *)((longlong)this + 1) = param_1->bIsSet;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  TDelegate<enum_UE::Slate::PrioritizedWrapBox::EWrapMode___cdecl(void),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>((undefined8 *)((longlong)this + 8),&param_1->Getter);
  return this;
}

// TAttribute<enum_ESelectionMode::Type> @ 1427a9820

TAttribute<ESelectionMode::Type> * __thiscall
TAttribute<enum_ESelectionMode::Type>::TAttribute<enum_ESelectionMode::Type>
          (void *this,Type *param_1)

{
  *(Type *)this = *param_1;
  *(undefined1 *)((longlong)this + 4) = 1;
  *(undefined8 *)((longlong)this + 0x18) = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  return this;
}

// TAttribute<bool> @ 1427a9840

TAttribute<bool> * __thiscall
TAttribute<bool>::TAttribute<bool>(TAttribute<bool> *this,TAttribute<bool> *param_1)

{
  this->Value = param_1->Value;
  this->bIsSet = param_1->bIsSet;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  *(undefined4 *)&(this->Getter).field_0x10 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->Getter,&param_1->Getter);
  return this;
}

// ~TAttribute<float> @ 1427b6e30

void __thiscall TAttribute<float>::~TAttribute<float>(TAttribute<float> *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  pvVar1 = *(void **)&(this->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Getter);
  return;
}

// ~TAttribute<TOptional<float>_> @ 1427b6e70

void __thiscall
TAttribute<TOptional<float>_>::~TAttribute<TOptional<float>_>(TAttribute<TOptional<float>_> *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  pvVar1 = *(void **)&(this->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Getter);
  return;
}

// ~TAttribute<UE::Math::TVector2<double>_> @ 1427b6eb0

void __thiscall
TAttribute<UE::Math::TVector2<double>_>::~TAttribute<UE::Math::TVector2<double>_>
          (TAttribute<UE::Math::TVector2<double>_> *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  pvVar1 = *(void **)&(this->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Getter);
  return;
}

// ~TAttribute<FLinearColor> @ 1427b6ef0

void __thiscall TAttribute<FLinearColor>::~TAttribute<FLinearColor>(TAttribute<FLinearColor> *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  pvVar1 = *(void **)&(this->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Getter);
  return;
}

// ~TAttribute<FMargin> @ 1427b6f30

void __thiscall TAttribute<FMargin>::~TAttribute<FMargin>(TAttribute<FMargin> *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  pvVar1 = *(void **)&(this->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Getter);
  return;
}

// ~TAttribute<FSlateColor> @ 1427b6f70

void __thiscall TAttribute<FSlateColor>::~TAttribute<FSlateColor>(TAttribute<FSlateColor> *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  pvVar1 = *(void **)&(this->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Getter);
  return;
}

// ~TAttribute<enum_UE::Slate::PrioritizedWrapBox::EWrapMode> @ 1427b6fb0

void __thiscall
TAttribute<enum_UE::Slate::PrioritizedWrapBox::EWrapMode>::
~TAttribute<enum_UE::Slate::PrioritizedWrapBox::EWrapMode>(void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 8));
  return;
}

// ~TAttribute<bool> @ 1427b6ff0

void __thiscall TAttribute<bool>::~TAttribute<bool>(TAttribute<bool> *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  pvVar1 = *(void **)&(this->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Getter);
  return;
}

// operator= @ 1427baf70

TAttribute<EVisibility> * __thiscall
TAttribute<EVisibility>::operator=(TAttribute<EVisibility> *this,TAttribute<EVisibility> *param_1)

{
  (this->Value).Value.Value = (param_1->Value).Value.Value;
  this->bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  return this;
}

// operator= @ 1427bafb0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TAttribute<FMenuEntryResizeParams> * __thiscall
TAttribute<FMenuEntryResizeParams>::operator=
          (TAttribute<FMenuEntryResizeParams> *this,TAttribute<FMenuEntryResizeParams> *param_1)

{
  TOptional<UE::Slate::PrioritizedWrapBox::EVerticalOverflowBehavior> *pTVar1;
  TOptional<UE::Slate::PrioritizedWrapBox::EVerticalOverflowBehavior> *pTVar2;
  TOptional<bool> *pTVar3;
  TOptional<bool> *pTVar4;
  
  (this->Value).ClippingPriority.Value = (param_1->Value).ClippingPriority.Value;
  (this->Value).ClippingPriority.bIsSet = (param_1->Value).ClippingPriority.bIsSet;
  TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->Value).ClippingPriority.Getter,&(param_1->Value).ClippingPriority.Getter);
  (this->Value).AllowClipping.Value = (param_1->Value).AllowClipping.Value;
  (this->Value).AllowClipping.bIsSet = (param_1->Value).AllowClipping.bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->Value).AllowClipping.Getter,&(param_1->Value).AllowClipping.Getter);
  (this->Value).VisibleInOverflow.Value = (param_1->Value).VisibleInOverflow.Value;
  (this->Value).VisibleInOverflow.bIsSet = (param_1->Value).VisibleInOverflow.bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->Value).VisibleInOverflow.Getter,&(param_1->Value).VisibleInOverflow.Getter);
  (this->Value).Wrapping.Allow.Value = (param_1->Value).Wrapping.Allow.Value;
  (this->Value).Wrapping.Allow.bIsSet = (param_1->Value).Wrapping.Allow.bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->Value).Wrapping.Allow.Getter,&(param_1->Value).Wrapping.Allow.Getter);
  (this->Value).Wrapping.Priority.Value = (param_1->Value).Wrapping.Priority.Value;
  (this->Value).Wrapping.Priority.bIsSet = (param_1->Value).Wrapping.Priority.bIsSet;
  TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->Value).Wrapping.Priority.Getter,&(param_1->Value).Wrapping.Priority.Getter);
  (this->Value).Wrapping.Mode.Value = (param_1->Value).Wrapping.Mode.Value;
  (this->Value).Wrapping.Mode.bIsSet = (param_1->Value).Wrapping.Mode.bIsSet;
  TDelegate<enum_UE::Slate::PrioritizedWrapBox::EWrapMode___cdecl(void),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->Value).Wrapping.Mode.Getter,&(param_1->Value).Wrapping.Mode.Getter);
  pTVar1 = &(param_1->Value).Wrapping.VerticalOverflowBehavior;
  pTVar2 = &(this->Value).Wrapping.VerticalOverflowBehavior;
  if (pTVar1 != pTVar2) {
    if ((param_1->Value).Wrapping.VerticalOverflowBehavior.bIsSet == false) {
      if ((this->Value).Wrapping.VerticalOverflowBehavior.bIsSet != false) {
        (this->Value).Wrapping.VerticalOverflowBehavior.bIsSet = false;
      }
    }
    else {
      pTVar2->TypedValue = pTVar1->TypedValue;
      (this->Value).Wrapping.VerticalOverflowBehavior.bIsSet = true;
    }
  }
  pTVar3 = &(param_1->Value).Wrapping.ForceNewLine;
  pTVar4 = &(this->Value).Wrapping.ForceNewLine;
  if (pTVar3 != pTVar4) {
    if ((param_1->Value).Wrapping.ForceNewLine.bIsSet == false) {
      if ((this->Value).Wrapping.ForceNewLine.bIsSet != false) {
        (this->Value).Wrapping.ForceNewLine.bIsSet = false;
      }
    }
    else {
      pTVar4->TypedValue = pTVar3->TypedValue;
      (this->Value).Wrapping.ForceNewLine.bIsSet = true;
    }
  }
  this->bIsSet = param_1->bIsSet;
  TDelegate<FMenuEntryResizeParams___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->Getter,&param_1->Getter);
  return this;
}

// operator= @ 1427bb120

TAttribute<FSlateColor> * __thiscall
TAttribute<FSlateColor>::operator=(TAttribute<FSlateColor> *this,TAttribute<FSlateColor> *param_1)

{
  undefined8 uVar1;
  EStyleColor EVar2;
  undefined2 uVar3;
  
  uVar1 = *(undefined8 *)((longlong)&(param_1->Value).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->Value).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->Value).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->Value).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->Value).ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->Value).field_0x12;
  (this->Value).ColorUseRule = (param_1->Value).ColorUseRule;
  (this->Value).ColorTableId = EVar2;
  *(undefined2 *)&(this->Value).field_0x12 = uVar3;
  this->bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  return this;
}

// operator= @ 1427bb160

TAttribute<FText> * __thiscall
TAttribute<FText>::operator=(TAttribute<FText> *this,TAttribute<FText> *param_1)

{
  FText::operator=(&this->Value,&param_1->Value);
  this->bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  return this;
}

// operator= @ 1427bb1a0

TAttribute<bool> * __thiscall
TAttribute<bool>::operator=(TAttribute<bool> *this,TAttribute<bool> *param_1)

{
  this->Value = param_1->Value;
  this->bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  return this;
}

// Create @ 1427f4880

TAttribute<EVisibility> * __cdecl
TAttribute<EVisibility>::Create
          (TAttribute<EVisibility> *__return_storage_ptr__,
          TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  __return_storage_ptr__->Value = (TEnumAsByte<EVisibility::Private>)0x19;
  __return_storage_ptr__->bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&__return_storage_ptr__->Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  return __return_storage_ptr__;
}

// Create @ 1427f48b0

TAttribute<FMargin> * __cdecl
TAttribute<FMargin>::Create
          (TAttribute<FMargin> *__return_storage_ptr__,
          TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  __return_storage_ptr__->bIsSet = true;
  (__return_storage_ptr__->Value).Left = 0.0;
  (__return_storage_ptr__->Value).Top = 0.0;
  (__return_storage_ptr__->Value).Right = 0.0;
  (__return_storage_ptr__->Value).Bottom = 0.0;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&__return_storage_ptr__->Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  return __return_storage_ptr__;
}

// Create @ 1427f48e0

TAttribute<FSlateColor> * __cdecl
TAttribute<FSlateColor>::Create
          (TAttribute<FSlateColor> *__return_storage_ptr__,
          TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  *(undefined8 *)&(__return_storage_ptr__->Value).SpecifiedColor.field0_0x0 = 0x3f800000;
  (__return_storage_ptr__->Value).SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (__return_storage_ptr__->Value).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (__return_storage_ptr__->Value).ColorUseRule = UseColor_Specified;
  __return_storage_ptr__->bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&__return_storage_ptr__->Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  return __return_storage_ptr__;
}

// Get @ 14280c900

EVisibility * __thiscall TAttribute<EVisibility>::Get(TAttribute<EVisibility> *this)

{
  char cVar1;
  longlong *plVar2;
  EVisibility local_res8 [8];
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->Getter).field_0x8, plVar2 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar2 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
      if (*(int *)&(this->Getter).field_0x10 == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)&(this->Getter).field_0x8;
      }
      (**(code **)(*plVar2 + 0x60))(plVar2,local_res8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      (this->Value).Value.Value = (uchar)local_res8[0].Value.Value;
      return &this->Value;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return &this->Value;
}

// Get @ 14280c9b0

FMargin * __thiscall TAttribute<FMargin>::Get(TAttribute<FMargin> *this)

{
  char cVar1;
  longlong *plVar2;
  FDestructionSentinel local_38;
  FReadAccessScope local_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FReadAccessScope *)&local_38);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->Getter).field_0x8, plVar2 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar2 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_20);
      if (*(int *)&(this->Getter).field_0x10 == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)&(this->Getter).field_0x8;
      }
      (**(code **)(*plVar2 + 0x60))(plVar2,&local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      (this->Value).Left = (float)local_38.AccessType;
      (this->Value).Top = (float)local_38._4_4_;
      *(FMRSWRecursiveAccessDetector **)&(this->Value).Right = local_38.Accessor;
      return &this->Value;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_38);
  return &this->Value;
}

// Get @ 14280ca60

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FMenuEntryResizeParams * __thiscall
TAttribute<FMenuEntryResizeParams>::Get(TAttribute<FMenuEntryResizeParams> *this)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  FReadAccessScope local_e8;
  undefined1 local_d0 [8];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [24];
  FWrappingParams local_70;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_e8);
  if (((*(int *)&(this->Getter).field_0x10 == 0) ||
      (plVar3 = *(longlong **)&(this->Getter).field_0x8, plVar3 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*plVar3 + 0x38))(), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_e8);
  if (bVar1) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_e8);
    if (*(int *)&(this->Getter).field_0x10 == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = *(longlong **)&(this->Getter).field_0x8;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3,local_d0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_e8);
    FMenuEntryResizeParams::operator=(&this->Value,(FMenuEntryResizeParams *)local_d0);
    FMenuEntryResizeParams::FWrappingParams::~FWrappingParams(&local_70);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_88);
    if ((void *)local_88._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_88._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_88);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_a8);
    if ((void *)local_a8._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_a8._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_a8);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
    if ((void *)local_c8._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_c8._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_c8);
  }
  return &this->Value;
}

// Get @ 14280cbc0

FSlateIcon * __thiscall TAttribute<FSlateIcon>::Get(TAttribute<FSlateIcon> *this)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  FReadAccessScope local_48;
  FName local_30;
  FName FStack_28;
  FName local_20;
  FName FStack_18;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_48);
  if (((*(int *)&(this->Getter).field_0x10 == 0) ||
      (plVar3 = *(longlong **)&(this->Getter).field_0x8, plVar3 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*plVar3 + 0x38))(), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  if (bVar1) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_48);
    if (*(int *)&(this->Getter).field_0x10 == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = *(longlong **)&(this->Getter).field_0x8;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3,&local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
    (this->Value).StyleSetName = local_30;
    (this->Value).StyleName = FStack_28;
    (this->Value).SmallStyleName = local_20;
    (this->Value).StatusOverlayStyleName = FStack_18;
  }
  return &this->Value;
}

// Get @ 14280cc90

FName * __thiscall TAttribute<FName>::Get(TAttribute<FName> *this)

{
  char cVar1;
  longlong *plVar2;
  FName local_res8;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->Getter).field_0x8, plVar2 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar2 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
      if (*(int *)&(this->Getter).field_0x10 == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)&(this->Getter).field_0x8;
      }
      (**(code **)(*plVar2 + 0x60))(plVar2,&local_res8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      this->Value = local_res8;
      return &this->Value;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return &this->Value;
}

// Get @ 14280cd40

ECheckBoxState * __thiscall TAttribute<enum_ECheckBoxState>::Get(void *this)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             &local_28);
  if ((*(int *)((longlong)this + 0x18) != 0) &&
     (*(longlong **)((longlong)this + 0x10) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
                 &local_28);
      if (*(int *)((longlong)this + 0x18) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)((longlong)this + 0x10);
      }
      uVar2 = (**(code **)(*plVar3 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      *(undefined1 *)this = uVar2;
      return this;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return this;
}

// Get @ 14280cde0

Type * __thiscall TAttribute<enum_ESelectionMode::Type>::Get(void *this)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             &local_28);
  if ((*(int *)((longlong)this + 0x18) != 0) &&
     (*(longlong **)((longlong)this + 0x10) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
                 &local_28);
      if (*(int *)((longlong)this + 0x18) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)((longlong)this + 0x10);
      }
      uVar2 = (**(code **)(*plVar3 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      *(undefined4 *)this = uVar2;
      return this;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return this;
}

// Get @ 14280ce80

bool * __thiscall TAttribute<bool>::Get(TAttribute<bool> *this)

{
  char cVar1;
  bool bVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->Getter).field_0x8, plVar3 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar3 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
      if (*(int *)&(this->Getter).field_0x10 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)&(this->Getter).field_0x8;
      }
      bVar2 = (bool)(**(code **)(*plVar3 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      this->Value = bVar2;
      return &this->Value;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return &this->Value;
}

// IsBound @ 14281ced0

bool __thiscall TAttribute<float>::IsBound(TAttribute<float> *this)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return true;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

// Steal @ 142836360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVariant<UE::Slate::PrioritizedWrapBox::EWrapMode,TDelegate<UE::Slate::PrioritizedWrapBox::EWrapMode___cdecl(void),FDefaultDelegateUserPolicy>_>
* __thiscall
TAttribute<enum_UE::Slate::PrioritizedWrapBox::EWrapMode>::Steal
          (void *this,
          TVariant<UE::Slate::PrioritizedWrapBox::EWrapMode,TDelegate<UE::Slate::PrioritizedWrapBox::EWrapMode___cdecl(void),FDefaultDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  TVariant<UE::Slate::PrioritizedWrapBox::EWrapMode,TDelegate<UE::Slate::PrioritizedWrapBox::EWrapMode___cdecl(void),FDefaultDelegateUserPolicy>_>
  *pTVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  FReadAccessScope local_80;
  undefined1 local_68 [24];
  byte local_50;
  undefined1 local_48 [24];
  byte local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88 = 0;
  if (*(char *)((longlong)this + 1) == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Attribute.h"
                       ,0x1c1,
                       L"It is an error to call Steal() on an unset TAttribute. Check IsSet() before calling Steal()."
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TVariant<UE::Slate::PrioritizedWrapBox::EWrapMode,TDelegate<UE::Slate::PrioritizedWrapBox::EWrapMode___cdecl(void),FDefaultDelegateUserPolicy>_>
                *)(*pcVar2)();
      return pTVar7;
    }
  }
  *(undefined1 *)((longlong)this + 1) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             &local_80);
  if ((*(int *)((longlong)this + 0x18) != 0) &&
     (*(longlong **)((longlong)this + 0x10) != (longlong *)0x0)) {
    cVar5 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x38))();
    if (cVar5 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_80);
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
      local_50 = 1;
      puVar9 = local_68;
      bVar3 = true;
      bVar4 = false;
      goto LAB_142836435;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_80);
  bVar3 = false;
  bVar4 = true;
  local_48[0] = *(undefined1 *)this;
  puVar9 = local_48;
  local_30 = 0;
LAB_142836435:
  bVar1 = puVar9[0x18];
  __return_storage_ptr__->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TVariant<UE::Slate::PrioritizedWrapBox::EWrapMode,TDelegate<UE::Slate::PrioritizedWrapBox::EWrapMode___cdecl(void),FDefaultDelegateUserPolicy>_>
                *)(*pcVar2)();
      return pTVar7;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Slate::PrioritizedWrapBox::EWrapMode,TDelegate<enum_UE::Slate::PrioritizedWrapBox::EWrapMode___cdecl(void),FDefaultDelegateUserPolicy>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(__return_storage_ptr__,puVar9);
  if (bVar4) {
    uVar8 = (ulonglong)local_30;
    if (1 < uVar8) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TVariant<UE::Slate::PrioritizedWrapBox::EWrapMode,TDelegate<UE::Slate::PrioritizedWrapBox::EWrapMode___cdecl(void),FDefaultDelegateUserPolicy>_>
                  *)(*pcVar2)();
        return pTVar7;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Slate::PrioritizedWrapBox::EWrapMode,TDelegate<enum_UE::Slate::PrioritizedWrapBox::EWrapMode___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8] !=
        UE::Core::Private::TDestructorCaller<enum_UE::Slate::PrioritizedWrapBox::EWrapMode>::
        Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Slate::PrioritizedWrapBox::EWrapMode,TDelegate<enum_UE::Slate::PrioritizedWrapBox::EWrapMode___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8])(local_48);
    }
  }
  if (bVar3) {
    uVar8 = (ulonglong)local_50;
    if (1 < uVar8) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TVariant<UE::Slate::PrioritizedWrapBox::EWrapMode,TDelegate<UE::Slate::PrioritizedWrapBox::EWrapMode___cdecl(void),FDefaultDelegateUserPolicy>_>
                  *)(*pcVar2)();
        return pTVar7;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Slate::PrioritizedWrapBox::EWrapMode,TDelegate<enum_UE::Slate::PrioritizedWrapBox::EWrapMode___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8] ==
        UE::Core::Private::
        TDestructorCaller<TDelegate<enum_UE::Slate::PrioritizedWrapBox::EWrapMode___cdecl(void),FDefaultDelegateUserPolicy>_>
        ::Destruct) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68);
      if ((void *)local_68._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_68._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_68);
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Slate::PrioritizedWrapBox::EWrapMode,TDelegate<enum_UE::Slate::PrioritizedWrapBox::EWrapMode___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8])();
    }
  }
  return __return_storage_ptr__;
}

// TAttribute<FText><SDockTab> @ 14283dbf0

/* WARNING: Enum "Type": Some values do not have unique names */

TAttribute<FText> * __thiscall
TAttribute<FText>::TAttribute<FText><SDockTab>
          (TAttribute<FText> *this,SDockTab *param_1,pmf_b5ac6a49 *param_2)

{
  undefined1 *puVar1;
  SWidget *pSVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined8 *puVar8;
  TSharedRef<SWidget_const_,1> *pTVar9;
  ulong64 uVar10;
  TReferenceControllerBase<1> *pTVar11;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  FText::FText(&this->Value);
  this->bIsSet = true;
  uVar3 = *(undefined8 *)param_2;
  uVar4 = *(undefined8 *)&param_2->field_0x8;
  puVar1 = &(this->Getter).field_0x8;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&(this->Getter).field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar8 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)puVar1);
  if (puVar8 == (undefined8 *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    pTVar11 = (pTVar9->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar9->Object;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar10;
    *puVar8 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSDockTab___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar8[3] = pSVar2;
    puVar8[4] = pTVar11;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar7 = true;
    bVar6 = true;
    bVar5 = true;
    puVar8[5] = uVar3;
    puVar8[6] = uVar4;
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// Bind<SCheckBox> @ 14283e180

void __thiscall
TAttribute<FSlateBrush_const_*>::Bind<SCheckBox>
          (TAttribute<FSlateBrush_const_*> *this,SCheckBox *param_1,pmf_ed12e3c9 *param_2)

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
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
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
              ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSCheckBox___00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
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
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Bind<SDockTab> @ 14283e2b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TAttribute<FSlateBrush_const_*>::Bind<SDockTab>
          (TAttribute<FSlateBrush_const_*> *this,SDockTab *param_1,pmf_604a4ec2 *param_2)

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
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
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
              ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSDockTab___00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
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
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Bind<SDockTab> @ 14283e3e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TAttribute<EVisibility>::Bind<SDockTab>
          (TAttribute<EVisibility> *this,SDockTab *param_1,pmf_5203558a *param_2)

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
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
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
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSDockTab___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
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
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Bind<SDockTab> @ 14283e510

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TAttribute<FSlateColor>::Bind<SDockTab>
          (TAttribute<FSlateColor> *this,SDockTab *param_1,pmf_11ab8443 *param_2)

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
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
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
              ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSDockTab___00__A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
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
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Bind<SDockTab> @ 14283e640

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TAttribute<FText>::Bind<SDockTab>(TAttribute<FText> *this,SDockTab *param_1,pmf_b5ac6a49 *param_2)

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
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
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
              ___7__TBaseSPMethodDelegateInstance__00__CBVSDockTab___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
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
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Bind<SEditableTextBox> @ 14283e770

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TAttribute<FSlateColor>::Bind<SEditableTextBox>
          (TAttribute<FSlateColor> *this,SEditableTextBox *param_1,pmf_fdf8873b *param_2)

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
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
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
              ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSEditableTextBox___00__A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
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
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// TAttribute<TSharedPtr<IToolTip,1>_> @ 142842100

TAttribute<TSharedPtr<IToolTip,1>_> * __thiscall
TAttribute<TSharedPtr<IToolTip,1>_>::TAttribute<TSharedPtr<IToolTip,1>_>
          (TAttribute<TSharedPtr<IToolTip,1>_> *this,TAttribute<TSharedPtr<IToolTip,1>_> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  (this->Value).Object = (param_1->Value).Object;
  pTVar1 = (param_1->Value).SharedReferenceCount.ReferenceController;
  (this->Value).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->bIsSet = param_1->bIsSet;
  TDelegate<TSharedPtr<IToolTip,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<TSharedPtr<IToolTip,1>___cdecl(void),FDefaultDelegateUserPolicy>
            (&this->Getter,&param_1->Getter);
  return this;
}

// TAttribute<enum_EVirtualKeyboardDismissAction> @ 142842150

TAttribute<EVirtualKeyboardDismissAction> * __thiscall
TAttribute<enum_EVirtualKeyboardDismissAction>::TAttribute<enum_EVirtualKeyboardDismissAction>
          (void *this,TAttribute<EVirtualKeyboardDismissAction> *param_1)

{
  *(EVirtualKeyboardDismissAction *)this = param_1->Value;
  *(bool *)((longlong)this + 1) = param_1->bIsSet;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  TDelegate<enum_EVirtualKeyboardDismissAction___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>((undefined8 *)((longlong)this + 8),&param_1->Getter);
  return this;
}

// operator= @ 14284b2e0

TAttribute<ECheckBoxState> * __thiscall
TAttribute<enum_ECheckBoxState>::operator=(void *this,TAttribute<ECheckBoxState> *param_1)

{
  longlong *plVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  *(ECheckBoxState *)this = param_1->Value;
  *(bool *)((longlong)this + 1) = param_1->bIsSet;
  if (&param_1->Getter !=
      (TDelegate<ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)this + 8)) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&(param_1->Getter).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(param_1->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return this;
}

// Get @ 142874600

short * __thiscall TAttribute<short>::Get(TAttribute<short> *this,short *param_1)

{
  char cVar1;
  short sVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  if (this->bIsSet == false) {
    return param_1;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->Getter).field_0x8, plVar3 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar3 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
      if (*(int *)&(this->Getter).field_0x10 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)&(this->Getter).field_0x8;
      }
      sVar2 = (**(code **)(*plVar3 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      this->Value = sVar2;
      return &this->Value;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return &this->Value;
}

// Get @ 1428746b0

FSlateBrush ** __thiscall
TAttribute<FSlateBrush_const_*>::Get(TAttribute<FSlateBrush_const_*> *this)

{
  char cVar1;
  FSlateBrush *pFVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->Getter).field_0x8, plVar3 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar3 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
      if (*(int *)&(this->Getter).field_0x10 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)&(this->Getter).field_0x8;
      }
      pFVar2 = (FSlateBrush *)(**(code **)(*plVar3 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      this->Value = pFVar2;
      return &this->Value;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return &this->Value;
}

// Get @ 142874750

FLinearColor * __thiscall TAttribute<FLinearColor>::Get(TAttribute<FLinearColor> *this)

{
  char cVar1;
  longlong *plVar2;
  FDestructionSentinel local_38;
  FReadAccessScope local_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FReadAccessScope *)&local_38);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->Getter).field_0x8, plVar2 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar2 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_20);
      if (*(int *)&(this->Getter).field_0x10 == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)&(this->Getter).field_0x8;
      }
      (**(code **)(*plVar2 + 0x60))(plVar2,&local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      *(undefined8 *)&(this->Value).field0_0x0 = local_38._0_8_;
      *(FMRSWRecursiveAccessDetector **)((longlong)&(this->Value).field0_0x0 + 8) =
           local_38.Accessor;
      return &this->Value;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_38);
  return &this->Value;
}

// Get @ 142874800

FSlateFontInfo * __thiscall TAttribute<FSlateFontInfo>::Get(TAttribute<FSlateFontInfo> *this)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  FReadAccessScope local_88;
  FSlateFontInfo local_70;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_88);
  if (((*(int *)&(this->Getter).field_0x10 == 0) ||
      (plVar3 = *(longlong **)&(this->Getter).field_0x8, plVar3 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*plVar3 + 0x38))(), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_88);
  if (bVar1) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_88);
    if (*(int *)&(this->Getter).field_0x10 == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = *(longlong **)&(this->Getter).field_0x8;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3,&local_70);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
    FSlateFontInfo::operator=(&this->Value,&local_70);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_70.CompositeFont.SharedReferenceCount.ReferenceController);
  }
  return &this->Value;
}

// Get @ 1428748e0

FString * __thiscall TAttribute<FString>::Get(TAttribute<FString> *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 local_38 [48];
  
  if (this->bIsSet == false) {
    return param_1;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FReadAccessScope *)(local_38 + 0x10));
  if (((*(int *)&(this->Getter).field_0x10 == 0) ||
      (plVar3 = *(longlong **)&(this->Getter).field_0x8, plVar3 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*plVar3 + 0x38))(), cVar2 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 0x10));
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 0x10));
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
               (FReadAccessScope *)(local_38 + 0x10));
    plVar3 = (longlong *)0x0;
    if (*(int *)&(this->Getter).field_0x10 != 0) {
      plVar3 = *(longlong **)&(this->Getter).field_0x8;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3,local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 0x10));
    if (this != (TAttribute<FString> *)local_38) {
      pFVar1 = (this->Value).Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (this->Value).Data.AllocatorInstance.Data = (FScriptContainerElement *)local_38._0_8_;
      (this->Value).Data.ArrayNum = local_38._8_4_;
      (this->Value).Data.ArrayMax = local_38._12_4_;
      local_38._8_4_ = 0;
      local_38._12_4_ = 0;
      local_38._0_8_ = (FScriptContainerElement *)0x0;
    }
    if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
      return &this->Value;
    }
  }
  return &this->Value;
}

// IsBound @ 142881ae0

bool __thiscall TAttribute<enum_ECheckBoxState>::IsBound(void *this)

{
  char cVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             &local_28);
  if ((*(int *)((longlong)this + 0x18) != 0) &&
     (*(longlong **)((longlong)this + 0x10) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return true;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

// IsBound @ 142881b40

bool __thiscall TAttribute<bool>::IsBound(TAttribute<bool> *this)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return true;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

// TAttribute<TOptional<UE::Math::TVector2<double>_>_><TOptional<UE::Math::TVector2<double>_>_> @ 1428a0e30

TAttribute<TOptional<UE::Math::TVector2<double>_>_> * __thiscall
TAttribute<TOptional<UE::Math::TVector2<double>_>_>::
TAttribute<TOptional<UE::Math::TVector2<double>_>_><TOptional<UE::Math::TVector2<double>_>_>
          (TAttribute<TOptional<UE::Math::TVector2<double>_>_> *this,
          TOptional<UE::Math::TVector2<double>_> *param_1)

{
  bool bVar1;
  double dVar2;
  
  (this->Value).bIsSet = false;
  bVar1 = param_1->bIsSet;
  (this->Value).bIsSet = bVar1;
  if (bVar1 != false) {
    dVar2 = (param_1->TypedValue).field0_0x0._s_0.Y;
    (this->Value).TypedValue.field0_0x0._s_0.X = (param_1->TypedValue).field0_0x0._s_0.X;
    (this->Value).TypedValue.field0_0x0._s_0.Y = dVar2;
  }
  this->bIsSet = true;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

// Bind<SSpinBox<signed_char>_> @ 1428a6540

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TAttribute<float>::Bind<SSpinBox<signed_char>_>
          (TAttribute<float> *this,SSpinBox<signed_char> *param_1,pmf_64f0149b *param_2)

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
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
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
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__SSpinBox_C___00__A6AMXZUFDefaultDelegateUserPolicy____V__6B_
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
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Bind<SSpinBox<signed_char>_> @ 1428a6670

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TAttribute<FText>::Bind<SSpinBox<signed_char>_>
          (TAttribute<FText> *this,SSpinBox<signed_char> *param_1,pmf_97887514 *param_2)

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
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
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
              ___7__TBaseSPMethodDelegateInstance__00__CBV__SSpinBox_C___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
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
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Bind<SSpinBox<unsigned_char>_> @ 1428a67a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TAttribute<float>::Bind<SSpinBox<unsigned_char>_>
          (TAttribute<float> *this,SSpinBox<unsigned_char> *param_1,pmf_7c4f2dc2 *param_2)

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
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
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
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__SSpinBox_E___00__A6AMXZUFDefaultDelegateUserPolicy____V__6B_
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
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Bind<SSpinBox<unsigned_char>_> @ 1428a68d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TAttribute<FText>::Bind<SSpinBox<unsigned_char>_>
          (TAttribute<FText> *this,SSpinBox<unsigned_char> *param_1,pmf_ce747abb *param_2)

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
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
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
              ___7__TBaseSPMethodDelegateInstance__00__CBV__SSpinBox_E___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
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
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Bind<SSpinBox<short>_> @ 1428a6a00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TAttribute<float>::Bind<SSpinBox<short>_>
          (TAttribute<float> *this,SSpinBox<short> *param_1,pmf_587e26bd *param_2)

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
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
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
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__SSpinBox_F___00__A6AMXZUFDefaultDelegateUserPolicy____V__6B_
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
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Bind<SSpinBox<short>_> @ 1428a6b30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TAttribute<FText>::Bind<SSpinBox<short>_>
          (TAttribute<FText> *this,SSpinBox<short> *param_1,pmf_8ad28676 *param_2)

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
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
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
              ___7__TBaseSPMethodDelegateInstance__00__CBV__SSpinBox_F___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
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
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Bind<SSpinBox<unsigned_short>_> @ 1428a6c60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TAttribute<float>::Bind<SSpinBox<unsigned_short>_>
          (TAttribute<float> *this,SSpinBox<unsigned_short> *param_1,pmf_9d5752de *param_2)

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
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
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
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__SSpinBox_G___00__A6AMXZUFDefaultDelegateUserPolicy____V__6B_
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
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Bind<SSpinBox<unsigned_short>_> @ 1428a6d90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TAttribute<FText>::Bind<SSpinBox<unsigned_short>_>
          (TAttribute<FText> *this,SSpinBox<unsigned_short> *param_1,pmf_49545821 *param_2)

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
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
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
              ___7__TBaseSPMethodDelegateInstance__00__CBV__SSpinBox_G___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
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
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Bind<SSpinBox<int>_> @ 1428a6ec0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TAttribute<float>::Bind<SSpinBox<int>_>
          (TAttribute<float> *this,SSpinBox<int> *param_1,pmf_2141d950 *param_2)

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
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
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
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__SSpinBox_H___00__A6AMXZUFDefaultDelegateUserPolicy____V__6B_
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
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Bind<SSpinBox<int>_> @ 1428a6ff0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TAttribute<FText>::Bind<SSpinBox<int>_>
          (TAttribute<FText> *this,SSpinBox<int> *param_1,pmf_09892509 *param_2)

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
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
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
              ___7__TBaseSPMethodDelegateInstance__00__CBV__SSpinBox_H___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
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
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Bind<SSpinBox<unsigned_int>_> @ 1428a7120

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TAttribute<float>::Bind<SSpinBox<unsigned_int>_>
          (TAttribute<float> *this,SSpinBox<unsigned_int> *param_1,pmf_60815aab *param_2)

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
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
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
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__SSpinBox_I___00__A6AMXZUFDefaultDelegateUserPolicy____V__6B_
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
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Bind<SSpinBox<unsigned_int>_> @ 1428a7250

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TAttribute<FText>::Bind<SSpinBox<unsigned_int>_>
          (TAttribute<FText> *this,SSpinBox<unsigned_int> *param_1,pmf_847bc3ee *param_2)

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
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
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
              ___7__TBaseSPMethodDelegateInstance__00__CBV__SSpinBox_I___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
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
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Bind<SSpinBox<float>_> @ 1428a7380

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TAttribute<float>::Bind<SSpinBox<float>_>
          (TAttribute<float> *this,SSpinBox<float> *param_1,pmf_31e5389d *param_2)

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
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
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
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__SSpinBox_M___00__A6AMXZUFDefaultDelegateUserPolicy____V__6B_
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
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Bind<SSpinBox<float>_> @ 1428a74b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TAttribute<FText>::Bind<SSpinBox<float>_>
          (TAttribute<FText> *this,SSpinBox<float> *param_1,pmf_838cf056 *param_2)

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
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
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
              ___7__TBaseSPMethodDelegateInstance__00__CBV__SSpinBox_M___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
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
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Bind<SSpinBox<double>_> @ 1428a75e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TAttribute<float>::Bind<SSpinBox<double>_>
          (TAttribute<float> *this,SSpinBox<double> *param_1,pmf_77ab4c9e *param_2)

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
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
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
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__SSpinBox_N___00__A6AMXZUFDefaultDelegateUserPolicy____V__6B_
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
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Bind<SSpinBox<double>_> @ 1428a7710

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TAttribute<FText>::Bind<SSpinBox<double>_>
          (TAttribute<FText> *this,SSpinBox<double> *param_1,pmf_ceb510e1 *param_2)

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
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
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
              ___7__TBaseSPMethodDelegateInstance__00__CBV__SSpinBox_N___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
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
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Bind<SSpinBox<__int64>_> @ 1428a7840

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TAttribute<float>::Bind<SSpinBox<__int64>_>
          (TAttribute<float> *this,SSpinBox<__int64> *param_1,pmf_e1386d2e *param_2)

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
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
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
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__SSpinBox__J___00__A6AMXZUFDefaultDelegateUserPolicy____V__6B_
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
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Bind<SSpinBox<__int64>_> @ 1428a7970

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TAttribute<FText>::Bind<SSpinBox<__int64>_>
          (TAttribute<FText> *this,SSpinBox<__int64> *param_1,pmf_40e1b5e7 *param_2)

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
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
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
              ___7__TBaseSPMethodDelegateInstance__00__CBV__SSpinBox__J___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
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
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Bind<SSpinBox<unsigned___int64>_> @ 1428a7aa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TAttribute<float>::Bind<SSpinBox<unsigned___int64>_>
          (TAttribute<float> *this,SSpinBox<unsigned___int64> *param_1,pmf_6bfd0c8d *param_2)

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
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
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
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__SSpinBox__K___00__A6AMXZUFDefaultDelegateUserPolicy____V__6B_
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
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Bind<SSpinBox<unsigned___int64>_> @ 1428a7bd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TAttribute<FText>::Bind<SSpinBox<unsigned___int64>_>
          (TAttribute<FText> *this,SSpinBox<unsigned___int64> *param_1,pmf_593bf8d0 *param_2)

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
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
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
              ___7__TBaseSPMethodDelegateInstance__00__CBV__SSpinBox__K___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
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
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Bind<SMultiLineEditableTextBox> @ 1428a7d00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TAttribute<FMargin>::Bind<SMultiLineEditableTextBox>
          (TAttribute<FMargin> *this,SMultiLineEditableTextBox *param_1,pmf_5fe5b980 *param_2)

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
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
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
              ___7__TCommonDelegateInstanceState___A6A_AUFMargin__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSMultiLineEditableTextBox___00__A6A_AUFMargin__XZUFDefaultDelegateUserPolicy____V__6B_
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
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Bind<SMultiLineEditableTextBox> @ 1428a7e30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TAttribute<FSlateColor>::Bind<SMultiLineEditableTextBox>
          (TAttribute<FSlateColor> *this,SMultiLineEditableTextBox *param_1,pmf_f1edf8e4 *param_2)

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
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
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
              ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSMultiLineEditableTextBox___00__A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
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
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Bind<SSearchBox> @ 1428a7f60

void __thiscall
TAttribute<EVisibility>::Bind<SSearchBox>
          (TAttribute<EVisibility> *this,SSearchBox *param_1,pmf_b801044b *param_2)

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
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
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
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSSearchBox___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
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
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// BindLambda<TFunction<TOptional<signed_char>___cdecl(void)>_&> @ 1428a8090

void __thiscall
TAttribute<TOptional<signed_char>_>::BindLambda<TFunction<TOptional<signed_char>___cdecl(void)>_&>
          (TAttribute<TOptional<signed_char>_> *this,
          TFunction<TOptional<signed_char>___cdecl(void)> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_C__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AU__TOptional_C__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AU__TOptional_C__XZ____V__6B_
    ;
    lVar1 = *(longlong *)param_1;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar2 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar2)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// BindLambda<TFunction<TOptional<unsigned_char>___cdecl(void)>_&> @ 1428a8140

void __thiscall
TAttribute<TOptional<unsigned_char>_>::
BindLambda<TFunction<TOptional<unsigned_char>___cdecl(void)>_&>
          (TAttribute<TOptional<unsigned_char>_> *this,
          TFunction<TOptional<unsigned_char>___cdecl(void)> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_E__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AU__TOptional_E__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AU__TOptional_E__XZ____V__6B_
    ;
    lVar1 = *(longlong *)param_1;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar2 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar2)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// BindLambda<TFunction<TOptional<short>___cdecl(void)>_&> @ 1428a81f0

void __thiscall
TAttribute<TOptional<short>_>::BindLambda<TFunction<TOptional<short>___cdecl(void)>_&>
          (TAttribute<TOptional<short>_> *this,TFunction<TOptional<short>___cdecl(void)> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_F__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AU__TOptional_F__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AU__TOptional_F__XZ____V__6B_
    ;
    lVar1 = *(longlong *)param_1;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar2 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar2)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// BindLambda<TFunction<TOptional<unsigned_short>___cdecl(void)>_&> @ 1428a82a0

void __thiscall
TAttribute<TOptional<unsigned_short>_>::
BindLambda<TFunction<TOptional<unsigned_short>___cdecl(void)>_&>
          (TAttribute<TOptional<unsigned_short>_> *this,
          TFunction<TOptional<unsigned_short>___cdecl(void)> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_G__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AU__TOptional_G__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AU__TOptional_G__XZ____V__6B_
    ;
    lVar1 = *(longlong *)param_1;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar2 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar2)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// BindLambda<TFunction<TOptional<int>___cdecl(void)>_&> @ 1428a8350

void __thiscall
TAttribute<TOptional<int>_>::BindLambda<TFunction<TOptional<int>___cdecl(void)>_&>
          (TAttribute<TOptional<int>_> *this,TFunction<TOptional<int>___cdecl(void)> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_H__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AU__TOptional_H__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AU__TOptional_H__XZ____V__6B_
    ;
    lVar1 = *(longlong *)param_1;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar2 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar2)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// BindLambda<TFunction<TOptional<unsigned_int>___cdecl(void)>_&> @ 1428a8400

void __thiscall
TAttribute<TOptional<unsigned_int>_>::BindLambda<TFunction<TOptional<unsigned_int>___cdecl(void)>_&>
          (TAttribute<TOptional<unsigned_int>_> *this,
          TFunction<TOptional<unsigned_int>___cdecl(void)> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_I__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AU__TOptional_I__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AU__TOptional_I__XZ____V__6B_
    ;
    lVar1 = *(longlong *)param_1;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar2 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar2)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// BindLambda<TFunction<TOptional<float>___cdecl(void)>_&> @ 1428a84b0

void __thiscall
TAttribute<TOptional<float>_>::BindLambda<TFunction<TOptional<float>___cdecl(void)>_&>
          (TAttribute<TOptional<float>_> *this,TFunction<TOptional<float>___cdecl(void)> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_M__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AU__TOptional_M__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AU__TOptional_M__XZ____V__6B_
    ;
    lVar1 = *(longlong *)param_1;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar2 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar2)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// BindLambda<TFunction<TOptional<double>___cdecl(void)>_&> @ 1428a8560

void __thiscall
TAttribute<TOptional<double>_>::BindLambda<TFunction<TOptional<double>___cdecl(void)>_&>
          (TAttribute<TOptional<double>_> *this,TFunction<TOptional<double>___cdecl(void)> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_N__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AU__TOptional_N__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AU__TOptional_N__XZ____V__6B_
    ;
    lVar1 = *(longlong *)param_1;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar2 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar2)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// BindLambda<TFunction<TOptional<__int64>___cdecl(void)>_&> @ 1428a8610

void __thiscall
TAttribute<TOptional<__int64>_>::BindLambda<TFunction<TOptional<__int64>___cdecl(void)>_&>
          (TAttribute<TOptional<__int64>_> *this,
          TFunction<TOptional<__int64>___cdecl(void)> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional__J__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AU__TOptional__J__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AU__TOptional__J__XZ____V__6B_
    ;
    lVar1 = *(longlong *)param_1;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar2 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar2)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// BindLambda<TFunction<TOptional<unsigned___int64>___cdecl(void)>_&> @ 1428a86c0

void __thiscall
TAttribute<TOptional<unsigned___int64>_>::
BindLambda<TFunction<TOptional<unsigned___int64>___cdecl(void)>_&>
          (TAttribute<TOptional<unsigned___int64>_> *this,
          TFunction<TOptional<unsigned___int64>___cdecl(void)> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional__K__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AU__TOptional__K__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AU__TOptional__K__XZ____V__6B_
    ;
    lVar1 = *(longlong *)param_1;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar2 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar2)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// BindLambda<TFunction<FMargin___cdecl(void)>_&> @ 1428a8770

void __thiscall
TAttribute<FMargin>::BindLambda<TFunction<FMargin___cdecl(void)>_&>
          (TAttribute<FMargin> *this,TFunction<FMargin___cdecl(void)> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFMargin__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AUFMargin__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AUFMargin__XZ____V__6B_
    ;
    lVar1 = *(longlong *)param_1;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar2 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar2)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// BindLambda<TFunction<FSlateFontInfo___cdecl(void)>_&> @ 1428a8820

void __thiscall
TAttribute<FSlateFontInfo>::BindLambda<TFunction<FSlateFontInfo___cdecl(void)>_&>
          (TAttribute<FSlateFontInfo> *this,TFunction<FSlateFontInfo___cdecl(void)> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFSlateFontInfo__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AUFSlateFontInfo__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AUFSlateFontInfo__XZ____V__6B_
    ;
    lVar1 = *(longlong *)param_1;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar2 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar2)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// BindLambda<TFunction<enum_EKeyboardType___cdecl(void)>_&> @ 1428a88d0

void __thiscall
TAttribute<enum_EKeyboardType>::BindLambda<TFunction<enum_EKeyboardType___cdecl(void)>_&>
          (void *this,TFunction<EKeyboardType___cdecl(void)> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  *(undefined1 *)((longlong)this + 4) = 1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             (FWriteAccessScope *)&local_28);
  local_10 = (FDelegateAllocation *)((longlong)this + 0x10);
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EKeyboardType__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AW4EKeyboardType__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AW4EKeyboardType__XZ____V__6B_
    ;
    lVar1 = *(longlong *)param_1;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar2 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar2)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// BindLambda<TFunction<enum_ETextJustify::Type___cdecl(void)>_&> @ 1428a8980

void __thiscall
TAttribute<enum_ETextJustify::Type>::BindLambda<TFunction<enum_ETextJustify::Type___cdecl(void)>_&>
          (void *this,TFunction<ETextJustify::Type___cdecl(void)> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  *(undefined1 *)((longlong)this + 4) = 1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             (FWriteAccessScope *)&local_28);
  local_10 = (FDelegateAllocation *)((longlong)this + 0x10);
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4Type_ETextJustify__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AW4Type_ETextJustify__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AW4Type_ETextJustify__XZ____V__6B_
    ;
    lVar1 = *(longlong *)param_1;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar2 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar2)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// BindLambda<TFunction<signed_char___cdecl(void)>_&> @ 1428a8a30

void __thiscall
TAttribute<signed_char>::BindLambda<TFunction<signed_char___cdecl(void)>_&>
          (TAttribute<signed_char> *this,TFunction<signed_char___cdecl(void)> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6ACXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6ACXZUFDefaultDelegateUserPolicy__V__TFunction___A6ACXZ____V__6B_
    ;
    lVar1 = *(longlong *)param_1;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar2 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar2)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// BindLambda<TFunction<unsigned_char___cdecl(void)>_&> @ 1428a8ae0

void __thiscall
TAttribute<unsigned_char>::BindLambda<TFunction<unsigned_char___cdecl(void)>_&>
          (TAttribute<unsigned_char> *this,TFunction<unsigned_char___cdecl(void)> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AEXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6AEXZUFDefaultDelegateUserPolicy__V__TFunction___A6AEXZ____V__6B_
    ;
    lVar1 = *(longlong *)param_1;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar2 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar2)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// BindLambda<TFunction<short___cdecl(void)>_&> @ 1428a8b90

void __thiscall
TAttribute<short>::BindLambda<TFunction<short___cdecl(void)>_&>
          (TAttribute<short> *this,TFunction<short___cdecl(void)> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AFXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6AFXZUFDefaultDelegateUserPolicy__V__TFunction___A6AFXZ____V__6B_
    ;
    lVar1 = *(longlong *)param_1;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar2 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar2)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// BindLambda<TFunction<unsigned_short___cdecl(void)>_&> @ 1428a8c40

void __thiscall
TAttribute<unsigned_short>::BindLambda<TFunction<unsigned_short___cdecl(void)>_&>
          (TAttribute<unsigned_short> *this,TFunction<unsigned_short___cdecl(void)> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AGXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6AGXZUFDefaultDelegateUserPolicy__V__TFunction___A6AGXZ____V__6B_
    ;
    lVar1 = *(longlong *)param_1;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar2 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar2)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// BindLambda<TFunction<int___cdecl(void)>_&> @ 1428a8cf0

void __thiscall
TAttribute<int>::BindLambda<TFunction<int___cdecl(void)>_&>
          (TAttribute<int> *this,TFunction<int___cdecl(void)> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AHXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6AHXZUFDefaultDelegateUserPolicy__V__TFunction___A6AHXZ____V__6B_
    ;
    lVar1 = *(longlong *)param_1;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar2 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar2)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// BindLambda<TFunction<unsigned_int___cdecl(void)>_&> @ 1428a8da0

void __thiscall
TAttribute<unsigned_int>::BindLambda<TFunction<unsigned_int___cdecl(void)>_&>
          (TAttribute<unsigned_int> *this,TFunction<unsigned_int___cdecl(void)> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AIXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6AIXZUFDefaultDelegateUserPolicy__V__TFunction___A6AIXZ____V__6B_
    ;
    lVar1 = *(longlong *)param_1;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar2 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar2)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// BindLambda<TFunction<float___cdecl(void)>_&> @ 1428a8e50

void __thiscall
TAttribute<float>::BindLambda<TFunction<float___cdecl(void)>_&>
          (TAttribute<float> *this,TFunction<float___cdecl(void)> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6AMXZUFDefaultDelegateUserPolicy__V__TFunction___A6AMXZ____V__6B_
    ;
    lVar1 = *(longlong *)param_1;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar2 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar2)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// BindLambda<TFunction<double___cdecl(void)>_&> @ 1428a8f00

void __thiscall
TAttribute<double>::BindLambda<TFunction<double___cdecl(void)>_&>
          (TAttribute<double> *this,TFunction<double___cdecl(void)> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6ANXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6ANXZUFDefaultDelegateUserPolicy__V__TFunction___A6ANXZ____V__6B_
    ;
    lVar1 = *(longlong *)param_1;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar2 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar2)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// BindLambda<TFunction<__int64___cdecl(void)>_&> @ 1428a8fb0

void __thiscall
TAttribute<__int64>::BindLambda<TFunction<__int64___cdecl(void)>_&>
          (TAttribute<__int64> *this,TFunction<__int64___cdecl(void)> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6A_JXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_JXZUFDefaultDelegateUserPolicy__V__TFunction___A6A_JXZ____V__6B_
    ;
    lVar1 = *(longlong *)param_1;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar2 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar2)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// BindLambda<TFunction<unsigned___int64___cdecl(void)>_&> @ 1428a9060

void __thiscall
TAttribute<unsigned___int64>::BindLambda<TFunction<unsigned___int64___cdecl(void)>_&>
          (TAttribute<unsigned___int64> *this,TFunction<unsigned___int64___cdecl(void)> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6A_KXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_KXZUFDefaultDelegateUserPolicy__V__TFunction___A6A_KXZ____V__6B_
    ;
    lVar1 = *(longlong *)param_1;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar2 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar2)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// BindLambda<TFunction<bool___cdecl(void)>_&> @ 1428a9110

void __thiscall
TAttribute<bool>::BindLambda<TFunction<bool___cdecl(void)>_&>
          (TAttribute<bool> *this,TFunction<bool___cdecl(void)> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_NXZUFDefaultDelegateUserPolicy__V__TFunction___A6A_NXZ____V__6B_
    ;
    lVar1 = *(longlong *)param_1;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar2 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar2)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Set<FText> @ 1428ade30

void __thiscall TAttribute<FText>::Set<FText>(TAttribute<FText> *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  pIVar1 = (param_1->TextData).Reference;
  pIVar2 = (this->Value).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->Value).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->Value).Flags = param_1->Flags;
  this->bIsSet = true;
  return;
}

// TAttribute<UE::Math::TVector2<double>_> @ 1428b1080

TAttribute<UE::Math::TVector2<double>_> * __thiscall
TAttribute<UE::Math::TVector2<double>_>::TAttribute<UE::Math::TVector2<double>_>
          (TAttribute<UE::Math::TVector2<double>_> *this,TVector2<double> *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  this->bIsSet = true;
  (this->Value).field0_0x0._s_0.X = dVar1;
  (this->Value).field0_0x0._s_0.Y = dVar2;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

// TAttribute<FInputChord> @ 1428b10b0

TAttribute<FInputChord> * __thiscall
TAttribute<FInputChord>::TAttribute<FInputChord>(TAttribute<FInputChord> *this,FInputChord *param_1)

{
  uint uVar1;
  
  (this->Value).Key.KeyName = (param_1->Key).KeyName;
  (this->Value).Key.KeyDetails.Object = (param_1->Key).KeyDetails.Object;
  (this->Value).Key.KeyDetails.SharedReferenceCount.ReferenceController =
       (param_1->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  (param_1->Key).KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->Key).KeyDetails.Object = (FKeyDetails *)0x0;
  uVar1 = ((this->Value).bShift ^ param_1->bShift) & 1 ^ *(uint *)&(this->Value).field_0x18;
  *(uint *)&(this->Value).field_0x18 = uVar1;
  uVar1 = (uVar1 ^ *(uint *)&param_1->field_0x18) & 2 ^ uVar1;
  *(uint *)&(this->Value).field_0x18 = uVar1;
  uVar1 = (uVar1 ^ *(uint *)&param_1->field_0x18) & 4 ^ uVar1;
  *(uint *)&(this->Value).field_0x18 = uVar1;
  *(uint *)&(this->Value).field_0x18 = (uVar1 ^ *(uint *)&param_1->field_0x18) & 8 ^ uVar1;
  this->bIsSet = true;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

// TAttribute<FSlateFontInfo> @ 1428b1130

TAttribute<FSlateFontInfo> * __thiscall
TAttribute<FSlateFontInfo>::TAttribute<FSlateFontInfo>
          (TAttribute<FSlateFontInfo> *this,TAttribute<FSlateFontInfo> *param_1)

{
  FSlateFontInfo::FSlateFontInfo(&this->Value,&param_1->Value);
  this->bIsSet = param_1->bIsSet;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  *(undefined4 *)&(this->Getter).field_0x10 = 0;
  TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->Getter,&param_1->Getter);
  return this;
}

// operator= @ 1428c1fa0

TAttribute<TOptional<signed_char>_> * __thiscall
TAttribute<TOptional<signed_char>_>::operator=
          (TAttribute<TOptional<signed_char>_> *this,TAttribute<TOptional<signed_char>_> *param_1)

{
  longlong *plVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if (param_1 != this) {
    if ((param_1->Value).bIsSet == false) {
      if ((this->Value).bIsSet != false) {
        (this->Value).bIsSet = false;
      }
    }
    else {
      (this->Value).TypedValue = (param_1->Value).TypedValue;
      (this->Value).bIsSet = true;
    }
  }
  this->bIsSet = param_1->bIsSet;
  if (&param_1->Getter != &this->Getter) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&(param_1->Getter).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(param_1->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return this;
}

// operator= @ 1428c20d0

TAttribute<TOptional<unsigned_char>_> * __thiscall
TAttribute<TOptional<unsigned_char>_>::operator=
          (TAttribute<TOptional<unsigned_char>_> *this,
          TAttribute<TOptional<unsigned_char>_> *param_1)

{
  longlong *plVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if (param_1 != this) {
    if ((param_1->Value).bIsSet == false) {
      if ((this->Value).bIsSet != false) {
        (this->Value).bIsSet = false;
      }
    }
    else {
      (this->Value).TypedValue = (param_1->Value).TypedValue;
      (this->Value).bIsSet = true;
    }
  }
  this->bIsSet = param_1->bIsSet;
  if (&param_1->Getter != &this->Getter) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&(param_1->Getter).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(param_1->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return this;
}

// operator= @ 1428c2200

TAttribute<TOptional<short>_> * __thiscall
TAttribute<TOptional<short>_>::operator=
          (TAttribute<TOptional<short>_> *this,TAttribute<TOptional<short>_> *param_1)

{
  longlong *plVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if (param_1 != this) {
    if ((param_1->Value).bIsSet == false) {
      if ((this->Value).bIsSet != false) {
        (this->Value).bIsSet = false;
      }
    }
    else {
      (this->Value).TypedValue = (param_1->Value).TypedValue;
      (this->Value).bIsSet = true;
    }
  }
  this->bIsSet = param_1->bIsSet;
  if (&param_1->Getter != &this->Getter) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&(param_1->Getter).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(param_1->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return this;
}

// operator= @ 1428c2330

TAttribute<TOptional<unsigned_short>_> * __thiscall
TAttribute<TOptional<unsigned_short>_>::operator=
          (TAttribute<TOptional<unsigned_short>_> *this,
          TAttribute<TOptional<unsigned_short>_> *param_1)

{
  longlong *plVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if (param_1 != this) {
    if ((param_1->Value).bIsSet == false) {
      if ((this->Value).bIsSet != false) {
        (this->Value).bIsSet = false;
      }
    }
    else {
      (this->Value).TypedValue = (param_1->Value).TypedValue;
      (this->Value).bIsSet = true;
    }
  }
  this->bIsSet = param_1->bIsSet;
  if (&param_1->Getter != &this->Getter) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&(param_1->Getter).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(param_1->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return this;
}

// operator= @ 1428c2460

TAttribute<TOptional<unsigned_int>_> * __thiscall
TAttribute<TOptional<unsigned_int>_>::operator=
          (TAttribute<TOptional<unsigned_int>_> *this,TAttribute<TOptional<unsigned_int>_> *param_1)

{
  longlong *plVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if (param_1 != this) {
    if ((param_1->Value).bIsSet == false) {
      if ((this->Value).bIsSet != false) {
        (this->Value).bIsSet = false;
      }
    }
    else {
      (this->Value).TypedValue = (param_1->Value).TypedValue;
      (this->Value).bIsSet = true;
    }
  }
  this->bIsSet = param_1->bIsSet;
  if (&param_1->Getter != &this->Getter) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&(param_1->Getter).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(param_1->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return this;
}

// operator= @ 1428c2590

TAttribute<TOptional<float>_> * __thiscall
TAttribute<TOptional<float>_>::operator=
          (TAttribute<TOptional<float>_> *this,TAttribute<TOptional<float>_> *param_1)

{
  longlong *plVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if (param_1 != this) {
    if ((param_1->Value).bIsSet == false) {
      if ((this->Value).bIsSet != false) {
        (this->Value).bIsSet = false;
      }
    }
    else {
      (this->Value).TypedValue = (param_1->Value).TypedValue;
      (this->Value).bIsSet = true;
    }
  }
  this->bIsSet = param_1->bIsSet;
  if (&param_1->Getter != &this->Getter) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&(param_1->Getter).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(param_1->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return this;
}

// operator= @ 1428c26c0

TAttribute<TOptional<double>_> * __thiscall
TAttribute<TOptional<double>_>::operator=
          (TAttribute<TOptional<double>_> *this,TAttribute<TOptional<double>_> *param_1)

{
  longlong *plVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if (param_1 != this) {
    if ((param_1->Value).bIsSet == false) {
      if ((this->Value).bIsSet != false) {
        (this->Value).bIsSet = false;
      }
    }
    else {
      (this->Value).TypedValue = (param_1->Value).TypedValue;
      (this->Value).bIsSet = true;
    }
  }
  this->bIsSet = param_1->bIsSet;
  if (&param_1->Getter != &this->Getter) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&(param_1->Getter).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(param_1->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return this;
}

// operator= @ 1428c27f0

TAttribute<TOptional<__int64>_> * __thiscall
TAttribute<TOptional<__int64>_>::operator=
          (TAttribute<TOptional<__int64>_> *this,TAttribute<TOptional<__int64>_> *param_1)

{
  longlong *plVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if (param_1 != this) {
    if ((param_1->Value).bIsSet == false) {
      if ((this->Value).bIsSet != false) {
        (this->Value).bIsSet = false;
      }
    }
    else {
      (this->Value).TypedValue = (param_1->Value).TypedValue;
      (this->Value).bIsSet = true;
    }
  }
  this->bIsSet = param_1->bIsSet;
  if (&param_1->Getter != &this->Getter) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&(param_1->Getter).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(param_1->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return this;
}

// operator= @ 1428c2920

TAttribute<TOptional<unsigned___int64>_> * __thiscall
TAttribute<TOptional<unsigned___int64>_>::operator=
          (TAttribute<TOptional<unsigned___int64>_> *this,
          TAttribute<TOptional<unsigned___int64>_> *param_1)

{
  longlong *plVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if (param_1 != this) {
    if ((param_1->Value).bIsSet == false) {
      if ((this->Value).bIsSet != false) {
        (this->Value).bIsSet = false;
      }
    }
    else {
      (this->Value).TypedValue = (param_1->Value).TypedValue;
      (this->Value).bIsSet = true;
    }
  }
  this->bIsSet = param_1->bIsSet;
  if (&param_1->Getter != &this->Getter) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&(param_1->Getter).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(param_1->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return this;
}

// operator= @ 1428c2a50

TAttribute<FInputChord> * __thiscall
TAttribute<FInputChord>::operator=(TAttribute<FInputChord> *this,TAttribute<FInputChord> *param_1)

{
  longlong *plVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  FInputChord::operator=(&this->Value,&param_1->Value);
  this->bIsSet = param_1->bIsSet;
  if (&param_1->Getter != &this->Getter) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&(param_1->Getter).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(param_1->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return this;
}

// operator= @ 1428c2b70

TAttribute<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> * __thiscall
TAttribute<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>::operator=
          (TAttribute<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *this,
          TAttribute<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  longlong *plVar4;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if (this != param_1) {
    iVar2 = (param_1->Value).ArrayNum;
    iVar3 = (this->Value).ArrayMax;
    piVar1 = &(this->Value).ArrayMax;
    _Src = (param_1->Value).AllocatorInstance.Data;
    (this->Value).ArrayNum = iVar2;
    if ((iVar2 == 0) && (iVar3 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar2,iVar3,(ForAnyElementType *)this,iVar2,piVar1);
      if (iVar2 != 0) {
        memcpy((this->Value).AllocatorInstance.Data,_Src,(longlong)iVar2 << 3);
      }
    }
  }
  this->bIsSet = param_1->bIsSet;
  if (&param_1->Getter != &this->Getter) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&(param_1->Getter).field_0x10 != 0) &&
       (plVar4 = *(longlong **)&(param_1->Getter).field_0x8, plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 0x50))(plVar4,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return this;
}

// operator= @ 1428c2cf0

TAttribute<TSharedPtr<INumericTypeInterface<signed_char>,1>_> * __thiscall
TAttribute<TSharedPtr<INumericTypeInterface<signed_char>,1>_>::operator=
          (TAttribute<TSharedPtr<INumericTypeInterface<signed_char>,1>_> *this,
          TAttribute<TSharedPtr<INumericTypeInterface<signed_char>,1>_> *param_1)

{
  if (this != param_1) {
    (this->Value).Object = (param_1->Value).Object;
    (param_1->Value).Object = (INumericTypeInterface<signed_char> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Value).SharedReferenceCount,&(param_1->Value).SharedReferenceCount);
  }
  this->bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  return this;
}

// operator= @ 1428c2d50

TAttribute<TSharedPtr<INumericTypeInterface<unsigned_char>,1>_> * __thiscall
TAttribute<TSharedPtr<INumericTypeInterface<unsigned_char>,1>_>::operator=
          (TAttribute<TSharedPtr<INumericTypeInterface<unsigned_char>,1>_> *this,
          TAttribute<TSharedPtr<INumericTypeInterface<unsigned_char>,1>_> *param_1)

{
  if (this != param_1) {
    (this->Value).Object = (param_1->Value).Object;
    (param_1->Value).Object = (INumericTypeInterface<unsigned_char> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Value).SharedReferenceCount,&(param_1->Value).SharedReferenceCount);
  }
  this->bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  return this;
}

// operator= @ 1428c2db0

TAttribute<TSharedPtr<INumericTypeInterface<short>,1>_> * __thiscall
TAttribute<TSharedPtr<INumericTypeInterface<short>,1>_>::operator=
          (TAttribute<TSharedPtr<INumericTypeInterface<short>,1>_> *this,
          TAttribute<TSharedPtr<INumericTypeInterface<short>,1>_> *param_1)

{
  if (this != param_1) {
    (this->Value).Object = (param_1->Value).Object;
    (param_1->Value).Object = (INumericTypeInterface<short> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Value).SharedReferenceCount,&(param_1->Value).SharedReferenceCount);
  }
  this->bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  return this;
}

// operator= @ 1428c2e10

TAttribute<TSharedPtr<INumericTypeInterface<unsigned_short>,1>_> * __thiscall
TAttribute<TSharedPtr<INumericTypeInterface<unsigned_short>,1>_>::operator=
          (TAttribute<TSharedPtr<INumericTypeInterface<unsigned_short>,1>_> *this,
          TAttribute<TSharedPtr<INumericTypeInterface<unsigned_short>,1>_> *param_1)

{
  if (this != param_1) {
    (this->Value).Object = (param_1->Value).Object;
    (param_1->Value).Object = (INumericTypeInterface<unsigned_short> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Value).SharedReferenceCount,&(param_1->Value).SharedReferenceCount);
  }
  this->bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  return this;
}

// operator= @ 1428c2e70

TAttribute<TSharedPtr<INumericTypeInterface<int>,1>_> * __thiscall
TAttribute<TSharedPtr<INumericTypeInterface<int>,1>_>::operator=
          (TAttribute<TSharedPtr<INumericTypeInterface<int>,1>_> *this,
          TAttribute<TSharedPtr<INumericTypeInterface<int>,1>_> *param_1)

{
  if (this != param_1) {
    (this->Value).Object = (param_1->Value).Object;
    (param_1->Value).Object = (INumericTypeInterface<int> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Value).SharedReferenceCount,&(param_1->Value).SharedReferenceCount);
  }
  this->bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  return this;
}

// operator= @ 1428c2ed0

TAttribute<TSharedPtr<INumericTypeInterface<unsigned_int>,1>_> * __thiscall
TAttribute<TSharedPtr<INumericTypeInterface<unsigned_int>,1>_>::operator=
          (TAttribute<TSharedPtr<INumericTypeInterface<unsigned_int>,1>_> *this,
          TAttribute<TSharedPtr<INumericTypeInterface<unsigned_int>,1>_> *param_1)

{
  if (this != param_1) {
    (this->Value).Object = (param_1->Value).Object;
    (param_1->Value).Object = (INumericTypeInterface<unsigned_int> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Value).SharedReferenceCount,&(param_1->Value).SharedReferenceCount);
  }
  this->bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  return this;
}

// operator= @ 1428c2f30

TAttribute<TSharedPtr<INumericTypeInterface<float>,1>_> * __thiscall
TAttribute<TSharedPtr<INumericTypeInterface<float>,1>_>::operator=
          (TAttribute<TSharedPtr<INumericTypeInterface<float>,1>_> *this,
          TAttribute<TSharedPtr<INumericTypeInterface<float>,1>_> *param_1)

{
  if (this != param_1) {
    (this->Value).Object = (param_1->Value).Object;
    (param_1->Value).Object = (INumericTypeInterface<float> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Value).SharedReferenceCount,&(param_1->Value).SharedReferenceCount);
  }
  this->bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  return this;
}

// operator= @ 1428c2f90

TAttribute<TSharedPtr<INumericTypeInterface<double>,1>_> * __thiscall
TAttribute<TSharedPtr<INumericTypeInterface<double>,1>_>::operator=
          (TAttribute<TSharedPtr<INumericTypeInterface<double>,1>_> *this,
          TAttribute<TSharedPtr<INumericTypeInterface<double>,1>_> *param_1)

{
  if (this != param_1) {
    (this->Value).Object = (param_1->Value).Object;
    (param_1->Value).Object = (INumericTypeInterface<double> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Value).SharedReferenceCount,&(param_1->Value).SharedReferenceCount);
  }
  this->bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  return this;
}

// operator= @ 1428c2ff0

TAttribute<TSharedPtr<INumericTypeInterface<__int64>,1>_> * __thiscall
TAttribute<TSharedPtr<INumericTypeInterface<__int64>,1>_>::operator=
          (TAttribute<TSharedPtr<INumericTypeInterface<__int64>,1>_> *this,
          TAttribute<TSharedPtr<INumericTypeInterface<__int64>,1>_> *param_1)

{
  if (this != param_1) {
    (this->Value).Object = (param_1->Value).Object;
    (param_1->Value).Object = (INumericTypeInterface<__int64> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Value).SharedReferenceCount,&(param_1->Value).SharedReferenceCount);
  }
  this->bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  return this;
}

// operator= @ 1428c3050

TAttribute<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>_> * __thiscall
TAttribute<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>_>::operator=
          (TAttribute<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>_> *this,
          TAttribute<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>_> *param_1)

{
  if (this != param_1) {
    (this->Value).Object = (param_1->Value).Object;
    (param_1->Value).Object = (INumericTypeInterface<unsigned___int64> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Value).SharedReferenceCount,&(param_1->Value).SharedReferenceCount);
  }
  this->bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  return this;
}

// Get @ 142939e00

schar * __thiscall TAttribute<signed_char>::Get(TAttribute<signed_char> *this)

{
  char cVar1;
  schar sVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->Getter).field_0x8, plVar3 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar3 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
      if (*(int *)&(this->Getter).field_0x10 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)&(this->Getter).field_0x8;
      }
      sVar2 = (**(code **)(*plVar3 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      this->Value = sVar2;
      return &this->Value;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return &this->Value;
}

// Get @ 142939ea0

uchar * __thiscall TAttribute<unsigned_char>::Get(TAttribute<unsigned_char> *this)

{
  char cVar1;
  uchar uVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->Getter).field_0x8, plVar3 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar3 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
      if (*(int *)&(this->Getter).field_0x10 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)&(this->Getter).field_0x8;
      }
      uVar2 = (**(code **)(*plVar3 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      this->Value = uVar2;
      return &this->Value;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return &this->Value;
}

// Get @ 142939f40

short * __thiscall TAttribute<short>::Get(TAttribute<short> *this)

{
  char cVar1;
  short sVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->Getter).field_0x8, plVar3 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar3 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
      if (*(int *)&(this->Getter).field_0x10 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)&(this->Getter).field_0x8;
      }
      sVar2 = (**(code **)(*plVar3 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      this->Value = sVar2;
      return &this->Value;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return &this->Value;
}

// Get @ 142939fe0

ushort * __thiscall TAttribute<unsigned_short>::Get(TAttribute<unsigned_short> *this)

{
  char cVar1;
  ushort uVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->Getter).field_0x8, plVar3 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar3 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
      if (*(int *)&(this->Getter).field_0x10 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)&(this->Getter).field_0x8;
      }
      uVar2 = (**(code **)(*plVar3 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      this->Value = uVar2;
      return &this->Value;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return &this->Value;
}

// Get @ 14293a080

uint * __thiscall TAttribute<unsigned_int>::Get(TAttribute<unsigned_int> *this)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->Getter).field_0x8, plVar3 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar3 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
      if (*(int *)&(this->Getter).field_0x10 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)&(this->Getter).field_0x8;
      }
      uVar2 = (**(code **)(*plVar3 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      this->Value = uVar2;
      return &this->Value;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return &this->Value;
}

// Get @ 14293a120

double * __thiscall TAttribute<double>::Get(TAttribute<double> *this)

{
  double dVar1;
  char cVar2;
  longlong *plVar3;
  FReadAccessScope local_38 [2];
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,local_38);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->Getter).field_0x8, plVar3 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar3 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,local_38);
      if (*(int *)&(this->Getter).field_0x10 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)&(this->Getter).field_0x8;
      }
      dVar1 = (double)(**(code **)(*plVar3 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (local_38);
      this->Value = dVar1;
      return &this->Value;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (local_38);
  return &this->Value;
}

// Get @ 14293a1d0

TOptional<signed_char> * __thiscall
TAttribute<TOptional<signed_char>_>::Get(TAttribute<TOptional<signed_char>_> *this)

{
  char cVar1;
  longlong *plVar2;
  TAttribute<TOptional<signed_char>_> local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FReadAccessScope *)&local_28.Getter);
  if (((*(int *)&(this->Getter).field_0x10 == 0) ||
      (plVar2 = *(longlong **)&(this->Getter).field_0x8, plVar2 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(*plVar2 + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_28.Getter);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_28.Getter);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
               (FReadAccessScope *)&local_28.Getter);
    if (*(int *)&(this->Getter).field_0x10 == 0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = *(longlong **)&(this->Getter).field_0x8;
    }
    (**(code **)(*plVar2 + 0x60))(plVar2,&local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_28.Getter);
    if (&local_28 != this) {
      if (local_28.Value.bIsSet != false) {
        (this->Value).TypedValue = local_28.Value.TypedValue;
        (this->Value).bIsSet = true;
        return &this->Value;
      }
      if ((this->Value).bIsSet != false) {
        (this->Value).bIsSet = false;
        return &this->Value;
      }
    }
  }
  return &this->Value;
}

// Get @ 14293a2b0

TOptional<unsigned_char> * __thiscall
TAttribute<TOptional<unsigned_char>_>::Get(TAttribute<TOptional<unsigned_char>_> *this)

{
  char cVar1;
  longlong *plVar2;
  TAttribute<TOptional<unsigned_char>_> local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FReadAccessScope *)&local_28.Getter);
  if (((*(int *)&(this->Getter).field_0x10 == 0) ||
      (plVar2 = *(longlong **)&(this->Getter).field_0x8, plVar2 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(*plVar2 + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_28.Getter);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_28.Getter);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
               (FReadAccessScope *)&local_28.Getter);
    if (*(int *)&(this->Getter).field_0x10 == 0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = *(longlong **)&(this->Getter).field_0x8;
    }
    (**(code **)(*plVar2 + 0x60))(plVar2,&local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_28.Getter);
    if (&local_28 != this) {
      if (local_28.Value.bIsSet != false) {
        (this->Value).TypedValue = local_28.Value.TypedValue;
        (this->Value).bIsSet = true;
        return &this->Value;
      }
      if ((this->Value).bIsSet != false) {
        (this->Value).bIsSet = false;
        return &this->Value;
      }
    }
  }
  return &this->Value;
}

// Get @ 14293a390

TOptional<short> * __thiscall
TAttribute<TOptional<short>_>::Get(TAttribute<TOptional<short>_> *this)

{
  char cVar1;
  longlong *plVar2;
  TAttribute<TOptional<short>_> local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FReadAccessScope *)&local_28.Getter);
  if (((*(int *)&(this->Getter).field_0x10 == 0) ||
      (plVar2 = *(longlong **)&(this->Getter).field_0x8, plVar2 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(*plVar2 + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_28.Getter);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_28.Getter);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
               (FReadAccessScope *)&local_28.Getter);
    if (*(int *)&(this->Getter).field_0x10 == 0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = *(longlong **)&(this->Getter).field_0x8;
    }
    (**(code **)(*plVar2 + 0x60))(plVar2,&local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_28.Getter);
    if (&local_28 != this) {
      if (local_28.Value.bIsSet != false) {
        (this->Value).TypedValue = local_28.Value.TypedValue;
        (this->Value).bIsSet = true;
        return &this->Value;
      }
      if ((this->Value).bIsSet != false) {
        (this->Value).bIsSet = false;
        return &this->Value;
      }
    }
  }
  return &this->Value;
}

// Get @ 14293a470

TOptional<unsigned_short> * __thiscall
TAttribute<TOptional<unsigned_short>_>::Get(TAttribute<TOptional<unsigned_short>_> *this)

{
  char cVar1;
  longlong *plVar2;
  TAttribute<TOptional<unsigned_short>_> local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FReadAccessScope *)&local_28.Getter);
  if (((*(int *)&(this->Getter).field_0x10 == 0) ||
      (plVar2 = *(longlong **)&(this->Getter).field_0x8, plVar2 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(*plVar2 + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_28.Getter);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_28.Getter);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
               (FReadAccessScope *)&local_28.Getter);
    if (*(int *)&(this->Getter).field_0x10 == 0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = *(longlong **)&(this->Getter).field_0x8;
    }
    (**(code **)(*plVar2 + 0x60))(plVar2,&local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_28.Getter);
    if (&local_28 != this) {
      if (local_28.Value.bIsSet != false) {
        (this->Value).TypedValue = local_28.Value.TypedValue;
        (this->Value).bIsSet = true;
        return &this->Value;
      }
      if ((this->Value).bIsSet != false) {
        (this->Value).bIsSet = false;
        return &this->Value;
      }
    }
  }
  return &this->Value;
}

// Get @ 14293a550

TOptional<int> * __thiscall TAttribute<TOptional<int>_>::Get(TAttribute<TOptional<int>_> *this)

{
  char cVar1;
  longlong *plVar2;
  int local_28;
  bool local_24;
  FReadAccessScope local_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_20);
  if (((*(int *)&(this->Getter).field_0x10 == 0) ||
      (plVar2 = *(longlong **)&(this->Getter).field_0x8, plVar2 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(*plVar2 + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_20);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_20);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_20);
    if (*(int *)&(this->Getter).field_0x10 == 0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = *(longlong **)&(this->Getter).field_0x8;
    }
    (**(code **)(*plVar2 + 0x60))(plVar2,&local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_20);
    if ((TAttribute<TOptional<int>_> *)&local_28 != this) {
      if (local_24 != false) {
        (this->Value).TypedValue = local_28;
        (this->Value).bIsSet = true;
        return &this->Value;
      }
      if ((this->Value).bIsSet != false) {
        (this->Value).bIsSet = false;
        return &this->Value;
      }
    }
  }
  return &this->Value;
}

// Get @ 14293a630

TOptional<unsigned_int> * __thiscall
TAttribute<TOptional<unsigned_int>_>::Get(TAttribute<TOptional<unsigned_int>_> *this)

{
  char cVar1;
  longlong *plVar2;
  uint local_28;
  bool local_24;
  FReadAccessScope local_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_20);
  if (((*(int *)&(this->Getter).field_0x10 == 0) ||
      (plVar2 = *(longlong **)&(this->Getter).field_0x8, plVar2 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(*plVar2 + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_20);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_20);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_20);
    if (*(int *)&(this->Getter).field_0x10 == 0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = *(longlong **)&(this->Getter).field_0x8;
    }
    (**(code **)(*plVar2 + 0x60))(plVar2,&local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_20);
    if ((TAttribute<TOptional<unsigned_int>_> *)&local_28 != this) {
      if (local_24 != false) {
        (this->Value).TypedValue = local_28;
        (this->Value).bIsSet = true;
        return &this->Value;
      }
      if ((this->Value).bIsSet != false) {
        (this->Value).bIsSet = false;
        return &this->Value;
      }
    }
  }
  return &this->Value;
}

// Get @ 14293a710

TOptional<float> * __thiscall
TAttribute<TOptional<float>_>::Get(TAttribute<TOptional<float>_> *this)

{
  char cVar1;
  longlong *plVar2;
  float local_28;
  bool local_24;
  FReadAccessScope local_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_20);
  if (((*(int *)&(this->Getter).field_0x10 == 0) ||
      (plVar2 = *(longlong **)&(this->Getter).field_0x8, plVar2 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(*plVar2 + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_20);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_20);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_20);
    if (*(int *)&(this->Getter).field_0x10 == 0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = *(longlong **)&(this->Getter).field_0x8;
    }
    (**(code **)(*plVar2 + 0x60))(plVar2,&local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_20);
    if ((TAttribute<TOptional<float>_> *)&local_28 != this) {
      if (local_24 != false) {
        (this->Value).TypedValue = local_28;
        (this->Value).bIsSet = true;
        return &this->Value;
      }
      if ((this->Value).bIsSet != false) {
        (this->Value).bIsSet = false;
        return &this->Value;
      }
    }
  }
  return &this->Value;
}

// Get @ 14293a7f0

TOptional<double> * __thiscall
TAttribute<TOptional<double>_>::Get(TAttribute<TOptional<double>_> *this)

{
  char cVar1;
  longlong *plVar2;
  undefined1 local_38 [48];
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FReadAccessScope *)(local_38 + 0x10));
  if (((*(int *)&(this->Getter).field_0x10 == 0) ||
      (plVar2 = *(longlong **)&(this->Getter).field_0x8, plVar2 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(*plVar2 + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 0x10));
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 0x10));
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
               (FReadAccessScope *)(local_38 + 0x10));
    if (*(int *)&(this->Getter).field_0x10 == 0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = *(longlong **)&(this->Getter).field_0x8;
    }
    (**(code **)(*plVar2 + 0x60))(plVar2,local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 0x10));
    if ((TAttribute<TOptional<double>_> *)local_38 != this) {
      if (local_38[8] != false) {
        (this->Value).TypedValue = (double)local_38._0_8_;
        (this->Value).bIsSet = true;
        return &this->Value;
      }
      if ((this->Value).bIsSet != false) {
        (this->Value).bIsSet = false;
        return &this->Value;
      }
    }
  }
  return &this->Value;
}

// Get @ 14293a8d0

TOptional<SSearchBox::FSearchResultData> * __thiscall
TAttribute<TOptional<SSearchBox::FSearchResultData>_>::Get
          (TAttribute<TOptional<SSearchBox::FSearchResultData>_> *this)

{
  char cVar1;
  longlong *plVar2;
  TAttribute<TOptional<SSearchBox::FSearchResultData>_> local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FReadAccessScope *)&local_38.Getter);
  if (((*(int *)&(this->Getter).field_0x10 == 0) ||
      (plVar2 = *(longlong **)&(this->Getter).field_0x8, plVar2 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(*plVar2 + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_38.Getter);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_38.Getter);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
               (FReadAccessScope *)&local_38.Getter);
    if (*(int *)&(this->Getter).field_0x10 == 0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = *(longlong **)&(this->Getter).field_0x8;
    }
    (**(code **)(*plVar2 + 0x60))(plVar2,&local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_38.Getter);
    if (&local_38 != this) {
      if (local_38.Value.bIsSet != false) {
        (this->Value).TypedValue = local_38.Value.TypedValue;
        (this->Value).bIsSet = true;
        return &this->Value;
      }
      if ((this->Value).bIsSet != false) {
        (this->Value).bIsSet = false;
        return &this->Value;
      }
    }
  }
  return &this->Value;
}

// Get @ 14293a9b0

TOptional<__int64> * __thiscall
TAttribute<TOptional<__int64>_>::Get(TAttribute<TOptional<__int64>_> *this)

{
  char cVar1;
  longlong *plVar2;
  undefined1 local_38 [48];
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FReadAccessScope *)(local_38 + 0x10));
  if (((*(int *)&(this->Getter).field_0x10 == 0) ||
      (plVar2 = *(longlong **)&(this->Getter).field_0x8, plVar2 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(*plVar2 + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 0x10));
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 0x10));
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
               (FReadAccessScope *)(local_38 + 0x10));
    if (*(int *)&(this->Getter).field_0x10 == 0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = *(longlong **)&(this->Getter).field_0x8;
    }
    (**(code **)(*plVar2 + 0x60))(plVar2,local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 0x10));
    if ((TAttribute<TOptional<__int64>_> *)local_38 != this) {
      if (local_38[8] != false) {
        (this->Value).TypedValue = local_38._0_8_;
        (this->Value).bIsSet = true;
        return &this->Value;
      }
      if ((this->Value).bIsSet != false) {
        (this->Value).bIsSet = false;
        return &this->Value;
      }
    }
  }
  return &this->Value;
}

// Get @ 14293aa90

TOptional<unsigned___int64> * __thiscall
TAttribute<TOptional<unsigned___int64>_>::Get(TAttribute<TOptional<unsigned___int64>_> *this)

{
  char cVar1;
  longlong *plVar2;
  undefined1 local_38 [48];
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FReadAccessScope *)(local_38 + 0x10));
  if (((*(int *)&(this->Getter).field_0x10 == 0) ||
      (plVar2 = *(longlong **)&(this->Getter).field_0x8, plVar2 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(*plVar2 + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 0x10));
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 0x10));
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
               (FReadAccessScope *)(local_38 + 0x10));
    if (*(int *)&(this->Getter).field_0x10 == 0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = *(longlong **)&(this->Getter).field_0x8;
    }
    (**(code **)(*plVar2 + 0x60))(plVar2,local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 0x10));
    if ((TAttribute<TOptional<unsigned___int64>_> *)local_38 != this) {
      if (local_38[8] != false) {
        (this->Value).TypedValue = local_38._0_8_;
        (this->Value).bIsSet = true;
        return &this->Value;
      }
      if ((this->Value).bIsSet != false) {
        (this->Value).bIsSet = false;
        return &this->Value;
      }
    }
  }
  return &this->Value;
}

// Get @ 14293ab70

TOptional<bool> * __thiscall TAttribute<TOptional<bool>_>::Get(TAttribute<TOptional<bool>_> *this)

{
  char cVar1;
  longlong *plVar2;
  TAttribute<TOptional<bool>_> local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FReadAccessScope *)&local_28.Getter);
  if (((*(int *)&(this->Getter).field_0x10 == 0) ||
      (plVar2 = *(longlong **)&(this->Getter).field_0x8, plVar2 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(*plVar2 + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_28.Getter);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_28.Getter);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
               (FReadAccessScope *)&local_28.Getter);
    if (*(int *)&(this->Getter).field_0x10 == 0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = *(longlong **)&(this->Getter).field_0x8;
    }
    (**(code **)(*plVar2 + 0x60))(plVar2,&local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_28.Getter);
    if (&local_28 != this) {
      if (local_28.Value.bIsSet != false) {
        (this->Value).TypedValue = local_28.Value.TypedValue;
        (this->Value).bIsSet = true;
        return &this->Value;
      }
      if ((this->Value).bIsSet != false) {
        (this->Value).bIsSet = false;
        return &this->Value;
      }
    }
  }
  return &this->Value;
}

// Get @ 14293ac50

FInputChord * __thiscall TAttribute<FInputChord>::Get(TAttribute<FInputChord> *this)

{
  TSharedPtr<FKeyDetails,1> *pTVar1;
  undefined1 *puVar2;
  bool bVar3;
  char cVar4;
  longlong *plVar5;
  FReadAccessScope local_48;
  FName local_30;
  FKeyDetails *local_28;
  FSharedReferencer<1> local_20;
  uint local_18;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_48);
  if (((*(int *)&(this->Getter).field_0x10 == 0) ||
      (plVar5 = *(longlong **)&(this->Getter).field_0x8, plVar5 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*plVar5 + 0x38))(), cVar4 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  if (bVar3) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_48);
    if (*(int *)&(this->Getter).field_0x10 == 0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = *(longlong **)&(this->Getter).field_0x8;
    }
    (**(code **)(*plVar5 + 0x60))(plVar5,&local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
    pTVar1 = &(this->Value).Key.KeyDetails;
    (this->Value).Key.KeyName = local_30;
    if (pTVar1 != (TSharedPtr<FKeyDetails,1> *)&local_28) {
      pTVar1->Object = local_28;
      local_28 = (FKeyDetails *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->Value).Key.KeyDetails.SharedReferenceCount,&local_20);
    }
    (this->Value).bShift = 0;
    (this->Value).bCmd = 0;
    (this->Value).bAlt = 0;
    (this->Value).bCtrl = 0;
    puVar2 = &(this->Value).field_0x18;
    *(uint *)puVar2 = *(uint *)puVar2 | local_18 & 0xf;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20.ReferenceController);
  }
  return &this->Value;
}

// Get @ 14293ad60

TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> * __thiscall
TAttribute<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>::Get
          (TAttribute<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *this)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 local_38 [48];
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FReadAccessScope *)(local_38 + 0x10));
  if (((*(int *)&(this->Getter).field_0x10 != 0) &&
      (plVar3 = *(longlong **)&(this->Getter).field_0x8, plVar3 != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(*plVar3 + 0x38))(), cVar2 != '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 0x10));
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
               (FReadAccessScope *)(local_38 + 0x10));
    plVar3 = (longlong *)0x0;
    if (*(int *)&(this->Getter).field_0x10 != 0) {
      plVar3 = *(longlong **)&(this->Getter).field_0x8;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3,local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 0x10));
    if (this != (TAttribute<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *)
                local_38) {
      pFVar1 = (this->Value).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (this->Value).AllocatorInstance.Data = (FScriptContainerElement *)local_38._0_8_;
      (this->Value).ArrayNum = local_38._8_4_;
      (this->Value).ArrayMax = local_38._12_4_;
      local_38._8_4_ = 0;
      local_38._12_4_ = 0;
      local_38._0_8_ = (FScriptContainerElement *)0x0;
    }
    if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
    return &this->Value;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)(local_38 + 0x10));
  return &this->Value;
}

// Get @ 14293ae60

TSharedPtr<INumericTypeInterface<signed_char>,1> * __thiscall
TAttribute<TSharedPtr<INumericTypeInterface<signed_char>,1>_>::Get
          (TAttribute<TSharedPtr<INumericTypeInterface<signed_char>,1>_> *this)

{
  char cVar1;
  longlong *plVar2;
  undefined1 local_38 [48];
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FReadAccessScope *)(local_38 + 0x10));
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->Getter).field_0x8, plVar2 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar2 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)(local_38 + 0x10));
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
                 (FReadAccessScope *)(local_38 + 0x10));
      if (*(int *)&(this->Getter).field_0x10 == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)&(this->Getter).field_0x8;
      }
      (**(code **)(*plVar2 + 0x60))(plVar2,local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)(local_38 + 0x10));
      if (this != (TAttribute<TSharedPtr<INumericTypeInterface<signed_char>,1>_> *)local_38) {
        (this->Value).Object = (INumericTypeInterface<signed_char> *)local_38._0_8_;
        local_38._0_8_ = (INumericTypeInterface<signed_char> *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->Value).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_38._8_8_);
      return &this->Value;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)(local_38 + 0x10));
  return &this->Value;
}

// Get @ 14293af40

TSharedPtr<INumericTypeInterface<unsigned_char>,1> * __thiscall
TAttribute<TSharedPtr<INumericTypeInterface<unsigned_char>,1>_>::Get
          (TAttribute<TSharedPtr<INumericTypeInterface<unsigned_char>,1>_> *this)

{
  char cVar1;
  longlong *plVar2;
  undefined1 local_38 [48];
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FReadAccessScope *)(local_38 + 0x10));
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->Getter).field_0x8, plVar2 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar2 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)(local_38 + 0x10));
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
                 (FReadAccessScope *)(local_38 + 0x10));
      if (*(int *)&(this->Getter).field_0x10 == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)&(this->Getter).field_0x8;
      }
      (**(code **)(*plVar2 + 0x60))(plVar2,local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)(local_38 + 0x10));
      if (this != (TAttribute<TSharedPtr<INumericTypeInterface<unsigned_char>,1>_> *)local_38) {
        (this->Value).Object = (INumericTypeInterface<unsigned_char> *)local_38._0_8_;
        local_38._0_8_ = (INumericTypeInterface<unsigned_char> *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->Value).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_38._8_8_);
      return &this->Value;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)(local_38 + 0x10));
  return &this->Value;
}

// Get @ 14293b020

TSharedPtr<INumericTypeInterface<short>,1> * __thiscall
TAttribute<TSharedPtr<INumericTypeInterface<short>,1>_>::Get
          (TAttribute<TSharedPtr<INumericTypeInterface<short>,1>_> *this)

{
  char cVar1;
  longlong *plVar2;
  undefined1 local_38 [48];
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FReadAccessScope *)(local_38 + 0x10));
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->Getter).field_0x8, plVar2 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar2 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)(local_38 + 0x10));
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
                 (FReadAccessScope *)(local_38 + 0x10));
      if (*(int *)&(this->Getter).field_0x10 == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)&(this->Getter).field_0x8;
      }
      (**(code **)(*plVar2 + 0x60))(plVar2,local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)(local_38 + 0x10));
      if (this != (TAttribute<TSharedPtr<INumericTypeInterface<short>,1>_> *)local_38) {
        (this->Value).Object = (INumericTypeInterface<short> *)local_38._0_8_;
        local_38._0_8_ = (INumericTypeInterface<short> *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->Value).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_38._8_8_);
      return &this->Value;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)(local_38 + 0x10));
  return &this->Value;
}

// Get @ 14293b100

TSharedPtr<INumericTypeInterface<unsigned_short>,1> * __thiscall
TAttribute<TSharedPtr<INumericTypeInterface<unsigned_short>,1>_>::Get
          (TAttribute<TSharedPtr<INumericTypeInterface<unsigned_short>,1>_> *this)

{
  char cVar1;
  longlong *plVar2;
  undefined1 local_38 [48];
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FReadAccessScope *)(local_38 + 0x10));
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->Getter).field_0x8, plVar2 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar2 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)(local_38 + 0x10));
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
                 (FReadAccessScope *)(local_38 + 0x10));
      if (*(int *)&(this->Getter).field_0x10 == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)&(this->Getter).field_0x8;
      }
      (**(code **)(*plVar2 + 0x60))(plVar2,local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)(local_38 + 0x10));
      if (this != (TAttribute<TSharedPtr<INumericTypeInterface<unsigned_short>,1>_> *)local_38) {
        (this->Value).Object = (INumericTypeInterface<unsigned_short> *)local_38._0_8_;
        local_38._0_8_ = (INumericTypeInterface<unsigned_short> *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->Value).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_38._8_8_);
      return &this->Value;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)(local_38 + 0x10));
  return &this->Value;
}

// Get @ 14293b1e0

TSharedPtr<INumericTypeInterface<int>,1> * __thiscall
TAttribute<TSharedPtr<INumericTypeInterface<int>,1>_>::Get
          (TAttribute<TSharedPtr<INumericTypeInterface<int>,1>_> *this)

{
  char cVar1;
  longlong *plVar2;
  undefined1 local_38 [48];
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FReadAccessScope *)(local_38 + 0x10));
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->Getter).field_0x8, plVar2 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar2 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)(local_38 + 0x10));
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
                 (FReadAccessScope *)(local_38 + 0x10));
      if (*(int *)&(this->Getter).field_0x10 == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)&(this->Getter).field_0x8;
      }
      (**(code **)(*plVar2 + 0x60))(plVar2,local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)(local_38 + 0x10));
      if (this != (TAttribute<TSharedPtr<INumericTypeInterface<int>,1>_> *)local_38) {
        (this->Value).Object = (INumericTypeInterface<int> *)local_38._0_8_;
        local_38._0_8_ = (INumericTypeInterface<int> *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->Value).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_38._8_8_);
      return &this->Value;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)(local_38 + 0x10));
  return &this->Value;
}

// Get @ 14293b2c0

TSharedPtr<INumericTypeInterface<unsigned_int>,1> * __thiscall
TAttribute<TSharedPtr<INumericTypeInterface<unsigned_int>,1>_>::Get
          (TAttribute<TSharedPtr<INumericTypeInterface<unsigned_int>,1>_> *this)

{
  char cVar1;
  longlong *plVar2;
  undefined1 local_38 [48];
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FReadAccessScope *)(local_38 + 0x10));
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->Getter).field_0x8, plVar2 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar2 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)(local_38 + 0x10));
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
                 (FReadAccessScope *)(local_38 + 0x10));
      if (*(int *)&(this->Getter).field_0x10 == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)&(this->Getter).field_0x8;
      }
      (**(code **)(*plVar2 + 0x60))(plVar2,local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)(local_38 + 0x10));
      if (this != (TAttribute<TSharedPtr<INumericTypeInterface<unsigned_int>,1>_> *)local_38) {
        (this->Value).Object = (INumericTypeInterface<unsigned_int> *)local_38._0_8_;
        local_38._0_8_ = (INumericTypeInterface<unsigned_int> *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->Value).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_38._8_8_);
      return &this->Value;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)(local_38 + 0x10));
  return &this->Value;
}

// Get @ 14293b3a0

TSharedPtr<INumericTypeInterface<float>,1> * __thiscall
TAttribute<TSharedPtr<INumericTypeInterface<float>,1>_>::Get
          (TAttribute<TSharedPtr<INumericTypeInterface<float>,1>_> *this)

{
  char cVar1;
  longlong *plVar2;
  undefined1 local_38 [48];
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FReadAccessScope *)(local_38 + 0x10));
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->Getter).field_0x8, plVar2 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar2 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)(local_38 + 0x10));
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
                 (FReadAccessScope *)(local_38 + 0x10));
      if (*(int *)&(this->Getter).field_0x10 == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)&(this->Getter).field_0x8;
      }
      (**(code **)(*plVar2 + 0x60))(plVar2,local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)(local_38 + 0x10));
      if (this != (TAttribute<TSharedPtr<INumericTypeInterface<float>,1>_> *)local_38) {
        (this->Value).Object = (INumericTypeInterface<float> *)local_38._0_8_;
        local_38._0_8_ = (INumericTypeInterface<float> *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->Value).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_38._8_8_);
      return &this->Value;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)(local_38 + 0x10));
  return &this->Value;
}

// Get @ 14293b480

TSharedPtr<INumericTypeInterface<double>,1> * __thiscall
TAttribute<TSharedPtr<INumericTypeInterface<double>,1>_>::Get
          (TAttribute<TSharedPtr<INumericTypeInterface<double>,1>_> *this)

{
  char cVar1;
  longlong *plVar2;
  undefined1 local_38 [48];
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FReadAccessScope *)(local_38 + 0x10));
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->Getter).field_0x8, plVar2 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar2 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)(local_38 + 0x10));
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
                 (FReadAccessScope *)(local_38 + 0x10));
      if (*(int *)&(this->Getter).field_0x10 == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)&(this->Getter).field_0x8;
      }
      (**(code **)(*plVar2 + 0x60))(plVar2,local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)(local_38 + 0x10));
      if (this != (TAttribute<TSharedPtr<INumericTypeInterface<double>,1>_> *)local_38) {
        (this->Value).Object = (INumericTypeInterface<double> *)local_38._0_8_;
        local_38._0_8_ = (INumericTypeInterface<double> *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->Value).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_38._8_8_);
      return &this->Value;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)(local_38 + 0x10));
  return &this->Value;
}

// Get @ 14293b560

TSharedPtr<INumericTypeInterface<__int64>,1> * __thiscall
TAttribute<TSharedPtr<INumericTypeInterface<__int64>,1>_>::Get
          (TAttribute<TSharedPtr<INumericTypeInterface<__int64>,1>_> *this)

{
  char cVar1;
  longlong *plVar2;
  undefined1 local_38 [48];
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FReadAccessScope *)(local_38 + 0x10));
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->Getter).field_0x8, plVar2 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar2 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)(local_38 + 0x10));
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
                 (FReadAccessScope *)(local_38 + 0x10));
      if (*(int *)&(this->Getter).field_0x10 == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)&(this->Getter).field_0x8;
      }
      (**(code **)(*plVar2 + 0x60))(plVar2,local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)(local_38 + 0x10));
      if (this != (TAttribute<TSharedPtr<INumericTypeInterface<__int64>,1>_> *)local_38) {
        (this->Value).Object = (INumericTypeInterface<__int64> *)local_38._0_8_;
        local_38._0_8_ = (INumericTypeInterface<__int64> *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->Value).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_38._8_8_);
      return &this->Value;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)(local_38 + 0x10));
  return &this->Value;
}

// Get @ 14293b640

TSharedPtr<INumericTypeInterface<unsigned___int64>,1> * __thiscall
TAttribute<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>_>::Get
          (TAttribute<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>_> *this)

{
  char cVar1;
  longlong *plVar2;
  undefined1 local_38 [48];
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FReadAccessScope *)(local_38 + 0x10));
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->Getter).field_0x8, plVar2 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar2 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)(local_38 + 0x10));
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
                 (FReadAccessScope *)(local_38 + 0x10));
      if (*(int *)&(this->Getter).field_0x10 == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)&(this->Getter).field_0x8;
      }
      (**(code **)(*plVar2 + 0x60))(plVar2,local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)(local_38 + 0x10));
      if (this != (TAttribute<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>_> *)local_38) {
        (this->Value).Object = (INumericTypeInterface<unsigned___int64> *)local_38._0_8_;
        local_38._0_8_ = (INumericTypeInterface<unsigned___int64> *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->Value).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_38._8_8_);
      return &this->Value;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)(local_38 + 0x10));
  return &this->Value;
}

// Get @ 14293b720

TWeakPtr<IScrollableWidget,1> * __thiscall
TAttribute<TWeakPtr<IScrollableWidget,1>_>::Get(TAttribute<TWeakPtr<IScrollableWidget,1>_> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  char cVar4;
  longlong *plVar5;
  undefined1 local_38 [48];
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FReadAccessScope *)(local_38 + 0x10));
  if (((*(int *)&(this->Getter).field_0x10 == 0) ||
      (plVar5 = *(longlong **)&(this->Getter).field_0x8, plVar5 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*plVar5 + 0x38))(), cVar4 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 0x10));
    return &this->Value;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)(local_38 + 0x10));
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FReadAccessScope *)(local_38 + 0x10));
  if (*(int *)&(this->Getter).field_0x10 == 0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    plVar5 = *(longlong **)&(this->Getter).field_0x8;
  }
  (**(code **)(*plVar5 + 0x60))(plVar5,local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)(local_38 + 0x10));
  if (this != (TAttribute<TWeakPtr<IScrollableWidget,1>_> *)local_38) {
    pTVar3 = (this->Value).WeakReferenceCount.ReferenceController;
    (this->Value).Object = (IScrollableWidget *)local_38._0_8_;
    (this->Value).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)local_38._8_8_;
    local_38._0_8_ = (IScrollableWidget *)0x0;
    local_38._8_8_ = (TReferenceControllerBase<1> *)0x0;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      }
    }
  }
  if ((TReferenceControllerBase<1> *)local_38._8_8_ == (TReferenceControllerBase<1> *)0x0) {
    return &this->Value;
  }
  LOCK();
  paVar1 = (atomic<int> *)(local_38._8_8_ + 0xc);
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 != (atomic<int>)0x1) {
    return &this->Value;
  }
  (**(code **)(*(longlong *)local_38._8_8_ + 8))(local_38._8_8_,1);
  return &this->Value;
}

// Get @ 14293b840

EKeyboardType * __thiscall TAttribute<enum_EKeyboardType>::Get(void *this)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             &local_28);
  if ((*(int *)((longlong)this + 0x18) != 0) &&
     (*(longlong **)((longlong)this + 0x10) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
                 &local_28);
      if (*(int *)((longlong)this + 0x18) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)((longlong)this + 0x10);
      }
      uVar2 = (**(code **)(*plVar3 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      *(undefined4 *)this = uVar2;
      return this;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return this;
}

// Get @ 14293b8e0

EMenuPlacement * __thiscall TAttribute<enum_EMenuPlacement>::Get(void *this)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             &local_28);
  if ((*(int *)((longlong)this + 0x18) != 0) &&
     (*(longlong **)((longlong)this + 0x10) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
                 &local_28);
      if (*(int *)((longlong)this + 0x18) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)((longlong)this + 0x10);
      }
      uVar2 = (**(code **)(*plVar3 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      *(undefined4 *)this = uVar2;
      return this;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return this;
}

// Get @ 14293b980

ESizeRule * __thiscall TAttribute<enum_SSplitter::ESizeRule>::Get(void *this)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             &local_28);
  if ((*(int *)((longlong)this + 0x18) != 0) &&
     (*(longlong **)((longlong)this + 0x10) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
                 &local_28);
      if (*(int *)((longlong)this + 0x18) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)((longlong)this + 0x10);
      }
      uVar2 = (**(code **)(*plVar3 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      *(undefined4 *)this = uVar2;
      return this;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return this;
}

// Get @ 14293ba20

long64 * __thiscall TAttribute<__int64>::Get(TAttribute<__int64> *this)

{
  char cVar1;
  long64 lVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->Getter).field_0x8, plVar3 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar3 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
      if (*(int *)&(this->Getter).field_0x10 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)&(this->Getter).field_0x8;
      }
      lVar2 = (**(code **)(*plVar3 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      this->Value = lVar2;
      return &this->Value;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return &this->Value;
}

// Get @ 14293bac0

ulong64 * __thiscall TAttribute<unsigned___int64>::Get(TAttribute<unsigned___int64> *this)

{
  char cVar1;
  ulong64 uVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->Getter).field_0x8, plVar3 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar3 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
      if (*(int *)&(this->Getter).field_0x10 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)&(this->Getter).field_0x8;
      }
      uVar2 = (**(code **)(*plVar3 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      this->Value = uVar2;
      return &this->Value;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return &this->Value;
}

// IdenticalTo @ 142951de0

bool __thiscall
TAttribute<FInputChord>::IdenticalTo(TAttribute<FInputChord> *this,TAttribute<FInputChord> *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  FReadAccessScope local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_38);
  if (((*(int *)&(this->Getter).field_0x10 == 0) ||
      (plVar5 = *(longlong **)&(this->Getter).field_0x8, plVar5 == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(*plVar5 + 0x38))(), cVar3 == '\0')) {
    cVar3 = '\0';
  }
  else {
    cVar3 = '\x01';
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,&local_38);
  if (((*(int *)&(param_1->Getter).field_0x10 == 0) ||
      (plVar5 = *(longlong **)&(param_1->Getter).field_0x8, plVar5 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*plVar5 + 0x38))(), cVar4 == '\0')) {
    cVar4 = '\0';
  }
  else {
    cVar4 = '\x01';
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  if (cVar3 == cVar4) {
    if (cVar3 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_38);
      lVar7 = 0;
      lVar6 = lVar7;
      if ((*(int *)&(this->Getter).field_0x10 != 0) &&
         (plVar5 = *(longlong **)&(this->Getter).field_0x8, plVar5 != (longlong *)0x0)) {
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0x40))(plVar5,local_res8);
        lVar6 = *plVar5;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,
                 &local_38);
      if ((*(int *)&(param_1->Getter).field_0x10 != 0) &&
         (plVar5 = *(longlong **)&(param_1->Getter).field_0x8, plVar5 != (longlong *)0x0)) {
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0x40))(plVar5,local_res8);
        lVar7 = *plVar5;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      return lVar6 == lVar7;
    }
    if ((this->bIsSet == param_1->bIsSet) &&
       ((this->Value).Key.KeyName == (param_1->Value).Key.KeyName)) {
      uVar1 = *(undefined4 *)&(this->Value).field_0x18;
      uVar2 = *(undefined4 *)&(param_1->Value).field_0x18;
      if ((((ZPULL(uVar1,0,1) ^ ZPULL(uVar2,0,1)) & 1) == 0) &&
         (((((uVar2 ^ uVar1) & 2) == 0 && (((uVar2 ^ uVar1) & 4) == 0)) &&
          (((uVar2 ^ uVar1) & 8) == 0)))) {
        return true;
      }
    }
  }
  return false;
}

// IsBound @ 142952f80

bool __thiscall
TAttribute<TOptional<signed_char>_>::IsBound(TAttribute<TOptional<signed_char>_> *this)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return true;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

// IsBound @ 142952fe0

bool __thiscall
TAttribute<TOptional<unsigned_char>_>::IsBound(TAttribute<TOptional<unsigned_char>_> *this)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return true;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

// IsBound @ 142953040

bool __thiscall TAttribute<TOptional<short>_>::IsBound(TAttribute<TOptional<short>_> *this)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return true;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

// IsBound @ 1429530a0

bool __thiscall
TAttribute<TOptional<unsigned_short>_>::IsBound(TAttribute<TOptional<unsigned_short>_> *this)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return true;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

// IsBound @ 142953100

bool __thiscall TAttribute<TOptional<int>_>::IsBound(TAttribute<TOptional<int>_> *this)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return true;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

// IsBound @ 142953160

bool __thiscall
TAttribute<TOptional<unsigned_int>_>::IsBound(TAttribute<TOptional<unsigned_int>_> *this)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return true;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

// IsBound @ 1429531c0

bool __thiscall TAttribute<TOptional<float>_>::IsBound(TAttribute<TOptional<float>_> *this)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return true;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

// IsBound @ 142953220

bool __thiscall TAttribute<TOptional<double>_>::IsBound(TAttribute<TOptional<double>_> *this)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return true;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

// IsBound @ 142953280

bool __thiscall TAttribute<TOptional<__int64>_>::IsBound(TAttribute<TOptional<__int64>_> *this)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return true;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

// IsBound @ 1429532e0

bool __thiscall
TAttribute<TOptional<unsigned___int64>_>::IsBound(TAttribute<TOptional<unsigned___int64>_> *this)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return true;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

// Steal @ 1429a1ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVariant<TOptional<int>,TDelegate<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy>_> *
__thiscall
TAttribute<TOptional<int>_>::Steal
          (TAttribute<TOptional<int>_> *this,
          TVariant<TOptional<int>,TDelegate<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  byte bVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  TVariant<TOptional<int>,TDelegate<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy>_>
  *pTVar8;
  ulonglong uVar9;
  int *piVar10;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  FReadAccessScope local_80;
  undefined1 local_68 [24];
  byte local_50;
  int local_48;
  char local_44;
  byte local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88 = 0;
  if (this->bIsSet == false) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Attribute.h"
                       ,0x1c1,
                       L"It is an error to call Steal() on an unset TAttribute. Check IsSet() before calling Steal()."
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TVariant<TOptional<int>,TDelegate<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy>_>
                *)(*pcVar3)();
      return pTVar8;
    }
  }
  this->bIsSet = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_80);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->Getter).field_0x8, plVar2 != (longlong *)0x0)) {
    cVar6 = (**(code **)(*plVar2 + 0x38))();
    if (cVar6 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_80);
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
      local_50 = 1;
      piVar10 = (int *)local_68;
      bVar4 = true;
      bVar5 = false;
      goto LAB_1429a1c80;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_80);
  local_44 = (this->Value).bIsSet;
  if ((bool)local_44 != false) {
    local_48 = (this->Value).TypedValue;
  }
  local_30 = 0;
  piVar10 = &local_48;
  bVar4 = false;
  bVar5 = true;
LAB_1429a1c80:
  bVar1 = *(byte *)(piVar10 + 6);
  __return_storage_ptr__->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TVariant<TOptional<int>,TDelegate<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy>_>
                *)(*pcVar3)();
      return pTVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<TOptional<int>,TDelegate<struct_TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(__return_storage_ptr__,piVar10);
  if (bVar5) {
    uVar9 = (ulonglong)local_30;
    if (1 < uVar9) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TVariant<TOptional<int>,TDelegate<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy>_>
                  *)(*pcVar3)();
        return pTVar8;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TOptional<int>,TDelegate<struct_TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9] !=
        UE::Core::Private::TDestructorCaller<TOptional<int>_>::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TOptional<int>,TDelegate<struct_TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9])(&local_48);
    }
  }
  if (bVar4) {
    uVar9 = (ulonglong)local_50;
    if (1 < uVar9) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TVariant<TOptional<int>,TDelegate<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy>_>
                  *)(*pcVar3)();
        return pTVar8;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TOptional<int>,TDelegate<struct_TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9] ==
        UE::Core::Private::
        TDestructorCaller<TDelegate<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy>_>::
        Destruct) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68);
      if ((void *)local_68._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_68._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_68);
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TOptional<int>,TDelegate<struct_TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9])();
    }
  }
  return __return_storage_ptr__;
}

// Steal @ 1429a1dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVariant<UE::Math::TVector4<double>,TDelegate<UE::Math::TVector4<double>___cdecl(void),FDefaultDelegateUserPolicy>_>
* __thiscall
TAttribute<UE::Math::TVector4<double>_>::Steal
          (TAttribute<UE::Math::TVector4<double>_> *this,
          TVariant<UE::Math::TVector4<double>,TDelegate<UE::Math::TVector4<double>___cdecl(void),FDefaultDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  byte bVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  TVariant<UE::Math::TVector4<double>,TDelegate<UE::Math::TVector4<double>___cdecl(void),FDefaultDelegateUserPolicy>_>
  *pTVar8;
  ulonglong uVar9;
  double *pdVar10;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  FReadAccessScope local_a0;
  undefined1 local_88 [32];
  byte local_68 [16];
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8 = 0;
  if (this->bIsSet == false) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Attribute.h"
                       ,0x1c1,
                       L"It is an error to call Steal() on an unset TAttribute. Check IsSet() before calling Steal()."
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TVariant<UE::Math::TVector4<double>,TDelegate<UE::Math::TVector4<double>___cdecl(void),FDefaultDelegateUserPolicy>_>
                *)(*pcVar3)();
      return pTVar8;
    }
  }
  this->bIsSet = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_a0);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->Getter).field_0x8, plVar2 != (longlong *)0x0)) {
    cVar6 = (**(code **)(*plVar2 + 0x38))();
    if (cVar6 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_a0);
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_88,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
      local_68[0] = 1;
      pdVar10 = (double *)local_88;
      bVar4 = true;
      bVar5 = false;
      goto LAB_1429a1eb5;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_a0);
  pdVar10 = &local_58;
  bVar4 = false;
  bVar5 = true;
  local_58 = (this->Value).field0_0x0._s_0.X;
  dStack_50 = (this->Value).field0_0x0._s_0.Y;
  local_48 = (this->Value).field0_0x0._s_0.Z;
  dStack_40 = (this->Value).field0_0x0._s_0.W;
  local_38 = 0;
LAB_1429a1eb5:
  bVar1 = *(byte *)(pdVar10 + 4);
  __return_storage_ptr__->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TVariant<UE::Math::TVector4<double>,TDelegate<UE::Math::TVector4<double>___cdecl(void),FDefaultDelegateUserPolicy>_>
                *)(*pcVar3)();
      return pTVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Math::TVector4<double>,TDelegate<struct_UE::Math::TVector4<double>___cdecl(void),FDefaultDelegateUserPolicy>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(__return_storage_ptr__,pdVar10);
  if (bVar5) {
    uVar9 = (ulonglong)local_38;
    if (1 < uVar9) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TVariant<UE::Math::TVector4<double>,TDelegate<UE::Math::TVector4<double>___cdecl(void),FDefaultDelegateUserPolicy>_>
                  *)(*pcVar3)();
        return pTVar8;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Math::TVector4<double>,TDelegate<struct_UE::Math::TVector4<double>___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9] !=
        UE::Core::Private::TDestructorCaller<UE::Math::TVector4<double>_>::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Math::TVector4<double>,TDelegate<struct_UE::Math::TVector4<double>___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9])(&local_58);
    }
  }
  if (bVar4) {
    uVar9 = (ulonglong)local_68[0];
    if (1 < uVar9) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TVariant<UE::Math::TVector4<double>,TDelegate<UE::Math::TVector4<double>___cdecl(void),FDefaultDelegateUserPolicy>_>
                  *)(*pcVar3)();
        return pTVar8;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Math::TVector4<double>,TDelegate<struct_UE::Math::TVector4<double>___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9] ==
        UE::Core::Private::
        TDestructorCaller<TDelegate<UE::Math::TVector4<double>___cdecl(void),FDefaultDelegateUserPolicy>_>
        ::Destruct) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_88);
      if ((void *)local_88._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_88._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_88);
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Math::TVector4<double>,TDelegate<struct_UE::Math::TVector4<double>___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9])();
    }
  }
  return __return_storage_ptr__;
}

// Bind<SNotificationItemExternalImpl> @ 1429b2560

void __thiscall
TAttribute<UE::Math::TVector2<double>_>::Bind<SNotificationItemExternalImpl>
          (TAttribute<UE::Math::TVector2<double>_> *this,SNotificationItemExternalImpl *param_1,
          pmf_d434f1fe *param_2)

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
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
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
              ___7__TCommonDelegateInstanceState___A6A_AU__TVector2_N_Math_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSNotificationItemExternalImpl___00__A6A_AU__TVector2_N_Math_UE__XZUFDefaultDelegateUserPolicy____V__6B_
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
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Bind<SNotificationItemExternalImpl> @ 1429b2690

void __thiscall
TAttribute<FLinearColor>::Bind<SNotificationItemExternalImpl>
          (TAttribute<FLinearColor> *this,SNotificationItemExternalImpl *param_1,
          pmf_0923f48a *param_2)

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
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
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
              ___7__TCommonDelegateInstanceState___A6A_AUFLinearColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSNotificationItemExternalImpl___00__A6A_AUFLinearColor__XZUFDefaultDelegateUserPolicy____V__6B_
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
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Bind<SNotificationItemExternalImpl> @ 1429b27c0

void __thiscall
TAttribute<FSlateColor>::Bind<SNotificationItemExternalImpl>
          (TAttribute<FSlateColor> *this,SNotificationItemExternalImpl *param_1,
          pmf_b191ebe8 *param_2)

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
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
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
              ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSNotificationItemExternalImpl___00__A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
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
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Bind<SNotificationItemImpl> @ 1429b28f0

void __thiscall
TAttribute<EVisibility>::Bind<SNotificationItemImpl>
          (TAttribute<EVisibility> *this,SNotificationItemImpl *param_1,pmf_fa4416ac *param_2)

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
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
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
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSNotificationItemImpl___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
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
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Bind<SNotificationItemImpl> @ 1429b2a20

void __thiscall
TAttribute<FText>::Bind<SNotificationItemImpl>
          (TAttribute<FText> *this,SNotificationItemImpl *param_1,pmf_90a3390d *param_2)

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
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
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
              ___7__TBaseSPMethodDelegateInstance__00__CBVSNotificationItemImpl___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
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
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// TAttribute<FSlateBrush_const_*> @ 1429b5e20

TAttribute<FSlateBrush_const_*> * __thiscall
TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
          (TAttribute<FSlateBrush_const_*> *this,TAttribute<FSlateBrush_const_*> *param_1)

{
  this->Value = param_1->Value;
  this->bIsSet = param_1->bIsSet;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  *(undefined4 *)&(this->Getter).field_0x10 = 0;
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->Getter,&param_1->Getter);
  return this;
}

// TAttribute<EVisibility> @ 1429b5e60

TAttribute<EVisibility> * __thiscall
TAttribute<EVisibility>::TAttribute<EVisibility>(TAttribute<EVisibility> *this)

{
  this->Value = (TEnumAsByte<EVisibility::Private>)0x19;
  this->bIsSet = false;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

// TAttribute<enum_ECheckBoxState> @ 1429b5e80

TAttribute<ECheckBoxState> * __thiscall
TAttribute<enum_ECheckBoxState>::TAttribute<enum_ECheckBoxState>
          (void *this,TAttribute<ECheckBoxState> *param_1)

{
  *(ECheckBoxState *)this = param_1->Value;
  *(bool *)((longlong)this + 1) = param_1->bIsSet;
  TDelegate<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
            ((void *)((longlong)this + 8),&param_1->Getter);
  return this;
}

// TAttribute<enum_UE::Slate::PrioritizedWrapBox::EWrapMode> @ 1429b5ec0

TAttribute<UE::Slate::PrioritizedWrapBox::EWrapMode> * __thiscall
TAttribute<enum_UE::Slate::PrioritizedWrapBox::EWrapMode>::
TAttribute<enum_UE::Slate::PrioritizedWrapBox::EWrapMode>(void *this)

{
  *(undefined2 *)this = 0;
  *(undefined8 *)((longlong)this + 0x18) = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  return this;
}

// ~TAttribute<FSlateBrush_const_*> @ 1429bdf10

void __thiscall
TAttribute<FSlateBrush_const_*>::~TAttribute<FSlateBrush_const_*>
          (TAttribute<FSlateBrush_const_*> *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  pvVar1 = *(void **)&(this->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Getter);
  return;
}

// ~TAttribute<FMenuEntryResizeParams> @ 1429bdf50

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
TAttribute<FMenuEntryResizeParams>::~TAttribute<FMenuEntryResizeParams>
          (TAttribute<FMenuEntryResizeParams> *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  pvVar1 = *(void **)&(this->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Getter);
  FMenuEntryResizeParams::~FMenuEntryResizeParams(&this->Value);
  return;
}

// ~TAttribute<FSlateFontInfo> @ 1429bdfa0

void __thiscall
TAttribute<FSlateFontInfo>::~TAttribute<FSlateFontInfo>(TAttribute<FSlateFontInfo> *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  pvVar1 = *(void **)&(this->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Value).CompositeFont.SharedReferenceCount.ReferenceController);
  return;
}

// operator= @ 1429c0690

TAttribute<FSlateBrush_const_*> * __thiscall
TAttribute<FSlateBrush_const_*>::operator=
          (TAttribute<FSlateBrush_const_*> *this,TAttribute<FSlateBrush_const_*> *param_1)

{
  this->Value = param_1->Value;
  this->bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  return this;
}

// operator= @ 1429c06d0

TAttribute<FSlateFontInfo> * __thiscall
TAttribute<FSlateFontInfo>::operator=
          (TAttribute<FSlateFontInfo> *this,TAttribute<FSlateFontInfo> *param_1)

{
  FSlateFontInfo::operator=(&this->Value,&param_1->Value);
  this->bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  return this;
}

// operator= @ 1429c0710

TAttribute<EVirtualKeyboardDismissAction> * __thiscall
TAttribute<enum_EVirtualKeyboardDismissAction>::operator=
          (void *this,TAttribute<EVirtualKeyboardDismissAction> *param_1)

{
  longlong *plVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  *(EVirtualKeyboardDismissAction *)this = param_1->Value;
  *(bool *)((longlong)this + 1) = param_1->bIsSet;
  if (&param_1->Getter !=
      (TDelegate<EVirtualKeyboardDismissAction___cdecl(void),FDefaultDelegateUserPolicy> *)
      ((longlong)this + 8)) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&(param_1->Getter).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(param_1->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return this;
}

// Create @ 1429de560

TAttribute<FSlateBrush_const_*> * __cdecl
TAttribute<FSlateBrush_const_*>::Create
          (TAttribute<FSlateBrush_const_*> *__return_storage_ptr__,
          TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  __return_storage_ptr__->Value = (FSlateBrush *)0x0;
  __return_storage_ptr__->bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&__return_storage_ptr__->Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  return __return_storage_ptr__;
}

// Get @ 1429e89b0

ETextTransformPolicy * __thiscall TAttribute<enum_ETextTransformPolicy>::Get(void *this)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             &local_28);
  if ((*(int *)((longlong)this + 0x18) != 0) &&
     (*(longlong **)((longlong)this + 0x10) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
                 &local_28);
      if (*(int *)((longlong)this + 0x18) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)((longlong)this + 0x10);
      }
      uVar2 = (**(code **)(*plVar3 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      *(undefined1 *)this = uVar2;
      return this;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return this;
}

// Get @ 1429e8a50

ETextWrappingPolicy * __thiscall TAttribute<enum_ETextWrappingPolicy>::Get(void *this)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             &local_28);
  if ((*(int *)((longlong)this + 0x18) != 0) &&
     (*(longlong **)((longlong)this + 0x10) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
                 &local_28);
      if (*(int *)((longlong)this + 0x18) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)((longlong)this + 0x10);
      }
      uVar2 = (**(code **)(*plVar3 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      *(undefined1 *)this = uVar2;
      return this;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return this;
}

// Get @ 1429e8af0

Type * __thiscall TAttribute<enum_ETextJustify::Type>::Get(void *this)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             &local_28);
  if ((*(int *)((longlong)this + 0x18) != 0) &&
     (*(longlong **)((longlong)this + 0x10) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
                 &local_28);
      if (*(int *)((longlong)this + 0x18) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)((longlong)this + 0x10);
      }
      uVar2 = (**(code **)(*plVar3 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      *(undefined4 *)this = uVar2;
      return this;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return this;
}

// IdenticalTo @ 1429f3ee0

bool __thiscall
TAttribute<TOptional<float>_>::IdenticalTo
          (TAttribute<TOptional<float>_> *this,TAttribute<TOptional<float>_> *param_1)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  FReadAccessScope local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_38);
  if (((*(int *)&(this->Getter).field_0x10 == 0) ||
      (plVar4 = *(longlong **)&(this->Getter).field_0x8, plVar4 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*plVar4 + 0x38))(), cVar2 == '\0')) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\x01';
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,&local_38);
  if (((*(int *)&(param_1->Getter).field_0x10 == 0) ||
      (plVar4 = *(longlong **)&(param_1->Getter).field_0x8, plVar4 == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(*plVar4 + 0x38))(), cVar3 == '\0')) {
    cVar3 = '\0';
  }
  else {
    cVar3 = '\x01';
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  if (cVar2 == cVar3) {
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_38);
      lVar6 = 0;
      lVar5 = lVar6;
      if ((*(int *)&(this->Getter).field_0x10 != 0) &&
         (plVar4 = *(longlong **)&(this->Getter).field_0x8, plVar4 != (longlong *)0x0)) {
        plVar4 = (longlong *)(**(code **)(*plVar4 + 0x40))(plVar4,local_res8);
        lVar5 = *plVar4;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,
                 &local_38);
      if ((*(int *)&(param_1->Getter).field_0x10 != 0) &&
         (plVar4 = *(longlong **)&(param_1->Getter).field_0x8, plVar4 != (longlong *)0x0)) {
        plVar4 = (longlong *)(**(code **)(*plVar4 + 0x40))(plVar4,local_res8);
        lVar6 = *plVar4;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      return lVar5 == lVar6;
    }
    if (((this->bIsSet == param_1->bIsSet) &&
        (bVar1 = (this->Value).bIsSet, bVar1 == (param_1->Value).bIsSet)) &&
       ((bVar1 == false || ((param_1->Value).TypedValue == (this->Value).TypedValue)))) {
      return true;
    }
  }
  return false;
}

// IdenticalTo @ 1429f4040

bool __thiscall
TAttribute<UE::Math::TVector2<double>_>::IdenticalTo
          (TAttribute<UE::Math::TVector2<double>_> *this,
          TAttribute<UE::Math::TVector2<double>_> *param_1)

{
  char cVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  FReadAccessScope local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_38);
  if (((*(int *)&(this->Getter).field_0x10 == 0) ||
      (plVar3 = *(longlong **)&(this->Getter).field_0x8, plVar3 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(*plVar3 + 0x38))(), cVar1 == '\0')) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,&local_38);
  if (((*(int *)&(param_1->Getter).field_0x10 == 0) ||
      (plVar3 = *(longlong **)&(param_1->Getter).field_0x8, plVar3 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*plVar3 + 0x38))(), cVar2 == '\0')) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\x01';
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  if (cVar1 == cVar2) {
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_38);
      lVar5 = 0;
      lVar4 = lVar5;
      if ((*(int *)&(this->Getter).field_0x10 != 0) &&
         (plVar3 = *(longlong **)&(this->Getter).field_0x8, plVar3 != (longlong *)0x0)) {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x40))(plVar3,local_res8);
        lVar4 = *plVar3;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,
                 &local_38);
      if ((*(int *)&(param_1->Getter).field_0x10 != 0) &&
         (plVar3 = *(longlong **)&(param_1->Getter).field_0x8, plVar3 != (longlong *)0x0)) {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x40))(plVar3,local_res8);
        lVar5 = *plVar3;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      return lVar4 == lVar5;
    }
    if (((this->bIsSet == param_1->bIsSet) &&
        ((param_1->Value).field0_0x0._s_0.X == (this->Value).field0_0x0._s_0.X)) &&
       ((param_1->Value).field0_0x0._s_0.Y == (this->Value).field0_0x0._s_0.Y)) {
      return true;
    }
  }
  return false;
}

// IdenticalTo @ 1429f41a0

bool __thiscall
TAttribute<FMargin>::IdenticalTo(TAttribute<FMargin> *this,TAttribute<FMargin> *param_1)

{
  char cVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  FReadAccessScope local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_38);
  if (((*(int *)&(this->Getter).field_0x10 == 0) ||
      (plVar3 = *(longlong **)&(this->Getter).field_0x8, plVar3 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(*plVar3 + 0x38))(), cVar1 == '\0')) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,&local_38);
  if (((*(int *)&(param_1->Getter).field_0x10 == 0) ||
      (plVar3 = *(longlong **)&(param_1->Getter).field_0x8, plVar3 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*plVar3 + 0x38))(), cVar2 == '\0')) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\x01';
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  if (cVar1 == cVar2) {
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_38);
      lVar4 = 0;
      lVar5 = lVar4;
      if ((*(int *)&(this->Getter).field_0x10 != 0) &&
         (plVar3 = *(longlong **)&(this->Getter).field_0x8, plVar3 != (longlong *)0x0)) {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x40))(plVar3,local_res8);
        lVar5 = *plVar3;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,
                 &local_38);
      if ((*(int *)&(param_1->Getter).field_0x10 != 0) &&
         (plVar3 = *(longlong **)&(param_1->Getter).field_0x8, plVar3 != (longlong *)0x0)) {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x40))(plVar3,local_res8);
        lVar4 = *plVar3;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      return lVar5 == lVar4;
    }
    if ((((this->bIsSet == param_1->bIsSet) && ((param_1->Value).Left == (this->Value).Left)) &&
        ((param_1->Value).Right == (this->Value).Right)) &&
       (((param_1->Value).Top == (this->Value).Top &&
        ((param_1->Value).Bottom == (this->Value).Bottom)))) {
      return true;
    }
  }
  return false;
}

// IdenticalTo @ 1429f4320

bool __thiscall
TAttribute<FSlateColor>::IdenticalTo(TAttribute<FSlateColor> *this,TAttribute<FSlateColor> *param_1)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  FReadAccessScope local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_38);
  if (((*(int *)&(this->Getter).field_0x10 == 0) ||
      (plVar4 = *(longlong **)&(this->Getter).field_0x8, plVar4 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(*plVar4 + 0x38))(), cVar1 == '\0')) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,&local_38);
  if (((*(int *)&(param_1->Getter).field_0x10 == 0) ||
      (plVar4 = *(longlong **)&(param_1->Getter).field_0x8, plVar4 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*plVar4 + 0x38))(), cVar2 == '\0')) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\x01';
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  if (cVar1 == cVar2) {
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_38);
      lVar6 = 0;
      lVar5 = lVar6;
      if ((*(int *)&(this->Getter).field_0x10 != 0) &&
         (plVar4 = *(longlong **)&(this->Getter).field_0x8, plVar4 != (longlong *)0x0)) {
        plVar4 = (longlong *)(**(code **)(*plVar4 + 0x40))(plVar4,local_res8);
        lVar5 = *plVar4;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,
                 &local_38);
      if ((*(int *)&(param_1->Getter).field_0x10 != 0) &&
         (plVar4 = *(longlong **)&(param_1->Getter).field_0x8, plVar4 != (longlong *)0x0)) {
        plVar4 = (longlong *)(**(code **)(*plVar4 + 0x40))(plVar4,local_res8);
        lVar6 = *plVar4;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      return lVar5 == lVar6;
    }
    if ((this->bIsSet == param_1->bIsSet) &&
       (bVar3 = FSlateColor::operator==(&this->Value,&param_1->Value), bVar3)) {
      return true;
    }
  }
  return false;
}

// IdenticalTo @ 1429f4480

bool __thiscall
TAttribute<enum_ETextJustify::Type>::IdenticalTo(void *this,TAttribute<ETextJustify::Type> *param_1)

{
  char cVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  FReadAccessScope local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             &local_38);
  if (((*(int *)((longlong)this + 0x18) == 0) ||
      (*(longlong **)((longlong)this + 0x10) == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x38))(), cVar1 == '\0')) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,&local_38);
  if (((*(int *)&(param_1->Getter).field_0x10 == 0) ||
      (plVar3 = *(longlong **)&(param_1->Getter).field_0x8, plVar3 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*plVar3 + 0x38))(), cVar2 == '\0')) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\x01';
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  if (cVar1 == cVar2) {
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
                 &local_38);
      lVar5 = 0;
      lVar4 = lVar5;
      if ((*(int *)((longlong)this + 0x18) != 0) &&
         (plVar3 = *(longlong **)((longlong)this + 0x10), plVar3 != (longlong *)0x0)) {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x40))(plVar3,local_res8);
        lVar4 = *plVar3;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,
                 &local_38);
      if ((*(int *)&(param_1->Getter).field_0x10 != 0) &&
         (plVar3 = *(longlong **)&(param_1->Getter).field_0x8, plVar3 != (longlong *)0x0)) {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x40))(plVar3,local_res8);
        lVar5 = *plVar3;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      return lVar4 == lVar5;
    }
    if (((bool)*(char *)((longlong)this + 4) == param_1->bIsSet) &&
       (*(Type *)this == param_1->Value)) {
      return true;
    }
  }
  return false;
}

// IsBound @ 1429f51a0

bool __thiscall
TAttribute<UE::Math::TVector2<double>_>::IsBound(TAttribute<UE::Math::TVector2<double>_> *this)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return true;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

// IsBound @ 1429f5200

bool __thiscall TAttribute<FMargin>::IsBound(TAttribute<FMargin> *this)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return true;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

// IsBound @ 1429f5260

bool __thiscall TAttribute<FSlateFontInfo>::IsBound(TAttribute<FSlateFontInfo> *this)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return true;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

// IsBound @ 1429f52c0

bool __thiscall TAttribute<enum_ETextTransformPolicy>::IsBound(void *this)

{
  char cVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             &local_28);
  if ((*(int *)((longlong)this + 0x18) != 0) &&
     (*(longlong **)((longlong)this + 0x10) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return true;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

// IsBound @ 1429f5320

bool __thiscall TAttribute<enum_ETextWrappingPolicy>::IsBound(void *this)

{
  char cVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             &local_28);
  if ((*(int *)((longlong)this + 0x18) != 0) &&
     (*(longlong **)((longlong)this + 0x10) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return true;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

// IsBound @ 1429f5380

bool __thiscall TAttribute<enum_ETextJustify::Type>::IsBound(void *this)

{
  char cVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             &local_28);
  if ((*(int *)((longlong)this + 0x18) != 0) &&
     (*(longlong **)((longlong)this + 0x10) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return true;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

// Steal @ 142a0e4f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVariant<FSlateFontInfo,TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>_> *
__thiscall
TAttribute<FSlateFontInfo>::Steal
          (TAttribute<FSlateFontInfo> *this,
          TVariant<FSlateFontInfo,TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  byte bVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  TVariant<FSlateFontInfo,TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>_>
  *pTVar8;
  ulonglong uVar9;
  byte *pbVar10;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  FReadAccessScope local_110;
  undefined1 local_f8 [96];
  byte local_98 [8];
  FSlateFontInfo local_90;
  byte local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_118 = 0;
  if (this->bIsSet == false) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Attribute.h"
                       ,0x1c1,
                       L"It is an error to call Steal() on an unset TAttribute. Check IsSet() before calling Steal()."
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TVariant<FSlateFontInfo,TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>_>
                *)(*pcVar3)();
      return pTVar8;
    }
  }
  this->bIsSet = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_110);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->Getter).field_0x8, plVar2 != (longlong *)0x0)) {
    cVar6 = (**(code **)(*plVar2 + 0x38))();
    if (cVar6 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_110);
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
      local_98[0] = 1;
      pbVar10 = local_f8;
      bVar4 = true;
      bVar5 = false;
      goto LAB_142a0e5d7;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_110);
  FSlateFontInfo::FSlateFontInfo((FSlateFontInfo *)(local_98 + 8),&this->Value);
  local_30 = 0;
  pbVar10 = local_98 + 8;
  bVar4 = false;
  bVar5 = true;
LAB_142a0e5d7:
  bVar1 = pbVar10[0x60];
  __return_storage_ptr__->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TVariant<FSlateFontInfo,TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>_>
                *)(*pcVar3)();
      return pTVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<FSlateFontInfo,TDelegate<struct_FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(__return_storage_ptr__,pbVar10);
  if (bVar5) {
    uVar9 = (ulonglong)local_30;
    if (1 < uVar9) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TVariant<FSlateFontInfo,TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>_>
                  *)(*pcVar3)();
        return pTVar8;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FSlateFontInfo,TDelegate<struct_FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9] ==
        UE::Core::Private::TDestructorCaller<FSlateFontInfo>::Destruct) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_90.CompositeFont.SharedReferenceCount.ReferenceController);
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FSlateFontInfo,TDelegate<struct_FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9])(local_98 + 8);
    }
  }
  if (bVar4) {
    uVar9 = (ulonglong)local_98[0];
    if (1 < uVar9) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TVariant<FSlateFontInfo,TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>_>
                  *)(*pcVar3)();
        return pTVar8;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FSlateFontInfo,TDelegate<struct_FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9] ==
        UE::Core::Private::
        TDestructorCaller<TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>_>::
        Destruct) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8);
      if ((void *)local_f8._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_f8._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_f8);
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FSlateFontInfo,TDelegate<struct_FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9])();
    }
  }
  return __return_storage_ptr__;
}

// Steal @ 142a0e730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVariant<FText,TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>_> * __thiscall
TAttribute<FText>::Steal
          (TAttribute<FText> *this,
          TVariant<FText,TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  byte bVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  TVariant<FText,TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>_> *pTVar8;
  ulonglong uVar9;
  FText *pFVar10;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  FReadAccessScope local_80;
  undefined1 local_68 [24];
  byte local_50;
  FText local_48;
  byte local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88 = 0;
  if (this->bIsSet == false) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Attribute.h"
                       ,0x1c1,
                       L"It is an error to call Steal() on an unset TAttribute. Check IsSet() before calling Steal()."
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TVariant<FText,TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>_> *)
               (*pcVar3)();
      return pTVar8;
    }
  }
  this->bIsSet = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_80);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->Getter).field_0x8, plVar2 != (longlong *)0x0)) {
    cVar6 = (**(code **)(*plVar2 + 0x38))();
    if (cVar6 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_80);
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
      local_50 = 1;
      pFVar10 = (FText *)local_68;
      bVar4 = true;
      bVar5 = false;
      goto LAB_142a0e80b;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_80);
  FText::FText(&local_48,&this->Value);
  local_30 = 0;
  pFVar10 = &local_48;
  bVar4 = false;
  bVar5 = true;
LAB_142a0e80b:
  bVar1 = (byte)pFVar10[1].Flags;
  __return_storage_ptr__->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TVariant<FText,TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>_> *)
               (*pcVar3)();
      return pTVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<FText,TDelegate<class_FText___cdecl(void),FDefaultDelegateUserPolicy>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(__return_storage_ptr__,pFVar10);
  if (bVar5) {
    uVar9 = (ulonglong)local_30;
    if (1 < uVar9) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TVariant<FText,TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>_> *)
                 (*pcVar3)();
        return pTVar8;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FText,TDelegate<class_FText___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9] ==
        UE::Core::Private::TDestructorCaller<FText>::Destruct) {
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FText,TDelegate<class_FText___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9])(&local_48);
    }
  }
  if (bVar4) {
    uVar9 = (ulonglong)local_50;
    if (1 < uVar9) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TVariant<FText,TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>_> *)
                 (*pcVar3)();
        return pTVar8;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FText,TDelegate<class_FText___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9] ==
        UE::Core::Private::
        TDestructorCaller<TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68);
      if ((void *)local_68._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_68._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_68);
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FText,TDelegate<class_FText___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9])();
    }
  }
  return __return_storage_ptr__;
}

// Steal @ 142a0e960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVariant<EHorizontalAlignment,TDelegate<EHorizontalAlignment___cdecl(void),FDefaultDelegateUserPolicy>_>
* __thiscall
TAttribute<enum_EHorizontalAlignment>::Steal
          (void *this,
          TVariant<EHorizontalAlignment,TDelegate<EHorizontalAlignment___cdecl(void),FDefaultDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  TVariant<EHorizontalAlignment,TDelegate<EHorizontalAlignment___cdecl(void),FDefaultDelegateUserPolicy>_>
  *pTVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  FReadAccessScope local_80;
  undefined1 local_68 [24];
  byte local_50;
  undefined4 local_48 [6];
  byte local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88 = 0;
  if (*(char *)((longlong)this + 4) == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Attribute.h"
                       ,0x1c1,
                       L"It is an error to call Steal() on an unset TAttribute. Check IsSet() before calling Steal()."
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TVariant<EHorizontalAlignment,TDelegate<EHorizontalAlignment___cdecl(void),FDefaultDelegateUserPolicy>_>
                *)(*pcVar2)();
      return pTVar7;
    }
  }
  *(undefined1 *)((longlong)this + 4) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             &local_80);
  if ((*(int *)((longlong)this + 0x18) != 0) &&
     (*(longlong **)((longlong)this + 0x10) != (longlong *)0x0)) {
    cVar5 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x38))();
    if (cVar5 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_80);
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
      local_50 = 1;
      puVar9 = (undefined4 *)local_68;
      bVar3 = true;
      bVar4 = false;
      goto LAB_142a0ea34;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_80);
  bVar3 = false;
  bVar4 = true;
  local_48[0] = *(undefined4 *)this;
  puVar9 = local_48;
  local_30 = 0;
LAB_142a0ea34:
  bVar1 = *(byte *)(puVar9 + 6);
  __return_storage_ptr__->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TVariant<EHorizontalAlignment,TDelegate<EHorizontalAlignment___cdecl(void),FDefaultDelegateUserPolicy>_>
                *)(*pcVar2)();
      return pTVar7;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<EHorizontalAlignment,TDelegate<enum_EHorizontalAlignment___cdecl(void),FDefaultDelegateUserPolicy>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(__return_storage_ptr__,puVar9);
  if (bVar4) {
    uVar8 = (ulonglong)local_30;
    if (1 < uVar8) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TVariant<EHorizontalAlignment,TDelegate<EHorizontalAlignment___cdecl(void),FDefaultDelegateUserPolicy>_>
                  *)(*pcVar2)();
        return pTVar7;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<EHorizontalAlignment,TDelegate<enum_EHorizontalAlignment___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8] !=
        UE::Core::Private::TDestructorCaller<enum_EHorizontalAlignment>::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<EHorizontalAlignment,TDelegate<enum_EHorizontalAlignment___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8])(local_48);
    }
  }
  if (bVar3) {
    uVar8 = (ulonglong)local_50;
    if (1 < uVar8) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TVariant<EHorizontalAlignment,TDelegate<EHorizontalAlignment___cdecl(void),FDefaultDelegateUserPolicy>_>
                  *)(*pcVar2)();
        return pTVar7;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<EHorizontalAlignment,TDelegate<enum_EHorizontalAlignment___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8] ==
        UE::Core::Private::
        TDestructorCaller<TDelegate<enum_EHorizontalAlignment___cdecl(void),FDefaultDelegateUserPolicy>_>
        ::Destruct) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68);
      if ((void *)local_68._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_68._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_68);
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<EHorizontalAlignment,TDelegate<enum_EHorizontalAlignment___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8])();
    }
  }
  return __return_storage_ptr__;
}

// Steal @ 142a0eb80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVariant<ETextTransformPolicy,TDelegate<ETextTransformPolicy___cdecl(void),FDefaultDelegateUserPolicy>_>
* __thiscall
TAttribute<enum_ETextTransformPolicy>::Steal
          (void *this,
          TVariant<ETextTransformPolicy,TDelegate<ETextTransformPolicy___cdecl(void),FDefaultDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  TVariant<ETextTransformPolicy,TDelegate<ETextTransformPolicy___cdecl(void),FDefaultDelegateUserPolicy>_>
  *pTVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  FReadAccessScope local_80;
  undefined1 local_68 [24];
  byte local_50;
  undefined1 local_48 [24];
  byte local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88 = 0;
  if (*(char *)((longlong)this + 1) == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Attribute.h"
                       ,0x1c1,
                       L"It is an error to call Steal() on an unset TAttribute. Check IsSet() before calling Steal()."
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TVariant<ETextTransformPolicy,TDelegate<ETextTransformPolicy___cdecl(void),FDefaultDelegateUserPolicy>_>
                *)(*pcVar2)();
      return pTVar7;
    }
  }
  *(undefined1 *)((longlong)this + 1) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             &local_80);
  if ((*(int *)((longlong)this + 0x18) != 0) &&
     (*(longlong **)((longlong)this + 0x10) != (longlong *)0x0)) {
    cVar5 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x38))();
    if (cVar5 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_80);
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
      local_50 = 1;
      puVar9 = local_68;
      bVar3 = true;
      bVar4 = false;
      goto LAB_142a0ec55;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_80);
  bVar3 = false;
  bVar4 = true;
  local_48[0] = *(undefined1 *)this;
  puVar9 = local_48;
  local_30 = 0;
LAB_142a0ec55:
  bVar1 = puVar9[0x18];
  __return_storage_ptr__->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TVariant<ETextTransformPolicy,TDelegate<ETextTransformPolicy___cdecl(void),FDefaultDelegateUserPolicy>_>
                *)(*pcVar2)();
      return pTVar7;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<ETextTransformPolicy,TDelegate<enum_ETextTransformPolicy___cdecl(void),FDefaultDelegateUserPolicy>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(__return_storage_ptr__,puVar9);
  if (bVar4) {
    uVar8 = (ulonglong)local_30;
    if (1 < uVar8) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TVariant<ETextTransformPolicy,TDelegate<ETextTransformPolicy___cdecl(void),FDefaultDelegateUserPolicy>_>
                  *)(*pcVar2)();
        return pTVar7;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<ETextTransformPolicy,TDelegate<enum_ETextTransformPolicy___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8] !=
        UE::Core::Private::TDestructorCaller<enum_ETextTransformPolicy>::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<ETextTransformPolicy,TDelegate<enum_ETextTransformPolicy___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8])(local_48);
    }
  }
  if (bVar3) {
    uVar8 = (ulonglong)local_50;
    if (1 < uVar8) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TVariant<ETextTransformPolicy,TDelegate<ETextTransformPolicy___cdecl(void),FDefaultDelegateUserPolicy>_>
                  *)(*pcVar2)();
        return pTVar7;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<ETextTransformPolicy,TDelegate<enum_ETextTransformPolicy___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8] ==
        UE::Core::Private::
        TDestructorCaller<TDelegate<enum_ETextTransformPolicy___cdecl(void),FDefaultDelegateUserPolicy>_>
        ::Destruct) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68);
      if ((void *)local_68._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_68._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_68);
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<ETextTransformPolicy,TDelegate<enum_ETextTransformPolicy___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8])();
    }
  }
  return __return_storage_ptr__;
}

// Steal @ 142a0eda0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVariant<ETextWrappingPolicy,TDelegate<ETextWrappingPolicy___cdecl(void),FDefaultDelegateUserPolicy>_>
* __thiscall
TAttribute<enum_ETextWrappingPolicy>::Steal
          (void *this,
          TVariant<ETextWrappingPolicy,TDelegate<ETextWrappingPolicy___cdecl(void),FDefaultDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  TVariant<ETextWrappingPolicy,TDelegate<ETextWrappingPolicy___cdecl(void),FDefaultDelegateUserPolicy>_>
  *pTVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  FReadAccessScope local_80;
  undefined1 local_68 [24];
  byte local_50;
  undefined1 local_48 [24];
  byte local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88 = 0;
  if (*(char *)((longlong)this + 1) == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Attribute.h"
                       ,0x1c1,
                       L"It is an error to call Steal() on an unset TAttribute. Check IsSet() before calling Steal()."
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TVariant<ETextWrappingPolicy,TDelegate<ETextWrappingPolicy___cdecl(void),FDefaultDelegateUserPolicy>_>
                *)(*pcVar2)();
      return pTVar7;
    }
  }
  *(undefined1 *)((longlong)this + 1) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             &local_80);
  if ((*(int *)((longlong)this + 0x18) != 0) &&
     (*(longlong **)((longlong)this + 0x10) != (longlong *)0x0)) {
    cVar5 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x38))();
    if (cVar5 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_80);
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
      local_50 = 1;
      puVar9 = local_68;
      bVar3 = true;
      bVar4 = false;
      goto LAB_142a0ee75;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_80);
  bVar3 = false;
  bVar4 = true;
  local_48[0] = *(undefined1 *)this;
  puVar9 = local_48;
  local_30 = 0;
LAB_142a0ee75:
  bVar1 = puVar9[0x18];
  __return_storage_ptr__->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TVariant<ETextWrappingPolicy,TDelegate<ETextWrappingPolicy___cdecl(void),FDefaultDelegateUserPolicy>_>
                *)(*pcVar2)();
      return pTVar7;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<ETextWrappingPolicy,TDelegate<enum_ETextWrappingPolicy___cdecl(void),FDefaultDelegateUserPolicy>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(__return_storage_ptr__,puVar9);
  if (bVar4) {
    uVar8 = (ulonglong)local_30;
    if (1 < uVar8) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TVariant<ETextWrappingPolicy,TDelegate<ETextWrappingPolicy___cdecl(void),FDefaultDelegateUserPolicy>_>
                  *)(*pcVar2)();
        return pTVar7;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<ETextWrappingPolicy,TDelegate<enum_ETextWrappingPolicy___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8] !=
        UE::Core::Private::TDestructorCaller<enum_ETextWrappingPolicy>::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<ETextWrappingPolicy,TDelegate<enum_ETextWrappingPolicy___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8])(local_48);
    }
  }
  if (bVar3) {
    uVar8 = (ulonglong)local_50;
    if (1 < uVar8) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TVariant<ETextWrappingPolicy,TDelegate<ETextWrappingPolicy___cdecl(void),FDefaultDelegateUserPolicy>_>
                  *)(*pcVar2)();
        return pTVar7;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<ETextWrappingPolicy,TDelegate<enum_ETextWrappingPolicy___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8] ==
        UE::Core::Private::
        TDestructorCaller<TDelegate<enum_ETextWrappingPolicy___cdecl(void),FDefaultDelegateUserPolicy>_>
        ::Destruct) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68);
      if ((void *)local_68._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_68._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_68);
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<ETextWrappingPolicy,TDelegate<enum_ETextWrappingPolicy___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8])();
    }
  }
  return __return_storage_ptr__;
}

// Steal @ 142a0efc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVariant<ETextJustify::Type,TDelegate<ETextJustify::Type___cdecl(void),FDefaultDelegateUserPolicy>_>
* __thiscall
TAttribute<enum_ETextJustify::Type>::Steal
          (void *this,
          TVariant<ETextJustify::Type,TDelegate<ETextJustify::Type___cdecl(void),FDefaultDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  TVariant<ETextJustify::Type,TDelegate<ETextJustify::Type___cdecl(void),FDefaultDelegateUserPolicy>_>
  *pTVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  FReadAccessScope local_80;
  undefined1 local_68 [24];
  byte local_50;
  undefined4 local_48 [6];
  byte local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88 = 0;
  if (*(char *)((longlong)this + 4) == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Attribute.h"
                       ,0x1c1,
                       L"It is an error to call Steal() on an unset TAttribute. Check IsSet() before calling Steal()."
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TVariant<ETextJustify::Type,TDelegate<ETextJustify::Type___cdecl(void),FDefaultDelegateUserPolicy>_>
                *)(*pcVar2)();
      return pTVar7;
    }
  }
  *(undefined1 *)((longlong)this + 4) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             &local_80);
  if ((*(int *)((longlong)this + 0x18) != 0) &&
     (*(longlong **)((longlong)this + 0x10) != (longlong *)0x0)) {
    cVar5 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x38))();
    if (cVar5 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_80);
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
      local_50 = 1;
      puVar9 = (undefined4 *)local_68;
      bVar3 = true;
      bVar4 = false;
      goto LAB_142a0f094;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_80);
  bVar3 = false;
  bVar4 = true;
  local_48[0] = *(undefined4 *)this;
  puVar9 = local_48;
  local_30 = 0;
LAB_142a0f094:
  bVar1 = *(byte *)(puVar9 + 6);
  __return_storage_ptr__->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TVariant<ETextJustify::Type,TDelegate<ETextJustify::Type___cdecl(void),FDefaultDelegateUserPolicy>_>
                *)(*pcVar2)();
      return pTVar7;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<ETextJustify::Type,TDelegate<enum_ETextJustify::Type___cdecl(void),FDefaultDelegateUserPolicy>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(__return_storage_ptr__,puVar9);
  if (bVar4) {
    uVar8 = (ulonglong)local_30;
    if (1 < uVar8) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TVariant<ETextJustify::Type,TDelegate<ETextJustify::Type___cdecl(void),FDefaultDelegateUserPolicy>_>
                  *)(*pcVar2)();
        return pTVar7;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<ETextJustify::Type,TDelegate<enum_ETextJustify::Type___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8] !=
        UE::Core::Private::TDestructorCaller<enum_ETextJustify::Type>::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<ETextJustify::Type,TDelegate<enum_ETextJustify::Type___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8])(local_48);
    }
  }
  if (bVar3) {
    uVar8 = (ulonglong)local_50;
    if (1 < uVar8) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TVariant<ETextJustify::Type,TDelegate<ETextJustify::Type___cdecl(void),FDefaultDelegateUserPolicy>_>
                  *)(*pcVar2)();
        return pTVar7;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<ETextJustify::Type,TDelegate<enum_ETextJustify::Type___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8] ==
        UE::Core::Private::
        TDestructorCaller<TDelegate<enum_ETextJustify::Type___cdecl(void),FDefaultDelegateUserPolicy>_>
        ::Destruct) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68);
      if ((void *)local_68._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_68._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_68);
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<ETextJustify::Type,TDelegate<enum_ETextJustify::Type___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8])();
    }
  }
  return __return_storage_ptr__;
}

// TAttribute<FSlateBrush_const_*><std::nullptr_t> @ 142a152f0

TAttribute<FSlateBrush_const_*> * __thiscall
TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*><std::nullptr_t>
          (TAttribute<FSlateBrush_const_*> *this,void **param_1)

{
                    /* WARNING: Load size is inaccurate */
  this->Value = *param_1;
  this->bIsSet = true;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

// TAttribute<TOptional<enum_EMouseCursor::Type>_><enum_EMouseCursor::Type> @ 142a153b0

TAttribute<TOptional<EMouseCursor::Type>_> * __thiscall
TAttribute<TOptional<enum_EMouseCursor::Type>_>::
TAttribute<TOptional<enum_EMouseCursor::Type>_><enum_EMouseCursor::Type>(void *this,Type *param_1)

{
  *(Type *)this = *param_1;
  *(undefined1 *)((longlong)this + 4) = 1;
  *(undefined1 *)((longlong)this + 8) = 1;
  *(undefined8 *)((longlong)this + 0x20) = 0;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined8 *)((longlong)this + 0x18) = 0;
  return this;
}

// Bind<STableColumnHeader> @ 142a153e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TAttribute<FSlateBrush_const_*>::Bind<STableColumnHeader>
          (TAttribute<FSlateBrush_const_*> *this,STableColumnHeader *param_1,pmf_07a0e073 *param_2)

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
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
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
              ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSTableColumnHeader___00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
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
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Bind<STableColumnHeader> @ 142a15510

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TAttribute<EVisibility>::Bind<STableColumnHeader>
          (TAttribute<EVisibility> *this,STableColumnHeader *param_1,pmf_ecb6d3f9 *param_2)

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
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
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
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSTableColumnHeader___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
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
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// TAttribute<FOptionalSize> @ 142a16c90

TAttribute<FOptionalSize> * __thiscall
TAttribute<FOptionalSize>::TAttribute<FOptionalSize>
          (TAttribute<FOptionalSize> *this,TAttribute<FOptionalSize> *param_1)

{
  (this->Value).Size = (param_1->Value).Size;
  this->bIsSet = param_1->bIsSet;
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>(&this->Getter,&param_1->Getter);
  return this;
}

// TAttribute<FOptionalSize> @ 142a16cd0

TAttribute<FOptionalSize> * __thiscall
TAttribute<FOptionalSize>::TAttribute<FOptionalSize>(TAttribute<FOptionalSize> *this)

{
  float fVar1;
  
  fVar1 = FOptionalSize::Unspecified;
  this->bIsSet = false;
  (this->Value).Size = fVar1;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

// TAttribute<enum_SSplitter::ESizeRule> @ 142a16d00

TAttribute<SSplitter::ESizeRule> * __thiscall
TAttribute<enum_SSplitter::ESizeRule>::TAttribute<enum_SSplitter::ESizeRule>
          (void *this,ESizeRule *param_1)

{
  *(ESizeRule *)this = *param_1;
  *(undefined1 *)((longlong)this + 4) = 1;
  *(undefined8 *)((longlong)this + 0x18) = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  return this;
}

// ~TAttribute<FOptionalSize> @ 142a18740

void __thiscall
TAttribute<FOptionalSize>::~TAttribute<FOptionalSize>(TAttribute<FOptionalSize> *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  pvVar1 = *(void **)&(this->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Getter);
  return;
}

// ~TAttribute<enum_SSplitter::ESizeRule> @ 142a18780

void __thiscall
TAttribute<enum_SSplitter::ESizeRule>::~TAttribute<enum_SSplitter::ESizeRule>(void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 8));
  return;
}

// Bind @ 142a1b8a0

void __thiscall
TAttribute<FOptionalSize>::Bind
          (TAttribute<FOptionalSize> *this,
          TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  this->bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  return;
}

// Get @ 142a286d0

Type * __thiscall TAttribute<enum_EColumnSortMode::Type>::Get(void *this)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             &local_28);
  if ((*(int *)((longlong)this + 0x18) != 0) &&
     (*(longlong **)((longlong)this + 0x10) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
                 &local_28);
      if (*(int *)((longlong)this + 0x18) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)((longlong)this + 0x10);
      }
      uVar2 = (**(code **)(*plVar3 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      *(undefined4 *)this = uVar2;
      return this;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return this;
}

// Get @ 142a28770

/* WARNING: Enum "Type": Some values do not have unique names */

Type * __thiscall TAttribute<enum_EColumnSortPriority::Type>::Get(void *this)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             &local_28);
  if ((*(int *)((longlong)this + 0x18) != 0) &&
     (*(longlong **)((longlong)this + 0x10) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
                 &local_28);
      if (*(int *)((longlong)this + 0x18) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)((longlong)this + 0x10);
      }
      uVar2 = (**(code **)(*plVar3 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      *(undefined4 *)this = uVar2;
      return this;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return this;
}

