// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 10

// StaticClass @ 146a45cc0

UClass * __cdecl UNavigationUIComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavigationUIComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"NavigationUIComponent",
               &Z_Registration_Info_UClass_UNavigationUIComponent.InnerSingleton,
               StaticRegisterNativesUNavigationUIComponent,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNavigationUIComponent>,
               InternalVTableHelperCtorCaller<UNavigationUIComponent>,local_res8,
               UUIComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavigationUIComponent.InnerSingleton;
}

// UNavigationUIComponent @ 146a563f0

UNavigationUIComponent * __thiscall
UNavigationUIComponent::UNavigationUIComponent(UNavigationUIComponent *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0xffff;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  (this->OnNavigationEntered).ComparisonIndex = 0;
  (this->OnNavigationEntered).Number = 0;
  (this->OnNavigationExited).ComparisonIndex = 0;
  (this->OnNavigationExited).Number = 0;
  *(undefined8 *)&this->OnNavigationEnteredDelegate = 0;
  *(undefined8 *)&(this->OnNavigationEnteredDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnNavigationEnteredDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnNavigationExitedDelegate = 0;
  *(undefined8 *)&(this->OnNavigationExitedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnNavigationExitedDelegate).field_0x10 = 0;
  (this->NavigationTransitionMetadata).Object = (FNavigationTransitionMetadata *)0x0;
  (this->NavigationTransitionMetadata).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UNavigationUIComponent @ 146a56480

UNavigationUIComponent * __thiscall
UNavigationUIComponent::UNavigationUIComponent
          (UNavigationUIComponent *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0xffff;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  (this->OnNavigationEntered).ComparisonIndex = 0;
  (this->OnNavigationEntered).Number = 0;
  (this->OnNavigationExited).ComparisonIndex = 0;
  (this->OnNavigationExited).Number = 0;
  *(undefined8 *)&this->OnNavigationEnteredDelegate = 0;
  *(undefined8 *)&(this->OnNavigationEnteredDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnNavigationEnteredDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnNavigationExitedDelegate = 0;
  *(undefined8 *)&(this->OnNavigationExitedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnNavigationExitedDelegate).field_0x10 = 0;
  (this->NavigationTransitionMetadata).Object = (FNavigationTransitionMetadata *)0x0;
  (this->NavigationTransitionMetadata).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UNavigationUIComponent @ 146a58640

void __thiscall UNavigationUIComponent::~UNavigationUIComponent(UNavigationUIComponent *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NavigationTransitionMetadata).SharedReferenceCount.ReferenceController);
  pvVar1 = *(void **)&(this->OnNavigationExitedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnNavigationExitedDelegate);
  pvVar1 = *(void **)&(this->OnNavigationEnteredDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnNavigationEnteredDelegate);
  this->_padding_ = (longlong)&UUIComponent::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UUIComponent::_vftable__for__INotifyFieldValueChanged__;
  DestructItems<UE::FieldNotification::FFieldMulticastDelegate::FInvocationElement,int>
            ((FInvocationElement *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7IInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146a77b80

UClass * __cdecl UNavigationUIComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavigationUIComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"NavigationUIComponent",
               &Z_Registration_Info_UClass_UNavigationUIComponent.InnerSingleton,
               StaticRegisterNativesUNavigationUIComponent,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNavigationUIComponent>,
               InternalVTableHelperCtorCaller<UNavigationUIComponent>,local_res8,
               UUIComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavigationUIComponent.InnerSingleton;
}

// HandleNavigationTransition @ 146a79c50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UNavigationUIComponent::HandleNavigationTransition
          (UNavigationUIComponent *this,FNavigationTransition *param_1)

{
  EUINavigation EVar1;
  UWidget *pUVar2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *this_00;
  TWeakPtr<SWidget,1> local_28;
  UWidget *local_18;
  
  local_28.Object = (param_1->OldFocusedWidget).Object;
  local_28.WeakReferenceCount.ReferenceController =
       (param_1->OldFocusedWidget).WeakReferenceCount.ReferenceController;
  if (local_28.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  pUVar2 = UIComponent::Private::FindUMGWidget(&local_28);
  local_28.Object = (param_1->NewFocusedWidget).Object;
  local_28.WeakReferenceCount.ReferenceController =
       (param_1->NewFocusedWidget).WeakReferenceCount.ReferenceController;
  if (local_28.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_18 = UIComponent::Private::FindUMGWidget(&local_28);
  if (param_1->Direction == Incoming) {
    EVar1 = param_1->Type;
    this_00 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
              &this->OnNavigationEnteredDelegate;
  }
  else {
    if (param_1->Direction != Outgoing) {
      return;
    }
    EVar1 = param_1->Type;
    this_00 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
              &this->OnNavigationExitedDelegate;
  }
  local_28.Object = (SWidget *)CONCAT71(local_28.Object._1_7_,EVar1);
  local_28.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pUVar2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (this_00,&local_28);
  return;
}

// OnConstruct @ 146a818b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UNavigationUIComponent::OnConstruct(UNavigationUIComponent *this)

{
  TSharedPtr<FNavigationTransitionMetadata,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  UObject *this_00;
  UClass *pUVar4;
  UWidget *this_01;
  undefined8 *puVar5;
  ulong64 uVar6;
  TReferenceControllerBase<1> *pTVar7;
  FNavigationTransitionMetadata *pFVar8;
  <lambda_1> local_res8 [8];
  <lambda_1> local_res10 [8];
  FWeakObjectPtr local_res18;
  UWidget *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_188;
  FWeakObjectPtr local_180;
  FName local_178;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_170;
  FWeakObjectPtr local_168;
  FName local_160;
  FNavigationTransitionMetadata *local_158;
  FSharedReferencer<1> FStack_150;
  TSharedPtr<SWidget,1> local_148;
  UWidget *local_138;
  UNavigationUIComponent *local_130;
  code *local_128;
  undefined4 uStack_120;
  uint uStack_11c;
  TSharedRef<ISlateMetaData,1> local_118;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_108;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_f8;
  FDestructionSentinel local_e8;
  FDestructionSentinel local_d0;
  FDestructionSentinel local_b8;
  FDestructionSentinel local_a0;
  FDestructionSentinel local_88;
  undefined1 *local_70;
  FReadAccessScope local_68;
  FReadAccessScope local_50;
  
  local_res18 = (FWeakObjectPtr)this->_padding_;
  bVar3 = FWeakObjectPtr::IsValid(&local_res18);
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8283767629261307828>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Extensions\\UIComponents\\NavigationUIComponent.cpp"
                       ,0x4c,"OwningWidget.IsValid()");
    if (!bVar3) {
      return;
    }
code_r0x000146a81970:
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = FWeakObjectPtr::Get(&local_res18);
  pUVar4 = UUserWidget::StaticClass();
  this_01 = (UWidget *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar4);
  if (this_01 == (UWidget *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8283767629261307822>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Extensions\\UIComponents\\NavigationUIComponent.cpp"
                       ,0x52,"OwningUserWidget");
    if (bVar3) goto code_r0x000146a81970;
  }
  else {
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    local_170.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_168.ObjectIndex = 0;
    local_168.ObjectSerialNumber = 0;
    local_160.ComparisonIndex.Value = 0;
    local_160.Number = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_170,(FWriteAccessScope *)&local_e8);
    local_res20 = this_01;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_01);
    }
    FWeakObjectPtr::operator=(&local_168,(FObjectPtr)&local_res20);
    local_160 = this->OnNavigationEntered;
    if (local_e8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_170,&local_68)
    ;
    local_f8.Object = local_168;
    local_f8.FunctionName = local_160;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnNavigationEnteredDelegate,(FWriteAccessScope *)&local_d0);
    TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_>
              ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
                *)&(this->OnNavigationEnteredDelegate).field_0x8,&local_f8);
    TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
    RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
              ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
                *)&(this->OnNavigationEnteredDelegate).field_0x8,local_res8,Default);
    if (local_d0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
    }
    local_188.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_180.ObjectIndex = 0;
    local_180.ObjectSerialNumber = 0;
    local_178.ComparisonIndex.Value = 0;
    local_178.Number = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_188,(FWriteAccessScope *)&local_b8);
    local_138 = this_01;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_01);
    }
    FWeakObjectPtr::operator=(&local_180,(FObjectPtr)&local_138);
    local_178 = this->OnNavigationExited;
    if (local_b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_188,&local_50)
    ;
    local_108.Object = local_180;
    local_108.FunctionName = local_178;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_50);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnNavigationExitedDelegate,(FWriteAccessScope *)&local_a0);
    TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_>
              ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
                *)&(this->OnNavigationExitedDelegate).field_0x8,&local_108);
    TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
    RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
              ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
                *)&(this->OnNavigationExitedDelegate).field_0x8,local_res10,Default);
    if (local_a0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
    }
    UWidget::GetCachedWidget(this_01,&local_148);
    if (local_148.Object != (SWidget *)0x0) {
      FStack_150.ReferenceController = ::operator_new(0x30);
      if (FStack_150.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
        local_158 = ___xmm_00000000000000000000000000000010;
        pFVar8 = (FNavigationTransitionMetadata *)&DAT_00000010;
        FStack_150.ReferenceController = _UNK_150651568;
      }
      else {
        (FStack_150.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
        pFVar8 = (FNavigationTransitionMetadata *)(FStack_150.ReferenceController + 1);
        (FStack_150.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
        (FStack_150.ReferenceController)->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_UFNavigationTransitionMetadata___00_SharedPointerInternals__6B_
        ;
        FStack_150.ReferenceController[1]._padding_ =
             (longlong)&___7FNavigationTransitionMetadata__6B_;
        FStack_150.ReferenceController[2].SharedReferenceCount = (atomic<int>)0x0;
        FStack_150.ReferenceController[2].WeakReferenceCount = (atomic<int>)0x0;
        FStack_150.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
        FStack_150.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
        FStack_150.ReferenceController[2]._padding_ = 0;
        if (pFVar8 == (FNavigationTransitionMetadata *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        LOCK();
        (FStack_150.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FStack_150.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
        pTVar7 = FStack_150.ReferenceController;
        local_158 = pFVar8;
      }
      pTVar1 = &this->NavigationTransitionMetadata;
      if (pTVar1 != (TSharedPtr<FNavigationTransitionMetadata,1> *)&local_158) {
        pTVar1->Object = pFVar8;
        local_158 = (FNavigationTransitionMetadata *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->NavigationTransitionMetadata).SharedReferenceCount,&FStack_150);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_150.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      if (pTVar1->Object == (FNavigationTransitionMetadata *)0x0) {
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
      pFVar8 = pTVar1->Object;
      local_128 = HandleNavigationTransition;
      uStack_120 = 0;
      uStack_11c = local_108.FunctionName.Number;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &pFVar8->OnNavigationTransition,(FWriteAccessScope *)&local_88);
      local_70 = &(pFVar8->OnNavigationTransition).field_0x8;
      puVar5 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_70);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEBUFNavigationTransition___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar6 = FDelegateHandle::GenerateNewID();
        puVar5[2] = uVar6;
        *puVar5 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUNavigationUIComponent____A6AXAEBUFNavigationTransition___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar5[3] = 0;
        local_130 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&local_130);
        puVar5[4] = local_128;
        puVar5[5] = CONCAT44(uStack_11c,uStack_120);
      }
      if (local_88.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
      }
      if (local_148.Object == (SWidget *)0x0) {
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
      if (pTVar1->Object == (FNavigationTransitionMetadata *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pTVar7 = (this->NavigationTransitionMetadata).SharedReferenceCount.ReferenceController;
      pFVar8 = pTVar1->Object;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar8 == (FNavigationTransitionMetadata *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_118.Object = (ISlateMetaData *)pFVar8;
      local_118.SharedReferenceCount.ReferenceController = pTVar7;
      SWidget::AddMetadataInternal(local_148.Object,&local_118);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_118.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_188.AccessDetector);
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_170.AccessDetector);
  }
  return;
}

// OnDestruct @ 146a82200

void __thiscall UNavigationUIComponent::OnDestruct(UNavigationUIComponent *this)

{
  undefined1 *puVar1;
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnNavigationEnteredDelegate,(FWriteAccessScope *)&local_28);
  puVar1 = &(this->OnNavigationEnteredDelegate).field_0x14;
  *(undefined4 *)&(this->OnNavigationEnteredDelegate).field_0x10 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)&(this->OnNavigationEnteredDelegate).field_0x8,0,
               (int *)puVar1);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnNavigationExitedDelegate,(FWriteAccessScope *)&local_28);
  puVar1 = &(this->OnNavigationExitedDelegate).field_0x14;
  *(undefined4 *)&(this->OnNavigationExitedDelegate).field_0x10 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)&(this->OnNavigationExitedDelegate).field_0x8,0,
               (int *)puVar1);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// OnGraphRenamed @ 146a83640

void __thiscall
UNavigationUIComponent::OnGraphRenamed
          (UNavigationUIComponent *this,UEdGraph *param_1,FName *param_2,FName *param_3)

{
  if (this->OnNavigationEntered == *param_2) {
    this->OnNavigationEntered = *param_3;
  }
  if (this->OnNavigationExited == *param_2) {
    this->OnNavigationExited = *param_3;
  }
  return;
}

// StaticRegisterNativesUNavigationUIComponent @ 146a967a0

void __cdecl UNavigationUIComponent::StaticRegisterNativesUNavigationUIComponent(void)

{
  return;
}

