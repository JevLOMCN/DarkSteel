// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 18

// StaticClass @ 146960410

UClass * __cdecl UTreeView::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTreeView.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"TreeView",&Z_Registration_Info_UClass_UTreeView.InnerSingleton,
               StaticRegisterNativesUTreeView,0x1170,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UTreeView>,InternalVTableHelperCtorCaller<UTreeView>,local_res8,
               UListView::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTreeView.InnerSingleton;
}

// ConstructTreeView<STreeView> @ 146972920

TSharedRef<STreeView<UObject_*>,1> * __thiscall
UTreeView::ConstructTreeView<STreeView>
          (UTreeView *this,TSharedRef<STreeView<UObject_*>,1> *__return_storage_ptr__)

{
  TSharedPtr<STreeView<UObject_*>,1> *pTVar1;
  STreeView<UObject_*> *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  ISlateStyle *pIVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  FName *pFVar8;
  longlong lVar9;
  TSharedRef<STreeView<UObject_*>,1> *pTVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  UTreeView *local_res8;
  FName local_res10;
  FName local_res18 [2];
  undefined1 local_e8 [8];
  FDelegateAllocation local_e0;
  STreeView<UObject_*> *local_d0;
  FSharedReferencer<1> local_c8;
  STreeView<UObject_*> *local_c0;
  FSharedReferencer<1> local_b8 [2];
  code *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  bool local_98;
  FTreeViewConstructArgs local_88;
  TSharedRef<STreeView<UObject_*>,1> local_70;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  
  pIVar5 = FUMGCoreStyle::Instance.Object;
  pFVar8 = ::FName::FName(&local_res10,"TreeView");
  lVar9 = (**(code **)((longlong)*pIVar5 + 0xa0))(pIVar5,FTableViewStyle::TypeName,*pFVar8,0,1);
  if (lVar9 == 0) {
    FTableViewStyle::GetDefault();
  }
  pIVar5 = FUMGCoreStyle::Instance.Object;
  pFVar8 = ::FName::FName(local_res18,"ScrollBar");
  lVar9 = (**(code **)((longlong)*pIVar5 + 0xa0))(pIVar5,FScrollBarStyle::TypeName,*pFVar8,0,1);
  if (lVar9 == 0) {
    FScrollBarStyle::GetDefault();
  }
  local_88.bClearSelectionOnClick = *(bool *)((longlong)&this->_padding_ + 3);
  local_88.SelectionMode = (Type)*(byte *)((longlong)&this->_padding_ + 1);
  local_88.ConsumeMouseWheel = *(EConsumeMouseWheel *)((longlong)&this->_padding_ + 2);
  local_88.bReturnFocusToSelection = *(bool *)((longlong)&this->_padding_ + 6);
  local_88.TreeViewStyle = (FTableViewStyle *)&this->_padding_;
  local_88.ScrollBarStyle = (FScrollBarStyle *)&this->_padding_;
  pTVar10 = ITypedUMGListView<UObject_*>::ConstructTreeView<STreeView,UTreeView>
                      (&local_70,this,
                       (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)&this->_padding_,&local_88);
  local_c8.ReferenceController = (pTVar10->SharedReferenceCount).ReferenceController;
  local_d0 = pTVar10->Object;
  if (local_c8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_c8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_c8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->MyTreeView;
  if (pTVar1 != (TSharedPtr<STreeView<UObject_*>,1> *)&local_d0) {
    pTVar1->Object = local_d0;
    local_d0 = (STreeView<UObject_*> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyTreeView).SharedReferenceCount,&local_c8);
  }
  FVar6.ReferenceController = local_c8.ReferenceController;
  local_b8[0].ReferenceController = (this->MyTreeView).SharedReferenceCount.ReferenceController;
  local_c0 = pTVar1->Object;
  if (local_b8[0].ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_b8[0].ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_b8[0].ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((STreeView<UObject_*> **)&this->_padding_ != &local_c0) {
    this->_padding_ = (longlong)local_c0;
    local_c0 = (STreeView<UObject_*> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,local_b8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8[0].ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_70.SharedReferenceCount.ReferenceController._4_4_,
                      local_70.SharedReferenceCount.ReferenceController._0_4_));
  if (((this->MyTreeView).Object == (STreeView<UObject_*> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    pTVar10 = (TSharedRef<STreeView<UObject_*>,1> *)(*pcVar4)();
    return pTVar10;
  }
  pSVar2 = (this->MyTreeView).Object;
  local_a8 = UListView::HandleOnEntryInitializedInternal;
  uStack_9c = local_70.SharedReferenceCount.ReferenceController._4_4_;
  uStack_a0 = 0;
  local_e8 = (undefined1  [8])0x0;
  local_e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_e0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
             (FWriteAccessScope *)&local_60);
  local_48 = &local_e0;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,&local_e0);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__AEBV__TSharedRef_VITableRow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUTreeView____A6AXPEAVUObject__AEBV__TSharedRef_VITableRow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar11[3] = 0;
    local_res8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_res8);
    puVar11[4] = local_a8;
    puVar11[5] = CONCAT44(uStack_9c,uStack_a0);
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  TDelegate<void___cdecl(UObject_*,TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>::
  operator=((TDelegate<void___cdecl(UObject_*,TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
             *)&pSVar2->field_0x740,
            (TDelegate<void___cdecl(UObject_*,TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
             *)local_e8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
             (FWriteAccessScope *)&local_a8);
  if ((local_e0.DelegateSize != 0) &&
     (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_e0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_e0,0,0,0x10);
    local_e0.DelegateSize = 0;
  }
  if (local_98 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_9c,uStack_a0),
               (FDestructionSentinel *)&local_a8);
  }
  if (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_e0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e8);
  if (((this->MyTreeView).Object == (STreeView<UObject_*> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    pTVar10 = (TSharedRef<STreeView<UObject_*>,1> *)(*pcVar4)();
    return pTVar10;
  }
  pTVar3 = (this->MyTreeView).SharedReferenceCount.ReferenceController;
  pSVar2 = (this->MyTreeView).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar2 == (STreeView<UObject_*> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    pTVar10 = (TSharedRef<STreeView<UObject_*>,1> *)(*pcVar4)();
    return pTVar10;
  }
  __return_storage_ptr__->Object = pSVar2;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// UTreeView @ 14698e670

UTreeView * __thiscall UTreeView::UTreeView(UTreeView *this,FVTableHelper *param_1)

{
  UListView::UListView((UListView *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UTreeView__6B_;
  (this->MyTreeView).Object = (STreeView<UObject_*> *)0x0;
  (this->MyTreeView).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->BP_OnGetItemChildren = 0;
  *(undefined8 *)&(this->BP_OnGetItemChildren).field_0x8 = 0;
  *(undefined8 *)&(this->BP_OnGetItemChildren).field_0x10 = 0;
  *(undefined8 *)&this->BP_OnItemExpansionChanged = 0;
  *(undefined8 *)&(this->BP_OnItemExpansionChanged).field_0x8 = 0;
  *(undefined8 *)&(this->BP_OnItemExpansionChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnGetItemChildren = 0;
  *(undefined8 *)&(this->OnGetItemChildren).field_0x8 = 0;
  *(undefined4 *)&(this->OnGetItemChildren).field_0x10 = 0;
  *(undefined8 *)&this->OnItemExpansionChangedEvent = 0;
  *(undefined8 *)&(this->OnItemExpansionChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnItemExpansionChangedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnItemExpansionChangedEvent).field_0x18 = 2;
  return this;
}

// UTreeView @ 14698e720

UTreeView * __thiscall UTreeView::UTreeView(UTreeView *this,FObjectInitializer *param_1)

{
  FDefaultStyleCache *pFVar1;
  
  UListView::UListView((UListView *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UTreeView__6B_;
  (this->MyTreeView).Object = (STreeView<UObject_*> *)0x0;
  (this->MyTreeView).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->BP_OnGetItemChildren = 0;
  *(undefined8 *)&(this->BP_OnGetItemChildren).field_0x8 = 0;
  *(undefined8 *)&(this->BP_OnGetItemChildren).field_0x10 = 0;
  *(undefined8 *)&this->BP_OnItemExpansionChanged = 0;
  *(undefined8 *)&(this->BP_OnItemExpansionChanged).field_0x8 = 0;
  *(undefined8 *)&(this->BP_OnItemExpansionChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnGetItemChildren = 0;
  *(undefined8 *)&(this->OnGetItemChildren).field_0x8 = 0;
  *(undefined4 *)&(this->OnGetItemChildren).field_0x10 = 0;
  *(undefined8 *)&this->OnItemExpansionChangedEvent = 0;
  *(undefined8 *)&(this->OnItemExpansionChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnItemExpansionChangedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnItemExpansionChangedEvent).field_0x18 = 2;
  pFVar1 = UE::Slate::Private::FDefaultStyleCache::Get();
  FSlateBrush::operator=
            ((FSlateBrush *)&this->_padding_,&(pFVar1->Runtime).TreeViewStyle.BackgroundBrush);
  return this;
}

// ~UTreeView @ 146994740

void __thiscall UTreeView::~UTreeView(UTreeView *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UTreeView__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnItemExpansionChangedEvent).field_0x8,
             *(int *)&(this->OnItemExpansionChangedEvent).field_0x10);
  pvVar1 = *(void **)&(this->OnItemExpansionChangedEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnItemExpansionChangedEvent);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGetItemChildren);
  pvVar1 = *(void **)&(this->OnGetItemChildren).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnGetItemChildren);
  pvVar1 = *(void **)&(this->BP_OnItemExpansionChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->BP_OnItemExpansionChanged);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->BP_OnGetItemChildren);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyTreeView).SharedReferenceCount.ReferenceController);
  UListView::~UListView((UListView *)this);
  return;
}

// CollapseAll @ 1469a7660

void __thiscall UTreeView::CollapseAll(UTreeView *this)

{
  undefined1 *puVar1;
  TMap<UObject_*,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FSparseItemInfo,0>_>
  *this_00;
  int iVar2;
  STreeView<UObject_*> *pSVar3;
  bool bVar4;
  
  pSVar3 = (this->MyTreeView).Object;
  if (pSVar3 != (STreeView<UObject_*> *)0x0) {
    this_00 = &pSVar3->SparseItemInfos;
    bVar4 = 1 < *(int *)&(pSVar3->SparseItemInfos).field_0x48;
    if (!bVar4) {
      TSet<TTuple<UObject_*,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<UObject_*,FSparseItemInfo,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<UObject_*,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<UObject_*,FSparseItemInfo,0>,FDefaultSetAllocator>
                        *)this_00);
    }
    puVar1 = &(pSVar3->SparseItemInfos).field_0xc;
    *(undefined4 *)&(pSVar3->SparseItemInfos).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
    }
    *(undefined4 *)&(pSVar3->SparseItemInfos).field_0x34 = 0;
    *(undefined4 *)&(pSVar3->SparseItemInfos).field_0x30 = 0xffffffff;
    iVar2 = *(int *)&(pSVar3->SparseItemInfos).field_0x2c;
    *(undefined4 *)&(pSVar3->SparseItemInfos).field_0x28 = 0;
    if ((iVar2 < 0) || (0x80 < iVar2)) {
      *(undefined4 *)&(pSVar3->SparseItemInfos).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(pSVar3->SparseItemInfos).field_0x10,0);
    }
    if (bVar4) {
      *(undefined4 *)&(pSVar3->SparseItemInfos).field_0x48 = 1;
      TSet<TTuple<UObject_*,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<UObject_*,FSparseItemInfo,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<UObject_*,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<UObject_*,FSparseItemInfo,0>,FDefaultSetAllocator>
                *)this_00);
    }
    (**(code **)(*(longlong *)pSVar3 + 0x248))(pSVar3);
  }
  return;
}

// ExpandAll @ 1469c7170

void __thiscall UTreeView::ExpandAll(UTreeView *this)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 local_res8 [8];
  
  if ((this->MyTreeView).Object != (STreeView<UObject_*> *)0x0) {
    iVar2 = (int)this->_padding_;
    puVar7 = (undefined8 *)this->_padding_;
    puVar1 = puVar7 + iVar2;
    while( true ) {
      if ((int)this->_padding_ != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UObject_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (puVar7 == puVar1) break;
      uVar3 = *puVar7;
      if (((this->MyTreeView).Object == (STreeView<UObject_*> *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar6 = &((this->MyTreeView).Object)->field_0x598;
      (**(code **)(*(longlong *)puVar6 + 0x50))(puVar6,uVar3,1);
      puVar7 = puVar7 + 1;
    }
  }
  return;
}

// GetPrivateStaticClass @ 1469d64d0

UClass * __cdecl UTreeView::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTreeView.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"TreeView",&Z_Registration_Info_UClass_UTreeView.InnerSingleton,
               StaticRegisterNativesUTreeView,0x1170,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UTreeView>,InternalVTableHelperCtorCaller<UTreeView>,local_res8,
               UListView::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTreeView.InnerSingleton;
}

// OnGetChildrenInternal @ 1469e7fd0

void __thiscall
UTreeView::OnGetChildrenInternal
          (UTreeView *this,UObject *param_1,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *_Src;
  ForAnyElementType _Src_00;
  int iVar3;
  char cVar4;
  bool bVar5;
  longlong *plVar6;
  longlong lVar7;
  UObject *local_38;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_30;
  FReadAccessScope local_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,&local_20);
  if ((((int)this->_padding_ == 0) || ((longlong *)this->_padding_ == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*(longlong *)this->_padding_ + 0x38))(), cVar4 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_20);
    bVar5 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                      ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_);
    if (bVar5) {
      local_30.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_30.ArrayNum = 0;
      local_30.ArrayMax = 0;
      local_38 = param_1;
      if (&local_30 != param_2) {
        uVar2 = param_2->ArrayNum;
        _Src = (param_2->AllocatorInstance).Data;
        local_30.ArrayMax = 0;
        local_30.ArrayNum = uVar2;
        if (uVar2 != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,uVar2,0,&local_30.AllocatorInstance,uVar2,&local_30.ArrayMax);
          memcpy(local_30.AllocatorInstance.Data,_Src,(longlong)(int)uVar2 << 3);
        }
      }
      TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>
                ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_,&local_38);
      _Src_00.Data = local_30.AllocatorInstance.Data;
      if (param_2 != &local_30) {
        iVar3 = local_30.ArrayNum;
        lVar7 = (longlong)local_30.ArrayNum;
        piVar1 = &param_2->ArrayMax;
        param_2->ArrayNum = local_30.ArrayNum;
        if ((local_30.ArrayNum == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,local_30.ArrayNum,*piVar1,&param_2->AllocatorInstance,local_30.ArrayNum,
                     piVar1);
          if (iVar3 != 0) {
            memcpy((param_2->AllocatorInstance).Data,_Src_00.Data,lVar7 << 3);
          }
        }
      }
      if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.AllocatorInstance.Data);
      }
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_20);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,&local_20)
    ;
    if ((int)this->_padding_ == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar6 + 0x60))(plVar6,param_1,param_2);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_20);
  }
  return;
}

// OnItemClickedInternal @ 1469e8440

void __thiscall UTreeView::OnItemClickedInternal(UTreeView *this,UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  STreeView<UObject_*> *pSVar5;
  longlong *plVar6;
  UObject *local_res8;
  UObject *local_res10;
  longlong *local_18;
  TReferenceControllerBase<1> *local_10;
  
  local_res10 = param_1;
  if (this->_padding_ == 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<171491081987293275>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\TreeView.cpp"
                       ,0x5b,"MyTreeView.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    plVar6 = (longlong *)(this->_padding_ + 0x598);
    (**(code **)(*plVar6 + 0xd8))(plVar6,&local_18,&local_res10);
    if (local_18 == (longlong *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<171491081987293279>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\TreeView.cpp"
                         ,0x5f,"RowWidget.IsValid()");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      if ((local_18 == (longlong *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar4 = (**(code **)(*local_18 + 0x40))();
      if (0 < iVar4) {
        pSVar5 = TSharedPtr<STreeView<UObject_*>,1>::operator->
                           ((TSharedPtr<STreeView<UObject_*>,1> *)&this->_padding_);
        cVar3 = (**(code **)(*(longlong *)&pSVar5->field_0x598 + 0x60))
                          (&pSVar5->field_0x598,&local_res10);
        pSVar5 = TSharedPtr<STreeView<UObject_*>,1>::operator->
                           ((TSharedPtr<STreeView<UObject_*>,1> *)&this->_padding_);
        (**(code **)(*(longlong *)&pSVar5->field_0x598 + 0x50))
                  (&pSVar5->field_0x598,local_res10,cVar3 == '\0');
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  }
  local_res8 = local_res10;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_,&local_res8);
  return;
}

// OnItemExpansionChangedInternal @ 1469e8670

void __thiscall
UTreeView::OnItemExpansionChangedInternal(UTreeView *this,UObject *param_1,bool param_2)

{
  UObject *local_18;
  undefined1 local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_,&local_18);
  return;
}

// RebuildListWidget @ 1469f8e60

TSharedRef<STableViewBase,1> * __thiscall
UTreeView::RebuildListWidget(UTreeView *this,TSharedRef<STableViewBase,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<STreeView<UObject_*>,1> *pTVar2;
  TSharedRef<STreeView<UObject_*>,1> local_18;
  
  pTVar2 = ConstructTreeView<STreeView>(this,&local_18);
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

// ReleaseSlateResources @ 146a0b730

void __thiscall UTreeView::ReleaseSlateResources(UTreeView *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UListView::ReleaseSlateResources((UListView *)this,param_1);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyTreeView != (TSharedPtr<STreeView<UObject_*>,1> *)&local_18) {
    (this->MyTreeView).Object = (STreeView<UObject_*> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyTreeView).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// SetItemExpansion @ 146a162a0

void __thiscall UTreeView::SetItemExpansion(UTreeView *this,UObject *param_1,bool param_2)

{
  STreeView<UObject_*> *pSVar1;
  
  pSVar1 = (this->MyTreeView).Object;
  if (pSVar1 != (STreeView<UObject_*> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146a162b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)&pSVar1->field_0x598 + 0x50))();
    return;
  }
  return;
}

// StaticRegisterNativesUTreeView @ 146a1f220

void __cdecl UTreeView::StaticRegisterNativesUTreeView(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UTreeView_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCollapseAll @ 146a33b10

void __cdecl UTreeView::execCollapseAll(UObject *param_1,FFrame *param_2,void *param_3)

{
  TSet<TTuple<UObject_*,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<UObject_*,FSparseItemInfo,0>,FDefaultSetAllocator>
  *this;
  longlong *plVar1;
  bool bVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar1 = *(longlong **)&param_1[0x6c].field_0x18;
  if (plVar1 != (longlong *)0x0) {
    this = (TSet<TTuple<UObject_*,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<UObject_*,FSparseItemInfo,0>,FDefaultSetAllocator>
            *)(plVar1 + 0x145);
    bVar2 = 1 < (int)plVar1[0x14e];
    if (!bVar2) {
      TSet<TTuple<UObject_*,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<UObject_*,FSparseItemInfo,0>,FDefaultSetAllocator>
      ::UnhashElements(this);
    }
    *(undefined4 *)(plVar1 + 0x146) = 0;
    if (*(int *)((longlong)plVar1 + 0xa34) != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)this,0,(int *)((longlong)plVar1 + 0xa34));
    }
    *(undefined4 *)(plVar1 + 0x14b) = 0xffffffff;
    *(undefined4 *)((longlong)plVar1 + 0xa5c) = 0;
    *(undefined4 *)(plVar1 + 0x14a) = 0;
    if ((*(int *)((longlong)plVar1 + 0xa54) < 0) || (0x80 < *(int *)((longlong)plVar1 + 0xa54))) {
      *(undefined4 *)((longlong)plVar1 + 0xa54) = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(plVar1 + 0x147),0);
    }
    if (bVar2) {
      *(undefined4 *)(plVar1 + 0x14e) = 1;
      TSet<TTuple<UObject_*,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<UObject_*,FSparseItemInfo,0>,FDefaultSetAllocator>
      ::Rehash(this);
    }
    (**(code **)(*plVar1 + 0x248))(plVar1);
  }
  return;
}

// execExpandAll @ 146a33d00

void __cdecl UTreeView::execExpandAll(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined1 local_res8 [8];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[0x6c].field_0x18 != 0) {
    iVar2 = *(int *)&param_1[0x62].field_0x10;
    puVar7 = *(undefined8 **)&param_1[0x62].field_0x8;
    puVar1 = puVar7 + iVar2;
    while( true ) {
      if (*(int *)&param_1[0x62].field_0x10 != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UObject_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (puVar7 == puVar1) break;
      uVar3 = *puVar7;
      if ((*(longlong *)&param_1[0x6c].field_0x18 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar6 = (longlong *)(*(longlong *)&param_1[0x6c].field_0x18 + 0x598);
      (**(code **)(*plVar6 + 0x50))(plVar6,uVar3,1);
      puVar7 = puVar7 + 1;
    }
  }
  return;
}

// execSetItemExpansion @ 146a3e770

void __cdecl UTreeView::execSetItemExpansion(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  int local_res8 [2];
  undefined8 local_res10;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[0x6c].field_0x18 != 0) {
    plVar2 = (longlong *)(*(longlong *)&param_1[0x6c].field_0x18 + 0x598);
    (**(code **)(*plVar2 + 0x50))(plVar2,local_res10,local_res8[0] != 0);
  }
  return;
}

