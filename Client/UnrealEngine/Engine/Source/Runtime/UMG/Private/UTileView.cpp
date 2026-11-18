// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 20

// StaticClass @ 14695bdc0

UClass * __cdecl UTileView::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTileView.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"TileView",&Z_Registration_Info_UClass_UTileView.InnerSingleton,
               StaticRegisterNativesUTileView,0x1120,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UTileView>,InternalVTableHelperCtorCaller<UTileView>,local_res8,
               UListView::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTileView.InnerSingleton;
}

// ConstructTileView<STileView> @ 1469711b0

TSharedRef<STileView<UObject_*>,1> * __thiscall
UTileView::ConstructTileView<STileView>
          (UTileView *this,TSharedRef<STileView<UObject_*>,1> *__return_storage_ptr__)

{
  TSharedPtr<STileView<UObject_*>,1> *pTVar1;
  ESlateVisibility EVar2;
  EListItemAlignment EVar3;
  STileView<UObject_*> *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  ISlateStyle *pIVar7;
  FSharedReferencer<1> FVar8;
  bool bVar9;
  EVisibility EVar10;
  FName *pFVar11;
  longlong lVar12;
  TSharedRef<STileView<UObject_*>,1> *pTVar13;
  undefined8 *puVar14;
  ulong64 uVar15;
  FMRSWRecursiveAccessDetector *this_00;
  UTileView *local_res8;
  FName local_res10;
  undefined1 local_268 [8];
  FDelegateAllocation local_260;
  float local_250;
  undefined1 local_24c;
  undefined1 local_248 [8];
  ForAnyElementType FStack_240;
  ulonglong local_238;
  float local_230;
  undefined1 local_22c;
  undefined1 local_228 [8];
  ForAnyElementType FStack_220;
  ulonglong local_218;
  float local_210;
  undefined1 local_20c;
  undefined1 local_208 [8];
  ForAnyElementType FStack_200;
  ulonglong local_1f8;
  float local_1f0;
  undefined1 local_1ec;
  undefined1 local_1e8 [8];
  ForAnyElementType FStack_1e0;
  ulonglong local_1d8;
  STileView<UObject_*> *local_1d0;
  FSharedReferencer<1> local_1c8;
  STileView<UObject_*> *local_1c0;
  FSharedReferencer<1> local_1b8;
  undefined1 local_1b0 [9];
  EConsumeMouseWheel local_1a7;
  bool local_1a6;
  EOrientation local_1a4;
  EListItemAlignment local_168;
  float local_160;
  bool local_15c;
  undefined1 local_158 [8];
  ForAnyElementType FStack_150;
  ulonglong local_148;
  float local_140;
  bool local_13c;
  undefined1 local_138 [8];
  ForAnyElementType FStack_130;
  ulonglong local_128;
  bool local_120;
  FScrollBarStyle *local_118;
  EVisibility local_110;
  code *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  bool local_f8;
  TSharedRef<STileView<UObject_*>,1> local_e8;
  FDestructionSentinel local_d8;
  FDestructionSentinel local_c0;
  FDestructionSentinel local_a8;
  FDestructionSentinel local_90;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  ITypedUMGListView<UObject_*>::FListViewConstructArgs::FListViewConstructArgs
            ((FListViewConstructArgs *)local_1b0);
  pIVar7 = FUMGCoreStyle::Instance.Object;
  local_168 = EvenlyDistributed;
  local_160 = 0.0;
  local_148 = 0;
  local_128 = 0;
  local_15c = false;
  local_158 = (undefined1  [8])0x0;
  FStack_150.Data = (FScriptContainerElement *)0x0;
  local_140 = 0.0;
  local_13c = false;
  local_138 = (undefined1  [8])0x0;
  FStack_130.Data = (FScriptContainerElement *)0x0;
  local_120 = false;
  pFVar11 = ::FName::FName(&local_res10,"ScrollBar");
  lVar12 = (**(code **)((longlong)*pIVar7 + 0xa0))(pIVar7,FScrollBarStyle::TypeName,*pFVar11,0,1);
  if (lVar12 == 0) {
    FScrollBarStyle::GetDefault();
  }
  local_1b0[0] = *(undefined1 *)((longlong)&this->_padding_ + 4);
  EVar2 = this->ScrollbarDisabledVisibility;
  local_110 = (EVisibility)EVisibility::Collapsed.Value.Value;
  local_1b0._4_4_ = ZEXT14(*(byte *)((longlong)&this->_padding_ + 1));
  local_1b0[8] = *(undefined1 *)((longlong)&this->_padding_ + 3);
  local_1a7 = *(EConsumeMouseWheel *)((longlong)&this->_padding_ + 2);
  local_1a6 = *(bool *)((longlong)&this->_padding_ + 6);
  local_168 = this->TileAlignment;
  local_120 = this->bWrapHorizontalNavigation;
  local_1a4 = (EOrientation)(byte)this->_padding_;
  local_118 = (FScrollBarStyle *)&this->_padding_;
  EVar10.Value.Value = EVisibility::Visible.Value.Value;
  if (((((EVar2 != Visible) &&
        (EVar10.Value.Value = EVisibility::Collapsed.Value.Value, EVar2 != Collapsed)) &&
       (EVar10.Value.Value = EVisibility::Hidden.Value.Value, EVar2 != Hidden)) &&
      ((EVar10.Value.Value = EVisibility::HitTestInvisible.Value.Value, EVar2 != HitTestInvisible &&
       (EVar10.Value.Value = EVisibility::SelfHitTestInvisible.Value.Value,
       EVar2 != SelfHitTestInvisible)))) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\Widget.cpp"
                         ,0x6a7,L""), EVar10 = EVisibility::Visible, bVar9)) {
    pcVar6 = (code *)swi(3);
    pTVar13 = (TSharedRef<STileView<UObject_*>,1> *)(*pcVar6)();
    return pTVar13;
  }
  EVar3 = this->TileAlignment;
  local_110.Value.Value = EVar10.Value.Value;
  if (((EVar3 == LeftAligned) || ((byte)(EVar3 - RightAligned) < 2)) &&
     (this->bEntrySizeIncludesEntrySpacing == false)) {
    if ((byte)(EVar3 - LeftAligned) < 3) {
      local_250 = this->EntryWidth + *(float *)&this->_padding_;
    }
    else {
      local_250 = *(float *)&this->_padding_ * __real_3f000000 + this->EntryWidth;
    }
    local_238 = 0;
    local_24c = 1;
    local_248 = (undefined1  [8])0x0;
    FStack_240.Data = (FScriptContainerElement *)0x0;
    local_13c = true;
    local_140 = local_250;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_138,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_248);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_248,
               (FWriteAccessScope *)&local_d8);
    if (((int)local_238 != 0) && (FStack_240.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_240.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_240,0,0,0x10);
      local_238 = local_238 & 0xffffffff00000000;
    }
    if (local_d8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
    }
    if (FStack_240.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_240.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_248);
    if (((this->TileAlignment == LeftAligned) || ((byte)(this->TileAlignment - RightAligned) < 2))
       && (this->bEntrySizeIncludesEntrySpacing == false)) {
      local_230 = this->EntryHeight + *(float *)((longlong)&this->_padding_ + 4);
    }
    else {
      local_230 = *(float *)((longlong)&this->_padding_ + 4) * __real_3f000000 + this->EntryHeight;
    }
    local_218 = 0;
    local_22c = 1;
    local_228 = (undefined1  [8])0x0;
    FStack_220.Data = (FScriptContainerElement *)0x0;
    local_15c = true;
    local_160 = local_230;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_158,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_228);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_228,
               (FWriteAccessScope *)&local_c0);
    if (((int)local_218 != 0) && (FStack_220.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_220.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_220,0,0,0x10);
      local_218 = local_218 & 0xffffffff00000000;
    }
    if (local_c0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
    }
    if (FStack_220.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_220.Data);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_228;
  }
  else {
    local_210 = this->EntryWidth;
    local_1f8 = 0;
    local_20c = 1;
    local_208 = (undefined1  [8])0x0;
    FStack_200.Data = (FScriptContainerElement *)0x0;
    local_13c = true;
    local_140 = local_210;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_138,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_208);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_208,
               (FWriteAccessScope *)&local_a8);
    if (((int)local_1f8 != 0) && (FStack_200.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_200.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_200,0,0,0x10);
      local_1f8 = local_1f8 & 0xffffffff00000000;
    }
    if (local_a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
    }
    if (FStack_200.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_200.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_208);
    local_1f0 = this->EntryHeight;
    local_1d8 = 0;
    local_1ec = 1;
    local_1e8 = (undefined1  [8])0x0;
    FStack_1e0.Data = (FScriptContainerElement *)0x0;
    local_15c = true;
    local_160 = local_1f0;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_158,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1e8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1e8,
               (FWriteAccessScope *)&local_90);
    if (((int)local_1d8 != 0) && (FStack_1e0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_1e0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1e0,0,0,0x10);
      local_1d8 = local_1d8 & 0xffffffff00000000;
    }
    if (local_90.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
    }
    if (FStack_1e0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1e0.Data);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_1e8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this_00);
  pTVar13 = ITypedUMGListView<UObject_*>::ConstructTileView<STileView,UTileView>
                      (&local_e8,this,
                       (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)&this->_padding_,
                       (FTileViewConstructArgs *)local_1b0);
  local_1c8.ReferenceController = (pTVar13->SharedReferenceCount).ReferenceController;
  local_1d0 = pTVar13->Object;
  if (local_1c8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1c8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_1c8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->MyTileView;
  if (pTVar1 != (TSharedPtr<STileView<UObject_*>,1> *)&local_1d0) {
    pTVar1->Object = local_1d0;
    local_1d0 = (STileView<UObject_*> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyTileView).SharedReferenceCount,&local_1c8);
  }
  FVar8.ReferenceController = local_1c8.ReferenceController;
  local_1b8.ReferenceController = (this->MyTileView).SharedReferenceCount.ReferenceController;
  local_1c0 = pTVar1->Object;
  if (local_1b8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1b8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_1b8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((STileView<UObject_*> **)&this->_padding_ != &local_1c0) {
    this->_padding_ = (longlong)local_1c0;
    local_1c0 = (STileView<UObject_*> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&local_1b8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_e8.SharedReferenceCount.ReferenceController._4_4_,
                      local_e8.SharedReferenceCount.ReferenceController._0_4_));
  if (((this->MyTileView).Object == (STileView<UObject_*> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    pTVar13 = (TSharedRef<STileView<UObject_*>,1> *)(*pcVar6)();
    return pTVar13;
  }
  pSVar4 = (this->MyTileView).Object;
  local_108 = UListView::HandleOnEntryInitializedInternal;
  uStack_fc = local_e8.SharedReferenceCount.ReferenceController._4_4_;
  uStack_100 = 0;
  local_268 = (undefined1  [8])0x0;
  local_260.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_260.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_268,
             (FWriteAccessScope *)&local_48);
  local_30 = &local_260;
  puVar14 = UE::Core::Private::DelegateAllocate(0x30,&local_260);
  if (puVar14 != (undefined8 *)0x0) {
    *puVar14 = &
               ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__AEBV__TSharedRef_VITableRow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar15 = FDelegateHandle::GenerateNewID();
    puVar14[2] = uVar15;
    *puVar14 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUTileView____A6AXPEAVUObject__AEBV__TSharedRef_VITableRow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar14[3] = 0;
    local_res8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar14 + 3),(FObjectPtr)&local_res8);
    puVar14[4] = local_108;
    puVar14[5] = CONCAT44(uStack_fc,uStack_100);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegate<void___cdecl(UObject_*,TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>::
  operator=((TDelegate<void___cdecl(UObject_*,TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
             *)&pSVar4->field_0x740,
            (TDelegate<void___cdecl(UObject_*,TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
             *)local_268);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_268,
             (FWriteAccessScope *)&local_108);
  if ((local_260.DelegateSize != 0) &&
     (local_260.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_260.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_260,0,0,0x10);
    local_260.DelegateSize = 0;
  }
  if (local_f8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_fc,uStack_100),
               (FDestructionSentinel *)&local_108);
  }
  if (local_260.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_260.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_268);
  if (((this->MyTileView).Object == (STileView<UObject_*> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    pTVar13 = (TSharedRef<STileView<UObject_*>,1> *)(*pcVar6)();
    return pTVar13;
  }
  pTVar5 = (this->MyTileView).SharedReferenceCount.ReferenceController;
  pSVar4 = (this->MyTileView).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar4 == (STileView<UObject_*> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    pTVar13 = (TSharedRef<STileView<UObject_*>,1> *)(*pcVar6)();
    return pTVar13;
  }
  __return_storage_ptr__->Object = pSVar4;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_138,
             (FWriteAccessScope *)&local_78);
  if (((int)local_128 != 0) && (FStack_130.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_130.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_130,0,0,0x10);
    local_128 = local_128 & 0xffffffff00000000;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (FStack_130.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_130.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_138);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_158,
             (FWriteAccessScope *)&local_60);
  if (((int)local_148 != 0) && (FStack_150.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_150.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_150,0,0,0x10);
    local_148 = local_148 & 0xffffffff00000000;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  if (FStack_150.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_150.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_158);
  return __return_storage_ptr__;
}

// UTileView @ 14698e570

UTileView * __thiscall UTileView::UTileView(UTileView *this,FVTableHelper *param_1)

{
  UListView::UListView((UListView *)this,param_1);
  this->EntryHeight = 128.0;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UTileView__6B_;
  (this->MyTileView).Object = (STileView<UObject_*> *)0x0;
  (this->MyTileView).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->EntryWidth = 128.0;
  this->bWrapHorizontalNavigation = false;
  this->ScrollbarDisabledVisibility = Collapsed;
  this->bEntrySizeIncludesEntrySpacing = true;
  return this;
}

// UTileView @ 14698e5f0

UTileView * __thiscall UTileView::UTileView(UTileView *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UListView::UListView((UListView *)this,param_1);
  this->EntryHeight = 128.0;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UTileView__6B_;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 | 1;
  (this->MyTileView).Object = (STileView<UObject_*> *)0x0;
  (this->MyTileView).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->EntryWidth = 128.0;
  this->bWrapHorizontalNavigation = false;
  this->ScrollbarDisabledVisibility = Collapsed;
  this->bEntrySizeIncludesEntrySpacing = true;
  return this;
}

// ~UTileView @ 1469946f0

void __thiscall UTileView::~UTileView(UTileView *this)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UTileView__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyTileView).SharedReferenceCount.ReferenceController);
  UListView::~UListView((UListView *)this);
  return;
}

// GetDesiredEntryPadding @ 1469cfbe0

FMargin * __thiscall
UTileView::GetDesiredEntryPadding(UTileView *this,FMargin *__return_storage_ptr__,UObject *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)((longlong)&this->_padding_ + 4) * __real_3f000000;
  fVar1 = *(float *)&this->_padding_ * __real_3f000000;
  __return_storage_ptr__->Top = fVar2;
  __return_storage_ptr__->Bottom = fVar2;
  __return_storage_ptr__->Left = fVar1;
  __return_storage_ptr__->Right = fVar1;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1469d6410

UClass * __cdecl UTileView::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTileView.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"TileView",&Z_Registration_Info_UClass_UTileView.InnerSingleton,
               StaticRegisterNativesUTileView,0x1120,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UTileView>,InternalVTableHelperCtorCaller<UTileView>,local_res8,
               UListView::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTileView.InnerSingleton;
}

// GetTotalEntryHeight @ 1469d9020

float __thiscall UTileView::GetTotalEntryHeight(UTileView *this)

{
  if (((this->TileAlignment == LeftAligned) || ((byte)(this->TileAlignment - RightAligned) < 2)) &&
     (this->bEntrySizeIncludesEntrySpacing == false)) {
    return this->EntryHeight + *(float *)((longlong)&this->_padding_ + 4);
  }
  return *(float *)((longlong)&this->_padding_ + 4) * __real_3f000000 + this->EntryHeight;
}

// GetTotalEntryWidth @ 1469d9070

float __thiscall UTileView::GetTotalEntryWidth(UTileView *this)

{
  if (((this->TileAlignment == LeftAligned) || ((byte)(this->TileAlignment - RightAligned) < 2)) &&
     (this->bEntrySizeIncludesEntrySpacing == false)) {
    return this->EntryWidth + *(float *)&this->_padding_;
  }
  return *(float *)&this->_padding_ * __real_3f000000 + this->EntryWidth;
}

// IsAligned @ 1469e0990

bool __thiscall UTileView::IsAligned(UTileView *this)

{
  if ((this->TileAlignment != LeftAligned) && (1 < (byte)(this->TileAlignment - RightAligned))) {
    return false;
  }
  return true;
}

// RebuildListWidget @ 1469f8e10

TSharedRef<STableViewBase,1> * __thiscall
UTileView::RebuildListWidget(UTileView *this,TSharedRef<STableViewBase,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<STileView<UObject_*>,1> *pTVar2;
  TSharedRef<STileView<UObject_*>,1> local_18;
  
  pTVar2 = ConstructTileView<STileView>(this,&local_18);
  __return_storage_ptr__->Object = (STableViewBase *)pTVar2->Object;
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

// ReleaseSlateResources @ 146a0b6d0

void __thiscall UTileView::ReleaseSlateResources(UTileView *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UListView::ReleaseSlateResources((UListView *)this,param_1);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyTileView != (TSharedPtr<STileView<UObject_*>,1> *)&local_18) {
    (this->MyTileView).Object = (STileView<UObject_*> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyTileView).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// SetEntryHeight @ 146a13680

void __thiscall UTileView::SetEntryHeight(UTileView *this,float param_1)

{
  STileView<UObject_*> *this_00;
  TAttribute<float> local_28;
  
  this_00 = (this->MyTileView).Object;
  this->EntryHeight = param_1;
  if (this_00 != (STileView<UObject_*> *)0x0) {
    if (((this->TileAlignment == LeftAligned) || ((byte)(this->TileAlignment - RightAligned) < 2))
       && (this->bEntrySizeIncludesEntrySpacing == false)) {
      local_28.Value = *(float *)((longlong)&this->_padding_ + 4);
    }
    else {
      local_28.Value = *(float *)((longlong)&this->_padding_ + 4) * __real_3f000000;
    }
    local_28.Value = param_1 + local_28.Value;
    local_28.bIsSet = true;
    local_28.Getter._16_8_ = 0;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    STableViewBase::SetItemHeight((STableViewBase *)this_00,&local_28);
  }
  return;
}

// SetEntryWidth @ 146a13c50

void __thiscall UTileView::SetEntryWidth(UTileView *this,float param_1)

{
  STileView<UObject_*> *this_00;
  TAttribute<float> local_28;
  
  this_00 = (this->MyTileView).Object;
  this->EntryWidth = param_1;
  if (this_00 != (STileView<UObject_*> *)0x0) {
    if (((this->TileAlignment == LeftAligned) || ((byte)(this->TileAlignment - RightAligned) < 2))
       && (this->bEntrySizeIncludesEntrySpacing == false)) {
      local_28.Value = *(float *)&this->_padding_;
    }
    else {
      local_28.Value = *(float *)&this->_padding_ * __real_3f000000;
    }
    local_28.Value = param_1 + local_28.Value;
    local_28.bIsSet = true;
    local_28.Getter._16_8_ = 0;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    STableViewBase::SetItemWidth((STableViewBase *)this_00,&local_28);
  }
  return;
}

// StaticRegisterNativesUTileView @ 146a1f1e0

void __cdecl UTileView::StaticRegisterNativesUTileView(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UTileView_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetEntryHeight @ 146a351e0

void __cdecl UTileView::execGetEntryHeight(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x6c].field_0x18;
  return;
}

// execGetEntryWidth @ 146a35210

void __cdecl UTileView::execGetEntryWidth(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x6c].field_0x1c;
  return;
}

// execIsAligned @ 146a37430

void __cdecl UTileView::execIsAligned(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((param_1[0x6c].field_0x20 != '\x03') && (1 < (byte)(param_1[0x6c].field_0x20 - 4))) {
    *(undefined1 *)param_3 = 0;
    return;
  }
  *(undefined1 *)param_3 = 1;
  return;
}

// execSetEntryHeight @ 146a3c160

void __cdecl UTileView::execSetEntryHeight(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  STableViewBase *this;
  float local_res8 [2];
  TAttribute<float> local_28;
  
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(STableViewBase **)(param_1 + 0x6d);
  *(float *)&param_1[0x6c].field_0x18 = local_res8[0];
  if (this != (STableViewBase *)0x0) {
    if (((param_1[0x6c].field_0x20 == '\x03') || ((byte)(param_1[0x6c].field_0x20 - 4) < 2)) &&
       (param_1[0x6d].field_0x10 == '\0')) {
      local_28.Value = *(float *)&param_1[99].field_0x4;
    }
    else {
      local_28.Value = *(float *)&param_1[99].field_0x4 * __real_3f000000;
    }
    local_28.Value = local_res8[0] + local_28.Value;
    local_28.Getter._16_8_ = 0;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    local_28.bIsSet = true;
    STableViewBase::SetItemHeight(this,&local_28);
  }
  return;
}

// execSetEntryWidth @ 146a3c300

void __cdecl UTileView::execSetEntryWidth(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  STableViewBase *this;
  float local_res8 [2];
  TAttribute<float> local_28;
  
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(STableViewBase **)(param_1 + 0x6d);
  *(float *)&param_1[0x6c].field_0x1c = local_res8[0];
  if (this != (STableViewBase *)0x0) {
    if (((param_1[0x6c].field_0x20 == '\x03') || ((byte)(param_1[0x6c].field_0x20 - 4) < 2)) &&
       (param_1[0x6d].field_0x10 == '\0')) {
      local_28.Value = *(float *)(param_1 + 99);
    }
    else {
      local_28.Value = *(float *)(param_1 + 99) * __real_3f000000;
    }
    local_28.Value = local_res8[0] + local_28.Value;
    local_28.Getter._16_8_ = 0;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    local_28.bIsSet = true;
    STableViewBase::SetItemWidth(this,&local_28);
  }
  return;
}

