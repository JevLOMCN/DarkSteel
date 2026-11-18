// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 1

// ConstructTileView<SCommonTileView> @ 14a7944c0

TSharedRef<SCommonTileView<UObject_*>,1> * __thiscall
UTileView::ConstructTileView<SCommonTileView>
          (UTileView *this,TSharedRef<SCommonTileView<UObject_*>,1> *__return_storage_ptr__)

{
  TSharedPtr<STileView<UObject_*>,1> *pTVar1;
  STileView<UObject_*> *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  SCommonTileView<UObject_*> *pSVar4;
  code *pcVar5;
  ISlateStyle *pIVar6;
  FSharedReferencer<1> FVar7;
  EVisibility EVar8;
  bool bVar9;
  FName *pFVar10;
  longlong lVar11;
  undefined7 extraout_var;
  TSharedRef<SCommonTileView<UObject_*>,1> *pTVar12;
  undefined8 *puVar13;
  ulong64 uVar14;
  FMRSWRecursiveAccessDetector *this_00;
  undefined1 local_res8 [8];
  UTileView *local_res10;
  FName local_res18 [2];
  undefined1 local_278 [8];
  FDelegateAllocation local_270;
  float local_260;
  undefined1 local_25c;
  undefined1 local_258 [8];
  ForAnyElementType FStack_250;
  ulonglong local_248;
  float local_240;
  undefined1 local_23c;
  undefined1 local_238 [8];
  ForAnyElementType FStack_230;
  ulonglong local_228;
  float local_220;
  undefined1 local_21c;
  undefined1 local_218 [8];
  ForAnyElementType FStack_210;
  ulonglong local_208;
  float local_200;
  undefined1 local_1fc;
  undefined1 local_1f8 [8];
  ForAnyElementType FStack_1f0;
  ulonglong local_1e8;
  SCommonTileView<UObject_*> *local_1e0;
  FSharedReferencer<1> local_1d8;
  STileView<UObject_*> *local_1d0;
  FSharedReferencer<1> local_1c8;
  undefined1 local_1c0 [9];
  EConsumeMouseWheel local_1b7;
  bool local_1b6;
  EOrientation local_1b4;
  EListItemAlignment local_178;
  float local_170;
  bool local_16c;
  undefined1 local_168 [8];
  ForAnyElementType FStack_160;
  ulonglong local_158;
  float local_150;
  bool local_14c;
  undefined1 local_148 [8];
  ForAnyElementType FStack_140;
  ulonglong local_138;
  bool local_130;
  FScrollBarStyle *local_128;
  EVisibility local_120;
  code *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  bool local_108;
  TSharedRef<SCommonTileView<UObject_*>,1> local_f8;
  FDestructionSentinel local_e8;
  FDestructionSentinel local_d0;
  FDestructionSentinel local_b8;
  FDestructionSentinel local_a0;
  FDestructionSentinel local_88;
  FDestructionSentinel local_70;
  FDestructionSentinel local_58;
  FDelegateAllocation *local_40;
  
  ITypedUMGListView<UObject_*>::FListViewConstructArgs::FListViewConstructArgs
            ((FListViewConstructArgs *)local_1c0);
  pIVar6 = FUMGCoreStyle::Instance.Object;
  local_178 = EvenlyDistributed;
  local_170 = 0.0;
  local_158 = 0;
  local_138 = 0;
  local_16c = false;
  local_168 = (undefined1  [8])0x0;
  FStack_160.Data = (FScriptContainerElement *)0x0;
  local_150 = 0.0;
  local_14c = false;
  local_148 = (undefined1  [8])0x0;
  FStack_140.Data = (FScriptContainerElement *)0x0;
  local_130 = false;
  pFVar10 = ::FName::FName(local_res18,"ScrollBar");
  lVar11 = (**(code **)((longlong)*pIVar6 + 0xa0))(pIVar6,FScrollBarStyle::TypeName,*pFVar10,0,1);
  if (lVar11 == 0) {
    FScrollBarStyle::GetDefault();
  }
  local_120 = (EVisibility)EVisibility::Collapsed.Value.Value;
  local_1c0[0] = *(undefined1 *)((longlong)&this->_padding_ + 4);
  local_1c0._4_4_ = ZEXT14(*(byte *)((longlong)&this->_padding_ + 1));
  local_1c0[8] = *(undefined1 *)((longlong)&this->_padding_ + 3);
  local_1b7 = *(EConsumeMouseWheel *)((longlong)&this->_padding_ + 2);
  local_1b6 = *(bool *)((longlong)&this->_padding_ + 6);
  local_178 = this->TileAlignment;
  local_130 = this->bWrapHorizontalNavigation;
  local_1b4 = (EOrientation)(byte)this->_padding_;
  local_128 = (FScrollBarStyle *)&this->_padding_;
  EVar8 = UWidget::ConvertSerializedVisibilityToRuntime((ESlateVisibility)local_res8);
  local_120.Value.Value =
       *(TEnumAsByte<EVisibility::Private> *)CONCAT71(extraout_var,EVar8.Value.Value);
  bVar9 = IsAligned(this);
  if ((bVar9) && (this->bEntrySizeIncludesEntrySpacing == false)) {
    local_260 = GetTotalEntryWidth(this);
    local_248 = 0;
    local_25c = 1;
    local_258 = (undefined1  [8])0x0;
    FStack_250.Data = (FScriptContainerElement *)0x0;
    local_14c = true;
    local_150 = local_260;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_148,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_258);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_258,
               (FWriteAccessScope *)&local_e8);
    if (((int)local_248 != 0) && (FStack_250.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_250.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_250,0,0,0x10);
      local_248 = local_248 & 0xffffffff00000000;
    }
    if (local_e8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
    }
    if (FStack_250.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_250.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_258);
    local_240 = GetTotalEntryHeight(this);
    local_228 = 0;
    local_23c = 1;
    local_238 = (undefined1  [8])0x0;
    FStack_230.Data = (FScriptContainerElement *)0x0;
    local_16c = true;
    local_170 = local_240;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_168,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_238);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_238,
               (FWriteAccessScope *)&local_d0);
    if (((int)local_228 != 0) && (FStack_230.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_230.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_230,0,0,0x10);
      local_228 = local_228 & 0xffffffff00000000;
    }
    if (local_d0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
    }
    if (FStack_230.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_230.Data);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_238;
  }
  else {
    local_220 = this->EntryWidth;
    local_208 = 0;
    local_21c = 1;
    local_218 = (undefined1  [8])0x0;
    FStack_210.Data = (FScriptContainerElement *)0x0;
    local_14c = true;
    local_150 = local_220;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_148,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_218);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_218,
               (FWriteAccessScope *)&local_b8);
    if (((int)local_208 != 0) && (FStack_210.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_210.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_210,0,0,0x10);
      local_208 = local_208 & 0xffffffff00000000;
    }
    if (local_b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
    }
    if (FStack_210.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_210.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_218);
    local_200 = this->EntryHeight;
    local_1e8 = 0;
    local_1fc = 1;
    local_1f8 = (undefined1  [8])0x0;
    FStack_1f0.Data = (FScriptContainerElement *)0x0;
    local_16c = true;
    local_170 = local_200;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_168,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1f8,
               (FWriteAccessScope *)&local_a0);
    if (((int)local_1e8 != 0) && (FStack_1f0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_1f0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1f0,0,0,0x10);
      local_1e8 = local_1e8 & 0xffffffff00000000;
    }
    if (local_a0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
    }
    if (FStack_1f0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1f0.Data);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_1f8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this_00);
  pTVar12 = ITypedUMGListView<UObject_*>::ConstructTileView<SCommonTileView,UTileView>
                      (&local_f8,this,
                       (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)&this->_padding_,
                       (FTileViewConstructArgs *)local_1c0);
  local_1d8.ReferenceController = (pTVar12->SharedReferenceCount).ReferenceController;
  local_1e0 = pTVar12->Object;
  if (local_1d8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1d8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_1d8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->MyTileView;
  if (pTVar1 != (TSharedPtr<STileView<UObject_*>,1> *)&local_1e0) {
    pTVar1->Object = (STileView<UObject_*> *)local_1e0;
    local_1e0 = (SCommonTileView<UObject_*> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyTileView).SharedReferenceCount,&local_1d8);
  }
  FVar7.ReferenceController = local_1d8.ReferenceController;
  local_1c8.ReferenceController = (this->MyTileView).SharedReferenceCount.ReferenceController;
  local_1d0 = pTVar1->Object;
  if (local_1c8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1c8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_1c8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((STileView<UObject_*> **)&this->_padding_ != &local_1d0) {
    this->_padding_ = (longlong)local_1d0;
    local_1d0 = (STileView<UObject_*> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&local_1c8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_f8.SharedReferenceCount.ReferenceController._4_4_,
                      local_f8.SharedReferenceCount.ReferenceController._0_4_));
  if (((this->MyTileView).Object == (STileView<UObject_*> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar12 = (TSharedRef<SCommonTileView<UObject_*>,1> *)(*pcVar5)();
    return pTVar12;
  }
  pSVar2 = (this->MyTileView).Object;
  local_118 = UListView::HandleOnEntryInitializedInternal;
  uStack_10c = local_f8.SharedReferenceCount.ReferenceController._4_4_;
  uStack_110 = 0;
  local_278 = (undefined1  [8])0x0;
  local_270.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_270.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_278,
             (FWriteAccessScope *)&local_58);
  local_40 = &local_270;
  puVar13 = UE::Core::Private::DelegateAllocate(0x30,&local_270);
  if (puVar13 != (undefined8 *)0x0) {
    *puVar13 = &
               ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__AEBV__TSharedRef_VITableRow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar14 = FDelegateHandle::GenerateNewID();
    puVar13[2] = uVar14;
    *puVar13 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUTileView____A6AXPEAVUObject__AEBV__TSharedRef_VITableRow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar13[3] = 0;
    local_res10 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar13 + 3),(FObjectPtr)&local_res10);
    puVar13[4] = local_118;
    puVar13[5] = CONCAT44(uStack_10c,uStack_110);
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  TDelegate<void___cdecl(UObject_*,TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>::
  operator=((TDelegate<void___cdecl(UObject_*,TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
             *)&pSVar2->field_0x740,
            (TDelegate<void___cdecl(UObject_*,TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
             *)local_278);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_278,
             (FWriteAccessScope *)&local_118);
  if ((local_270.DelegateSize != 0) &&
     (local_270.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_270.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_270,0,0,0x10);
    local_270.DelegateSize = 0;
  }
  if (local_108 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_10c,uStack_110),
               (FDestructionSentinel *)&local_118);
  }
  if (local_270.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_270.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_278);
  if (((this->MyTileView).Object == (STileView<UObject_*> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar12 = (TSharedRef<SCommonTileView<UObject_*>,1> *)(*pcVar5)();
    return pTVar12;
  }
  pTVar3 = (this->MyTileView).SharedReferenceCount.ReferenceController;
  pSVar4 = (SCommonTileView<UObject_*> *)(this->MyTileView).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar4 == (SCommonTileView<UObject_*> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar12 = (TSharedRef<SCommonTileView<UObject_*>,1> *)(*pcVar5)();
    return pTVar12;
  }
  __return_storage_ptr__->Object = pSVar4;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_148,
             (FWriteAccessScope *)&local_88);
  if (((int)local_138 != 0) && (FStack_140.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_140.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_140,0,0,0x10);
    local_138 = local_138 & 0xffffffff00000000;
  }
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  if (FStack_140.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_140.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_148);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_168,
             (FWriteAccessScope *)&local_70);
  if (((int)local_158 != 0) && (FStack_160.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_160.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_160,0,0,0x10);
    local_158 = local_158 & 0xffffffff00000000;
  }
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  if (FStack_160.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_160.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_168);
  return __return_storage_ptr__;
}

