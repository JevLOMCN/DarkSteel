// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 84

// StaticClass @ 14a787da0

UClass * __cdecl UCommonUIActionRouterBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonUIActionRouterBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonUIActionRouterBase",
               &Z_Registration_Info_UClass_UCommonUIActionRouterBase.InnerSingleton,
               StaticRegisterNativesUCommonUIActionRouterBase,0x1f8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UCommonUIActionRouterBase>,
               InternalVTableHelperCtorCaller<UCommonUIActionRouterBase>,local_res8,
               ULocalPlayerSubsystem::StaticClass,ULocalPlayer::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonUIActionRouterBase.InnerSingleton;
}

// UCommonUIActionRouterBase @ 14a7aef50

UCommonUIActionRouterBase * __thiscall
UCommonUIActionRouterBase::UCommonUIActionRouterBase
          (UCommonUIActionRouterBase *this,FVTableHelper *param_1)

{
  FString local_18;
  
  ULocalPlayerSubsystem::ULocalPlayerSubsystem((ULocalPlayerSubsystem *)this,param_1);
  this->bIsActivatableTreeEnabled = true;
  this->_padding_ = (longlong)&___7UCommonUIActionRouterBase__6B_;
  (this->ActiveInputConfig).bIsSet = false;
  (this->AnalogCursor).Object = (FCommonAnalogCursor *)0x0;
  (this->AnalogCursor).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->TickHandle).Object = (FElement *)0x0;
  (this->TickHandle).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->PendingWidgetRegistrations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingWidgetRegistrations).ArrayNum = 0;
  (this->PendingWidgetRegistrations).ArrayMax = 0;
  (this->RebuiltWidgetsPendingNodeAssignment).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RebuiltWidgetsPendingNodeAssignment).ArrayNum = 0;
  (this->RebuiltWidgetsPendingNodeAssignment).ArrayMax = 0;
  *(undefined8 *)&(this->ActiveActionDomainRootsPendingPaint).Elements = 0;
  *(undefined8 *)&(this->ActiveActionDomainRootsPendingPaint).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ActiveActionDomainRootsPendingPaint).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ActiveActionDomainRootsPendingPaint).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ActiveActionDomainRootsPendingPaint).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveActionDomainRootsPendingPaint).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActiveActionDomainRootsPendingPaint).Elements.field_0x34 = 0;
  (this->ActiveActionDomainRootsPendingPaint).Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->ActiveActionDomainRootsPendingPaint).HashSize = 0;
  (this->RootNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootNodes).ArrayNum = 0;
  (this->RootNodes).ArrayMax = 0;
  (this->ActiveRootNode).Object = (FActivatableTreeRoot *)0x0;
  (this->ActiveRootNode).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->PersistentActions).Object = (FPersistentActionCollection *)0x0;
  (this->PersistentActions).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  ::FString::FString(&local_18,"None");
  TCircularBuffer<FString>::TCircularBuffer<FString>(&this->InputConfigSources,5,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  this->InputConfigSourceIndex = 0;
  this->bForceResetActiveRoot = false;
  *(undefined8 *)&this->OnBoundActionsUpdatedEvent = 0;
  *(undefined8 *)&(this->OnBoundActionsUpdatedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnBoundActionsUpdatedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnBoundActionsUpdatedEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnActiveInputModeChangedEvent = 0;
  *(undefined8 *)&(this->OnActiveInputModeChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnActiveInputModeChangedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnActiveInputModeChangedEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnActivationMetadataChangedEvent = 0;
  *(undefined8 *)&(this->OnActivationMetadataChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnActivationMetadataChangedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnActivationMetadataChangedEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnActiveInputConfigChangedEvent = 0;
  *(undefined8 *)&(this->OnActiveInputConfigChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnActiveInputConfigChangedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnActiveInputConfigChangedEvent).field_0x18 = 2;
  (this->HeldKeys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HeldKeys).ArrayNum = 0;
  (this->HeldKeys).ArrayMax = 0;
  *(undefined8 *)&this->ActionDomainRootNodes = 0;
  *(undefined8 *)&(this->ActionDomainRootNodes).field_0x8 = 0;
  *(undefined8 *)&(this->ActionDomainRootNodes).field_0x20 = 0;
  *(undefined4 *)&(this->ActionDomainRootNodes).field_0x28 = 0;
  *(undefined4 *)&(this->ActionDomainRootNodes).field_0x2c = 0x80;
  *(undefined4 *)&(this->ActionDomainRootNodes).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActionDomainRootNodes).field_0x34 = 0;
  *(undefined8 *)&(this->ActionDomainRootNodes).field_0x40 = 0;
  *(undefined4 *)&(this->ActionDomainRootNodes).field_0x48 = 0;
  return this;
}

// UCommonUIActionRouterBase @ 14a7af130

UCommonUIActionRouterBase * __thiscall
UCommonUIActionRouterBase::UCommonUIActionRouterBase(UCommonUIActionRouterBase *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  UCommonUIActionRouterBase *pUVar7;
  FPersistentActionCollection *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  UCommonUIActionRouterBase *local_res8 [4];
  FString local_38;
  
  ULocalPlayerSubsystem::ULocalPlayerSubsystem((ULocalPlayerSubsystem *)this);
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  this->bIsActivatableTreeEnabled = true;
  this->_padding_ = (longlong)&___7UCommonUIActionRouterBase__6B_;
  (this->ActiveInputConfig).bIsSet = false;
  (this->AnalogCursor).Object = (FCommonAnalogCursor *)0x0;
  (this->AnalogCursor).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->TickHandle).Object = (FElement *)0x0;
  (this->TickHandle).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->PendingWidgetRegistrations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingWidgetRegistrations).ArrayNum = 0;
  (this->PendingWidgetRegistrations).ArrayMax = 0;
  (this->RebuiltWidgetsPendingNodeAssignment).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RebuiltWidgetsPendingNodeAssignment).ArrayNum = 0;
  (this->RebuiltWidgetsPendingNodeAssignment).ArrayMax = 0;
  *(undefined8 *)&(this->ActiveActionDomainRootsPendingPaint).Elements = 0;
  *(undefined8 *)&(this->ActiveActionDomainRootsPendingPaint).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ActiveActionDomainRootsPendingPaint).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ActiveActionDomainRootsPendingPaint).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ActiveActionDomainRootsPendingPaint).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveActionDomainRootsPendingPaint).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActiveActionDomainRootsPendingPaint).Elements.field_0x34 = 0;
  (this->ActiveActionDomainRootsPendingPaint).Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->ActiveActionDomainRootsPendingPaint).HashSize = 0;
  (this->RootNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootNodes).ArrayNum = 0;
  (this->RootNodes).ArrayMax = 0;
  (this->ActiveRootNode).Object = (FActivatableTreeRoot *)0x0;
  (this->ActiveRootNode).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x60);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pFVar8 = (FPersistentActionCollection *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFPersistentActionCollection___00_SharedPointerInternals__6B_
    ;
    pTVar6[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[2]._padding_ = 0;
    pTVar6[1]._padding_ = (longlong)&___7FActionRouterBindingCollection__6B_;
    pTVar6[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[3]._padding_ = 0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    pTVar6[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[3].WeakReferenceCount = (atomic<int>)0x0;
    local_res8[0] = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=
              ((FWeakObjectPtr *)&pTVar6[3].SharedReferenceCount,(FObjectPtr)local_res8);
    pFVar8 = (FPersistentActionCollection *)(pTVar6 + 1);
    pTVar6[4]._padding_ = 0;
    pTVar6[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[1]._padding_ = (longlong)&___7FPersistentActionCollection__6B_;
    *(undefined4 *)&pTVar6[5]._padding_ = 0xffffffff;
    pTVar6[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9 = pTVar6;
    if (pFVar8 == (FPersistentActionCollection *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pUVar7 = (UCommonUIActionRouterBase *)(*pcVar4)();
        return pUVar7;
      }
      goto LAB_14a7af330;
    }
  }
  if (((*(longlong *)&pFVar8->field_0x8 == 0) || (*(longlong *)&pFVar8->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pFVar8->field_0x10 + 8) < 1)) {
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FPersistentActionCollection **)&pFVar8->field_0x8 = pFVar8;
    if (pTVar9 != *(TReferenceControllerBase<1> **)&pFVar8->field_0x10) {
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pFVar8->field_0x10;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pFVar8->field_0x10 = pTVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
LAB_14a7af330:
  (this->PersistentActions).Object = pFVar8;
  (this->PersistentActions).SharedReferenceCount.ReferenceController = pTVar9;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  ::FString::FString(&local_38,"None");
  TCircularBuffer<FString>::TCircularBuffer<FString>
            (&this->InputConfigSources,TraceInputConfigNum,&local_38);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  this->InputConfigSourceIndex = 0;
  this->bForceResetActiveRoot = false;
  *(undefined8 *)&this->OnBoundActionsUpdatedEvent = 0;
  *(undefined8 *)&(this->OnBoundActionsUpdatedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnBoundActionsUpdatedEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnActiveInputModeChangedEvent = 0;
  *(undefined8 *)&(this->OnActiveInputModeChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnActiveInputModeChangedEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnActivationMetadataChangedEvent = 0;
  *(undefined8 *)&(this->OnActivationMetadataChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnActivationMetadataChangedEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnActiveInputConfigChangedEvent = 0;
  *(undefined8 *)&(this->OnActiveInputConfigChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnActiveInputConfigChangedEvent).field_0x10 = 0;
  (this->HeldKeys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HeldKeys).ArrayNum = 0;
  (this->HeldKeys).ArrayMax = 0;
  *(undefined8 *)&this->ActionDomainRootNodes = 0;
  *(undefined8 *)&(this->ActionDomainRootNodes).field_0x8 = 0;
  *(undefined8 *)&(this->ActionDomainRootNodes).field_0x20 = 0;
  *(undefined8 *)&(this->OnBoundActionsUpdatedEvent).field_0x18 = 2;
  *(undefined8 *)&(this->OnActiveInputModeChangedEvent).field_0x18 = 2;
  *(undefined8 *)&(this->OnActivationMetadataChangedEvent).field_0x18 = 2;
  *(undefined8 *)&(this->OnActiveInputConfigChangedEvent).field_0x18 = 2;
  *(undefined4 *)&(this->ActionDomainRootNodes).field_0x28 = 0;
  *(undefined4 *)&(this->ActionDomainRootNodes).field_0x2c = 0x80;
  *(undefined4 *)&(this->ActionDomainRootNodes).field_0x34 = 0;
  *(undefined4 *)&(this->ActionDomainRootNodes).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ActionDomainRootNodes).field_0x40 = 0;
  *(undefined4 *)&(this->ActionDomainRootNodes).field_0x48 = 0;
  if ((this->_padding_ & 0x10) == 0) {
    TMulticastDelegateRegistration<void___cdecl(AHUD_*,UCanvas_*,FDebugDisplayInfo_const_&,float_&,float_&),FDefaultTSDelegateUserPolicy>
    ::AddUObject<UCommonUIActionRouterBase>
              ((TMulticastDelegateRegistration<void___cdecl(AHUD_*,UCanvas_*,FDebugDisplayInfo_const_&,float_&,float_&),FDefaultTSDelegateUserPolicy>
                *)&AHUD::OnShowDebugInfo,(UCommonUIActionRouterBase *)(local_res8 + 1),
               (pmf_078feaf1)this);
    TMulticastDelegateRegistration<void___cdecl(TArray<FAutoCompleteCommand,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UCommonUIActionRouterBase>
              ((TMulticastDelegateRegistration<void___cdecl(TArray<FAutoCompleteCommand,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
                *)&UConsole::RegisterConsoleAutoCompleteEntries,
               (UCommonUIActionRouterBase *)(local_res8 + 2),(pmf_9eb5a73c)this);
  }
  return this;
}

// ~UCommonUIActionRouterBase @ 14a7b35a0

void __thiscall
UCommonUIActionRouterBase::~UCommonUIActionRouterBase(UCommonUIActionRouterBase *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  ForElementType<FSetElementId> FVar5;
  TReferenceControllerBase<1> *pTVar6;
  
  this->_padding_ = (longlong)&___7UCommonUIActionRouterBase__6B_;
  *(undefined4 *)&(this->ActionDomainRootNodes).field_0x48 = 0;
  pvVar3 = *(void **)&(this->ActionDomainRootNodes).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ActionDomainRootNodes);
  DestructItems<FKey,int>((FKey *)(this->HeldKeys).AllocatorInstance.Data,(this->HeldKeys).ArrayNum)
  ;
  pFVar4 = (this->HeldKeys).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnActiveInputConfigChangedEvent).field_0x8,
             *(int *)&(this->OnActiveInputConfigChangedEvent).field_0x10);
  pvVar3 = *(void **)&(this->OnActiveInputConfigChangedEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnActiveInputConfigChangedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnActivationMetadataChangedEvent).field_0x8,
             *(int *)&(this->OnActivationMetadataChangedEvent).field_0x10);
  pvVar3 = *(void **)&(this->OnActivationMetadataChangedEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnActivationMetadataChangedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnActiveInputModeChangedEvent).field_0x8,
             *(int *)&(this->OnActiveInputModeChangedEvent).field_0x10);
  pvVar3 = *(void **)&(this->OnActiveInputModeChangedEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnActiveInputModeChangedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnBoundActionsUpdatedEvent).field_0x8,
             *(int *)&(this->OnBoundActionsUpdatedEvent).field_0x10);
  pvVar3 = *(void **)&(this->OnBoundActionsUpdatedEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnBoundActionsUpdatedEvent);
  DestructItems<FString,int>
            ((FString *)(this->InputConfigSources).Elements.AllocatorInstance.Data,
             (this->InputConfigSources).Elements.ArrayNum);
  pFVar4 = (this->InputConfigSources).Elements.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PersistentActions).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ActiveRootNode).SharedReferenceCount.ReferenceController);
  DestructItems<TSharedRef<FActivatableTreeRoot,1>,int>
            ((TSharedRef<FActivatableTreeRoot,1> *)(this->RootNodes).AllocatorInstance.Data,
             (this->RootNodes).ArrayNum);
  pFVar4 = (this->RootNodes).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  (this->ActiveActionDomainRootsPendingPaint).HashSize = 0;
  FVar5 = (this->ActiveActionDomainRootsPendingPaint).Hash.SecondaryData;
  if (FVar5 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  TSparseArray<TSparseSetElement<TWeakPtr<FActivatableTreeRoot,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TWeakPtr<FActivatableTreeRoot,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ActiveActionDomainRootsPendingPaint).Elements);
  pFVar4 = (this->RebuiltWidgetsPendingNodeAssignment).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DestructItems<UCommonUIActionRouterBase::FPendingWidgetRegistration,int>
            ((FPendingWidgetRegistration *)(this->PendingWidgetRegistrations).AllocatorInstance.Data
             ,(this->PendingWidgetRegistrations).ArrayNum);
  pFVar4 = (this->PendingWidgetRegistrations).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pTVar6 = (this->TickHandle).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar6->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AnalogCursor).SharedReferenceCount.ReferenceController);
  ULocalPlayerSubsystem::~ULocalPlayerSubsystem((ULocalPlayerSubsystem *)this);
  return;
}

// operator() @ 14a7b5e00

EProcessHoldActionResult __thiscall
`UCommonUIActionRouterBase::FlushInput'::__l2::<lambda_1>::operator()
          (void *this,UCommonUIActionRouterBase *param_1,FKey *param_2)

{
  undefined4 uVar1;
  int iVar2;
  FPersistentActionCollection *pFVar3;
  code *pcVar4;
  bool bVar5;
  EProcessHoldActionResult EVar6;
  FActivatableTreeRoot *pFVar7;
  FName local_58;
  FKeyDetails *local_50;
  TReferenceControllerBase<1> *local_48;
  FName local_40;
  FKeyDetails *local_38;
  TReferenceControllerBase<1> *local_30;
  FKey local_28;
  
  if (((param_1->PersistentActions).Object == (FPersistentActionCollection *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    EVar6 = (*pcVar4)();
    return EVar6;
  }
  pFVar3 = (param_1->PersistentActions).Object;
  uVar1 = *(undefined4 *)((longlong)this + 4);
  pcVar4 = *(code **)(*(longlong *)pFVar3 + 8);
  local_58 = param_2->KeyName;
  local_50 = (param_2->KeyDetails).Object;
  local_48 = (param_2->KeyDetails).SharedReferenceCount.ReferenceController;
  if (local_48 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_48->SharedReferenceCount = (atomic<int>)((int)local_48->SharedReferenceCount + 1);
    UNLOCK();
  }
  EVar6 = (*pcVar4)(pFVar3,*(undefined1 *)this,&local_58,1,uVar1);
  if ((param_1->bIsActivatableTreeEnabled != false) && (EVar6 == Unhandled)) {
    if ((param_1->ActiveRootNode).Object != (FActivatableTreeRoot *)0x0) {
      pFVar7 = TSharedPtr<FActivatableTreeRoot,1>::operator->(&param_1->ActiveRootNode);
      uVar1 = *(undefined4 *)((longlong)this + 4);
      pcVar4 = *(code **)(pFVar7->_padding_ + 8);
      local_40 = param_2->KeyName;
      local_38 = (param_2->KeyDetails).Object;
      local_30 = (param_2->KeyDetails).SharedReferenceCount.ReferenceController;
      if (local_30 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
        UNLOCK();
      }
      EVar6 = (*pcVar4)(pFVar7,*(undefined1 *)this,&local_40,1,uVar1);
      if (EVar6 != Unhandled) {
        return EVar6;
      }
    }
    local_28.KeyName = param_2->KeyName;
    iVar2 = *(int *)((longlong)this + 4);
    local_28.KeyDetails.Object = (param_2->KeyDetails).Object;
    local_28.KeyDetails.SharedReferenceCount.ReferenceController =
         (param_2->KeyDetails).SharedReferenceCount.ReferenceController;
    if (local_28.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    EVar6 = UCommonUIActionRouterBase::ProcessHoldInputOnActionDomains
                      (param_1,*(ECommonInputMode *)this,&local_28,IE_Released,iVar2);
  }
  return EVar6;
}

// operator() @ 14a7b6160

EProcessHoldActionResult __thiscall
`UCommonUIActionRouterBase::ProcessInput'::__l2::<lambda_1>::operator()
          (void *this,UCommonUIActionRouterBase *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  EInputEvent EVar4;
  FPersistentActionCollection *pFVar5;
  code *pcVar6;
  bool bVar7;
  EProcessHoldActionResult EVar8;
  FActivatableTreeRoot *pFVar9;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  FKey local_28;
  
  if (((param_1->PersistentActions).Object == (FPersistentActionCollection *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    EVar8 = (*pcVar6)();
    return EVar8;
  }
  pFVar5 = (param_1->PersistentActions).Object;
  uVar1 = *(undefined4 *)((longlong)this + 0x24);
  uVar2 = *(undefined4 *)((longlong)this + 0x20);
  pcVar6 = *(code **)(*(longlong *)pFVar5 + 8);
  local_58 = *(undefined8 *)((longlong)this + 8);
  local_50 = *(undefined8 *)((longlong)this + 0x10);
  local_48 = *(longlong *)((longlong)this + 0x18);
  if (local_48 != 0) {
    LOCK();
    *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
    UNLOCK();
  }
  EVar8 = (*pcVar6)(pFVar5,*(undefined1 *)this,&local_58,uVar2,uVar1);
  if ((EVar8 == Unhandled) && (param_1->bIsActivatableTreeEnabled != false)) {
    if ((param_1->ActiveRootNode).Object != (FActivatableTreeRoot *)0x0) {
      pFVar9 = TSharedPtr<FActivatableTreeRoot,1>::operator->(&param_1->ActiveRootNode);
      uVar1 = *(undefined4 *)((longlong)this + 0x24);
      uVar2 = *(undefined4 *)((longlong)this + 0x20);
      pcVar6 = *(code **)(pFVar9->_padding_ + 8);
      local_40 = *(undefined8 *)((longlong)this + 8);
      local_38 = *(undefined8 *)((longlong)this + 0x10);
      local_30 = *(longlong *)((longlong)this + 0x18);
      if (local_30 != 0) {
        LOCK();
        *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
        UNLOCK();
      }
      EVar8 = (*pcVar6)(pFVar9,*(undefined1 *)this,&local_40,uVar2,uVar1);
      if (EVar8 != Unhandled) {
        return EVar8;
      }
    }
    local_28.KeyName = *(FName *)((longlong)this + 8);
    iVar3 = *(int *)((longlong)this + 0x24);
    EVar4 = *(EInputEvent *)((longlong)this + 0x20);
    local_28.KeyDetails.Object = *(FKeyDetails **)((longlong)this + 0x10);
    local_28.KeyDetails.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)((longlong)this + 0x18);
    if (local_28.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    EVar8 = UCommonUIActionRouterBase::ProcessHoldInputOnActionDomains
                      (param_1,*(ECommonInputMode *)this,&local_28,EVar4,iVar3);
  }
  return EVar8;
}

// operator() @ 14a7b6bd0

bool __thiscall
`UCommonUIActionRouterBase::ProcessInput'::__l2::<lambda_2>::operator()
          (void *this,UCommonUIActionRouterBase *param_1,EInputEvent param_2)

{
  undefined4 uVar1;
  int iVar2;
  FPersistentActionCollection *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  FActivatableTreeRoot *pFVar8;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  FKey local_28;
  
  if (((param_1->PersistentActions).Object == (FPersistentActionCollection *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pFVar3 = (param_1->PersistentActions).Object;
  uVar1 = *(undefined4 *)((longlong)this + 0x1c);
  pcVar4 = *(code **)(*(longlong *)pFVar3 + 0x10);
  local_58 = *(undefined8 *)this;
  local_50 = *(undefined8 *)((longlong)this + 8);
  local_48 = *(longlong *)((longlong)this + 0x10);
  if (local_48 != 0) {
    LOCK();
    *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
    UNLOCK();
  }
  cVar7 = (*pcVar4)(pFVar3,*(undefined1 *)((longlong)this + 0x18),&local_58,param_2,uVar1);
  if ((cVar7 == '\0') && (param_1->bIsActivatableTreeEnabled != false)) {
    if ((param_1->ActiveRootNode).Object != (FActivatableTreeRoot *)0x0) {
      pFVar8 = TSharedPtr<FActivatableTreeRoot,1>::operator->(&param_1->ActiveRootNode);
      uVar1 = *(undefined4 *)((longlong)this + 0x1c);
      pcVar4 = *(code **)(pFVar8->_padding_ + 0x10);
      local_40 = *(undefined8 *)this;
      local_38 = *(undefined8 *)((longlong)this + 8);
      local_30 = *(longlong *)((longlong)this + 0x10);
      if (local_30 != 0) {
        LOCK();
        *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
        UNLOCK();
      }
      cVar7 = (*pcVar4)(pFVar8,*(undefined1 *)((longlong)this + 0x18),&local_40,param_2,uVar1);
      if (cVar7 != '\0') {
        return (bool)cVar7;
      }
    }
    local_28.KeyName = *(FName *)this;
    iVar2 = *(int *)((longlong)this + 0x1c);
    local_28.KeyDetails.Object = *(FKeyDetails **)((longlong)this + 8);
    local_28.KeyDetails.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
    if (local_28.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    cVar7 = UCommonUIActionRouterBase::ProcessInputOnActionDomains
                      (param_1,*(ECommonInputMode *)((longlong)this + 0x18),&local_28,param_2,iVar2)
    ;
  }
  return (bool)cVar7;
}

// operator() @ 14a7b72b0

bool __thiscall
`UCommonUIActionRouterBase::ProcessInput'::__l2::<lambda_3>::operator()
          (void *this,UCommonUIActionRouterBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  EProcessHoldActionResult EVar4;
  FKey *pFVar5;
  FKey local_28;
  
  EVar4 = __l2::<lambda_1>::operator()(*(void **)this,param_1);
  if (EVar4 == Handled) {
    return true;
  }
  if (EVar4 == GeneratePress) {
    bVar2 = __l2::<lambda_2>::operator()(*(void **)((longlong)this + 8),param_1,IE_Pressed);
    if (!bVar2) {
      pFVar5 = FKey::GetVirtualKey(&EKeys::Virtual_Gamepad_Accept,&local_28);
      if ((**(FName **)((longlong)this + 0x10) == pFVar5->KeyName) &&
         ((param_1->AnalogCursor).Object != (FCommonAnalogCursor *)0x0)) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_28.KeyDetails.SharedReferenceCount.ReferenceController);
        if ((param_1->AnalogCursor).Object == (FCommonAnalogCursor *)0x0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
        }
        FCommonAnalogCursor::OnVirtualAcceptHoldCanceled((param_1->AnalogCursor).Object);
      }
      else {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_28.KeyDetails.SharedReferenceCount.ReferenceController);
      }
    }
  }
  bVar2 = __l2::<lambda_2>::operator()
                    (*(void **)((longlong)this + 8),param_1,*(EInputEvent *)((longlong)this + 0x18))
  ;
  return bVar2;
}

// AddBinding @ 14a7bdf20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCommonUIActionRouterBase::AddBinding
          (UCommonUIActionRouterBase *this,FUIActionBindingHandle *param_1)

{
  SWidget *pSVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  UWidget *this_00;
  FActionRouterBindingCollection *this_01;
  TSharedPtr<SWidget,1> *pTVar5;
  FPendingWidgetRegistration *pFVar6;
  TSharedPtr<FUIActionBinding,1> local_58;
  TSharedPtr<FActivatableTreeNode,1> local_48;
  TSharedPtr<SWidget,1> local_38;
  FUIActionBindingHandle local_28;
  
  ::FString::FString(&local_28.CachedDebugActionName,&param_1->CachedDebugActionName);
  local_28.RegistrationId = param_1->RegistrationId;
  FUIActionBinding::FindBinding(&local_58,&local_28);
  if (local_58.Object != (FUIActionBinding *)0x0) {
    if ((local_58.Object == (FUIActionBinding *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    this_00 = (UWidget *)FWeakObjectPtr::Get(&((local_58.Object)->BoundWidget).WeakPtr);
    if (this_00 != (UWidget *)0x0) {
      FindOwningNode(this,&local_48,this_00);
      if (local_48.Object == (FActivatableTreeNode *)0x0) {
        pTVar5 = UWidget::GetCachedWidget(this_00,&local_38);
        pSVar1 = pTVar5->Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_38.SharedReferenceCount.ReferenceController);
        if (pSVar1 != (SWidget *)0x0) {
          pFVar6 = GetOrCreatePendingRegistration(this,this_00);
          TArray<FUIActionBindingHandle,TSizedDefaultAllocator<32>_>::
          AddUniqueImpl<FUIActionBindingHandle_const_&>(&pFVar6->ActionBindings,param_1);
        }
      }
      else {
        if ((local_58.Object == (FUIActionBinding *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((local_58.Object)->bIsPersistent == false) {
          if ((local_48.Object == (FActivatableTreeNode *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((local_58.Object == (FUIActionBinding *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x44d,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FActionRouterBindingCollection::AddBinding
                    ((FActionRouterBindingCollection *)local_48.Object,local_58.Object);
        }
        else {
          this_01 = (FActionRouterBindingCollection *)
                    TSharedPtr<FPersistentActionCollection,1>::operator->(&this->PersistentActions);
          FActionRouterBindingCollection::AddBinding(this_01,local_58.Object);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  pFVar2 = (param_1->CachedDebugActionName).Data.AllocatorInstance.Data;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar2);
  return;
}

// ApplyUIInputConfig @ 14a7bf670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UCommonUIActionRouterBase::ApplyUIInputConfig
          (UCommonUIActionRouterBase *this,FUIInputConfig *param_1,bool param_2)

{
  TOptional<FUIInputConfig> *pTVar1;
  atomic<int> *paVar2;
  undefined1 *puVar3;
  atomic<int> aVar4;
  EMouseCaptureMode EVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  TReferenceControllerBase<1> *pTVar8;
  longlong lVar9;
  longlong *plVar10;
  code *pcVar11;
  ECommonInputMode EVar12;
  SViewport *pSVar13;
  FSharedReferencer<1> FVar14;
  FSharedReferencer<1> FVar15;
  bool bVar16;
  bool bVar17;
  char cVar18;
  char cVar19;
  ECommonInputType EVar20;
  atomic<int> aVar21;
  uint uVar22;
  UEnum *pUVar23;
  ULocalPlayer *pUVar24;
  UWorld *pUVar25;
  APlayerController *this_00;
  FTimerManager *this_01;
  UCommonInputSubsystem *this_02;
  UEnhancedInputLocalPlayerSubsystem *pUVar26;
  FName *pFVar27;
  FName *pFVar28;
  uint uVar29;
  TReferenceControllerBase<1> *pTVar30;
  FReply *this_03;
  ECommonInputMode EVar31;
  longlong lVar32;
  TReferenceControllerBase<1> *pTVar33;
  UGameViewportClient *this_04;
  undefined1 auStackY_258 [32];
  byte local_225;
  byte local_224 [4];
  float local_220;
  float fStack_21c;
  TSharedPtr<SViewport,1> local_218;
  undefined4 local_208;
  undefined2 local_204;
  undefined4 local_1f8;
  undefined2 local_1f4;
  FGameplayTagContainer local_1f0;
  FGameplayTagContainer local_1d0;
  float local_1b0;
  float local_1ac;
  ULocalPlayer *local_1a8;
  TSharedRef<SWidget,1> local_1a0;
  FSlateUser *local_190;
  TReferenceControllerBase<1> *local_188;
  FName local_180;
  FName local_178;
  FName local_170;
  FName local_168;
  FName local_160;
  FName local_158;
  FUIInputConfig *local_150;
  FName local_148;
  FName local_140;
  UGameViewportClient *local_138;
  FString local_130;
  FString local_120;
  TSharedRef<SWidget,1> local_110;
  FName local_100;
  FName local_f8;
  TSharedRef<SWidget,1> local_f0;
  TSharedRef<SWidget,1> local_e0;
  FDestructionSentinel local_d0;
  FDestructionSentinel local_b8;
  undefined1 local_a0 [40];
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  FSharedReferencer<1> local_60;
  
  pFVar28 = &local_158;
  local_60.ReferenceController =
       (TReferenceControllerBase<1> *)(__security_cookie.value ^ (ulonglong)auStackY_258);
  bVar17 = false;
  local_208 = 0;
  local_150 = param_1;
  if (!param_2) {
    if (((this->ActiveInputConfig).bIsSet == false) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar16)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if (((((param_1->bIgnoreMoveInput == (this->ActiveInputConfig).TypedValue.bIgnoreMoveInput) &&
          (param_1->bIgnoreLookInput == (this->ActiveInputConfig).TypedValue.bIgnoreLookInput)) &&
         (param_1->InputMode == (this->ActiveInputConfig).TypedValue.InputMode)) &&
        ((param_1->MouseCaptureMode == (this->ActiveInputConfig).TypedValue.MouseCaptureMode &&
         (param_1->MouseLockMode == (this->ActiveInputConfig).TypedValue.MouseLockMode)))) &&
       (param_1->bHideCursorDuringViewportCapture ==
        (this->ActiveInputConfig).TypedValue.bHideCursorDuringViewportCapture)) {
      return;
    }
  }
  if (3 < (byte)LogUIActionRouter._0_1_) {
    GetLocalPlayerIndex(this);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogUIActionRouter);
    if (3 < (byte)LogUIActionRouter._0_1_) {
      StaticEnum<enum_ECommonInputMode>();
      pUVar23 = StaticEnum<enum_ECommonInputMode>();
      if ((pUVar23 == (UEnum *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("EnumClass != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                              ,0xca4,L""), bVar16)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      UEnum::GetNameByValue(pUVar23,(long64)&local_148);
      ::FName::ToString(&local_148,&local_120);
      if ((this->ActiveInputConfig).bIsSet != false) {
        StaticEnum<enum_ECommonInputMode>();
        if (((this->ActiveInputConfig).bIsSet == false) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar17)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pUVar23 = StaticEnum<enum_ECommonInputMode>();
        if ((pUVar23 == (UEnum *)0x0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("EnumClass != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                ,0xca4,L""), bVar17)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        UEnum::GetNameByValue(pUVar23,(long64)&local_140);
        ::FName::ToString(&local_140,&local_130);
        bVar17 = true;
      }
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogUIActionRouter);
      if ((bVar17) && (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
    }
  }
  bVar17 = (this->ActiveInputConfig).bIsSet;
  pTVar1 = &this->ActiveInputConfig;
  if (bVar17 == false) {
    EVar31 = All;
  }
  else {
    local_1f8._0_1_ = (pTVar1->TypedValue).bIgnoreMoveInput;
    local_1f8._1_1_ = (pTVar1->TypedValue).bIgnoreLookInput;
    local_1f8._2_1_ = (pTVar1->TypedValue).InputMode;
    local_1f8._3_1_ = (pTVar1->TypedValue).MouseCaptureMode;
    EVar31 = (this->ActiveInputConfig).TypedValue.InputMode;
    local_1f4._0_1_ = (this->ActiveInputConfig).TypedValue.MouseLockMode;
    local_1f4._1_1_ = (this->ActiveInputConfig).TypedValue.bHideCursorDuringViewportCapture;
  }
  if ((TOptional<FUIInputConfig> *)param_1 != pTVar1) {
    bVar16 = param_1->bIgnoreLookInput;
    EVar12 = param_1->InputMode;
    EVar5 = param_1->MouseCaptureMode;
    (pTVar1->TypedValue).bIgnoreMoveInput = param_1->bIgnoreMoveInput;
    (pTVar1->TypedValue).bIgnoreLookInput = bVar16;
    (pTVar1->TypedValue).InputMode = EVar12;
    (pTVar1->TypedValue).MouseCaptureMode = EVar5;
    bVar16 = param_1->bHideCursorDuringViewportCapture;
    (this->ActiveInputConfig).TypedValue.MouseLockMode = param_1->MouseLockMode;
    (this->ActiveInputConfig).TypedValue.bHideCursorDuringViewportCapture = bVar16;
    (this->ActiveInputConfig).bIsSet = true;
  }
  pUVar24 = CastChecked<ULocalPlayer,UObject>((UObject *)this->_padding_);
  this_04 = (pUVar24->ViewportClient).field0_0x0.DebugPtr;
  local_1a8 = pUVar24;
  local_138 = this_04;
  if (this_04 == (UGameViewportClient *)0x0) {
    if (2 < (byte)LogUIActionRouter._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogUIActionRouter);
    }
  }
  else {
    UGameViewportClient::GetGameViewportWidget(this_04,&local_218);
    if (local_218.Object == (SViewport *)0x0) {
      if (2 < (byte)LogUIActionRouter._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogUIActionRouter);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_218.SharedReferenceCount.ReferenceController);
        goto LAB_14a7c001c;
      }
    }
    else {
      pUVar25 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
      this_00 = UPlayer::GetPlayerController((UPlayer *)pUVar24,pUVar25);
      if (this_00 == (APlayerController *)0x0) {
        if (2 < (byte)LogUIActionRouter._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogUIActionRouter);
        }
      }
      else {
        if ((((bVar17 == false) || ((bool)(char)local_1f8 != param_1->bIgnoreMoveInput)) &&
            ((**(code **)(this_00->_padding_ + 0x858))(this_00,param_1->bIgnoreMoveInput),
            bVar17 == false)) || ((bool)local_1f8._1_1_ != param_1->bIgnoreLookInput)) {
          (**(code **)(this_00->_padding_ + 0x870))(this_00,param_1->bIgnoreLookInput);
        }
        if (((bAutoFlushPressedKeys != false) && (param_1->InputMode == Menu)) && (EVar31 != Menu))
        {
          pUVar25 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
          this_01 = UWorld::GetTimerManager(pUVar25);
          FTimerManager::SetTimerForNextTick<UCommonUIActionRouterBase>
                    (this_01,(UCommonUIActionRouterBase *)local_a0,(pmf_9a3b216f)this);
        }
        cVar18 = (**(code **)(this_00->_padding_ + 0xf08))(this_00);
        UGameViewportClient::SetMouseCaptureMode(this_04,param_1->MouseCaptureMode);
        if ((param_1->bHideCursorDuringViewportCapture == false) ||
           (bVar17 = ShouldAlwaysShowCursor(this), bVar17)) {
          bVar17 = false;
        }
        else {
          bVar17 = true;
        }
        UGameViewportClient::SetHideCursorDuringCapture(this_04,bVar17);
        UGameViewportClient::SetMouseLockMode(this_04,param_1->MouseLockMode);
        EVar5 = param_1->MouseCaptureMode;
        this_03 = &pUVar24->SlateOperations;
        if (EVar5 == NoCapture) {
LAB_14a7bfa7e:
          APlayerController::SetShowMouseCursor(this_00,true);
          FReply::ReleaseMouseCapture(this_03);
          cVar19 = (**(code **)(this_04->_padding_ + 0x1b0))(&this_04->_padding_);
          if (cVar19 == '\0') {
            FReply::ReleaseMouseLock(this_03);
          }
          else {
            if ((local_218.Object == (SViewport *)0x0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x408,L""), bVar17)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            FVar14.ReferenceController = local_218.SharedReferenceCount.ReferenceController;
            if (local_218.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_218.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_218.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            if ((local_218.Object == (SViewport *)0x0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x25d,L""), bVar17)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            local_f0.Object = (SWidget *)local_218.Object;
            local_f0.SharedReferenceCount.ReferenceController = FVar14.ReferenceController;
            if (FVar14.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (FVar14.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)(FVar14.ReferenceController)->SharedReferenceCount + 1);
              UNLOCK();
            }
            FReply::LockMouseToWidget(this_03,&local_f0);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar14.ReferenceController);
          }
        }
        else if ((EVar5 == CapturePermanently) ||
                (EVar5 == CapturePermanently_IncludingInitialMouseDown)) {
          bVar17 = ShouldAlwaysShowCursor(this);
          if ((bVar17) || (param_1->bHideCursorDuringViewportCapture == false)) {
            bVar17 = true;
          }
          else {
            bVar17 = false;
          }
          APlayerController::SetShowMouseCursor(this_00,bVar17);
          if ((local_218.Object == (SViewport *)0x0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x408,L""), bVar17)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          FVar14.ReferenceController = local_218.SharedReferenceCount.ReferenceController;
          pSVar13 = local_218.Object;
          if (local_218.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_218.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_218.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          if ((local_218.Object == (SViewport *)0x0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x25d,L""), bVar17)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          if (FVar14.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FVar14.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FVar14.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          (pUVar24->SlateOperations).MouseCaptor.Object = (SWidget *)pSVar13;
          if (FVar14.ReferenceController !=
              (pUVar24->SlateOperations).MouseCaptor.WeakReferenceCount.ReferenceController) {
            if (FVar14.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (FVar14.ReferenceController)->WeakReferenceCount =
                   (atomic<int>)((int)(FVar14.ReferenceController)->WeakReferenceCount + 1);
              UNLOCK();
            }
            pTVar8 = (pUVar24->SlateOperations).MouseCaptor.WeakReferenceCount.ReferenceController;
            if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              paVar2 = &pTVar8->WeakReferenceCount;
              aVar4 = *paVar2;
              *paVar2 = (atomic<int>)((int)*paVar2 + -1);
              UNLOCK();
              if (aVar4 == (atomic<int>)0x1) {
                (**(code **)(pTVar8->_padding_ + 8))(pTVar8,1);
              }
            }
            (pUVar24->SlateOperations).MouseCaptor.WeakReferenceCount.ReferenceController =
                 FVar14.ReferenceController;
          }
          (pUVar24->SlateOperations).bUseHighPrecisionMouse = 1;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar14.ReferenceController);
          local_110.Object = (SWidget *)pSVar13;
          local_110.SharedReferenceCount.ReferenceController = FVar14.ReferenceController;
          if (FVar14.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
            FReply::SetUserFocus(this_03,&local_110,SetDirectly,false);
          }
          else {
            LOCK();
            (FVar14.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FVar14.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
            FReply::SetUserFocus(this_03,&local_110,SetDirectly,false);
            LOCK();
            (FVar14.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FVar14.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_1a0.SharedReferenceCount.ReferenceController = FVar14.ReferenceController;
          local_1a0.Object = (SWidget *)pSVar13;
          FReply::CaptureMouse(this_03,&local_1a0);
          cVar19 = (**(code **)(this_04->_padding_ + 0x1b0))(&this_04->_padding_);
          if (((cVar19 == '\0') &&
              (cVar19 = (**(code **)(this_04->_padding_ + 0x1a8))(&this_04->_padding_),
              cVar19 == '\0')) &&
             (cVar19 = (**(code **)(this_00->_padding_ + 0xf08))(this_00), cVar19 != '\0')) {
            FReply::ReleaseMouseLock(this_03);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar14.ReferenceController);
          }
          else {
            if ((local_218.Object == (SViewport *)0x0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x408,L""), bVar17)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            FVar15.ReferenceController = local_218.SharedReferenceCount.ReferenceController;
            if (local_218.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_218.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_218.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            if ((local_218.Object == (SViewport *)0x0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x25d,L""), bVar17)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            local_e0.Object = (SWidget *)local_218.Object;
            local_e0.SharedReferenceCount.ReferenceController = FVar15.ReferenceController;
            if (FVar15.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (FVar15.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)(FVar15.ReferenceController)->SharedReferenceCount + 1);
              UNLOCK();
            }
            FReply::LockMouseToWidget(this_03,&local_e0);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar15.ReferenceController);
            this_04 = local_138;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar14.ReferenceController);
          }
        }
        else if ((EVar5 == CaptureDuringMouseDown) || (EVar5 == CaptureDuringRightMouseDown))
        goto LAB_14a7bfa7e;
        if (((!param_2) && (cVar18 == '\0')) &&
           (cVar18 = (**(code **)(this_00->_padding_ + 0xf08))(this_00), cVar18 != '\0')) {
          this_02 = GetInputSubsystem(this);
          EVar20 = UCommonInputSubsystem::GetCurrentInputType(this_02);
          pUVar24 = local_1a8;
          if (EVar20 != Touch) {
            (**(code **)(local_1a8->_padding_ + 0x2d0))(local_1a8);
            pTVar8 = (this_04->GameLayerManagerPtr).WeakReferenceCount.ReferenceController;
            pTVar30 = pTVar8;
            pTVar33 = (TReferenceControllerBase<1> *)0x0;
            if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
              aVar4 = pTVar8->SharedReferenceCount;
              do {
                pTVar30 = (TReferenceControllerBase<1> *)0x0;
                pTVar33 = (TReferenceControllerBase<1> *)0x0;
                if (aVar4 == (atomic<int>)0x0) goto LAB_14a7bfde5;
                LOCK();
                aVar21 = pTVar8->SharedReferenceCount;
                bVar17 = aVar4 == aVar21;
                if (bVar17) {
                  pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
                  aVar21 = aVar4;
                }
                UNLOCK();
                aVar4 = aVar21;
              } while (!bVar17);
              pTVar30 = pTVar8;
              pTVar33 = (TReferenceControllerBase<1> *)(this_04->GameLayerManagerPtr).Object;
            }
LAB_14a7bfde5:
            if (local_190 == (FSlateUser *)0x0) {
              bVar17 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<2489800349741746025>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\CommonUIActionRouterBase.cpp"
                                  ,0x769,"SlateUser");
              if (bVar17) {
code_r0x00014a7bfe62:
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            else if (pTVar33 == (TReferenceControllerBase<1> *)0x0) {
              bVar17 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<2489800349741746025>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\CommonUIActionRouterBase.cpp"
                                  ,0x769,"GameLayerManager");
              if (bVar17) goto code_r0x00014a7bfe62;
            }
            else {
              (**(code **)(pTVar33->_padding_ + 0x18))(pTVar33,local_a0 + 8,pUVar24);
              local_220 = (float)local_a0._8_8_;
              fStack_21c = SUB84(local_a0._8_8_,4);
              local_1b0 = fStack_21c * __real_3f000000 * local_74 +
                          local_220 * __real_3f000000 * (float)local_a0._36_4_ + local_6c;
              local_1ac = fStack_21c * __real_3f000000 * local_70 +
                          local_220 * __real_3f000000 * local_78 + local_68;
              _local_220 = CONCAT44(local_1ac,local_1b0);
              if ((local_190 == (FSlateUser *)0x0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar17)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              FSlateUser::SetCursorPosition(local_190,(FDeprecateVector2DParameter *)&local_1b0);
              if (5 < (byte)LogUIActionRouter._0_1_) {
                UE::Logging::Private::BasicLog<6>
                          (&::LOG_Static,(FLogCategoryBase *)&LogUIActionRouter);
              }
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar30);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_188);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_218.SharedReferenceCount.ReferenceController);
            goto LAB_14a7c001c;
          }
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_218.SharedReferenceCount.ReferenceController);
  }
LAB_14a7c001c:
  if (EVar31 == param_1->InputMode) goto LAB_14a7c02b9;
  pUVar26 = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(local_1a8);
  if (pUVar26 != (UEnhancedInputLocalPlayerSubsystem *)0x0) {
    plVar10 = &pUVar26->_padding_;
    local_1f0.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1f0.GameplayTags.ArrayNum = 0;
    local_1f0.GameplayTags.ArrayMax = 0;
    local_1f0.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1f0.ParentTags.ArrayNum = 0;
    local_1f0.ParentTags.ArrayMax = 0;
    pcVar11 = *(code **)(*plVar10 + 200);
    local_225 = local_225 & 0xf9 | 1;
    if (EVar31 == Menu) {
      pFVar27 = &local_178;
      local_178 = TAG_InputModeMenu.InternalTag.TagName;
LAB_14a7c00cf:
      FGameplayTagContainer::AddTag(&local_1f0,(FGameplayTag *)pFVar27);
    }
    else {
      if (EVar31 == Game) {
        pFVar27 = &local_180;
        local_180 = TAG_InputModeGame.InternalTag.TagName;
        goto LAB_14a7c00cf;
      }
      if (EVar31 == All) {
        local_100 = TAG_InputModeGame.InternalTag.TagName;
        FGameplayTagContainer::AddTag(&local_1f0,(FGameplayTag *)&local_100);
        pFVar27 = &local_f8;
        local_f8 = TAG_InputModeMenu.InternalTag.TagName;
        goto LAB_14a7c00cf;
      }
    }
    (*pcVar11)(plVar10,&local_1f0,&local_225);
    if (local_1f0.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f0.ParentTags.AllocatorInstance.Data);
    }
    if (local_1f0.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f0.GameplayTags.AllocatorInstance.Data);
    }
    EVar31 = param_1->InputMode;
    local_1d0.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d0.GameplayTags.ArrayNum = 0;
    local_1d0.GameplayTags.ArrayMax = 0;
    pcVar11 = *(code **)(*plVar10 + 0xb8);
    local_1d0.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_224[0] = local_224[0] & 0xf9 | 1;
    local_1d0.ParentTags.ArrayNum = 0;
    local_1d0.ParentTags.ArrayMax = 0;
    if (EVar31 == Menu) {
      local_158 = TAG_InputModeMenu.InternalTag.TagName;
LAB_14a7c0192:
      FGameplayTagContainer::AddTag(&local_1d0,(FGameplayTag *)pFVar28);
    }
    else {
      if (EVar31 == Game) {
        pFVar28 = &local_160;
        local_160 = TAG_InputModeGame.InternalTag.TagName;
        goto LAB_14a7c0192;
      }
      if (EVar31 == All) {
        local_170 = TAG_InputModeGame.InternalTag.TagName;
        FGameplayTagContainer::AddTag(&local_1d0,(FGameplayTag *)&local_170);
        pFVar28 = &local_168;
        local_168 = TAG_InputModeMenu.InternalTag.TagName;
        goto LAB_14a7c0192;
      }
    }
    (*pcVar11)(plVar10,&local_1d0,local_224);
    if (local_1d0.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d0.ParentTags.AllocatorInstance.Data);
    }
    if (local_1d0.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d0.GameplayTags.AllocatorInstance.Data);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnActiveInputModeChangedEvent,(FWriteAccessScope *)&local_d0);
  puVar3 = &(this->OnActiveInputModeChangedEvent).field_0x1c;
  *(int *)puVar3 = *(int *)puVar3 + 1;
  bVar17 = false;
  uVar29 = *(int *)&(this->OnActiveInputModeChangedEvent).field_0x10 - 1;
  if (-1 < (int)uVar29) {
    lVar32 = (longlong)(int)uVar29 << 4;
    bVar17 = false;
    do {
      uVar22 = 0;
      if ((int)uVar29 < *(int *)&(this->OnActiveInputModeChangedEvent).field_0x10) {
        uVar22 = ~uVar29 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      lVar9 = *(longlong *)&(this->OnActiveInputModeChangedEvent).field_0x8;
      if (((*(int *)(lVar32 + 8 + lVar9) == 0) ||
          (plVar10 = *(longlong **)(lVar32 + lVar9), plVar10 == (longlong *)0x0)) ||
         (cVar18 = (**(code **)(*plVar10 + 0x68))(), cVar18 == '\0')) {
        bVar17 = true;
      }
      lVar32 = lVar32 + -0x10;
      uVar29 = uVar29 - 1;
      param_1 = local_150;
    } while (-1 < (int)uVar29);
  }
  puVar3 = &(this->OnActiveInputModeChangedEvent).field_0x1c;
  *(int *)puVar3 = *(int *)puVar3 + -1;
  if (bVar17) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnActiveInputModeChangedEvent,false);
  }
  if (local_d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
  }
LAB_14a7c02b9:
  uVar7._0_1_ = param_1->bIgnoreMoveInput;
  uVar7._1_1_ = param_1->bIgnoreLookInput;
  uVar7._2_1_ = param_1->InputMode;
  uVar7._3_1_ = param_1->MouseCaptureMode;
  uVar6._0_1_ = param_1->MouseLockMode;
  uVar6._1_1_ = param_1->bHideCursorDuringViewportCapture;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnActiveInputConfigChangedEvent,(FWriteAccessScope *)&local_b8);
  puVar3 = &(this->OnActiveInputConfigChangedEvent).field_0x1c;
  *(int *)puVar3 = *(int *)puVar3 + 1;
  bVar17 = false;
  uVar29 = *(int *)&(this->OnActiveInputConfigChangedEvent).field_0x10 - 1;
  if (-1 < (int)uVar29) {
    lVar32 = (longlong)(int)uVar29 << 4;
    bVar17 = false;
    do {
      uVar22 = 0;
      if ((int)uVar29 < *(int *)&(this->OnActiveInputConfigChangedEvent).field_0x10) {
        uVar22 = ~uVar29 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      lVar9 = *(longlong *)&(this->OnActiveInputConfigChangedEvent).field_0x8;
      if (((*(int *)(lVar32 + 8 + lVar9) == 0) ||
          (plVar10 = *(longlong **)(lVar32 + lVar9), plVar10 == (longlong *)0x0)) ||
         (local_208 = uVar7, local_204 = uVar6, cVar18 = (**(code **)(*plVar10 + 0x68))(),
         cVar18 == '\0')) {
        bVar17 = true;
      }
      lVar32 = lVar32 + -0x10;
      uVar29 = uVar29 - 1;
    } while (-1 < (int)uVar29);
  }
  puVar3 = &(this->OnActiveInputConfigChangedEvent).field_0x1c;
  *(int *)puVar3 = *(int *)puVar3 + -1;
  if (bVar17) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnActiveInputConfigChangedEvent,false);
  }
  if (local_b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
  }
  return;
}

// AssembleTreeRecursive @ 14a7c0550

void __thiscall
UCommonUIActionRouterBase::AssembleTreeRecursive
          (UCommonUIActionRouterBase *this,TSharedRef<FActivatableTreeNode,1> *param_1,
          TMap<UCommonActivatableWidget_*,TArray<UCommonActivatableWidget_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UCommonActivatableWidget_*,TArray<UCommonActivatableWidget_*,TSizedDefaultAllocator<32>_>,0>_>
          *param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  UCommonActivatableWidget *pUVar3;
  ForAnyElementType FVar4;
  TArray<UCommonActivatableWidget_*,TSizedDefaultAllocator<32>_> local_28;
  TSharedRef<FActivatableTreeNode,1> local_18;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  pUVar3 = (UCommonActivatableWidget *)
           FWeakObjectPtr::Get(&(param_1->Object->RepresentedWidget).WeakPtr);
  bVar2 = TMap<UCommonActivatableWidget_*,TArray<UCommonActivatableWidget_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UCommonActivatableWidget_*,TArray<UCommonActivatableWidget_*,TSizedDefaultAllocator<32>_>,0>_>
          ::RemoveAndCopyValue(param_2,pUVar3,&local_28);
  if (bVar2) {
    pFVar1 = local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 8;
    for (FVar4.Data = local_28.AllocatorInstance.Data; FVar4.Data != pFVar1;
        FVar4.Data = FVar4.Data + 8) {
      FActivatableTreeNode::AddChildNode
                (param_1->Object,&local_18,*(UCommonActivatableWidget **)FVar4.Data);
      AssembleTreeRecursive(this,&local_18,param_2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
  }
  if (local_28.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(local_28.AllocatorInstance.Data);
  return;
}

// CanProcessNormalGameInput @ 14a7c3ad0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UCommonUIActionRouterBase::CanProcessNormalGameInput(UCommonUIActionRouterBase *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  int iVar5;
  ULocalPlayer *pUVar6;
  FSlateApplication *this_00;
  TSharedPtr<SViewport,1> *pTVar7;
  TSharedPtr<FSlateUser,1> local_38;
  TSharedPtr<SWidget_const_,1> local_28;
  TSharedPtr<SViewport,1> local_18;
  
  bVar2 = false;
  if (((this->ActiveInputConfig).bIsSet == false) ||
     ((this->ActiveInputConfig).TypedValue.InputMode != Menu)) {
    return true;
  }
  pUVar6 = CastChecked<ULocalPlayer,UObject>((UObject *)this->_padding_);
  this_00 = FSlateApplication::Get();
  iVar5 = GetLocalPlayerIndex(this);
  FSlateApplication::GetUser(this_00,&local_38,iVar5);
  if (local_38.Object == (FSlateUser *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    return true;
  }
  if ((pUVar6->ViewportClient).field0_0x0.DebugPtr != (UGameViewportClient *)0x0) {
    if ((local_38.Object == (FSlateUser *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    pTVar7 = UGameViewportClient::GetGameViewportWidget
                       ((pUVar6->ViewportClient).field0_0x0.DebugPtr,&local_18);
    local_28.Object = (SWidget *)pTVar7->Object;
    local_28.SharedReferenceCount.ReferenceController =
         (pTVar7->SharedReferenceCount).ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar2 = true;
    bVar4 = FSlateUser::DoesWidgetHaveCursorCapture(local_38.Object,&local_28);
    if (bVar4) {
      bVar4 = true;
      goto LAB_14a7c3bbc;
    }
  }
  bVar4 = false;
LAB_14a7c3bbc:
  if (bVar2) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return bVar4;
}

// DebugDumpActionDomainRootNodes @ 14a7d2570

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCommonUIActionRouterBase::DebugDumpActionDomainRootNodes
          (UCommonUIActionRouterBase *this,int param_1,int param_2,bool param_3,bool param_4,
          bool param_5)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  TMap<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,0>_>
  *pTVar5;
  bool bVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  int iVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined1 *puVar15;
  uint *puVar16;
  longlong *plVar17;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  undefined1 local_f8 [4];
  uint local_f4;
  FString local_f0;
  TMap<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,0>_>
  *local_e0;
  int iStack_d8;
  uint uStack_d4;
  undefined1 *local_d0;
  undefined4 uStack_c8;
  int iStack_c4;
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  int local_b0;
  TBitArray<FDefaultBitArrayAllocator> *local_a8;
  TMap<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,0>_>
  *local_a0;
  FName local_98;
  FString local_90;
  FString local_80;
  TMap<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,0>_>
  *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.Data.ArrayNum = 0;
  local_f0.Data.ArrayMax = 0;
  local_res10 = param_1;
  local_res18 = param_2;
  ::FString::AppendChars
            (&local_f0,L"******** Start Debugging ActionDomainRootNodes ********\n",0x38);
  puVar1 = &(this->ActionDomainRootNodes).field_0x10;
  iStack_d8 = 0;
  iVar14 = *(int *)&(this->ActionDomainRootNodes).field_0x28;
  local_e0 = &this->ActionDomainRootNodes;
  uStack_d4 = 1;
  local_c0 = 0;
  iStack_c4 = iStack_d8;
  if (iVar14 != 0) {
    puVar16 = *(uint **)&(this->ActionDomainRootNodes).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar12 = *puVar16;
    local_c0 = 0;
    iStack_d8 = 0;
    while (uVar12 == 0) {
      lVar7 = (longlong)iStack_d8;
      local_c0 = local_c0 + 0x20;
      iStack_d8 = iStack_d8 + 1;
      iStack_c4 = iVar14;
      if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_d8) goto LAB_14a7d264d;
      uVar12 = puVar16[lVar7 + 1];
    }
    uStack_d4 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uStack_d4 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_b0 = (int)lVar7;
    iStack_c4 = local_c0 + -1 + local_b0;
    if (iVar14 < iStack_c4) {
      iStack_c4 = iVar14;
    }
  }
LAB_14a7d264d:
  iStack_b8 = *(int *)&(this->ActionDomainRootNodes).field_0x8 -
              *(int *)&(this->ActionDomainRootNodes).field_0x34;
  uVar12 = *(uint *)&(this->ActionDomainRootNodes).field_0x28;
  uStack_c8 = 0xffffffff;
  TStack_68._padding_ = CONCAT44(uStack_d4,iStack_d8);
  uVar11 = uVar12 & 0xffffffe0;
  TStack_68.CurrentBitIndex = iStack_c4;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar9 = (int)uVar12 >> 5;
  TStack_68._28_4_ = iStack_c4;
  TStack_68.BaseBitIndex = local_c0;
  uStack_48 = CONCAT44(uStack_b4,iStack_b8);
  local_f4 = uVar12;
  local_d0 = puVar1;
  iStack_bc = iStack_c4;
  local_a8 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_a0 = local_e0;
  local_70 = local_e0;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar14 < (int)uVar12)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar3 = *(uint *)&(this->ActionDomainRootNodes).field_0x28;
  if (uVar12 != uVar3) {
    puVar15 = *(undefined1 **)&(this->ActionDomainRootNodes).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar9 * 4);
    while (uVar12 == 0) {
      lVar7 = (longlong)iVar9;
      uVar11 = uVar11 + 0x20;
      iVar9 = iVar9 + 1;
      uVar12 = uVar3;
      local_f4 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_14a7d2770;
      uVar12 = *(uint *)(puVar15 + lVar7 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar12 = (int)lVar7 + -1 + uVar11;
    local_f4 = uVar12;
    if ((int)uVar3 < (int)uVar12) {
      uVar12 = uVar3;
      local_f4 = uVar3;
    }
  }
LAB_14a7d2770:
  while( true ) {
    pTVar5 = local_70;
    if (*(int *)&local_70->field_0x8 - *(int *)&local_70->field_0x34 != (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_68.CurrentBitIndex == uVar12) && (TStack_68.Array == local_a8)) &&
       (pTVar5 == local_a0)) break;
    plVar17 = (longlong *)((longlong)TStack_68.CurrentBitIndex * 0x20 + *(longlong *)pTVar5);
    ::FString::AppendChars
              (&local_f0,L"\n****** Dumping ActionDomainRootNodes for ActionDomain: ",0x38);
    if (*plVar17 == 0) {
      ::FString::FString(&local_80,L"None");
    }
    else {
      local_98 = *(FName *)(*plVar17 + 0x18);
      ::FName::ToString(&local_98,&local_80);
    }
    ::FString::ConcatFC(&local_90,&local_80,L" ******\n");
    iVar14 = local_90.Data.ArrayNum + -1;
    if (local_90.Data.ArrayNum == 0) {
      iVar14 = 0;
    }
    ::FString::AppendChars(&local_f0,(wchar_t *)local_90.Data.AllocatorInstance.Data,iVar14);
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    iVar14 = (int)plVar17[2];
    if (iVar14 < 1) {
      pwVar8 = L"-No root nodes found\n";
      iVar14 = 0x15;
    }
    else {
      puVar10 = (undefined8 *)plVar17[1];
      puVar13 = puVar10 + (longlong)iVar14 * 2;
      while( true ) {
        if ((int)plVar17[2] != iVar14) {
          `TCheckedPointerIterator<TSharedRef<FActivatableTreeRoot,1>_const_,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_f8);
        }
        if (puVar10 == puVar13) break;
        FActivatableTreeNode::DebugDumpRecursive
                  ((FActivatableTreeNode *)*puVar10,&local_f0,0,param_3,param_4,param_5);
        puVar10 = puVar10 + 2;
      }
      pwVar8 = L"\n\n";
      iVar14 = 2;
    }
    ::FString::AppendChars(&local_f0,pwVar8,iVar14);
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
    uVar12 = local_f4;
  }
  ::FString::AppendChars
            (&local_f0,L"\n******** End Debugging ActionDomainRootNodes ********\n",0x37);
  if (3 < (byte)LogUIActionRouter._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogUIActionRouter);
  }
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  return;
}

// Deinitialize @ 14a7d2d30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCommonUIActionRouterBase::Deinitialize(UCommonUIActionRouterBase *this)

{
  int *piVar1;
  FSlateApplication *this_00;
  TSharedPtr<IInputProcessor,1> local_18;
  
  if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
    this_00 = FSlateApplication::Get();
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this_00->FocusChangingDelegate
               ,this);
    local_18.SharedReferenceCount.ReferenceController =
         (this->AnalogCursor).SharedReferenceCount.ReferenceController;
    local_18.Object = (IInputProcessor *)(this->AnalogCursor).Object;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FSlateApplication::UnregisterInputPreProcessor(this_00,&local_18);
  }
  local_18.Object = (IInputProcessor *)(this->TickHandle).Object;
  local_18.SharedReferenceCount.ReferenceController =
       (this->TickHandle).WeakReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  FTSTicker::RemoveTicker((TWeakPtr<FTSTicker::FElement,1> *)&local_18);
  local_18.Object = (IInputProcessor *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (**(code **)(this->_padding_ + 0x310))(this,&local_18);
  DestructItems<FKey,int>((FKey *)(this->HeldKeys).AllocatorInstance.Data,(this->HeldKeys).ArrayNum)
  ;
  piVar1 = &(this->HeldKeys).ArrayMax;
  (this->HeldKeys).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->HeldKeys).AllocatorInstance,0,piVar1);
  }
  return;
}

// FindActivatable @ 14a7dbb90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UCommonActivatableWidget * __cdecl
UCommonUIActionRouterBase::FindActivatable(TSharedPtr<SWidget,1> *param_1,ULocalPlayer *param_2)

{
  ULocalPlayer *pUVar1;
  UCommonActivatableWidget *pUVar2;
  TSharedRef<SWidget,1> *pTVar3;
  UCommonActivatableWidget *local_res8;
  TSharedPtr<SWidget,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  pUVar1 = (ULocalPlayer *)(param_1->SharedReferenceCount).ReferenceController;
  local_28.Object = param_1->Object;
  if (pUVar1 != (ULocalPlayer *)0x0) {
    LOCK();
    *(atomic<int> *)&pUVar1->_padding_ = (atomic<int>)((int)*(atomic<int> *)&pUVar1->_padding_ + 1);
    UNLOCK();
  }
  local_res8 = (UCommonActivatableWidget *)0x0;
  local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pUVar1;
  if (local_28.Object != (SWidget *)0x0) {
    pTVar3 = TSharedPtr<SWidget,1>::ToSharedRef(&local_28,&local_18);
    local_28.Object = (SWidget *)&local_res8;
    local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)param_2;
    UE::CommonUI::Private::
    ForEachParentWidget<0,_UE::CommonUI::Private::FindActivatableFromSlate<0>_::__l5::<lambda_1>_>
              (pTVar3,(<lambda_1> *)&local_28);
  }
  pUVar2 = local_res8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pUVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return pUVar2;
}

// FindActiveActionDomainRootNode @ 14a7dbdf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSharedPtr<FActivatableTreeRoot,1> * __thiscall
UCommonUIActionRouterBase::FindActiveActionDomainRootNode
          (UCommonUIActionRouterBase *this,
          TSharedPtr<FActivatableTreeRoot,1> *__return_storage_ptr__)

{
  uint uVar1;
  int iVar2;
  UCommonInputActionDomainTable *pUVar3;
  longlong lVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  char cVar7;
  bool bVar8;
  ULocalPlayer *this_00;
  UCommonInputSubsystem *pUVar9;
  FActionDomainSortedRootList *pFVar10;
  TSharedPtr<FActivatableTreeRoot,1> *pTVar11;
  UObject *pUVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  UObject *local_50;
  FScriptContainerElement *local_48;
  
  this_00 = CastChecked<ULocalPlayer,UObject>((UObject *)this->_padding_);
  pUVar9 = ULocalPlayer::GetSubsystem<UCommonInputSubsystem>(this_00);
  if ((pUVar9 != (UCommonInputSubsystem *)0x0) &&
     (pUVar3 = (pUVar9->ActionDomainTable).field0_0x0.DebugPtr,
     pUVar3 != (UCommonInputActionDomainTable *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    uVar1 = (pUVar3->ActionDomains).ArrayNum;
    uVar13 = (ulonglong)(int)uVar1;
    pFVar16 = (pUVar3->ActionDomains).AllocatorInstance.Data;
    local_48 = pFVar16 + uVar13 * 8;
    while( true ) {
      pFVar15 = local_48;
      if ((pUVar3->ActionDomains).ArrayNum != (int)uVar13) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UCommonInputActionDomain>_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res18);
      }
      if (pFVar16 == pFVar15) break;
      pUVar12 = *(UObject **)pFVar16;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar12);
      }
      local_50 = pUVar12;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar12);
      }
      pFVar10 = TMapBase<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,0>_>
                ::Find((TMapBase<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,0>_>
                        *)&this->ActionDomainRootNodes,
                       (TObjectPtr<UCommonInputActionDomain_const_>)&local_50);
      if (pFVar10 != (FActionDomainSortedRootList *)0x0) {
        iVar2 = (pFVar10->RootList).ArrayNum;
        pFVar15 = (pFVar10->RootList).AllocatorInstance.Data;
        pFVar14 = pFVar15 + (longlong)iVar2 * 0x10;
        while( true ) {
          if ((pFVar10->RootList).ArrayNum != iVar2) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<TSharedRef<FActivatableTreeRoot,1>_const_,int,0>::operator!='::
            __l2::<lambda_1>::operator()(local_res20);
          }
          if (pFVar15 == pFVar14) break;
          cVar7 = (**(code **)(**(longlong **)pFVar15 + 0x18))();
          if (cVar7 != '\0') {
            lVar4 = *(longlong *)pFVar15;
            bVar8 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar4 + 0x90));
            if (bVar8) {
              pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar4 + 0x90));
              if (pUVar12[0x19].field_0x1 != '\0') {
                __return_storage_ptr__->Object = *(FActivatableTreeRoot **)pFVar15;
                pTVar5 = *(TReferenceControllerBase<1> **)(pFVar15 + 8);
                (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
                if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
                  return __return_storage_ptr__;
                }
                LOCK();
                pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
                UNLOCK();
                return __return_storage_ptr__;
              }
            }
            else {
              bVar8 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<8809435093299889167>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\UIActionRouterTypes.cpp"
                                 ,0x40f,"RepresentedWidget.IsValid()");
              if (bVar8) {
                pcVar6 = (code *)swi(3);
                pTVar11 = (TSharedPtr<FActivatableTreeRoot,1> *)(*pcVar6)();
                return pTVar11;
              }
            }
          }
          pFVar15 = pFVar15 + 0x10;
        }
      }
      pFVar16 = pFVar16 + 8;
      uVar13 = (ulonglong)uVar1;
    }
  }
  __return_storage_ptr__->Object = (FActivatableTreeRoot *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// FindNode @ 14a7dc700

TSharedPtr<FActivatableTreeNode,1> * __thiscall
UCommonUIActionRouterBase::FindNode
          (UCommonUIActionRouterBase *this,
          TSharedPtr<FActivatableTreeNode,1> *__return_storage_ptr__,
          UCommonActivatableWidget *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  TReferenceControllerBase<1> *pTVar5;
  FActivatableTreeNode *pFVar6;
  code *pcVar7;
  TMap<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,0>_>
  *pTVar8;
  bool bVar9;
  bool bVar10;
  TSharedPtr<FActivatableTreeNode,1> *pTVar11;
  UCommonActivatableWidget *pUVar12;
  FSharedReferencer<1> FVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  undefined8 *puVar18;
  uint uVar19;
  undefined8 *puVar20;
  undefined1 *puVar21;
  uint *puVar22;
  FScriptContainerElement *pFVar23;
  uint local_res18;
  undefined1 local_res20 [8];
  undefined1 local_128;
  undefined1 local_127 [7];
  TSharedPtr<FActivatableTreeNode,1> local_120;
  int local_110;
  undefined8 local_108;
  FSharedReferencer<1> local_100;
  TSharedPtr<FActivatableTreeNode,1> local_f8;
  TMap<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,0>_>
  *local_e8;
  int iStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  int local_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  TMap<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,0>_>
  *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  TSharedPtr<FActivatableTreeNode,1> local_88;
  TSharedPtr<FActivatableTreeNode,1> local_78;
  TSharedPtr<FActivatableTreeNode,1> local_68 [2];
  undefined4 local_3c;
  
  if (param_1 != (UCommonActivatableWidget *)0x0) {
    iVar3 = (this->RootNodes).ArrayNum;
    bVar10 = param_1->bIsModal;
    pFVar17 = (this->RootNodes).AllocatorInstance.Data;
    pFVar23 = pFVar17 + (longlong)iVar3 * 0x10;
    while( true ) {
      if ((this->RootNodes).ArrayNum != iVar3) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TSharedRef<FActivatableTreeRoot,1>_const_,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res20);
      }
      if (pFVar17 == pFVar23) break;
      pTVar5 = *(TReferenceControllerBase<1> **)(pFVar17 + 8);
      pFVar6 = *(FActivatableTreeNode **)pFVar17;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_120.Object = (FActivatableTreeNode *)0x0;
      local_120.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (bVar10 == false) {
        if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_88.Object = pFVar6;
        local_88.SharedReferenceCount.ReferenceController = pTVar5;
        pTVar11 = FindNodeRecursive(this,local_68,&local_88,param_1);
        if (&local_120 != pTVar11) {
          local_120.Object = pTVar11->Object;
          pTVar11->Object = (FActivatableTreeNode *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&local_120.SharedReferenceCount,&pTVar11->SharedReferenceCount);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68[0].SharedReferenceCount.ReferenceController);
        FVar13.ReferenceController = pTVar5;
LAB_14a7dc85b:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar13.ReferenceController);
      }
      else {
        if ((pFVar6 == (FActivatableTreeNode *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          pTVar11 = (TSharedPtr<FActivatableTreeNode,1> *)(*pcVar7)();
          return pTVar11;
        }
        pUVar12 = (UCommonActivatableWidget *)
                  FWeakObjectPtr::Get(&(pFVar6->RepresentedWidget).WeakPtr);
        if (param_1 == pUVar12) {
          if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_108 = 0;
          local_120.Object = pFVar6;
          local_100.ReferenceController = pTVar5;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&local_120.SharedReferenceCount,&local_100);
          FVar13.ReferenceController = local_100.ReferenceController;
          goto LAB_14a7dc85b;
        }
      }
      if (local_120.Object != (FActivatableTreeNode *)0x0) {
        __return_storage_ptr__->Object = local_120.Object;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             local_120.SharedReferenceCount.ReferenceController;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
        return __return_storage_ptr__;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_120.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      pFVar17 = pFVar17 + 0x10;
    }
    puVar1 = &(this->ActionDomainRootNodes).field_0x10;
    iStack_e0 = 0;
    iVar3 = *(int *)&(this->ActionDomainRootNodes).field_0x28;
    local_e8 = &this->ActionDomainRootNodes;
    local_c8 = 0;
    uStack_dc = 1;
    iStack_cc = 0;
    if (iVar3 != 0) {
      puVar22 = *(uint **)&(this->ActionDomainRootNodes).field_0x20;
      if (puVar22 == (uint *)0x0) {
        puVar22 = (uint *)puVar1;
      }
      uVar16 = *puVar22;
      while (uVar16 == 0) {
        lVar14 = (longlong)iStack_e0;
        local_c8 = local_c8 + 0x20;
        iStack_e0 = iStack_e0 + 1;
        iStack_cc = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_e0) goto LAB_14a7dc93e;
        uVar16 = puVar22[lVar14 + 1];
      }
      uStack_dc = -uVar16 & uVar16;
      uVar2 = (ulonglong)uStack_dc * 2 + 1;
      lVar14 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_110 = (int)lVar14;
      iStack_cc = local_c8 + -1 + local_110;
      if (iVar3 < iStack_cc) {
        iStack_cc = iVar3;
      }
    }
LAB_14a7dc93e:
    local_res18 = *(uint *)&(this->ActionDomainRootNodes).field_0x28;
    uStack_c4 = local_3c;
    iStack_c0 = *(int *)&(this->ActionDomainRootNodes).field_0x8 -
                *(int *)&(this->ActionDomainRootNodes).field_0x34;
    uVar16 = local_res18 & 0xffffffe0;
    uStack_d0 = 0xffffffff;
    TStack_b0._padding_ = CONCAT44(uStack_dc,iStack_e0);
    TStack_b0.CurrentBitIndex = iStack_cc;
    TStack_b0.UnvisitedBitMask = 0xffffffff;
    iVar15 = (int)local_res18 >> 5;
    TStack_b0._28_4_ = local_3c;
    TStack_b0.BaseBitIndex = local_c8;
    uStack_90 = CONCAT44(uStack_bc,iStack_c0);
    local_d8 = puVar1;
    local_b8 = local_e8;
    TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)local_res18 < 0) || (iVar3 < (int)local_res18)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      pTVar11 = (TSharedPtr<FActivatableTreeNode,1> *)(*pcVar7)();
      return pTVar11;
    }
    uVar4 = *(uint *)&(this->ActionDomainRootNodes).field_0x28;
    if (local_res18 != uVar4) {
      puVar21 = *(undefined1 **)&(this->ActionDomainRootNodes).field_0x20;
      if (puVar21 == (undefined1 *)0x0) {
        puVar21 = puVar1;
      }
      uVar19 = -1 << ((byte)local_res18 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar15 * 4);
      while (uVar19 == 0) {
        lVar14 = (longlong)iVar15;
        uVar16 = uVar16 + 0x20;
        iVar15 = iVar15 + 1;
        local_res18 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_14a7dca50;
        uVar19 = *(uint *)(puVar21 + lVar14 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_res18 = (int)lVar14 + -1 + uVar16;
      if ((int)uVar4 < (int)local_res18) {
        local_res18 = uVar4;
      }
    }
LAB_14a7dca50:
    while( true ) {
      pTVar8 = local_b8;
      if (*(int *)&local_b8->field_0x8 - *(int *)&local_b8->field_0x34 != (int)uStack_90) {
        `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_128);
      }
      if (((TStack_b0.CurrentBitIndex == local_res18) &&
          (TStack_b0.Array ==
           (TBitArray<FDefaultBitArrayAllocator> *)&(this->ActionDomainRootNodes).field_0x10)) &&
         (pTVar8 == &this->ActionDomainRootNodes)) break;
      lVar14 = (longlong)TStack_b0.CurrentBitIndex * 0x20 + *(longlong *)pTVar8;
      iVar3 = *(int *)(lVar14 + 0x10);
      puVar20 = *(undefined8 **)(lVar14 + 8);
      puVar18 = puVar20 + (longlong)iVar3 * 2;
      while( true ) {
        if (*(int *)(lVar14 + 0x10) != iVar3) {
          `TCheckedPointerIterator<TSharedRef<FActivatableTreeRoot,1>_const_,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_127);
        }
        if (puVar20 == puVar18) break;
        pTVar5 = (TReferenceControllerBase<1> *)puVar20[1];
        local_78.Object = (FActivatableTreeNode *)*puVar20;
        if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_78.SharedReferenceCount.ReferenceController = pTVar5;
        FindNodeRecursive(this,&local_f8,&local_78,param_1);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
        if (local_f8.Object != (FActivatableTreeNode *)0x0) {
          __return_storage_ptr__->Object = local_f8.Object;
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
               local_f8.SharedReferenceCount.ReferenceController;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          return __return_storage_ptr__;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_f8.SharedReferenceCount.ReferenceController);
        puVar20 = puVar20 + 2;
      }
      TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
    }
  }
  __return_storage_ptr__->Object = (FActivatableTreeNode *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// FindNodeRecursive @ 14a7dcb80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FActivatableTreeNode,1> * __thiscall
UCommonUIActionRouterBase::FindNodeRecursive
          (UCommonUIActionRouterBase *this,
          TSharedPtr<FActivatableTreeNode,1> *__return_storage_ptr__,
          TSharedPtr<FActivatableTreeNode,1> *param_1,TSharedPtr<SWidget,1> *param_2)

{
  int iVar1;
  FActivatableTreeNode *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  UObject *pUVar6;
  TSharedPtr<FActivatableTreeNode,1> *pTVar7;
  UWidget *this_00;
  TSharedPtr<SWidget,1> *pTVar8;
  FSharedReferencer<1> FVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  TReferenceControllerBase<1> *pTVar12;
  undefined1 local_res10 [8];
  TSharedPtr<FActivatableTreeNode,1> local_88;
  TSharedPtr<SWidget,1> local_78;
  undefined8 local_68;
  undefined8 local_60;
  FActivatableTreeNode *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  TSharedPtr<FActivatableTreeNode,1> local_48;
  
  FVar9.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->Object = (FActivatableTreeNode *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (param_1->Object != (FActivatableTreeNode *)0x0) {
    pUVar6 = FWeakObjectPtr::Get(&(param_1->Object->RepresentedWidget).WeakPtr);
    if (pUVar6 == (UObject *)0x0) {
      local_60 = 0;
      local_68 = 0;
      pTVar12 = FVar9.ReferenceController;
    }
    else {
      if ((param_1->Object == (FActivatableTreeNode *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSharedPtr<FActivatableTreeNode,1> *)(*pcVar4)();
        return pTVar7;
      }
      this_00 = (UWidget *)FWeakObjectPtr::Get(&(param_1->Object->RepresentedWidget).WeakPtr);
      pTVar8 = UWidget::GetCachedWidget(this_00,&local_78);
      pTVar12 = (pTVar8->SharedReferenceCount).ReferenceController;
      (pTVar8->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pTVar8->Object = (SWidget *)0x0;
      FVar9.ReferenceController = local_78.SharedReferenceCount.ReferenceController;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar9.ReferenceController);
    if ((param_1->Object == (FActivatableTreeNode *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FActivatableTreeNode,1> *)(*pcVar4)();
      return pTVar7;
    }
    pFVar2 = param_1->Object;
    if ((pFVar2->Children).ArrayNum == 0) {
      if ((pFVar2 == (FActivatableTreeNode *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSharedPtr<FActivatableTreeNode,1> *)(*pcVar4)();
        return pTVar7;
      }
      bVar5 = FActivatableTreeNode::IsExclusiveParentOfWidget(param_1->Object,param_2);
      if (bVar5) {
        pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
        pFVar2 = param_1->Object;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_58 = __return_storage_ptr__->Object;
        pTStack_50 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
        __return_storage_ptr__->Object = pFVar2;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_50);
      }
    }
    else {
      if ((pFVar2 == (FActivatableTreeNode *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSharedPtr<FActivatableTreeNode,1> *)(*pcVar4)();
        return pTVar7;
      }
      pFVar2 = param_1->Object;
      iVar1 = (pFVar2->Children).ArrayNum;
      pFVar10 = (pFVar2->Children).AllocatorInstance.Data;
      pFVar11 = pFVar10 + (longlong)iVar1 * 0x10;
      while( true ) {
        if ((pFVar2->Children).ArrayNum != iVar1) {
          `TCheckedPointerIterator<TSharedRef<FActivatableTreeNode,1>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res10);
        }
        if (pFVar10 == pFVar11) goto LAB_14a7dcdd3;
        local_88.Object = *(FActivatableTreeNode **)pFVar10;
        local_88.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)(pFVar10 + 8);
        if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        pTVar7 = FindNodeRecursive(this,&local_48,&local_88,param_2);
        if (__return_storage_ptr__ != pTVar7) {
          __return_storage_ptr__->Object = pTVar7->Object;
          pTVar7->Object = (FActivatableTreeNode *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&__return_storage_ptr__->SharedReferenceCount,&pTVar7->SharedReferenceCount);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_48.SharedReferenceCount.ReferenceController);
        if (__return_storage_ptr__->Object != (FActivatableTreeNode *)0x0) break;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_88.SharedReferenceCount.ReferenceController);
        pFVar10 = pFVar10 + 0x10;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.SharedReferenceCount.ReferenceController);
    }
LAB_14a7dcdd3:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  }
  return __return_storage_ptr__;
}

// FindNodeRecursive @ 14a7dce00

TSharedPtr<FActivatableTreeNode,1> * __thiscall
UCommonUIActionRouterBase::FindNodeRecursive
          (UCommonUIActionRouterBase *this,
          TSharedPtr<FActivatableTreeNode,1> *__return_storage_ptr__,
          TSharedPtr<FActivatableTreeNode,1> *param_1,UCommonActivatableWidget *param_2)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FActivatableTreeNode *pFVar3;
  code *pcVar4;
  bool bVar5;
  UCommonActivatableWidget *pUVar6;
  TSharedPtr<FActivatableTreeNode,1> *pTVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [8];
  TSharedPtr<FActivatableTreeNode,1> local_58;
  FActivatableTreeNode *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  TSharedPtr<FActivatableTreeNode,1> local_38;
  
  __return_storage_ptr__->Object = (FActivatableTreeNode *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (param_1->Object != (FActivatableTreeNode *)0x0) {
    pUVar6 = (UCommonActivatableWidget *)
             FWeakObjectPtr::Get(&(param_1->Object->RepresentedWidget).WeakPtr);
    if (pUVar6 == param_2) {
      pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
      pFVar3 = param_1->Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_48 = __return_storage_ptr__->Object;
      pTStack_40 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
      __return_storage_ptr__->Object = pFVar3;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_40);
      return __return_storage_ptr__;
    }
    if ((param_1->Object == (FActivatableTreeNode *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FActivatableTreeNode,1> *)(*pcVar4)();
      return pTVar7;
    }
    pFVar3 = param_1->Object;
    iVar1 = (pFVar3->Children).ArrayNum;
    pFVar9 = (pFVar3->Children).AllocatorInstance.Data;
    pFVar8 = pFVar9 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((pFVar3->Children).ArrayNum != iVar1) {
        `TCheckedPointerIterator<TSharedRef<FActivatableTreeNode,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar9 == pFVar8) {
        return __return_storage_ptr__;
      }
      local_58.Object = *(FActivatableTreeNode **)pFVar9;
      local_58.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(pFVar9 + 8);
      if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar7 = FindNodeRecursive(this,&local_38,&local_58,param_2);
      if (__return_storage_ptr__ != pTVar7) {
        __return_storage_ptr__->Object = pTVar7->Object;
        pTVar7->Object = (FActivatableTreeNode *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&__return_storage_ptr__->SharedReferenceCount,&pTVar7->SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
      if (__return_storage_ptr__->Object != (FActivatableTreeNode *)0x0) break;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
      pFVar9 = pFVar9 + 0x10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// FindOwningActivatable @ 14a7dd070

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UCommonActivatableWidget * __cdecl
UCommonUIActionRouterBase::FindOwningActivatable
          (TSharedPtr<SWidget,1> *param_1,ULocalPlayer *param_2)

{
  ULocalPlayer *pUVar1;
  UCommonActivatableWidget *pUVar2;
  TSharedRef<SWidget,1> *pTVar3;
  UCommonActivatableWidget *local_res8;
  TSharedPtr<SWidget,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  pUVar1 = (ULocalPlayer *)(param_1->SharedReferenceCount).ReferenceController;
  local_28.Object = param_1->Object;
  if (pUVar1 != (ULocalPlayer *)0x0) {
    LOCK();
    *(atomic<int> *)&pUVar1->_padding_ = (atomic<int>)((int)*(atomic<int> *)&pUVar1->_padding_ + 1);
    UNLOCK();
  }
  local_res8 = (UCommonActivatableWidget *)0x0;
  local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pUVar1;
  if (local_28.Object != (SWidget *)0x0) {
    pTVar3 = TSharedPtr<SWidget,1>::ToSharedRef(&local_28,&local_18);
    local_28.Object = (SWidget *)&local_res8;
    local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)param_2;
    UE::CommonUI::Private::
    ForEachParentWidget<1,_UE::CommonUI::Private::FindActivatableFromSlate<1>_::__l5::<lambda_1>_>
              (pTVar3,(<lambda_1> *)&local_28);
  }
  pUVar2 = local_res8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pUVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return pUVar2;
}

// FindOwningNode @ 14a7dd110

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FActivatableTreeNode,1> * __thiscall
UCommonUIActionRouterBase::FindOwningNode
          (UCommonUIActionRouterBase *this,
          TSharedPtr<FActivatableTreeNode,1> *__return_storage_ptr__,UWidget *param_1)

{
  int iVar1;
  UClass *pUVar2;
  UCommonActivatableWidget *pUVar3;
  TSharedPtr<FActivatableTreeNode,1> *pTVar4;
  TSharedPtr<FActivatableTreeNode,1> local_18;
  
  if (param_1 != (UWidget *)0x0) {
    pUVar2 = UCommonActivatableWidget::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       (pUVar3 = (UCommonActivatableWidget *)param_1,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       == &pUVar2->_padding_)) goto LAB_14a7dd15c;
  }
  pUVar3 = (UCommonActivatableWidget *)0x0;
LAB_14a7dd15c:
  FindNode(this,__return_storage_ptr__,pUVar3);
  if ((__return_storage_ptr__->Object == (FActivatableTreeNode *)0x0) &&
     (((pUVar3 == (UCommonActivatableWidget *)0x0 || (pUVar3->bIsModal == false)) &&
      (pUVar3 = ::FindOwningActivatable(param_1), pUVar3 != (UCommonActivatableWidget *)0x0)))) {
    pTVar4 = FindNode(this,&local_18,pUVar3);
    if (__return_storage_ptr__ != pTVar4) {
      __return_storage_ptr__->Object = pTVar4->Object;
      pTVar4->Object = (FActivatableTreeNode *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&pTVar4->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// FlushInput @ 14a7dd3f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCommonUIActionRouterBase::FlushInput(UCommonUIActionRouterBase *this)

{
  int *piVar1;
  FKey *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FPersistentActionCollection *pFVar5;
  ULocalPlayer *this_00;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  EProcessHoldActionResult EVar9;
  ulonglong uVar10;
  FActivatableTreeRoot *pFVar11;
  ULocalPlayer *this_01;
  UGameInstance *this_02;
  TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_> *pTVar12;
  UCommonUIActionRouterBase *pUVar13;
  FScriptContainerElement *pFVar14;
  FKey *pFVar15;
  ECommonInputMode EVar16;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18;
  ECommonInputMode local_res20 [4];
  int local_res24;
  FName local_90;
  FKeyDetails *local_88;
  TReferenceControllerBase<1> *local_80;
  FName local_78;
  FKeyDetails *local_70;
  TReferenceControllerBase<1> *local_68;
  FKey local_60;
  
  if ((this->ActiveInputConfig).bIsSet == false) {
    EVar16 = All;
  }
  else {
    EVar16 = (this->ActiveInputConfig).TypedValue.InputMode;
  }
  local_res20[0] = EVar16;
  iVar8 = GetLocalPlayerIndex(this);
  pFVar15 = (FKey *)(this->HeldKeys).AllocatorInstance.Data;
  local_res18 = (this->HeldKeys).ArrayNum;
  uVar10 = (ulonglong)(int)local_res18;
  pFVar2 = pFVar15 + uVar10;
  local_res24 = iVar8;
  do {
    if ((this->HeldKeys).ArrayNum != (int)uVar10) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FKey,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar15 == pFVar2) {
      DestructItems<FKey,int>
                ((FKey *)(this->HeldKeys).AllocatorInstance.Data,(this->HeldKeys).ArrayNum);
      piVar1 = &(this->HeldKeys).ArrayMax;
      (this->HeldKeys).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&(this->HeldKeys).AllocatorInstance,0,piVar1);
      }
      return;
    }
    if (((this->PersistentActions).Object == (FPersistentActionCollection *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar5 = (this->PersistentActions).Object;
    pcVar6 = *(code **)(*(longlong *)pFVar5 + 8);
    local_90 = pFVar15->KeyName;
    local_88 = (pFVar15->KeyDetails).Object;
    local_80 = (pFVar15->KeyDetails).SharedReferenceCount.ReferenceController;
    if (local_80 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_80->SharedReferenceCount = (atomic<int>)((int)local_80->SharedReferenceCount + 1);
      UNLOCK();
    }
    EVar9 = (*pcVar6)(pFVar5,EVar16,&local_90,1,iVar8);
    if ((this->bIsActivatableTreeEnabled != false) && (EVar9 == Unhandled)) {
      if ((this->ActiveRootNode).Object != (FActivatableTreeRoot *)0x0) {
        pFVar11 = TSharedPtr<FActivatableTreeRoot,1>::operator->(&this->ActiveRootNode);
        pcVar6 = *(code **)(pFVar11->_padding_ + 8);
        local_78 = pFVar15->KeyName;
        local_70 = (pFVar15->KeyDetails).Object;
        local_68 = (pFVar15->KeyDetails).SharedReferenceCount.ReferenceController;
        if (local_68 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_68->SharedReferenceCount = (atomic<int>)((int)local_68->SharedReferenceCount + 1);
          UNLOCK();
        }
        EVar9 = (*pcVar6)(pFVar11,EVar16,&local_78,1,iVar8);
        if (EVar9 != Unhandled) goto LAB_14a7dd5a6;
      }
      local_60.KeyName = pFVar15->KeyName;
      local_60.KeyDetails.Object = (pFVar15->KeyDetails).Object;
      local_60.KeyDetails.SharedReferenceCount.ReferenceController =
           (pFVar15->KeyDetails).SharedReferenceCount.ReferenceController;
      if (local_60.KeyDetails.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_60.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_60.KeyDetails.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      EVar9 = ProcessHoldInputOnActionDomains(this,EVar16,&local_60,IE_Released,iVar8);
    }
LAB_14a7dd5a6:
    if ((bSupportMultiUserInput != false) && (EVar9 == Unhandled)) {
      this_01 = CastChecked<ULocalPlayer,UObject>((UObject *)this->_padding_);
      this_02 = ULocalPlayer::GetGameInstance(this_01);
      if (this_02 != (UGameInstance *)0x0) {
        pTVar12 = UGameInstance::GetLocalPlayers(this_02);
        pFVar14 = (pTVar12->AllocatorInstance).Data;
        iVar4 = pTVar12->ArrayNum;
        pFVar3 = pFVar14 + (longlong)iVar4 * 8;
        while( true ) {
          if (pTVar12->ArrayNum != iVar4) {
            local_res10[0] = 0;
            `TCheckedPointerIterator<ULocalPlayer_*_const,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res10);
          }
          iVar8 = local_res24;
          if ((pFVar14 == pFVar3) ||
             ((((this_00 = *(ULocalPlayer **)pFVar14, this_00 != this_01 &&
                (this_00 != (ULocalPlayer *)0x0)) &&
               (pUVar13 = ULocalPlayer::GetSubsystem<UCommonUIActionRouterBase>(this_00),
               pUVar13 != (UCommonUIActionRouterBase *)0x0)) &&
              (EVar9 = `UCommonUIActionRouterBase::FlushInput'::__l2::<lambda_1>::operator()
                                 (local_res20,pUVar13,pFVar15), iVar8 = local_res24,
              EVar9 != Unhandled)))) break;
          pFVar14 = pFVar14 + 8;
        }
      }
    }
    uVar10 = (ulonglong)local_res18;
    pFVar15 = pFVar15 + 1;
  } while( true );
}

// FlushPressedKeys @ 14a7dd6c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCommonUIActionRouterBase::FlushPressedKeys(UCommonUIActionRouterBase *this)

{
  ULocalPlayer *this_00;
  UWorld *pUVar1;
  APlayerController *pAVar2;
  
  this_00 = CastChecked<ULocalPlayer,UObject>((UObject *)this->_padding_);
  pUVar1 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
  pAVar2 = UPlayer::GetPlayerController((UPlayer *)this_00,pUVar1);
  if (pAVar2 != (APlayerController *)0x0) {
    (**(code **)(pAVar2->_padding_ + 0xdb0))(pAVar2);
  }
  return;
}

// GatherActiveAnalogScrollRecipients @ 14a7defa0

TArray<UWidget_const_*,TSizedDefaultAllocator<32>_> * __thiscall
UCommonUIActionRouterBase::GatherActiveAnalogScrollRecipients
          (UCommonUIActionRouterBase *this,
          TArray<UWidget_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FActivatableTreeRoot *this_00;
  code *pcVar1;
  bool bVar2;
  TArray<UWidget_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
  TSharedPtr<FActivatableTreeRoot,1> local_18;
  
  this_00 = (this->ActiveRootNode).Object;
  if (this_00 != (FActivatableTreeRoot *)0x0) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    FActivatableTreeNode::AppendValidScrollRecipients
              ((FActivatableTreeNode *)this_00,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  FindActiveActionDomainRootNode(this,&local_18);
  if (local_18.Object != (FActivatableTreeRoot *)0x0) {
    if (local_18.Object == (FActivatableTreeRoot *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TArray<UWidget_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
        return pTVar3;
      }
    }
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    FActivatableTreeNode::AppendValidScrollRecipients
              ((FActivatableTreeNode *)local_18.Object,__return_storage_ptr__);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return __return_storage_ptr__;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GatherActiveBindings @ 14a7df080

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<FUIActionBindingHandle,TSizedDefaultAllocator<32>_> * __thiscall
UCommonUIActionRouterBase::GatherActiveBindings
          (UCommonUIActionRouterBase *this,
          TArray<FUIActionBindingHandle,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  uint uVar2;
  FPersistentActionCollection *pFVar3;
  FUIActionBindingHandle *pFVar4;
  FActivatableTreeRoot *this_00;
  UCommonInputActionDomainTable *pUVar5;
  UCommonInputActionDomain *this_01;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  bool bVar9;
  TArray<FUIActionBindingHandle,TSizedDefaultAllocator<32>_> *pTVar10;
  ULocalPlayer *this_02;
  UCommonInputSubsystem *pUVar11;
  FActionDomainSortedRootList *pFVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  bool local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  UCommonInputActionDomain *local_60;
  FScriptContainerElement *local_58;
  
  if (((this->PersistentActions).Object == (FPersistentActionCollection *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TArray<FUIActionBindingHandle,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
    return pTVar10;
  }
  pFVar3 = (this->PersistentActions).Object;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = *(int *)&pFVar3->field_0x20;
  pFVar4 = *(FUIActionBindingHandle **)&pFVar3->field_0x18;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
               &__return_storage_ptr__->ArrayMax);
    ConstructItems<FUIActionBindingHandle,FUIActionBindingHandle,int>
              ((__return_storage_ptr__->AllocatorInstance).Data,pFVar4,iVar1);
  }
  if (this->bIsActivatableTreeEnabled != false) {
    this_00 = (this->ActiveRootNode).Object;
    if (this_00 != (FActivatableTreeRoot *)0x0) {
      FActivatableTreeNode::AppendAllActiveActions
                ((FActivatableTreeNode *)this_00,__return_storage_ptr__);
    }
    this_02 = CastChecked<ULocalPlayer,UObject>((UObject *)this->_padding_);
    pUVar11 = ULocalPlayer::GetSubsystem<UCommonInputSubsystem>(this_02);
    if ((pUVar11 != (UCommonInputSubsystem *)0x0) &&
       (pUVar5 = (pUVar11->ActionDomainTable).field0_0x0.DebugPtr,
       pUVar5 != (UCommonInputActionDomainTable *)0x0)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      uVar2 = (pUVar5->ActionDomains).ArrayNum;
      uVar13 = (ulonglong)(int)uVar2;
      bVar7 = false;
      pFVar16 = (pUVar5->ActionDomains).AllocatorInstance.Data;
      local_res10 = false;
      local_58 = pFVar16 + uVar13 * 8;
LAB_14a7df1b0:
      pFVar15 = local_58;
      if ((pUVar5->ActionDomains).ArrayNum != (int)uVar13) {
        `TCheckedPointerIterator<TObjectPtr<UCommonInputActionDomain>_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res18);
      }
      if (pFVar16 == pFVar15) {
        return __return_storage_ptr__;
      }
      this_01 = *(UCommonInputActionDomain **)pFVar16;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_01 != (UCommonInputActionDomain *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_01);
      }
      local_60 = this_01;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_01 != (UCommonInputActionDomain *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_01);
      }
      pFVar12 = TMapBase<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,0>_>
                ::Find((TMapBase<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,0>_>
                        *)&this->ActionDomainRootNodes,
                       (TObjectPtr<UCommonInputActionDomain_const_>)&local_60);
      if (pFVar12 != (FActionDomainSortedRootList *)0x0) {
        iVar1 = (pFVar12->RootList).ArrayNum;
        pFVar15 = (pFVar12->RootList).AllocatorInstance.Data;
        pFVar14 = pFVar15 + (longlong)iVar1 * 0x10;
        do {
          if ((pFVar12->RootList).ArrayNum != iVar1) {
            `TCheckedPointerIterator<TSharedRef<FActivatableTreeRoot,1>_const_,int,0>::operator!='::
            __l2::<lambda_1>::operator()(local_res20);
          }
          bVar7 = local_res10;
          if (pFVar15 == pFVar14) break;
          cVar8 = (**(code **)(**(longlong **)pFVar15 + 0x18))();
          if ((cVar8 != '\0') &&
             (bVar7 = FActivatableTreeNode::IsWidgetActivated(*(FActivatableTreeNode **)pFVar15),
             bVar7)) {
            FActivatableTreeNode::AppendAllActiveActions
                      (*(FActivatableTreeNode **)pFVar15,__return_storage_ptr__);
            local_res10 = true;
            if ((this_01 != (UCommonInputActionDomain *)0x0) &&
               (bVar7 = UCommonInputActionDomain::ShouldBreakInnerEventFlow(this_01,false), bVar7))
            goto LAB_14a7df29c;
          }
          pFVar15 = pFVar15 + 0x10;
        } while( true );
      }
      if (this_01 != (UCommonInputActionDomain *)0x0) goto LAB_14a7df2a4;
      goto LAB_14a7df2b7;
    }
  }
  return __return_storage_ptr__;
LAB_14a7df29c:
  bVar7 = true;
LAB_14a7df2a4:
  bVar9 = UCommonInputActionDomain::ShouldBreakEventFlow(this_01,bVar7,false);
  if (bVar9) {
    return __return_storage_ptr__;
  }
LAB_14a7df2b7:
  pFVar16 = pFVar16 + 8;
  uVar13 = (ulonglong)uVar2;
  goto LAB_14a7df1b0;
}

// Get @ 14a7dff50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UCommonUIActionRouterBase * __cdecl UCommonUIActionRouterBase::Get(UWidget *param_1)

{
  ULocalPlayer *this;
  UCommonUIActionRouterBase *pUVar1;
  
  this = (ULocalPlayer *)(**(code **)(param_1->_padding_ + 0x2e0))();
  if (this != (ULocalPlayer *)0x0) {
    pUVar1 = ULocalPlayer::GetSubsystem<UCommonUIActionRouterBase>(this);
    return pUVar1;
  }
  return (UCommonUIActionRouterBase *)0x0;
}

// GetActionDomainTable @ 14a7e0170

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UCommonInputActionDomainTable * __thiscall
UCommonUIActionRouterBase::GetActionDomainTable(UCommonUIActionRouterBase *this)

{
  UCommonInputActionDomainTable *pUVar1;
  ULocalPlayer *this_00;
  UCommonInputSubsystem *pUVar2;
  
  this_00 = CastChecked<ULocalPlayer,UObject>((UObject *)this->_padding_);
  pUVar2 = ULocalPlayer::GetSubsystem<UCommonInputSubsystem>(this_00);
  if (pUVar2 != (UCommonInputSubsystem *)0x0) {
    pUVar1 = (pUVar2->ActionDomainTable).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UCommonInputActionDomainTable *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    return pUVar1;
  }
  return (UCommonInputActionDomainTable *)0x0;
}

// GetActiveInputMode @ 14a7e0510

ECommonInputMode __thiscall
UCommonUIActionRouterBase::GetActiveInputMode
          (UCommonUIActionRouterBase *this,ECommonInputMode param_1)

{
  if ((this->ActiveInputConfig).bIsSet != false) {
    return (this->ActiveInputConfig).TypedValue.InputMode;
  }
  return param_1;
}

// GetActiveMouseCaptureMode @ 14a7e0530

EMouseCaptureMode __thiscall
UCommonUIActionRouterBase::GetActiveMouseCaptureMode
          (UCommonUIActionRouterBase *this,EMouseCaptureMode param_1)

{
  if ((this->ActiveInputConfig).bIsSet != false) {
    return (this->ActiveInputConfig).TypedValue.MouseCaptureMode;
  }
  return param_1;
}

// GetActiveRoot @ 14a7e0550

TWeakPtr<FActivatableTreeRoot,1> * __thiscall
UCommonUIActionRouterBase::GetActiveRoot
          (UCommonUIActionRouterBase *this,TWeakPtr<FActivatableTreeRoot,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->ActiveRootNode).Object;
  pTVar1 = (this->ActiveRootNode).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetGameplayTagsForInputMode @ 14a7e2630

FGameplayTagContainer * __thiscall
UCommonUIActionRouterBase::GetGameplayTagsForInputMode
          (UCommonUIActionRouterBase *this,FGameplayTagContainer *__return_storage_ptr__,
          ECommonInputMode param_1)

{
  FName local_res10 [3];
  
  (__return_storage_ptr__->GameplayTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->GameplayTags).ArrayNum = 0;
  (__return_storage_ptr__->GameplayTags).ArrayMax = 0;
  (__return_storage_ptr__->ParentTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ParentTags).ArrayNum = 0;
  (__return_storage_ptr__->ParentTags).ArrayMax = 0;
  local_res10[0] = TAG_InputModeMenu.InternalTag.TagName;
  if ((param_1 != Menu) && (local_res10[0] = TAG_InputModeGame.InternalTag.TagName, param_1 != Game)
     ) {
    if (param_1 != All) {
      return __return_storage_ptr__;
    }
    FGameplayTagContainer::AddTag(__return_storage_ptr__,(FGameplayTag *)local_res10);
    local_res10[0] = TAG_InputModeMenu.InternalTag.TagName;
  }
  FGameplayTagContainer::AddTag(__return_storage_ptr__,(FGameplayTag *)local_res10);
  return __return_storage_ptr__;
}

// GetInputSubsystem @ 14a7e3050

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UCommonInputSubsystem * __thiscall
UCommonUIActionRouterBase::GetInputSubsystem(UCommonUIActionRouterBase *this)

{
  code *pcVar1;
  bool bVar2;
  ULocalPlayer *this_00;
  UCommonInputSubsystem *pUVar3;
  
  this_00 = CastChecked<ULocalPlayer,UObject>((UObject *)this->_padding_);
  pUVar3 = ULocalPlayer::GetSubsystem<UCommonInputSubsystem>(this_00);
  if ((pUVar3 == (UCommonInputSubsystem *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InputSubsytem",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\CommonUIActionRouterBase.cpp"
                         ,0x28d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UCommonInputSubsystem *)(*pcVar1)();
    return pUVar3;
  }
  return pUVar3;
}

// GetLocalPlayerIndex @ 14a7e3360

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall UCommonUIActionRouterBase::GetLocalPlayerIndex(UCommonUIActionRouterBase *this)

{
  FScriptContainerElement *pFVar1;
  ULocalPlayer *this_00;
  UGameInstance *this_01;
  TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  
  this_00 = CastChecked<ULocalPlayer,UObject>((UObject *)this->_padding_);
  this_01 = ULocalPlayer::GetGameInstance(this_00);
  if (this_01 != (UGameInstance *)0x0) {
    pTVar2 = UGameInstance::GetLocalPlayers(this_01);
    pFVar1 = (pTVar2->AllocatorInstance).Data;
    for (pFVar3 = pFVar1; pFVar3 != pFVar1 + (longlong)pTVar2->ArrayNum * 8; pFVar3 = pFVar3 + 8) {
      if (*(ULocalPlayer **)pFVar3 == this_00) {
        return (int)((longlong)pFVar3 - (longlong)pFVar1 >> 3);
      }
    }
  }
  return -1;
}

// GetOrCreatePendingRegistration @ 14a7e40d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FPendingWidgetRegistration * __thiscall
UCommonUIActionRouterBase::GetOrCreatePendingRegistration
          (UCommonUIActionRouterBase *this,UWidget *param_1)

{
  TArray<UCommonUIActionRouterBase::FPendingWidgetRegistration,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FWeakObjectPtr *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FUIActionBindingHandle *pFVar6;
  int iVar7;
  FPreprocessorRegistration *pFVar8;
  FInputPreprocessorRegistration *pFVar9;
  bool bVar10;
  uint uVar11;
  UWidget *pUVar12;
  FPendingWidgetRegistration *pFVar13;
  uint uVar14;
  FPendingWidgetRegistration *pFVar15;
  FWeakObjectPtr *pFVar16;
  UWidget *local_res8;
  FWeakObjectPtr local_78;
  FUIActionBindingHandle *local_70;
  undefined8 local_68;
  undefined1 local_60;
  FPreprocessorRegistration *local_58;
  undefined8 local_50;
  FInputPreprocessorRegistration *local_48;
  undefined8 local_40;
  
  pFVar13 = (FPendingWidgetRegistration *)(this->PendingWidgetRegistrations).AllocatorInstance.Data;
  pTVar1 = &this->PendingWidgetRegistrations;
  pFVar15 = pFVar13 + (this->PendingWidgetRegistrations).ArrayNum;
  do {
    if (pFVar13 == pFVar15) {
LAB_14a7e4121:
      local_78.ObjectIndex = 0;
      local_78.ObjectSerialNumber = 0;
      local_70 = (FUIActionBindingHandle *)0x0;
      local_68 = 0;
      local_60 = 0;
      local_58 = (FPreprocessorRegistration *)0x0;
      local_50 = 0;
      local_48 = (FInputPreprocessorRegistration *)0x0;
      local_40 = 0;
      local_res8 = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWidget *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_78,(FObjectPtr)&local_res8);
      pFVar3 = (FWeakObjectPtr *)(pTVar1->AllocatorInstance).Data;
      if (((pFVar3 <= &local_78) &&
          (&local_78 < pFVar3 + (longlong)(this->PendingWidgetRegistrations).ArrayMax * 8)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar5 = (code *)swi(3);
        pFVar13 = (FPendingWidgetRegistration *)(*pcVar5)();
        return pFVar13;
      }
      uVar11 = (this->PendingWidgetRegistrations).ArrayNum;
      piVar2 = &(this->PendingWidgetRegistrations).ArrayMax;
      if (uVar11 == *piVar2) {
        uVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x840,&pTVar1->AllocatorInstance,piVar2);
      }
      pFVar6 = local_70;
      pFVar4 = (pTVar1->AllocatorInstance).Data;
      (this->PendingWidgetRegistrations).ArrayNum = uVar11 + 1;
      pFVar16 = (FWeakObjectPtr *)(pFVar4 + (longlong)(int)uVar11 * 0x40);
      pFVar3 = pFVar16 + 1;
      *pFVar16 = local_78;
      pFVar3->ObjectIndex = 0;
      pFVar3->ObjectSerialNumber = 0;
      iVar7 = (int)local_68;
      pFVar16[2].ObjectIndex = (int)local_68;
      if ((int)local_68 == 0) {
        pFVar16[2].ObjectSerialNumber = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,(int)local_68,0,(ForAnyElementType *)pFVar3,(int)local_68,
                   &pFVar16[2].ObjectSerialNumber);
        ConstructItems<FUIActionBindingHandle,FUIActionBindingHandle,int>
                  ((void *)*pFVar3,pFVar6,iVar7);
      }
      pFVar8 = local_58;
      pFVar3 = pFVar16 + 4;
      *(undefined1 *)&pFVar16[3].ObjectIndex = local_60;
      pFVar3->ObjectIndex = 0;
      pFVar3->ObjectSerialNumber = 0;
      iVar7 = (int)local_50;
      pFVar16[5].ObjectIndex = (int)local_50;
      if ((int)local_50 == 0) {
        pFVar16[5].ObjectSerialNumber = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,(int)local_50,0,(ForAnyElementType *)pFVar3,(int)local_50,
                   &pFVar16[5].ObjectSerialNumber);
        ConstructItems<UCommonUIActionRouterBase::FPendingWidgetRegistration::FPreprocessorRegistration,UCommonUIActionRouterBase::FPendingWidgetRegistration::FPreprocessorRegistration,int>
                  ((void *)*pFVar3,pFVar8,iVar7);
      }
      pFVar9 = local_48;
      pFVar3 = pFVar16 + 6;
      pFVar3->ObjectIndex = 0;
      pFVar3->ObjectSerialNumber = 0;
      iVar7 = (int)local_40;
      pFVar16[7].ObjectIndex = (int)local_40;
      if ((int)local_40 == 0) {
        pFVar16[7].ObjectSerialNumber = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,(int)local_40,0,(ForAnyElementType *)pFVar3,(int)local_40,
                   &pFVar16[7].ObjectSerialNumber);
        ConstructItems<FInputPreprocessorRegistration,FInputPreprocessorRegistration,int>
                  ((void *)*pFVar3,pFVar9,iVar7);
      }
      uVar14 = 0;
      if ((int)uVar11 < (this->PendingWidgetRegistrations).ArrayNum) {
        uVar14 = ~uVar11 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        pFVar13 = (FPendingWidgetRegistration *)(*pcVar5)();
        return pFVar13;
      }
      pFVar4 = (pTVar1->AllocatorInstance).Data;
      DestructItems<FInputPreprocessorRegistration,int>(local_48,(int)local_40);
      if (local_48 != (FInputPreprocessorRegistration *)0x0) {
        FMemory::Free(local_48);
      }
      DestructItems<UCommonUIActionRouterBase::FPendingWidgetRegistration::FPreprocessorRegistration,int>
                (local_58,(int)local_50);
      if (local_58 != (FPreprocessorRegistration *)0x0) {
        FMemory::Free(local_58);
      }
      DestructItems<FUIActionBindingHandle,int>(local_70,(int)local_68);
      if (local_70 != (FUIActionBindingHandle *)0x0) {
        FMemory::Free(local_70);
      }
      return (FPendingWidgetRegistration *)(pFVar4 + (longlong)(int)uVar11 * 0x40);
    }
    pUVar12 = (UWidget *)FWeakObjectPtr::Get((FWeakObjectPtr *)pFVar13);
    if (param_1 == pUVar12) {
      if (pFVar13 != (FPendingWidgetRegistration *)0x0) {
        return pFVar13;
      }
      goto LAB_14a7e4121;
    }
    pFVar13 = pFVar13 + 1;
  } while( true );
}

// GetPrivateStaticClass @ 14a7e6560

UClass * __cdecl UCommonUIActionRouterBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonUIActionRouterBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonUIActionRouterBase",
               &Z_Registration_Info_UClass_UCommonUIActionRouterBase.InnerSingleton,
               StaticRegisterNativesUCommonUIActionRouterBase,0x1f8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UCommonUIActionRouterBase>,
               InternalVTableHelperCtorCaller<UCommonUIActionRouterBase>,local_res8,
               ULocalPlayerSubsystem::StaticClass,ULocalPlayer::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonUIActionRouterBase.InnerSingleton;
}

// HandleActivatableWidgetRebuilding @ 14a7e9d50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UCommonUIActionRouterBase::HandleActivatableWidgetRebuilding
          (UCommonUIActionRouterBase *this,UCommonActivatableWidget *param_1)

{
  ULocalPlayer *pUVar1;
  ULocalPlayer *pUVar2;
  FWeakObjectPtr local_res8;
  UCommonActivatableWidget *local_res10;
  
  pUVar1 = CastChecked<ULocalPlayer,UObject>((UObject *)this->_padding_);
  pUVar2 = (ULocalPlayer *)(**(code **)(param_1->_padding_ + 0x2e0))();
  if (pUVar2 == pUVar1) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    TArray<TWeakObjectPtr<UCommonActivatableWidget,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TWeakObjectPtr<UCommonActivatableWidget,FWeakObjectPtr>_>
              (&this->RebuiltWidgetsPendingNodeAssignment,
               (TWeakObjectPtr<UCommonActivatableWidget,FWeakObjectPtr> *)&local_res8);
  }
  return;
}

// HandleLeafmostActiveNodeChanged @ 14a7ed910

void __thiscall
UCommonUIActionRouterBase::HandleLeafmostActiveNodeChanged(UCommonUIActionRouterBase *this)

{
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnBoundActionsUpdatedEvent);
  return;
}

// HandlePostGarbageCollect @ 14a7ee410

void __thiscall UCommonUIActionRouterBase::HandlePostGarbageCollect(UCommonUIActionRouterBase *this)

{
  int *piVar1;
  TArray<TSharedRef<FActivatableTreeRoot,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  FScriptContainerElement *_Dst;
  void *_Dst_00;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  TBitArray<FDefaultBitArrayAllocator> *pTVar16;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  TBitArray<FDefaultBitArrayAllocator> *local_res20;
  undefined4 uStack_a4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  FUIActionBinding::CleanRegistrations();
  pTVar2 = &this->RootNodes;
  for (uVar9 = 0; (-1 < (int)uVar9 && ((int)uVar9 < (this->RootNodes).ArrayNum)); uVar9 = uVar9 + 1)
  {
    if (((int)uVar9 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar5 = FWeakObjectPtr::IsValid
                      ((FWeakObjectPtr *)
                       (*(longlong *)
                         ((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x10) + 0x90));
    if (!bVar5) {
      uVar11 = 0;
      if ((int)uVar9 < (this->RootNodes).ArrayNum) {
        uVar11 = ~uVar9 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      _Dst = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x10;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)(_Dst + 8));
      iVar7 = (this->RootNodes).ArrayNum + ~uVar9;
      if (iVar7 != 0) {
        memmove(_Dst,_Dst + 0x10,(longlong)iVar7 << 4);
      }
      piVar1 = &(this->RootNodes).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&pTVar2->AllocatorInstance,(this->RootNodes).ArrayNum,
                 &(this->RootNodes).ArrayMax);
      uVar9 = uVar9 - 1;
    }
  }
  pTVar16 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ActionDomainRootNodes).field_0x10;
  iVar12 = 0;
  iVar7 = *(int *)&(this->ActionDomainRootNodes).field_0x28;
  iVar14 = 0;
  uVar9 = 1;
  iVar6 = 0;
  if (iVar7 != 0) {
    puVar15 = *(uint **)&(this->ActionDomainRootNodes).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)pTVar16;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar6 = iVar7;
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14a7ee5dd;
      uVar11 = puVar15[lVar8 + 1];
    }
    uVar9 = -uVar11 & uVar11;
    uVar3 = (ulonglong)uVar9 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar6 = local_res10 + -1 + iVar14;
    if (iVar7 < iVar6) {
      iVar6 = iVar7;
    }
  }
LAB_14a7ee5dd:
  uVar11 = *(uint *)&(this->ActionDomainRootNodes).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_98._padding_ = CONCAT44(uVar9,iVar12);
  TStack_98.CurrentBitIndex = iVar6;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  iVar7 = (int)uVar11 >> 5;
  TStack_98._28_4_ = local_54;
  TStack_98.BaseBitIndex = iVar14;
  uStack_78 = CONCAT44(uStack_a4,
                       *(int *)&(this->ActionDomainRootNodes).field_0x8 -
                       *(int *)&(this->ActionDomainRootNodes).field_0x34);
  local_res20 = pTVar16;
  TStack_98.Array = pTVar16;
  if (((int)uVar11 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar9 = *(uint *)&(this->ActionDomainRootNodes).field_0x28;
  if (uVar11 != uVar9) {
    puVar13 = *(undefined1 **)&(this->ActionDomainRootNodes).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = (undefined1 *)pTVar16;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar7 * 4);
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar7;
      uVar10 = uVar10 + 0x20;
      iVar7 = iVar7 + 1;
      uVar11 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar7) goto LAB_14a7ee6e0;
      uVar11 = *(uint *)(puVar13 + lVar8 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    uVar11 = local_res18 + -1 + uVar10;
    if ((int)uVar9 < (int)uVar11) {
      uVar11 = uVar9;
    }
  }
LAB_14a7ee6e0:
  while( true ) {
    if (*(int *)&(this->ActionDomainRootNodes).field_0x8 -
        *(int *)&(this->ActionDomainRootNodes).field_0x34 != (int)uStack_78) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_98.CurrentBitIndex == uVar11) && (TStack_98.Array == pTVar16)) break;
    lVar8 = (longlong)TStack_98.CurrentBitIndex * 0x20 + *(longlong *)&this->ActionDomainRootNodes;
    for (uVar9 = 0; (-1 < (int)uVar9 && ((int)uVar9 < *(int *)(lVar8 + 0x10))); uVar9 = uVar9 + 1) {
      if (((int)uVar9 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      bVar5 = FWeakObjectPtr::IsValid
                        ((FWeakObjectPtr *)
                         (*(longlong *)((longlong)(int)uVar9 * 0x10 + *(longlong *)(lVar8 + 8)) +
                         0x90));
      if (!bVar5) {
        uVar10 = 0;
        if ((int)uVar9 < *(int *)(lVar8 + 0x10)) {
          uVar10 = ~uVar9 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        _Dst_00 = (void *)(*(longlong *)(lVar8 + 8) + (longlong)(int)uVar9 * 0x10);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (*(TReferenceControllerBase<1> **)((longlong)_Dst_00 + 8));
        iVar7 = *(int *)(lVar8 + 0x10) + ~uVar9;
        if (iVar7 != 0) {
          memmove(_Dst_00,(void *)((longlong)_Dst_00 + 0x10),(longlong)iVar7 << 4);
        }
        *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,(ForAnyElementType *)(lVar8 + 8),*(int *)(lVar8 + 0x10),
                   (int *)(lVar8 + 0x14));
        uVar9 = uVar9 - 1;
      }
    }
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
    pTVar16 = local_res20;
  }
  return;
}

// HandleRootNodeActivated @ 14a7eef80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UCommonUIActionRouterBase::HandleRootNodeActivated
          (UCommonUIActionRouterBase *this,TWeakPtr<FActivatableTreeRoot,1> *param_1)

{
  int *piVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  UObject *pUVar4;
  longlong lVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  atomic<int> aVar8;
  int iVar9;
  int iVar10;
  UCommonActivatableWidget *this_00;
  TObjectPtr<UCommonInputActionDomain> TVar11;
  FActionDomainSortedRootList *this_01;
  FActivatableTreeRoot *pFVar12;
  ULocalPlayer *pUVar13;
  TSharedPtr<FActivatableTreeRoot,1> *pTVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  FActivatableTreeRoot *pFVar17;
  FActivatableTreeRoot *this_02;
  bool bVar18;
  TWeakPtr<FActivatableTreeRoot,1> local_res8;
  FActivatableTreeRoot *local_68;
  FActivatableTreeRoot *local_60;
  FActivatableTreeRoot *local_58;
  FActivatableTreeRoot *local_50;
  TSharedRef<FActivatableTreeRoot,1> local_48;
  TSharedPtr<FActivatableTreeRoot,1> local_38;
  
  pFVar17 = (FActivatableTreeRoot *)(param_1->WeakReferenceCount).ReferenceController;
  this_02 = (FActivatableTreeRoot *)0x0;
  pFVar12 = pFVar17;
  if (pFVar17 != (FActivatableTreeRoot *)0x0) {
    aVar3 = *(atomic<int> *)&pFVar17->_padding_;
    do {
      pFVar12 = this_02;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14a7eefd5;
      LOCK();
      aVar8 = *(atomic<int> *)&pFVar17->_padding_;
      bVar18 = aVar3 == aVar8;
      if (bVar18) {
        *(atomic<int> *)&pFVar17->_padding_ = (atomic<int>)((int)aVar3 + 1);
        aVar8 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar8;
    } while (!bVar18);
    this_02 = param_1->Object;
    pFVar12 = pFVar17;
    if (this_02 != (FActivatableTreeRoot *)0x0) goto LAB_14a7ef026;
  }
LAB_14a7eefd5:
  bVar18 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x416,L"");
  if (bVar18) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar17 = pFVar12;
  if ((this_02 == (FActivatableTreeRoot *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar18)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
LAB_14a7ef026:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  this_00 = (UCommonActivatableWidget *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this_02->_padding_);
  pFVar15 = (this->RootNodes).AllocatorInstance.Data;
  pFVar16 = pFVar15 + (longlong)(this->RootNodes).ArrayNum * 0x10;
  iVar10 = -1;
  do {
    if (pFVar15 == pFVar16) {
      if (this_00 != (UCommonActivatableWidget *)0x0) {
        TVar11 = UCommonActivatableWidget::GetCalculatedActionDomain(this_00);
        pUVar4 = *(UObject **)TVar11.field0_0x0;
        if (pUVar4 != (UObject *)0x0) {
          local_res8.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pUVar4;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar4);
          }
          this_01 = TMapBase<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,0>_>
                    ::Find((TMapBase<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,0>_>
                            *)&this->ActionDomainRootNodes,
                           (TObjectPtr<UCommonInputActionDomain_const_>)
                           &local_res8.WeakReferenceCount);
          if (this_01 != (FActionDomainSortedRootList *)0x0) {
            if (pFVar17 != (FActivatableTreeRoot *)0x0) {
              LOCK();
              *(int *)&pFVar17->_padding_ = (int)pFVar17->_padding_ + 1;
              UNLOCK();
            }
            local_48.Object = this_02;
            local_48.SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)pFVar17;
            bVar18 = FActionDomainSortedRootList::Contains(this_01,&local_48);
            if (bVar18) {
              FActivatableTreeNode::SetCanReceiveInput((FActivatableTreeNode *)this_02,true);
              TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
              BindUObject<UCommonUIActionRouterBase>
                        ((TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                         &this_02->OnLeafmostActiveNodeChanged,this,(pmf_83b3fc76)0x14a7ed910);
              if ((this->ActiveRootNode).Object == (FActivatableTreeRoot *)0x0) {
                iVar10 = FActivatableTreeNode::GetLastPaintLayer((FActivatableTreeNode *)this_02);
                if (iVar10 < 1) {
                  if (pFVar17 != (FActivatableTreeRoot *)0x0) {
                    LOCK();
                    piVar1 = (int *)((longlong)&pFVar17->_padding_ + 4);
                    *piVar1 = *piVar1 + 1;
                    UNLOCK();
                  }
                  local_68 = this_02;
                  local_60 = pFVar17;
                  TSet<TWeakPtr<FActivatableTreeRoot,1>,DefaultKeyFuncs<TWeakPtr<FActivatableTreeRoot,1>,0>,FDefaultSetAllocator>
                  ::Emplace<TWeakPtr<FActivatableTreeRoot,1>_>
                            (&this->ActiveActionDomainRootsPendingPaint,&local_res8,
                             (bool *)&local_68);
                  if (local_60 != (FActivatableTreeRoot *)0x0) {
                    LOCK();
                    piVar1 = (int *)((longlong)&local_60->_padding_ + 4);
                    iVar10 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar10 == 1) {
                      (**(code **)(local_60->_padding_ + 8))(local_60,1);
                    }
                  }
                }
                else {
                  pTVar14 = FindActiveActionDomainRootNode(this,&local_38);
                  if ((pTVar14->Object == (FActivatableTreeRoot *)0x0) ||
                     (pTVar14->Object != this_02)) {
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline
                              (local_38.SharedReferenceCount.ReferenceController);
                  }
                  else {
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline
                              (local_38.SharedReferenceCount.ReferenceController);
                    FActivatableTreeRoot::UpdateLeafNode(this_02);
                    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                              (&this->OnBoundActionsUpdatedEvent);
                  }
                }
              }
            }
            else {
              bVar18 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<2489800349741745050>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\CommonUIActionRouterBase.cpp"
                                  ,0x39a,"ActionDomainRootList->Contains(ActivatedRoot)");
              if (bVar18) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
          }
        }
      }
LAB_14a7ef28e:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar17);
      pTVar6 = (param_1->WeakReferenceCount).ReferenceController;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar2 = &pTVar6->WeakReferenceCount;
        aVar3 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
        }
      }
      return;
    }
    if (*(FActivatableTreeRoot **)pFVar15 == this_02) {
      iVar9 = FActivatableTreeNode::GetLastPaintLayer((FActivatableTreeNode *)this_02);
      if (0 < iVar9) {
        if ((this->ActiveRootNode).Object != (FActivatableTreeRoot *)0x0) {
          pFVar12 = TSharedPtr<FActivatableTreeRoot,1>::operator->(&this->ActiveRootNode);
          iVar10 = FActivatableTreeNode::GetLastPaintLayer((FActivatableTreeNode *)pFVar12);
        }
        iVar9 = FActivatableTreeNode::GetLastPaintLayer((FActivatableTreeNode *)this_02);
        if (((iVar10 < iVar9) &&
            (pUVar13 = ULocalPlayerSubsystem::GetLocalPlayer<ULocalPlayer>
                                 ((ULocalPlayerSubsystem *)this), pUVar13 != (ULocalPlayer *)0x0))
           && ((pUVar13->ViewportClient).field0_0x0.DebugPtr != (UGameViewportClient *)0x0)) {
          lVar5 = this->_padding_;
          if (pFVar17 != (FActivatableTreeRoot *)0x0) {
            LOCK();
            *(int *)&pFVar17->_padding_ = (int)pFVar17->_padding_ + 1;
            UNLOCK();
          }
          local_58 = this_02;
          local_50 = pFVar17;
          (**(code **)(lVar5 + 0x310))(this,&local_58);
        }
      }
      goto LAB_14a7ef28e;
    }
    pFVar15 = pFVar15 + 0x10;
  } while( true );
}

// HandleRootNodeDeactivated @ 14a7ef2f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCommonUIActionRouterBase::HandleRootNodeDeactivated
          (UCommonUIActionRouterBase *this,TWeakPtr<FActivatableTreeRoot,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FActivatableTreeRoot *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  int iVar5;
  int iVar6;
  FActivatableTreeRoot *pFVar7;
  FActivatableTreeRoot *pFVar8;
  bool bVar9;
  undefined8 local_18;
  undefined8 uStack_10;
  
  pFVar3 = (FActivatableTreeRoot *)(param_1->WeakReferenceCount).ReferenceController;
  pFVar8 = (FActivatableTreeRoot *)0x0;
  pFVar7 = pFVar3;
  if (pFVar3 != (FActivatableTreeRoot *)0x0) {
    iVar5 = (int)pFVar3->_padding_;
    do {
      pFVar7 = pFVar8;
      if (iVar5 == 0) goto LAB_14a7ef335;
      LOCK();
      iVar6 = (int)pFVar3->_padding_;
      bVar9 = iVar5 == iVar6;
      if (bVar9) {
        *(int *)&pFVar3->_padding_ = iVar5 + 1;
        iVar6 = iVar5;
      }
      UNLOCK();
      iVar5 = iVar6;
    } while (!bVar9);
    pFVar8 = param_1->Object;
    pFVar7 = pFVar3;
  }
LAB_14a7ef335:
  pFVar3 = (this->ActiveRootNode).Object;
  if ((pFVar3 != (FActivatableTreeRoot *)0x0) && (pFVar3 == pFVar8)) {
    local_18 = 0;
    uStack_10 = 0;
    (**(code **)(this->_padding_ + 0x310))(this,&local_18);
  }
  if (this->bIsActivatableTreeEnabled != false) {
    if ((bWarnAllWidgetsDeactivated != false) && (2 < (byte)LogUIActionRouter._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogUIActionRouter);
    }
    RefreshActionDomainLeafNodeConfig(this);
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnBoundActionsUpdatedEvent);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar7);
  pTVar4 = (param_1->WeakReferenceCount).ReferenceController;
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
  return;
}

// HandleRootWidgetSlateReleased @ 14a7ef400

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UCommonUIActionRouterBase::HandleRootWidgetSlateReleased
          (UCommonUIActionRouterBase *this,TWeakPtr<FActivatableTreeRoot,1> *param_1)

{
  atomic<int> *paVar1;
  TSharedPtr<FActivatableTreeRoot,1> *this_00;
  ulonglong uVar2;
  atomic<int> aVar3;
  uint uVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  code *pcVar8;
  TMap<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,0>_>
  *pTVar9;
  atomic<int> aVar10;
  UObject *pUVar11;
  FActivatableTreeRoot *pFVar12;
  longlong *plVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  TReferenceControllerBase<1> *pTVar16;
  FScriptContainerElement *pFVar17;
  int iVar18;
  ulonglong *puVar19;
  longlong lVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  undefined1 *puVar26;
  uint *puVar27;
  TMap<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,0>_>
  *pTVar28;
  int iVar29;
  bool bVar30;
  undefined1 local_res18 [8];
  uint local_res20;
  int local_148;
  TSharedRef<FActivatableTreeRoot,1> local_138 [2];
  FActivatableTreeRoot *local_118;
  TReferenceControllerBase<1> *pTStack_110;
  int local_108;
  int local_104;
  ulonglong *local_100;
  TMap<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,0>_>
  *local_f8;
  UObject *local_f0;
  UObject **local_e8;
  TMap<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,0>_>
  *local_e0;
  int iStack_d8;
  uint uStack_d4;
  undefined1 *local_d0;
  undefined4 uStack_c8;
  int iStack_c4;
  int local_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  TMap<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,0>_>
  *local_b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a8;
  undefined8 uStack_88;
  TWeakPtr<FActivatableTreeRoot,1> local_80;
  FDestructionSentinel local_70 [2];
  undefined4 local_3c;
  
  if (((param_1->Object == (FActivatableTreeRoot *)0x0) ||
      (pTVar16 = (param_1->WeakReferenceCount).ReferenceController,
      pTVar16 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar16->SharedReferenceCount < 1)) {
    pTVar16 = (param_1->WeakReferenceCount).ReferenceController;
    goto LAB_14a7efadf;
  }
  pFVar12 = (FActivatableTreeRoot *)0x0;
  pTVar16 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar16 == (TReferenceControllerBase<1> *)0x0) {
LAB_14a7ef474:
    bVar30 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar30) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else {
    aVar3 = pTVar16->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar16 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14a7ef474;
      }
      LOCK();
      aVar10 = pTVar16->SharedReferenceCount;
      bVar30 = aVar3 == aVar10;
      if (bVar30) {
        pTVar16->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar10 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar10;
    } while (!bVar30);
    pFVar12 = param_1->Object;
    if (pFVar12 == (FActivatableTreeRoot *)0x0) goto LAB_14a7ef474;
  }
  local_138[0].Object = pFVar12;
  local_138[0].SharedReferenceCount.ReferenceController = pTVar16;
  if ((pFVar12 == (FActivatableTreeRoot *)0x0) &&
     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar30)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)&(local_138[0].Object)->_padding_);
  if (pUVar11 != (UObject *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar11[0x1f].field_0x8,this);
  }
  pFVar14 = (this->RootNodes).AllocatorInstance.Data;
  pFVar17 = pFVar14 + (longlong)(this->RootNodes).ArrayNum * 0x10;
  for (; pFVar14 != pFVar17; pFVar14 = pFVar14 + 0x10) {
    if (*(FActivatableTreeRoot **)pFVar14 == local_138[0].Object) {
      this_00 = &this->ActiveRootNode;
      if ((this_00->Object != (FActivatableTreeRoot *)0x0) &&
         (this_00->Object == local_138[0].Object)) {
        pFVar12 = TSharedPtr<FActivatableTreeRoot,1>::operator->(this_00);
        bVar30 = FActivatableTreeNode::IsWidgetActivated((FActivatableTreeNode *)pFVar12);
        if (bVar30) {
          pFVar12 = TSharedPtr<FActivatableTreeRoot,1>::operator->(this_00);
          pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)&pFVar12->_padding_);
          if (pUVar11 != (UObject *)0x0) {
            pFVar12 = TSharedPtr<FActivatableTreeRoot,1>::operator->(this_00);
            pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)&pFVar12->_padding_);
            if (pUVar11[0x1b].field_0x20 != '\0') {
              (**(code **)(*(longlong *)pUVar11 + 0x528))(pUVar11);
            }
          }
        }
        local_80.Object = this_00->Object;
        local_80.WeakReferenceCount.ReferenceController =
             (this->ActiveRootNode).SharedReferenceCount.ReferenceController;
        if (local_80.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_80.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
               (atomic<int>)
               ((int)(local_80.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
          UNLOCK();
        }
        HandleRootNodeDeactivated(this,&local_80);
      }
      TArray<TSharedRef<FActivatableTreeRoot,1>,TSizedDefaultAllocator<32>_>::RemoveSwap
                (&this->RootNodes,local_138,Default);
      if ((this->RootNodes).ArrayNum == 0) {
        if ((this->ActiveInputConfig).bIsSet != false) {
          (this->ActiveInputConfig).bIsSet = false;
        }
        RefreshActionDomainLeafNodeConfig(this);
      }
      goto LAB_14a7efab4;
    }
  }
  local_d0 = &(this->ActionDomainRootNodes).field_0x10;
  iVar18 = *(int *)&(this->ActionDomainRootNodes).field_0x28;
  iStack_d8 = 0;
  pTVar28 = &this->ActionDomainRootNodes;
  local_c0 = 0;
  local_148 = 0;
  uStack_d4 = 1;
  iStack_c4 = 0;
  if (iVar18 != 0) {
    puVar27 = *(uint **)&(this->ActionDomainRootNodes).field_0x20;
    if (puVar27 == (uint *)0x0) {
      puVar27 = (uint *)local_d0;
    }
    uVar23 = *puVar27;
    while (uVar23 == 0) {
      lVar15 = (longlong)iStack_d8;
      local_c0 = local_c0 + 0x20;
      iStack_d8 = iStack_d8 + 1;
      if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_d8) goto LAB_14a7ef5fd;
      uVar23 = puVar27[lVar15 + 1];
    }
    uStack_d4 = -uVar23 & uVar23;
    uVar2 = (ulonglong)uStack_d4 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_108 = (int)lVar15;
    iStack_c4 = local_c0 + -1 + local_108;
    if (iVar18 < iStack_c4) {
LAB_14a7ef5fd:
      iStack_c4 = iVar18;
    }
  }
  uVar23 = *(uint *)&(this->ActionDomainRootNodes).field_0x28;
  uStack_bc = local_3c;
  iStack_b8 = *(int *)&(this->ActionDomainRootNodes).field_0x8 -
              *(int *)&(this->ActionDomainRootNodes).field_0x34;
  uVar21 = uVar23 & 0xffffffe0;
  uStack_c8 = 0xffffffff;
  TStack_a8.CurrentBitIndex = iStack_c4;
  TStack_a8.UnvisitedBitMask = 0xffffffff;
  TStack_a8._padding_ = CONCAT44(uStack_d4,iStack_d8);
  iVar18 = (int)uVar23 >> 5;
  TStack_a8._28_4_ = local_3c;
  TStack_a8.BaseBitIndex = local_c0;
  uStack_88 = CONCAT44(uStack_b4,iStack_b8);
  local_res20 = uVar23;
  local_f8 = pTVar28;
  local_e0 = pTVar28;
  local_b0 = pTVar28;
  TStack_a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_d0;
  if (((int)uVar23 < 0) &&
     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar30)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar4 = *(uint *)&(this->ActionDomainRootNodes).field_0x28;
  if (uVar23 != uVar4) {
    puVar5 = *(undefined1 **)&(this->ActionDomainRootNodes).field_0x20;
    puVar26 = &(this->ActionDomainRootNodes).field_0x10;
    if (puVar5 != (undefined1 *)0x0) {
      puVar26 = puVar5;
    }
    uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar26 + (longlong)iVar18 * 4);
    while (uVar23 == 0) {
      lVar15 = (longlong)iVar18;
      uVar21 = uVar21 + 0x20;
      iVar18 = iVar18 + 1;
      uVar23 = uVar4;
      local_res20 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14a7ef720;
      uVar23 = *(uint *)(puVar26 + lVar15 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_104 = (int)lVar15;
    uVar23 = local_104 + -1 + uVar21;
    local_res20 = uVar23;
    if ((int)uVar4 < (int)uVar23) {
      uVar23 = uVar4;
      local_res20 = uVar4;
    }
  }
LAB_14a7ef720:
  while( true ) {
    pTVar9 = local_b0;
    if (*(int *)&local_b0->field_0x8 - *(int *)&local_b0->field_0x34 != (int)uStack_88) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_a8.CurrentBitIndex == uVar23) &&
        (TStack_a8.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)&(this->ActionDomainRootNodes).field_0x10)) &&
       (pTVar9 == pTVar28)) break;
    puVar19 = (ulonglong *)(*(longlong *)pTVar9 + 8 + (longlong)TStack_a8.CurrentBitIndex * 0x20);
    local_118 = local_138[0].Object;
    pTStack_110 = local_138[0].SharedReferenceCount.ReferenceController;
    if (local_138[0].SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
    {
      LOCK();
      (local_138[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_138[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_100 = puVar19;
    if ((((FActivatableTreeRoot **)*puVar19 <= &local_118) &&
        (&local_118 <
         (FActivatableTreeRoot **)*puVar19 + (longlong)*(int *)((longlong)puVar19 + 0xc) * 2)) &&
       (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar30)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar18 = (int)puVar19[1];
    lVar15 = (longlong)iVar18;
    if (iVar18 == 0) {
      iVar18 = 0;
    }
    else {
      plVar6 = (longlong *)*puVar19;
      iVar29 = 0;
      lVar20 = 0;
      bVar30 = (FActivatableTreeRoot *)*plVar6 != local_118;
      pFVar12 = local_118;
      iVar24 = 0;
      do {
        lVar20 = lVar20 + 1;
        iVar25 = iVar24 + 1;
        if (lVar20 < lVar15) {
          plVar13 = plVar6 + lVar20 * 2;
          do {
            if (bVar30 != ((FActivatableTreeRoot *)*plVar13 != pFVar12)) break;
            iVar25 = iVar25 + 1;
            lVar20 = lVar20 + 1;
            plVar13 = plVar13 + 2;
          } while (lVar20 < lVar15);
        }
        iVar22 = iVar25 - iVar24;
        if (bVar30 == false) {
          DestructItems<TSharedRef<FActivatableTreeRoot,1>,int>
                    ((TSharedRef<FActivatableTreeRoot,1> *)(plVar6 + (longlong)iVar24 * 2),iVar22);
          pFVar12 = local_118;
        }
        else {
          if (iVar29 != iVar24) {
            memmove(plVar6 + (longlong)iVar29 * 2,plVar6 + (longlong)iVar24 * 2,
                    (longlong)iVar22 << 4);
            pFVar12 = local_118;
          }
          iVar29 = iVar29 + iVar22;
        }
        bVar30 = (bool)(bVar30 ^ 1);
        iVar24 = iVar25;
      } while (lVar20 < lVar15);
      iVar18 = iVar18 - iVar29;
      *(int *)(local_100 + 1) = iVar29;
      pTVar28 = local_f8;
      uVar23 = local_res20;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_110)
    ;
    pFVar12 = local_138[0].Object;
    local_148 = local_148 + iVar18;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(local_138[0].Object)->OnLeafmostActiveNodeChanged,(FWriteAccessScope *)local_70);
    if ((*(int *)&(pFVar12->OnLeafmostActiveNodeChanged).field_0x10 != 0) &&
       (puVar7 = *(undefined8 **)&(pFVar12->OnLeafmostActiveNodeChanged).field_0x8,
       puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(pFVar12->OnLeafmostActiveNodeChanged).field_0x8,0,0,0x10);
      *(undefined4 *)&(pFVar12->OnLeafmostActiveNodeChanged).field_0x10 = 0;
    }
    if (local_70[0].bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70[0].Accessor,local_70);
    }
    FActivatableTreeNode::SetCanReceiveInput((FActivatableTreeNode *)local_138[0].Object,false);
    FActivatableTreeRoot::UpdateLeafNode(local_138[0].Object);
    TStack_a8.UnvisitedBitMask = TStack_a8.UnvisitedBitMask & ~TStack_a8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a8);
  }
  if (local_148 < 1) {
    local_f0 = FWeakObjectPtr::Get((FWeakObjectPtr *)&(local_138[0].Object)->_padding_);
    local_e8 = &local_f0;
    `UCommonUIActionRouterBase::HandleRootWidgetSlateReleased'::__l29::<lambda_1>::operator()
              (&local_e8);
  }
LAB_14a7efab4:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_138[0].SharedReferenceCount.ReferenceController);
  pTVar16 = (param_1->WeakReferenceCount).ReferenceController;
LAB_14a7efadf:
  if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar16->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar16->_padding_ + 8))(pTVar16,1);
    }
  }
  return;
}

// HandleSlateFocusChanging @ 14a7efe60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCommonUIActionRouterBase::HandleSlateFocusChanging
          (UCommonUIActionRouterBase *this,FFocusEvent *param_1,FWeakWidgetPath *param_2,
          TSharedPtr<SWidget,1> *param_3,FWidgetPath *param_4,TSharedPtr<SWidget,1> *param_5)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  TSharedPtr<FActivatableTreeRoot,1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  FActivatableTreeRoot *this_00;
  TSharedPtr<FActivatableTreeRoot,1> local_18;
  
  uVar1 = param_1->UserIndex;
  uVar3 = GetLocalPlayerIndex(this);
  if (uVar1 != uVar3) {
    return;
  }
  this_00 = (this->ActiveRootNode).Object;
  if (this_00 == (FActivatableTreeRoot *)0x0) {
    pTVar4 = FindActiveActionDomainRootNode(this,&local_18);
    this_00 = pTVar4->Object;
    pTVar5 = (pTVar4->SharedReferenceCount).ReferenceController;
    (pTVar4->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar4->Object = (FActivatableTreeRoot *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    if (this_00 == (FActivatableTreeRoot *)0x0) goto LAB_14a7efefe;
  }
  else {
    pTVar5 = (this->ActiveRootNode).SharedReferenceCount.ReferenceController;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  bVar2 = FActivatableTreeNode::IsParentOfWidget
                    ((FActivatableTreeNode *)this_00,param_3,IncludeSelf);
  if (bVar2) {
    FActivatableTreeRoot::RefreshCachedRestorationTarget(this_00);
  }
LAB_14a7efefe:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return;
}

// Initialize @ 14a7f3410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UCommonUIActionRouterBase::Initialize
          (UCommonUIActionRouterBase *this,FSubsystemCollectionBase *param_1)

{
  int iVar1;
  code *pcVar2;
  UEngine *pUVar3;
  bool bVar4;
  UCommonInputSubsystem *pUVar5;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  undefined8 *puVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  FSlateApplication *pFVar9;
  UClass *pUVar10;
  FCommonAnalogCursor *local_40;
  FSharedReferencer<1> local_38;
  TReferenceControllerBase<1> *local_28;
  
  pUVar5 = FSubsystemCollectionBase::InitializeDependency<UCommonInputSubsystem>(param_1);
  TMulticastDelegateRegistration<void___cdecl(UCommonActivatableWidget_&),FDefaultDelegateUserPolicy>
  ::AddUObject<UCommonUIActionRouterBase>
            ((TMulticastDelegateRegistration<void___cdecl(UCommonActivatableWidget_&),FDefaultDelegateUserPolicy>
              *)&UCommonActivatableWidget::OnRebuilding,
             (UCommonUIActionRouterBase *)&stack0x00000018,(pmf_0050741e)this);
  this_00 = FCoreUObjectDelegates::GetPostGarbageCollect();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UCommonUIActionRouterBase>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             this_00,(UCommonUIActionRouterBase *)&stack0x00000020,(pmf_83b3fc76)this);
  if (FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) {
    return;
  }
  if (pUVar5 == (UCommonInputSubsystem *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2489800349741744455>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\CommonUIActionRouterBase.cpp"
                       ,0x147,"InputSubsystem");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (2 < (byte)LogUIActionRouter._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogUIActionRouter);
    }
  }
  else {
    puVar6 = (undefined8 *)(**(code **)(this->_padding_ + 0x300))(this,&stack0xffffffffffffffd0);
    local_38.ReferenceController = (TReferenceControllerBase<1> *)puVar6[1];
    local_40 = (FCommonAnalogCursor *)*puVar6;
    if (local_38.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_38.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pUVar10 = (UClass *)0x0;
    if (&this->AnalogCursor != (TSharedPtr<FCommonAnalogCursor,1> *)&stack0xffffffffffffffc0) {
      (this->AnalogCursor).Object = local_40;
      local_40 = (FCommonAnalogCursor *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->AnalogCursor).SharedReferenceCount,&stack0xffffffffffffffc8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_28);
    (**(code **)(this->_padding_ + 0x308))(this);
    pUVar3 = GEngine;
    if (bCheckGameViewportClientValid != false) {
      pUVar8 = (GEngine->GameViewportClientClass).Class.field0_0x0.DebugPtr;
      if ((pUVar8 != (UClass *)0x0) &&
         (pUVar7 = Z_Construct_UClass_UGameViewportClient_NoRegister(), pUVar7 != (UClass *)0x0)) {
        iVar1 = (int)pUVar7->_padding_;
        if (((int)pUVar8->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar7->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          pUVar10 = (pUVar3->GameViewportClientClass).Class.field0_0x0.DebugPtr;
        }
      }
      pUVar8 = UCommonGameViewportClient::StaticClass();
      if (pUVar8 != (UClass *)0x0) {
        iVar1 = (int)pUVar8->_padding_;
        if (((int)pUVar10->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar10->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar8->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) goto LAB_14a7f35f1;
      }
      if (1 < (byte)LogUIActionRouter._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogUIActionRouter);
      }
    }
  }
LAB_14a7f35f1:
  pFVar9 = FSlateApplication::Get();
  TMulticastDelegateRegistration<void___cdecl(FFocusEvent_const_&,FWeakWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&,FWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
  ::AddUObject<UCommonUIActionRouterBase>
            ((TMulticastDelegateRegistration<void___cdecl(FFocusEvent_const_&,FWeakWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&,FWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
              *)&pFVar9->FocusChangingDelegate,(UCommonUIActionRouterBase *)&stack0xffffffffffffffb8
             ,(pmf_546395b4)this);
  return;
}

// IsPendingTreeChange @ 14a7f65c0

bool __thiscall UCommonUIActionRouterBase::IsPendingTreeChange(UCommonUIActionRouterBase *this)

{
  return 0 < (this->RebuiltWidgetsPendingNodeAssignment).ArrayNum;
}

// IsWidgetInActiveRoot @ 14a7f74f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UCommonUIActionRouterBase::IsWidgetInActiveRoot
          (UCommonUIActionRouterBase *this,UCommonActivatableWidget *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FCommonActivatableSlateMetaData *pFVar3;
  FDeprecateSlateVector2D FVar4;
  code *pcVar5;
  bool bVar6;
  atomic<int> aVar7;
  FSharedReferencer<1> FVar8;
  bool bVar9;
  undefined1 uVar10;
  atomic<int> aVar11;
  TSharedPtr<FActivatableTreeRoot,1> *pTVar12;
  TSharedPtr<FCommonActivatableSlateMetaData,1> *pTVar13;
  UClass *pUVar14;
  FDeprecateSlateVector2D FVar15;
  SWidget *pSVar16;
  FActivatableTreeRoot *pFVar17;
  TSharedPtr<SWidget,1> local_78;
  undefined8 local_68;
  FSharedReferencer<1> local_60;
  TSharedPtr<FActivatableTreeRoot,1> local_58;
  TSharedPtr<FActivatableTreeRoot,1> local_48;
  TSharedPtr<FCommonActivatableSlateMetaData,1> local_38;
  
  pFVar17 = (this->ActiveRootNode).Object;
  if (pFVar17 == (FActivatableTreeRoot *)0x0) {
    bVar6 = false;
    bVar9 = true;
    pTVar12 = FindActiveActionDomainRootNode(this,&local_48);
    pFVar17 = pTVar12->Object;
  }
  else {
    local_58.SharedReferenceCount.ReferenceController =
         (this->ActiveRootNode).SharedReferenceCount.ReferenceController;
    bVar6 = true;
    bVar9 = false;
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar12 = &local_58;
    local_58.Object = pFVar17;
  }
  FVar8.ReferenceController = local_58.SharedReferenceCount.ReferenceController;
  pTVar2 = (pTVar12->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar8.ReferenceController);
  }
  if ((param_1 != (UCommonActivatableWidget *)0x0) && (pFVar17 != (FActivatableTreeRoot *)0x0)) {
    UWidget::GetCachedWidget((UWidget *)param_1,&local_78);
    while (local_78.Object != (SWidget *)0x0) {
      pTVar13 = SWidget::GetMetaData<FCommonActivatableSlateMetaData>(local_78.Object,&local_38);
      pFVar3 = pTVar13->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
      FVar8.ReferenceController = local_78.SharedReferenceCount.ReferenceController;
      pSVar16 = local_78.Object;
      if (pFVar3 != (FCommonActivatableSlateMetaData *)0x0) {
        if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((local_78.Object == (SWidget *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
        FVar4 = pSVar16[1].PersistentState.AllottedGeometry.Size;
        if (FVar4 != (FDeprecateSlateVector2D)0x0) {
          pUVar14 = UCommonActivatableWidget::StaticClass();
          iVar1 = (int)pUVar14->_padding_;
          if ((iVar1 <= *(int *)(*(longlong *)((longlong)FVar4 + 0x10) + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)((longlong)FVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8)
              == &pUVar14->_padding_)) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar8.ReferenceController);
            FVar15 = (FDeprecateSlateVector2D)
                     FWeakObjectPtr::Get((FWeakObjectPtr *)&pFVar17->_padding_);
            if (FVar4 != FVar15) goto LAB_14a7f766d;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_78.SharedReferenceCount.ReferenceController);
            bVar9 = true;
            goto LAB_14a7f7708;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar8.ReferenceController);
      }
LAB_14a7f766d:
      if ((local_78.Object == (SWidget *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        uVar10 = (*pcVar5)();
        return (bool)uVar10;
      }
      local_60.ReferenceController =
           ((local_78.Object)->ParentWidgetPtr).WeakReferenceCount.ReferenceController;
      pSVar16 = (SWidget *)0x0;
      if (local_60.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        aVar7 = (local_60.ReferenceController)->SharedReferenceCount;
        do {
          if (aVar7 == (atomic<int>)0x0) {
            local_60.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            goto LAB_14a7f76d2;
          }
          LOCK();
          aVar11 = (local_60.ReferenceController)->SharedReferenceCount;
          bVar9 = aVar7 == aVar11;
          if (bVar9) {
            (local_60.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
            aVar11 = aVar7;
          }
          UNLOCK();
          aVar7 = aVar11;
        } while (!bVar9);
        pSVar16 = ((local_78.Object)->ParentWidgetPtr).Object;
      }
LAB_14a7f76d2:
      local_68 = 0;
      local_78.Object = pSVar16;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_78.SharedReferenceCount,&local_60);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_60.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
  }
  bVar9 = false;
LAB_14a7f7708:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return bVar9;
}

// MakeAnalogCursor @ 14a7f8460

TSharedRef<FCommonAnalogCursor,1> * __thiscall
UCommonUIActionRouterBase::MakeAnalogCursor
          (UCommonUIActionRouterBase *this,TSharedRef<FCommonAnalogCursor,1> *__return_storage_ptr__
          )

{
  code *pcVar1;
  bool bVar2;
  FCommonAnalogCursor *this_00;
  TSharedRef<FCommonAnalogCursor,1> *pTVar3;
  TRawPtrProxy<FCommonAnalogCursor> local_res18;
  
  this_00 = ::operator_new(0x150);
  if (this_00 == (FCommonAnalogCursor *)0x0) {
    this_00 = (FCommonAnalogCursor *)0x0;
  }
  else {
    FAnalogCursor::FAnalogCursor((FAnalogCursor *)this_00);
    this_00->ActionRouter = this;
    this_00->ActiveInputMethod = MouseAndKeyboard;
    this_00->bIsAnalogMovementEnabled = false;
    this_00->_padding_ = (longlong)&___7FCommonAnalogCursor__6B_;
    *(undefined8 *)&(this_00->PointerButtonDownKeys).Elements.field_0x8 = 0;
    this_00->bShouldHandleRightAnalog = true;
    *(undefined8 *)&(this_00->PointerButtonDownKeys).Elements = 0;
    *(undefined8 *)&(this_00->PointerButtonDownKeys).Elements.field_0x20 = 0;
    *(undefined4 *)&(this_00->PointerButtonDownKeys).Elements.field_0x28 = 0;
    *(undefined4 *)&(this_00->PointerButtonDownKeys).Elements.field_0x2c = 0x80;
    *(undefined4 *)&(this_00->PointerButtonDownKeys).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this_00->PointerButtonDownKeys).Elements.field_0x34 = 0;
    *(undefined8 *)&(this_00->PointerButtonDownKeys).Hash.SecondaryData.field_0x0 = 0;
    (this_00->PointerButtonDownKeys).HashSize = 0;
    (this_00->LastCursorTarget).Object = (SWidget *)0x0;
    (this_00->LastCursorTarget).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (this_00->LastCursorTargetTransform).M.M[0] = (float  [2])0x3f800000;
    (this_00->LastCursorTargetTransform).M.M[1][0] = 0.0;
    (this_00->LastCursorTargetTransform).M.M[1][1] = 1.0;
    (this_00->LastCursorTargetTransform).Trans.field0_0x0 = (TVector2<float>_u_0)0x0;
    (this_00->ActiveKeyUpEvent).bIsSet = false;
    this_00->TimeUntilScrollUpdate = 0.0;
    this_00->ShoulderButtonStatus = 0;
    if (((this_00->_padding_ != 0) && (this_00->_padding_ != 0)) &&
       (0 < *(int *)(this_00->_padding_ + 8))) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TSharedRef<FCommonAnalogCursor,1> *)(*pcVar1)();
        return pTVar3;
      }
    }
  }
  local_res18.Object = this_00;
  TSharedRef<FCommonAnalogCursor,1>::TSharedRef<FCommonAnalogCursor,1><FCommonAnalogCursor>
            (__return_storage_ptr__,&local_res18);
  (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xc0))();
  return __return_storage_ptr__;
}

// NotifyUserWidgetConstructed @ 14a7fb9a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCommonUIActionRouterBase::NotifyUserWidgetConstructed
          (UCommonUIActionRouterBase *this,UCommonUserWidget *param_1)

{
  int iVar1;
  SWidget *pSVar2;
  code *pcVar3;
  bool bVar4;
  TSharedPtr<SWidget,1> *pTVar5;
  UClass *pUVar6;
  UCommonActivatableWidget *pUVar7;
  TSharedPtr<FActivatableTreeNode,1> *pTVar8;
  FPendingWidgetRegistration *pFVar9;
  TSharedPtr<FActivatableTreeNode,1> local_38;
  TSharedPtr<SWidget,1> local_28;
  TSharedPtr<FActivatableTreeNode,1> local_18;
  
  pTVar5 = UWidget::GetCachedWidget((UWidget *)param_1,&local_28);
  pSVar2 = pTVar5->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if ((pSVar2 == (SWidget *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Widget.GetCachedWidget().IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\CommonUIActionRouterBase.cpp"
                         ,0x2e4,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (param_1 == (UCommonUserWidget *)0x0) {
LAB_14a7fba27:
    pUVar7 = (UCommonActivatableWidget *)0x0;
  }
  else {
    pUVar6 = UCommonActivatableWidget::StaticClass();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       (pUVar7 = (UCommonActivatableWidget *)param_1,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       != &pUVar6->_padding_)) goto LAB_14a7fba27;
  }
  FindNode(this,&local_38,pUVar7);
  if (local_38.Object == (FActivatableTreeNode *)0x0) {
    if ((pUVar7 == (UCommonActivatableWidget *)0x0) || (pUVar7->bIsModal == false)) {
      pUVar7 = ::FindOwningActivatable((UWidget *)param_1);
      if (pUVar7 != (UCommonActivatableWidget *)0x0) {
        pTVar8 = FindNode(this,&local_18,pUVar7);
        if (&local_38 != pTVar8) {
          local_38.Object = pTVar8->Object;
          pTVar8->Object = (FActivatableTreeNode *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&local_38.SharedReferenceCount,&pTVar8->SharedReferenceCount);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_18.SharedReferenceCount.ReferenceController);
      }
      if (local_38.Object != (FActivatableTreeNode *)0x0) goto LAB_14a7fbacf;
    }
    if (0 < (param_1->ActionBindings).ArrayNum) {
      pFVar9 = GetOrCreatePendingRegistration(this,(UWidget *)param_1);
      TArray<FUIActionBindingHandle,TSizedDefaultAllocator<32>_>::
      Append<FUIActionBindingHandle,TSizedDefaultAllocator<32>_>
                (&pFVar9->ActionBindings,&param_1->ActionBindings);
    }
  }
  else {
LAB_14a7fbacf:
    RegisterWidgetBindings(this,&local_38,&param_1->ActionBindings);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return;
}

// NotifyUserWidgetDestructed @ 14a7fbb10

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCommonUIActionRouterBase::NotifyUserWidgetDestructed
          (UCommonUIActionRouterBase *this,UCommonUserWidget *param_1)

{
  int *piVar1;
  FWeakObjectPtr *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UCommonUserWidget *pUVar6;
  UClass *pUVar7;
  UCommonActivatableWidget *pUVar8;
  TSharedPtr<FActivatableTreeNode,1> *pTVar9;
  uint uVar10;
  FWeakObjectPtr *this_00;
  uint uVar11;
  FPendingWidgetRegistration *this_01;
  TSharedPtr<FActivatableTreeNode,1> local_38;
  TSharedPtr<FActivatableTreeNode,1> local_28;
  
  pFVar2 = (FWeakObjectPtr *)(this->PendingWidgetRegistrations).AllocatorInstance.Data;
  iVar5 = (this->PendingWidgetRegistrations).ArrayNum;
  for (this_00 = pFVar2; this_00 != pFVar2 + (longlong)iVar5 * 8; this_00 = this_00 + 8) {
    pUVar6 = (UCommonUserWidget *)FWeakObjectPtr::Get(this_00);
    if (param_1 == pUVar6) {
      uVar10 = (uint)((longlong)this_00 - (longlong)pFVar2 >> 6);
      if (uVar10 != 0xffffffff) {
        uVar11 = 0;
        if ((int)uVar10 < (this->PendingWidgetRegistrations).ArrayNum) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        this_01 = (FPendingWidgetRegistration *)
                  ((this->PendingWidgetRegistrations).AllocatorInstance.Data +
                  (longlong)(int)uVar10 * 0x40);
        FPendingWidgetRegistration::~FPendingWidgetRegistration(this_01);
        iVar5 = ((this->PendingWidgetRegistrations).ArrayNum - uVar10) + -1;
        if (iVar5 != 0) {
          memmove(this_01,this_01 + 1,(longlong)iVar5 << 6);
        }
        piVar1 = &(this->PendingWidgetRegistrations).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,&(this->PendingWidgetRegistrations).AllocatorInstance,
                   (this->PendingWidgetRegistrations).ArrayNum,
                   &(this->PendingWidgetRegistrations).ArrayMax);
        return;
      }
      break;
    }
  }
  if (((this->PersistentActions).Object == (FPersistentActionCollection *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FActionRouterBindingCollection::RemoveBindings
            ((FActionRouterBindingCollection *)(this->PersistentActions).Object,
             &param_1->ActionBindings);
  if (param_1 == (UCommonUserWidget *)0x0) {
LAB_14a7fbbcf:
    pUVar8 = (UCommonActivatableWidget *)0x0;
  }
  else {
    pUVar7 = UCommonActivatableWidget::StaticClass();
    iVar5 = (int)pUVar7->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar5) ||
       (pUVar8 = (UCommonActivatableWidget *)param_1,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar5 * 8)
       != &pUVar7->_padding_)) goto LAB_14a7fbbcf;
  }
  FindNode(this,&local_38,pUVar8);
  if (local_38.Object == (FActivatableTreeNode *)0x0) {
    if ((pUVar8 != (UCommonActivatableWidget *)0x0) && (pUVar8->bIsModal != false))
    goto LAB_14a7fbc5a;
    pUVar8 = ::FindOwningActivatable((UWidget *)param_1);
    if (pUVar8 != (UCommonActivatableWidget *)0x0) {
      pTVar9 = FindNode(this,&local_28,pUVar8);
      if (&local_38 != pTVar9) {
        local_38.Object = pTVar9->Object;
        pTVar9->Object = (FActivatableTreeNode *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&local_38.SharedReferenceCount,&pTVar9->SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
    }
    if (local_38.Object == (FActivatableTreeNode *)0x0) goto LAB_14a7fbc5a;
  }
  FActionRouterBindingCollection::RemoveBindings
            ((FActionRouterBindingCollection *)local_38.Object,&param_1->ActionBindings);
LAB_14a7fbc5a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return;
}

// OnShowDebugInfo @ 14a7fe820

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UCommonUIActionRouterBase::OnShowDebugInfo
          (UCommonUIActionRouterBase *this,AHUD *param_1,UCanvas *param_2,FDebugDisplayInfo *param_3
          ,float *param_4,float *param_5)

{
  longlong lVar1;
  FActionRouterBindingCollection *this_00;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  ECommonInputType EVar5;
  uint uVar6;
  uint uVar7;
  UFont *this_01;
  UCommonInputSubsystem *this_02;
  FUIInputConfig *pFVar8;
  FString *pFVar9;
  uint uVar10;
  FDisplayDebugManager *this_03;
  float fVar11;
  float fVar12;
  float local_res18 [2];
  float local_a8;
  float local_a4;
  float local_a0 [2];
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38 [2];
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&NAME_ActionRouter,"ActionRouter");
    _Init_thread_footer(&::_TSS0);
  }
  if ((param_2 != (UCanvas *)0x0) &&
     (cVar3 = (**(code **)(param_1->_padding_ + 0x7b8))(param_1,&NAME_ActionRouter), cVar3 != '\0'))
  {
    this_03 = &param_2->DisplayDebugManager;
    this_01 = UEngine::GetSmallFont();
    if ((this_01 != (UFont *)0x0) &&
       (this_01 != (UFont *)(param_2->DisplayDebugManager).DebugTextItem._padding_)) {
      (param_2->DisplayDebugManager).DebugTextItem._padding_ = (longlong)this_01;
      fVar11 = UFont::GetMaxCharHeight(this_01);
      (param_2->DisplayDebugManager).MaxCharHeight = fVar11;
    }
    if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      InputModeEnum = StaticEnum<enum_ECommonInputMode>();
      _Init_thread_footer(&::_TSS1);
    }
    if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
      MouseCaptureModeEnum = StaticEnum<enum_EMouseCaptureMode>();
      _Init_thread_footer(&::_TSS2);
    }
    if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
      InputTypeEnum = StaticEnum<enum_ECommonInputType>();
      _Init_thread_footer(&::_TSS3);
    }
    if ((InputModeEnum == (UEnum *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InputModeEnum",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\CommonUIActionRouterBase.cpp"
                           ,0x58b,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((MouseCaptureModeEnum == (UEnum *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("MouseCaptureModeEnum",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\CommonUIActionRouterBase.cpp"
                           ,0x58c,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((InputTypeEnum == (UEnum *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InputTypeEnum",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\CommonUIActionRouterBase.cpp"
                           ,0x58d,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this_02 = GetInputSubsystem(this);
    EVar5 = UCommonInputSubsystem::GetCurrentInputType(this_02);
    CastChecked<ULocalPlayer,UObject>((UObject *)this->_padding_);
    fVar11 = __real_3b808081;
    uVar6 = (uint)FColor::White.field0_0x0._s_0.A;
    uVar10 = (uint)FColor::White.field0_0x0._s_0.B;
    fVar12 = (float)FColor::White.field0_0x0._1_1_ * __real_3b808081;
    *(float *)&(param_2->DisplayDebugManager).DebugTextItem._padding_ =
         (float)FColor::White.field0_0x0._2_1_ * __real_3b808081;
    *(float *)((longlong)&(param_2->DisplayDebugManager).DebugTextItem._padding_ + 4) = fVar12;
    *(float *)&(param_2->DisplayDebugManager).DebugTextItem._padding_ = (float)uVar10 * fVar11;
    *(float *)((longlong)&(param_2->DisplayDebugManager).DebugTextItem._padding_ + 4) =
         (float)uVar6 * fVar11;
    local_res18[0] = 0.0;
    UEnum::GetNameStringByValue(InputTypeEnum,&local_48,(ulonglong)EVar5);
    ::FString::PrintfImpl(&local_68,L"Action Router - Player [%d]: Input Type[%s]");
    FDisplayDebugManager::DrawString(this_03,&local_68,local_res18);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if ((this->ActiveInputConfig).bIsSet == false) {
      uVar6 = (uint)FColor::Red.field0_0x0._s_0.G;
      uVar10 = (uint)FColor::Red.field0_0x0._s_0.B;
      uVar7 = (uint)FColor::Red.field0_0x0._s_0.A;
      *(float *)&(param_2->DisplayDebugManager).DebugTextItem._padding_ =
           (float)FColor::Red.field0_0x0._2_1_ * fVar11;
      *(float *)((longlong)&(param_2->DisplayDebugManager).DebugTextItem._padding_ + 4) =
           (float)uVar6 * fVar11;
      *(float *)&(param_2->DisplayDebugManager).DebugTextItem._padding_ = (float)uVar10 * fVar11;
      *(float *)((longlong)&(param_2->DisplayDebugManager).DebugTextItem._padding_ + 4) =
           (float)uVar7 * fVar11;
      local_a4 = 0.0;
      pFVar9 = ::FString::FString(local_38,L"    No Input Config");
      FDisplayDebugManager::DrawString(this_03,pFVar9,&local_a4);
    }
    else {
      pFVar8 = TOptional<FUIInputConfig>::operator->(&this->ActiveInputConfig);
      UEnum::GetNameStringByValue(InputModeEnum,&local_78,(ulonglong)pFVar8->InputMode);
      pFVar8 = TOptional<FUIInputConfig>::operator->(&this->ActiveInputConfig);
      UEnum::GetNameStringByValue
                (MouseCaptureModeEnum,&local_88,(ulonglong)pFVar8->MouseCaptureMode);
      local_a8 = 0.0;
      ::FString::PrintfImpl(&local_58,L"    Input Mode [%s] Mouse Capture [%s]");
      FDisplayDebugManager::DrawString(this_03,&local_58,&local_a8);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      local_38[0].Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
        local_38[0].Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
      }
    }
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
    uVar6 = (uint)FColor::White.field0_0x0._s_0.G;
    uVar10 = (uint)FColor::White.field0_0x0._s_0.B;
    uVar7 = (uint)FColor::White.field0_0x0._s_0.A;
    *(float *)&(param_2->DisplayDebugManager).DebugTextItem._padding_ =
         (float)FColor::White.field0_0x0._2_1_ * fVar11;
    *(float *)((longlong)&(param_2->DisplayDebugManager).DebugTextItem._padding_ + 4) =
         (float)uVar6 * fVar11;
    *(float *)&(param_2->DisplayDebugManager).DebugTextItem._padding_ = (float)uVar10 * fVar11;
    *(float *)((longlong)&(param_2->DisplayDebugManager).DebugTextItem._padding_ + 4) =
         (float)uVar7 * fVar11;
    local_a0[0] = 0.0;
    if (((this->PersistentActions).Object == (FPersistentActionCollection *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this_00 = (FActionRouterBindingCollection *)(this->PersistentActions).Object;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
    ::FString::AppendChars(&local_98,L"\nPersistent Action Collection:",0x1e);
    FActionRouterBindingCollection::DebugDumpActionBindings(this_00,&local_98,0);
    FDisplayDebugManager::DrawString(this_03,&local_98,local_a0);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// PopulateAutoCompleteEntries @ 14a802030

void __thiscall
UCommonUIActionRouterBase::PopulateAutoCompleteEntries
          (UCommonUIActionRouterBase *this,
          TArray<FAutoCompleteCommand,TSizedDefaultAllocator<32>_> *param_1)

{
  UObject *pUVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  UClass *this_00;
  uint uVar7;
  
  this_00 = Z_Construct_UClass_UConsoleSettings_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  iVar5 = param_1->ArrayNum;
  pUVar1 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  if (iVar5 == param_1->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar5 + 1;
  DefaultConstructItems<FAutoCompleteCommand,int>
            ((param_1->AllocatorInstance).Data + (longlong)iVar5 * 0x28,1);
  uVar7 = param_1->ArrayNum - 1;
  uVar6 = 0;
  if ((int)uVar7 < param_1->ArrayNum) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  ::FString::operator=
            ((FString *)(pFVar2 + (longlong)iVar5 * 0x28 + -0x28),L"showdebug ActionRouter");
  ::FString::operator=
            ((FString *)(pFVar2 + (longlong)iVar5 * 0x28 + -0x18),
             L"Toggles display of Action Router");
  *(undefined4 *)(pFVar2 + (longlong)iVar5 * 0x28 + -8) = *(undefined4 *)&pUVar1[2].field_0x10;
  return;
}

// PostAnalogCursorCreate @ 14a802230

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCommonUIActionRouterBase::PostAnalogCursorCreate(UCommonUIActionRouterBase *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  UObject *pUVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  UEngine *pUVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  FSlateApplication *this_00;
  FTSTicker *this_01;
  undefined8 *puVar10;
  ulong64 uVar11;
  TWeakPtr<FTSTicker::FElement,1> *pTVar12;
  UClass *pUVar13;
  UCommonUIActionRouterBase *pUStackX_8;
  TSharedPtr<IInputProcessor,1> TStack_78;
  undefined1 auStack_68 [8];
  FDelegateAllocation FStack_60;
  FDestructionSentinel FStack_50;
  FDelegateAllocation *pFStack_38;
  
  pUVar7 = GEngine;
  pUVar13 = (UClass *)0x0;
  pUVar9 = (GEngine->GameViewportClientClass).Class.field0_0x0.DebugPtr;
  if ((pUVar9 != (UClass *)0x0) &&
     (pUVar8 = Z_Construct_UClass_UGameViewportClient_NoRegister(), pUVar8 != (UClass *)0x0)) {
    iVar3 = (int)pUVar8->_padding_;
    if (((int)pUVar9->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar3 * 8) != &pUVar8->_padding_)
       ) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      pUVar13 = (pUVar7->GameViewportClientClass).Class.field0_0x0.DebugPtr;
    }
  }
  pUVar9 = UCommonGameViewportClient::StaticClass();
  if (pUVar9 != (UClass *)0x0) {
    iVar3 = (int)pUVar9->_padding_;
    if (((int)pUVar13->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar3 * 8) != &pUVar9->_padding_
       )) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      this_00 = FSlateApplication::Get();
      pUVar9 = UCommonUIInputSettings::StaticClass();
      if ((pUVar9->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar9);
      }
      pUVar4 = (pUVar9->ClassDefaultObject).field0_0x0.DebugPtr;
      TStack_78.Object = (IInputProcessor *)(this->AnalogCursor).Object;
      TStack_78.SharedReferenceCount.ReferenceController =
           (this->AnalogCursor).SharedReferenceCount.ReferenceController;
      if (TStack_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (TStack_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(TStack_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FSlateApplication::RegisterInputPreProcessor
                (this_00,&TStack_78,(FInputPreprocessorRegistrationKey *)&pUVar4[2].field_0x4);
    }
  }
  if (this->bIsActivatableTreeEnabled != false) {
    TStack_78.Object = (IInputProcessor *)(this->TickHandle).Object;
    TStack_78.SharedReferenceCount.ReferenceController =
         (this->TickHandle).WeakReferenceCount.ReferenceController;
    if (TStack_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (TStack_78.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(TStack_78.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    FTSTicker::RemoveTicker((TWeakPtr<FTSTicker::FElement,1> *)&TStack_78);
    this_01 = FTSTicker::GetCoreTicker();
    auStack_68 = (undefined1  [8])0x0;
    FStack_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    FStack_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_68,
               (FWriteAccessScope *)&FStack_50);
    pFStack_38 = &FStack_60;
    puVar10 = UE::Core::Private::DelegateAllocate(0x28,&FStack_60);
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar11 = FDelegateHandle::GenerateNewID();
      puVar10[2] = uVar11;
      *puVar10 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonUIActionRouterBase____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar10[3] = 0;
      pUStackX_8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&pUStackX_8);
      puVar10[4] = Tick;
    }
    if (FStack_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_50.Accessor,&FStack_50);
    }
    pTVar12 = FTSTicker::AddTicker
                        (this_01,(TWeakPtr<FTSTicker::FElement,1> *)&TStack_78,
                         (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)auStack_68,0.0
                        );
    if (&this->TickHandle != pTVar12) {
      (this->TickHandle).Object = pTVar12->Object;
      pTVar12->Object = (FElement *)0x0;
      pTVar5 = (this->TickHandle).WeakReferenceCount.ReferenceController;
      (this->TickHandle).WeakReferenceCount.ReferenceController =
           (pTVar12->WeakReferenceCount).ReferenceController;
      (pTVar12->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar5->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
        }
      }
    }
    if (TStack_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(TStack_78.SharedReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((TStack_78.SharedReferenceCount.ReferenceController)->_padding_ + 8))
                  (TStack_78.SharedReferenceCount.ReferenceController,1);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_68,
               (FWriteAccessScope *)&FStack_50);
    if ((FStack_60.DelegateSize != 0) &&
       (FStack_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)FStack_60.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&FStack_60,0,0,0x10);
      FStack_60.DelegateSize = 0;
    }
    if (FStack_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_50.Accessor,&FStack_50);
    }
    if (FStack_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)FStack_60.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)auStack_68);
  }
  return;
}

// ProcessHoldInputOnActionDomains @ 14a8037a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EProcessHoldActionResult __thiscall
UCommonUIActionRouterBase::ProcessHoldInputOnActionDomains
          (UCommonUIActionRouterBase *this,ECommonInputMode param_1,FKey *param_2,
          EInputEvent param_3,int param_4)

{
  int iVar1;
  UCommonInputActionDomainTable *pUVar2;
  UCommonInputActionDomain *this_00;
  longlong *plVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  EProcessHoldActionResult EVar7;
  ULocalPlayer *this_01;
  UCommonInputSubsystem *pUVar8;
  FActionDomainSortedRootList *pFVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  bool local_78;
  bool local_77;
  undefined1 local_76 [2];
  uint local_74;
  FScriptContainerElement *local_70;
  UCommonInputActionDomain *local_68;
  FScriptContainerElement *local_60;
  FName local_58;
  FKeyDetails *local_50;
  TReferenceControllerBase<1> *local_48;
  
  EVar7 = Unhandled;
  this_01 = CastChecked<ULocalPlayer,UObject>((UObject *)this->_padding_);
  pUVar8 = ULocalPlayer::GetSubsystem<UCommonInputSubsystem>(this_01);
  if (pUVar8 != (UCommonInputSubsystem *)0x0) {
    pUVar2 = (pUVar8->ActionDomainTable).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar2 != (UCommonInputActionDomainTable *)0x0) goto LAB_14a80380c;
    }
    else if (pUVar2 != (UCommonInputActionDomainTable *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
LAB_14a80380c:
      local_74 = (pUVar2->ActionDomains).ArrayNum;
      uVar10 = (ulonglong)(int)local_74;
      pFVar11 = (pUVar2->ActionDomains).AllocatorInstance.Data;
      local_60 = pFVar11 + uVar10 * 8;
      while( true ) {
        pFVar12 = local_60;
        local_70 = pFVar11;
        if ((pUVar2->ActionDomains).ArrayNum != (int)uVar10) {
          `TCheckedPointerIterator<TObjectPtr<UCommonInputActionDomain>_const_,int,0>::operator!='::
          __l2::<lambda_1>::operator()(&local_77);
        }
        if (pFVar11 == pFVar12) break;
        this_00 = *(UCommonInputActionDomain **)pFVar11;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_00 != (UCommonInputActionDomain *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        local_68 = this_00;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_00 != (UCommonInputActionDomain *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        pFVar9 = TMapBase<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,0>_>
                 ::Find((TMapBase<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,0>_>
                         *)&this->ActionDomainRootNodes,
                        (TObjectPtr<UCommonInputActionDomain_const_>)&local_68);
        if (pFVar9 != (FActionDomainSortedRootList *)0x0) {
          iVar1 = (pFVar9->RootList).ArrayNum;
          pFVar11 = (pFVar9->RootList).AllocatorInstance.Data;
          local_78 = false;
          pFVar12 = pFVar11 + (longlong)iVar1 * 0x10;
          local_77 = false;
          while( true ) {
            if ((pFVar9->RootList).ArrayNum != iVar1) {
              `TCheckedPointerIterator<TSharedRef<FActivatableTreeRoot,1>_const_,int,0>::operator!='
              ::__l2::<lambda_1>::operator()(local_76);
            }
            if (pFVar11 == pFVar12) break;
            cVar5 = (**(code **)(**(longlong **)pFVar11 + 0x18))();
            if ((cVar5 != '\0') && (EVar7 == Unhandled)) {
              plVar3 = *(longlong **)pFVar11;
              pcVar4 = *(code **)(*plVar3 + 8);
              local_58 = param_2->KeyName;
              local_50 = (param_2->KeyDetails).Object;
              local_48 = (param_2->KeyDetails).SharedReferenceCount.ReferenceController;
              if (local_48 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                local_48->SharedReferenceCount =
                     (atomic<int>)((int)local_48->SharedReferenceCount + 1);
                UNLOCK();
              }
              EVar7 = (*pcVar4)(plVar3,param_1,&local_58,param_3,param_4);
              local_77 = true;
              local_78 = (bool)(local_78 | EVar7 == Handled);
              bVar6 = UCommonInputActionDomain::ShouldBreakInnerEventFlow(this_00,EVar7 == Handled);
              if (bVar6) break;
            }
            pFVar11 = pFVar11 + 0x10;
          }
          bVar6 = UCommonInputActionDomain::ShouldBreakEventFlow(this_00,local_77,local_78);
          if (bVar6) break;
        }
        uVar10 = (ulonglong)local_74;
        pFVar11 = local_70 + 8;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
      return EVar7;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
  return Unhandled;
}

// ProcessInput @ 14a803a00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ERouteUIInputResult __thiscall
UCommonUIActionRouterBase::ProcessInput
          (UCommonUIActionRouterBase *this,FKey *param_1,EInputEvent param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ULocalPlayer *this_00;
  bool bVar3;
  bool bVar4;
  char cVar5;
  ULocalPlayer *this_01;
  UGameInstance *this_02;
  TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_> *pTVar6;
  UCommonUIActionRouterBase *pUVar7;
  FScriptContainerElement *pFVar8;
  ECommonInputMode EVar9;
  undefined1 local_res8 [8];
  FName local_a8;
  FKeyDetails *local_a0;
  TReferenceControllerBase<1> *local_98;
  ECommonInputMode local_90;
  int local_8c;
  ECommonInputMode *local_88;
  FName *local_80;
  FKey *local_78;
  EInputEvent local_70;
  ECommonInputMode local_68 [8];
  FName local_60;
  FKeyDetails *local_58;
  TReferenceControllerBase<1> *local_50;
  EInputEvent local_48;
  int local_44;
  
  if ((param_2 & ~IE_Repeat) == IE_Pressed) {
    TArray<FKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FKey_const_&>(&this->HeldKeys,param_1);
  }
  else if (param_2 == IE_Released) {
    TArray<FKey,TSizedDefaultAllocator<32>_>::RemoveSwap(&this->HeldKeys,param_1,Default);
  }
  if ((this->ActiveInputConfig).bIsSet == false) {
    EVar9 = All;
  }
  else {
    EVar9 = (this->ActiveInputConfig).TypedValue.InputMode;
  }
  local_8c = GetLocalPlayerIndex(this);
  local_60 = param_1->KeyName;
  local_58 = (param_1->KeyDetails).Object;
  local_50 = (param_1->KeyDetails).SharedReferenceCount.ReferenceController;
  if (local_50 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_50->SharedReferenceCount = (atomic<int>)((int)local_50->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_a8 = param_1->KeyName;
  local_a0 = (param_1->KeyDetails).Object;
  local_98 = (param_1->KeyDetails).SharedReferenceCount.ReferenceController;
  if (local_98 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_98->SharedReferenceCount = (atomic<int>)((int)local_98->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_88 = local_68;
  local_80 = &local_a8;
  local_90 = EVar9;
  local_78 = param_1;
  local_70 = param_2;
  local_68[0] = EVar9;
  local_48 = param_2;
  local_44 = local_8c;
  bVar3 = `UCommonUIActionRouterBase::ProcessInput'::__l2::<lambda_3>::operator()(&local_88,this);
  if ((bSupportMultiUserInput != false) && (!bVar3)) {
    this_01 = CastChecked<ULocalPlayer,UObject>((UObject *)this->_padding_);
    this_02 = ULocalPlayer::GetGameInstance(this_01);
    if (this_02 != (UGameInstance *)0x0) {
      pTVar6 = UGameInstance::GetLocalPlayers(this_02);
      pFVar8 = (pTVar6->AllocatorInstance).Data;
      iVar2 = pTVar6->ArrayNum;
      pFVar1 = pFVar8 + (longlong)iVar2 * 8;
      while( true ) {
        if (pTVar6->ArrayNum != iVar2) {
          `TCheckedPointerIterator<ULocalPlayer_*_const,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (pFVar8 == pFVar1) goto LAB_14a803b7b;
        this_00 = *(ULocalPlayer **)pFVar8;
        if ((((this_00 != this_01) && (this_00 != (ULocalPlayer *)0x0)) &&
            (pUVar7 = ULocalPlayer::GetSubsystem<UCommonUIActionRouterBase>(this_00),
            pUVar7 != (UCommonUIActionRouterBase *)0x0)) &&
           (bVar4 = `UCommonUIActionRouterBase::ProcessInput'::__l2::<lambda_3>::operator()
                              (&local_88,pUVar7), bVar4)) break;
        pFVar8 = pFVar8 + 8;
      }
      goto LAB_14a803b83;
    }
  }
LAB_14a803b7b:
  if (!bVar3) {
    cVar5 = (**(code **)(this->_padding_ + 0x2e8))(this);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_98);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
    return (cVar5 != '\0') + BlockGameInput;
  }
LAB_14a803b83:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return Handled;
}

// ProcessInputOnActionDomains @ 14a803c10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UCommonUIActionRouterBase::ProcessInputOnActionDomains
          (UCommonUIActionRouterBase *this,ECommonInputMode param_1,FKey *param_2,
          EInputEvent param_3,int param_4)

{
  int iVar1;
  UCommonInputActionDomain *this_00;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ULocalPlayer *this_01;
  UCommonInputSubsystem *pUVar7;
  FActionDomainSortedRootList *pFVar8;
  ulonglong uVar9;
  UCommonInputActionDomainTable *pUVar10;
  byte bVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  byte bVar14;
  byte local_78;
  undefined1 local_77 [3];
  uint local_74;
  FScriptContainerElement *local_70;
  UCommonInputActionDomain *local_68;
  UCommonInputActionDomainTable *local_60;
  FScriptContainerElement *local_58;
  FName local_50;
  FKeyDetails *local_48;
  TReferenceControllerBase<1> *local_40;
  
  this_01 = CastChecked<ULocalPlayer,UObject>((UObject *)this->_padding_);
  pUVar7 = ULocalPlayer::GetSubsystem<UCommonInputSubsystem>(this_01);
  if (pUVar7 != (UCommonInputSubsystem *)0x0) {
    pUVar10 = (pUVar7->ActionDomainTable).field0_0x0.DebugPtr;
    local_60 = pUVar10;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar10 == (UCommonInputActionDomainTable *)0x0) goto LAB_14a803e4e;
    }
    else {
      if (pUVar10 == (UCommonInputActionDomainTable *)0x0) goto LAB_14a803e4e;
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
    local_74 = (pUVar10->ActionDomains).ArrayNum;
    uVar9 = (ulonglong)(int)local_74;
    bVar11 = 0;
    pFVar13 = (pUVar10->ActionDomains).AllocatorInstance.Data;
    local_78 = 0;
    local_58 = pFVar13 + uVar9 * 8;
    while( true ) {
      pFVar12 = local_58;
      local_70 = pFVar13;
      if ((pUVar10->ActionDomains).ArrayNum != (int)uVar9) {
        `TCheckedPointerIterator<TObjectPtr<UCommonInputActionDomain>_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_77);
      }
      if (pFVar13 == pFVar12) break;
      this_00 = *(UCommonInputActionDomain **)pFVar13;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_00 != (UCommonInputActionDomain *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      local_68 = this_00;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_00 != (UCommonInputActionDomain *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      pFVar8 = TMapBase<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,0>_>
               ::Find((TMapBase<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,0>_>
                       *)&this->ActionDomainRootNodes,
                      (TObjectPtr<UCommonInputActionDomain_const_>)&local_68);
      if (pFVar8 != (FActionDomainSortedRootList *)0x0) {
        iVar1 = (pFVar8->RootList).ArrayNum;
        bVar14 = 0;
        pFVar13 = (pFVar8->RootList).AllocatorInstance.Data;
        bVar6 = false;
        pFVar12 = pFVar13 + (longlong)iVar1 * 0x10;
        while( true ) {
          if ((pFVar8->RootList).ArrayNum != iVar1) {
            `TCheckedPointerIterator<TSharedRef<FActivatableTreeRoot,1>_const_,int,0>::operator!='::
            __l2::<lambda_1>::operator()(local_77);
          }
          if (pFVar13 == pFVar12) break;
          bVar4 = FActivatableTreeNode::IsWidgetActivated(*(FActivatableTreeNode **)pFVar13);
          bVar5 = bVar6;
          if (bVar4) {
            plVar2 = *(longlong **)pFVar13;
            pcVar3 = *(code **)(*plVar2 + 0x10);
            local_50 = param_2->KeyName;
            local_48 = (param_2->KeyDetails).Object;
            local_40 = (param_2->KeyDetails).SharedReferenceCount.ReferenceController;
            if (local_40 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              local_40->SharedReferenceCount =
                   (atomic<int>)((int)local_40->SharedReferenceCount + 1);
              UNLOCK();
            }
            bVar5 = (bool)(*pcVar3)(plVar2,param_1,&local_50,param_3,param_4);
            bVar14 = bVar14 | bVar5;
            bVar6 = true;
            bVar4 = UCommonInputActionDomain::ShouldBreakInnerEventFlow(this_00,bVar5);
            bVar5 = true;
            if (bVar4) break;
          }
          bVar6 = bVar5;
          pFVar13 = pFVar13 + 0x10;
        }
        bVar11 = local_78 | bVar14;
        bVar6 = UCommonInputActionDomain::ShouldBreakEventFlow(this_00,bVar6,(bool)bVar14);
        pUVar10 = local_60;
        local_78 = bVar11;
        if (bVar6) break;
      }
      uVar9 = (ulonglong)local_74;
      pFVar13 = local_70 + 8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
    return (bool)bVar11;
  }
LAB_14a803e4e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
  return false;
}

// ProcessRebuiltWidgets @ 14a8045b0

void __thiscall UCommonUIActionRouterBase::ProcessRebuiltWidgets(UCommonUIActionRouterBase *this)

{
  RefreshRootNodes(this);
  RefreshBoundActions(this);
  return;
}

// RefreshActionDomainLeafNodeConfig @ 14a80ca90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UCommonUIActionRouterBase::RefreshActionDomainLeafNodeConfig(UCommonUIActionRouterBase *this)

{
  int iVar1;
  UCommonInputActionDomainTable *pUVar2;
  code *pcVar3;
  FActivatableTreeRoot *this_00;
  bool bVar4;
  ULocalPlayer *this_01;
  UCommonInputSubsystem *pUVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  FUIInputConfig local_res10;
  TSharedPtr<FActivatableTreeRoot,1> local_38;
  TSharedPtr<FActivatableTreeNode,1> local_28;
  
  iVar1 = (this->RootNodes).ArrayNum;
  pFVar6 = (this->RootNodes).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->RootNodes).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedRef<FActivatableTreeRoot,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar7) break;
    bVar4 = FActivatableTreeNode::IsWidgetActivated(*(FActivatableTreeNode **)pFVar6);
    if (bVar4) {
      return;
    }
    pFVar6 = pFVar6 + 0x10;
  }
  this_01 = CastChecked<ULocalPlayer,UObject>((UObject *)this->_padding_);
  pUVar5 = ULocalPlayer::GetSubsystem<UCommonInputSubsystem>(this_01);
  if ((pUVar5 != (UCommonInputSubsystem *)0x0) &&
     (pUVar2 = (pUVar5->ActionDomainTable).field0_0x0.DebugPtr,
     pUVar2 != (UCommonInputActionDomainTable *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    if (0 < (this->RebuiltWidgetsPendingNodeAssignment).ArrayNum) {
      RefreshRootNodes(this);
    }
    FindActiveActionDomainRootNode(this,&local_38);
    this_00 = local_38.Object;
    if (local_38.Object == (FActivatableTreeRoot *)0x0) {
      local_res10.InputMode = pUVar2->InputMode;
      local_res10.MouseCaptureMode = pUVar2->MouseCaptureMode;
      local_res10.bHideCursorDuringViewportCapture = pUVar2->bHideCursorDuringViewportCapture;
      local_res10.bIgnoreMoveInput = false;
      local_res10.bIgnoreLookInput = false;
      if ((local_res10.MouseCaptureMode == CapturePermanently) ||
         (local_res10.MouseLockMode = DoNotLock,
         local_res10.MouseCaptureMode == CapturePermanently_IncludingInitialMouseDown)) {
        local_res10.MouseLockMode = LockOnCapture;
      }
      SetActiveUIInputConfig(this,&local_res10,(UObject *)pUVar2);
    }
    else {
      if ((local_38.Object == (FActivatableTreeRoot *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_28.Object = (FActivatableTreeNode *)local_38.Object;
      local_28.SharedReferenceCount.ReferenceController =
           local_38.SharedReferenceCount.ReferenceController;
      if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar4 = FActivatableTreeRoot::UpdateLeafmostActiveNode(this_00,&local_28,true);
      if (!bVar4) {
        if ((this_00 == (FActivatableTreeRoot *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FActivatableTreeRoot::ApplyLeafmostNodeConfig(this_00,false);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  return;
}

// RefreshActiveRootFocus @ 14a80cc60

void __thiscall UCommonUIActionRouterBase::RefreshActiveRootFocus(UCommonUIActionRouterBase *this)

{
  TSharedPtr<FActivatableTreeRoot,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  FActivatableTreeRoot *this_00;
  TSharedPtr<FActivatableTreeRoot,1> local_18;
  
  this_00 = (this->ActiveRootNode).Object;
  if (this_00 == (FActivatableTreeRoot *)0x0) {
    pTVar1 = FindActiveActionDomainRootNode(this,&local_18);
    this_00 = pTVar1->Object;
    pTVar2 = (pTVar1->SharedReferenceCount).ReferenceController;
    (pTVar1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar1->Object = (FActivatableTreeRoot *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    if (this_00 == (FActivatableTreeRoot *)0x0) goto LAB_14a80ccc6;
  }
  else {
    pTVar2 = (this->ActiveRootNode).SharedReferenceCount.ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  FActivatableTreeRoot::FocusLeafmostNode(this_00);
LAB_14a80ccc6:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// RefreshActiveRootFocusRestorationTarget @ 14a80cce0

void __thiscall
UCommonUIActionRouterBase::RefreshActiveRootFocusRestorationTarget(UCommonUIActionRouterBase *this)

{
  TReferenceControllerBase<1> *pTVar1;
  bool bVar2;
  bool bVar3;
  FSharedReferencer<1> FVar4;
  TSharedPtr<FActivatableTreeRoot,1> *pTVar5;
  FActivatableTreeRoot *this_00;
  TSharedPtr<FActivatableTreeRoot,1> local_38;
  TSharedPtr<FActivatableTreeRoot,1> local_28;
  
  this_00 = (this->ActiveRootNode).Object;
  bVar2 = false;
  if (this_00 == (FActivatableTreeRoot *)0x0) {
    pTVar5 = FindActiveActionDomainRootNode(this,&local_28);
    bVar3 = false;
    bVar2 = true;
    this_00 = pTVar5->Object;
  }
  else {
    local_38.SharedReferenceCount.ReferenceController =
         (this->ActiveRootNode).SharedReferenceCount.ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar5 = &local_38;
    bVar3 = true;
    local_38.Object = this_00;
  }
  FVar4.ReferenceController = local_38.SharedReferenceCount.ReferenceController;
  pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (bVar2) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  if (bVar3) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar4.ReferenceController);
  }
  if (this_00 != (FActivatableTreeRoot *)0x0) {
    FActivatableTreeRoot::RefreshCachedRestorationTarget(this_00);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// RefreshBoundActions @ 14a80cda0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCommonUIActionRouterBase::RefreshBoundActions(UCommonUIActionRouterBase *this)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  FPendingWidgetRegistration *pFVar5;
  code *pcVar6;
  FActivatableTreeNode *pFVar7;
  FSharedReferencer<1> FVar8;
  FWeakObjectPtr *pFVar9;
  bool bVar10;
  TSharedPtr<SWidget,1> *pTVar11;
  UClass *pUVar12;
  UCommonActivatableWidget *pUVar13;
  TSharedPtr<FActivatableTreeNode,1> *pTVar14;
  UObject *pUVar15;
  ulonglong uVar16;
  UCommonActivatableWidget *pUVar17;
  longlong *plVar18;
  bool bVar19;
  FScriptContainerElement *pFVar20;
  uint local_res10 [2];
  undefined1 local_res18 [8];
  uint local_res20;
  TSharedPtr<FActivatableTreeNode,1> local_b8;
  UCommonActivatableWidget *local_a8;
  FWeakObjectPtr local_a0;
  UCommonActivatableWidget **local_98;
  UCommonActivatableWidget *local_90;
  FWeakObjectPtr *local_88;
  TSharedRef<IInputProcessor,1> local_80;
  TSharedPtr<SWidget,1> local_70;
  TSharedPtr<FActivatableTreeNode,1> local_60 [2];
  
  bVar19 = false;
  local_res10[0] = 0;
  pFVar20 = (this->PendingWidgetRegistrations).AllocatorInstance.Data;
  local_res20 = (this->PendingWidgetRegistrations).ArrayNum;
  uVar16 = (ulonglong)(int)local_res20;
  local_88 = (FWeakObjectPtr *)(pFVar20 + uVar16 * 0x40);
  pFVar20 = pFVar20 + 0x38;
  do {
    pFVar9 = local_88;
    if ((this->PendingWidgetRegistrations).ArrayNum != (int)uVar16) {
      local_res10[0] = local_res10[0] & 0xffffff00;
      `TCheckedPointerIterator<UCommonUIActionRouterBase::FPendingWidgetRegistration,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((FWeakObjectPtr *)(pFVar20 + -0x38) == pFVar9) {
      piVar1 = &(this->PendingWidgetRegistrations).ArrayMax;
      pFVar5 = (FPendingWidgetRegistration *)
               (this->PendingWidgetRegistrations).AllocatorInstance.Data;
      iVar2 = (this->PendingWidgetRegistrations).ArrayNum;
      if ((this->PendingWidgetRegistrations).ArrayMax < 0) {
        DestructItems<UCommonUIActionRouterBase::FPendingWidgetRegistration,int>(pFVar5,iVar2);
        (this->PendingWidgetRegistrations).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40,8,0,&(this->PendingWidgetRegistrations).AllocatorInstance,0,piVar1);
        }
      }
      else {
        DestructItems<UCommonUIActionRouterBase::FPendingWidgetRegistration,int>(pFVar5,iVar2);
        (this->PendingWidgetRegistrations).ArrayNum = 0;
      }
      return;
    }
    local_a8 = (UCommonActivatableWidget *)FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar20 + -0x38));
    if (local_a8 == (UCommonActivatableWidget *)0x0) {
LAB_14a80ce2e:
      bVar10 = false;
    }
    else {
      bVar19 = true;
      pTVar11 = UWidget::GetCachedWidget((UWidget *)local_a8,&local_70);
      if (pTVar11->Object == (SWidget *)0x0) goto LAB_14a80ce2e;
      bVar10 = true;
    }
    if (bVar19) {
      bVar19 = false;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_70.SharedReferenceCount.ReferenceController);
    }
    pUVar13 = local_a8;
    if (bVar10) {
      if (local_a8 == (UCommonActivatableWidget *)0x0) {
LAB_14a80ce7a:
        pUVar17 = (UCommonActivatableWidget *)0x0;
      }
      else {
        pUVar12 = UCommonActivatableWidget::StaticClass();
        iVar2 = (int)pUVar12->_padding_;
        if ((*(int *)(pUVar13->_padding_ + 0x38) < iVar2) ||
           (pUVar17 = pUVar13,
           (longlong *)
           *(undefined1 **)(*(longlong *)(pUVar13->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
           &pUVar12->_padding_)) goto LAB_14a80ce7a;
      }
      FindNode(this,&local_b8,pUVar17);
      if ((local_b8.Object == (FActivatableTreeNode *)0x0) &&
         (((pUVar17 == (UCommonActivatableWidget *)0x0 || (pUVar17->bIsModal == false)) &&
          (pUVar13 = ::FindOwningActivatable((UWidget *)pUVar13),
          pUVar13 != (UCommonActivatableWidget *)0x0)))) {
        pTVar14 = FindNode(this,local_60,pUVar13);
        if (&local_b8 != pTVar14) {
          local_b8.Object = pTVar14->Object;
          pTVar14->Object = (FActivatableTreeNode *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&local_b8.SharedReferenceCount,&pTVar14->SharedReferenceCount);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_60[0].SharedReferenceCount.ReferenceController);
      }
      RegisterWidgetBindings
                (this,&local_b8,
                 (TArray<FUIActionBindingHandle,TSizedDefaultAllocator<32>_> *)(pFVar20 + -0x30));
      if (((local_b8.Object != (FActivatableTreeNode *)0x0) &&
          (pUVar15 = FWeakObjectPtr::Get(&((local_b8.Object)->RepresentedWidget).WeakPtr),
          FVar8.ReferenceController = local_b8.SharedReferenceCount.ReferenceController,
          pUVar15 != (UObject *)0x0)) &&
         (*(FActivatableTreeNode **)&pUVar15[0x1d].field_0x8 = local_b8.Object,
         local_b8.SharedReferenceCount.ReferenceController !=
         *(TReferenceControllerBase<1> **)&pUVar15[0x1d].field_0x10)) {
        if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_b8.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
               (atomic<int>)
               ((int)(local_b8.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar18 = *(longlong **)&pUVar15[0x1d].field_0x10;
        if (plVar18 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar18 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar18 + 8))(plVar18,1);
          }
        }
        *(TReferenceControllerBase<1> **)&pUVar15[0x1d].field_0x10 = FVar8.ReferenceController;
      }
      if ((pFVar20[-0x20] != (FScriptContainerElement)0x0) || (0 < *(int *)pFVar20)) {
        if (local_b8.Object == (FActivatableTreeNode *)0x0) {
          local_98 = &local_a8;
          bVar10 = `UCommonUIActionRouterBase::RefreshBoundActions'::__l13::<lambda_1>::operator()
                             (&local_98);
          if (!bVar10) goto LAB_14a80d12b;
        }
        if (pFVar20[-0x20] != (FScriptContainerElement)0x0) {
          if ((local_b8.Object == (FActivatableTreeNode *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pUVar13 = local_a8;
          pFVar7 = local_b8.Object;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_a8 != (UCommonActivatableWidget *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_a8);
          }
          local_a0.ObjectIndex = 0;
          local_a0.ObjectSerialNumber = 0;
          local_90 = pUVar13;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar13 != (UCommonActivatableWidget *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar13);
          }
          FWeakObjectPtr::operator=(&local_a0,(FObjectPtr)&local_90);
          TArray<TWeakObjectPtr<UWidget_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
          AddUniqueImpl<TWeakObjectPtr<UWidget_const_,FWeakObjectPtr>_>
                    (&pFVar7->ScrollRecipients,
                     (TWeakObjectPtr<UWidget_const_,FWeakObjectPtr> *)&local_a0);
        }
        lVar3 = *(longlong *)(pFVar20 + -8);
        iVar2 = *(int *)pFVar20;
        plVar18 = (longlong *)(lVar3 + 8);
        while( true ) {
          if (*(int *)pFVar20 != iVar2) {
            local_res18[0] = 0;
            `TCheckedPointerIterator<FInputPreprocessorRegistration_const_,int,0>::operator!='::__l2
            ::<lambda_1>::operator()(local_res18);
          }
          if (plVar18 + -1 == (longlong *)(lVar3 + (longlong)iVar2 * 0x18)) break;
          if ((local_b8.Object == (FActivatableTreeNode *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar7 = local_b8.Object;
          if ((*plVar18 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x408,L""), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pTVar4 = (TReferenceControllerBase<1> *)plVar18[1];
          local_80.Object = (IInputProcessor *)*plVar18;
          if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_80.SharedReferenceCount.ReferenceController = pTVar4;
          if ((local_80.Object == (IInputProcessor *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x25d,L""), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FActivatableTreeNode::AddInputPreprocessor
                    (pFVar7,&local_80,(FInputPreprocessorRegistrationKey *)(plVar18 + -1));
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar4);
          plVar18 = plVar18 + 3;
        }
      }
LAB_14a80d12b:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b8.SharedReferenceCount.ReferenceController);
    }
    pFVar20 = pFVar20 + 0x40;
    uVar16 = (ulonglong)local_res20;
  } while( true );
}

// RefreshRootNodes @ 14a80d660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCommonUIActionRouterBase::RefreshRootNodes(UCommonUIActionRouterBase *this)

{
  undefined1 *puVar1;
  int *piVar2;
  atomic<int> *paVar3;
  TArray<TSharedRef<FActivatableTreeRoot,1>,TSizedDefaultAllocator<32>_> *pTVar4;
  FWeakObjectPtr *pFVar5;
  atomic<int> aVar6;
  TSharedRef<FActivatableTreeRoot,1> *pTVar7;
  code *pcVar8;
  FIdentityFunctor FVar9;
  FActivatableTreeRoot *pFVar10;
  FSharedReferencer<1> FVar11;
  FSharedReferencer<1> FVar12;
  FActivatableTreeNode *this_00;
  longlong *plVar13;
  bool bVar14;
  bool bVar15;
  char cVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  UWidget *pUVar20;
  TSharedPtr<SWidget,1> *pTVar21;
  UObject *pUVar22;
  TArray<UCommonActivatableWidget_*,TSizedDefaultAllocator<32>_> *pTVar23;
  FActivatableTreeRoot *pFVar24;
  undefined8 *puVar25;
  ulong64 uVar26;
  TObjectPtr<UCommonInputActionDomain> TVar27;
  FActionDomainSortedRootList *pFVar28;
  UCommonActivatableWidget *pUVar29;
  UCommonActivatableWidget *pUVar30;
  ulonglong uVar31;
  longlong lVar32;
  FScriptContainerElement *pFVar33;
  ulonglong uVar34;
  ForElementType<TAlignedBytes<16,16>_> *pFVar35;
  TObjectPtr<UCommonInputActionDomain>_u_0 TVar36;
  ForAnyElementType FVar37;
  ForAnyElementType FVar38;
  FWeakObjectPtr *pFVar39;
  uint uVar40;
  uint *puVar41;
  uint uVar42;
  undefined1 auStackY_388 [32];
  FIdentityFunctor local_338;
  undefined1 local_337;
  undefined1 local_336 [6];
  ForAnyElementType local_330;
  undefined8 local_328;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_320;
  FDelegateAllocation local_318;
  TSharedRef<FActivatableTreeRoot,1> local_308;
  undefined1 local_2f8;
  undefined1 local_2f7 [7];
  FWeakObjectPtr local_2f0;
  int local_2e8;
  uint local_2e4;
  UObject *local_2e0;
  UObject *local_2d8 [2];
  FActivatableTreeRoot *local_2c8;
  TReferenceControllerBase<1> *pTStack_2c0;
  TArray<UCommonActivatableWidget_*,TSizedDefaultAllocator<32>_> local_2b8;
  TArray<UCommonActivatableWidget_*,TSizedDefaultAllocator<32>_> local_2a8;
  UCommonActivatableWidget *local_298;
  TObjectPtr<UCommonInputActionDomain>_u_0 local_290;
  UCommonActivatableWidget *local_288;
  FScriptContainerElement *local_280;
  UCommonUIActionRouterBase *local_278;
  FActivatableTreeRoot *local_270;
  FScriptContainerElement *local_268;
  UCommonUIActionRouterBase *local_260;
  int local_258;
  int local_254;
  TRawPtrProxy<FActivatableTreeRoot> local_250;
  TSharedPtr<FActivatableTreeNode,1> local_248;
  UCommonUIActionRouterBase *local_238;
  longlong *local_230;
  uint uStack_228;
  uint uStack_224;
  TBitArray<FDefaultBitArrayAllocator> *local_220;
  undefined4 uStack_218;
  uint uStack_214;
  uint local_210;
  int iStack_208;
  undefined4 uStack_204;
  longlong *local_200;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1f8;
  undefined8 uStack_1d8;
  TSharedRef<FActivatableTreeNode,1> local_1d0;
  TWeakPtr<FActivatableTreeRoot,1> local_1c0;
  TSharedRef<FActivatableTreeNode,1> local_1b0;
  FDestructionSentinel local_1a0;
  FDestructionSentinel local_188;
  FDestructionSentinel local_170;
  FDestructionSentinel local_158;
  longlong *local_140;
  FDestructionSentinel local_138;
  longlong *local_120;
  FDestructionSentinel local_118;
  FDelegateAllocation *local_100;
  TSharedPtr<SWidget,1> local_f8;
  FReadAccessScope local_e0;
  undefined1 local_c8 [8];
  FReadAccessScope local_c0 [2];
  undefined4 local_8c;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_388;
  local_5c = 0x80;
  bVar15 = false;
  local_2e4 = 0;
  local_330.Data = (FScriptContainerElement *)0x0;
  pFVar39 = (FWeakObjectPtr *)(this->RebuiltWidgetsPendingNodeAssignment).AllocatorInstance.Data;
  iVar19 = (this->RebuiltWidgetsPendingNodeAssignment).ArrayNum;
  local_328 = 0;
  local_88._0_8_ = 0;
  local_88._8_8_ = 0;
  pFVar5 = pFVar39 + iVar19;
  local_68 = (uint *)0x0;
  local_60 = 0;
  local_2e8 = -1;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  while( true ) {
    if ((this->RebuiltWidgetsPendingNodeAssignment).ArrayNum != iVar19) {
      local_337 = 0;
      `TCheckedPointerIterator<TWeakObjectPtr<UCommonActivatableWidget,FWeakObjectPtr>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_337);
    }
    if (pFVar39 == pFVar5) break;
    local_2f0 = *pFVar39;
    bVar14 = FWeakObjectPtr::IsValid(&local_2f0);
    if (bVar14) {
      pUVar20 = (UWidget *)FWeakObjectPtr::Get(&local_2f0);
      bVar15 = true;
      pTVar21 = UWidget::GetCachedWidget(pUVar20,&local_f8);
      if (pTVar21->Object == (SWidget *)0x0) goto LAB_14a80d757;
      bVar14 = true;
    }
    else {
LAB_14a80d757:
      bVar14 = false;
    }
    if (bVar15) {
      bVar15 = false;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_f8.SharedReferenceCount.ReferenceController);
    }
    if (bVar14) {
      pUVar22 = FWeakObjectPtr::Get(&local_2f0);
      if (pUVar22[0x19].field_0x2 != '\0') {
        local_298 = (UCommonActivatableWidget *)0x0;
LAB_14a80d895:
        local_2d8[0] = FWeakObjectPtr::Get(&local_2f0);
        if (((local_330.Data <= (FScriptContainerElement *)local_2d8) &&
            ((FScriptContainerElement *)local_2d8 < local_330.Data + (longlong)local_328._4_4_ * 8))
           && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar18 = (uint)local_328;
        if ((uint)local_328 == local_328._4_4_) {
          iVar18 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_330,(int *)((longlong)&local_328 + 4));
        }
        local_328 = CONCAT44(local_328._4_4_,iVar18 + 1);
        *(UObject **)(local_330.Data + (longlong)iVar18 * 8) = local_2d8[0];
        goto LAB_14a80d948;
      }
      pUVar20 = (UWidget *)FWeakObjectPtr::Get(&local_2f0);
      local_298 = ::FindOwningActivatable(pUVar20);
      if (local_298 == (UCommonActivatableWidget *)0x0) goto LAB_14a80d895;
      uVar17 = ((uint)((ulonglong)local_298 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_298 >> 4)) *
               -0x7a143595;
      uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
      pTVar23 = TMapBase<UCommonActivatableWidget_*,TArray<UCommonActivatableWidget_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UCommonActivatableWidget_*,TArray<UCommonActivatableWidget_*,TSizedDefaultAllocator<32>_>,0>_>
                ::FindOrAddImpl<UCommonActivatableWidget_*_const_&>
                          ((TMapBase<UCommonActivatableWidget_*,TArray<UCommonActivatableWidget_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UCommonActivatableWidget_*,TArray<UCommonActivatableWidget_*,TSizedDefaultAllocator<32>_>,0>_>
                            *)local_88,uVar17 >> 0x10 ^ uVar17,&local_298);
      local_2e0 = FWeakObjectPtr::Get(&local_2f0);
      pFVar33 = (pTVar23->AllocatorInstance).Data;
      if (((pFVar33 <= (FScriptContainerElement *)&local_2e0) &&
          ((FScriptContainerElement *)&local_2e0 < pFVar33 + (longlong)pTVar23->ArrayMax * 8)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar14)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar18 = pTVar23->ArrayNum;
      if (iVar18 == pTVar23->ArrayMax) {
        iVar18 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar23->AllocatorInstance,&pTVar23->ArrayMax);
      }
      pTVar23->ArrayNum = iVar18 + 1;
      pFVar39 = pFVar39 + 1;
      *(UObject **)((pTVar23->AllocatorInstance).Data + (longlong)iVar18 * 8) = local_2e0;
    }
    else {
LAB_14a80d948:
      pFVar39 = pFVar39 + 1;
    }
  }
  (this->RebuiltWidgetsPendingNodeAssignment).ArrayNum = 0;
  if ((this->RebuiltWidgetsPendingNodeAssignment).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->RebuiltWidgetsPendingNodeAssignment).AllocatorInstance,0,
               &(this->RebuiltWidgetsPendingNodeAssignment).ArrayMax);
  }
  FVar9 = local_338;
  uVar31 = (ulonglong)(int)(uint)local_328;
  local_2e4 = (uint)local_328;
  local_268 = local_330.Data + uVar31 * 8;
  uVar34 = uVar31;
  FVar37.Data = local_330.Data;
  while( true ) {
    pFVar33 = local_268;
    local_280 = FVar37.Data;
    if ((int)uVar31 != (int)uVar34) {
      local_336[0] = 0;
      `TCheckedPointerIterator<UCommonActivatableWidget_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_336);
    }
    uVar17 = 0;
    if (FVar37.Data == pFVar33) break;
    pUVar30 = *(UCommonActivatableWidget **)FVar37.Data;
    local_288 = pUVar30;
    pFVar24 = ::operator_new(0x118);
    if (pFVar24 == (FActivatableTreeRoot *)0x0) {
      pFVar24 = (FActivatableTreeRoot *)0x0;
    }
    else {
      FActivatableTreeNode::FActivatableTreeNode((FActivatableTreeNode *)pFVar24,this,pUVar30);
      pFVar24->_padding_ = (longlong)&___7FActivatableTreeRoot__6B_;
      *(undefined8 *)&(pFVar24->OnLeafmostActiveNodeChanged).field_0x0 = 0;
      *(undefined8 *)&(pFVar24->OnLeafmostActiveNodeChanged).field_0x8 = 0;
      *(undefined4 *)&(pFVar24->OnLeafmostActiveNodeChanged).field_0x10 = 0;
      (pFVar24->LeafmostActiveNode).Object = (FActivatableTreeNode *)0x0;
      (pFVar24->LeafmostActiveNode).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (((pFVar24->_padding_ != 0) && (pFVar24->_padding_ != 0)) &&
         ((0 < *(int *)(pFVar24->_padding_ + 8) &&
          (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                              ("!InObject || !InObject->DoesSharedInstanceExist()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x7a5,L"Trying to share an already-shared object"), bVar15)))) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    local_250.Object = pFVar24;
    TSharedRef<FActivatableTreeRoot,1>::TSharedRef<FActivatableTreeRoot,1><FActivatableTreeRoot>
              (&local_308,&local_250);
    (**(code **)((local_308.Object)->_padding_ + 0x28))();
    FVar11.ReferenceController = local_308.SharedReferenceCount.ReferenceController;
    pFVar24 = local_308.Object;
    local_270 = local_308.Object;
    if (local_308.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_308.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_308.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(local_308.Object)->_padding_,(FWriteAccessScope *)&local_158);
    local_140 = &pFVar24->_padding_;
    puVar25 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_140);
    if (puVar25 != (undefined8 *)0x0) {
      *puVar25 = &
                 ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFActivatableTreeRoot___00____6B_
      ;
      puVar25[1] = pFVar24;
      puVar25[2] = FVar11.ReferenceController;
      if (FVar11.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar11.ReferenceController)->WeakReferenceCount =
             (atomic<int>)((int)(FVar11.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      uVar26 = FDelegateHandle::GenerateNewID();
      puVar25[3] = uVar26;
      *puVar25 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonUIActionRouterBase____A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFActivatableTreeRoot___00____6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UCommonUIActionRouterBase *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar25[4] = 0;
      local_238 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UCommonUIActionRouterBase *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar25 + 4),(FObjectPtr)&local_238);
      puVar25[5] = HandleRootNodeActivated;
    }
    if (local_158.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_158.Accessor,&local_158);
    }
    pFVar10 = local_308.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(local_308.Object)->_padding_,(FWriteAccessScope *)&local_138);
    local_120 = &pFVar10->_padding_;
    puVar25 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_120);
    if (puVar25 != (undefined8 *)0x0) {
      *puVar25 = &
                 ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFActivatableTreeRoot___00____6B_
      ;
      puVar25[1] = pFVar24;
      puVar25[2] = FVar11.ReferenceController;
      if (FVar11.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar11.ReferenceController)->WeakReferenceCount =
             (atomic<int>)((int)(FVar11.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      uVar26 = FDelegateHandle::GenerateNewID();
      puVar25[3] = uVar26;
      *puVar25 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonUIActionRouterBase____A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFActivatableTreeRoot___00____6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UCommonUIActionRouterBase *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar25[4] = 0;
      local_260 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UCommonUIActionRouterBase *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar25 + 4),(FObjectPtr)&local_260);
      puVar25[5] = HandleRootNodeDeactivated;
    }
    if (local_138.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_138.Accessor,&local_138);
    }
    local_320.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_318.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_318.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_320,(FWriteAccessScope *)&local_118);
    local_100 = &local_318;
    puVar25 = UE::Core::Private::DelegateAllocate(0x30,&local_318);
    if (puVar25 != (undefined8 *)0x0) {
      *puVar25 = &
                 ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFActivatableTreeRoot___00____6B_
      ;
      puVar25[1] = pFVar24;
      puVar25[2] = FVar11.ReferenceController;
      if (FVar11.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar11.ReferenceController)->WeakReferenceCount =
             (atomic<int>)((int)(FVar11.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      uVar26 = FDelegateHandle::GenerateNewID();
      puVar25[3] = uVar26;
      *puVar25 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonUIActionRouterBase____A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFActivatableTreeRoot___00____6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UCommonUIActionRouterBase *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar25[4] = 0;
      local_278 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UCommonUIActionRouterBase *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar25 + 4),(FObjectPtr)&local_278);
      puVar25[5] = HandleRootWidgetSlateReleased;
    }
    if (local_118.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_118.Accessor,&local_118);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pUVar30->OnSlateReleasedEvent,(FWriteAccessScope *)&local_188);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_320,&local_e0)
    ;
    if (((local_318.DelegateSize == 0) ||
        (local_318.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
       (cVar16 = (**(code **)(*(longlong *)local_318.DelegateAllocator + 0x38))(), cVar16 == '\0'))
    {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_e0);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_e0);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &pUVar30->OnSlateReleasedEvent,true);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                (&local_320,local_c0);
      if ((local_318.DelegateSize != 0) &&
         (local_318.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (**(code **)(*(longlong *)local_318.DelegateAllocator + 0x40))
                  (local_318.DelegateAllocator,local_c8);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (local_c0);
      iVar19 = *(int *)&(pUVar30->OnSlateReleasedEvent).field_0x10;
      puVar1 = &(pUVar30->OnSlateReleasedEvent).field_0x14;
      if (iVar19 == *(int *)puVar1) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,(ForAnyElementType *)&(pUVar30->OnSlateReleasedEvent).field_0x8,
                            (int *)puVar1);
        *(int *)&(pUVar30->OnSlateReleasedEvent).field_0x10 = iVar19;
      }
      *(int *)&(pUVar30->OnSlateReleasedEvent).field_0x10 = iVar19 + 1;
      pFVar35 = (ForElementType<TAlignedBytes<16,16>_> *)
                ((longlong)iVar19 * 0x10 + *(longlong *)&(pUVar30->OnSlateReleasedEvent).field_0x8);
      *pFVar35 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      *(undefined4 *)(pFVar35 + 1) = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_320,(FWriteAccessScope *)&local_1a0);
      if (*pFVar35 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)*pFVar35);
      }
      *pFVar35 = local_318.DelegateAllocator;
      local_318.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      *(int *)(pFVar35 + 1) = local_318.DelegateSize;
      local_318.DelegateSize = 0;
      if (local_1a0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a0.Accessor,&local_1a0);
      }
    }
    if (local_188.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_188.Accessor,&local_188);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_320,(FWriteAccessScope *)&local_170);
    if ((local_318.DelegateSize != 0) &&
       (local_318.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_318.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_318,0,0,0x10);
      local_318.DelegateSize = 0;
    }
    if (local_170.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_170.Accessor,&local_170);
    }
    if (local_318.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_318.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_320.AccessDetector);
    pUVar30 = local_288;
    TVar27 = UCommonActivatableWidget::GetCalculatedActionDomain(local_288);
                    /* WARNING: Load size is inaccurate */
    TVar36.DebugPtr = *TVar27.field0_0x0;
    if (TVar36.DebugPtr == (UCommonInputActionDomain *)0x0) {
      pTVar4 = &this->RootNodes;
      pTVar7 = (TSharedRef<FActivatableTreeRoot,1> *)(pTVar4->AllocatorInstance).Data;
      if (((pTVar7 <= &local_308) && (&local_308 < pTVar7 + (this->RootNodes).ArrayMax)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar19 = (this->RootNodes).ArrayNum;
      piVar2 = &(this->RootNodes).ArrayMax;
      if (iVar19 == *piVar2) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar4->AllocatorInstance,piVar2);
      }
      pFVar33 = (pTVar4->AllocatorInstance).Data + (longlong)iVar19 * 0x10;
      (this->RootNodes).ArrayNum = iVar19 + 1;
      *(FActivatableTreeRoot **)pFVar33 = local_308.Object;
      *(TReferenceControllerBase<1> **)(pFVar33 + 8) =
           local_308.SharedReferenceCount.ReferenceController;
      if (local_308.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_308.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_308.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    else {
      local_290 = TVar36;
      if (((UE::GC::GIsIncrementalReachabilityPending != false) &&
          (UE::GC::MarkAsReachable((UObject *)TVar36.DebugPtr), TVar36 = local_290,
          UE::GC::GIsIncrementalReachabilityPending != false)) &&
         (local_290.DebugPtr != (UCommonInputActionDomain *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_290.DebugPtr);
      }
      uVar17 = ((uint)((ulonglong)TVar36.DebugPtr >> 0x14) & 0xffff ^
               (uint)((ulonglong)TVar36.DebugPtr >> 4)) * -0x7a143595;
      uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
      pFVar28 = TMapBase<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,0>_>
                ::FindOrAddImpl<TObjectPtr<UCommonInputActionDomain>_>
                          ((TMapBase<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,0>_>
                            *)&this->ActionDomainRootNodes,uVar17 >> 0x10 ^ uVar17,
                           (TObjectPtr<UCommonInputActionDomain> *)&local_290.ObjectPtr);
      local_2c8 = local_308.Object;
      pTStack_2c0 = local_308.SharedReferenceCount.ReferenceController;
      if (local_308.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_308.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_308.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar33 = (pFVar28->RootList).AllocatorInstance.Data;
      if (((pFVar33 <= (FScriptContainerElement *)&local_2c8) &&
          ((FScriptContainerElement *)&local_2c8 <
           pFVar33 + (longlong)(pFVar28->RootList).ArrayMax * 0x10)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar19 = (pFVar28->RootList).ArrayNum;
      piVar2 = &(pFVar28->RootList).ArrayMax;
      if (iVar19 == *piVar2) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,(ForAnyElementType *)pFVar28,piVar2);
      }
      (pFVar28->RootList).ArrayNum = iVar19 + 1;
      pFVar33 = (pFVar28->RootList).AllocatorInstance.Data + (longlong)iVar19 * 0x10;
      *(FActivatableTreeRoot **)pFVar33 = local_2c8;
      *(TReferenceControllerBase<1> **)(pFVar33 + 8) = pTStack_2c0;
      if (pTStack_2c0 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_2c0->SharedReferenceCount =
             (atomic<int>)((int)pTStack_2c0->SharedReferenceCount + 1);
        UNLOCK();
      }
      AlgoImpl::
      IntroSortInternal<TSharedRef<FActivatableTreeRoot,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedRef<FActivatableTreeRoot,1>,_UCommonUIActionRouterBase::FActionDomainSortedRootList::Sort_::__l2::<lambda_1>_>_>
                ((TSharedRef<FActivatableTreeRoot,1> *)(pFVar28->RootList).AllocatorInstance.Data,
                 (pFVar28->RootList).ArrayNum,FVar9,(<lambda_1> *)&local_2f8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_2c0);
    }
    FVar12.ReferenceController = local_308.SharedReferenceCount.ReferenceController;
    pFVar24 = local_308.Object;
    if (local_308.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_308.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_308.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_2b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2b8.ArrayNum = 0;
    local_2b8.ArrayMax = 0;
    pUVar29 = (UCommonActivatableWidget *)
              FWeakObjectPtr::Get((FWeakObjectPtr *)&(local_308.Object)->_padding_);
    bVar15 = TMap<UCommonActivatableWidget_*,TArray<UCommonActivatableWidget_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UCommonActivatableWidget_*,TArray<UCommonActivatableWidget_*,TSizedDefaultAllocator<32>_>,0>_>
             ::RemoveAndCopyValue
                       ((TMap<UCommonActivatableWidget_*,TArray<UCommonActivatableWidget_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UCommonActivatableWidget_*,TArray<UCommonActivatableWidget_*,TSizedDefaultAllocator<32>_>,0>_>
                         *)local_88,pUVar29,&local_2b8);
    if (bVar15) {
      pFVar33 = local_2b8.AllocatorInstance.Data + (longlong)local_2b8.ArrayNum * 8;
      for (FVar37.Data = local_2b8.AllocatorInstance.Data; pUVar30 = local_288,
          FVar37.Data != pFVar33; FVar37.Data = FVar37.Data + 8) {
        FActivatableTreeNode::AddChildNode
                  ((FActivatableTreeNode *)pFVar24,&local_1d0,
                   *(UCommonActivatableWidget **)FVar37.Data);
        AssembleTreeRecursive
                  (this,&local_1d0,
                   (TMap<UCommonActivatableWidget_*,TArray<UCommonActivatableWidget_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UCommonActivatableWidget_*,TArray<UCommonActivatableWidget_*,TSizedDefaultAllocator<32>_>,0>_>
                    *)local_88);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1d0.SharedReferenceCount.ReferenceController);
      }
    }
    if (local_2b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b8.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar12.ReferenceController);
    if (pUVar30->bIsActive != false) {
      local_1c0.Object = local_270;
      local_1c0.WeakReferenceCount.ReferenceController = FVar11.ReferenceController;
      if (FVar11.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar11.ReferenceController)->WeakReferenceCount =
             (atomic<int>)((int)(FVar11.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      HandleRootNodeActivated(this,&local_1c0);
    }
    if (FVar11.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar3 = &(FVar11.ReferenceController)->WeakReferenceCount;
      aVar6 = *paVar3;
      *paVar3 = (atomic<int>)((int)*paVar3 + -1);
      UNLOCK();
      if (aVar6 == (atomic<int>)0x1) {
        (**(code **)((FVar11.ReferenceController)->_padding_ + 8))(FVar11.ReferenceController,1);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_308.SharedReferenceCount.ReferenceController);
    uVar31 = local_328 & 0xffffffff;
    FVar37.Data = local_280 + 8;
    uVar34 = (ulonglong)local_2e4;
  }
  iVar18 = local_88._8_4_ - local_54;
  iVar19 = local_2e8;
  uVar40 = local_60;
joined_r0x00014a80e235:
  local_60 = uVar40;
  if ((iVar18 < 1) || (local_2e8 = local_88._8_4_ - local_54, iVar19 == local_2e8)) {
    local_2e8 = iVar19;
    if (0 < local_88._8_4_ - local_54) {
      `UCommonUIActionRouterBase::RefreshRootNodes'::__l38::<lambda_1>::operator()(local_2f7);
    }
    local_40 = 0;
    if (local_48 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_48);
    }
    TSparseArray<TSparseSetElement<TTuple<UCommonActivatableWidget_*,TArray<UCommonActivatableWidget_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UCommonActivatableWidget_*,TArray<UCommonActivatableWidget_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<UCommonActivatableWidget_*,TArray<UCommonActivatableWidget_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_88);
    if (local_330.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_330.Data);
    }
    return;
  }
  uStack_224 = 1;
  uStack_214 = uVar17;
  uStack_228 = uVar17;
  local_210 = uVar17;
  if (uVar40 != 0) {
    puVar41 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar41 = local_68;
    }
    uVar42 = *puVar41;
    local_210 = 0;
    uStack_228 = 0;
    while (uVar42 == 0) {
      lVar32 = (longlong)(int)uStack_228;
      local_210 = local_210 + 0x20;
      uStack_228 = uStack_228 + 1;
      uStack_214 = uVar40;
      if ((int)((uVar40 - 1) + ((int)(uVar40 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_228)
      goto LAB_14a80e2d3;
      uVar42 = puVar41[lVar32 + 1];
    }
    uStack_224 = -uVar42 & uVar42;
    uVar34 = (ulonglong)uStack_224 * 2 + 1;
    lVar32 = 0x3f;
    if (uVar34 != 0) {
      for (; uVar34 >> lVar32 == 0; lVar32 = lVar32 + -1) {
      }
    }
    local_258 = (int)lVar32;
    uStack_214 = (local_210 - 1) + local_258;
    if ((int)uVar40 < (int)uStack_214) {
      uStack_214 = uVar40;
    }
  }
LAB_14a80e2d3:
  local_230 = (longlong *)local_88;
  local_220 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
  uVar42 = uVar40 & 0xffffffe0;
  TStack_1f8._padding_ = CONCAT44(uStack_224,uStack_228);
  uStack_218 = 0xffffffff;
  TStack_1f8.CurrentBitIndex = uStack_214;
  TStack_1f8.UnvisitedBitMask = 0xffffffff;
  TStack_1f8._28_4_ = local_8c;
  TStack_1f8.BaseBitIndex = local_210;
  uStack_1d8 = CONCAT44(uStack_204,local_2e8);
  iVar19 = (int)uVar40 >> 5;
  iStack_208 = local_2e8;
  local_200 = local_230;
  TStack_1f8.Array = local_220;
  if (((int)uVar40 < 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar15)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (uVar40 != local_60) {
    puVar41 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar41 = local_68;
    }
    uVar40 = -1 << ((byte)uVar40 & 0x1f) & puVar41[iVar19];
    while (uVar40 == 0) {
      lVar32 = (longlong)iVar19;
      uVar42 = uVar42 + 0x20;
      iVar19 = iVar19 + 1;
      uVar40 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
      goto LAB_14a80e3f0;
      uVar40 = puVar41[lVar32 + 1];
    }
    uVar34 = (ulonglong)(-uVar40 & uVar40) * 2 + 1;
    lVar32 = 0x3f;
    if (uVar34 != 0) {
      for (; uVar34 >> lVar32 == 0; lVar32 = lVar32 + -1) {
      }
    }
    local_254 = (int)lVar32;
    uVar40 = (uVar42 - 1) + local_254;
    if ((int)local_60 < (int)uVar40) {
      uVar40 = local_60;
    }
  }
LAB_14a80e3f0:
  do {
    plVar13 = local_200;
    if ((int)local_200[1] - *(int *)((longlong)local_200 + 0x34) != (int)uStack_1d8) {
      local_338 = (FIdentityFunctor)0x0;
      `TSparseArray<TSparseSetElement<TTuple<UCommonActivatableWidget_*,TArray<UCommonActivatableWidget_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_338);
    }
    if (((TStack_1f8.CurrentBitIndex == uVar40) &&
        (TStack_1f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
       (plVar13 == (longlong *)local_88)) goto LAB_14a80e53e;
    FindNode(this,&local_248,
             *(UCommonActivatableWidget **)((longlong)TStack_1f8.CurrentBitIndex * 0x20 + *plVar13))
    ;
    FVar11.ReferenceController = local_248.SharedReferenceCount.ReferenceController;
    this_00 = local_248.Object;
    if (local_248.Object != (FActivatableTreeNode *)0x0) break;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_248.SharedReferenceCount.ReferenceController);
    TStack_1f8.UnvisitedBitMask = TStack_1f8.UnvisitedBitMask & ~TStack_1f8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1f8);
  } while( true );
  if (local_248.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_248.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_248.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2a8.ArrayNum = 0;
  local_2a8.ArrayMax = 0;
  pUVar30 = (UCommonActivatableWidget *)
            FWeakObjectPtr::Get(&((local_248.Object)->RepresentedWidget).WeakPtr);
  bVar15 = TMap<UCommonActivatableWidget_*,TArray<UCommonActivatableWidget_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UCommonActivatableWidget_*,TArray<UCommonActivatableWidget_*,TSizedDefaultAllocator<32>_>,0>_>
           ::RemoveAndCopyValue
                     ((TMap<UCommonActivatableWidget_*,TArray<UCommonActivatableWidget_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UCommonActivatableWidget_*,TArray<UCommonActivatableWidget_*,TSizedDefaultAllocator<32>_>,0>_>
                       *)local_88,pUVar30,&local_2a8);
  FVar37.Data = local_2a8.AllocatorInstance.Data;
  if (bVar15) {
    pFVar33 = local_2a8.AllocatorInstance.Data + (longlong)local_2a8.ArrayNum * 8;
    for (FVar38.Data = local_2a8.AllocatorInstance.Data; FVar38.Data != pFVar33;
        FVar38.Data = FVar38.Data + 8) {
      FActivatableTreeNode::AddChildNode
                (this_00,&local_1b0,*(UCommonActivatableWidget **)FVar38.Data);
      AssembleTreeRecursive
                (this,&local_1b0,
                 (TMap<UCommonActivatableWidget_*,TArray<UCommonActivatableWidget_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UCommonActivatableWidget_*,TArray<UCommonActivatableWidget_*,TSizedDefaultAllocator<32>_>,0>_>
                  *)local_88);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1b0.SharedReferenceCount.ReferenceController);
    }
  }
  if (FVar37.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar37.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar11.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar11.ReferenceController);
LAB_14a80e53e:
  iVar18 = local_88._8_4_ - local_54;
  iVar19 = local_2e8;
  uVar40 = local_60;
  goto joined_r0x00014a80e235;
}

// RefreshUIInputConfig @ 14a80e5d0

void __thiscall UCommonUIActionRouterBase::RefreshUIInputConfig(UCommonUIActionRouterBase *this)

{
  if ((this->ActiveInputConfig).bIsSet != false) {
                    /* WARNING: Could not recover jumptable at 0x00014a80e5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x318))(this,&this->ActiveInputConfig,1);
    return;
  }
  return;
}

// RegisterAnalogCursorTick @ 14a80e760

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCommonUIActionRouterBase::RegisterAnalogCursorTick(UCommonUIActionRouterBase *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  UObject *pUVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  UEngine *pUVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  FSlateApplication *this_00;
  FTSTicker *this_01;
  undefined8 *puVar10;
  ulong64 uVar11;
  TWeakPtr<FTSTicker::FElement,1> *pTVar12;
  UClass *pUVar13;
  UCommonUIActionRouterBase *local_res8;
  TSharedPtr<IInputProcessor,1> local_78;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  pUVar7 = GEngine;
  pUVar13 = (UClass *)0x0;
  pUVar9 = (GEngine->GameViewportClientClass).Class.field0_0x0.DebugPtr;
  if ((pUVar9 != (UClass *)0x0) &&
     (pUVar8 = Z_Construct_UClass_UGameViewportClient_NoRegister(), pUVar8 != (UClass *)0x0)) {
    iVar3 = (int)pUVar8->_padding_;
    if (((int)pUVar9->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar3 * 8) != &pUVar8->_padding_)
       ) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      pUVar13 = (pUVar7->GameViewportClientClass).Class.field0_0x0.DebugPtr;
    }
  }
  pUVar9 = UCommonGameViewportClient::StaticClass();
  if (pUVar9 != (UClass *)0x0) {
    iVar3 = (int)pUVar9->_padding_;
    if (((int)pUVar13->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar3 * 8) != &pUVar9->_padding_
       )) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      this_00 = FSlateApplication::Get();
      pUVar9 = UCommonUIInputSettings::StaticClass();
      if ((pUVar9->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar9);
      }
      pUVar4 = (pUVar9->ClassDefaultObject).field0_0x0.DebugPtr;
      local_78.Object = (IInputProcessor *)(this->AnalogCursor).Object;
      local_78.SharedReferenceCount.ReferenceController =
           (this->AnalogCursor).SharedReferenceCount.ReferenceController;
      if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FSlateApplication::RegisterInputPreProcessor
                (this_00,&local_78,(FInputPreprocessorRegistrationKey *)&pUVar4[2].field_0x4);
    }
  }
  if (this->bIsActivatableTreeEnabled != false) {
    local_78.Object = (IInputProcessor *)(this->TickHandle).Object;
    local_78.SharedReferenceCount.ReferenceController =
         (this->TickHandle).WeakReferenceCount.ReferenceController;
    if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_78.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_78.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    FTSTicker::RemoveTicker((TWeakPtr<FTSTicker::FElement,1> *)&local_78);
    this_01 = FTSTicker::GetCoreTicker();
    local_68 = (undefined1  [8])0x0;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_50);
    local_38 = &local_60;
    puVar10 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar11 = FDelegateHandle::GenerateNewID();
      puVar10[2] = uVar11;
      *puVar10 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonUIActionRouterBase____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar10[3] = 0;
      local_res8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_res8);
      puVar10[4] = Tick;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    pTVar12 = FTSTicker::AddTicker
                        (this_01,(TWeakPtr<FTSTicker::FElement,1> *)&local_78,
                         (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_68,0.0);
    if (&this->TickHandle != pTVar12) {
      (this->TickHandle).Object = pTVar12->Object;
      pTVar12->Object = (FElement *)0x0;
      pTVar5 = (this->TickHandle).WeakReferenceCount.ReferenceController;
      (this->TickHandle).WeakReferenceCount.ReferenceController =
           (pTVar12->WeakReferenceCount).ReferenceController;
      (pTVar12->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar5->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
        }
      }
    }
    if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_78.SharedReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_78.SharedReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_78.SharedReferenceCount.ReferenceController,1);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_60,0,0,0x10);
      local_60.DelegateSize = 0;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_60.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_68);
  }
  return;
}

// RegisterLinkedPreprocessor @ 14a80ec80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UCommonUIActionRouterBase::RegisterLinkedPreprocessor
          (UCommonUIActionRouterBase *this,UWidget *param_1,TSharedRef<IInputProcessor,1> *param_2)

{
  bool bVar1;
  FInputPreprocessorRegistrationKey local_res20;
  
  local_res20.Type = Game;
  local_res20._1_3_ = 0;
  local_res20.Priority = -1;
  bVar1 = RegisterLinkedPreprocessor(this,param_1,param_2,&local_res20);
  return bVar1;
}

// RegisterLinkedPreprocessor @ 14a80ecb0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UCommonUIActionRouterBase::RegisterLinkedPreprocessor
          (UCommonUIActionRouterBase *this,UWidget *param_1,TSharedRef<IInputProcessor,1> *param_2,
          FInputPreprocessorRegistrationKey *param_3)

{
  TArray<FInputPreprocessorRegistration,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  SWidget *pSVar3;
  FInputPreprocessorRegistrationKey *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  UClass *pUVar9;
  UCommonActivatableWidget *pUVar10;
  TSharedPtr<FActivatableTreeNode,1> *pTVar11;
  TSharedPtr<SWidget,1> *pTVar12;
  FPendingWidgetRegistration *pFVar13;
  FInputPreprocessorRegistrationKey *pFVar14;
  undefined1 local_res10 [8];
  TSharedPtr<FActivatableTreeNode,1> local_78;
  TSharedPtr<FActivatableTreeNode,1> local_68;
  TSharedPtr<SWidget,1> local_58;
  FInputPreprocessorRegistrationKey local_48;
  FInputPreprocessorRegistrationKey local_40;
  FInputPreprocessorRegistrationKey local_38;
  
  if (param_1 == (UWidget *)0x0) {
LAB_14a80ed01:
    pUVar10 = (UCommonActivatableWidget *)0x0;
  }
  else {
    pUVar9 = UCommonActivatableWidget::StaticClass();
    iVar8 = (int)pUVar9->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar8) ||
       (pUVar10 = (UCommonActivatableWidget *)param_1,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar8 * 8)
       != &pUVar9->_padding_)) goto LAB_14a80ed01;
  }
  FindNode(this,&local_78,pUVar10);
  if (local_78.Object == (FActivatableTreeNode *)0x0) {
    if ((pUVar10 == (UCommonActivatableWidget *)0x0) || (pUVar10->bIsModal == false)) {
      pUVar10 = ::FindOwningActivatable(param_1);
      if (pUVar10 != (UCommonActivatableWidget *)0x0) {
        pTVar11 = FindNode(this,&local_68,pUVar10);
        if (&local_78 != pTVar11) {
          local_78.Object = pTVar11->Object;
          pTVar11->Object = (FActivatableTreeNode *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&local_78.SharedReferenceCount,&pTVar11->SharedReferenceCount);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.SharedReferenceCount.ReferenceController);
      }
      if (local_78.Object != (FActivatableTreeNode *)0x0) goto LAB_14a80eefd;
    }
    pTVar12 = UWidget::GetCachedWidget(param_1,&local_58);
    pSVar3 = pTVar12->Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    if (pSVar3 == (SWidget *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
      return false;
    }
    pFVar13 = GetOrCreatePendingRegistration(this,param_1);
    iVar8 = (pFVar13->InputPreProcessors).ArrayNum;
    pFVar14 = (FInputPreprocessorRegistrationKey *)
              (pFVar13->InputPreProcessors).AllocatorInstance.Data;
    pTVar1 = &pFVar13->InputPreProcessors;
    pFVar4 = pFVar14 + (longlong)iVar8 * 3;
    while( true ) {
      if ((pFVar13->InputPreProcessors).ArrayNum != iVar8) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FInputPreprocessorRegistration,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar14 == pFVar4) {
        local_48 = *param_3;
        local_40 = (FInputPreprocessorRegistrationKey)param_2->Object;
        local_38 = (FInputPreprocessorRegistrationKey)
                   (param_2->SharedReferenceCount).ReferenceController;
        if (local_38 != (FInputPreprocessorRegistrationKey)0x0) {
          LOCK();
          *(atomic<int> *)((longlong)local_38 + 8) =
               (atomic<int>)((int)*(atomic<int> *)((longlong)local_38 + 8) + 1);
          UNLOCK();
        }
        pFVar4 = (FInputPreprocessorRegistrationKey *)(pTVar1->AllocatorInstance).Data;
        if (((pFVar4 <= &local_48) &&
            (&local_48 < pFVar4 + (longlong)(pFVar13->InputPreProcessors).ArrayMax * 3)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        iVar8 = (pFVar13->InputPreProcessors).ArrayNum;
        piVar2 = &(pFVar13->InputPreProcessors).ArrayMax;
        if (iVar8 == *piVar2) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar1->AllocatorInstance,piVar2);
        }
        (pFVar13->InputPreProcessors).ArrayNum = iVar8 + 1;
        pFVar4 = (FInputPreprocessorRegistrationKey *)
                 ((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 0x18);
        *pFVar4 = local_48;
        pFVar4[1] = local_40;
        pFVar4[2] = local_38;
        local_38.Type = Overlay;
        local_38._1_3_ = 0;
        local_38.Priority = 0;
        local_40.Type = Overlay;
        local_40._1_3_ = 0;
        local_40.Priority = 0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        goto LAB_14a80ef08;
      }
      if ((pFVar14[1] != (FInputPreprocessorRegistrationKey)0x0) &&
         (pFVar14[1] == (FInputPreprocessorRegistrationKey)param_2->Object)) break;
      pFVar14 = pFVar14 + 3;
    }
    *pFVar14 = *param_3;
  }
  else {
LAB_14a80eefd:
    FActivatableTreeNode::AddInputPreprocessor(local_78.Object,param_2,param_3);
  }
LAB_14a80ef08:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  return true;
}

// RegisterLinkedPreprocessor @ 14a80ef40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UCommonUIActionRouterBase::RegisterLinkedPreprocessor
          (UCommonUIActionRouterBase *this,UWidget *param_1,TSharedRef<IInputProcessor,1> *param_2,
          int param_3)

{
  bool bVar1;
  FInputPreprocessorRegistrationKey local_18 [3];
  
  local_18[0].Type = Game;
  local_18[0].Priority = param_3;
  bVar1 = RegisterLinkedPreprocessor(this,param_1,param_2,local_18);
  return bVar1;
}

// RegisterScrollRecipient @ 14a80f0f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCommonUIActionRouterBase::RegisterScrollRecipient(UCommonUIActionRouterBase *this,UWidget *param_1)

{
  TArray<TWeakObjectPtr<UWidget_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *this_00;
  int iVar1;
  UClass *pUVar2;
  UCommonActivatableWidget *pUVar3;
  TSharedPtr<FActivatableTreeNode,1> *pTVar4;
  FPendingWidgetRegistration *pFVar5;
  FWeakObjectPtr local_res10;
  UWidget *local_res18;
  TSharedPtr<FActivatableTreeNode,1> local_28;
  TSharedPtr<FActivatableTreeNode,1> local_18;
  
  if (param_1 == (UWidget *)0x0) {
LAB_14a80f132:
    pUVar3 = (UCommonActivatableWidget *)0x0;
  }
  else {
    pUVar2 = UCommonActivatableWidget::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       (pUVar3 = (UCommonActivatableWidget *)param_1,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       != &pUVar2->_padding_)) goto LAB_14a80f132;
  }
  FindNode(this,&local_28,pUVar3);
  if (local_28.Object == (FActivatableTreeNode *)0x0) {
    if ((pUVar3 == (UCommonActivatableWidget *)0x0) || (pUVar3->bIsModal == false)) {
      pUVar3 = ::FindOwningActivatable(param_1);
      if (pUVar3 != (UCommonActivatableWidget *)0x0) {
        pTVar4 = FindNode(this,&local_18,pUVar3);
        if (&local_28 != pTVar4) {
          local_28.Object = pTVar4->Object;
          pTVar4->Object = (FActivatableTreeNode *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&local_28.SharedReferenceCount,&pTVar4->SharedReferenceCount);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_18.SharedReferenceCount.ReferenceController);
      }
      if (local_28.Object != (FActivatableTreeNode *)0x0) goto LAB_14a80f1c4;
    }
    pFVar5 = GetOrCreatePendingRegistration(this,param_1);
    pFVar5->bIsScrollRecipient = true;
  }
  else {
LAB_14a80f1c4:
    this_00 = &(local_28.Object)->ScrollRecipients;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWidget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWidget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
    TArray<TWeakObjectPtr<UWidget_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TWeakObjectPtr<UWidget_const_,FWeakObjectPtr>_>
              (this_00,(TWeakObjectPtr<UWidget_const_,FWeakObjectPtr> *)&local_res10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// RegisterUIActionBinding @ 14a80fd20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FUIActionBindingHandle * __thiscall
UCommonUIActionRouterBase::RegisterUIActionBinding
          (UCommonUIActionRouterBase *this,FUIActionBindingHandle *__return_storage_ptr__,
          UWidget *param_1,FBindUIActionArgs *param_2)

{
  int *piVar1;
  longlong *plVar2;
  SWidget *pSVar3;
  bool bVar4;
  FActivatableTreeNode *pFVar5;
  FSharedReferencer<1> FVar6;
  ForAnyElementType _Src;
  int iVar7;
  TSharedPtr<FUIActionBinding,1> *pTVar8;
  UClass *pUVar9;
  TSharedPtr<FActivatableTreeNode,1> *pTVar10;
  FActivatableTreeNode *this_00;
  UObject *pUVar11;
  TSharedPtr<SWidget,1> *pTVar12;
  FPendingWidgetRegistration *pFVar13;
  longlong lVar14;
  bool bVar15;
  TSharedPtr<FActivatableTreeNode,1> local_80;
  TSharedPtr<SWidget,1> local_70;
  FUIActionBindingHandle local_60;
  FUIActionBindingHandle local_48;
  
  bVar15 = false;
  iVar7 = GetLocalPlayerIndex(this);
  FUIActionBinding::TryCreate(&local_60,param_1,param_2,iVar7);
  if (local_60.RegistrationId < 0) {
LAB_14a80fda1:
    bVar4 = false;
  }
  else {
    bVar15 = true;
    ::FString::FString(&local_48.CachedDebugActionName,&local_60.CachedDebugActionName);
    local_48.RegistrationId = local_60.RegistrationId;
    pTVar8 = FUIActionBinding::FindBinding((TSharedPtr<FUIActionBinding,1> *)&local_70,&local_48);
    if (pTVar8->Object == (FUIActionBinding *)0x0) goto LAB_14a80fda1;
    bVar4 = true;
  }
  if (bVar15) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_70.SharedReferenceCount.ReferenceController);
  }
  if (!bVar4) {
    (__return_storage_ptr__->CachedDebugActionName).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->CachedDebugActionName).Data.ArrayNum = 0;
    (__return_storage_ptr__->CachedDebugActionName).Data.ArrayMax = 0;
    __return_storage_ptr__->RegistrationId = -1;
    goto LAB_14a80ffc1;
  }
  local_80.Object = (FActivatableTreeNode *)0x0;
  local_80.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_1 == (UWidget *)0x0) {
LAB_14a80fe03:
    pTVar10 = FindOwningNode(this,(TSharedPtr<FActivatableTreeNode,1> *)&local_70,param_1);
  }
  else {
    pUVar9 = UCommonActivatableWidget::StaticClass();
    iVar7 = (int)pUVar9->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar7) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar7 * 8)
        != &pUVar9->_padding_)) goto LAB_14a80fe03;
    pTVar10 = FindNode(this,(TSharedPtr<FActivatableTreeNode,1> *)&local_70,
                       (UCommonActivatableWidget *)param_1);
  }
  if (&local_80 != pTVar10) {
    local_80.Object = pTVar10->Object;
    pTVar10->Object = (FActivatableTreeNode *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_80.SharedReferenceCount,&pTVar10->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_70.SharedReferenceCount.ReferenceController);
  _Src.Data = local_60.CachedDebugActionName.Data.AllocatorInstance.Data;
  FVar6.ReferenceController = local_80.SharedReferenceCount.ReferenceController;
  pFVar5 = local_80.Object;
  if (local_80.Object == (FActivatableTreeNode *)0x0) {
    pTVar12 = UWidget::GetCachedWidget(param_1,&local_70);
    pSVar3 = pTVar12->Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_70.SharedReferenceCount.ReferenceController);
    if (pSVar3 == (SWidget *)0x0) {
      (__return_storage_ptr__->CachedDebugActionName).Data.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
    }
    else {
      pFVar13 = GetOrCreatePendingRegistration(this,param_1);
      TArray<FUIActionBindingHandle,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<FUIActionBindingHandle_const_&>(&pFVar13->ActionBindings,&local_60);
    }
  }
  else {
    lVar14 = (longlong)local_60.CachedDebugActionName.Data.ArrayNum;
    local_48.CachedDebugActionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.CachedDebugActionName.Data.ArrayNum = local_60.CachedDebugActionName.Data.ArrayNum;
    if (local_60.CachedDebugActionName.Data.ArrayNum == 0) {
      local_48.CachedDebugActionName.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_60.CachedDebugActionName.Data.ArrayNum,0,(ForAnyElementType *)&local_48,
                 local_60.CachedDebugActionName.Data.ArrayNum,
                 &local_48.CachedDebugActionName.Data.ArrayMax);
      memcpy(local_48.CachedDebugActionName.Data.AllocatorInstance.Data,_Src.Data,lVar14 * 2);
    }
    local_48.RegistrationId = local_60.RegistrationId;
    FUIActionBinding::FindBinding((TSharedPtr<FUIActionBinding,1> *)&local_70,&local_48);
    if (local_70.Object != (SWidget *)0x0) {
      this_00 = pFVar5;
      if (*(bool *)((longlong)&(local_70.Object)->_padding_ + 5) != false) {
        this_00 = (FActivatableTreeNode *)
                  TSharedPtr<FPersistentActionCollection,1>::operator->(&this->PersistentActions);
      }
      FActionRouterBindingCollection::AddBinding
                ((FActionRouterBindingCollection *)this_00,(FUIActionBinding *)local_70.Object);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_70.SharedReferenceCount.ReferenceController);
    pUVar11 = FWeakObjectPtr::Get(&(pFVar5->RepresentedWidget).WeakPtr);
    if ((pUVar11 != (UObject *)0x0) &&
       (*(FActivatableTreeNode **)&pUVar11[0x1d].field_0x8 = pFVar5,
       FVar6.ReferenceController != *(TReferenceControllerBase<1> **)&pUVar11[0x1d].field_0x10)) {
      if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar6.ReferenceController)->WeakReferenceCount =
             (atomic<int>)((int)(FVar6.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar2 = *(longlong **)&pUVar11[0x1d].field_0x10;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pUVar11[0x1d].field_0x10 = FVar6.ReferenceController;
    }
  }
  (__return_storage_ptr__->CachedDebugActionName).Data.AllocatorInstance.Data =
       local_60.CachedDebugActionName.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->CachedDebugActionName).Data.ArrayNum =
       local_60.CachedDebugActionName.Data.ArrayNum;
  (__return_storage_ptr__->CachedDebugActionName).Data.ArrayMax =
       local_60.CachedDebugActionName.Data.ArrayMax;
  __return_storage_ptr__->RegistrationId = local_60.RegistrationId;
  local_60.CachedDebugActionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.CachedDebugActionName.Data.ArrayNum = 0;
  local_60.CachedDebugActionName.Data.ArrayMax = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
LAB_14a80ffc1:
  if (local_60.CachedDebugActionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_60.CachedDebugActionName.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// RegisterWidgetBindings @ 14a810570

void __thiscall
UCommonUIActionRouterBase::RegisterWidgetBindings
          (UCommonUIActionRouterBase *this,TSharedPtr<FActivatableTreeNode,1> *param_1,
          TArray<FUIActionBindingHandle,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  FActivatableTreeNode *this_00;
  FScriptContainerElement *pFVar8;
  undefined1 local_res18 [8];
  FUIActionBinding **local_res20;
  FUIActionBinding *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  FString local_68;
  uint local_58;
  FString local_50;
  uint local_40;
  
  iVar2 = param_2->ArrayNum;
  pFVar8 = (param_2->AllocatorInstance).Data;
  pFVar1 = pFVar8 + (longlong)iVar2 * 0x18;
  do {
    if (param_2->ArrayNum != iVar2) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FUIActionBindingHandle_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar8 == pFVar1) {
      return;
    }
    ::FString::FString(&local_68,(FString *)pFVar8);
    local_58 = *(uint *)&(((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar8[0x10].field_0x0)->
                         AllocatorInstance).Data;
    ::FString::FString(&local_50,&local_68);
    local_40 = local_58;
    if (FUIActionBinding::AllRegistrationsByHandle._8_4_ !=
        FUIActionBinding::AllRegistrationsByHandle._52_4_) {
      lVar6 = 0x154cb26b8;
      if (FUIActionBinding::AllRegistrationsByHandle._64_8_ != 0) {
        lVar6 = FUIActionBinding::AllRegistrationsByHandle._64_8_;
      }
      iVar3 = *(int *)(lVar6 + (ulonglong)
                               (FUIActionBinding::AllRegistrationsByHandle._72_4_ - 1 & local_58) *
                               4);
      while (iVar3 != -1) {
        lVar6 = (longlong)iVar3 * 0x30 + FUIActionBinding::AllRegistrationsByHandle._0_8_;
        if (*(uint *)(lVar6 + 0x10) == local_58) {
          plVar7 = (longlong *)(lVar6 + 0x18);
          if (lVar6 == 0) {
            plVar7 = (longlong *)0x0;
          }
          if (plVar7 != (longlong *)0x0) {
            local_78 = (FUIActionBinding *)*plVar7;
            pTStack_70 = (TReferenceControllerBase<1> *)plVar7[1];
            if (pTStack_70 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTStack_70->SharedReferenceCount =
                   (atomic<int>)((int)pTStack_70->SharedReferenceCount + 1);
              UNLOCK();
            }
            goto LAB_14a810648;
          }
          break;
        }
        iVar3 = *(int *)(lVar6 + 0x28);
      }
    }
    local_78 = (FUIActionBinding *)0x0;
    pTStack_70 = (TReferenceControllerBase<1> *)0x0;
LAB_14a810648:
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    if (local_78 != (FUIActionBinding *)0x0) {
      if ((local_78 == (FUIActionBinding *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (local_78->bIsPersistent == false) {
        if (param_1->Object == (FActivatableTreeNode *)0x0) {
          local_res20 = &local_78;
          bVar5 = `UCommonUIActionRouterBase::RegisterWidgetBindings'::__l14::<lambda_1>::operator()
                            (&local_res20);
          if (!bVar5) goto LAB_14a810790;
          if ((param_1->Object == (FActivatableTreeNode *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        this_00 = param_1->Object;
      }
      else {
        if (((this->PersistentActions).Object == (FPersistentActionCollection *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        this_00 = (FActivatableTreeNode *)(this->PersistentActions).Object;
      }
      if ((local_78 == (FUIActionBinding *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FActionRouterBindingCollection::AddBinding((FActionRouterBindingCollection *)this_00,local_78)
      ;
    }
LAB_14a810790:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_70);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    pFVar8 = pFVar8 + 0x18;
  } while( true );
}

// RemoveBinding @ 14a8133a0

void __thiscall
UCommonUIActionRouterBase::RemoveBinding
          (UCommonUIActionRouterBase *this,FUIActionBindingHandle *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  UObject *pUVar7;
  UObject *pUVar8;
  FWeakObjectPtr *this_00;
  FActionRouterBindingCollection *this_01;
  FActionRouterBindingCollection *pFVar9;
  FActionRouterBindingCollection *pFVar10;
  FWeakObjectPtr *pFVar11;
  TSharedPtr<FUIActionBinding,1> local_48;
  FUIActionBindingHandle local_38;
  FUIActionBindingHandle local_20;
  
  ::FString::FString(&local_38.CachedDebugActionName,&param_1->CachedDebugActionName);
  local_38.RegistrationId = param_1->RegistrationId;
  FUIActionBinding::FindBinding(&local_48,&local_38);
  if (local_48.Object == (FUIActionBinding *)0x0) goto LAB_14a813582;
  if ((local_48.Object == (FUIActionBinding *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((((local_48.Object)->OwningCollection).Object == (FActionRouterBindingCollection *)0x0) ||
      (pTVar1 = ((local_48.Object)->OwningCollection).WeakReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) {
    if ((local_48.Object == (FUIActionBinding *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pUVar7 = FWeakObjectPtr::Get(&((local_48.Object)->BoundWidget).WeakPtr);
    this_00 = (FWeakObjectPtr *)(this->PendingWidgetRegistrations).AllocatorInstance.Data;
    pFVar11 = this_00 + (longlong)(this->PendingWidgetRegistrations).ArrayNum * 8;
    for (; this_00 != pFVar11; this_00 = this_00 + 8) {
      pUVar8 = FWeakObjectPtr::Get(this_00);
      if (pUVar7 == pUVar8) {
        if (this_00 != (FWeakObjectPtr *)0x0) {
          TArray<FUIActionBindingHandle,TSizedDefaultAllocator<32>_>::Remove
                    ((TArray<FUIActionBindingHandle,TSizedDefaultAllocator<32>_> *)(this_00 + 1),
                     param_1);
        }
        break;
      }
    }
    goto LAB_14a813582;
  }
  if ((local_48.Object == (FUIActionBinding *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar10 = (FActionRouterBindingCollection *)
            ((local_48.Object)->OwningCollection).WeakReferenceCount.ReferenceController;
  this_01 = (FActionRouterBindingCollection *)0x0;
  pFVar9 = pFVar10;
  if (pFVar10 == (FActionRouterBindingCollection *)0x0) {
LAB_14a8134a1:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    pFVar10 = pFVar9;
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    iVar4 = (int)pFVar10->_padding_;
    do {
      pFVar9 = this_01;
      if (iVar4 == 0) goto LAB_14a8134a1;
      LOCK();
      iVar6 = (int)pFVar10->_padding_;
      bVar5 = iVar4 == iVar6;
      if (bVar5) {
        *(int *)&pFVar10->_padding_ = iVar4 + 1;
        iVar6 = iVar4;
      }
      UNLOCK();
      iVar4 = iVar6;
    } while (!bVar5);
    this_01 = ((local_48.Object)->OwningCollection).Object;
    pFVar9 = pFVar10;
    if (this_01 == (FActionRouterBindingCollection *)0x0) goto LAB_14a8134a1;
  }
  ::FString::FString(&local_20.CachedDebugActionName,&param_1->CachedDebugActionName);
  local_20.RegistrationId = param_1->RegistrationId;
  FActionRouterBindingCollection::RemoveBinding(this_01,&local_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar10);
LAB_14a813582:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  pFVar2 = (param_1->CachedDebugActionName).Data.AllocatorInstance.Data;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar2);
  return;
}

// SetActiveActivationMetadata @ 14a815b70

void __thiscall
UCommonUIActionRouterBase::SetActiveActivationMetadata
          (UCommonUIActionRouterBase *this,FActivationMetadata *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_48;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnActivationMetadataChangedEvent,(FWriteAccessScope *)&local_48);
  puVar1 = &(this->OnActivationMetadataChangedEvent).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar9 = *(int *)&(this->OnActivationMetadataChangedEvent).field_0x10 - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&(this->OnActivationMetadataChangedEvent).field_0x10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->OnActivationMetadataChangedEvent).field_0x8;
      if (((*(int *)(lVar2 + 8 + lVar10) == 0) ||
          (plVar3 = *(longlong **)(lVar2 + lVar10), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  puVar1 = &(this->OnActivationMetadataChangedEvent).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnActivationMetadataChangedEvent,false);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return;
}

// SetActiveRoot @ 14a815ce0

void __thiscall
UCommonUIActionRouterBase::SetActiveRoot
          (UCommonUIActionRouterBase *this,TSharedPtr<FActivatableTreeRoot,1> *param_1)

{
  TSharedPtr<FActivatableTreeRoot,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FActivatableTreeRoot *pFVar5;
  FUIInputConfig local_res8;
  longlong local_28;
  FSharedReferencer<1> FStack_20;
  FActivatableTreeRoot *local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  pTVar1 = &this->ActiveRootNode;
  if (pTVar1->Object != (FActivatableTreeRoot *)0x0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &pTVar1->Object->OnLeafmostActiveNodeChanged);
    if (pTVar1->Object == (FActivatableTreeRoot *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FActivatableTreeNode::SetCanReceiveInput((FActivatableTreeNode *)pTVar1->Object,false);
    if (pTVar1->Object == (FActivatableTreeRoot *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FActivatableTreeRoot::UpdateLeafNode(pTVar1->Object);
  }
  if ((this->bForceResetActiveRoot == false) && (this->bIsActivatableTreeEnabled != false)) {
    pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
    pFVar5 = param_1->Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18 = pTVar1->Object;
    pTStack_10 = (this->ActiveRootNode).SharedReferenceCount.ReferenceController;
    pTVar1->Object = pFVar5;
    (this->ActiveRootNode).SharedReferenceCount.ReferenceController = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
    if (param_1->Object != (FActivatableTreeRoot *)0x0) {
      pFVar5 = TSharedPtr<FActivatableTreeRoot,1>::operator->(param_1);
      FActivatableTreeNode::SetCanReceiveInput((FActivatableTreeNode *)pFVar5,true);
      pFVar5 = TSharedPtr<FActivatableTreeRoot,1>::operator->(param_1);
      FActivatableTreeRoot::UpdateLeafNode(pFVar5);
      pFVar5 = TSharedPtr<FActivatableTreeRoot,1>::operator->(param_1);
      TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
      BindUObject<UCommonUIActionRouterBase>
                ((TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &pFVar5->OnLeafmostActiveNodeChanged,this,(pmf_83b3fc76)0x14a7ed910);
    }
  }
  else {
    this->bForceResetActiveRoot = false;
    local_28 = 0;
    FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<FActivatableTreeRoot,1> *)&local_28) {
      pTVar1->Object = (FActivatableTreeRoot *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ActiveRootNode).SharedReferenceCount,&FStack_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_20.ReferenceController);
    if ((this->bForceResetActiveRoot != false) ||
       (bResetUIInputConfigOnActivatableTreeDeactivation != false)) {
      local_res8.bIgnoreMoveInput = false;
      local_res8.bIgnoreLookInput = false;
      local_res8.InputMode = All;
      local_res8.MouseCaptureMode = NoCapture;
      local_res8.MouseLockMode = DoNotLock;
      local_res8.bHideCursorDuringViewportCapture = true;
      SetActiveUIInputConfig(this,&local_res8,(UObject *)0x0);
    }
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnBoundActionsUpdatedEvent);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetActiveUIInputConfig @ 14a815ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UCommonUIActionRouterBase::SetActiveUIInputConfig
          (UCommonUIActionRouterBase *this,FUIInputConfig *param_1,UObject *param_2)

{
  code *pcVar1;
  bool bVar2;
  FUIInputConfig *pFVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  undefined1 auStackY_8e8 [32];
  FString local_8a8;
  FString local_898;
  FName local_888;
  FString local_880;
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1024];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_8e8;
  if (((bTraceInputConfig) && (param_2 != (UObject *)0x0)) &&
     ((((this->ActiveInputConfig).bIsSet == false ||
       ((((pFVar3 = TOptional<FUIInputConfig>::GetValue(&this->ActiveInputConfig),
          param_1->bIgnoreMoveInput != pFVar3->bIgnoreMoveInput ||
          (param_1->bIgnoreLookInput != pFVar3->bIgnoreLookInput)) ||
         (param_1->InputMode != pFVar3->InputMode)) ||
        ((param_1->MouseCaptureMode != pFVar3->MouseCaptureMode ||
         (param_1->MouseLockMode != pFVar3->MouseLockMode)))))) ||
      (param_1->bHideCursorDuringViewportCapture != pFVar3->bHideCursorDuringViewportCapture)))) {
    local_888.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
    local_888.Number = *(uint *)&param_2->field_0x1c;
    ::FName::ToString(&local_888,&local_8a8);
    uVar5 = 0;
    uVar6 = (this->InputConfigSources).IndexMask & this->InputConfigSourceIndex;
    uVar4 = 0;
    if ((int)uVar6 < (this->InputConfigSources).Elements.ArrayNum) {
      uVar4 = ~uVar6 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar8 = (this->InputConfigSources).Elements.AllocatorInstance.Data +
             (longlong)(int)uVar6 * 0x10;
    if (pFVar8 != (FScriptContainerElement *)&local_8a8) {
      if (*(void **)pFVar8 != (void *)0x0) {
        FMemory::Free(*(void **)pFVar8);
      }
      *(FScriptContainerElement **)pFVar8 = local_8a8.Data.AllocatorInstance.Data;
      local_8a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar8 + 8) = local_8a8.Data.ArrayNum;
      *(int *)(pFVar8 + 0xc) = local_8a8.Data.ArrayMax;
      local_8a8.Data.ArrayNum = 0;
      local_8a8.Data.ArrayMax = 0;
    }
    if (local_8a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8a8.Data.AllocatorInstance.Data);
    }
    local_868.Base = local_848;
    local_868.bIsDynamic = false;
    local_868.bIsExternal = false;
    local_868.CurPos = local_848;
    local_868.End = (wchar_t *)local_48;
    FUIInputConfig::ToString(param_1,&local_880);
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_868,L"Input Config Change:\n%s\n");
    if (local_880.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_880.Data.AllocatorInstance.Data);
    }
    TStringBuilderBase<wchar_t>::AppendfImpl
              (&local_868,L"--- Input Config Source History (Newest Last) ---\n");
    uVar4 = (this->InputConfigSources).Elements.ArrayNum;
    if (uVar4 != 0) {
      do {
        uVar7 = this->InputConfigSourceIndex + 1 + uVar5 & (this->InputConfigSources).IndexMask;
        uVar6 = 0;
        if ((int)uVar7 < (int)uVar4) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        TStringBuilderBase<wchar_t>::AppendfImpl(&local_868,L"%s\n");
        uVar4 = (this->InputConfigSources).Elements.ArrayNum;
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar4);
    }
    if (local_868.End < local_868.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,1);
    }
    *local_868.CurPos = L'\0';
    ::FString::FString(&local_898,local_868.Base);
    if (4 < (byte)LogUIActionRouter._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogUIActionRouter);
    }
    if (bTraceConfigOnScreen != false) {
      UEngine::AddOnScreenDebugMessage
                (GEngine,0x3151d,__real_41700000,FColor::Cyan,&local_898,true,
                 &UE::Math::TVector2<double>::UnitVector);
    }
    this->InputConfigSourceIndex =
         this->InputConfigSourceIndex + 1U & (this->InputConfigSources).IndexMask;
    if (local_898.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_898.Data.AllocatorInstance.Data);
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
  }
  (**(code **)(this->_padding_ + 0x318))(this,param_1,(this->ActiveInputConfig).bIsSet == false);
  return;
}

// SetForceResetActiveRoot @ 14a818200

void __thiscall
UCommonUIActionRouterBase::SetForceResetActiveRoot(UCommonUIActionRouterBase *this,bool param_1)

{
  this->bForceResetActiveRoot = param_1;
  return;
}

// SetIsActivatableTreeEnabled @ 14a818ef0

void __thiscall
UCommonUIActionRouterBase::SetIsActivatableTreeEnabled(UCommonUIActionRouterBase *this,bool param_1)

{
  undefined8 local_18;
  undefined8 uStack_10;
  
  this->bIsActivatableTreeEnabled = param_1;
  if (!param_1) {
    local_18 = 0;
    uStack_10 = 0;
    (**(code **)(this->_padding_ + 0x310))(0,&local_18);
    return;
  }
  RefreshActionDomainLeafNodeConfig(this);
  return;
}

// ShouldAlwaysShowCursor @ 14a81d640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UCommonUIActionRouterBase::ShouldAlwaysShowCursor(UCommonUIActionRouterBase *this)

{
  UGameViewportClient *this_00;
  bool bVar1;
  bool bVar2;
  FSlateApplication *this_01;
  ULocalPlayer *pUVar3;
  
  this_01 = FSlateApplication::Get();
  bVar1 = FSlateApplication::IsFakingTouchEvents(this_01);
  pUVar3 = CastChecked<ULocalPlayer,UObject>((UObject *)this->_padding_);
  this_00 = (pUVar3->ViewportClient).field0_0x0.DebugPtr;
  if (this_00 != (UGameViewportClient *)0x0) {
    bVar2 = UGameViewportClient::GetUseMouseForTouch(this_00);
    bVar1 = bVar1 || bVar2;
  }
  if ((bAlwaysShowCursor == false) && (bVar1 == false)) {
    return false;
  }
  return true;
}

// ShouldCreateSubsystem @ 14a81d6e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UCommonUIActionRouterBase::ShouldCreateSubsystem(UCommonUIActionRouterBase *this,UObject *param_1)

{
  bool bVar1;
  FName local_res8 [4];
  TArray<UClass_*,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  GetDerivedClasses((UClass *)this->_padding_,&local_28,false);
  if (3 < (byte)LogUIActionRouter._0_1_) {
    local_res8[0] = *(FName *)(this->_padding_ + 0x18);
    ::FName::ToString(local_res8,&local_18);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogUIActionRouter);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  bVar1 = local_28.ArrayNum == 0;
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return bVar1;
}

// StaticRegisterNativesUCommonUIActionRouterBase @ 14a81e8f0

void __cdecl UCommonUIActionRouterBase::StaticRegisterNativesUCommonUIActionRouterBase(void)

{
  return;
}

// Tick @ 14a8223f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UCommonUIActionRouterBase::Tick(UCommonUIActionRouterBase *this,float param_1)

{
  undefined1 *puVar1;
  TMap<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,0>_>
  *pTVar2;
  uint uVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  FPersistentActionCollection *pFVar7;
  ULocalPlayer *this_00;
  code *pcVar8;
  atomic<int> aVar9;
  FIdentityFunctor FVar10;
  TMap<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,0>_>
  *pTVar11;
  bool bVar12;
  undefined1 uVar13;
  bool bVar14;
  char cVar15;
  bool bVar16;
  atomic<int> aVar17;
  EProcessHoldActionResult EVar18;
  int iVar19;
  TStatId TVar20;
  TSharedPtr<FActivatableTreeRoot,1> *pTVar21;
  ULocalPlayer *pUVar22;
  UGameInstance *pUVar23;
  TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_> *pTVar24;
  FActivatableTreeRoot *pFVar25;
  UCommonUIActionRouterBase *this_01;
  FName *pFVar26;
  longlong lVar27;
  ulonglong uVar28;
  int iVar29;
  FScriptContainerElement *pFVar30;
  FSharedReferencer<1> FVar31;
  FName *pFVar32;
  uint uVar33;
  FScriptContainerElement *pFVar34;
  uint uVar35;
  int iVar36;
  undefined1 *puVar37;
  uint *puVar38;
  UCommonUIActionRouterBase *this_02;
  ECommonInputMode EVar39;
  TReferenceControllerBase<1> *pTVar40;
  undefined1 auStackY_2e8 [32];
  FIdentityFunctor local_288;
  undefined1 local_287;
  undefined1 local_286;
  undefined1 local_285;
  undefined1 local_284 [4];
  uint local_280;
  FCycleCounter local_278;
  UCommonUIActionRouterBase *local_268;
  uint local_260;
  undefined8 local_258;
  FSharedReferencer<1> FStack_250;
  FScriptContainerElement *local_248;
  TMap<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,0>_>
  *local_240;
  int iStack_238;
  uint uStack_234;
  undefined1 *local_230;
  undefined4 uStack_228;
  int iStack_224;
  int local_220;
  int iStack_21c;
  int iStack_218;
  undefined4 uStack_214;
  int local_210;
  int local_20c;
  FName *local_208;
  undefined8 local_200;
  FSharedReferencer<1> local_1f8;
  undefined1 local_1f0 [12];
  uint local_1e4;
  longlong local_1e0;
  uint local_1d8;
  int local_1d4;
  TSet<TWeakPtr<FActivatableTreeRoot,1>,DefaultKeyFuncs<TWeakPtr<FActivatableTreeRoot,1>,0>,FDefaultSetAllocator>
  *local_1c8;
  TMap<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList,0>_>
  *local_1c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1b8;
  undefined8 uStack_198;
  FSourceLocation local_188;
  FDestructionSentinel local_168;
  FName local_150;
  FName local_148;
  FName local_140;
  FName local_138;
  FName local_130;
  FName local_128;
  FKey local_120;
  FName local_108;
  FName local_100;
  FName local_f8;
  FName local_f0;
  FName local_e8;
  FName local_e0;
  FKey local_d8;
  FName local_c0 [3];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  TSharedPtr<FActivatableTreeRoot,1> local_98;
  TSet<TWeakPtr<FActivatableTreeRoot,1>,DefaultKeyFuncs<TWeakPtr<FActivatableTreeRoot,1>,0>,FDefaultSetAllocator>
  local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  bVar16 = false;
  iVar36 = 0;
  local_280 = 0;
  local_268 = this;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_UCommonUIActionRouter_Tick ==
        (FThreadSafeStaticStat<_private:_bool___cdecl_UCommonUIActionRouterBase::Tick(float)_::_2_::FStat_STAT_UCommonUIActionRouter_Tick>
         )0x0) {
      pFVar26 = ::FName::FName(local_c0,"STAT_UCommonUIActionRouter_Tick");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UCommonUIActionRouter_Tick,*pFVar26,
                 L"STAT_UCommonUIActionRouter_Tick","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                 true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  TVar20 = FThreadSafeStaticStatInner<`UCommonUIActionRouterBase::Tick'::__l2::FStat_STAT_UCommonUIActionRouter_Tick,1>
           ::GetStatId(&StatPtr_STAT_UCommonUIActionRouter_Tick);
  local_188.Impl._Line = 0x509;
  local_188.Impl._Column = 2;
  local_188.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\CommonUIActionRouterBase.cpp"
  ;
  local_188.Impl._Function = "bool __cdecl UCommonUIActionRouterBase::Tick(float)";
  local_278.StatId.ComparisonIndex.Value = 0;
  local_278.StatId.Number = 0;
  local_278.EmittedEvent = 0;
  FCycleCounter::Start
            (&local_278,*(TStatIdData **)&(TVar20.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false,
             &local_188);
  puVar1 = &(this->ActionDomainRootNodes).field_0x10;
  iVar19 = *(int *)&(this->ActionDomainRootNodes).field_0x28;
  pTVar2 = &this->ActionDomainRootNodes;
  uStack_234 = 1;
  local_220 = 0;
  iStack_224 = local_220;
  if (iVar19 != 0) {
    puVar38 = *(uint **)&(this->ActionDomainRootNodes).field_0x20;
    if (puVar38 == (uint *)0x0) {
      puVar38 = (uint *)puVar1;
    }
    uVar35 = *puVar38;
    local_220 = 0;
    iVar36 = 0;
    while (uVar35 == 0) {
      lVar27 = (longlong)iVar36;
      local_220 = local_220 + 0x20;
      iVar36 = iVar36 + 1;
      iStack_224 = iVar19;
      if ((int)(iVar19 + -1 + (iVar19 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar36) goto LAB_14a82254d;
      uVar35 = puVar38[lVar27 + 1];
    }
    uStack_234 = -uVar35 & uVar35;
    uVar28 = (ulonglong)uStack_234 * 2 + 1;
    lVar27 = 0x3f;
    if (uVar28 != 0) {
      for (; uVar28 >> lVar27 == 0; lVar27 = lVar27 + -1) {
      }
    }
    local_210 = (int)lVar27;
    iStack_224 = local_210 + -1 + local_220;
    if (iVar19 < iStack_224) {
      iStack_224 = iVar19;
    }
  }
LAB_14a82254d:
  iStack_218 = *(int *)&(this->ActionDomainRootNodes).field_0x8 -
               *(int *)&(this->ActionDomainRootNodes).field_0x34;
  uVar35 = *(uint *)&(this->ActionDomainRootNodes).field_0x28;
  uStack_228 = 0xffffffff;
  uVar33 = uVar35 & 0xffffffe0;
  TStack_1b8._padding_ = CONCAT44(uStack_234,iVar36);
  TStack_1b8.CurrentBitIndex = iStack_224;
  TStack_1b8.UnvisitedBitMask = 0xffffffff;
  iVar29 = (int)uVar35 >> 5;
  TStack_1b8._28_4_ = iStack_224;
  TStack_1b8.BaseBitIndex = local_220;
  uStack_198 = CONCAT44(uStack_214,iStack_218);
  local_240 = pTVar2;
  iStack_238 = iVar36;
  local_230 = puVar1;
  iStack_21c = iStack_224;
  local_1c0 = pTVar2;
  TStack_1b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar35 < 0) || (iVar19 < (int)uVar35)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    uVar13 = (*pcVar8)();
    return (bool)uVar13;
  }
  FVar10 = local_288;
  uVar3 = *(uint *)&(this->ActionDomainRootNodes).field_0x28;
  if (uVar35 != uVar3) {
    puVar4 = *(undefined1 **)&(this->ActionDomainRootNodes).field_0x20;
    puVar37 = puVar1;
    if (puVar4 != (undefined1 *)0x0) {
      puVar37 = puVar4;
    }
    uVar35 = -1 << ((byte)uVar35 & 0x1f) & *(uint *)(puVar37 + (longlong)iVar29 * 4);
    while (uVar35 == 0) {
      lVar27 = (longlong)iVar29;
      uVar33 = uVar33 + 0x20;
      iVar29 = iVar29 + 1;
      uVar35 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar29) goto LAB_14a822660;
      uVar35 = *(uint *)(puVar37 + lVar27 * 4 + 4);
    }
    uVar28 = (ulonglong)(-uVar35 & uVar35) * 2 + 1;
    lVar27 = 0x3f;
    if (uVar28 != 0) {
      for (; uVar28 >> lVar27 == 0; lVar27 = lVar27 + -1) {
      }
    }
    local_20c = (int)lVar27;
    uVar35 = local_20c + -1 + uVar33;
    if ((int)uVar3 < (int)uVar35) {
      uVar35 = uVar3;
    }
  }
LAB_14a822660:
  while( true ) {
    pTVar11 = local_1c0;
    if (*(int *)&local_1c0->field_0x8 - *(int *)&local_1c0->field_0x34 != (int)uStack_198) {
      local_287 = 0;
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UCommonInputActionDomain>,UCommonUIActionRouterBase::FActionDomainSortedRootList>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_287);
    }
    this_02 = local_268;
    if (((TStack_1b8.CurrentBitIndex == uVar35) &&
        (TStack_1b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar11 == pTVar2)
       ) break;
    lVar27 = *(longlong *)pTVar11;
    AlgoImpl::
    IntroSortInternal<TSharedRef<FActivatableTreeRoot,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedRef<FActivatableTreeRoot,1>,_UCommonUIActionRouterBase::FActionDomainSortedRootList::Sort_::__l2::<lambda_1>_>_>
              (*(TSharedRef<FActivatableTreeRoot,1> **)
                ((longlong)TStack_1b8.CurrentBitIndex * 0x20 + 8 + lVar27),
               *(int *)((longlong)TStack_1b8.CurrentBitIndex * 0x20 + 0x10 + lVar27),FVar10,
               (<lambda_1> *)local_284);
    TStack_1b8.UnvisitedBitMask = TStack_1b8.UnvisitedBitMask & ~TStack_1b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1b8);
  }
  if ((0 < (local_268->PendingWidgetRegistrations).ArrayNum) ||
     (0 < (local_268->RebuiltWidgetsPendingNodeAssignment).ArrayNum)) {
    RefreshRootNodes(local_268);
    RefreshBoundActions(this_02);
  }
  if (this_02->bIsActivatableTreeEnabled != false) {
    pFVar25 = (this_02->ActiveRootNode).Object;
    if (pFVar25 == (FActivatableTreeRoot *)0x0) {
      iVar36 = -1;
    }
    else {
      iVar36 = FActivatableTreeNode::GetLastPaintLayer((FActivatableTreeNode *)pFVar25);
    }
    local_258 = (this_02->ActiveRootNode).Object;
    FStack_250.ReferenceController =
         (this_02->ActiveRootNode).SharedReferenceCount.ReferenceController;
    if (FStack_250.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_250.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_250.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    iVar19 = (this_02->RootNodes).ArrayNum;
    pFVar30 = (this_02->RootNodes).AllocatorInstance.Data;
    pFVar34 = pFVar30 + (longlong)iVar19 * 0x10;
    while( true ) {
      if ((this_02->RootNodes).ArrayNum != iVar19) {
        local_286 = 0;
        `TCheckedPointerIterator<TSharedRef<FActivatableTreeRoot,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_286);
      }
      FVar31.ReferenceController = FStack_250.ReferenceController;
      if (pFVar30 == pFVar34) break;
      bVar12 = FActivatableTreeNode::IsWidgetActivated(*(FActivatableTreeNode **)pFVar30);
      if ((bVar12) &&
         (iVar29 = FActivatableTreeNode::GetLastPaintLayer(*(FActivatableTreeNode **)pFVar30),
         iVar36 < iVar29)) {
        local_258 = *(FActivatableTreeRoot **)pFVar30;
        local_1f8.ReferenceController = *(TReferenceControllerBase<1> **)(pFVar30 + 8);
        if (local_1f8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_1f8.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_1f8.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_200 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_250,&local_1f8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1f8.ReferenceController);
        iVar36 = iVar29;
      }
      pFVar30 = pFVar30 + 0x10;
    }
    if (local_258 != (this_02->ActiveRootNode).Object) {
      lVar27 = this_02->_padding_;
      local_a8 = (undefined4)local_258;
      uStack_a4 = local_258._4_4_;
      uStack_a0 = FStack_250.ReferenceController._0_4_;
      uStack_9c = FStack_250.ReferenceController._4_4_;
      if (FStack_250.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FStack_250.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FStack_250.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      (**(code **)(lVar27 + 0x310))(this_02,&local_a8);
    }
    TSet<TWeakPtr<FActivatableTreeRoot,1>,DefaultKeyFuncs<TWeakPtr<FActivatableTreeRoot,1>,0>,FDefaultSetAllocator>
    ::
    TSet<TWeakPtr<FActivatableTreeRoot,1>,DefaultKeyFuncs<TWeakPtr<FActivatableTreeRoot,1>,0>,FDefaultSetAllocator>
              (&local_88,&this_02->ActiveActionDomainRootsPendingPaint);
    TSet<TWeakPtr<FActivatableTreeRoot,1>,DefaultKeyFuncs<TWeakPtr<FActivatableTreeRoot,1>,0>,FDefaultSetAllocator>
    ::TIterator::TIterator((TIterator *)local_1f0,&local_88);
    if (local_1d4 < *(int *)(local_1e0 + 0x18)) {
      do {
        iVar36 = local_1d4;
        lVar27 = *(longlong *)local_1f0._0_8_;
        pTVar40 = *(TReferenceControllerBase<1> **)(lVar27 + 8 + (longlong)local_1d4 * 0x18);
        if (pTVar40 == (TReferenceControllerBase<1> *)0x0) {
LAB_14a822866:
          TSet<TWeakPtr<FActivatableTreeRoot,1>,DefaultKeyFuncs<TWeakPtr<FActivatableTreeRoot,1>,0>,FDefaultSetAllocator>
          ::RemoveByIndex(local_1c8,local_1d4);
        }
        else {
          aVar9 = pTVar40->SharedReferenceCount;
          do {
            if (aVar9 == (atomic<int>)0x0) {
              pTVar40 = (TReferenceControllerBase<1> *)0x0;
              goto LAB_14a822866;
            }
            LOCK();
            aVar17 = pTVar40->SharedReferenceCount;
            bVar12 = aVar9 == aVar17;
            if (bVar12) {
              pTVar40->SharedReferenceCount = (atomic<int>)((int)aVar9 + 1);
              aVar17 = aVar9;
            }
            UNLOCK();
            aVar9 = aVar17;
          } while (!bVar12);
          pFVar25 = *(FActivatableTreeRoot **)(lVar27 + (longlong)local_1d4 * 0x18);
          if (pFVar25 == (FActivatableTreeRoot *)0x0) goto LAB_14a822866;
          iVar19 = FActivatableTreeNode::GetLastPaintLayer((FActivatableTreeNode *)pFVar25);
          if (0 < iVar19) {
            TSet<TWeakPtr<FActivatableTreeRoot,1>,DefaultKeyFuncs<TWeakPtr<FActivatableTreeRoot,1>,0>,FDefaultSetAllocator>
            ::RemoveByIndex(local_1c8,iVar36);
            if ((this_02->ActiveRootNode).Object == (FActivatableTreeRoot *)0x0) {
              bVar16 = true;
              pTVar21 = FindActiveActionDomainRootNode(this_02,&local_98);
              if (pFVar25 != pTVar21->Object) goto LAB_14a8228c1;
              bVar12 = true;
            }
            else {
LAB_14a8228c1:
              bVar12 = false;
            }
            if (bVar16) {
              bVar16 = false;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_98.SharedReferenceCount.ReferenceController);
            }
            if (bVar12) {
              FActivatableTreeRoot::UpdateLeafNode(pFVar25);
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                         &this_02->OnBoundActionsUpdatedEvent,(FWriteAccessScope *)&local_168);
              puVar1 = &(this_02->OnBoundActionsUpdatedEvent).field_0x1c;
              *(int *)puVar1 = *(int *)puVar1 + 1;
              bVar12 = false;
              uVar35 = *(int *)&(this_02->OnBoundActionsUpdatedEvent).field_0x10 - 1;
              if (-1 < (int)uVar35) {
                lVar27 = (longlong)(int)uVar35 << 4;
                bVar12 = false;
                do {
                  uVar33 = 0;
                  if ((int)uVar35 < *(int *)&(this_02->OnBoundActionsUpdatedEvent).field_0x10) {
                    uVar33 = ~uVar35 >> 0x1f;
                  }
                  if ((uVar33 == 0) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar14)) {
                    pcVar8 = (code *)swi(3);
                    uVar13 = (*pcVar8)();
                    return (bool)uVar13;
                  }
                  lVar5 = *(longlong *)&(this_02->OnBoundActionsUpdatedEvent).field_0x8;
                  if (((*(int *)(lVar27 + 8 + lVar5) == 0) ||
                      (plVar6 = *(longlong **)(lVar27 + lVar5), plVar6 == (longlong *)0x0)) ||
                     (cVar15 = (**(code **)(*plVar6 + 0x68))(), cVar15 == '\0')) {
                    bVar12 = true;
                  }
                  lVar27 = lVar27 + -0x10;
                  uVar35 = uVar35 - 1;
                } while (-1 < (int)uVar35);
              }
              puVar1 = &(this_02->OnBoundActionsUpdatedEvent).field_0x1c;
              *(int *)puVar1 = *(int *)puVar1 + -1;
              if (bVar12) {
                TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                          ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                           &this_02->OnBoundActionsUpdatedEvent,false);
              }
              this_02 = local_268;
              if (local_168.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_168.Accessor,&local_168);
                this_02 = local_268;
              }
            }
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar40)
        ;
        local_1d8 = local_1d8 & ~local_1e4;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_1f0 + 8));
        FVar31.ReferenceController = FStack_250.ReferenceController;
      } while (local_1d4 < *(int *)(local_1e0 + 0x18));
    }
    TSet<TWeakPtr<FActivatableTreeRoot,1>,DefaultKeyFuncs<TWeakPtr<FActivatableTreeRoot,1>,0>,FDefaultSetAllocator>
    ::Append<FDefaultSetAllocator>(&this_02->ActiveActionDomainRootsPendingPaint,&local_88);
    local_88.HashSize = 0;
    if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_88.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TWeakPtr<FActivatableTreeRoot,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TWeakPtr<FActivatableTreeRoot,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_88.Elements);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar31.ReferenceController);
  }
  if ((this_02->ActiveInputConfig).bIsSet == false) {
    EVar39 = All;
  }
  else {
    EVar39 = (this_02->ActiveInputConfig).TypedValue.InputMode;
  }
  pUVar22 = CastChecked<ULocalPlayer,UObject>((UObject *)this_02->_padding_);
  pUVar23 = ULocalPlayer::GetGameInstance(pUVar22);
  if (pUVar23 != (UGameInstance *)0x0) {
    pTVar24 = UGameInstance::GetLocalPlayers(pUVar23);
    pFVar30 = (pTVar24->AllocatorInstance).Data;
    for (pFVar34 = pFVar30; pFVar34 != pFVar30 + (longlong)pTVar24->ArrayNum * 8;
        pFVar34 = pFVar34 + 8) {
      if (*(ULocalPlayer **)pFVar34 == pUVar22) {
        iVar36 = (int)((longlong)pFVar34 - (longlong)pFVar30 >> 3);
        goto LAB_14a822a98;
      }
    }
  }
  iVar36 = -1;
LAB_14a822a98:
  local_280 = (this_02->HeldKeys).ArrayNum;
  uVar28 = (ulonglong)(int)local_280;
  pFVar32 = (FName *)(this_02->HeldKeys).AllocatorInstance.Data;
  pFVar26 = pFVar32 + uVar28 * 3;
  local_208 = pFVar26;
  do {
    if ((this_02->HeldKeys).ArrayNum != (int)uVar28) {
      local_285 = 0;
      `TCheckedPointerIterator<FKey,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_285);
    }
    if (pFVar32 == pFVar26) {
      if ((local_278.EmittedEvent & 1) != 0) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if ((local_278.EmittedEvent & 2) != 0) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((local_278.EmittedEvent & 4) != 0) {
        FThreadStats::AddMessage(local_278.StatId,CycleScopeEnd);
      }
      return true;
    }
    if (((this_02->PersistentActions).Object == (FPersistentActionCollection *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) {
      pcVar8 = (code *)swi(3);
      uVar13 = (*pcVar8)();
      return (bool)uVar13;
    }
    pFVar7 = (this_02->PersistentActions).Object;
    pcVar8 = *(code **)(*(longlong *)pFVar7 + 8);
    local_150 = *pFVar32;
    local_148 = pFVar32[1];
    local_140 = pFVar32[2];
    if (local_140 != (FName)0x0) {
      LOCK();
      *(int *)((longlong)local_140 + 8) = *(int *)((longlong)local_140 + 8) + 1;
      UNLOCK();
    }
    EVar18 = (*pcVar8)(pFVar7,EVar39,&local_150,2);
    if ((this_02->bIsActivatableTreeEnabled != false) && (EVar18 == Unhandled)) {
      if ((this_02->ActiveRootNode).Object != (FActivatableTreeRoot *)0x0) {
        pFVar25 = TSharedPtr<FActivatableTreeRoot,1>::operator->(&this_02->ActiveRootNode);
        pcVar8 = *(code **)(pFVar25->_padding_ + 8);
        local_138 = *pFVar32;
        local_130 = pFVar32[1];
        local_128 = pFVar32[2];
        if (local_128 != (FName)0x0) {
          LOCK();
          *(int *)((longlong)local_128 + 8) = *(int *)((longlong)local_128 + 8) + 1;
          UNLOCK();
        }
        EVar18 = (*pcVar8)(pFVar25,EVar39,&local_138,2);
      }
      if (EVar18 == Unhandled) {
        local_120.KeyName = *pFVar32;
        local_120.KeyDetails.Object = *(FKeyDetails **)(pFVar32 + 1);
        local_120.KeyDetails.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)(pFVar32 + 2);
        if ((FName)local_120.KeyDetails.SharedReferenceCount.ReferenceController != (FName)0x0) {
          LOCK();
          *(int *)((longlong)local_120.KeyDetails.SharedReferenceCount.ReferenceController + 8) =
               *(int *)((longlong)local_120.KeyDetails.SharedReferenceCount.ReferenceController + 8)
               + 1;
          UNLOCK();
        }
        EVar18 = ProcessHoldInputOnActionDomains(this_02,EVar39,&local_120,IE_Repeat,iVar36);
      }
    }
    if ((bSupportMultiUserInput != false) && (EVar18 == Unhandled)) {
      pUVar22 = CastChecked<ULocalPlayer,UObject>((UObject *)this_02->_padding_);
      pUVar23 = ULocalPlayer::GetGameInstance(pUVar22);
      if (pUVar23 != (UGameInstance *)0x0) {
        pTVar24 = UGameInstance::GetLocalPlayers(pUVar23);
        pFVar34 = (pTVar24->AllocatorInstance).Data;
        local_260 = pTVar24->ArrayNum;
        uVar28 = (ulonglong)(int)local_260;
        pFVar30 = pFVar34 + uVar28 * 8;
        local_248 = pFVar30;
        do {
          if (pTVar24->ArrayNum != (int)uVar28) {
            local_288 = (FIdentityFunctor)0x0;
            `TCheckedPointerIterator<ULocalPlayer_*_const,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_288);
          }
          pFVar26 = local_208;
          this_02 = local_268;
          if (pFVar34 == pFVar30) break;
          this_00 = *(ULocalPlayer **)pFVar34;
          if (((this_00 != pUVar22) && (this_00 != (ULocalPlayer *)0x0)) &&
             (this_01 = ULocalPlayer::GetSubsystem<UCommonUIActionRouterBase>(this_00),
             pFVar30 = local_248, this_01 != (UCommonUIActionRouterBase *)0x0)) {
            if (((this_01->PersistentActions).Object == (FPersistentActionCollection *)0x0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar16)) {
              pcVar8 = (code *)swi(3);
              uVar13 = (*pcVar8)();
              return (bool)uVar13;
            }
            pFVar7 = (this_01->PersistentActions).Object;
            pcVar8 = *(code **)(*(longlong *)pFVar7 + 8);
            local_108 = *pFVar32;
            local_100 = pFVar32[1];
            local_f8 = pFVar32[2];
            if (local_f8 != (FName)0x0) {
              LOCK();
              *(int *)((longlong)local_f8 + 8) = *(int *)((longlong)local_f8 + 8) + 1;
              UNLOCK();
            }
            EVar18 = (*pcVar8)(pFVar7,EVar39,&local_108,2);
            if (this_01->bIsActivatableTreeEnabled != false) {
              pFVar26 = local_208;
              this_02 = local_268;
              if (EVar18 != Unhandled) break;
              iVar19 = 2;
              if ((this_01->ActiveRootNode).Object != (FActivatableTreeRoot *)0x0) {
                pFVar25 = TSharedPtr<FActivatableTreeRoot,1>::operator->(&this_01->ActiveRootNode);
                pcVar8 = *(code **)(pFVar25->_padding_ + 8);
                local_f0 = *pFVar32;
                local_e8 = pFVar32[1];
                local_e0 = pFVar32[2];
                if (local_e0 != (FName)0x0) {
                  LOCK();
                  *(int *)((longlong)local_e0 + 8) = *(int *)((longlong)local_e0 + 8) + 1;
                  UNLOCK();
                }
                iVar19 = (*pcVar8)(pFVar25,EVar39,&local_f0,2);
              }
              pFVar26 = local_208;
              this_02 = local_268;
              if (iVar19 != 2) break;
              local_d8.KeyName = *pFVar32;
              local_d8.KeyDetails.Object = *(FKeyDetails **)(pFVar32 + 1);
              local_d8.KeyDetails.SharedReferenceCount.ReferenceController =
                   *(TReferenceControllerBase<1> **)(pFVar32 + 2);
              if ((FName)local_d8.KeyDetails.SharedReferenceCount.ReferenceController != (FName)0x0)
              {
                LOCK();
                *(int *)((longlong)local_d8.KeyDetails.SharedReferenceCount.ReferenceController + 8)
                     = *(int *)((longlong)
                                local_d8.KeyDetails.SharedReferenceCount.ReferenceController + 8) +
                       1;
                UNLOCK();
              }
              EVar18 = ProcessHoldInputOnActionDomains(this_01,EVar39,&local_d8,IE_Repeat,iVar36);
            }
            pFVar30 = local_248;
            pFVar26 = local_208;
            this_02 = local_268;
            if (EVar18 != Unhandled) break;
          }
          uVar28 = (ulonglong)local_260;
          pFVar34 = pFVar34 + 8;
        } while( true );
      }
    }
    uVar28 = (ulonglong)local_280;
    pFVar32 = pFVar32 + 3;
  } while( true );
}

// UnregisterScrollRecipient @ 14a825750

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCommonUIActionRouterBase::UnregisterScrollRecipient
          (UCommonUIActionRouterBase *this,UWidget *param_1)

{
  TArray<TWeakObjectPtr<UWidget_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *this_00;
  int iVar1;
  UClass *pUVar2;
  UCommonActivatableWidget *pUVar3;
  TSharedPtr<FActivatableTreeNode,1> *pTVar4;
  FPendingWidgetRegistration *pFVar5;
  FWeakObjectPtr local_res10;
  UWidget *local_res18;
  TSharedPtr<FActivatableTreeNode,1> local_28;
  TSharedPtr<FActivatableTreeNode,1> local_18;
  
  if (param_1 == (UWidget *)0x0) {
LAB_14a825792:
    pUVar3 = (UCommonActivatableWidget *)0x0;
  }
  else {
    pUVar2 = UCommonActivatableWidget::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       (pUVar3 = (UCommonActivatableWidget *)param_1,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       != &pUVar2->_padding_)) goto LAB_14a825792;
  }
  FindNode(this,&local_28,pUVar3);
  if (local_28.Object == (FActivatableTreeNode *)0x0) {
    if ((pUVar3 == (UCommonActivatableWidget *)0x0) || (pUVar3->bIsModal == false)) {
      pUVar3 = ::FindOwningActivatable(param_1);
      if (pUVar3 != (UCommonActivatableWidget *)0x0) {
        pTVar4 = FindNode(this,&local_18,pUVar3);
        if (&local_28 != pTVar4) {
          local_28.Object = pTVar4->Object;
          pTVar4->Object = (FActivatableTreeNode *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&local_28.SharedReferenceCount,&pTVar4->SharedReferenceCount);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_18.SharedReferenceCount.ReferenceController);
      }
      if (local_28.Object != (FActivatableTreeNode *)0x0) goto LAB_14a82582a;
    }
    pFVar5 = TArray<UCommonUIActionRouterBase::FPendingWidgetRegistration,TSizedDefaultAllocator<32>_>
             ::FindByKey<UWidget>(&this->PendingWidgetRegistrations,param_1);
    if (pFVar5 != (FPendingWidgetRegistration *)0x0) {
      pFVar5->bIsScrollRecipient = false;
    }
  }
  else {
LAB_14a82582a:
    this_00 = &(local_28.Object)->ScrollRecipients;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWidget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWidget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
    TArray<TWeakObjectPtr<UWidget_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::Remove
              (this_00,(TWeakObjectPtr<UWidget_const_,FWeakObjectPtr> *)&local_res10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// UpdateLeafNodeAndConfig @ 14a827470

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCommonUIActionRouterBase::UpdateLeafNodeAndConfig
          (UCommonUIActionRouterBase *this,TSharedPtr<FActivatableTreeRoot,1> *param_1,
          TSharedPtr<FActivatableTreeNode,1> *param_2)

{
  FActivatableTreeRoot *this_00;
  bool bVar1;
  TSharedPtr<FActivatableTreeNode,1> local_18;
  
  this_00 = param_1->Object;
  if (this_00 != (FActivatableTreeRoot *)0x0) {
    if (this_00 == (this->ActiveRootNode).Object) {
      local_18.Object = param_2->Object;
      local_18.SharedReferenceCount.ReferenceController =
           (param_2->SharedReferenceCount).ReferenceController;
      if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar1 = FActivatableTreeRoot::UpdateLeafmostActiveNode(this_00,&local_18,true);
      if ((!bVar1) && (2 < (byte)LogUIActionRouter._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogUIActionRouter);
      }
    }
    else {
      RefreshActionDomainLeafNodeConfig(this);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// operator() @ 150555630

bool __thiscall
`UCommonUIActionRouterBase::HandleRootWidgetSlateReleased'::__l29::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<2489800349741745021>);
  if (bVar2) {
    bVar4 = **(longlong **)this != 0;
    if (bVar4) {
      local_res10[0] = *(FName *)(**(longlong **)this + 0x18);
      ::FName::ToString(local_res10,&local_18);
    }
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2489800349741745021>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1505556b4;
    }
  }
  bVar2 = false;
LAB_1505556b4:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (!bVar2) {
    return false;
  }
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return (bool)uVar3;
}

// operator() @ 1505556f0

bool __thiscall
`UCommonUIActionRouterBase::RefreshRootNodes'::__l38::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<2489800349741745364>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2489800349741745364>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150555770

bool __thiscall
`UCommonUIActionRouterBase::RefreshBoundActions'::__l13::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2489800349741745384>);
  if (bVar2) {
    local_res10[0] = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2489800349741745384>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1505557e8;
    }
  }
  bVar2 = false;
LAB_1505557e8:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150555820

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
`UCommonUIActionRouterBase::RegisterWidgetBindings'::__l14::<lambda_1>::operator()(void *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  UWidget *pUVar8;
  UObject *pUVar9;
  FName local_res10;
  FString local_48;
  FString local_38;
  FString local_28;
  
  bVar4 = false;
  bVar3 = false;
  bVar6 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar5 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2489800349741745623>);
  if (bVar5) {
    plVar1 = *(longlong **)this;
    if ((*plVar1 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    pUVar8 = (UWidget *)FWeakObjectPtr::Get((FWeakObjectPtr *)(*plVar1 + 0x14));
    CommonUIUtils::PrintAllOwningUserWidgets(&local_28,pUVar8);
    plVar1 = *(longlong **)this;
    if ((*plVar1 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    ::FName::ToString((FName *)*plVar1,&local_38);
    plVar1 = *(longlong **)this;
    if ((*plVar1 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*plVar1 + 0x14));
    local_res10.ComparisonIndex.Value = *(uint *)&pUVar9->field_0x18;
    local_res10.Number = *(uint *)&pUVar9->field_0x1c;
    ::FName::ToString(&local_res10,&local_48);
    bVar4 = true;
    bVar3 = true;
    bVar6 = true;
    bVar5 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2489800349741745623>,&::ENSURE_Static);
    if (bVar5) {
      bVar5 = true;
      goto LAB_1505559a0;
    }
  }
  bVar5 = false;
LAB_1505559a0:
  if ((bVar6) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  return false;
}

