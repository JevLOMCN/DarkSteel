// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SourceControl
// Functions: 53

// FSourceControlModule @ 146b001b0

/* WARNING: Enum "Type": Some values do not have unique names */

FSourceControlModule * __thiscall
FSourceControlModule::FSourceControlModule(FSourceControlModule *this)

{
  TNode *pTVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  
  pTVar3 = (TNode *)0x0;
  *(undefined8 *)&(this->OnSourceControlProviderChanged).field_0x18 = 2;
  (this->SourceControlSettings).Provider.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&___7FSourceControlModule__6B_;
  (this->SourceControlSettings).Provider.Data.ArrayNum = 0;
  (this->SourceControlSettings).Provider.Data.ArrayMax = 0;
  this->DefaultSourceControlProvider =
       (FDefaultSourceControlProvider)&___7FDefaultSourceControlProvider__6B_;
  (this->SourceControlSettings).bUseGlobalSettings = false;
  this->CurrentSourceControlProvider = (ISourceControlProvider *)0x0;
  (this->SourceControlLoginWindowPtr).Object = (SWindow *)0x0;
  (this->SourceControlLoginWindowPtr).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->SourceControlLoginPtr).Object = (SSourceControlLogin *)0x0;
  (this->SourceControlLoginPtr).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->SourceControlFileStatusMonitor).Object = (FSourceControlFileStatusMonitor *)0x0;
  (this->SourceControlFileStatusMonitor).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->PendingStatusUpdateFiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingStatusUpdateFiles).ArrayNum = 0;
  (this->PendingStatusUpdateFiles).ArrayMax = 0;
  this->TemporarilyDisabledCount = '\0';
  (this->ActiveProviderName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveProviderName).Data.ArrayNum = 0;
  (this->ActiveProviderName).Data.ArrayMax = 0;
  *(undefined8 *)&this->OnSourceControlProviderChanging = 0;
  *(undefined8 *)&(this->OnSourceControlProviderChanging).field_0x8 = 0;
  *(undefined4 *)&(this->OnSourceControlProviderChanging).field_0x10 = 0;
  *(undefined8 *)&this->OnSourceControlProviderChanged = 0;
  *(undefined8 *)&(this->OnSourceControlProviderChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnSourceControlProviderChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnSourceControlPreSubmitChangelistValidation = 0;
  *(undefined8 *)&(this->OnSourceControlPreSubmitChangelistValidation).field_0x8 = 0;
  *(undefined4 *)&(this->OnSourceControlPreSubmitChangelistValidation).field_0x10 = 0;
  *(undefined8 *)&this->OnSourceControlPreSubmitFilesValidation = 0;
  *(undefined8 *)&(this->OnSourceControlPreSubmitFilesValidation).field_0x8 = 0;
  *(undefined4 *)&(this->OnSourceControlPreSubmitFilesValidation).field_0x10 = 0;
  *(undefined8 *)&this->OnPresubmitFinalize = 0;
  *(undefined8 *)&(this->OnPresubmitFinalize).field_0x8 = 0;
  *(undefined8 *)&(this->OnPresubmitFinalize).field_0x10 = 0;
  *(undefined8 *)&(this->OnPresubmitFinalize).field_0x18 = 2;
  *(undefined8 *)&this->OnFilesDeleted = 0;
  *(undefined8 *)&(this->OnFilesDeleted).field_0x8 = 0;
  *(undefined8 *)&(this->OnFilesDeleted).field_0x10 = 0;
  *(undefined8 *)&(this->OnFilesDeleted).field_0x18 = 2;
  *(undefined8 *)&(this->AssetDataCache).AssetDataCache = 0;
  *(undefined8 *)&(this->AssetDataCache).AssetDataCache.field_0x8 = 0;
  *(undefined8 *)&(this->AssetDataCache).AssetDataCache.field_0x20 = 0;
  *(undefined4 *)&(this->AssetDataCache).AssetDataCache.field_0x28 = 0;
  *(undefined4 *)&(this->AssetDataCache).AssetDataCache.field_0x2c = 0x80;
  *(undefined4 *)&(this->AssetDataCache).AssetDataCache.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AssetDataCache).AssetDataCache.field_0x34 = 0;
  *(undefined8 *)&(this->AssetDataCache).AssetDataCache.field_0x40 = 0;
  *(undefined4 *)&(this->AssetDataCache).AssetDataCache.field_0x48 = 0;
  (this->AssetDataCache).FileHistoryToUpdate.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->AssetDataCache).FileHistoryToUpdate.ArrayNum = 0;
  (this->AssetDataCache).FileHistoryToUpdate.ArrayMax = 0;
  pTVar1 = ::operator_new(0x18);
  pTVar2 = pTVar3;
  if (pTVar1 != (TNode *)0x0) {
    pTVar1->NextNode = (TNode *)0x0;
    (pTVar1->Item).TempFilename.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ((FSharedReferencer<1> *)&(pTVar1->Item).TempFilename.Data.ArrayNum)->ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar1->NextNode = (TNode *)0x0;
    (pTVar1->Item).TempFilename.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ((FSharedReferencer<1> *)&(pTVar1->Item).TempFilename.Data.ArrayNum)->ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar2 = pTVar1;
  }
  (this->AssetDataCache).AssetDataToFetch.Tail = (TNode *)pTVar2;
  (this->AssetDataCache).AssetDataToFetch.Head = (TNode *)pTVar2;
  pTVar2 = ::operator_new(0x28);
  if (pTVar2 != (TNode *)0x0) {
    pTVar2->NextNode = (TNode *)0x0;
    (pTVar2->Item).TempFilename.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ((FSharedReferencer<1> *)&(pTVar2->Item).TempFilename.Data.ArrayNum)->ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (pTVar2->Item).Filename.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar2->Item).Filename.Data.ArrayNum = 0;
    (pTVar2->Item).Filename.Data.ArrayMax = 0;
    pTVar2->NextNode = (TNode *)0x0;
    (pTVar2->Item).TempFilename.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ((FSharedReferencer<1> *)&(pTVar2->Item).TempFilename.Data.ArrayNum)->ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (pTVar2->Item).Filename.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar2->Item).Filename.Data.ArrayNum = 0;
    (pTVar2->Item).Filename.Data.ArrayMax = 0;
    pTVar3 = pTVar2;
  }
  (this->AssetDataCache).AssetDataToLoad.Tail = pTVar3;
  (this->AssetDataCache).AssetDataToLoad.Head = pTVar3;
  (this->AssetDataCache).ProviderChangedDelegateHandle.ID = 0;
  (this->AssetDataCache).ActorLabelChangedDelegateHandle.ID = 0;
  (this->AssetDataCache).AssetUpdatedDelegateHandle.ID = 0;
  (this->AssetDataCache).CurrentAsyncTask = (atomic<unsigned_int>)0x0;
  *(undefined8 *)&this->SourceControlProjectDirDelegate = 0;
  *(undefined8 *)&(this->SourceControlProjectDirDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->SourceControlProjectDirDelegate).field_0x10 = 0;
  *(undefined8 *)&this->CustomProjectsDelegate = 0;
  *(undefined8 *)&(this->CustomProjectsDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->CustomProjectsDelegate).field_0x10 = 0;
  *(undefined8 *)&this->CustomProjectsChangedDelegate = 0;
  *(undefined8 *)&(this->CustomProjectsChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->CustomProjectsChangedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->CustomProjectsChangedDelegate).field_0x18 = 2;
  return this;
}

// ~FSourceControlModule @ 146b01080

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSourceControlModule::~FSourceControlModule(FSourceControlModule *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->CustomProjectsChangedDelegate).field_0x8,
             *(int *)&(this->CustomProjectsChangedDelegate).field_0x10);
  pvVar1 = *(void **)&(this->CustomProjectsChangedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->CustomProjectsChangedDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->CustomProjectsDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->SourceControlProjectDirDelegate);
  FSourceControlAssetDataCache::~FSourceControlAssetDataCache(&this->AssetDataCache);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnFilesDeleted).field_0x8,*(int *)&(this->OnFilesDeleted).field_0x10);
  pvVar1 = *(void **)&(this->OnFilesDeleted).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFilesDeleted);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPresubmitFinalize).field_0x8,*(int *)&(this->OnPresubmitFinalize).field_0x10
            );
  pvVar1 = *(void **)&(this->OnPresubmitFinalize).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPresubmitFinalize);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->OnSourceControlPreSubmitFilesValidation);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->OnSourceControlPreSubmitChangelistValidation);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSourceControlProviderChanged).field_0x8,
             *(int *)&(this->OnSourceControlProviderChanged).field_0x10);
  pvVar1 = *(void **)&(this->OnSourceControlProviderChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSourceControlProviderChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSourceControlProviderChanging);
  pFVar2 = (this->ActiveProviderName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FString,int>
            ((FString *)(this->PendingStatusUpdateFiles).AllocatorInstance.Data,
             (this->PendingStatusUpdateFiles).ArrayNum);
  pFVar2 = (this->PendingStatusUpdateFiles).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SourceControlFileStatusMonitor).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SourceControlLoginPtr).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SourceControlLoginWindowPtr).SharedReferenceCount.ReferenceController);
  this->DefaultSourceControlProvider =
       (FDefaultSourceControlProvider)&___7ISourceControlProvider__6B_;
  pFVar2 = (this->SourceControlSettings).Provider.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)IModuleInterface::vftable;
  return;
}

// ClearCurrentSourceControlProvider @ 146b08150

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSourceControlModule::ClearCurrentSourceControlProvider(FSourceControlModule *this)

{
  FDefaultSourceControlProvider *pFVar1;
  ISourceControlProvider *pIVar2;
  
  pIVar2 = this->CurrentSourceControlProvider;
  pFVar1 = &this->DefaultSourceControlProvider;
  if (pIVar2 == (ISourceControlProvider *)0x0) {
    this->CurrentSourceControlProvider = (ISourceControlProvider *)pFVar1;
  }
  else if (pIVar2 != (ISourceControlProvider *)pFVar1) {
    (**(code **)((longlong)*pIVar2 + 0x18))(pIVar2);
    this->CurrentSourceControlProvider = (ISourceControlProvider *)pFVar1;
    TMulticastDelegate<void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy>
    ::Broadcast(&this->OnSourceControlProviderChanged,pIVar2,(ISourceControlProvider *)pFVar1);
    return;
  }
  return;
}

// CreateProvider @ 146b13000

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<ISourceControlProvider,TDefaultDelete<ISourceControlProvider>_> __thiscall
FSourceControlModule::CreateProvider
          (FSourceControlModule *this,FName *param_1,TStringView<wchar_t> *param_2,
          FSourceControlInitSettings *param_3)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  IModularFeatures *this_00;
  longlong *plVar3;
  int iVar4;
  ForAnyElementType FVar5;
  undefined8 in_stack_00000028;
  undefined1 local_38 [8];
  TArray<ISourceControlProvider_*,TSizedDefaultAllocator<32>_> local_30;
  
  this_00 = IModularFeatures::Get();
  IModularFeatures::GetModularFeatureImplementations<ISourceControlProvider>
            (this_00,&local_30,SourceControlFeatureName);
  iVar4 = local_30.ArrayNum;
  pFVar1 = local_30.AllocatorInstance.Data + (longlong)iVar4 * 8;
  FVar5.Data = local_30.AllocatorInstance.Data;
  while( true ) {
    if (local_30.ArrayNum != iVar4) {
      `TCheckedPointerIterator<ISourceControlProvider_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_38);
    }
    if (FVar5.Data == pFVar1) break;
    plVar2 = *(longlong **)FVar5.Data;
    plVar3 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2);
    if ((wchar_t *)*plVar3 == param_2->DataPtr) {
      (**(code **)(*plVar2 + 400))(plVar2,param_1,param_3,in_stack_00000028);
LAB_146b130a6:
      if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.AllocatorInstance.Data);
      }
      return (TUniquePtr<ISourceControlProvider,TDefaultDelete<ISourceControlProvider>_>)
             (ISourceControlProvider *)param_1;
    }
    FVar5.Data = FVar5.Data + 8;
  }
  param_1->ComparisonIndex = 0;
  param_1->Number = 0;
  goto LAB_146b130a6;
}

// GetAssetDataCache @ 146b165f0

/* WARNING: Enum "Type": Some values do not have unique names */

FSourceControlAssetDataCache * __thiscall
FSourceControlModule::GetAssetDataCache(FSourceControlModule *this)

{
  return &this->AssetDataCache;
}

// GetCustomProjects @ 146b16ee0

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FSourceControlProjectInfo,TSizedDefaultAllocator<32>_> * __thiscall
FSourceControlModule::GetCustomProjects
          (FSourceControlModule *this,
          TArray<FSourceControlProjectInfo,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  FSourceControlProjectInfo *pFVar5;
  FReadAccessScope *pFVar6;
  undefined1 local_38 [16];
  FReadAccessScope local_28;
  
  pFVar5 = (FSourceControlProjectInfo *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->CustomProjectsDelegate
             ,&local_28);
  if (((*(int *)&(this->CustomProjectsDelegate).field_0x10 == 0) ||
      (plVar1 = *(longlong **)&(this->CustomProjectsDelegate).field_0x8, plVar1 == (longlong *)0x0))
     || (cVar4 = (**(code **)(*plVar1 + 0x38))(), cVar4 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    pFVar6 = &local_28;
    local_28.DestructionSentinel.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
    bVar3 = false;
    bVar2 = true;
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->CustomProjectsDelegate,&local_28);
    if (*(int *)&(this->CustomProjectsDelegate).field_0x10 != 0) {
      pFVar5 = *(FSourceControlProjectInfo **)&(this->CustomProjectsDelegate).field_0x8;
    }
    (**(code **)((pFVar5->ProjectDirectory).Data.AllocatorInstance.Data + 0x60))(pFVar5,local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    pFVar6 = (FReadAccessScope *)local_38;
    bVar3 = true;
    bVar2 = false;
    pFVar5 = (FSourceControlProjectInfo *)local_38._0_8_;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)pFVar5;
  *(undefined8 *)&pFVar6->DestructionSentinel = 0;
  __return_storage_ptr__->ArrayNum = *(int *)&(pFVar6->DestructionSentinel).Accessor;
  __return_storage_ptr__->ArrayMax = *(int *)((longlong)&(pFVar6->DestructionSentinel).Accessor + 4)
  ;
  (pFVar6->DestructionSentinel).Accessor = (FMRSWRecursiveAccessDetector *)0x0;
  if (bVar2) {
    DestructItems<FSourceControlProjectInfo,int>
              ((FSourceControlProjectInfo *)local_28.DestructionSentinel._0_8_,
               (int)local_28.DestructionSentinel.Accessor);
    if ((FSourceControlProjectInfo *)local_28.DestructionSentinel._0_8_ !=
        (FSourceControlProjectInfo *)0x0) {
      FMemory::Free((void *)local_28.DestructionSentinel._0_8_);
    }
  }
  if ((bVar3) &&
     (DestructItems<FSourceControlProjectInfo,int>
                ((FSourceControlProjectInfo *)local_38._0_8_,local_38._8_4_),
     (FSourceControlProjectInfo *)local_38._0_8_ != (FSourceControlProjectInfo *)0x0)) {
    FMemory::Free((void *)local_38._0_8_);
  }
  return __return_storage_ptr__;
}

// GetLoginWidget @ 146b18460

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SSourceControlLogin,1> * __thiscall
FSourceControlModule::GetLoginWidget
          (FSourceControlModule *this,TSharedPtr<SSourceControlLogin,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->SourceControlLoginPtr).Object;
  pTVar1 = (this->SourceControlLoginPtr).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetNumSourceControlProviders @ 146b18c80

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall FSourceControlModule::GetNumSourceControlProviders(FSourceControlModule *this)

{
  int iVar1;
  IModularFeatures *pIVar2;
  
  pIVar2 = IModularFeatures::Get();
                    /* WARNING: Could not recover jumptable at 0x000146b18c9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)((longlong)*pIVar2 + 0x18))
                    (pIVar2,SourceControlFeatureName,*(code **)((longlong)*pIVar2 + 0x18));
  return iVar1;
}

// GetOnFilesDeleted @ 146b192a0

/* WARNING: Enum "Type": Some values do not have unique names */

TMulticastDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
* __thiscall FSourceControlModule::GetOnFilesDeleted(FSourceControlModule *this)

{
  return &this->OnFilesDeleted;
}

// GetOnPreSubmitFinalize @ 146b192b0

/* WARNING: Enum "Type": Some values do not have unique names */

TMulticastDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,TArray<FText,TSizedDefaultAllocator<32>_>_&,TArray<FText,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
* __thiscall FSourceControlModule::GetOnPreSubmitFinalize(FSourceControlModule *this)

{
  return &this->OnPresubmitFinalize;
}

// GetProvider @ 146b19450

/* WARNING: Enum "Type": Some values do not have unique names */

ISourceControlProvider * __thiscall FSourceControlModule::GetProvider(FSourceControlModule *this)

{
  return this->CurrentSourceControlProvider;
}

// GetProviderNames @ 146b19470

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSourceControlModule::GetProviderNames
          (FSourceControlModule *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  IModularFeatures *pIVar7;
  int iVar8;
  undefined8 local_18 [2];
  
  piVar1 = &param_1->ArrayMax;
  iVar8 = 0;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&param_1->AllocatorInstance,0,piVar1);
  }
  pIVar7 = IModularFeatures::Get();
  iVar5 = (**(code **)((longlong)*pIVar7 + 0x18))(pIVar7,SourceControlFeatureName);
  if (0 < iVar5) {
    do {
      GetSourceControlProviderName(this,(int)local_18);
      pFVar2 = (param_1->AllocatorInstance).Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)*piVar1 * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = param_1->ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&param_1->AllocatorInstance,piVar1);
      }
      iVar8 = iVar8 + 1;
      param_1->ArrayNum = iVar6 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
    } while (iVar8 < iVar5);
  }
  return;
}

// GetRegisteredPreSubmitChangelistValidation @ 146b19680

/* WARNING: Enum "Type": Some values do not have unique names */

TDelegate<void___cdecl(TSharedPtr<ISourceControlChangelist,1>,EDataValidationResult_&,TArray<FText,TSizedDefaultAllocator<32>_>_&,TArray<FText,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
* __thiscall
FSourceControlModule::GetRegisteredPreSubmitChangelistValidation
          (FSourceControlModule *this,
          TDelegate<void___cdecl(TSharedPtr<ISourceControlChangelist,1>,EDataValidationResult_&,TArray<FText,TSizedDefaultAllocator<32>_>_&,TArray<FText,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
          *__return_storage_ptr__)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegate<void___cdecl(TSharedPtr<ISourceControlChangelist,1>,enum_EDataValidationResult_&,TArray<FText,TSizedDefaultAllocator<32>_>_&,TArray<FText,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>
            (__return_storage_ptr__,&this->OnSourceControlPreSubmitChangelistValidation);
  return __return_storage_ptr__;
}

// GetRegisteredPreSubmitFilesValidation @ 146b196f0

/* WARNING: Enum "Type": Some values do not have unique names */

TDelegate<void___cdecl(TArray<TSharedRef<ISourceControlState,1>,TSizedDefaultAllocator<32>_>_&,EDataValidationResult_&,TArray<FText,TSizedDefaultAllocator<32>_>_&,TArray<FText,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
* __thiscall
FSourceControlModule::GetRegisteredPreSubmitFilesValidation
          (FSourceControlModule *this,
          TDelegate<void___cdecl(TArray<TSharedRef<ISourceControlState,1>,TSizedDefaultAllocator<32>_>_&,EDataValidationResult_&,TArray<FText,TSizedDefaultAllocator<32>_>_&,TArray<FText,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
          *__return_storage_ptr__)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegate<void___cdecl(TArray<TSharedRef<ISourceControlState,1>,TSizedDefaultAllocator<32>_>_&,enum_EDataValidationResult_&,TArray<FText,TSizedDefaultAllocator<32>_>_&,TArray<FText,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>
            (__return_storage_ptr__,&this->OnSourceControlPreSubmitFilesValidation);
  return __return_storage_ptr__;
}

// GetSourceControlFileStatusMonitor @ 146b19e10

/* WARNING: Enum "Type": Some values do not have unique names */

FSourceControlFileStatusMonitor * __thiscall
FSourceControlModule::GetSourceControlFileStatusMonitor(FSourceControlModule *this)

{
  code *pcVar1;
  bool bVar2;
  FSourceControlFileStatusMonitor *pFVar3;
  
  if ((this->SourceControlFileStatusMonitor).Object != (FSourceControlFileStatusMonitor *)0x0) {
    return (this->SourceControlFileStatusMonitor).Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FSourceControlFileStatusMonitor *)(*pcVar1)();
    return pFVar3;
  }
  return (this->SourceControlFileStatusMonitor).Object;
}

// GetSourceControlProjectDir @ 146b19eb0

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
FSourceControlModule::GetSourceControlProjectDir
          (FSourceControlModule *this,FString *__return_storage_ptr__)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  FString *pFVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  FSourceControlProjectInfo *pFVar8;
  FSourceControlProjectInfo *local_b8;
  undefined8 local_b0;
  ForAnyElementType local_a8;
  int local_a0;
  int iStack_9c;
  undefined8 local_98;
  undefined8 local_90;
  FReadAccessScope local_88;
  FReadAccessScope local_70;
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  plVar7 = (longlong *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->CustomProjectsDelegate
             ,&local_88);
  iVar6 = 0;
  if (((*(int *)&(this->CustomProjectsDelegate).field_0x10 == 0) ||
      (plVar5 = *(longlong **)&(this->CustomProjectsDelegate).field_0x8, plVar5 == (longlong *)0x0))
     || (cVar2 = (**(code **)(*plVar5 + 0x38))(), cVar2 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
    local_98 = 0;
    local_90 = 0;
    pFVar8 = (FSourceControlProjectInfo *)0x0;
    DestructItems<FSourceControlProjectInfo,int>((FSourceControlProjectInfo *)0x0,0);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->CustomProjectsDelegate,&local_58);
    plVar5 = plVar7;
    if (*(int *)&(this->CustomProjectsDelegate).field_0x10 != 0) {
      plVar5 = *(longlong **)&(this->CustomProjectsDelegate).field_0x8;
    }
    (**(code **)(*plVar5 + 0x60))(plVar5,&local_b8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
    iVar6 = (int)local_b0;
    pFVar8 = local_b8;
    local_b8 = (FSourceControlProjectInfo *)0x0;
    local_b0 = 0;
    DestructItems<FSourceControlProjectInfo,int>((FSourceControlProjectInfo *)0x0,0);
    if (local_b8 != (FSourceControlProjectInfo *)0x0) {
      FMemory::Free(local_b8);
    }
  }
  if (iVar6 == 0) {
    DestructItems<FSourceControlProjectInfo,int>(pFVar8,0);
    if (pFVar8 != (FSourceControlProjectInfo *)0x0) {
      FMemory::Free(pFVar8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->SourceControlProjectDirDelegate,&local_70);
    if (((*(int *)&(this->SourceControlProjectDirDelegate).field_0x10 == 0) ||
        (plVar5 = *(longlong **)&(this->SourceControlProjectDirDelegate).field_0x8,
        plVar5 == (longlong *)0x0)) || (cVar2 = (**(code **)(*plVar5 + 0x38))(), cVar2 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_70);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_70);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->SourceControlProjectDirDelegate,&local_40);
      if (*(int *)&(this->SourceControlProjectDirDelegate).field_0x10 != 0) {
        plVar7 = *(longlong **)&(this->SourceControlProjectDirDelegate).field_0x8;
      }
      (**(code **)(*plVar7 + 0x60))(plVar7,&local_a8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_40);
      if (1 < local_a0) {
        (__return_storage_ptr__->Data).AllocatorInstance.Data = local_a8.Data;
        (__return_storage_ptr__->Data).ArrayMax = iStack_9c;
        (__return_storage_ptr__->Data).ArrayNum = local_a0;
        return __return_storage_ptr__;
      }
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data);
      }
    }
    FPaths::ProjectDir(__return_storage_ptr__);
  }
  else {
    if ((iVar6 < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
    ::FString::FString(__return_storage_ptr__,&pFVar8->ProjectDirectory);
    DestructItems<FSourceControlProjectInfo,int>(pFVar8,iVar6);
    if (pFVar8 != (FSourceControlProjectInfo *)0x0) {
      FMemory::Free(pFVar8);
    }
  }
  return __return_storage_ptr__;
}

// GetSourceControlProviderChanging @ 146b1a0e0

/* WARNING: Enum "Type": Some values do not have unique names */

TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> * __thiscall
FSourceControlModule::GetSourceControlProviderChanging(FSourceControlModule *this)

{
  return &this->OnSourceControlProviderChanging;
}

// GetSourceControlProviderName @ 146b1a0f0

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall
FSourceControlModule::GetSourceControlProviderName(FSourceControlModule *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  IModularFeatures *this_00;
  FName FVar4;
  undefined8 *puVar5;
  uint in_register_00000014;
  uint in_R8D;
  TArray<ISourceControlProvider_*,TSizedDefaultAllocator<32>_> local_18;
  
  FVar4.Number = in_register_00000014;
  FVar4.ComparisonIndex.Value = param_1;
  this_00 = IModularFeatures::Get();
  IModularFeatures::GetModularFeatureImplementations<ISourceControlProvider>
            (this_00,&local_18,SourceControlFeatureName);
  if ((((int)in_R8D < 0) || (local_18.ArrayNum <= (int)in_R8D)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Providers.IsValidIndex(ProviderIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SourceControlModule.cpp"
                         ,0x1da,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar4 = (FName)(*pcVar1)();
    return FVar4;
  }
  uVar3 = 0;
  if ((int)in_R8D < local_18.ArrayNum) {
    uVar3 = ~in_R8D >> 0x1f;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar4 = (FName)(*pcVar1)();
    return FVar4;
  }
  puVar5 = (undefined8 *)
           (**(code **)(**(longlong **)(local_18.AllocatorInstance.Data + (longlong)(int)in_R8D * 8)
                       + 0x20))();
  *(undefined8 *)FVar4 = *puVar5;
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return FVar4;
}

// GetUseGlobalSettings @ 146b1afa0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FSourceControlModule::GetUseGlobalSettings(FSourceControlModule *this)

{
  return (this->SourceControlSettings).bUseGlobalSettings;
}

// HandleModularFeatureRegistered @ 146b1b090

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSourceControlModule::HandleModularFeatureRegistered
          (FSourceControlModule *this,FName *param_1,IModularFeature *param_2)

{
  FScriptContainerElement *_Src;
  ISourceControlProvider *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  IModularFeatures *pIVar6;
  FName *this_00;
  FString *pFVar7;
  uint uVar8;
  longlong lVar9;
  ForAnyElementType FStack_38;
  int iStack_30;
  int iStack_2c;
  TArray<ISourceControlProvider_*,TSizedDefaultAllocator<32>_> TStack_28;
  FString FStack_18;
  
  if (*param_1 != SourceControlFeatureName) {
    return;
  }
  pIVar6 = IModularFeatures::Get();
  iVar4 = (**(code **)((longlong)*pIVar6 + 0x18))(pIVar6,SourceControlFeatureName);
  if (0 < iVar4) {
    iStack_30 = (this->SourceControlSettings).Provider.Data.ArrayNum;
    lVar9 = (longlong)iStack_30;
    _Src = (this->SourceControlSettings).Provider.Data.AllocatorInstance.Data;
    FStack_38.Data = (FScriptContainerElement *)0x0;
    if (iStack_30 == 0) {
      iStack_2c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iStack_30,0,&FStack_38,iStack_30,&iStack_2c);
      memcpy(FStack_38.Data,_Src,lVar9 * 2);
    }
    pIVar6 = IModularFeatures::Get();
    IModularFeatures::GetModularFeatureImplementations<ISourceControlProvider>
              (pIVar6,&TStack_28,SourceControlFeatureName);
    uVar8 = 0;
    while( true ) {
      if (((int)uVar8 < 0) || (TStack_28.ArrayNum <= (int)uVar8)) goto LAB_146b1bab2;
      uVar5 = 0;
      if ((int)uVar8 < TStack_28.ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if (uVar5 == 0) {
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
      pIVar1 = *(ISourceControlProvider **)
                (TStack_28.AllocatorInstance.Data + (longlong)(int)uVar8 * 8);
      this_00 = (FName *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
      pFVar7 = ::FName::ToString(this_00,&FStack_18);
      iVar4 = (pFVar7->Data).ArrayNum;
      if (iStack_30 == iVar4) {
        if (iStack_30 < 2) {
          bVar3 = true;
        }
        else {
          iVar4 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)FStack_38.Data,
                             (wchar_t *)(pFVar7->Data).AllocatorInstance.Data);
          bVar3 = iVar4 == 0;
        }
      }
      else {
        bVar3 = iStack_30 + iVar4 == 1;
      }
      if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
      }
      if (bVar3) break;
      uVar8 = uVar8 + 1;
    }
    this->CurrentSourceControlProvider = pIVar1;
LAB_146b1bab2:
    if (this->CurrentSourceControlProvider == (ISourceControlProvider *)0x0) {
      this->CurrentSourceControlProvider =
           (ISourceControlProvider *)&this->DefaultSourceControlProvider;
    }
    if (TStack_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_28.AllocatorInstance.Data);
    }
    if (FStack_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_38.Data);
    }
  }
  if (this->CurrentSourceControlProvider == (ISourceControlProvider *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentSourceControlProvider",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SourceControlModule.cpp"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000146b1bb32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->CurrentSourceControlProvider + 0x10))
            (this->CurrentSourceControlProvider,0);
  return;
}

// HandleModularFeatureUnregistered @ 146b1b0b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSourceControlModule::HandleModularFeatureUnregistered
          (FSourceControlModule *this,FName *param_1,IModularFeature *param_2)

{
  FDefaultSourceControlProvider *pFVar1;
  ISourceControlProvider *pIVar2;
  
  if (*param_1 == SourceControlFeatureName) {
    pIVar2 = (ISourceControlProvider *)(param_2 + -8);
    if (param_2 == (IModularFeature *)0x0) {
      pIVar2 = (ISourceControlProvider *)0x0;
    }
    if (this->CurrentSourceControlProvider == pIVar2) {
      pIVar2 = this->CurrentSourceControlProvider;
      pFVar1 = &this->DefaultSourceControlProvider;
      if (pIVar2 == (ISourceControlProvider *)0x0) {
        this->CurrentSourceControlProvider = (ISourceControlProvider *)pFVar1;
      }
      else if (pIVar2 != (ISourceControlProvider *)pFVar1) {
        (**(code **)((longlong)*pIVar2 + 0x18))(pIVar2);
        this->CurrentSourceControlProvider = (ISourceControlProvider *)pFVar1;
        TMulticastDelegate<void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy>
        ::Broadcast(&this->OnSourceControlProviderChanged,pIVar2,(ISourceControlProvider *)pFVar1);
        return;
      }
      return;
    }
  }
  return;
}

// InitializeSourceControlProviders @ 146b1b920

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSourceControlModule::InitializeSourceControlProviders(FSourceControlModule *this)

{
  FScriptContainerElement *_Src;
  ISourceControlProvider *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  IModularFeatures *pIVar6;
  FName *this_00;
  FString *pFVar7;
  uint uVar8;
  longlong lVar9;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  TArray<ISourceControlProvider_*,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  pIVar6 = IModularFeatures::Get();
  iVar4 = (**(code **)((longlong)*pIVar6 + 0x18))(pIVar6,SourceControlFeatureName);
  if (0 < iVar4) {
    local_30 = (this->SourceControlSettings).Provider.Data.ArrayNum;
    lVar9 = (longlong)local_30;
    _Src = (this->SourceControlSettings).Provider.Data.AllocatorInstance.Data;
    local_38.Data = (FScriptContainerElement *)0x0;
    if (local_30 == 0) {
      local_2c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_30,0,&local_38,local_30,&local_2c);
      memcpy(local_38.Data,_Src,lVar9 * 2);
    }
    pIVar6 = IModularFeatures::Get();
    IModularFeatures::GetModularFeatureImplementations<ISourceControlProvider>
              (pIVar6,&local_28,SourceControlFeatureName);
    uVar8 = 0;
    while( true ) {
      if (((int)uVar8 < 0) || (local_28.ArrayNum <= (int)uVar8)) goto LAB_146b1bab2;
      uVar5 = 0;
      if ((int)uVar8 < local_28.ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if (uVar5 == 0) {
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
      pIVar1 = *(ISourceControlProvider **)
                (local_28.AllocatorInstance.Data + (longlong)(int)uVar8 * 8);
      this_00 = (FName *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
      pFVar7 = ::FName::ToString(this_00,&local_18);
      iVar4 = (pFVar7->Data).ArrayNum;
      if (local_30 == iVar4) {
        if (local_30 < 2) {
          bVar3 = true;
        }
        else {
          iVar4 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)local_38.Data,
                             (wchar_t *)(pFVar7->Data).AllocatorInstance.Data);
          bVar3 = iVar4 == 0;
        }
      }
      else {
        bVar3 = local_30 + iVar4 == 1;
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (bVar3) break;
      uVar8 = uVar8 + 1;
    }
    this->CurrentSourceControlProvider = pIVar1;
LAB_146b1bab2:
    if (this->CurrentSourceControlProvider == (ISourceControlProvider *)0x0) {
      this->CurrentSourceControlProvider =
           (ISourceControlProvider *)&this->DefaultSourceControlProvider;
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
    if (local_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data);
    }
  }
  if (this->CurrentSourceControlProvider == (ISourceControlProvider *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentSourceControlProvider",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SourceControlModule.cpp"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000146b1bb32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->CurrentSourceControlProvider + 0x10))
            (this->CurrentSourceControlProvider,0);
  return;
}

// IsEnabled @ 146b1bdc0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FSourceControlModule::IsEnabled(FSourceControlModule *this)

{
  char cVar1;
  
  if (this->TemporarilyDisabledCount == '\0') {
    cVar1 = (**(code **)((longlong)*this->CurrentSourceControlProvider + 0x38))();
    if (cVar1 != '\0') {
      return true;
    }
  }
  return false;
}

// OnCustomProjectsChanged @ 146b1f760

/* WARNING: Enum "Type": Some values do not have unique names */

TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __thiscall
FSourceControlModule::OnCustomProjectsChanged(FSourceControlModule *this)

{
  return &this->CustomProjectsChangedDelegate;
}

// OnSourceControlDialogClosed @ 146b205f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSourceControlModule::OnSourceControlDialogClosed
          (FSourceControlModule *this,TSharedRef<SWindow,1> *param_1)

{
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->SourceControlLoginWindowPtr != (TSharedPtr<SWindow,1> *)&local_28) {
    (this->SourceControlLoginWindowPtr).Object = (SWindow *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SourceControlLoginWindowPtr).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->SourceControlLoginPtr != (TSharedPtr<SSourceControlLogin,1> *)&local_18) {
    (this->SourceControlLoginPtr).Object = (SSourceControlLogin *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SourceControlLoginPtr).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  this->TemporarilyDisabledCount = this->TemporarilyDisabledCount + 0xff;
  (this->AssetDataCache).bIsSourceControlDialogShown = false;
  return;
}

// QueueStatusUpdate @ 146b221b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSourceControlModule::QueueStatusUpdate
          (FSourceControlModule *this,TArray<UPackage_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UPackage *pUVar3;
  char cVar4;
  FString *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  FString local_28;
  
  if ((this->TemporarilyDisabledCount == '\0') &&
     (cVar4 = (**(code **)((longlong)*this->CurrentSourceControlProvider + 0x38))(), cVar4 != '\0'))
  {
    pFVar6 = (param_1->AllocatorInstance).Data;
    iVar2 = param_1->ArrayNum;
    pFVar1 = pFVar6 + (longlong)iVar2 * 8;
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        `TCheckedPointerIterator<UPackage_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar6 == pFVar1) break;
      pUVar3 = *(UPackage **)pFVar6;
      if ((this->TemporarilyDisabledCount == '\0') &&
         (cVar4 = (**(code **)((longlong)*this->CurrentSourceControlProvider + 0x38))(),
         cVar4 != '\0')) {
        pFVar5 = USourceControlHelpers::PackageFilename(&local_28,pUVar3);
        QueueStatusUpdate(this,pFVar5);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      pFVar6 = pFVar6 + 8;
    }
  }
  return;
}

// QueueStatusUpdate @ 146b22280

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSourceControlModule::QueueStatusUpdate
          (FSourceControlModule *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  char cVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  if ((this->TemporarilyDisabledCount == '\0') &&
     (cVar2 = (**(code **)((longlong)*this->CurrentSourceControlProvider + 0x38))(), cVar2 != '\0'))
  {
    pFVar3 = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
    while( true ) {
      if (param_1->ArrayNum != iVar1) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar3 == pFVar4) break;
      QueueStatusUpdate(this,(FString *)pFVar3);
      pFVar3 = pFVar3 + 0x10;
    }
  }
  return;
}

// QueueStatusUpdate @ 146b22310

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSourceControlModule::QueueStatusUpdate(FSourceControlModule *this,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  FDateTime FVar4;
  longlong *plVar5;
  longlong *local_18;
  TReferenceControllerBase<1> *local_10;
  
  if ((this->TemporarilyDisabledCount == '\0') &&
     (cVar2 = (**(code **)((longlong)*this->CurrentSourceControlProvider + 0x38))(), cVar2 != '\0'))
  {
    (**(code **)((longlong)*this->CurrentSourceControlProvider + 0x90))
              (this->CurrentSourceControlProvider,&local_18,param_1,1);
    if (local_18 != (longlong *)0x0) {
      FVar4 = FDateTime::Now();
      if ((local_18 == (longlong *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      plVar5 = (longlong *)(**(code **)(*local_18 + 0x70))();
      if (SourceControlConstants::StateRefreshInterval.Ticks < *(longlong *)FVar4.Ticks - *plVar5) {
        TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
                  (&this->PendingStatusUpdateFiles,param_1);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  }
  return;
}

// QueueStatusUpdate @ 146b223f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSourceControlModule::QueueStatusUpdate(FSourceControlModule *this,UPackage *param_1)

{
  char cVar1;
  FString *pFVar2;
  FString local_18;
  
  if (this->TemporarilyDisabledCount == '\0') {
    cVar1 = (**(code **)((longlong)*this->CurrentSourceControlProvider + 0x38))();
    if (cVar1 != '\0') {
      pFVar2 = USourceControlHelpers::PackageFilename(&local_18,param_1);
      QueueStatusUpdate(this,pFVar2);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// RegisterCustomProjectsDelegate @ 146b22500

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSourceControlModule::RegisterCustomProjectsDelegate
          (FSourceControlModule *this,
          TDelegate<TArray<FSourceControlProjectInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
          *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->CustomProjectsDelegate,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->CustomProjectsChangedDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  return;
}

// RegisterFilesDeleted @ 146b22540

/* WARNING: Enum "Type": Some values do not have unique names */

FDelegateHandle __thiscall
FSourceControlModule::RegisterFilesDeleted
          (FSourceControlModule *this,
          TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          *param_1)

{
  TMulticastDelegateRegistration<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
  ::Add((TMulticastDelegateRegistration<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
         *)&this->OnFilesDeleted,param_1);
  return (FDelegateHandle)(ulong64)param_1;
}

// RegisterPreSubmitChangelistValidation @ 146b22570

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSourceControlModule::RegisterPreSubmitChangelistValidation
          (FSourceControlModule *this,
          TDelegate<void___cdecl(TSharedPtr<ISourceControlChangelist,1>,EDataValidationResult_&,TArray<FText,TSizedDefaultAllocator<32>_>_&,TArray<FText,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
          *param_1)

{
  TDelegate<void___cdecl(TSharedPtr<ISourceControlChangelist,1>,enum_EDataValidationResult_&,TArray<FText,TSizedDefaultAllocator<32>_>_&,TArray<FText,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnSourceControlPreSubmitChangelistValidation,param_1);
  return;
}

// RegisterPreSubmitFilesValidation @ 146b225a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSourceControlModule::RegisterPreSubmitFilesValidation
          (FSourceControlModule *this,
          TDelegate<void___cdecl(TArray<TSharedRef<ISourceControlState,1>,TSizedDefaultAllocator<32>_>_&,EDataValidationResult_&,TArray<FText,TSizedDefaultAllocator<32>_>_&,TArray<FText,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
          *param_1)

{
  TDelegate<void___cdecl(TArray<TSharedRef<ISourceControlState,1>,TSizedDefaultAllocator<32>_>_&,enum_EDataValidationResult_&,TArray<FText,TSizedDefaultAllocator<32>_>_&,TArray<FText,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>(&this->OnSourceControlPreSubmitFilesValidation,param_1);
  return;
}

// RegisterPreSubmitFinalize @ 146b225c0

/* WARNING: Enum "Type": Some values do not have unique names */

FDelegateHandle __thiscall
FSourceControlModule::RegisterPreSubmitFinalize
          (FSourceControlModule *this,
          TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,TArray<FText,TSizedDefaultAllocator<32>_>_&,TArray<FText,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
          *param_1)

{
  TMulticastDelegateRegistration<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,TArray<FText,TSizedDefaultAllocator<32>_>_&,TArray<FText,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
  ::Add((TMulticastDelegateRegistration<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,TArray<FText,TSizedDefaultAllocator<32>_>_&,TArray<FText,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
         *)&this->OnPresubmitFinalize,param_1);
  return (FDelegateHandle)(ulong64)param_1;
}

// RegisterProviderChanged @ 146b225f0

/* WARNING: Enum "Type": Some values do not have unique names */

FDelegateHandle __thiscall
FSourceControlModule::RegisterProviderChanged
          (FSourceControlModule *this,
          TDelegate<void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy>
          *param_1)

{
  TMulticastDelegateRegistration<void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy>
  ::Add((TMulticastDelegateRegistration<void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy>
         *)&this->OnSourceControlProviderChanged,param_1);
  return (FDelegateHandle)(ulong64)param_1;
}

// RegisterSourceControlProjectDirDelegate @ 146b22620

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSourceControlModule::RegisterSourceControlProjectDirDelegate
          (FSourceControlModule *this,
          TDelegate<FString___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  longlong *plVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if (param_1 != &this->SourceControlProjectDirDelegate) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->SourceControlProjectDirDelegate,
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
  return;
}

// SaveSettings @ 146b245e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSourceControlModule::SaveSettings(FSourceControlModule *this)

{
  FString *pFVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  
  pFVar1 = USourceControlHelpers::GetSettingsIni();
  pFVar2 = USourceControlHelpers::GetGlobalSettingsIni();
  pwVar4 = L"";
  if ((this->SourceControlSettings).Provider.Data.ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(this->SourceControlSettings).Provider.Data.AllocatorInstance.Data;
  }
  pwVar3 = L"";
  if (SourceControlSettingsConstants::SettingsSection.Data.ArrayNum != 0) {
    pwVar3 = (wchar_t *)SourceControlSettingsConstants::SettingsSection.Data.AllocatorInstance;
  }
  FConfigCacheIni::SetString(GConfig,pwVar3,L"Provider",pwVar5,pFVar1);
  if (SourceControlSettingsConstants::SettingsSection.Data.ArrayNum != 0) {
    pwVar4 = (wchar_t *)SourceControlSettingsConstants::SettingsSection.Data.AllocatorInstance;
  }
  FConfigCacheIni::SetBool
            (GConfig,pwVar4,L"UseGlobalSettings",(this->SourceControlSettings).bUseGlobalSettings,
             pFVar2);
  return;
}

// SetCurrentSourceControlProvider @ 146b24820

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSourceControlModule::SetCurrentSourceControlProvider
          (FSourceControlModule *this,ISourceControlProvider *param_1)

{
  ISourceControlProvider *pIVar1;
  FName *this_00;
  FString *pFVar2;
  FString local_18;
  
  if (param_1 != this->CurrentSourceControlProvider) {
    ClearCurrentSourceControlProvider(this);
    pIVar1 = this->CurrentSourceControlProvider;
    this->CurrentSourceControlProvider = param_1;
    (**(code **)((longlong)*param_1 + 0x10))(param_1,0);
    this_00 = (FName *)(**(code **)((longlong)*this->CurrentSourceControlProvider + 0x20))();
    pFVar2 = ::FName::ToString(this_00,&local_18);
    ::FString::operator=(&(this->SourceControlSettings).Provider,pFVar2);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    SaveSettings(this);
    if (pIVar1 != (ISourceControlProvider *)0x0) {
      TMulticastDelegate<void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy>
      ::Broadcast(&this->OnSourceControlProviderChanged,pIVar1,this->CurrentSourceControlProvider);
    }
  }
  return;
}

// SetCurrentSourceControlProvider @ 146b248c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSourceControlModule::SetCurrentSourceControlProvider(FSourceControlModule *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  IModularFeatures *this_00;
  TArray<ISourceControlProvider_*,TSizedDefaultAllocator<32>_> local_18;
  
  this_00 = IModularFeatures::Get();
  IModularFeatures::GetModularFeatureImplementations<ISourceControlProvider>
            (this_00,&local_18,SourceControlFeatureName);
  if (((param_1 < 0) || (local_18.ArrayNum <= param_1)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Providers.IsValidIndex(ProviderIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SourceControlModule.cpp"
                         ,0x1ba,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar3 = 0;
  if (param_1 < local_18.ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  SetCurrentSourceControlProvider
            (this,*(ISourceControlProvider **)
                   (local_18.AllocatorInstance.Data + (longlong)param_1 * 8));
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// SetProvider @ 146b25740

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSourceControlModule::SetProvider(FSourceControlModule *this,FName *param_1)

{
  ISourceControlProvider *pIVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  IModularFeatures *this_00;
  FName *pFVar5;
  uint uVar6;
  TArray<ISourceControlProvider_*,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  this_00 = IModularFeatures::Get();
  IModularFeatures::GetModularFeatureImplementations<ISourceControlProvider>
            (this_00,&local_28,SourceControlFeatureName);
  uVar6 = 0;
  do {
    if (((int)uVar6 < 0) || (local_28.ArrayNum <= (int)uVar6)) {
      ::FName::ToString(param_1,&local_18);
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogSourceControl);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
LAB_146b25844:
      if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      return;
    }
    uVar4 = 0;
    if ((int)uVar6 < local_28.ArrayNum) {
      uVar4 = ~uVar6 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pIVar1 = *(ISourceControlProvider **)
              (local_28.AllocatorInstance.Data + (longlong)(int)uVar6 * 8);
    pFVar5 = (FName *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
    if (*param_1 == *pFVar5) {
      SetCurrentSourceControlProvider(this,pIVar1);
      goto LAB_146b25844;
    }
    uVar6 = uVar6 + 1;
  } while( true );
}

// SetUseGlobalSettings @ 146b25890

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSourceControlModule::SetUseGlobalSettings(FSourceControlModule *this,bool param_1)

{
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  ulonglong local_28;
  FDestructionSentinel local_20;
  
  (this->SourceControlSettings).bUseGlobalSettings = param_1;
  local_28 = 0;
  local_38 = (undefined1  [8])0x0;
  local_30.Data = (FScriptContainerElement *)0x0;
  ShowLoginDialog(this,(TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)local_38,Modeless
                  ,PreserveProvider);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
             (FWriteAccessScope *)&local_20);
  if (((int)local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    local_28 = local_28 & 0xffffffff00000000;
  }
  if (local_20.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_38);
  return;
}

// ShowLoginDialog @ 146b259f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSourceControlModule::ShowLoginDialog
          (FSourceControlModule *this,
          TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *param_1,Type param_2,
          Type param_3)

{
  FString *pFVar1;
  TSharedPtr<SWindow,1> *pTVar2;
  byte *pbVar3;
  FScriptContainerElement *pFVar4;
  SWindow *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  SWindow *pSVar7;
  code *pcVar8;
  TConsoleVariableData<bool> *pTVar9;
  SSourceControlLogin *pSVar10;
  FSharedReferencer<1> FVar11;
  bool bVar12;
  char cVar13;
  byte bVar14;
  FName *this_00;
  FString *pFVar15;
  longlong lVar16;
  FArguments *pFVar17;
  FText *pFVar18;
  TSharedRef<SWindow,1> *pTVar19;
  undefined8 *puVar20;
  ulong64 uVar21;
  FArguments *pFVar22;
  TSharedRef<FGlobalTabmanager,1> *pTVar23;
  FSlateApplication *pFVar24;
  TSharedRef<SWindow,1> *pTVar25;
  Type TVar26;
  T0RequiredArgs local_res8 [8];
  TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *local_res10;
  T0RequiredArgs local_res18 [8];
  FLLMScope local_7b8;
  FLLMScope local_7b4;
  undefined1 local_7b0 [8];
  FDelegateAllocation local_7a8;
  undefined1 local_798 [8];
  ForAnyElementType local_790;
  ulonglong local_788;
  TSlateDecl<SSourceControlLogin,RequiredArgs::T0RequiredArgs> local_780;
  SWindow *local_768;
  FSharedReferencer<1> local_760;
  TSharedPtr<SWindow,1> local_758;
  FName local_748;
  FName local_740;
  FMemScope local_738;
  FName local_730;
  FMemScope local_728;
  longlong local_720;
  FSharedReferencer<1> FStack_718;
  undefined8 local_710;
  FSharedReferencer<1> FStack_708;
  TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> local_700;
  FText local_6e8;
  bool local_6d8;
  TDelegateBase<FNotThreadSafeDelegateMode> local_6d0;
  TSharedRef<SWidget,1> local_6b8;
  FDestructionSentinel local_6a8;
  FDestructionSentinel local_690;
  FDestructionSentinel local_678;
  FDelegateAllocation *local_660;
  undefined1 local_658 [8];
  TReferenceControllerBase<1> *local_650;
  FString local_648;
  TSharedRef<SWindow,1> local_638;
  FText local_628;
  SWindow *local_618;
  TReferenceControllerBase<1> *pTStack_610;
  SSourceControlLogin *local_608;
  TReferenceControllerBase<1> *pTStack_600;
  TSharedPtr<SWidget_const_,1> local_5f8;
  TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs> local_5e8;
  TSharedRef<SWindow,1> local_5d0;
  TSharedPtr<SWidget_const_,1> local_5b8;
  TSharedRef<SWindow,1> local_5a8;
  TSharedRef<SWindow,1> local_598;
  TSharedRef<SWindow,1> local_588;
  TSharedRef<SWindow,1> local_578;
  TSharedRef<SWindow,1> local_568;
  FArguments local_558;
  FArguments local_260;
  
  local_res10 = param_1;
  FSourceControlAssetDataCache::ClearPendingTasks(&this->AssetDataCache);
  (this->AssetDataCache).bIsSourceControlDialogShown = true;
  this_00 = (FName *)(**(code **)((longlong)*this->CurrentSourceControlProvider + 0x20))();
  pFVar15 = ::FName::ToString(this_00,&local_648);
  pFVar1 = &this->ActiveProviderName;
  if (pFVar1 != pFVar15) {
    pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar15->Data).AllocatorInstance.Data;
    (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ActiveProviderName).Data.ArrayNum = (pFVar15->Data).ArrayNum;
    (this->ActiveProviderName).Data.ArrayMax = (pFVar15->Data).ArrayMax;
    (pFVar15->Data).ArrayNum = 0;
    (pFVar15->Data).ArrayMax = 0;
  }
  if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_648.Data.AllocatorInstance.Data);
  }
  pTVar9 = SourceControlCVars::CVarSourceControlEnableLoginDialogModal.Ref;
  bVar12 = IsInParallelGameThread();
  if (bVar12) {
LAB_146b25aae:
    lVar16 = 0;
  }
  else {
    bVar12 = IsInGameThread();
    lVar16 = 1;
    if (bVar12) goto LAB_146b25aae;
  }
  TVar26 = Modal;
  if (pTVar9->ShadowedValue[lVar16] == false) {
    TVar26 = param_2;
  }
  if ((TVar26 == Modal) && ((this->SourceControlLoginPtr).Object != (SSourceControlLogin *)0x0)) {
    pTVar2 = &this->SourceControlLoginWindowPtr;
    if (((this->SourceControlLoginWindowPtr).Object == (SWindow *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_788 = 0;
    local_798 = (undefined1  [8])0x0;
    local_790.Data = (FScriptContainerElement *)0x0;
    SWindow::SetOnWindowClosed
              (pTVar2->Object,
               (TDelegate<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy> *)
               local_798);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_798,
               (FWriteAccessScope *)&local_6a8);
    if (((int)local_788 != 0) && (local_790.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_790.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_790,0,0,0x10);
      local_788 = local_788 & 0xffffffff00000000;
    }
    if (local_6a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6a8.Accessor,&local_6a8);
    }
    if (local_790.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_790.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_798);
    if ((pTVar2->Object == (SWindow *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    SWindow::RequestDestroyWindow(pTVar2->Object);
    local_720 = 0;
    FStack_718.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar2 != (TSharedPtr<SWindow,1> *)&local_720) {
      pTVar2->Object = (SWindow *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->SourceControlLoginWindowPtr).SharedReferenceCount,&FStack_718);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_718.ReferenceController);
    local_710 = 0;
    FStack_708.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->SourceControlLoginPtr != (TSharedPtr<SSourceControlLogin,1> *)&local_710) {
      (this->SourceControlLoginPtr).Object = (SSourceControlLogin *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->SourceControlLoginPtr).SharedReferenceCount,&FStack_708);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_708.ReferenceController);
  }
  pSVar5 = (this->SourceControlLoginWindowPtr).Object;
  pTVar2 = &this->SourceControlLoginWindowPtr;
  if (pSVar5 != (SWindow *)0x0) {
    SWindow::BringToFront(pSVar5,false);
    return;
  }
  if (param_3 == ResetProviderToNone) {
    ::FName::FName(&local_748,"None");
    SetProvider(this,&local_748);
  }
  this->TemporarilyDisabledCount = this->TemporarilyDisabledCount + '\x01';
  pFVar17 = SWindow::FArguments::FArguments(&local_558);
  pFVar18 = FText::AsLocalizable_Advanced_LocText
                      (&local_628,L"SourceControl",L"SourceControlLoginTitle",
                       L"Revision Control Login");
  FText::FText(&local_6e8,pFVar18);
  local_6d8 = true;
  local_6d0._16_8_ = 0;
  local_6d0._0_8_ = 0;
  local_6d0._8_8_ = 0;
  FText::operator=(&(pFVar17->_Title).Value,&local_6e8);
  (pFVar17->_Title).bIsSet = local_6d8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar17->_Title).Getter,&local_6d0);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_6d0);
  if (local_6e8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_6e8.TextData.Reference + 0x10))();
  }
  pFVar17->_HasCloseButton = false;
  pFVar17->_SupportsMaximize = false;
  pFVar17->_SupportsMinimize = false;
  pFVar17->_SizingRule = Autosized;
  FLLMScope::FLLMScope(&local_7b8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_740 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_738,&local_740,true);
  TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs>::TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs>
            (&local_5e8,"SWindow",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SourceControlModule.cpp"
             ,0xad,local_res18);
  FMemScope::~FMemScope(&local_738);
  FLLMScope::~FLLMScope(&local_7b8);
  pTVar19 = TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_5e8,&local_638,pFVar17);
  local_760.ReferenceController = (pTVar19->SharedReferenceCount).ReferenceController;
  local_768 = pTVar19->Object;
  if (local_760.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_760.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_760.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar2 != (TSharedPtr<SWindow,1> *)&local_768) {
    pTVar2->Object = local_768;
    local_768 = (SWindow *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SourceControlLoginWindowPtr).SharedReferenceCount,&local_760);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_760.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_638.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5e8._Widget.SharedReferenceCount.ReferenceController);
  if (local_628.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_628.TextData.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_558._CloseButtonToolTipText.Getter)
  ;
  if (local_558._CloseButtonToolTipText.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_558._CloseButtonToolTipText.Value.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_558._Content.Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_558._Title.Getter);
  if (local_558._Title.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_558._Title.Value.TextData.Reference + 0x10))();
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_558);
  if ((pTVar2->Object == (SWindow *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pSVar5 = pTVar2->Object;
  local_7b0 = (undefined1  [8])0x0;
  local_7a8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_7a8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_7b0,
             (FWriteAccessScope *)&local_678);
  local_660 = &local_7a8;
  puVar20 = UE::Core::Private::DelegateAllocate(0x28,&local_7a8);
  if (puVar20 != (undefined8 *)0x0) {
    *puVar20 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VSWindow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar21 = FDelegateHandle::GenerateNewID();
    puVar20[2] = uVar21;
    *puVar20 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFSourceControlModule____A6AXAEBV__TSharedRef_VSWindow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar20[4] = OnSourceControlDialogClosed;
    puVar20[3] = this;
  }
  if (local_678.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_678.Accessor,&local_678);
  }
  SWindow::SetOnWindowClosed
            (pSVar5,(TDelegate<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy>
                     *)local_7b0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_7b0,
             (FWriteAccessScope *)&local_690);
  if ((local_7a8.DelegateSize != 0) &&
     (local_7a8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_7a8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_7a8,0,0,0x10);
    local_7a8.DelegateSize = 0;
  }
  if (local_690.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_690.Accessor,&local_690);
  }
  if (local_7a8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_7a8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_7b0);
  if ((pTVar2->Object == (SWindow *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pSVar5 = pTVar2->Object;
  pFVar22 = SSourceControlLogin::FArguments::FArguments(&local_260);
  pTVar6 = (this->SourceControlLoginWindowPtr).SharedReferenceCount.ReferenceController;
  pSVar7 = pTVar2->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_618 = (pFVar22->_ParentWindow).Object;
  pTStack_610 = (pFVar22->_ParentWindow).SharedReferenceCount.ReferenceController;
  (pFVar22->_ParentWindow).Object = pSVar7;
  (pFVar22->_ParentWindow).SharedReferenceCount.ReferenceController = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_610);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  local_700._0_8_ = 0;
  local_700._8_8_ = 0;
  local_700._16_4_ = 0;
  TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_700,local_res10);
  TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&pFVar22->_OnSourceControlLoginClosed,&local_700);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_700);
  FLLMScope::FLLMScope(&local_7b4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_730 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_728,&local_730,true);
  TSlateDecl<SSourceControlLogin,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSourceControlLogin,RequiredArgs::T0RequiredArgs>
            (&local_780,"SSourceControlLogin",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SourceControlModule.cpp"
             ,0xb9,local_res8);
  FMemScope::~FMemScope(&local_728);
  FLLMScope::~FLLMScope(&local_7b4);
  if (local_780._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_780._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_780._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_608 = (this->SourceControlLoginPtr).Object;
  pTStack_600 = (this->SourceControlLoginPtr).SharedReferenceCount.ReferenceController;
  (this->SourceControlLoginPtr).Object = local_780._Widget.Object;
  (this->SourceControlLoginPtr).SharedReferenceCount.ReferenceController =
       local_780._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_600);
  pSVar10 = local_780._Widget.Object;
  if ((local_780._Widget.Object == (SSourceControlLogin *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)local_780._Widget.Object,(FSlateBaseNamedArgs *)pFVar22);
  SSourceControlLogin::Construct(local_780._Widget.Object,pFVar22);
  if ((local_780._Widget.Object == (SSourceControlLogin *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (((local_780._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar13 = (**(code **)((local_780._Widget.Object)->_padding_ + 0x228))(local_780._Widget.Object);
    bVar14 = 0;
    if (cVar13 != '\0') goto LAB_146b26166;
  }
  else {
LAB_146b26166:
    bVar14 = 0x20;
  }
  *(byte *)&(local_780._Widget.Object)->_padding_ =
       (byte)(local_780._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_780._Widget.Object)->_padding_ =
       (byte)(local_780._Widget.Object)->_padding_ | bVar14;
  if ((local_780._Widget.Object == (SSourceControlLogin *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pbVar3 = (byte *)((longlong)&(local_780._Widget.Object)->_padding_ + 1);
  *pbVar3 = *pbVar3 | 4;
  if ((local_780._Widget.Object == (SSourceControlLogin *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FVar11.ReferenceController = local_780._Widget.SharedReferenceCount.ReferenceController;
  local_780._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_780._Widget.Object = (SSourceControlLogin *)0x0;
  if ((pSVar10 == (SSourceControlLogin *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_6b8.Object = (SWidget *)pSVar10;
  local_6b8.SharedReferenceCount.ReferenceController = FVar11.ReferenceController;
  if (FVar11.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar11.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar11.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SWindow::SetContent(pSVar5,&local_6b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar11.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_260._OnSourceControlLoginClosed);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_260._ParentWindow.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_260);
  pTVar23 = FGlobalTabmanager::Get();
  FGlobalTabmanager::GetRootWindow(pTVar23->Object,&local_758);
  if (local_758.Object == (SWindow *)0x0) {
    pFVar24 = FSlateApplication::Get();
    if (TVar26 == Modal) {
      local_5b8.Object = (SWidget *)local_758.Object;
      local_5b8.SharedReferenceCount.ReferenceController =
           local_758.SharedReferenceCount.ReferenceController;
      if (local_758.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_758.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_758.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar19 = TSharedPtr<SWindow,1>::ToSharedRef(&this->SourceControlLoginWindowPtr,&local_568);
      FSlateApplication::AddModalWindow(pFVar24,pTVar19,&local_5b8,false);
      goto LAB_146b263ad;
    }
    pcVar8 = *(code **)(*(longlong *)pFVar24 + 0x10);
    pTVar19 = TSharedPtr<SWindow,1>::ToSharedRef(&this->SourceControlLoginWindowPtr,&local_5a8);
    (*pcVar8)(pFVar24,local_658,pTVar19,1);
    local_5d0.SharedReferenceCount.ReferenceController = local_650;
  }
  else {
    pFVar24 = FSlateApplication::Get();
    if (TVar26 == Modal) {
      local_5f8.Object = (SWidget *)local_758.Object;
      local_5f8.SharedReferenceCount.ReferenceController =
           local_758.SharedReferenceCount.ReferenceController;
      if (local_758.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_758.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_758.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar19 = TSharedPtr<SWindow,1>::ToSharedRef(&this->SourceControlLoginWindowPtr,&local_598);
      FSlateApplication::AddModalWindow(pFVar24,pTVar19,&local_5f8,false);
      goto LAB_146b263ad;
    }
    pTVar19 = TSharedPtr<SWindow,1>::ToSharedRef(&local_758,&local_588);
    pTVar25 = TSharedPtr<SWindow,1>::ToSharedRef(&this->SourceControlLoginWindowPtr,&local_578);
    FSlateApplication::AddWindowAsNativeChild(pFVar24,&local_5d0,pTVar25,pTVar19,true);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5d0.SharedReferenceCount.ReferenceController);
LAB_146b263ad:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_758.SharedReferenceCount.ReferenceController);
  return;
}

// ShutdownModule @ 146b26420

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSourceControlModule::ShutdownModule(FSourceControlModule *this)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  ISourceControlModule *pIVar4;
  FModuleManager *pFVar5;
  FName *pFVar6;
  IModuleInterface *pIVar7;
  IModularFeatures *pIVar8;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *pTVar9;
  TSharedPtr<SWindow,1> *pTVar10;
  FName local_res8;
  FName local_res10;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  pIVar4 = ISourceControlModule::Get();
  (**(code **)((longlong)*pIVar4 + 0xc0))
            (pIVar4,(this->AssetDataCache).ProviderChangedDelegateHandle.ID);
  FSourceControlAssetDataCache::ClearPendingTasks(&this->AssetDataCache);
  (**(code **)((longlong)*this->CurrentSourceControlProvider + 0x18))();
  pFVar5 = FModuleManager::Get();
  pFVar6 = ::FName::FName(&local_res8,"MessageLog");
  bVar3 = FModuleManager::IsModuleLoaded(pFVar5,*pFVar6);
  if (bVar3) {
    pFVar6 = ::FName::FName(&local_res10,"MessageLog");
    FVar1 = *pFVar6;
    pFVar5 = FModuleManager::Get();
    pIVar7 = FModuleManager::LoadModuleChecked(pFVar5,FVar1);
    pcVar2 = *(code **)((longlong)*pIVar7 + 0x48);
    ::FName::FName(&local_res8,"SourceControl");
    (*pcVar2)(pIVar7,&local_res8);
  }
  pIVar8 = IModularFeatures::Get();
  pTVar10 = &this->SourceControlLoginWindowPtr;
  if (this == (FSourceControlModule *)0xffffffffffffffd8) {
    pTVar10 = (TSharedPtr<SWindow,1> *)0x0;
  }
  (**(code **)((longlong)*pIVar8 + 0x30))(pIVar8,SourceControlFeatureName,pTVar10);
  pIVar8 = IModularFeatures::Get();
  pTVar9 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
           (**(code **)((longlong)*pIVar8 + 0x38))(pIVar8);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(pTVar9,this);
  pIVar8 = IModularFeatures::Get();
  pTVar9 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
           (**(code **)((longlong)*pIVar8 + 0x40))(pIVar8);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(pTVar9,this);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->SourceControlFileStatusMonitor !=
      (TSharedPtr<FSourceControlFileStatusMonitor,1> *)&local_18) {
    (this->SourceControlFileStatusMonitor).Object = (FSourceControlFileStatusMonitor *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SourceControlFileStatusMonitor).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// StartupModule @ 146b270c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSourceControlModule::StartupModule(FSourceControlModule *this)

{
  int *piVar1;
  int iVar2;
  FName FVar3;
  code *pcVar4;
  longlong *plVar5;
  bool bVar6;
  IModularFeatures *pIVar7;
  TMulticastDelegateRegistration<void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
  *pTVar8;
  FName *pFVar9;
  FModuleManager *this_00;
  IModuleInterface *pIVar10;
  FText *pFVar11;
  ISourceControlModule *pIVar12;
  undefined8 *puVar13;
  ulong64 uVar14;
  ulong64 *puVar15;
  TReferenceControllerBase<1> *pTVar16;
  TReferenceControllerBase<1> *pTVar17;
  FSourceControlFileStatusMonitor *pFVar18;
  FName local_res8 [3];
  FName local_res20;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined2 local_c0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b8;
  FDelegateAllocation local_b0;
  FSourceControlFileStatusMonitor *local_a0;
  FSharedReferencer<1> local_98;
  FDestructionSentinel local_90;
  FDestructionSentinel local_78;
  FDelegateAllocation *local_60;
  undefined1 local_58 [8];
  FText local_50 [2];
  
  FSourceControlSettings::LoadSettings(&this->SourceControlSettings);
  pIVar7 = IModularFeatures::Get();
  pTVar8 = (TMulticastDelegateRegistration<void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
            *)(**(code **)((longlong)*pIVar7 + 0x38))(pIVar7);
  TMulticastDelegateRegistration<void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
  ::AddRaw<FSourceControlModule>(pTVar8,(FSourceControlModule *)(local_res8 + 1),(pmf_7be9fdc7)this)
  ;
  pIVar7 = IModularFeatures::Get();
  pTVar8 = (TMulticastDelegateRegistration<void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
            *)(**(code **)((longlong)*pIVar7 + 0x40))(pIVar7);
  TMulticastDelegateRegistration<void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
  ::AddRaw<FSourceControlModule>(pTVar8,(FSourceControlModule *)(local_res8 + 2),(pmf_7be9fdc7)this)
  ;
  pIVar7 = IModularFeatures::Get();
  pTVar17 = (TReferenceControllerBase<1> *)0x0;
  pTVar16 = (TReferenceControllerBase<1> *)&this->SourceControlLoginWindowPtr;
  if (this == (FSourceControlModule *)0xffffffffffffffd8) {
    pTVar16 = pTVar17;
  }
  (**(code **)((longlong)*pIVar7 + 0x28))(pIVar7,SourceControlFeatureName,pTVar16);
  pFVar9 = ::FName::FName(&local_res20,"MessageLog");
  FVar3 = *pFVar9;
  this_00 = FModuleManager::Get();
  pIVar10 = FModuleManager::LoadModuleChecked(this_00,FVar3);
  local_c8 = 0x10001;
  local_c4 = 0x14;
  local_c0 = 1;
  pcVar4 = *(code **)((longlong)*pIVar10 + 0x40);
  pFVar11 = FText::AsLocalizable_Advanced_LocText
                      (local_50,L"SourceControl",L"SourceControlLogLabel",L"Revision Control");
  ::FName::FName(local_res8,"SourceControl");
  (*pcVar4)(pIVar10,local_res8,pFVar11,&local_c8);
  if (local_50[0].TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_50[0].TextData.Reference + 0x10))();
  }
  pIVar12 = ISourceControlModule::Get();
  local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_b0.DelegateSize = 0;
  pcVar4 = *(code **)((longlong)*pIVar12 + 0xb8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b8,(FWriteAccessScope *)&local_78);
  local_60 = &local_b0;
  puVar13 = UE::Core::Private::DelegateAllocate(0x20,&local_b0);
  if (puVar13 != (undefined8 *)0x0) {
    *puVar13 = &
               ___7__TCommonDelegateInstanceState___A6AXAEAVISourceControlProvider__0_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar14 = FDelegateHandle::GenerateNewID();
    puVar13[2] = uVar14;
    *puVar13 = &TBaseFunctorDelegateInstance<void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy,`FSourceControlAssetDataCache::Startup'::`2'::<lambda_1>_>
                ::_vftable_;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  puVar15 = (ulong64 *)(*pcVar4)(pIVar12,local_58);
  (this->AssetDataCache).ProviderChangedDelegateHandle.ID = *puVar15;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b8,(FWriteAccessScope *)&local_90);
  pFVar18 = (FSourceControlFileStatusMonitor *)&DAT_00000010;
  if ((local_b0.DelegateSize != 0) &&
     (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_b0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_b0,0,0,0x10);
    local_b0.DelegateSize = 0;
  }
  if (local_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
  }
  if (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_b0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
  (this->AssetDataCache).bIsSourceControlDialogShown = false;
  (this->AssetDataCache).bIsUpdateHistoryInFlight = false;
  pTVar16 = ::operator_new(0x110);
  if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
    pTVar16->SharedReferenceCount = (atomic<int>)0x1;
    pTVar16->WeakReferenceCount = (atomic<int>)0x1;
    pTVar16->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFSourceControlFileStatusMonitor___00_SharedPointerInternals__6B_
    ;
    FSourceControlFileStatusMonitor::FSourceControlFileStatusMonitor
              ((FSourceControlFileStatusMonitor *)(pTVar16 + 1));
    pFVar18 = (FSourceControlFileStatusMonitor *)(pTVar16 + 1);
    pTVar17 = pTVar16;
    if (pFVar18 == (FSourceControlFileStatusMonitor *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_146b273be;
    }
  }
  if (((pFVar18->_padding_ == 0) || (pFVar18->_padding_ == 0)) ||
     (*(int *)(pFVar18->_padding_ + 8) < 1)) {
    if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar18->_padding_ = (longlong)pFVar18;
    if (pTVar17 != (TReferenceControllerBase<1> *)pFVar18->_padding_) {
      if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar17->WeakReferenceCount = (atomic<int>)((int)pTVar17->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)pFVar18->_padding_;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      pFVar18->_padding_ = (longlong)pTVar17;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  }
LAB_146b273be:
  if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_a0 = pFVar18;
  local_98.ReferenceController = pTVar17;
  if (&this->SourceControlFileStatusMonitor !=
      (TSharedPtr<FSourceControlFileStatusMonitor,1> *)&local_a0) {
    (this->SourceControlFileStatusMonitor).Object = pFVar18;
    local_a0 = (FSourceControlFileStatusMonitor *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SourceControlFileStatusMonitor).SharedReferenceCount,&local_98);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  return;
}

// Tick @ 146b29160

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSourceControlModule::Tick(FSourceControlModule *this)

{
  int iVar1;
  ISourceControlProvider *pIVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FUpdateStatus *pFVar7;
  FUpdateStatus *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  TRawPtrProxy<FUpdateStatus> local_res10;
  ForAnyElementType local_98;
  undefined8 local_90;
  FUpdateStatus *local_88;
  TReferenceControllerBase<1> *pTStack_80;
  TSharedRef<FUpdateStatus,1> local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  ForAnyElementType local_60;
  ulonglong local_58;
  FDestructionSentinel local_50;
  
  pIVar2 = this->CurrentSourceControlProvider;
  if (pIVar2 != (ISourceControlProvider *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x180))(pIVar2);
    FSourceControlAssetDataCache::GetFileHistory(&this->AssetDataCache);
    FSourceControlAssetDataCache::LaunchFetchAssetDataTasks(&this->AssetDataCache);
    FSourceControlAssetDataCache::UpdatePendingAssetData(&this->AssetDataCache);
    if ((this->TemporarilyDisabledCount == '\0') && (0 < (this->PendingStatusUpdateFiles).ArrayNum))
    {
      if (((this->SourceControlFileStatusMonitor).Object == (FSourceControlFileStatusMonitor *)0x0)
         && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x44d,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_90._0_4_ = 0;
      uVar6 = ((this->SourceControlFileStatusMonitor).Object)->MaxFileNumPerRequestPolicy;
      local_98.Data = (FScriptContainerElement *)0x0;
      local_90 = 0;
      if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
      }
      if (0 < (int)uVar6) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,uVar6,&local_98,0,(int *)((longlong)&local_90 + 4));
      }
      iVar1 = (this->PendingStatusUpdateFiles).ArrayNum;
      pFVar9 = (this->PendingStatusUpdateFiles).AllocatorInstance.Data;
      pFVar10 = pFVar9 + (longlong)iVar1 * 0x10;
      uVar5 = (uint)local_90;
      while( true ) {
        if ((this->PendingStatusUpdateFiles).ArrayNum != iVar1) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
          uVar5 = (uint)local_90;
        }
        if ((pFVar9 == pFVar10) || ((int)uVar6 <= (int)uVar5)) break;
        if ((local_98.Data <= pFVar9) &&
           (pFVar9 < local_98.Data + (longlong)(int)local_90._4_4_ * 0x10)) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar5 = (uint)local_90;
        }
        if (uVar5 == local_90._4_4_) {
          uVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_98,(int *)((longlong)&local_90 + 4));
        }
        local_90 = CONCAT44(local_90._4_4_,uVar5 + 1);
        ::FString::FString((FString *)(local_98.Data + (longlong)(int)uVar5 * 0x10),
                           (FString *)pFVar9);
        pFVar9 = pFVar9 + 0x10;
        uVar5 = (uint)local_90;
      }
      if (0 < (int)uVar5) {
        pFVar8 = (FUpdateStatus *)0x0;
        uVar6 = 0;
        if ((int)uVar5 <= (this->PendingStatusUpdateFiles).ArrayNum) {
          uVar6 = ~uVar5 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        TArray<FString,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (&this->PendingStatusUpdateFiles,0,uVar5);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&(this->PendingStatusUpdateFiles).AllocatorInstance,
                   (this->PendingStatusUpdateFiles).ArrayNum,
                   &(this->PendingStatusUpdateFiles).ArrayMax);
        local_58 = 0;
        local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
        local_60.Data = (FScriptContainerElement *)0x0;
        pcVar3 = *(code **)((longlong)*pIVar2 + 0xe8);
        pFVar7 = ::operator_new(0x60);
        if (pFVar7 != (FUpdateStatus *)0x0) {
          pFVar7->_padding_ = 0;
          pFVar7->_padding_ = (longlong)&___7FUpdateStatus__6B_;
          pFVar7->_padding_ = 0;
          pFVar7->_padding_ = 0;
          pFVar7->_padding_ = 0;
          pFVar7->_padding_ = 0;
          pFVar7->_padding_ = 0;
          pFVar7->_padding_ = 0;
          pFVar7->_padding_ = 0;
          *(undefined4 *)&pFVar7->_padding_ = 0;
          *(undefined4 *)&pFVar7->_padding_ = 0;
          pFVar7->bUpdateHistory = false;
          pFVar7->bGetOpenedOnly = false;
          pFVar7->bUpdateModifiedState = false;
          pFVar7->bUpdateModifiedStateToLocalRevision = false;
          pFVar7->bCheckingAllFiles = false;
          pFVar7->bForceQuiet = false;
          pFVar7->bForceUpdate = false;
          pFVar7->bSetRequireDirPathEndWithSeparator = false;
          pFVar8 = pFVar7;
        }
        local_res10.Object = pFVar8;
        TSharedRef<FUpdateStatus,1>::TSharedRef<FUpdateStatus,1><FUpdateStatus>
                  (&local_78,&local_res10);
        local_88 = local_78.Object;
        pTStack_80 = local_78.SharedReferenceCount.ReferenceController;
        if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        (*pcVar3)(pIVar2,&local_88,&local_98,1,&local_68);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_80);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_78.SharedReferenceCount.ReferenceController);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_68,(FWriteAccessScope *)&local_50);
        if (((int)local_58 != 0) && (local_60.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)local_60.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_60,0,0,0x10);
          local_58 = local_58 & 0xffffffff00000000;
        }
        if (local_50.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
        }
        if (local_60.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
        uVar5 = (uint)local_90;
      }
      DestructItems<FString,int>((FString *)local_98.Data,uVar5);
      if (local_98.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data);
      }
    }
  }
  return;
}

// UnregisterCustomProjectsDelegate @ 146b29a40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSourceControlModule::UnregisterCustomProjectsDelegate(FSourceControlModule *this)

{
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  ulonglong local_28;
  FDestructionSentinel local_20;
  
  local_28 = 0;
  local_38 = (undefined1  [8])0x0;
  local_30.Data = (FScriptContainerElement *)0x0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->CustomProjectsDelegate,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
             (FWriteAccessScope *)&local_20);
  if (((int)local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    local_28 = local_28 & 0xffffffff00000000;
  }
  if (local_20.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_38);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->CustomProjectsChangedDelegate);
  return;
}

// UnregisterFilesDeleted @ 146b29b00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSourceControlModule::UnregisterFilesDeleted(FSourceControlModule *this,FDelegateHandle param_1)

{
  if (param_1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnFilesDeleted,param_1);
    return;
  }
  return;
}

// UnregisterPreSubmitChangelistValidation @ 146b29b20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSourceControlModule::UnregisterPreSubmitChangelistValidation(FSourceControlModule *this)

{
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  ulonglong local_28;
  FDestructionSentinel local_20;
  
  local_28 = 0;
  local_38 = (undefined1  [8])0x0;
  local_30.Data = (FScriptContainerElement *)0x0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->OnSourceControlPreSubmitChangelistValidation,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
             (FWriteAccessScope *)&local_20);
  if (((int)local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    local_28 = local_28 & 0xffffffff00000000;
  }
  if (local_20.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_38);
  return;
}

// UnregisterPreSubmitFilesValidation @ 146b29be0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSourceControlModule::UnregisterPreSubmitFilesValidation(FSourceControlModule *this)

{
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  ulonglong local_28;
  FDestructionSentinel local_20;
  
  local_28 = 0;
  local_38 = (undefined1  [8])0x0;
  local_30.Data = (FScriptContainerElement *)0x0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->OnSourceControlPreSubmitFilesValidation,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
             (FWriteAccessScope *)&local_20);
  if (((int)local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    local_28 = local_28 & 0xffffffff00000000;
  }
  if (local_20.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_38);
  return;
}

// UnregisterPreSubmitFinalize @ 146b29c90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSourceControlModule::UnregisterPreSubmitFinalize
          (FSourceControlModule *this,FDelegateHandle param_1)

{
  if (param_1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnPresubmitFinalize,
               param_1);
    return;
  }
  return;
}

// UnregisterProviderChanged @ 146b29cb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSourceControlModule::UnregisterProviderChanged(FSourceControlModule *this,FDelegateHandle param_1)

{
  if (param_1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnSourceControlProviderChanged,param_1);
    return;
  }
  return;
}

// UnregisterSourceControlProjectDirDelegate @ 146b29cd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSourceControlModule::UnregisterSourceControlProjectDirDelegate(FSourceControlModule *this)

{
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  ulonglong local_28;
  FDestructionSentinel local_20;
  
  local_28 = 0;
  local_38 = (undefined1  [8])0x0;
  local_30.Data = (FScriptContainerElement *)0x0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->SourceControlProjectDirDelegate,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
             (FWriteAccessScope *)&local_20);
  if (((int)local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    local_28 = local_28 & 0xffffffff00000000;
  }
  if (local_20.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_38);
  return;
}

// UsesCustomProjectDir @ 146b2a010

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FSourceControlModule::UsesCustomProjectDir(FSourceControlModule *this)

{
  char cVar1;
  longlong *plVar2;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->CustomProjectsDelegate
             ,&local_38);
  if ((*(int *)&(this->CustomProjectsDelegate).field_0x10 == 0) ||
     (plVar2 = *(longlong **)&(this->CustomProjectsDelegate).field_0x8, plVar2 == (longlong *)0x0))
  {
LAB_146b2a0ca:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->SourceControlProjectDirDelegate,&local_38);
    if ((*(int *)&(this->SourceControlProjectDirDelegate).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(this->SourceControlProjectDirDelegate).field_0x8,
       plVar2 != (longlong *)0x0)) {
      cVar1 = (**(code **)(*plVar2 + 0x38))();
      if (cVar1 != '\0') {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_38);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this->SourceControlProjectDirDelegate,&local_20);
        if (*(int *)&(this->SourceControlProjectDirDelegate).field_0x10 == 0) {
          plVar2 = (longlong *)0x0;
        }
        else {
          plVar2 = *(longlong **)&(this->SourceControlProjectDirDelegate).field_0x8;
        }
        (**(code **)(*plVar2 + 0x60))(plVar2,&local_38);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_20);
        if (1 < (int)local_38.DestructionSentinel.Accessor) {
LAB_146b2a146:
          if ((FSourceControlProjectInfo *)local_38.DestructionSentinel._0_8_ !=
              (FSourceControlProjectInfo *)0x0) {
            FMemory::Free((void *)local_38.DestructionSentinel._0_8_);
          }
          return true;
        }
        goto LAB_146b2a0aa;
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
  }
  else {
    cVar1 = (**(code **)(*plVar2 + 0x38))();
    if (cVar1 == '\0') goto LAB_146b2a0ca;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->CustomProjectsDelegate,&local_20);
    if (*(int *)&(this->CustomProjectsDelegate).field_0x10 == 0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = *(longlong **)&(this->CustomProjectsDelegate).field_0x8;
    }
    (**(code **)(*plVar2 + 0x60))(plVar2,&local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_20);
    if ((int)local_38.DestructionSentinel.Accessor != 0) {
      DestructItems<FSourceControlProjectInfo,int>
                ((FSourceControlProjectInfo *)local_38.DestructionSentinel._0_8_,
                 (int)local_38.DestructionSentinel.Accessor);
      goto LAB_146b2a146;
    }
    DestructItems<FSourceControlProjectInfo,int>
              ((FSourceControlProjectInfo *)local_38.DestructionSentinel._0_8_,0);
LAB_146b2a0aa:
    if ((FSourceControlProjectInfo *)local_38.DestructionSentinel._0_8_ !=
        (FSourceControlProjectInfo *)0x0) {
      FMemory::Free((void *)local_38.DestructionSentinel._0_8_);
      return false;
    }
  }
  return false;
}

