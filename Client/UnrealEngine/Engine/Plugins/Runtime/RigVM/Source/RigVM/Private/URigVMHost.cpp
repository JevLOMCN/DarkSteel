// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 100

// StaticClass @ 14a11a850

UClass * __cdecl URigVMHost::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URigVMHost.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/RigVM",L"RigVMHost",&Z_Registration_Info_UClass_URigVMHost.InnerSingleton,
               StaticRegisterNativesURigVMHost,0x290,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None
               ,L"Engine",InternalConstructor<URigVMHost>,InternalVTableHelperCtorCaller<URigVMHost>
               ,local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URigVMHost.InnerSingleton;
}

// URigVMHost @ 14a190f70

URigVMHost * __thiscall URigVMHost::URigVMHost(URigVMHost *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->VMRuntimeSettings).MaximumArraySize = 0x800;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->VMRuntimeSettings).LogFunction.Object =
       (TFunction<void___cdecl(FRigVMLogSettings_const_&,FRigVMExecuteContext_const_*,FString_const_&)>
        *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  (this->VMRuntimeSettings).LogFunction.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->VM).field0_0x0.DebugPtr = (URigVM *)0x0;
  *(undefined8 *)&this->UserDefinedStructGuidToPathName = 0;
  *(undefined8 *)&(this->UserDefinedStructGuidToPathName).field_0x8 = 0;
  *(undefined8 *)&(this->UserDefinedStructGuidToPathName).field_0x20 = 0;
  *(undefined4 *)&(this->UserDefinedStructGuidToPathName).field_0x28 = 0;
  *(undefined4 *)&(this->UserDefinedStructGuidToPathName).field_0x2c = 0x80;
  *(undefined4 *)&(this->UserDefinedStructGuidToPathName).field_0x34 = 0;
  *(undefined4 *)&(this->UserDefinedStructGuidToPathName).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->UserDefinedStructGuidToPathName).field_0x40 = 0;
  *(undefined4 *)&(this->UserDefinedStructGuidToPathName).field_0x48 = 0;
  *(undefined8 *)&this->UserDefinedEnumToPathName = 0;
  *(undefined8 *)&(this->UserDefinedEnumToPathName).field_0x8 = 0;
  *(undefined8 *)&(this->UserDefinedEnumToPathName).field_0x20 = 0;
  *(undefined4 *)&(this->UserDefinedEnumToPathName).field_0x28 = 0;
  *(undefined4 *)&(this->UserDefinedEnumToPathName).field_0x2c = 0x80;
  *(undefined4 *)&(this->UserDefinedEnumToPathName).field_0x34 = 0;
  *(undefined4 *)&(this->UserDefinedEnumToPathName).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->UserDefinedEnumToPathName).field_0x40 = 0;
  *(undefined4 *)&(this->UserDefinedEnumToPathName).field_0x48 = 0;
  *(undefined8 *)&(this->UserDefinedTypesInUse).Elements = 0;
  *(undefined8 *)&(this->UserDefinedTypesInUse).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->UserDefinedTypesInUse).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->UserDefinedTypesInUse).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->UserDefinedTypesInUse).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->UserDefinedTypesInUse).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->UserDefinedTypesInUse).Elements.field_0x30 = 0xffffffff;
  (this->UserDefinedTypesInUse).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->UserDefinedTypesInUse).HashSize = 0;
  (this->DrawContainer)._padding_ = (longlong)&___7FRigVMDrawContainer__6B_;
  this->RigVMExtendedExecuteContext = (FRigVMExtendedExecuteContext *)0x0;
  (this->DrawContainer).Instructions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DrawContainer).Instructions.ArrayNum = 0;
  (this->DrawContainer).Instructions.ArrayMax = 0;
  *(undefined8 *)&(this->DrawInterface).field_0x8 = 0;
  *(undefined8 *)&(this->DrawInterface).field_0x10 = 0;
  (this->EventQueue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EventQueue).ArrayNum = 0;
  (this->EventQueue).ArrayMax = 0;
  (this->EventQueueToRun).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EventQueueToRun).ArrayNum = 0;
  (this->EventQueueToRun).ArrayMax = 0;
  (this->EventsToRunOnce).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EventsToRunOnce).ArrayNum = 0;
  (this->EventsToRunOnce).ArrayMax = 0;
  *(undefined8 *)&this->InitializedEvent = 0;
  *(undefined8 *)&(this->InitializedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->InitializedEvent).field_0x10 = 0;
  *(undefined8 *)&this->ExecutedEvent = 0;
  *(undefined8 *)&(this->ExecutedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->ExecutedEvent).field_0x10 = 0;
  *(undefined8 *)&this->PreExecutedEvent = 0;
  *(undefined8 *)&(this->PreExecutedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->PreExecutedEvent).field_0x10 = 0;
  (this->AssetUserData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetUserData).ArrayNum = 0;
  (this->AssetUserData).ArrayMax = 0;
  (this->OuterSceneComponent).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined ***)&this->DrawInterface = &___7FRigVMDrawInterface__6B_;
  *(undefined8 *)&(this->InitializedEvent).field_0x18 = 2;
  *(undefined8 *)&(this->ExecutedEvent).field_0x18 = 2;
  *(undefined8 *)&(this->PreExecutedEvent).field_0x18 = 2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->EvaluateMutex,4000);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->EventQueueToRunOnceMutex,4000);
  return this;
}

// URigVMHost @ 14a191180

URigVMHost * __thiscall URigVMHost::URigVMHost(URigVMHost *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->VMRuntimeSettings).MaximumArraySize = 0x800;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->VMRuntimeSettings).LogFunction.Object =
       (TFunction<void___cdecl(FRigVMLogSettings_const_&,FRigVMExecuteContext_const_*,FString_const_&)>
        *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  (this->VMRuntimeSettings).LogFunction.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->VM).field0_0x0.DebugPtr = (URigVM *)0x0;
  *(undefined8 *)&this->UserDefinedStructGuidToPathName = 0;
  *(undefined8 *)&(this->UserDefinedStructGuidToPathName).field_0x8 = 0;
  *(undefined8 *)&(this->UserDefinedStructGuidToPathName).field_0x20 = 0;
  this->DeltaTime = 0.0;
  this->AbsoluteTime = 0.0;
  this->FramesPerSecond = 0.0;
  this->bAccumulateTime = true;
  *(undefined4 *)&(this->UserDefinedStructGuidToPathName).field_0x28 = 0;
  *(undefined4 *)&(this->UserDefinedStructGuidToPathName).field_0x2c = 0x80;
  *(undefined4 *)&(this->UserDefinedStructGuidToPathName).field_0x34 = 0;
  *(undefined4 *)&(this->UserDefinedStructGuidToPathName).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->UserDefinedStructGuidToPathName).field_0x40 = 0;
  *(undefined4 *)&(this->UserDefinedStructGuidToPathName).field_0x48 = 0;
  *(undefined8 *)&this->UserDefinedEnumToPathName = 0;
  *(undefined8 *)&(this->UserDefinedEnumToPathName).field_0x8 = 0;
  *(undefined8 *)&(this->UserDefinedEnumToPathName).field_0x20 = 0;
  *(undefined4 *)&(this->UserDefinedEnumToPathName).field_0x28 = 0;
  *(undefined4 *)&(this->UserDefinedEnumToPathName).field_0x2c = 0x80;
  *(undefined4 *)&(this->UserDefinedEnumToPathName).field_0x34 = 0;
  *(undefined4 *)&(this->UserDefinedEnumToPathName).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->UserDefinedEnumToPathName).field_0x40 = 0;
  *(undefined4 *)&(this->UserDefinedEnumToPathName).field_0x48 = 0;
  *(undefined8 *)&(this->UserDefinedTypesInUse).Elements = 0;
  *(undefined8 *)&(this->UserDefinedTypesInUse).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->UserDefinedTypesInUse).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->UserDefinedTypesInUse).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->UserDefinedTypesInUse).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->UserDefinedTypesInUse).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->UserDefinedTypesInUse).Elements.field_0x30 = 0xffffffff;
  (this->UserDefinedTypesInUse).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->UserDefinedTypesInUse).HashSize = 0;
  (this->DrawContainer)._padding_ = (longlong)&___7FRigVMDrawContainer__6B_;
  this->RigVMExtendedExecuteContext = (FRigVMExtendedExecuteContext *)0x0;
  (this->DrawContainer).Instructions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DrawContainer).Instructions.ArrayNum = 0;
  (this->DrawContainer).Instructions.ArrayMax = 0;
  *(undefined8 *)&(this->DrawInterface).field_0x8 = 0;
  *(undefined8 *)&(this->DrawInterface).field_0x10 = 0;
  (this->EventQueue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EventQueue).ArrayNum = 0;
  (this->EventQueue).ArrayMax = 0;
  (this->EventQueueToRun).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EventQueueToRun).ArrayNum = 0;
  (this->EventQueueToRun).ArrayMax = 0;
  (this->EventsToRunOnce).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EventsToRunOnce).ArrayNum = 0;
  (this->EventsToRunOnce).ArrayMax = 0;
  *(undefined8 *)&this->InitializedEvent = 0;
  *(undefined8 *)&(this->InitializedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->InitializedEvent).field_0x10 = 0;
  *(undefined8 *)&this->ExecutedEvent = 0;
  *(undefined8 *)&(this->ExecutedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->ExecutedEvent).field_0x10 = 0;
  *(undefined8 *)&this->PreExecutedEvent = 0;
  *(undefined8 *)&(this->PreExecutedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->PreExecutedEvent).field_0x10 = 0;
  (this->AssetUserData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetUserData).ArrayNum = 0;
  (this->AssetUserData).ArrayMax = 0;
  this->bRequiresInitExecution = false;
  this->InitBracket = 0;
  this->ExecuteBracket = 0;
  (this->OuterSceneComponent).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined ***)&this->DrawInterface = &___7FRigVMDrawInterface__6B_;
  *(undefined8 *)&(this->InitializedEvent).field_0x18 = 2;
  *(undefined8 *)&(this->ExecutedEvent).field_0x18 = 2;
  *(undefined8 *)&(this->PreExecutedEvent).field_0x18 = 2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->EvaluateMutex,4000);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->EventQueueToRunOnceMutex,4000);
  return this;
}

// ~URigVMHost @ 14a191e30

void __thiscall URigVMHost::~URigVMHost(URigVMHost *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  ForElementType<FSetElementId> FVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->EventQueueToRunOnceMutex);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->EvaluateMutex);
  pFVar1 = (this->AssetUserData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->PreExecutedEvent).field_0x8,*(int *)&(this->PreExecutedEvent).field_0x10);
  pvVar2 = *(void **)&(this->PreExecutedEvent).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PreExecutedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ExecutedEvent).field_0x8,*(int *)&(this->ExecutedEvent).field_0x10);
  pvVar2 = *(void **)&(this->ExecutedEvent).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ExecutedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->InitializedEvent).field_0x8,*(int *)&(this->InitializedEvent).field_0x10);
  pvVar2 = *(void **)&(this->InitializedEvent).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->InitializedEvent);
  pFVar1 = (this->EventsToRunOnce).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EventQueueToRun).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EventQueue).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined ***)&this->DrawInterface = &___7FRigVMDrawContainer__6B_;
  DestructItems<FRigVMDrawInstruction,int>
            (*(FRigVMDrawInstruction **)&(this->DrawInterface).field_0x8,
             *(int *)&(this->DrawInterface).field_0x10);
  pvVar2 = *(void **)&(this->DrawInterface).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  (this->DrawContainer)._padding_ = (longlong)&___7FRigVMDrawContainer__6B_;
  DestructItems<FRigVMDrawInstruction,int>
            ((FRigVMDrawInstruction *)(this->DrawContainer).Instructions.AllocatorInstance.Data,
             (this->DrawContainer).Instructions.ArrayNum);
  pFVar1 = (this->DrawContainer).Instructions.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->UserDefinedTypesInUse).HashSize = 0;
  FVar3 = (this->UserDefinedTypesInUse).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->UserDefinedTypesInUse).Elements);
  *(undefined4 *)&(this->UserDefinedEnumToPathName).field_0x48 = 0;
  pvVar2 = *(void **)&(this->UserDefinedEnumToPathName).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->UserDefinedEnumToPathName);
  *(undefined4 *)&(this->UserDefinedStructGuidToPathName).field_0x48 = 0;
  pvVar2 = *(void **)&(this->UserDefinedStructGuidToPathName).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->UserDefinedStructGuidToPathName);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->VMRuntimeSettings).LogFunction.SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7IInterface_AssetUserData__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AdaptEventQueueForEvaluate @ 14a194000

void __thiscall
URigVMHost::AdaptEventQueueForEvaluate
          (URigVMHost *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// AddAssetUserData @ 14a194080

void __thiscall URigVMHost::AddAssetUserData(URigVMHost *this,UAssetUserData *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined1 *puVar5;
  UObject *local_res10;
  UAssetUserData *local_18 [2];
  
  if (param_1 != (UAssetUserData *)0x0) {
    local_res10 = *(UObject **)&param_1->field_0x10;
    pcVar2 = *(code **)(this->_padding_ + 0x38);
    if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res10 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res10);
    }
    (*pcVar2)(this,&local_res10);
    puVar5 = &(this->ExecutedEvent).field_0x18;
    local_18[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    if (((*(UAssetUserData ***)puVar5 <= local_18) &&
        (local_18 < *(UAssetUserData ***)puVar5 + *(int *)&(this->PreExecutedEvent).field_0x4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = *(int *)&this->PreExecutedEvent;
    puVar1 = &(this->PreExecutedEvent).field_0x4;
    if (iVar4 == *(int *)puVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)puVar5,(int *)puVar1);
    }
    *(int *)&this->PreExecutedEvent = iVar4 + 1;
    *(UAssetUserData **)(*(longlong *)puVar5 + (longlong)iVar4 * 8) = local_18[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_18[0] != (UAssetUserData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_18[0]);
    }
  }
  return;
}

// AreNativizedVMsDisabled @ 14a194570

bool __cdecl URigVMHost::AreNativizedVMsDisabled(void)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(longlong *)CVarRigVMDisableNativizedVMs._padding_ + 200))();
  return iVar1 != 0;
}

// BeginDestroy @ 14a1945a0

void __thiscall URigVMHost::BeginDestroy(URigVMHost *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  UObject::BeginDestroy((UObject *)this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::Clear
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->InitializedEvent);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::Clear
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->ExecutedEvent);
  bVar1 = FTraceFilter::IsObjectTraceable<1>((UObject *)this);
  if (!bVar1) {
    if (this != (URigVMHost *)0x0) {
      pUVar2 = (UObject *)(**(code **)(this->_padding_ + 0x180))(this);
      bVar1 = FTraceFilter::IsObjectTraceable<1>(pUVar2);
      if (bVar1) goto LAB_14a1945ef;
    }
    return;
  }
LAB_14a1945ef:
  FObjectTrace::OutputObjectLifetimeEnd((UObject *)this);
  return;
}

// CanExecute @ 14a194980

bool __thiscall URigVMHost::CanExecute(URigVMHost *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(longlong *)CVarRigVMDisableExecutionAll._padding_ + 200))();
  return iVar1 != 1;
}

// CopyExternalVariableDefaultValuesFromCDO @ 14a195310

void __thiscall URigVMHost::CopyExternalVariableDefaultValuesFromCDO(URigVMHost *this)

{
  void *_Dst;
  longlong *plVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  URigVMHost *pUVar6;
  uint uVar7;
  longlong lVar8;
  void *local_28;
  int local_20;
  void *local_18;
  int local_10;
  
  if ((this->_padding_ & 0x10) == 0) {
    pUVar6 = UClass::GetDefaultObject<URigVMHost>((UClass *)this->_padding_);
    (**(code **)(this->_padding_ + 0x378))(this,&local_28,0);
    (**(code **)(pUVar6->_padding_ + 0x378))(pUVar6,&local_18,0);
    if (local_20 == local_10) {
      uVar7 = 0;
      if (0 < local_20) {
        lVar8 = 0;
        do {
          uVar5 = 0;
          if ((int)uVar7 < local_20) {
            uVar5 = ~uVar7 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pvVar2 = local_28;
          uVar5 = 0;
          if ((int)uVar7 < local_10) {
            uVar5 = ~uVar7 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          _Dst = *(void **)((longlong)pvVar2 + lVar8 + 0x28);
          plVar1 = *(longlong **)((longlong)pvVar2 + lVar8 + 8);
          pvVar2 = *(void **)(lVar8 + 0x28 + (longlong)local_18);
          if (_Dst != pvVar2) {
            if ((*(uint *)(plVar1 + 7) >> 0x1e & 1) == 0) {
              (**(code **)(*plVar1 + 0xf0))(plVar1,_Dst,pvVar2,(int)plVar1[6]);
            }
            else {
              memcpy(_Dst,pvVar2,
                     (longlong)*(int *)((longlong)plVar1 + 0x34) * (longlong)(int)plVar1[6]);
            }
          }
          uVar7 = uVar7 + 1;
          lVar8 = lVar8 + 0x30;
        } while ((int)uVar7 < local_20);
      }
    }
    else {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2045642706327173947>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMHost.cpp"
                         ,0x4c5,"CurrentVariables.Num() == CDOVariables.Num()");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (local_18 != (void *)0x0) {
      FMemory::Free(local_18);
    }
    if (local_28 != (void *)0x0) {
      FMemory::Free(local_28);
    }
  }
  return;
}

// CopyVMMemory @ 14a195510

void __thiscall
URigVMHost::CopyVMMemory
          (URigVMHost *this,FRigVMExtendedExecuteContext *param_1,
          FRigVMExtendedExecuteContext *param_2)

{
  FRigVMExtendedExecuteContext::CopyMemoryStorage(param_1,param_2);
  return;
}

// DisableExecution @ 14a195980

bool __cdecl URigVMHost::DisableExecution(void)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(longlong *)CVarRigVMDisableExecutionAll._padding_ + 200))();
  return iVar1 == 1;
}

// DrawIntoPDI @ 14a1959b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
URigVMHost::DrawIntoPDI
          (URigVMHost *this,FPrimitiveDrawInterface *param_1,TTransform<double> *param_2)

{
  double *pdVar1;
  char cVar2;
  FMaterialRenderProxy *pFVar3;
  code *pcVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  uint uVar14;
  TMatrix<double> *pTVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  double *pdVar21;
  int *piVar22;
  longlong lVar23;
  longlong lVar24;
  bool bVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined4 uVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  double dVar73;
  double dVar74;
  double dVar78;
  double dVar79;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auStackY_2c8 [32];
  undefined1 local_288;
  undefined1 local_287 [7];
  longlong local_280;
  uint local_278;
  longlong local_270;
  TTransform<double> *local_268;
  URigVMHost *local_260;
  undefined1 local_258 [16];
  double local_248;
  undefined1 local_240 [16];
  double local_230;
  undefined1 local_228 [16];
  double local_218;
  undefined1 local_210 [16];
  double local_200;
  undefined1 local_1f8 [16];
  double local_1e8;
  FDynamicMeshBuilder local_1e0;
  TTransform<double> local_1b8;
  TMatrix<double> local_158;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  lVar23 = *(longlong *)&(this->DrawInterface).field_0x8;
  local_278 = *(uint *)&(this->DrawInterface).field_0x10;
  uVar17 = (ulonglong)(int)local_278;
  piVar22 = (int *)(lVar23 + 0x18);
  lVar20 = uVar17 * 0xd0 + lVar23;
  local_280 = lVar20;
  local_268 = param_2;
  local_260 = this;
  do {
    local_270 = lVar23;
    if (*(int *)&(local_260->DrawInterface).field_0x10 != (int)uVar17) {
      local_288 = 0;
      `TCheckedPointerIterator<FRigVMDrawInstruction,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_288);
    }
    if (lVar23 == lVar20) {
      return;
    }
    if ((char)piVar22[-4] == '\x03') {
      if ((piVar22[0x26] != 0) && (piVar22[0x2a] != 0)) {
        bVar25 = *(longlong *)(piVar22 + 0x2c) == 0;
        goto LAB_14a195ab1;
      }
    }
    else {
      bVar25 = *piVar22 == 0;
LAB_14a195ab1:
      if (!bVar25) {
        local_1b8.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_1b8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_1b8.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_1b8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_1b8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1]
        ;
        local_1b8.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_1b8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_1b8.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_1b8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_1b8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_1b8.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_1b8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_1b8.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_1b8.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_1b8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_1b8.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        UE::Math::TTransform<double>::Multiply
                  (&local_1b8,(TTransform<double> *)(piVar22 + 10),local_268);
        cVar2 = (char)piVar22[-4];
        if (cVar2 == '\0') {
          iVar16 = *piVar22;
          pdVar21 = *(double **)(piVar22 + -2);
          pdVar1 = pdVar21 + (longlong)iVar16 * 3;
          while( true ) {
            if (*piVar22 != iVar16) {
              local_287[0] = 0;
              `TCheckedPointerIterator<UE::Math::TVector<double>_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_287);
            }
            lVar20 = local_280;
            if (pdVar21 == pdVar1) break;
            dVar78 = local_1b8.Rotation.XY.m128d_f64[1];
            dVar73 = pdVar21[2] * local_1b8.Scale3D.ZW.m128d_f64[0];
            dVar9 = local_1b8.Scale3D.ZW.m128d_f64[1] * 0.0;
            dVar79 = local_1b8.Scale3D.XY.m128d_f64[0] * *pdVar21;
            dVar13 = local_1b8.Scale3D.XY.m128d_f64[1] * pdVar21[1];
            uVar56 = (undefined4)((ulonglong)dVar13 >> 0x20);
            dVar5 = local_1b8.Rotation.ZW.m128d_f64[0];
            auVar72 = blendpd((undefined1  [16])local_1b8.Rotation.XY.m128d_f64,
                              (undefined1  [16])local_1b8.Rotation.ZW.m128d_f64,2);
            auVar75._8_4_ = SUB84(dVar13,0);
            auVar75._0_8_ = dVar79;
            auVar75._12_4_ = uVar56;
            dVar74 = local_1b8.Rotation.ZW.m128d_f64[1];
            auVar57._8_4_ = SUB84(dVar13,0);
            auVar57._0_8_ = dVar79;
            auVar57._12_4_ = uVar56;
            auVar76._0_8_ = auVar75._8_8_ * local_1b8.Rotation.XY.m128d_f64[0] - dVar79 * dVar78;
            auVar76._8_8_ = dVar73 * dVar78 - dVar13 * dVar5;
            auVar27._8_4_ = SUB84(dVar9,0);
            auVar27._0_8_ = dVar73;
            auVar27._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
            auVar27 = blendpd(auVar57,auVar27,2);
            auVar43._0_8_ = auVar27._0_8_ * dVar5 - dVar73 * auVar72._0_8_;
            auVar43._8_8_ = auVar27._8_8_ * dVar74 - dVar9 * auVar72._8_8_;
            auVar27 = blendpd(auVar76,auVar43,2);
            dVar9 = auVar76._8_8_ + auVar76._8_8_;
            dVar10 = auVar43._0_8_ + auVar43._0_8_;
            uVar56 = (undefined4)((ulonglong)dVar10 >> 0x20);
            auVar77._0_8_ = auVar27._0_8_ + auVar27._0_8_;
            auVar77._8_8_ = auVar27._8_8_ + auVar27._8_8_;
            auVar54._8_4_ = SUB84(dVar10,0);
            auVar54._0_8_ = dVar9;
            auVar54._12_4_ = uVar56;
            auVar44._8_4_ = SUB84(dVar10,0);
            auVar44._0_8_ = dVar9;
            auVar44._12_4_ = uVar56;
            auVar27 = blendpd(auVar44,auVar77,2);
            auVar55._0_8_ = auVar54._8_8_ * local_1b8.Rotation.XY.m128d_f64[0] - dVar9 * dVar78;
            auVar55._8_8_ = auVar77._0_8_ * dVar78 - dVar10 * dVar5;
            auVar45._0_8_ = auVar27._0_8_ * dVar5 - auVar77._0_8_ * auVar72._0_8_;
            auVar45._8_8_ = auVar27._8_8_ * dVar74 - auVar77._8_8_ * auVar72._8_8_;
            auVar27 = blendpd(auVar55,auVar45,2);
            dVar10 = dVar10 * dVar74 + dVar13 + auVar45._0_8_ +
                     local_1b8.Translation.XY.m128d_f64[1];
            local_1f8._8_4_ = SUB84(dVar10,0);
            local_1f8._0_8_ =
                 dVar9 * dVar74 + dVar79 + auVar55._8_8_ + local_1b8.Translation.XY.m128d_f64[0];
            local_1f8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
            local_1e8 = auVar77._0_8_ * dVar74 + dVar73 + auVar27._0_8_ +
                        local_1b8.Translation.ZW.m128d_f64[0];
            (**(code **)(param_1->_padding_ + 0x40))(param_1,local_1f8,piVar22 + 2,piVar22[6]);
            pdVar21 = pdVar21 + 3;
          }
        }
        else if (cVar2 == '\x01') {
          (**(code **)(param_1->_padding_ + 0x20))
                    (param_1,CONCAT71((uint7)(uint3)(*piVar22 >> 0x1f),1),*piVar22 / 2);
          iVar16 = *piVar22;
          uVar19 = 0;
          lVar20 = local_280;
          if (0 < iVar16 + -1) {
            lVar24 = 0;
            do {
              pcVar4 = *(code **)(param_1->_padding_ + 0x30);
              uVar14 = 0;
              if ((int)(uVar19 + 1) < iVar16) {
                uVar14 = ~(uVar19 + 1) >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar25)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              dVar74 = local_1b8.Rotation.XY.m128d_f64[1];
              dVar5 = local_1b8.Rotation.ZW.m128d_f64[0];
              pdVar1 = (double *)(*(longlong *)(piVar22 + -2) + 0x18 + lVar24);
              dVar9 = *(double *)(*(longlong *)(piVar22 + -2) + 0x28 + lVar24) *
                      local_1b8.Scale3D.ZW.m128d_f64[0];
              dVar10 = local_1b8.Scale3D.ZW.m128d_f64[1] * 0.0;
              uVar14 = 0;
              if ((int)uVar19 < *piVar22) {
                uVar14 = ~uVar19 >> 0x1f;
              }
              dVar13 = local_1b8.Rotation.ZW.m128d_f64[1];
              dVar73 = local_1b8.Scale3D.XY.m128d_f64[0] * *pdVar1;
              dVar78 = local_1b8.Scale3D.XY.m128d_f64[1] * pdVar1[1];
              auVar57 = blendpd((undefined1  [16])local_1b8.Rotation.XY.m128d_f64,
                                (undefined1  [16])local_1b8.Rotation.ZW.m128d_f64,2);
              auVar66._8_4_ = SUB84(dVar78,0);
              auVar66._0_8_ = dVar73;
              uVar56 = (undefined4)((ulonglong)dVar78 >> 0x20);
              auVar66._12_4_ = uVar56;
              auVar35._8_4_ = SUB84(dVar78,0);
              auVar35._0_8_ = dVar73;
              auVar35._12_4_ = uVar56;
              auVar7._8_4_ = SUB84(dVar10,0);
              auVar7._0_8_ = dVar9;
              auVar7._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
              auVar27 = blendpd(auVar35,auVar7,2);
              auVar67._0_8_ = auVar66._8_8_ * local_1b8.Rotation.XY.m128d_f64[0] - dVar73 * dVar74;
              auVar67._8_8_ = dVar9 * dVar74 - dVar78 * dVar5;
              auVar36._0_8_ = auVar27._0_8_ * dVar5 - dVar9 * auVar57._0_8_;
              auVar36._8_8_ = auVar27._8_8_ * dVar13 - dVar10 * auVar57._8_8_;
              auVar27 = blendpd(auVar67,auVar36,2);
              dVar10 = auVar67._8_8_ + auVar67._8_8_;
              dVar79 = auVar36._0_8_ + auVar36._0_8_;
              uVar56 = (undefined4)((ulonglong)dVar79 >> 0x20);
              auVar68._0_8_ = auVar27._0_8_ + auVar27._0_8_;
              auVar68._8_8_ = auVar27._8_8_ + auVar27._8_8_;
              auVar50._8_4_ = SUB84(dVar79,0);
              auVar50._0_8_ = dVar10;
              auVar50._12_4_ = uVar56;
              auVar37._8_4_ = SUB84(dVar79,0);
              auVar37._0_8_ = dVar10;
              auVar37._12_4_ = uVar56;
              auVar27 = blendpd(auVar37,auVar68,2);
              auVar51._0_8_ = auVar50._8_8_ * local_1b8.Rotation.XY.m128d_f64[0] - dVar10 * dVar74;
              auVar51._8_8_ = auVar68._0_8_ * dVar74 - dVar79 * dVar5;
              auVar38._0_8_ = auVar27._0_8_ * dVar5 - auVar68._0_8_ * auVar57._0_8_;
              auVar38._8_8_ = auVar27._8_8_ * dVar13 - auVar68._8_8_ * auVar57._8_8_;
              auVar27 = blendpd(auVar51,auVar38,2);
              dVar5 = dVar79 * dVar13 + dVar78 + auVar38._0_8_ +
                      local_1b8.Translation.XY.m128d_f64[1];
              local_218 = auVar68._0_8_ * dVar13 + dVar9 + auVar27._0_8_ +
                          local_1b8.Translation.ZW.m128d_f64[0];
              local_228._8_4_ = SUB84(dVar5,0);
              local_228._0_8_ =
                   dVar10 * dVar13 + dVar73 + auVar51._8_8_ + local_1b8.Translation.XY.m128d_f64[0];
              local_228._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
              if (uVar14 == 0) {
                bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar25) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
              }
              pdVar1 = (double *)(lVar24 + *(longlong *)(piVar22 + -2));
              auVar59._4_4_ = local_1b8.Rotation.XY.m128d_f64[0]._4_4_;
              auVar59._0_4_ = local_1b8.Rotation.XY.m128d_f64[0]._0_4_;
              auVar59._8_4_ = local_1b8.Rotation.XY.m128d_f64[1]._0_4_;
              auVar59._12_4_ = local_1b8.Rotation.XY.m128d_f64[1]._4_4_;
              dVar5 = *(double *)(lVar24 + 0x10 + *(longlong *)(piVar22 + -2)) *
                      local_1b8.Scale3D.ZW.m128d_f64[0];
              dVar9 = local_1b8.Scale3D.ZW.m128d_f64[1] * 0.0;
              dVar74 = local_1b8.Scale3D.XY.m128d_f64[0] * *pdVar1;
              dVar79 = local_1b8.Scale3D.XY.m128d_f64[1] * pdVar1[1];
              auVar12._4_4_ = local_1b8.Rotation.ZW.m128d_f64[0]._4_4_;
              auVar12._0_4_ = local_1b8.Rotation.ZW.m128d_f64[0]._0_4_;
              auVar12._8_4_ = local_1b8.Rotation.ZW.m128d_f64[1]._0_4_;
              auVar12._12_4_ = local_1b8.Rotation.ZW.m128d_f64[1]._4_4_;
              auVar57 = blendpd(auVar59,auVar12,2);
              auVar69._8_4_ = SUB84(dVar79,0);
              auVar69._0_8_ = dVar74;
              uVar56 = (undefined4)((ulonglong)dVar79 >> 0x20);
              auVar69._12_4_ = uVar56;
              auVar39._8_4_ = SUB84(dVar79,0);
              auVar39._0_8_ = dVar74;
              auVar39._12_4_ = uVar56;
              auVar70._0_8_ =
                   auVar69._8_8_ *
                   (double)CONCAT44(local_1b8.Rotation.XY.m128d_f64[0]._4_4_,
                                    local_1b8.Rotation.XY.m128d_f64[0]._0_4_) -
                   dVar74 * (double)CONCAT44(local_1b8.Rotation.XY.m128d_f64[1]._4_4_,
                                             local_1b8.Rotation.XY.m128d_f64[1]._0_4_);
              auVar70._8_8_ =
                   dVar5 * (double)CONCAT44(local_1b8.Rotation.XY.m128d_f64[1]._4_4_,
                                            local_1b8.Rotation.XY.m128d_f64[1]._0_4_) -
                   dVar79 * (double)CONCAT44(local_1b8.Rotation.ZW.m128d_f64[0]._4_4_,
                                             local_1b8.Rotation.ZW.m128d_f64[0]._0_4_);
              auVar8._8_4_ = SUB84(dVar9,0);
              auVar8._0_8_ = dVar5;
              auVar8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
              auVar27 = blendpd(auVar39,auVar8,2);
              auVar40._0_8_ =
                   auVar27._0_8_ *
                   (double)CONCAT44(local_1b8.Rotation.ZW.m128d_f64[0]._4_4_,
                                    local_1b8.Rotation.ZW.m128d_f64[0]._0_4_) -
                   dVar5 * auVar57._0_8_;
              auVar40._8_8_ =
                   auVar27._8_8_ *
                   (double)CONCAT44(local_1b8.Rotation.ZW.m128d_f64[1]._4_4_,
                                    local_1b8.Rotation.ZW.m128d_f64[1]._0_4_) -
                   dVar9 * auVar57._8_8_;
              auVar27 = blendpd(auVar70,auVar40,2);
              dVar9 = auVar70._8_8_ + auVar70._8_8_;
              dVar10 = auVar40._0_8_ + auVar40._0_8_;
              uVar56 = (undefined4)((ulonglong)dVar10 >> 0x20);
              auVar71._0_8_ = auVar27._0_8_ + auVar27._0_8_;
              auVar71._8_8_ = auVar27._8_8_ + auVar27._8_8_;
              auVar52._8_4_ = SUB84(dVar10,0);
              auVar52._0_8_ = dVar9;
              auVar52._12_4_ = uVar56;
              auVar41._8_4_ = SUB84(dVar10,0);
              auVar41._0_8_ = dVar9;
              auVar41._12_4_ = uVar56;
              auVar27 = blendpd(auVar41,auVar71,2);
              auVar53._0_8_ =
                   auVar52._8_8_ *
                   (double)CONCAT44(local_1b8.Rotation.XY.m128d_f64[0]._4_4_,
                                    local_1b8.Rotation.XY.m128d_f64[0]._0_4_) -
                   dVar9 * (double)CONCAT44(local_1b8.Rotation.XY.m128d_f64[1]._4_4_,
                                            local_1b8.Rotation.XY.m128d_f64[1]._0_4_);
              auVar53._8_8_ =
                   auVar71._0_8_ *
                   (double)CONCAT44(local_1b8.Rotation.XY.m128d_f64[1]._4_4_,
                                    local_1b8.Rotation.XY.m128d_f64[1]._0_4_) -
                   dVar10 * (double)CONCAT44(local_1b8.Rotation.ZW.m128d_f64[0]._4_4_,
                                             local_1b8.Rotation.ZW.m128d_f64[0]._0_4_);
              auVar42._0_8_ =
                   auVar27._0_8_ *
                   (double)CONCAT44(local_1b8.Rotation.ZW.m128d_f64[0]._4_4_,
                                    local_1b8.Rotation.ZW.m128d_f64[0]._0_4_) -
                   auVar71._0_8_ * auVar57._0_8_;
              auVar42._8_8_ =
                   auVar27._8_8_ *
                   (double)CONCAT44(local_1b8.Rotation.ZW.m128d_f64[1]._4_4_,
                                    local_1b8.Rotation.ZW.m128d_f64[1]._0_4_) -
                   auVar71._8_8_ * auVar57._8_8_;
              auVar27 = blendpd(auVar53,auVar42,2);
              dVar10 = dVar10 * (double)CONCAT44(local_1b8.Rotation.ZW.m128d_f64[1]._4_4_,
                                                 local_1b8.Rotation.ZW.m128d_f64[1]._0_4_) + dVar79
                       + auVar42._0_8_ + local_1b8.Translation.XY.m128d_f64[1];
              local_200 = auVar71._0_8_ *
                          (double)CONCAT44(local_1b8.Rotation.ZW.m128d_f64[1]._4_4_,
                                           local_1b8.Rotation.ZW.m128d_f64[1]._0_4_) + dVar5 +
                          auVar27._0_8_ + local_1b8.Translation.ZW.m128d_f64[0];
              local_210._8_4_ = SUB84(dVar10,0);
              local_210._0_8_ =
                   dVar9 * (double)CONCAT44(local_1b8.Rotation.ZW.m128d_f64[1]._4_4_,
                                            local_1b8.Rotation.ZW.m128d_f64[1]._0_4_) + dVar74 +
                   auVar53._8_8_ + local_1b8.Translation.XY.m128d_f64[0];
              local_210._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
              (*pcVar4)(param_1,local_210,local_228);
              iVar16 = *piVar22;
              uVar19 = uVar19 + 2;
              lVar24 = lVar24 + 0x30;
              lVar20 = local_280;
            } while ((int)uVar19 < iVar16 + -1);
          }
        }
        else if (cVar2 == '\x02') {
          (**(code **)(param_1->_padding_ + 0x20))(param_1,1,*piVar22 + -1);
          iVar16 = *piVar22;
          if (0 < iVar16 + -1) {
            lVar24 = 0;
            uVar19 = 0;
            do {
              uVar18 = uVar19 + 1;
              pcVar4 = *(code **)(param_1->_padding_ + 0x30);
              uVar14 = 0;
              if ((int)uVar18 < iVar16) {
                uVar14 = ~uVar18 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar25)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              dVar74 = local_1b8.Rotation.XY.m128d_f64[1];
              dVar5 = local_1b8.Rotation.ZW.m128d_f64[0];
              pdVar1 = (double *)(lVar24 + 0x18 + *(longlong *)(piVar22 + -2));
              dVar9 = *(double *)(lVar24 + 0x28 + *(longlong *)(piVar22 + -2)) *
                      local_1b8.Scale3D.ZW.m128d_f64[0];
              dVar10 = local_1b8.Scale3D.ZW.m128d_f64[1] * 0.0;
              uVar14 = 0;
              if ((int)uVar19 < *piVar22) {
                uVar14 = ~uVar19 >> 0x1f;
              }
              dVar13 = local_1b8.Rotation.ZW.m128d_f64[1];
              dVar73 = local_1b8.Scale3D.XY.m128d_f64[0] * *pdVar1;
              dVar78 = local_1b8.Scale3D.XY.m128d_f64[1] * pdVar1[1];
              auVar57 = blendpd((undefined1  [16])local_1b8.Rotation.XY.m128d_f64,
                                (undefined1  [16])local_1b8.Rotation.ZW.m128d_f64,2);
              auVar60._8_4_ = SUB84(dVar78,0);
              auVar60._0_8_ = dVar73;
              uVar56 = (undefined4)((ulonglong)dVar78 >> 0x20);
              auVar60._12_4_ = uVar56;
              auVar26._8_4_ = SUB84(dVar78,0);
              auVar26._0_8_ = dVar73;
              auVar26._12_4_ = uVar56;
              auVar72._8_4_ = SUB84(dVar10,0);
              auVar72._0_8_ = dVar9;
              auVar72._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
              auVar27 = blendpd(auVar26,auVar72,2);
              auVar61._0_8_ = auVar60._8_8_ * local_1b8.Rotation.XY.m128d_f64[0] - dVar73 * dVar74;
              auVar61._8_8_ = dVar9 * dVar74 - dVar78 * dVar5;
              auVar28._0_8_ = auVar27._0_8_ * dVar5 - auVar57._0_8_ * dVar9;
              auVar28._8_8_ = auVar27._8_8_ * dVar13 - auVar57._8_8_ * dVar10;
              auVar27 = blendpd(auVar61,auVar28,2);
              dVar10 = auVar61._8_8_ + auVar61._8_8_;
              dVar79 = auVar28._0_8_ + auVar28._0_8_;
              uVar56 = (undefined4)((ulonglong)dVar79 >> 0x20);
              auVar62._0_8_ = auVar27._0_8_ + auVar27._0_8_;
              auVar62._8_8_ = auVar27._8_8_ + auVar27._8_8_;
              auVar46._8_4_ = SUB84(dVar79,0);
              auVar46._0_8_ = dVar10;
              auVar46._12_4_ = uVar56;
              auVar29._8_4_ = SUB84(dVar79,0);
              auVar29._0_8_ = dVar10;
              auVar29._12_4_ = uVar56;
              auVar27 = blendpd(auVar29,auVar62,2);
              auVar47._0_8_ = auVar46._8_8_ * local_1b8.Rotation.XY.m128d_f64[0] - dVar10 * dVar74;
              auVar47._8_8_ = auVar62._0_8_ * dVar74 - dVar79 * dVar5;
              auVar30._0_8_ = auVar27._0_8_ * dVar5 - auVar62._0_8_ * auVar57._0_8_;
              auVar30._8_8_ = auVar27._8_8_ * dVar13 - auVar62._8_8_ * auVar57._8_8_;
              auVar27 = blendpd(auVar47,auVar30,2);
              dVar5 = dVar79 * dVar13 + dVar78 + auVar30._0_8_ +
                      local_1b8.Translation.XY.m128d_f64[1];
              local_248 = auVar62._0_8_ * dVar13 + dVar9 + auVar27._0_8_ +
                          local_1b8.Translation.ZW.m128d_f64[0];
              local_258._8_4_ = SUB84(dVar5,0);
              local_258._0_8_ =
                   dVar10 * dVar13 + dVar73 + auVar47._8_8_ + local_1b8.Translation.XY.m128d_f64[0];
              local_258._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
              if (uVar14 == 0) {
                bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar25) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
              }
              pdVar1 = (double *)(*(longlong *)(piVar22 + -2) + lVar24);
              auVar58._4_4_ = local_1b8.Rotation.XY.m128d_f64[0]._4_4_;
              auVar58._0_4_ = local_1b8.Rotation.XY.m128d_f64[0]._0_4_;
              auVar58._8_4_ = local_1b8.Rotation.XY.m128d_f64[1]._0_4_;
              auVar58._12_4_ = local_1b8.Rotation.XY.m128d_f64[1]._4_4_;
              dVar5 = *(double *)(*(longlong *)(piVar22 + -2) + 0x10 + lVar24) *
                      local_1b8.Scale3D.ZW.m128d_f64[0];
              dVar9 = local_1b8.Scale3D.ZW.m128d_f64[1] * 0.0;
              dVar74 = local_1b8.Scale3D.XY.m128d_f64[0] * *pdVar1;
              dVar79 = local_1b8.Scale3D.XY.m128d_f64[1] * pdVar1[1];
              auVar11._4_4_ = local_1b8.Rotation.ZW.m128d_f64[0]._4_4_;
              auVar11._0_4_ = local_1b8.Rotation.ZW.m128d_f64[0]._0_4_;
              auVar11._8_4_ = local_1b8.Rotation.ZW.m128d_f64[1]._0_4_;
              auVar11._12_4_ = local_1b8.Rotation.ZW.m128d_f64[1]._4_4_;
              auVar57 = blendpd(auVar58,auVar11,2);
              auVar63._8_4_ = SUB84(dVar79,0);
              auVar63._0_8_ = dVar74;
              uVar56 = (undefined4)((ulonglong)dVar79 >> 0x20);
              auVar63._12_4_ = uVar56;
              auVar31._8_4_ = SUB84(dVar79,0);
              auVar31._0_8_ = dVar74;
              auVar31._12_4_ = uVar56;
              auVar64._0_8_ =
                   auVar63._8_8_ *
                   (double)CONCAT44(local_1b8.Rotation.XY.m128d_f64[0]._4_4_,
                                    local_1b8.Rotation.XY.m128d_f64[0]._0_4_) -
                   dVar74 * (double)CONCAT44(local_1b8.Rotation.XY.m128d_f64[1]._4_4_,
                                             local_1b8.Rotation.XY.m128d_f64[1]._0_4_);
              auVar64._8_8_ =
                   dVar5 * (double)CONCAT44(local_1b8.Rotation.XY.m128d_f64[1]._4_4_,
                                            local_1b8.Rotation.XY.m128d_f64[1]._0_4_) -
                   dVar79 * (double)CONCAT44(local_1b8.Rotation.ZW.m128d_f64[0]._4_4_,
                                             local_1b8.Rotation.ZW.m128d_f64[0]._0_4_);
              auVar6._8_4_ = SUB84(dVar9,0);
              auVar6._0_8_ = dVar5;
              auVar6._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
              auVar27 = blendpd(auVar31,auVar6,2);
              auVar32._0_8_ =
                   auVar27._0_8_ *
                   (double)CONCAT44(local_1b8.Rotation.ZW.m128d_f64[0]._4_4_,
                                    local_1b8.Rotation.ZW.m128d_f64[0]._0_4_) -
                   dVar5 * auVar57._0_8_;
              auVar32._8_8_ =
                   auVar27._8_8_ *
                   (double)CONCAT44(local_1b8.Rotation.ZW.m128d_f64[1]._4_4_,
                                    local_1b8.Rotation.ZW.m128d_f64[1]._0_4_) -
                   dVar9 * auVar57._8_8_;
              auVar27 = blendpd(auVar64,auVar32,2);
              dVar9 = auVar64._8_8_ + auVar64._8_8_;
              dVar10 = auVar32._0_8_ + auVar32._0_8_;
              uVar56 = (undefined4)((ulonglong)dVar10 >> 0x20);
              auVar65._0_8_ = auVar27._0_8_ + auVar27._0_8_;
              auVar65._8_8_ = auVar27._8_8_ + auVar27._8_8_;
              auVar48._8_4_ = SUB84(dVar10,0);
              auVar48._0_8_ = dVar9;
              auVar48._12_4_ = uVar56;
              auVar33._8_4_ = SUB84(dVar10,0);
              auVar33._0_8_ = dVar9;
              auVar33._12_4_ = uVar56;
              auVar27 = blendpd(auVar33,auVar65,2);
              auVar49._0_8_ =
                   auVar48._8_8_ *
                   (double)CONCAT44(local_1b8.Rotation.XY.m128d_f64[0]._4_4_,
                                    local_1b8.Rotation.XY.m128d_f64[0]._0_4_) -
                   dVar9 * (double)CONCAT44(local_1b8.Rotation.XY.m128d_f64[1]._4_4_,
                                            local_1b8.Rotation.XY.m128d_f64[1]._0_4_);
              auVar49._8_8_ =
                   auVar65._0_8_ *
                   (double)CONCAT44(local_1b8.Rotation.XY.m128d_f64[1]._4_4_,
                                    local_1b8.Rotation.XY.m128d_f64[1]._0_4_) -
                   dVar10 * (double)CONCAT44(local_1b8.Rotation.ZW.m128d_f64[0]._4_4_,
                                             local_1b8.Rotation.ZW.m128d_f64[0]._0_4_);
              auVar34._0_8_ =
                   auVar27._0_8_ *
                   (double)CONCAT44(local_1b8.Rotation.ZW.m128d_f64[0]._4_4_,
                                    local_1b8.Rotation.ZW.m128d_f64[0]._0_4_) -
                   auVar65._0_8_ * auVar57._0_8_;
              auVar34._8_8_ =
                   auVar27._8_8_ *
                   (double)CONCAT44(local_1b8.Rotation.ZW.m128d_f64[1]._4_4_,
                                    local_1b8.Rotation.ZW.m128d_f64[1]._0_4_) -
                   auVar65._8_8_ * auVar57._8_8_;
              auVar27 = blendpd(auVar49,auVar34,2);
              dVar10 = dVar10 * (double)CONCAT44(local_1b8.Rotation.ZW.m128d_f64[1]._4_4_,
                                                 local_1b8.Rotation.ZW.m128d_f64[1]._0_4_) + dVar79
                       + auVar34._0_8_ + local_1b8.Translation.XY.m128d_f64[1];
              local_230 = auVar65._0_8_ *
                          (double)CONCAT44(local_1b8.Rotation.ZW.m128d_f64[1]._4_4_,
                                           local_1b8.Rotation.ZW.m128d_f64[1]._0_4_) + dVar5 +
                          auVar27._0_8_ + local_1b8.Translation.ZW.m128d_f64[0];
              local_240._8_4_ = SUB84(dVar10,0);
              local_240._0_8_ =
                   dVar9 * (double)CONCAT44(local_1b8.Rotation.ZW.m128d_f64[1]._4_4_,
                                            local_1b8.Rotation.ZW.m128d_f64[1]._0_4_) + dVar74 +
                   auVar49._8_8_ + local_1b8.Translation.XY.m128d_f64[0];
              local_240._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
              (*pcVar4)(param_1,local_240,local_258);
              iVar16 = *piVar22;
              lVar24 = lVar24 + 0x18;
              lVar20 = local_280;
              lVar23 = local_270;
              uVar19 = uVar18;
            } while ((int)uVar18 < iVar16 + -1);
          }
        }
        else if (cVar2 == '\x03') {
          FDynamicMeshBuilder::FDynamicMeshBuilder
                    (&local_1e0,param_1->View->FeatureLevel,1,0,false,
                     (FDynamicMeshBufferAllocator *)0x0);
          FDynamicMeshBuilder::AddVertices
                    (&local_1e0,
                     (TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> *)(piVar22 + 0x24));
          FDynamicMeshBuilder::AddTriangles
                    (&local_1e0,(TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(piVar22 + 0x28)
                    );
          pFVar3 = *(FMaterialRenderProxy **)(piVar22 + 0x2c);
          pTVar15 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_1b8,&local_158);
          FDynamicMeshBuilder::Draw
                    (&local_1e0,param_1,pTVar15,pFVar3,'\0',false,true,(FHitProxyId)0xffffffff);
          FDynamicMeshBuilder::~FDynamicMeshBuilder(&local_1e0);
          lVar20 = local_280;
        }
      }
    }
    lVar23 = lVar23 + 0xd0;
    uVar17 = (ulonglong)local_278;
    piVar22 = piVar22 + 0x34;
  } while( true );
}

// Evaluate_AnyThread @ 14a1970b0

void __thiscall URigVMHost::Evaluate_AnyThread(URigVMHost *this)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<FName,TSizedDefaultAllocator<32>_> *this_00;
  FWindowsRecursiveMutex *lpCriticalSection_00;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  URigVMHost *local_res10;
  TArray<FName,TSizedDefaultAllocator<32>_> local_50;
  
  lpCriticalSection = &this->EvaluateMutex;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  this_00 = &this->EventQueueToRun;
  piVar1 = &(this->EventQueueToRun).ArrayNum;
  if ((this->EventQueueToRun).ArrayNum != 0) {
    local_res10 = this;
    `URigVMHost::Evaluate_AnyThread'::__l2::<lambda_1>::operator()(&local_res10);
  }
  local_50.ArrayNum = *piVar1;
  lVar7 = (longlong)local_50.ArrayNum;
  pFVar3 = (this_00->AllocatorInstance).Data;
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_50.ArrayNum == 0) {
    local_50.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_50.ArrayNum,0,&local_50.AllocatorInstance,local_50.ArrayNum,
               &local_50.ArrayMax);
    memcpy(local_50.AllocatorInstance.Data,pFVar3,lVar7 << 3);
  }
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=(this_00,&this->EventQueue);
  (**(code **)(this->_padding_ + 0x330))(this,this_00);
  lpCriticalSection_00 = &this->EventQueueToRunOnceMutex;
  if (lpCriticalSection_00 == (FWindowsRecursiveMutex *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
  if (this_00 == &this->EventsToRunOnce) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(const void*)this != (const void*)&Items",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x767,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar2 = (this->EventsToRunOnce).ArrayNum;
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,iVar2,&this_00->AllocatorInstance,piVar1,&(this->EventQueueToRun).ArrayMax)
  ;
  pFVar3 = (this_00->AllocatorInstance).Data;
  memmove(pFVar3 + (longlong)iVar2 * 8,pFVar3,(longlong)iVar6 << 3);
  if (iVar2 != 0) {
    memcpy((this_00->AllocatorInstance).Data,(this->EventsToRunOnce).AllocatorInstance.Data,
           (longlong)iVar2 * 8);
  }
  if (lpCriticalSection_00 != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
  }
  pFVar8 = (this_00->AllocatorInstance).Data;
  iVar2 = *piVar1;
  pFVar3 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    if (*piVar1 != iVar2) {
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar3) break;
    (**(code **)(this->_padding_ + 0x2f0))(this,pFVar8);
    pFVar8 = pFVar8 + 8;
  }
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=(this_00,&local_50);
  if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// Execute @ 14a1a4b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall URigVMHost::Execute(URigVMHost *this,FName *param_1)

{
  FName *pFVar1;
  float fVar2;
  int iVar3;
  undefined8 *puVar4;
  FRigVMDrawInterface *pFVar5;
  FRigVMDrawContainer *pFVar6;
  code *pcVar7;
  char cVar8;
  bool bVar9;
  undefined1 uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  UClass *pUVar16;
  FName *pFVar17;
  FRigVMExtendedExecuteContext *this_00;
  FRigVMExecuteContext *this_01;
  USceneComponent *pUVar18;
  undefined8 *puVar19;
  undefined ***pppuVar20;
  longlong *plVar21;
  undefined1 *puVar22;
  UObject *pUVar23;
  uint uVar24;
  float fVar25;
  undefined1 auStackY_118 [32];
  FString local_e8;
  code *local_d8 [2];
  undefined **local_c8;
  URigVMHost *local_c0;
  undefined ***local_b0;
  TFunction<void___cdecl(FName_const_&)> *local_a8;
  undefined1 local_98 [40];
  longlong *local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_118;
  cVar8 = (**(code **)(this->_padding_ + 0x2b8))();
  if (cVar8 == '\0') {
    return false;
  }
  if (this->bRequiresInitExecution != false) {
    fVar2 = this->AbsoluteTime;
    this->AbsoluteTime = fVar2;
    fVar25 = this->DeltaTime;
    this->DeltaTime = fVar25;
    cVar8 = (**(code **)(this->_padding_ + 0x2c8))(this);
    this->DeltaTime = fVar25;
    this->AbsoluteTime = fVar2;
    if (cVar8 == '\0') {
      return false;
    }
  }
  if ((this->EventQueueToRun).ArrayNum == 0) {
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=(&this->EventQueueToRun,&this->EventQueue);
  }
  pUVar16 = (UClass *)this->_padding_;
  if ((pUVar16->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar16);
  }
  pUVar23 = (pUVar16->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar23 == (UObject *)0x0) {
LAB_14a1a4c3e:
    pUVar23 = (UObject *)0x0;
  }
  else {
    pUVar16 = StaticClass();
    iVar3 = (int)pUVar16->_padding_;
    if ((*(int *)(*(longlong *)&pUVar23->field_0x10 + 0x38) < iVar3) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar23->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar16->_padding_)) goto LAB_14a1a4c3e;
  }
  pFVar17 = (FName *)(this->EventQueueToRun).AllocatorInstance.Data;
  iVar3 = (this->EventQueueToRun).ArrayNum;
  pFVar1 = pFVar17 + iVar3;
  if (pFVar17 != pFVar1) {
    do {
      if (*pFVar17 == *param_1) {
        bVar13 = true;
        goto LAB_14a1a4c71;
      }
      pFVar17 = pFVar17 + 1;
    } while (pFVar17 != pFVar1);
  }
  bVar13 = false;
LAB_14a1a4c71:
  if ((this->EventQueueToRun).ArrayNum == 0) {
LAB_14a1a4cc8:
    bVar9 = false;
  }
  else {
    if ((iVar3 < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
    if (*(FName *)(this->EventQueueToRun).AllocatorInstance.Data != *param_1) goto LAB_14a1a4cc8;
    bVar9 = true;
  }
  if ((this->EventQueueToRun).ArrayNum != 0) {
    iVar3 = (this->EventQueueToRun).ArrayNum;
    uVar24 = iVar3 - 1;
    uVar14 = 0;
    if ((int)uVar24 < iVar3) {
      uVar14 = ~uVar24 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
    if (*(FName *)((this->EventQueueToRun).AllocatorInstance.Data +
                  (longlong)(this->EventQueueToRun).ArrayNum * 8 + -8) == *param_1) {
      bVar11 = true;
      goto LAB_14a1a4d4f;
    }
  }
  bVar11 = false;
LAB_14a1a4d4f:
  if ((((uint)this->_padding_ >> 4 & 1) != 0) &&
     (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_2045642706327174705>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMHost.cpp"
                          ,0x1cf,"!HasAnyFlags(RF_ClassDefaultObject)"), bVar12)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  this_00 = GetRigVMExtendedExecuteContext(this);
  local_b0 = (undefined ***)0x0;
  local_c8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`URigVMHost::Execute'::`2'::<lambda_1>,0,0>::_vftable_;
  local_d8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`URigVMHost::Execute'::__l2::<lambda_1>,void,FName_const_&>::Call
  ;
  local_a8 = &this_00->OnExecutionReachedExitCallback;
  local_98._0_8_ = *(undefined8 *)local_a8;
  local_70 = (longlong *)0x0;
  local_c0 = this;
  if (local_98._0_8_ != 0) {
    puVar4 = *(undefined8 **)&(this_00->OnExecutionReachedExitCallback).field_0x28;
    puVar19 = (undefined8 *)&(this_00->OnExecutionReachedExitCallback).field_0x10;
    if (puVar4 != (undefined8 *)0x0) {
      puVar19 = puVar4;
    }
    (**(code **)*puVar19)(puVar19,local_98 + 0x10);
  }
  TFunction<void___cdecl(FName_const_&)>::operator=
            (local_a8,(TFunction<void___cdecl(FName_const_&)> *)local_d8);
  if (local_d8[0] != (code *)0x0) {
    pppuVar20 = &local_c8;
    if (local_b0 != (undefined ***)0x0) {
      pppuVar20 = local_b0;
    }
    (*(code *)(*pppuVar20)[2])();
  }
  this_01 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(this_00);
  fVar2 = __real_322bcc77;
  this_01->DeltaTime = (double)this->DeltaTime;
  this_01->AbsoluteTime = (double)this->AbsoluteTime;
  fVar25 = this->FramesPerSecond;
  if ((this->FramesPerSecond <= fVar2) && (fVar25 = __real_42700000, fVar2 < this->DeltaTime)) {
    fVar25 = __real_3f800000 / this->DeltaTime;
  }
  this_01->FramesPerSecond = (double)fVar25;
  pUVar18 = (USceneComponent *)(**(code **)(this->_padding_ + 0x350))(this);
  FRigVMExecuteContext::SetOwningComponent(this_01,pUVar18);
  if ((!bVar13) || (bVar9)) {
    FRigVMDrawContainer::Reset((FRigVMDrawContainer *)&this->DrawInterface);
  }
  this_01->DrawInterfacePtr = &this->DrawInterface;
  if ((pUVar23 != (UObject *)0x0) && (((uint)this->_padding_ >> 4 & 1) == 0)) {
    FRigVMDrawContainer::operator=
              (&this->DrawContainer,(FRigVMDrawContainer *)&pUVar23[8].field_0x18);
  }
  this_01->DrawContainerPtr = &this->DrawContainer;
  if (this->ExecuteBracket < 1) {
    bVar9 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->ExecutedEvent);
    if (bVar9) {
      this->ExecuteBracket = this->ExecuteBracket + 1;
      TMulticastDelegate<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>::
      Broadcast((TMulticastDelegate<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
                 *)&this->PreExecutedEvent,this,param_1);
      this->ExecuteBracket = this->ExecuteBracket + -1;
    }
    uVar10 = (**(code **)(this->_padding_ + 0x300))(this,param_1);
    if ((!bVar13) || (bVar11)) {
      this->DeltaTime = 0.0;
    }
    bVar13 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                       ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->ExecutedEvent);
    if (bVar13) {
      this->ExecuteBracket = this->ExecuteBracket + 1;
      TMulticastDelegate<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>::
      Broadcast((TMulticastDelegate<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
                 *)&this->ExecutedEvent,this,param_1);
      this->ExecuteBracket = this->ExecuteBracket + -1;
    }
    pFVar5 = this_01->DrawInterfacePtr;
    if (((pFVar5 != (FRigVMDrawInterface *)0x0) &&
        (pFVar6 = this_01->DrawContainerPtr, pFVar6 != (FRigVMDrawContainer *)0x0)) && (bVar11)) {
      puVar22 = &pFVar5->field_0x8;
      if (((TArray<FRigVMDrawInstruction,TSizedDefaultAllocator<32>_> *)puVar22 ==
           &pFVar6->Instructions) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)this != (void*)&Source",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x96e,L""), bVar13)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      iVar3 = (pFVar6->Instructions).ArrayNum;
      if (iVar3 != 0) {
        iVar15 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0xd0,0x10,iVar3,(ForAnyElementType *)puVar22,(int *)&pFVar5->field_0x10,
                            (int *)&pFVar5->field_0x14);
        ConstructItems<FRigVMDrawInstruction,FRigVMDrawInstruction,int>
                  ((void *)(*(longlong *)puVar22 + (longlong)iVar15 * 0xd0),
                   (FRigVMDrawInstruction *)(pFVar6->Instructions).AllocatorInstance.Data,iVar3);
      }
    }
  }
  else {
    if (2 < (byte)LogRigVM._0_1_) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_e8,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRigVM);
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
    }
    uVar10 = 0;
  }
  TFunction<void___cdecl(FName_const_&)>::operator=
            (local_a8,(TFunction<void___cdecl(FName_const_&)> *)local_98);
  if (local_98._0_8_ != 0) {
    plVar21 = (longlong *)(local_98 + 0x10);
    if (local_70 != (longlong *)0x0) {
      plVar21 = local_70;
    }
    (**(code **)(*plVar21 + 0x10))();
  }
  return (bool)uVar10;
}

// ExecuteEvent @ 14a1a50f0

bool __thiscall URigVMHost::ExecuteEvent(URigVMHost *this,FName *param_1)

{
  int iVar1;
  FName FVar2;
  FScriptContainerElement *_Src;
  ForAnyElementType _Src_00;
  int iVar3;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar4;
  char cVar5;
  longlong lVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> local_48;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_38;
  TArray<FName,TSizedDefaultAllocator<32>_> local_30;
  
  cVar5 = (**(code **)(this->_padding_ + 0x308))();
  if (cVar5 != '\0') {
    FVar2 = *param_1;
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,1,0,&local_48.AllocatorInstance,1,&local_48.ArrayMax);
    *(FName *)local_48.AllocatorInstance.Data = FVar2;
    local_38 = &this->EventQueue;
    local_30.ArrayNum = (this->EventQueue).ArrayNum;
    lVar6 = (longlong)local_30.ArrayNum;
    _Src = (local_38->AllocatorInstance).Data;
    local_30.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_30.ArrayNum == 0) {
      local_30.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,local_30.ArrayNum,0,&local_30.AllocatorInstance,local_30.ArrayNum,
                 &local_30.ArrayMax);
      memcpy(local_30.AllocatorInstance.Data,_Src,lVar6 << 3);
    }
    pTVar4 = local_38;
    iVar3 = local_48.ArrayNum;
    _Src_00.Data = local_48.AllocatorInstance.Data;
    if (local_38 != &local_48) {
      lVar6 = (longlong)local_48.ArrayNum;
      iVar1 = local_38->ArrayMax;
      local_38->ArrayNum = local_48.ArrayNum;
      if ((local_48.ArrayNum == 0) && (iVar1 == 0)) {
        local_38->ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,local_48.ArrayNum,iVar1,&local_38->AllocatorInstance,local_48.ArrayNum,
                   &local_38->ArrayMax);
        if (iVar3 != 0) {
          memcpy((pTVar4->AllocatorInstance).Data,_Src_00.Data,lVar6 << 3);
        }
      }
    }
    if ((FName *)local_48.AllocatorInstance.Data != (FName *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    (**(code **)(this->_padding_ + 0x2d0))(this);
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=(local_38,&local_30);
    if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.AllocatorInstance.Data);
    }
    return true;
  }
  return false;
}

// Execute_Internal @ 14a1a52b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall URigVMHost::Execute_Internal(URigVMHost *this,FName *param_1)

{
  FRigVMExtendedExecuteContext *pFVar1;
  URigVM *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  FName local_res8;
  FName local_res18 [2];
  FString local_38;
  FString local_28;
  
  if ((this->VM).field0_0x0.DebugPtr != (URigVM *)0x0) {
    if ((this->RigVMExtendedExecuteContext == (FRigVMExtendedExecuteContext *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("RigVMExtendedExecuteContext != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMHost.h"
                           ,0x14c,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pFVar1 = this->RigVMExtendedExecuteContext;
    cVar6 = (**(code **)(((this->VM).field0_0x0.DebugPtr)->_padding_ + 0x2c0))();
    if (cVar6 == '\0') {
      bVar4 = URigVM::IsContextValidForExecution((this->VM).field0_0x0.DebugPtr,pFVar1);
      if (((bVar4) && (bVar4 = UObjectBase::IsValidLowLevel((UObjectBase *)this), bVar4)) &&
         (bVar4 = UObjectBase::IsValidLowLevel((UObjectBase *)(this->VM).field0_0x0.DebugPtr), bVar4
         )) goto LAB_14a1a53ae;
      if ((byte)LogRigVM._0_1_ < 3) {
        return false;
      }
      local_res18[0] = *(FName *)(this->_padding_ + 0x18);
      ::FName::ToString(local_res18,&local_28);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRigVM);
      local_38.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    }
    else {
      bVar4 = UObjectBase::IsValidLowLevel((UObjectBase *)this);
      if ((bVar4) &&
         (bVar4 = UObjectBase::IsValidLowLevel((UObjectBase *)(this->VM).field0_0x0.DebugPtr), bVar4
         )) {
LAB_14a1a53ae:
        pUVar2 = (this->VM).field0_0x0.DebugPtr;
        cVar6 = (**(code **)(pUVar2->_padding_ + 0x348))(pUVar2,pFVar1,param_1);
        return cVar6 != '\0';
      }
      if ((byte)LogRigVM._0_1_ < 3) {
        return false;
      }
      local_res8 = *(FName *)(this->_padding_ + 0x18);
      ::FName::ToString(&local_res8,&local_38);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRigVM);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// FindRigVMHosts @ 14a1aa250

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TArray<URigVMHost_*,TSizedDefaultAllocator<32>_> * __cdecl
URigVMHost::FindRigVMHosts
          (TArray<URigVMHost_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,UObject *param_1
          ,TSubclassOf<URigVMHost> param_2)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  EInternalObjectFlags EVar5;
  uint uVar6;
  int iVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  TArray<URigVMHost_*,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong lVar11;
  UObjectBaseUtility *local_48;
  TObjectIterator<URigVMHost> local_40;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (param_1 != (UObject *)0x0) {
    pUVar8 = Z_Construct_UClass_AActor_NoRegister();
    iVar7 = (int)pUVar8->_padding_;
    if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar7) ||
       (pUVar9 = param_1,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar7 * 8) !=
       &pUVar8->_padding_)) {
      pUVar8 = Z_Construct_UClass_AActor_NoRegister();
      pUVar9 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar8);
    }
    local_40.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_40.ObjectArray.ArrayNum = 0;
    local_40.ObjectArray.ArrayMax = 0;
    local_40.Index = 0xffffffff;
    EVar5 = UE::GetAsyncLoadingInternalFlagsExclusion();
    pUVar8 = StaticClass();
    GetObjectsOfClass(pUVar8,&local_40.ObjectArray,true,RF_ClassDefaultObject,
                      EVar5 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
    TObjectIterator<URigVMHost>::Advance(&local_40);
    while ((lVar11 = (longlong)local_40.Index, -1 < local_40.Index &&
           (local_40.Index < local_40.ObjectArray.ArrayNum))) {
      uVar6 = 0;
      if (local_40.Index < local_40.ObjectArray.ArrayNum) {
        uVar6 = (uint)~local_40.Index >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar10 = (TArray<URigVMHost_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar10;
      }
      local_48 = *(UObjectBaseUtility **)(local_40.ObjectArray.AllocatorInstance.Data + lVar11 * 8);
      if (local_48 != (UObjectBaseUtility *)0x0) {
        lVar11 = *(longlong *)param_2.Class.field0_0x0;
        lVar1 = *(longlong *)&local_48->field_0x10;
        if ((lVar11 != 0) && (pUVar8 = StaticClass(), pUVar8 != (UClass *)0x0)) {
          iVar7 = (int)pUVar8->_padding_;
          if ((*(int *)(lVar11 + 0x38) < iVar7) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar7 * 8) !=
              &pUVar8->_padding_)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if ((bVar4) && (lVar11 = *(longlong *)param_2.Class.field0_0x0, lVar11 != 0)) {
            if ((lVar1 != 0) && (pUVar8 = StaticClass(), pUVar8 != (UClass *)0x0)) {
              iVar7 = (int)pUVar8->_padding_;
              if ((*(int *)(lVar11 + 0x38) < iVar7) ||
                 ((longlong *)*(undefined1 **)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar7 * 8)
                  != &pUVar8->_padding_)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              if ((bVar4) && (lVar11 = *(longlong *)param_2.Class.field0_0x0, lVar11 != 0)) {
                if ((*(int *)(lVar1 + 0x38) < *(int *)(lVar11 + 0x38)) ||
                   (*(longlong *)
                     (*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) !=
                    lVar11 + 0x30)) {
                  bVar4 = false;
                }
                else {
                  bVar4 = true;
                }
                if (bVar4) goto LAB_14a1aa446;
              }
            }
            goto LAB_14a1aa509;
          }
        }
LAB_14a1aa446:
        bVar4 = UObjectBaseUtility::IsInOuter(local_48,param_1);
        if ((bVar4) ||
           ((pUVar9 != (UObject *)0x0 &&
            (bVar4 = UObjectBaseUtility::IsInOuter(local_48,pUVar9), bVar4)))) {
          pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
          if ((pFVar2 <= (FScriptContainerElement *)&local_48) &&
             (((FScriptContainerElement *)&local_48 <
               pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8 &&
              (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)))) {
            pcVar3 = (code *)swi(3);
            pTVar10 = (TArray<URigVMHost_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar10;
          }
          iVar7 = __return_storage_ptr__->ArrayNum;
          if (iVar7 == __return_storage_ptr__->ArrayMax) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar7 + 1;
          *(UObjectBaseUtility **)
           ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_48;
        }
      }
LAB_14a1aa509:
      TObjectIterator<URigVMHost>::Advance(&local_40);
    }
    if (local_40.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.ObjectArray.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GenerateUserDefinedDependenciesData @ 14a1aa8a0

void __thiscall
URigVMHost::GenerateUserDefinedDependenciesData
          (URigVMHost *this,FRigVMExtendedExecuteContext *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  UEnum *pUVar5;
  UClass *pUVar6;
  FGuid *this_00;
  ForAnyElementType FVar7;
  ForAnyElementType FVar8;
  undefined1 local_res8 [8];
  TPairInitializer<FString_const_&,FSoftObjectPath_&&> local_res18;
  TArray<FRigVMMemoryStorageStruct_const_*,TSizedDefaultAllocator<32>_> local_118;
  FString local_108;
  TArray<UObject_const_*,TSizedDefaultAllocator<32>_> local_f8;
  FSoftObjectPath local_e8;
  FSoftObjectPath local_c8;
  TSet<TTuple<FString,FSoftObjectPath>,TDefaultMapHashableKeyFuncs<FString,FSoftObjectPath,0>,FDefaultSetAllocator>
  *local_a8;
  FString local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  FString *local_80;
  FSoftObjectPath *local_78;
  FString *local_70;
  FSoftObjectPath *local_68;
  FString local_60;
  undefined1 local_50 [24];
  
  if ((this->VM).field0_0x0.DebugPtr != (URigVM *)0x0) {
    local_90 = (**(code **)(this->_padding_ + 0x338))(this,1);
    uStack_88 = (**(code **)(this->_padding_ + 0x338))(this,0);
    local_118.ArrayNum = 2;
    local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,2,0,&local_118.AllocatorInstance,2,&local_118.ArrayMax);
    *(undefined8 *)local_118.AllocatorInstance.Data = local_90;
    *(undefined8 *)(local_118.AllocatorInstance.Data + 8) = uStack_88;
    GetUserDefinedDependencies(this,&local_f8,&local_118);
    TSet<TTuple<FString,FSoftObjectPath>,TDefaultMapHashableKeyFuncs<FString,FSoftObjectPath,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FString,FSoftObjectPath>,TDefaultMapHashableKeyFuncs<FString,FSoftObjectPath,0>,FDefaultSetAllocator>
             *)&this->UserDefinedStructGuidToPathName);
    local_a8 = (TSet<TTuple<FString,FSoftObjectPath>,TDefaultMapHashableKeyFuncs<FString,FSoftObjectPath,0>,FDefaultSetAllocator>
                *)&this->UserDefinedEnumToPathName;
    TSet<TTuple<FString,FSoftObjectPath>,TDefaultMapHashableKeyFuncs<FString,FSoftObjectPath,0>,FDefaultSetAllocator>
    ::Reset(local_a8);
    if (*(int *)&(this->UserDefinedTypesInUse).Elements.field_0x8 !=
        *(int *)&(this->UserDefinedTypesInUse).Elements.field_0x34) {
      TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
      UnhashElements(&this->UserDefinedTypesInUse);
      iVar3 = *(int *)&(this->UserDefinedTypesInUse).Elements.field_0xc;
      *(undefined4 *)&(this->UserDefinedTypesInUse).Elements.field_0x8 = 0;
      if (iVar3 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)&this->UserDefinedTypesInUse,0,
                   (int *)&(this->UserDefinedTypesInUse).Elements.field_0xc);
      }
      *(undefined4 *)&(this->UserDefinedTypesInUse).Elements.field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->UserDefinedTypesInUse).Elements.field_0x34 = 0;
      *(undefined4 *)&(this->UserDefinedTypesInUse).Elements.field_0x28 = 0;
    }
    iVar3 = local_f8.ArrayNum;
    pFVar1 = local_f8.AllocatorInstance.Data + (longlong)local_f8.ArrayNum * 8;
    plVar2 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    FVar8.Data = local_f8.AllocatorInstance.Data;
    while( true ) {
      if (local_f8.ArrayNum != iVar3) {
        `TCheckedPointerIterator<UObject_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (FVar8.Data == pFVar1) break;
      pUVar5 = *(UEnum **)FVar8.Data;
      if (pUVar5 != (UEnum *)0x0) {
        pUVar6 = Z_Construct_UClass_UUserDefinedStruct_NoRegister();
        iVar4 = (int)pUVar6->_padding_;
        if ((*(int *)(pUVar5->_padding_ + 0x38) < iVar4) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar4 * 8) !=
            &pUVar6->_padding_)) {
          if (pUVar5 != (UEnum *)0x0) {
            pUVar6 = Z_Construct_UClass_UUserDefinedEnum_NoRegister();
            iVar4 = (int)pUVar6->_padding_;
            if ((iVar4 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
                &pUVar6->_padding_)) {
              RigVMTypeUtils::CPPTypeFromEnum(&local_60,pUVar5);
              local_c8.AssetPath.PackageName.ComparisonIndex.Value = 0;
              local_c8.AssetPath.PackageName.Number = 0;
              local_c8.AssetPath.AssetName.ComparisonIndex.Value = 0;
              local_c8.AssetPath.AssetName.Number = 0;
              local_c8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_c8.SubPathString.Data.ArrayNum = 0;
              local_c8.SubPathString.Data.ArrayMax = 0;
              FSoftObjectPath::SetPath(&local_c8,(UObject *)pUVar5);
              local_70 = &local_60;
              local_68 = &local_c8;
              TSet<TTuple<FString,FSoftObjectPath>,TDefaultMapHashableKeyFuncs<FString,FSoftObjectPath,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<FString_const_&,FSoftObjectPath_&&>_>
                        (local_a8,(TPairInitializer<FString_const_&,FSoftObjectPath_&&> *)
                                  &local_res18.Value,(bool *)&local_70);
              FVar7.Data = local_60.Data.AllocatorInstance.Data;
              if (local_c8.SubPathString.Data.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_c8.SubPathString.Data.AllocatorInstance.Data);
                FVar7.Data = local_60.Data.AllocatorInstance.Data;
              }
              goto LAB_14a1aabc0;
            }
          }
        }
        else {
          pUVar6 = Z_Construct_UClass_UUserDefinedStruct_NoRegister();
          iVar4 = (int)pUVar6->_padding_;
          if ((*(int *)(pUVar5->_padding_ + 0x38) < iVar4) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar4 * 8) !=
              &pUVar6->_padding_)) {
            (**(code **)(pUVar5->_padding_ + 0x388))(pUVar5,&local_a0,0);
          }
          else {
            this_00 = (FGuid *)(**(code **)(pUVar5->_padding_ + 0x380))(pUVar5,local_50);
            if ((*(int *)(*plVar2 + 0x9d4c) <
                 `class_FString___cdecl_RigVMTypeUtils::GetUniqueStructTypeName(FGuid_const&___ptr64)'
                 ::__l2::_thread_safe_static_guard_0__) &&
               (_Init_thread_header(&`class_FString___cdecl_RigVMTypeUtils::GetUniqueStructTypeName(FGuid_const&___ptr64)'
                                     ::__l2::_thread_safe_static_guard_0__),
               `class_FString___cdecl_RigVMTypeUtils::GetUniqueStructTypeName(FGuid_const&___ptr64)'
               ::__l2::_thread_safe_static_guard_0__ == -1)) {
              ::FString::FString(&`class_FString___cdecl_RigVMTypeUtils::GetUniqueStructTypeName(FGuid_const&___ptr64)'
                                  ::__l2::UserDefinedStructPrefix,L"FUserDefinedStruct_");
              atexit(`RigVMTypeUtils::GetUniqueStructTypeName'::__l2::
                     _dynamic_atexit_destructor_for__UserDefinedStructPrefix__);
              _Init_thread_footer(&`class_FString___cdecl_RigVMTypeUtils::GetUniqueStructTypeName(FGuid_const&___ptr64)'
                                   ::__l2::_thread_safe_static_guard_0__);
            }
            local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_108.Data.ArrayNum = 0;
            local_108.Data.ArrayMax = 0;
            FGuid::AppendString(this_00,&local_108,Digits);
            ::FString::ConcatFF(&local_a0,
                                &`class_FString___cdecl_RigVMTypeUtils::GetUniqueStructTypeName(FGuid_const&___ptr64)'
                                 ::__l2::UserDefinedStructPrefix,&local_108);
            if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_108.Data.AllocatorInstance.Data);
            }
          }
          local_e8.AssetPath.PackageName.ComparisonIndex.Value = 0;
          local_e8.AssetPath.PackageName.Number = 0;
          local_e8.AssetPath.AssetName.ComparisonIndex.Value = 0;
          local_e8.AssetPath.AssetName.Number = 0;
          local_e8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_e8.SubPathString.Data.ArrayNum = 0;
          local_e8.SubPathString.Data.ArrayMax = 0;
          FSoftObjectPath::SetPath(&local_e8,(UObject *)pUVar5);
          local_80 = &local_a0;
          local_78 = &local_e8;
          TSet<TTuple<FString,FSoftObjectPath>,TDefaultMapHashableKeyFuncs<FString,FSoftObjectPath,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FString_const_&,FSoftObjectPath_&&>_>
                    ((TSet<TTuple<FString,FSoftObjectPath>,TDefaultMapHashableKeyFuncs<FString,FSoftObjectPath,0>,FDefaultSetAllocator>
                      *)&this->UserDefinedStructGuidToPathName,&local_res18,(bool *)&local_80);
          FVar7.Data = local_a0.Data.AllocatorInstance.Data;
          if (local_e8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_e8.SubPathString.Data.AllocatorInstance.Data);
            FVar7.Data = local_a0.Data.AllocatorInstance.Data;
          }
LAB_14a1aabc0:
          if (FVar7.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar7.Data);
          }
        }
      }
      FVar8.Data = FVar8.Data + 8;
    }
    if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.AllocatorInstance.Data);
    }
  }
  return;
}

// GetAssetUserDataArray @ 14a1ab0f0

TArray<UAssetUserData_*,TSizedDefaultAllocator<32>_> * __thiscall
URigVMHost::GetAssetUserDataArray(URigVMHost *this)

{
  return (TArray<UAssetUserData_*,TSizedDefaultAllocator<32>_> *)&(this->ExecutedEvent).field_0x18;
}

// GetAssetUserDataOfClass @ 14a1ab100

UAssetUserData * __thiscall
URigVMHost::GetAssetUserDataOfClass(URigVMHost *this,TSubclassOf<UAssetUserData> param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  longlong *plVar4;
  UAssetUserData *pUVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  
  plVar4 = (longlong *)(**(code **)(this->_padding_ + 0x30))();
  uVar8 = 0;
  iVar9 = (int)plVar4[1];
  if (0 < iVar9) {
    lVar10 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar8 < iVar9) {
        uVar3 = ~uVar8 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pUVar5 = (UAssetUserData *)(*pcVar1)();
        return pUVar5;
      }
      pUVar5 = *(UAssetUserData **)(lVar10 + *plVar4);
      if (pUVar5 != (UAssetUserData *)0x0) {
        pUVar7 = *(UObject **)param_1.Class.field0_0x0;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar7 != (UObject *)0x0) goto LAB_14a1ab1b6;
LAB_14a1ab1e4:
          pUVar7 = (UObject *)0x0;
        }
        else {
          if (pUVar7 == (UObject *)0x0) goto LAB_14a1ab1e4;
          UE::GC::MarkAsReachable(pUVar7);
LAB_14a1ab1b6:
          pUVar6 = Z_Construct_UClass_UAssetUserData_NoRegister();
          if (pUVar6 == (UClass *)0x0) goto LAB_14a1ab1e4;
          iVar9 = (int)pUVar6->_padding_;
          if ((*(int *)&pUVar7[1].field_0x10 < iVar9) ||
             ((longlong *)*(undefined1 **)(*(longlong *)&pUVar7[1].field_0x8 + (longlong)iVar9 * 8)
              != &pUVar6->_padding_)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) goto LAB_14a1ab1e4;
        }
        if ((*(int *)&pUVar7[1].field_0x10 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
           (*(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) +
             (longlong)*(int *)&pUVar7[1].field_0x10 * 8) == &pUVar7[1].field_0x8)) {
          return pUVar5;
        }
      }
      iVar9 = (int)plVar4[1];
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 8;
    } while ((int)uVar8 < iVar9);
  }
  return (UAssetUserData *)0x0;
}

// GetCurrentFramesPerSecond @ 14a1ab5b0

float __thiscall URigVMHost::GetCurrentFramesPerSecond(URigVMHost *this)

{
  float fVar1;
  
  fVar1 = this->FramesPerSecond;
  if ((this->FramesPerSecond <= __real_322bcc77) &&
     (fVar1 = __real_42700000, __real_322bcc77 < this->DeltaTime)) {
    return __real_3f800000 / this->DeltaTime;
  }
  return fVar1;
}

// GetDefaultMemoryByType @ 14a1ab5f0

FRigVMMemoryStorageStruct * __thiscall
URigVMHost::GetDefaultMemoryByType(URigVMHost *this,ERigVMMemoryType param_1)

{
  URigVM *pUVar1;
  code *pcVar2;
  bool bVar3;
  FRigVMMemoryStorageStruct *pFVar4;
  
  if ((this->VM).field0_0x0.DebugPtr == (URigVM *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("VM",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMHost.cpp"
                       ,0x2f7,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FRigVMMemoryStorageStruct *)(*pcVar2)();
      return pFVar4;
    }
  }
  pUVar1 = (this->VM).field0_0x0.DebugPtr;
                    /* WARNING: Could not recover jumptable at 0x00014a1ab642. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar4 = (FRigVMMemoryStorageStruct *)(**(code **)(pUVar1->_padding_ + 0x390))(pUVar1,param_1);
  return pFVar4;
}

// GetExtendedExecuteContext @ 14a1ab8b0

FRigVMExtendedExecuteContext * __thiscall URigVMHost::GetExtendedExecuteContext(URigVMHost *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_struct_FRigVMExtendedExecuteContext&___ptr64___cdecl_URigVMHost::GetExtendedExecuteContext(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_struct_FRigVMExtendedExecuteContext&___ptr64___cdecl_URigVMHost::GetExtendedExecuteContext(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_struct_FRigVMExtendedExecuteContext&___ptr64___cdecl_URigVMHost::GetExtendedExecuteContext(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FRigVMExtendedExecuteContext::FRigVMExtendedExecuteContext
                (&`public:_virtual_struct_FRigVMExtendedExecuteContext&___ptr64___cdecl_URigVMHost::GetExtendedExecuteContext(void)___ptr64'
                  ::__l2::DummyContext);
      atexit(`URigVMHost::GetExtendedExecuteContext'::__l2::
             _dynamic_atexit_destructor_for__DummyContext__);
      _Init_thread_footer(&`public:_virtual_struct_FRigVMExtendedExecuteContext&___ptr64___cdecl_URigVMHost::GetExtendedExecuteContext(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_virtual_struct_FRigVMExtendedExecuteContext&___ptr64___cdecl_URigVMHost::GetExtendedExecuteContext(void)___ptr64'
              ::__l2::DummyContext;
    }
  }
  return &`public:_virtual_struct_FRigVMExtendedExecuteContext&___ptr64___cdecl_URigVMHost::GetExtendedExecuteContext(void)___ptr64'
          ::__l2::DummyContext;
}

// GetExtendedExecuteContext @ 14a1ab940

FRigVMExtendedExecuteContext * __thiscall URigVMHost::GetExtendedExecuteContext(URigVMHost *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_struct_FRigVMExtendedExecuteContext_const&___ptr64___cdecl_URigVMHost::GetExtendedExecuteContext(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_struct_FRigVMExtendedExecuteContext_const&___ptr64___cdecl_URigVMHost::GetExtendedExecuteContext(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_struct_FRigVMExtendedExecuteContext_const&___ptr64___cdecl_URigVMHost::GetExtendedExecuteContext(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FRigVMExtendedExecuteContext::FRigVMExtendedExecuteContext
                (&`public:_virtual_struct_FRigVMExtendedExecuteContext_const&___ptr64___cdecl_URigVMHost::GetExtendedExecuteContext(void)const___ptr64'
                  ::__l2::DummyContext);
      atexit(`URigVMHost::GetExtendedExecuteContext'::__l2::
             _dynamic_atexit_destructor_for__DummyContext__);
      _Init_thread_footer(&`public:_virtual_struct_FRigVMExtendedExecuteContext_const&___ptr64___cdecl_URigVMHost::GetExtendedExecuteContext(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_virtual_struct_FRigVMExtendedExecuteContext_const&___ptr64___cdecl_URigVMHost::GetExtendedExecuteContext(void)const___ptr64'
              ::__l2::DummyContext;
    }
  }
  return &`public:_virtual_struct_FRigVMExtendedExecuteContext_const&___ptr64___cdecl_URigVMHost::GetExtendedExecuteContext(void)const___ptr64'
          ::__l2::DummyContext;
}

// GetExternalVariables @ 14a1ab9d0

TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> * __thiscall
URigVMHost::GetExternalVariables
          (URigVMHost *this,
          TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (**(code **)(this->_padding_ + 0x378))(this,__return_storage_ptr__,1);
  return __return_storage_ptr__;
}

// GetExternalVariablesImpl @ 14a1aba00

/* WARNING: Removing unreachable block (ram,0x00014a1abb10) */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> * __thiscall
URigVMHost::GetExternalVariablesImpl
          (URigVMHost *this,
          TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          bool param_1)

{
  FName *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FName this_00;
  bool bVar4;
  int iVar5;
  TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> *pTVar6;
  longlong lVar7;
  FName FVar8;
  FName FVar9;
  FName local_res20;
  FName local_b8;
  FName FStack_b0;
  FName local_a8;
  FName FStack_a0;
  undefined8 local_98;
  longlong lStack_90;
  TFieldIterator<FProperty> local_88;
  FString local_70;
  FString local_60;
  void *local_48 [2];
  
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_88.Struct = (UStruct *)this->_padding_;
  if (local_88.Struct == (UStruct *)0x0) {
    local_88.Field = (FField *)0x0;
  }
  else {
    local_88.Field = (local_88.Struct)->ChildProperties;
  }
  local_88.InterfaceIndex = -1;
  local_88.bIncludeSuper = true;
  local_88.bIncludeDeprecated = true;
  local_88.bIncludeInterface = false;
  TFieldIterator<FProperty>::IterateToNext(&local_88);
  this_00 = (FName)local_88.Field;
  do {
    if (this_00 == (FName)0x0) {
      return __return_storage_ptr__;
    }
    local_88.Field = (FField *)this_00;
    bVar4 = FField::IsNative((FField *)this_00);
    if (!bVar4) {
      if ((this_00 == (FName)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InProperty",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMExternalVariable.h"
                             ,0x62,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar6;
      }
      local_98 = 0;
      local_b8.ComparisonIndex.Value = 0;
      local_b8.Number = 0;
      FStack_b0.ComparisonIndex.Value = 0;
      FStack_b0.Number = 0;
      local_a8.ComparisonIndex.Value = 0;
      local_a8.Number = 0;
      FStack_a0.ComparisonIndex.Value = 0;
      FStack_a0.Number = 0;
      lStack_90 = 0;
      bVar4 = IsThisNotNull((void *)this_00,"FField::GetFName");
      local_b8 = FVar9;
      if (bVar4) {
        local_b8 = *(FName *)((longlong)this_00 + 0x20);
      }
      local_98 = CONCAT62(local_98._2_6_,
                          CONCAT11(~(byte)((uint)*(undefined4 *)((longlong)this_00 + 0x38) >> 0x10),
                                   (undefined1)local_98)) & 0xffffffffffff01ff;
      local_98 = CONCAT53(local_98._3_5_,
                          CONCAT12(*(byte *)((longlong)this_00 + 0x38) >> 4,(undefined2)local_98)) &
                 0xffffffffff01ffff;
      FStack_b0 = this_00;
      if ((*(int *)((longlong)this_00 + 0x30) < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar6;
      }
      lStack_90 = (longlong)&this->_padding_ + (longlong)*(int *)((longlong)this_00 + 0x44);
      FVar8 = this_00;
      if (((*(uint *)(*(longlong *)((longlong)this_00 + 8) + 0x18) >> 0x15 & 1) != 0) &&
         (this_00 != (FName)0x0)) {
        local_98 = CONCAT71(local_98._1_7_,1);
        FVar8 = *(FName *)((longlong)this_00 + 0x78);
      }
      local_98 = CONCAT44(*(int *)((longlong)FVar8 + 0x34) * *(int *)((longlong)FVar8 + 0x30),
                          (undefined4)local_98);
      RigVMPropertyUtils::GetTypeFromProperty((FProperty *)FVar8,&local_a8,(UObject **)&FStack_a0);
      bVar4 = ::FName::IsWithinBounds(local_b8.ComparisonIndex);
      if ((bVar4) && (local_b8 != (FName)0x0)) {
        bVar4 = ::FName::IsWithinBounds(local_a8.ComparisonIndex);
        if ((bVar4) && ((local_a8 != (FName)0x0 && (lStack_90 != 0)))) {
          pFVar1 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
          if ((pFVar1 <= &local_b8) &&
             ((&local_b8 < pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 6 &&
              (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)))) {
            pcVar3 = (code *)swi(3);
            pTVar6 = (TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar6;
          }
          iVar5 = __return_storage_ptr__->ArrayNum;
          if (iVar5 == __return_storage_ptr__->ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x830,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          lVar7 = (longlong)iVar5;
          __return_storage_ptr__->ArrayNum = iVar5 + 1;
          pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
          *(FName *)(pFVar2 + lVar7 * 0x30) = local_b8;
          ((FName *)(pFVar2 + lVar7 * 0x30))[1] = FStack_b0;
          *(FName *)(pFVar2 + lVar7 * 0x30 + 0x10) = local_a8;
          ((FName *)(pFVar2 + lVar7 * 0x30 + 0x10))[1] = FStack_a0;
          *(ulonglong *)(pFVar2 + lVar7 * 0x30 + 0x20) = local_98;
          *(longlong *)(pFVar2 + lVar7 * 0x30 + 0x20 + 8) = lStack_90;
          goto LAB_14a1abd92;
        }
      }
      if (2 < (byte)LogRigVM._0_1_) {
        (**(code **)(*(longlong *)this_00 + 0x68))(this_00,local_48,0,0);
        bVar4 = IsThisNotNull((void *)this_00,"FField::GetName");
        if (bVar4) {
          ::FName::ToString((FName *)((longlong)this_00 + 0x20),&local_70);
        }
        else {
          ::FString::FString(&local_70,L"None");
        }
        local_res20 = *(FName *)(this->_padding_ + 0x18);
        ::FName::ToString(&local_res20,&local_60);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRigVM);
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
        if (local_48[0] != (void *)0x0) {
          FMemory::Free(local_48[0]);
        }
      }
    }
LAB_14a1abd92:
    local_88.Field = *(FField **)((longlong)this_00 + 0x18);
    TFieldIterator<FProperty>::IterateToNext(&local_88);
    this_00 = (FName)local_88.Field;
  } while( true );
}

// GetMemoryByType @ 14a1abde0

FRigVMMemoryStorageStruct * __thiscall
URigVMHost::GetMemoryByType(URigVMHost *this,ERigVMMemoryType param_1)

{
  URigVM *pUVar1;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar2;
  FRigVMMemoryStorageStruct *pFVar3;
  
  if ((this->VM).field0_0x0.DebugPtr == (URigVM *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("VM",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMHost.cpp"
                       ,0x2fd,L"");
    if (bVar2) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      pFVar3 = (FRigVMMemoryStorageStruct *)(*UNRECOVERED_JUMPTABLE)();
      return pFVar3;
    }
  }
  pUVar1 = (this->VM).field0_0x0.DebugPtr;
  UNRECOVERED_JUMPTABLE = *(code **)(pUVar1->_padding_ + 0x370);
  if (this->RigVMExtendedExecuteContext == (FRigVMExtendedExecuteContext *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("RigVMExtendedExecuteContext != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMHost.h"
                       ,0x14c,L"");
    if (bVar2) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      pFVar3 = (FRigVMMemoryStorageStruct *)(*UNRECOVERED_JUMPTABLE)();
      return pFVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014a1abe8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar3 = (FRigVMMemoryStorageStruct *)
           (*UNRECOVERED_JUMPTABLE)(pUVar1,this->RigVMExtendedExecuteContext,param_1);
  return pFVar3;
}

// GetMemoryByType @ 14a1abea0

FRigVMMemoryStorageStruct * __thiscall
URigVMHost::GetMemoryByType(URigVMHost *this,ERigVMMemoryType param_1)

{
  URigVM *pUVar1;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar2;
  FRigVMMemoryStorageStruct *pFVar3;
  
  if ((this->VM).field0_0x0.DebugPtr == (URigVM *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("VM",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMHost.cpp"
                       ,0x303,L"");
    if (bVar2) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      pFVar3 = (FRigVMMemoryStorageStruct *)(*UNRECOVERED_JUMPTABLE)();
      return pFVar3;
    }
  }
  pUVar1 = (this->VM).field0_0x0.DebugPtr;
  UNRECOVERED_JUMPTABLE = *(code **)(pUVar1->_padding_ + 0x368);
  if (this->RigVMExtendedExecuteContext == (FRigVMExtendedExecuteContext *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("RigVMExtendedExecuteContext != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMHost.h"
                       ,0x151,L"");
    if (bVar2) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      pFVar3 = (FRigVMMemoryStorageStruct *)(*UNRECOVERED_JUMPTABLE)();
      return pFVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014a1abf4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar3 = (FRigVMMemoryStorageStruct *)
           (*UNRECOVERED_JUMPTABLE)(pUVar1,this->RigVMExtendedExecuteContext,param_1);
  return pFVar3;
}

// GetName @ 14a1abf60

FString * __thiscall URigVMHost::GetName(URigVMHost *this,FString *__return_storage_ptr__)

{
  FName local_res8 [4];
  
  local_res8[0] = *(FName *)(this->_padding_ + 0x18);
  ::FName::ToString(local_res8,__return_storage_ptr__);
  ::FString::RemoveFromEnd(__return_storage_ptr__,L"_C",2,IgnoreCase);
  return __return_storage_ptr__;
}

// GetOwningSceneComponent @ 14a1abfb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

USceneComponent * __thiscall URigVMHost::GetOwningSceneComponent(URigVMHost *this)

{
  UClass *pUVar1;
  USceneComponent *pUVar2;
  
  pUVar1 = Z_Construct_UClass_USceneComponent_NoRegister();
  pUVar2 = (USceneComponent *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
  return pUVar2;
}

// GetPrivateStaticClass @ 14a1ac0a0

UClass * __cdecl URigVMHost::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URigVMHost.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/RigVM",L"RigVMHost",&Z_Registration_Info_UClass_URigVMHost.InnerSingleton,
               StaticRegisterNativesURigVMHost,0x290,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None
               ,L"Engine",InternalConstructor<URigVMHost>,InternalVTableHelperCtorCaller<URigVMHost>
               ,local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URigVMHost.InnerSingleton;
}

// GetPublicContextStruct @ 14a1ac2e0

UScriptStruct * __thiscall URigVMHost::GetPublicContextStruct(URigVMHost *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMExecuteContext,(UObject *)pUVar1,
                         L"RigVMExecuteContext");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton;
}

// GetPublicVariableByName @ 14a1ac2f0

FRigVMExternalVariable * __thiscall
URigVMHost::GetPublicVariableByName
          (URigVMHost *this,FRigVMExternalVariable *__return_storage_ptr__,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  FProperty *this_00;
  longlong lVar3;
  FRigVMExternalVariable *pFVar4;
  
  this_00 = UStruct::FindPropertyByName((UStruct *)this->_padding_,*param_1);
  if (((this_00 == (FProperty *)0x0) || (bVar2 = FField::IsNative((FField *)this_00), bVar2)) ||
     (((uint)(int)this_00->PropertyFlags >> 0x10 & 1) != 0)) {
    __return_storage_ptr__->_padding_ = 0;
    __return_storage_ptr__->_padding_ = 0;
    __return_storage_ptr__->_padding_ = 0;
    __return_storage_ptr__->_padding_ = 0;
    __return_storage_ptr__->_padding_ = 0;
    __return_storage_ptr__->Memory = (uchar *)0x0;
    return __return_storage_ptr__;
  }
  lVar3 = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->Memory = (uchar *)0x0;
  bVar2 = IsThisNotNull(this_00,"FField::GetFName");
  if (bVar2) {
    lVar3 = this_00->_padding_;
  }
  __return_storage_ptr__->_padding_ = lVar3;
  __return_storage_ptr__->_padding_ = (longlong)this_00;
  *(byte *)((longlong)&__return_storage_ptr__->_padding_ + 1) =
       ~(byte)((uint)(int)this_00->PropertyFlags >> 0x10) & 1;
  *(byte *)((longlong)&__return_storage_ptr__->_padding_ + 2) =
       (byte)(char)this_00->PropertyFlags >> 4 & 1;
  if ((this_00->ArrayDim < 1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar2))
  {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FRigVMExternalVariable *)(*pcVar1)();
    return pFVar4;
  }
  __return_storage_ptr__->Memory =
       (uchar *)((longlong)&this->_padding_ + (longlong)this_00->Offset_Internal);
  if ((*(uint *)(this_00->_padding_ + 0x18) >> 0x15 & 1) != 0) {
    *(undefined1 *)&__return_storage_ptr__->_padding_ = 1;
    this_00 = (FProperty *)this_00[1]._padding_;
  }
  *(int *)((longlong)&__return_storage_ptr__->_padding_ + 4) =
       this_00->ElementSize * this_00->ArrayDim;
  RigVMPropertyUtils::GetTypeFromProperty
            (this_00,(FName *)&__return_storage_ptr__->_padding_,
             (UObject **)&__return_storage_ptr__->_padding_);
  return __return_storage_ptr__;
}

// GetPublicVariables @ 14a1ac460

TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> * __thiscall
URigVMHost::GetPublicVariables
          (URigVMHost *this,
          TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> *pTVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *local_18;
  int local_10;
  
  (**(code **)(this->_padding_ + 0x378))(this,&local_18,1);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar9 = local_18 + (longlong)local_10 * 0x30;
  pFVar8 = local_18;
  do {
    if (pFVar8 == pFVar9) {
      if (local_18 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18);
      }
      return __return_storage_ptr__;
    }
    if (pFVar8[0x21] != (FScriptContainerElement)0x0) {
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar1 <= pFVar8) &&
          (pFVar8 < pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 0x30)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar6;
      }
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == __return_storage_ptr__->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      lVar7 = (longlong)iVar5;
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      uVar3 = *(undefined8 *)(pFVar8 + 8);
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      *(undefined8 *)(pFVar1 + lVar7 * 0x30) = *(undefined8 *)pFVar8;
      *(undefined8 *)(pFVar1 + lVar7 * 0x30 + 8) = uVar3;
      uVar3 = *(undefined8 *)(pFVar8 + 0x18);
      *(undefined8 *)(pFVar1 + lVar7 * 0x30 + 0x10) = *(undefined8 *)(pFVar8 + 0x10);
      *(undefined8 *)(pFVar1 + lVar7 * 0x30 + 0x10 + 8) = uVar3;
      uVar3 = *(undefined8 *)(pFVar8 + 0x28);
      *(undefined8 *)(pFVar1 + lVar7 * 0x30 + 0x20) = *(undefined8 *)(pFVar8 + 0x20);
      *(undefined8 *)(pFVar1 + lVar7 * 0x30 + 0x20 + 8) = uVar3;
    }
    pFVar8 = pFVar8 + 0x30;
  } while( true );
}

// GetRigVMExtendedExecuteContext @ 14a1ac5b0

FRigVMExtendedExecuteContext * __thiscall
URigVMHost::GetRigVMExtendedExecuteContext(URigVMHost *this)

{
  code *pcVar1;
  bool bVar2;
  FRigVMExtendedExecuteContext *pFVar3;
  
  if (this->RigVMExtendedExecuteContext != (FRigVMExtendedExecuteContext *)0x0) {
    return this->RigVMExtendedExecuteContext;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("RigVMExtendedExecuteContext != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMHost.h"
                     ,0x14c,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FRigVMExtendedExecuteContext *)(*pcVar1)();
    return pFVar3;
  }
  return this->RigVMExtendedExecuteContext;
}

// GetScriptAccessibleVariables @ 14a1ac610

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
URigVMHost::GetScriptAccessibleVariables
          (URigVMHost *this,TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar6;
  longlong lVar7;
  ForAnyElementType FVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  ForAnyElementType local_38;
  undefined8 local_30;
  FScriptContainerElement *local_28;
  int local_20;
  
  (**(code **)(this->_padding_ + 0x378))(this,&local_28,1);
  FVar8.Data = (FScriptContainerElement *)0x0;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  pFVar11 = local_28 + (longlong)local_20 * 0x30;
  pFVar10 = FVar8.Data;
  for (pFVar9 = local_28; pFVar9 != pFVar11; pFVar9 = pFVar9 + 0x30) {
    if (pFVar9[0x21] != (FScriptContainerElement)0x0) {
      iVar4 = (int)pFVar10;
      if ((FVar8.Data <= pFVar9) &&
         (local_30._4_4_ = (int)(local_30 >> 0x20), lVar7 = (longlong)local_30._4_4_,
         pFVar9 < FVar8.Data + lVar7 * 0x30)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar6 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar6;
        }
        FVar8.Data = local_38.Data;
        iVar4 = (int)local_30;
      }
      if (iVar4 == local_30._4_4_) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&local_38,(int *)((longlong)&local_30 + 4));
        FVar8.Data = local_38.Data;
      }
      lVar7 = (longlong)iVar4;
      local_30 = CONCAT44(local_30._4_4_,iVar4 + 1U);
      uVar1 = *(undefined8 *)(pFVar9 + 8);
      *(undefined8 *)(FVar8.Data + lVar7 * 0x30) = *(undefined8 *)pFVar9;
      *(undefined8 *)(FVar8.Data + lVar7 * 0x30 + 8) = uVar1;
      uVar1 = *(undefined8 *)(pFVar9 + 0x18);
      *(undefined8 *)(FVar8.Data + lVar7 * 0x30 + 0x10) = *(undefined8 *)(pFVar9 + 0x10);
      *(undefined8 *)(FVar8.Data + lVar7 * 0x30 + 0x10 + 8) = uVar1;
      uVar1 = *(undefined8 *)(pFVar9 + 0x28);
      *(undefined8 *)(FVar8.Data + lVar7 * 0x30 + 0x20) = *(undefined8 *)(pFVar9 + 0x20);
      *(undefined8 *)(FVar8.Data + lVar7 * 0x30 + 0x20 + 8) = uVar1;
      pFVar10 = (FScriptContainerElement *)(ulonglong)(iVar4 + 1U);
      FVar8.Data = local_38.Data;
    }
  }
  if (local_28 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28);
    pFVar10 = (FScriptContainerElement *)(local_30 & 0xffffffff);
    FVar8.Data = local_38.Data;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar4 = (int)pFVar10;
  pFVar9 = FVar8.Data + (longlong)iVar4 * 0x30;
  while( true ) {
    if ((int)pFVar10 != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FRigVMExternalVariable,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar8.Data == pFVar9) break;
    pFVar10 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar10 <= FVar8.Data) &&
        (FVar8.Data < pFVar10 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar6;
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    uVar1 = *(undefined8 *)FVar8.Data;
    FVar8.Data = FVar8.Data + 0x30;
    *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 8) = uVar1;
    pFVar10 = (FScriptContainerElement *)(local_30 & 0xffffffff);
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return __return_storage_ptr__;
}

// GetSupportedEvents @ 14a1ac8e0

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
URigVMHost::GetSupportedEvents(URigVMHost *this)

{
  URigVM *pUVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  
  pUVar1 = (this->VM).field0_0x0.DebugPtr;
  if (pUVar1 != (URigVM *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014a1ac8f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pTVar2 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(**(code **)(pUVar1->_padding_ + 0x3c8))()
    ;
    return pTVar2;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`URigVMHost::GetSupportedEvents'::__l2::_dynamic_atexit_destructor_for__EmptyEvents__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &EmptyEvents;
}

// GetUserDefinedDependencies @ 14a1ad820

TArray<UObject_const_*,TSizedDefaultAllocator<32>_> * __thiscall
URigVMHost::GetUserDefinedDependencies
          (URigVMHost *this,
          TArray<UObject_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<FRigVMMemoryStorageStruct_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FObjectPtr_u_0 *this_00;
  atomic<int> aVar1;
  int iVar2;
  atomic<unsigned_int> aVar3;
  FRigVMFunction *this_01;
  code *pcVar4;
  atomic<int> *paVar5;
  bool bVar6;
  atomic<unsigned_int> aVar7;
  FRigVMRegistry_RWLock *this_02;
  FConditionalScopeLock *this_03;
  TArray<UObject_const_*,TSizedDefaultAllocator<32>_> *pTVar8;
  FRigVMRegistryHandle *pFVar9;
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong lVar11;
  UClass *pUVar12;
  FObjectPtr_u_0 FVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res10 [8];
  TArray<FRigVMMemoryStorageStruct_const_*,TSizedDefaultAllocator<32>_> *local_res18;
  undefined1 local_res20 [8];
  undefined1 local_88 [4];
  uint local_84;
  FScriptContainerElement *local_80;
  FObjectPtr_u_0 local_78;
  TArray<FRigVMFunction_const_*,TSizedDefaultAllocator<32>_> *local_70;
  FScriptContainerElement *local_68;
  undefined8 local_58;
  undefined4 local_50;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar15 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar16 = pFVar15 + (longlong)iVar2 * 8;
  local_res18 = param_1;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FRigVMMemoryStorageStruct_const_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar15 == pFVar16) break;
    if (*(FRigVMMemoryStorageStruct **)pFVar15 != (FRigVMMemoryStorageStruct *)0x0) {
      FRigVMMemoryStorageStruct::GetUserDefinedDependencies
                (*(FRigVMMemoryStorageStruct **)pFVar15,__return_storage_ptr__);
    }
    pFVar15 = pFVar15 + 8;
  }
  local_70 = ((this->VM).field0_0x0.DebugPtr)->FunctionsPtr;
  local_84 = local_70->ArrayNum;
  uVar14 = (ulonglong)(int)local_84;
  pFVar16 = (local_70->AllocatorInstance).Data;
  local_68 = pFVar16 + uVar14 * 8;
  do {
    pFVar15 = local_68;
    local_80 = pFVar16;
    if (local_70->ArrayNum != (int)uVar14) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FRigVMFunction_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (pFVar16 == pFVar15) {
      pFVar16 = (local_res18->AllocatorInstance).Data;
      if (pFVar16 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar16);
      }
      return __return_storage_ptr__;
    }
    this_01 = *(FRigVMFunction **)pFVar16;
    this_02 = (FRigVMRegistry_RWLock *)URigVM::GetLocalizedRegistry((this->VM).field0_0x0.DebugPtr);
    this_03 = (FConditionalScopeLock *)0x0;
    if (this_02 == (FRigVMRegistry_RWLock *)0x0) {
      this_02 = FRigVMRegistry_RWLock::Get();
      this_03 = ::operator_new(0x20);
      if (this_03 == (FConditionalScopeLock *)0x0) {
        this_03 = (FConditionalScopeLock *)0x0;
      }
      else {
        FRigVMRegistryHandle::FRigVMRegistryHandle
                  ((FRigVMRegistryHandle *)this_03,(FRigVMRegistry_NoLock *)this_02);
        *(undefined1 *)&this_03->_padding_ = 1;
        this_03->Registry = this_02;
        this_03->DesiredLockType = LockType_Read;
        aVar3 = this_02->WriteLockOwnerThread;
        aVar7 = (atomic<unsigned_int>)GetCurrentThreadId();
        if (aVar3 != aVar7) {
          AcquireSRWLockShared((PSRWLOCK)&this_03->Registry->Lock);
        }
        LOCK();
        paVar5 = &this_03->Registry->LockCount;
        aVar1 = *paVar5;
        *paVar5 = (atomic<int>)((int)*paVar5 + 1);
        UNLOCK();
        if (aVar1 == (atomic<int>)0x0) {
          LOCK();
          this_03->Registry->LockType =
               (atomic<FRigVMRegistry_NoLock::ELockType>)this_03->DesiredLockType;
          UNLOCK();
        }
        else if (this_03->DesiredLockType == LockType_Write) {
          bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_4767296351463538103>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                             ,0x249,"DesiredLockType != LockType_Write");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            pTVar8 = (TArray<UObject_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar8;
          }
        }
      }
    }
    pFVar9 = FRigVMRegistry_NoLock::GetHandle_NoLock((FRigVMRegistry_NoLock *)this_02);
    pTVar10 = FRigVMFunction::GetArgumentTypeIndices_NoLock(this_01,pFVar9);
    iVar2 = pTVar10->ArrayNum;
    pFVar15 = (pTVar10->AllocatorInstance).Data;
    pFVar16 = pFVar15 + (longlong)iVar2 * 0xc;
    while( true ) {
      if (pTVar10->ArrayNum != iVar2) {
        local_88[0] = 0;
        `TCheckedPointerIterator<TRigVMTypeIndex_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_88);
      }
      if (pFVar15 == pFVar16) break;
      local_50 = *(undefined4 *)(pFVar15 + 8);
      local_58 = *(undefined8 *)pFVar15;
      lVar11 = (**(code **)(this_02->_padding_ + 0xe8))(this_02,&local_58);
      this_00 = (FObjectPtr_u_0 *)(lVar11 + 8);
      if (*(longlong *)(lVar11 + 8) != 0) {
        pUVar12 = Z_Construct_UClass_UUserDefinedStruct_NoRegister();
        bVar6 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar12);
        if ((bVar6) && (FVar13.Handle = *(UObject **)this_00, FVar13.Handle != (UObject *)0x0)) {
LAB_14a1ada69:
          local_78 = FVar13;
          TArray<UObject_const_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UObject_const_*>
                    (__return_storage_ptr__,&local_78.Handle);
        }
        else if (this_00->Handle != (UObject *)0x0) {
          pUVar12 = Z_Construct_UClass_UUserDefinedEnum_NoRegister();
          bVar6 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar12);
          if ((bVar6) && (FVar13.Handle = this_00->Handle, FVar13.Handle != (UObject *)0x0))
          goto LAB_14a1ada69;
        }
      }
      pFVar15 = pFVar15 + 0xc;
    }
    if (this_03 != (FConditionalScopeLock *)0x0) {
      FRigVMRegistry_RWLock::FConditionalScopeLock::~FConditionalScopeLock(this_03);
      ::operator_delete(this_03,0x20);
    }
    pFVar16 = local_80 + 8;
    uVar14 = (ulonglong)local_84;
  } while( true );
}

// GetVM @ 14a1adb00

URigVM * __thiscall URigVMHost::GetVM(URigVMHost *this)

{
  code *pcVar1;
  bool bVar2;
  URigVM *pUVar3;
  
  if ((this->VM).field0_0x0.DebugPtr != (URigVM *)0x0) {
    return (this->VM).field0_0x0.DebugPtr;
  }
  (**(code **)(this->_padding_ + 0x2c0))(this,1);
  if ((this->VM).field0_0x0.DebugPtr == (URigVM *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("VM",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMHost.cpp"
                       ,0x2f0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (URigVM *)(*pcVar1)();
      return pUVar3;
    }
  }
  return (this->VM).field0_0x0.DebugPtr;
}

// GetVariableAsString @ 14a1adb70

FString * __thiscall
URigVMHost::GetVariableAsString(URigVMHost *this,FString *__return_storage_ptr__,FName *param_1)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetVariableType @ 14a1adb90

FName __thiscall URigVMHost::GetVariableType(URigVMHost *this,FName *param_1)

{
  bool bVar1;
  FName FVar2;
  FName *in_R8;
  FNameEntryId local_38;
  undefined4 uStack_34;
  FNameEntryId local_28;
  uint uStack_24;
  
  GetPublicVariableByName(this,(FRigVMExternalVariable *)&local_38,in_R8);
  bVar1 = ::FName::IsWithinBounds(local_38);
  if ((bVar1) && (CONCAT44(uStack_34,local_38.Value) != 0)) {
    bVar1 = ::FName::IsWithinBounds(local_28);
    if ((bVar1) &&
       (FVar2.Number = uStack_24, FVar2.ComparisonIndex.Value = local_28.Value, FVar2 != (FName)0x0)
       ) goto LAB_14a1adbd1;
  }
  FVar2.ComparisonIndex.Value = 0;
  FVar2.Number = 0;
LAB_14a1adbd1:
  *param_1 = FVar2;
  return (FName)param_1;
}

// GetWorld @ 14a1adbf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall URigVMHost::GetWorld(URigVMHost *this)

{
  UWorld *pUVar1;
  
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014a1adbfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar1 = (UWorld *)(**(code **)(*(longlong *)this->_padding_ + 0x180))();
    return pUVar1;
  }
  return (UWorld *)0x0;
}

// HandleExecutionReachedExit @ 14a1adc10

void __thiscall URigVMHost::HandleExecutionReachedExit(URigVMHost *this,FName *param_1)

{
  if (this->bAccumulateTime != false) {
    this->AbsoluteTime = this->DeltaTime + this->AbsoluteTime;
  }
  return;
}

// Initialize @ 14a1ae290

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall URigVMHost::Initialize(URigVMHost *this,bool param_1)

{
  FRigVMExtendedExecuteContext *this_00;
  URigVM *pUVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  UObject *pUVar6;
  URigVMHost *pUVar7;
  FString local_18;
  
  bVar3 = FTraceFilter::IsObjectTraceable<1>((UObject *)this);
  if (!bVar3) {
    if (this == (URigVMHost *)0x0) goto LAB_14a1ae2ce;
    pUVar6 = (UObject *)(**(code **)(this->_padding_ + 0x180))(this);
    bVar3 = FTraceFilter::IsObjectTraceable<1>(pUVar6);
    if (!bVar3) goto LAB_14a1ae2ce;
  }
  FObjectTrace::OutputObjectLifetimeBegin((UObject *)this);
LAB_14a1ae2ce:
  if (this->InitBracket < 1) {
    bVar3 = UObjectBaseUtility::IsTemplate
                      ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
    if (!bVar3) {
      (**(code **)(this->_padding_ + 0x380))(this);
      if ((this->_padding_ & 0x10) == 0) {
        SwapVMToNativizedIfRequired(this,(UClass *)0x0);
        if ((this->RigVMExtendedExecuteContext == (FRigVMExtendedExecuteContext *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("RigVMExtendedExecuteContext != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMHost.h"
                               ,0x14c,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_00 = this->RigVMExtendedExecuteContext;
        pUVar7 = UClass::GetDefaultObject<URigVMHost>((UClass *)this->_padding_);
        pUVar1 = (this->VM).field0_0x0.DebugPtr;
        if (pUVar1 == (URigVM *)0x0) {
          bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_2045642706327173961>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMHost.cpp"
                             ,0x4b7,"false");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        else if ((pUVar7 == (URigVMHost *)0x0) ||
                ((pUVar7->VM).field0_0x0.DebugPtr == (URigVM *)0x0)) {
          (**(code **)(pUVar1->_padding_ + 0x2e0))(pUVar1,this_00);
          FRigVMExtendedExecuteContext::Reset(this_00);
        }
        else {
          cVar4 = (**(code **)(pUVar1->_padding_ + 0x2c0))();
          if (cVar4 == '\0') {
            FRigVMMemoryStorageStruct::operator=
                      (&this_00->WorkMemoryStorage,
                       &((pUVar7->VM).field0_0x0.DebugPtr)->DefaultWorkMemoryStorage);
            FRigVMMemoryStorageStruct::operator=
                      (&this_00->DebugMemoryStorage,
                       &((pUVar7->VM).field0_0x0.DebugPtr)->DefaultDebugMemoryStorage);
            uVar5 = (**(code **)(((pUVar7->VM).field0_0x0.DebugPtr)->_padding_ + 0x2d0))();
            this_00->VMHash = uVar5;
          }
        }
      }
      (**(code **)(this->_padding_ + 0x318))(this);
      if (param_1) {
        (**(code **)(this->_padding_ + 0x318))(this);
      }
    }
  }
  else if (2 < (byte)LogRigVM._0_1_) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRigVM);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return;
    }
  }
  return;
}

// InitializeCDOVM @ 14a1ae4a0

bool __thiscall URigVMHost::InitializeCDOVM(URigVMHost *this)

{
  int *piVar1;
  TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  URigVM *pUVar4;
  FRigVMExtendedExecuteContext *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  longlong *plVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  undefined1 local_res8 [8];
  URigVM *local_res10;
  void *local_48 [2];
  
  if ((this->VM).field0_0x0.DebugPtr == (URigVM *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("VM != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMHost.cpp"
                        ,0x252,L"");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      uVar12 = (*pcVar8)();
      return (bool)uVar12;
    }
  }
  if ((((this->VM).field0_0x0.DebugPtr)->_padding_ & 0x40010) == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("VM->HasAnyFlags(RF_ClassDefaultObject | RF_DefaultSubObject)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMHost.cpp"
                        ,0x253,L"");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      uVar12 = (*pcVar8)();
      return (bool)uVar12;
    }
  }
  if (this->RigVMExtendedExecuteContext == (FRigVMExtendedExecuteContext *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("RigVMExtendedExecuteContext != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMHost.h"
                        ,0x14c,L"");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      uVar12 = (*pcVar8)();
      return (bool)uVar12;
    }
  }
  pUVar4 = (this->VM).field0_0x0.DebugPtr;
  pFVar5 = this->RigVMExtendedExecuteContext;
  (pUVar4->ExternalVariables).ArrayNum = 0;
  if ((pUVar4->ExternalVariables).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&(pUVar4->ExternalVariables).AllocatorInstance,0,
               &(pUVar4->ExternalVariables).ArrayMax);
  }
  (pFVar5->ExternalVariableRuntimeData).ArrayNum = 0;
  if ((pFVar5->ExternalVariableRuntimeData).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(pFVar5->ExternalVariableRuntimeData).AllocatorInstance,0,
               &(pFVar5->ExternalVariableRuntimeData).ArrayMax);
  }
  pUVar4 = (this->VM).field0_0x0.DebugPtr;
  local_res10 = pUVar4;
  plVar14 = (longlong *)(**(code **)(this->_padding_ + 0x378))(this,local_48,0);
  pTVar2 = &pUVar4->ExternalVariables;
  uVar3 = *(uint *)(plVar14 + 1);
  if (-1 < (int)uVar3) {
    piVar1 = &(pUVar4->ExternalVariables).ArrayMax;
    (pUVar4->ExternalVariables).ArrayNum = 0;
    if ((pUVar4->ExternalVariables).ArrayMax < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,uVar3,&pTVar2->AllocatorInstance,0,piVar1);
    }
    lVar10 = plVar14[1];
    pFVar16 = (FScriptContainerElement *)*plVar14;
    pFVar17 = pFVar16 + (longlong)(int)lVar10 * 0x30;
    while( true ) {
      if ((int)plVar14[1] != (int)lVar10) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FRigVMExternalVariable_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (pFVar16 == pFVar17) break;
      pFVar6 = (pTVar2->AllocatorInstance).Data;
      if ((pFVar6 <= pFVar16) && (pFVar16 < pFVar6 + (longlong)*piVar1 * 0x28)) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          uVar12 = (*pcVar8)();
          return (bool)uVar12;
        }
      }
      iVar13 = (pUVar4->ExternalVariables).ArrayNum;
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x828,&pTVar2->AllocatorInstance,piVar1);
      }
      lVar15 = (longlong)iVar13;
      (pUVar4->ExternalVariables).ArrayNum = iVar13 + 1;
      uVar9 = *(undefined8 *)(pFVar16 + 8);
      pFVar7 = (pTVar2->AllocatorInstance).Data;
      *(undefined8 *)(pFVar7 + lVar15 * 0x28) = *(undefined8 *)pFVar16;
      *(undefined8 *)(pFVar7 + lVar15 * 0x28 + 8) = uVar9;
      uVar9 = *(undefined8 *)(pFVar16 + 0x18);
      *(undefined8 *)(pFVar7 + lVar15 * 0x28 + 0x10) = *(undefined8 *)(pFVar16 + 0x10);
      *(undefined8 *)(pFVar7 + lVar15 * 0x28 + 0x10 + 8) = uVar9;
      pFVar6 = pFVar16 + 0x20;
      pFVar16 = pFVar16 + 0x30;
      *(undefined8 *)(pFVar7 + lVar15 * 0x28 + 0x20) = *(undefined8 *)pFVar6;
    }
    URigVM::RefreshExternalPropertyPaths(local_res10);
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
    pUVar4 = (this->VM).field0_0x0.DebugPtr;
                    /* WARNING: Could not recover jumptable at 0x00014a1ae73e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar12 = (**(code **)(pUVar4->_padding_ + 0x308))(pUVar4,pFVar5);
    return (bool)uVar12;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
}

// InitializeFromCDO @ 14a1ae760

void __thiscall URigVMHost::InitializeFromCDO(URigVMHost *this)

{
  URigVM *pUVar1;
  TReferenceControllerBase<1> *pTVar2;
  TFunction<void___cdecl(FRigVMLogSettings_const_&,FRigVMExecuteContext_const_*,FString_const_&)>
  *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  URigVMHost *pUVar5;
  
  if ((this->_padding_ & 0x10) == 0) {
    pUVar5 = UClass::GetDefaultObject<URigVMHost>((UClass *)this->_padding_);
    pUVar1 = (this->VM).field0_0x0.DebugPtr;
    if (((pUVar1 == (URigVM *)0x0) || (pUVar1 != (pUVar5->VM).field0_0x0.DebugPtr)) &&
       (pUVar1 = (pUVar5->VM).field0_0x0.DebugPtr, pUVar1 != (URigVM *)0x0)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      (this->VM).field0_0x0 = (pUVar5->VM).field0_0x0;
    }
    (**(code **)(this->_padding_ + 0x358))(this);
    FRigVMDrawContainer::operator=(&this->DrawContainer,&pUVar5->DrawContainer);
    (this->VMRuntimeSettings).MaximumArraySize = (pUVar5->VMRuntimeSettings).MaximumArraySize;
    pTVar2 = (pUVar5->VMRuntimeSettings).LogFunction.SharedReferenceCount.ReferenceController;
    pTVar3 = (pUVar5->VMRuntimeSettings).LogFunction.Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->VMRuntimeSettings).LogFunction.SharedReferenceCount.ReferenceController;
    (this->VMRuntimeSettings).LogFunction.Object = pTVar3;
    (this->VMRuntimeSettings).LogFunction.SharedReferenceCount.ReferenceController = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    return;
  }
  return;
}

// InitializeVM @ 14a1ae860

bool __thiscall URigVMHost::InitializeVM(URigVMHost *this,FName *param_1)

{
  int iVar1;
  FRigVMExtendedExecuteContext *pFVar2;
  URigVM *pUVar3;
  TSet<TTuple<FRigVMNameOp,FName>,TDefaultMapHashableKeyFuncs<FRigVMNameOp,FName,0>,FDefaultSetAllocator>
  *this_00;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  longlong lVar8;
  UScriptStruct *pUVar9;
  TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> local_28;
  
  if ((this->RigVMExtendedExecuteContext == (FRigVMExtendedExecuteContext *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("RigVMExtendedExecuteContext != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMHost.h"
                         ,0x14c,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pFVar2 = this->RigVMExtendedExecuteContext;
  (**(code **)(this->_padding_ + 0x378))(this,&local_28,0);
  pUVar3 = (this->VM).field0_0x0.DebugPtr;
  if ((pUVar3->ExternalVariables).ArrayNum != local_28.ArrayNum) {
    cVar7 = '\0';
    goto LAB_14a1ae9d3;
  }
  URigVM::SetExternalVariablesInstanceData(pUVar3,pFVar2,&local_28,false);
  pUVar3 = (this->VM).field0_0x0.DebugPtr;
  cVar7 = (**(code **)(pUVar3->_padding_ + 800))(pUVar3,pFVar2,1);
  if (cVar7 != '\0') {
    this->bRequiresInitExecution = false;
  }
  this->DeltaTime = 0.0;
  this->AbsoluteTime = 0.0;
  lVar8 = (**(code **)((pFVar2->PublicDataScope)._padding_ + 0x20))(&pFVar2->PublicDataScope);
  pUVar9 = FRigVMExecuteContext::StaticStruct();
  if (pUVar9 == (UScriptStruct *)0x0) {
LAB_14a1ae961:
    pcVar4 = *(code **)(pFVar2->_padding_ + 8);
    pUVar9 = FRigVMExecuteContext::StaticStruct();
    (*pcVar4)(pFVar2,pUVar9);
  }
  else {
    iVar1 = (int)pUVar9->_padding_;
    if ((*(int *)(lVar8 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar9->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_14a1ae961;
  }
  lVar8 = (**(code **)((pFVar2->PublicDataScope)._padding_ + 0x18))(&pFVar2->PublicDataScope);
  this_00 = *(TSet<TTuple<FRigVMNameOp,FName>,TDefaultMapHashableKeyFuncs<FRigVMNameOp,FName,0>,FDefaultSetAllocator>
              **)(lVar8 + 0x50);
  TSet<TTuple<FRigVMNameOp,FName>,TDefaultMapHashableKeyFuncs<FRigVMNameOp,FName,0>,FDefaultSetAllocator>
  ::Reset(this_00);
  TSet<TTuple<FRigVMNameOp,bool>,TDefaultMapHashableKeyFuncs<FRigVMNameOp,bool,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FRigVMNameOp,bool>,TDefaultMapHashableKeyFuncs<FRigVMNameOp,bool,0>,FDefaultSetAllocator>
           *)(this_00 + 1));
  bVar5 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->InitializedEvent);
  if (bVar5) {
    this->InitBracket = this->InitBracket + 1;
    TMulticastDelegate<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>::
    Broadcast((TMulticastDelegate<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
               *)&this->InitializedEvent,this,param_1);
    this->InitBracket = this->InitBracket + -1;
  }
LAB_14a1ae9d3:
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return (bool)cVar7;
}

// InstantiateVMFromCDO @ 14a1aea10

void __thiscall URigVMHost::InstantiateVMFromCDO(URigVMHost *this)

{
  FRigVMExtendedExecuteContext *this_00;
  URigVM *pUVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  URigVMHost *pUVar6;
  
  if ((this->_padding_ & 0x10) == 0) {
    SwapVMToNativizedIfRequired(this,(UClass *)0x0);
    if ((this->RigVMExtendedExecuteContext == (FRigVMExtendedExecuteContext *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("RigVMExtendedExecuteContext != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMHost.h"
                           ,0x14c,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this_00 = this->RigVMExtendedExecuteContext;
    pUVar6 = UClass::GetDefaultObject<URigVMHost>((UClass *)this->_padding_);
    pUVar1 = (this->VM).field0_0x0.DebugPtr;
    if (pUVar1 == (URigVM *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2045642706327173961>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMHost.cpp"
                         ,0x4b7,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else if ((pUVar6 == (URigVMHost *)0x0) || ((pUVar6->VM).field0_0x0.DebugPtr == (URigVM *)0x0)) {
      (**(code **)(pUVar1->_padding_ + 0x2e0))(pUVar1,this_00);
      FRigVMExtendedExecuteContext::Reset(this_00);
    }
    else {
      cVar4 = (**(code **)(pUVar1->_padding_ + 0x2c0))();
      if (cVar4 == '\0') {
        FRigVMMemoryStorageStruct::operator=
                  (&this_00->WorkMemoryStorage,
                   &((pUVar6->VM).field0_0x0.DebugPtr)->DefaultWorkMemoryStorage);
        FRigVMMemoryStorageStruct::operator=
                  (&this_00->DebugMemoryStorage,
                   &((pUVar6->VM).field0_0x0.DebugPtr)->DefaultDebugMemoryStorage);
        uVar5 = (**(code **)(((pUVar6->VM).field0_0x0.DebugPtr)->_padding_ + 0x2d0))();
        this_00->VMHash = uVar5;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014a1aeb29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x318))(this);
  return;
}

// InvalidateCachedMemory @ 14a1aed90

void __thiscall URigVMHost::InvalidateCachedMemory(URigVMHost *this)

{
  URigVM *this_00;
  code *pcVar1;
  bool bVar2;
  
  this_00 = (this->VM).field0_0x0.DebugPtr;
  if (this_00 != (URigVM *)0x0) {
    if (this->RigVMExtendedExecuteContext == (FRigVMExtendedExecuteContext *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("RigVMExtendedExecuteContext != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMHost.h"
                         ,0x14c,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    URigVM::InvalidateCachedMemory(this_00,this->RigVMExtendedExecuteContext);
  }
  return;
}

// IsGarbageOrDestroyed @ 14a1aee00

bool __cdecl URigVMHost::IsGarbageOrDestroyed(UObject *param_1)

{
  FUObjectItem *pFVar1;
  
  if (((param_1 != (UObject *)0x0) && ((*(uint *)&param_1->field_0x8 >> 0x1e & 1) == 0)) &&
     ((*(uint *)&param_1->field_0x8 & 0x18000) == 0)) {
    pFVar1 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&param_1->field_0xc);
    if (((uint)((ulonglong)(pFVar1->field0_0x0).FlagsAndRefCount >> 0x35) & 1) == 0) {
      return false;
    }
  }
  return true;
}

// IsInitRequired @ 14a1aee50

bool __thiscall URigVMHost::IsInitRequired(URigVMHost *this)

{
  return this->bRequiresInitExecution;
}

// IsRunOnceEvent @ 14a1aee60

bool __thiscall URigVMHost::IsRunOnceEvent(URigVMHost *this,FName *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FName *pFVar5;
  
  lpCriticalSection = &this->EventQueueToRunOnceMutex;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar5 = (FName *)(this->EventsToRunOnce).AllocatorInstance.Data;
  pFVar1 = pFVar5 + (this->EventsToRunOnce).ArrayNum;
  if (pFVar5 != pFVar1) {
    do {
      if (*pFVar5 == *param_1) {
        bVar3 = true;
        goto LAB_14a1aeee1;
      }
      pFVar5 = pFVar5 + 1;
    } while (pFVar5 != pFVar1);
  }
  bVar3 = false;
LAB_14a1aeee1:
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return bVar3;
}

// PostInitInstance @ 14a1b25d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall URigVMHost::PostInitInstance(URigVMHost *this,URigVMHost *param_1)

{
  int iVar1;
  FRigVMExtendedExecuteContext *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  TFunction<void___cdecl(FRigVMLogSettings_const_&,FRigVMExecuteContext_const_*,FString_const_&)>
  *pTVar4;
  code *pcVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  UClass *pUVar10;
  FRigVMExecuteContext *pFVar11;
  URigVM *pUVar12;
  FName *pFVar13;
  FUObjectItem *pFVar14;
  TObjectPtr<URigVM> *pTVar15;
  EObjectFlags EVar16;
  FName local_res8;
  
  EVar16 = RF_DefaultSubObject|RF_Public;
  if (((uint)this->_padding_ >> 4 & 1) == 0) {
    EVar16 = RF_Transient|RF_Transactional;
  }
  if (this->RigVMExtendedExecuteContext == (FRigVMExtendedExecuteContext *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("RigVMExtendedExecuteContext != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMHost.h"
                       ,0x14c,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar2 = this->RigVMExtendedExecuteContext;
  lVar8 = (**(code **)(this->_padding_ + 0x2b0))(this);
  lVar9 = (**(code **)((pFVar2->PublicDataScope)._padding_ + 0x20))();
  if (lVar9 != 0) {
    pUVar10 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar1 = (int)pUVar10->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar10->_padding_)) goto LAB_14a1b2681;
  }
  lVar9 = 0;
LAB_14a1b2681:
  if (lVar9 != lVar8) {
    (**(code **)(pFVar2->_padding_ + 8))(pFVar2);
  }
  if ((this->VM).field0_0x0.DebugPtr != (URigVM *)0x0) {
    if (this->RigVMExtendedExecuteContext == (FRigVMExtendedExecuteContext *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("RigVMExtendedExecuteContext != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMHost.h"
                         ,0x14c,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pTVar3 = (this->VMRuntimeSettings).LogFunction.SharedReferenceCount.ReferenceController;
    pFVar2 = this->RigVMExtendedExecuteContext;
    iVar1 = (this->VMRuntimeSettings).MaximumArraySize;
    pTVar4 = (this->VMRuntimeSettings).LogFunction.Object;
    if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
      pFVar11 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(pFVar2);
      (pFVar11->RuntimeSettings).MaximumArraySize = iVar1;
    }
    else {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      pFVar11 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(pFVar2);
      (pFVar11->RuntimeSettings).MaximumArraySize = iVar1;
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar6 = (pFVar11->RuntimeSettings).LogFunction.SharedReferenceCount.ReferenceController;
    (pFVar11->RuntimeSettings).LogFunction.Object = pTVar4;
    (pFVar11->RuntimeSettings).LogFunction.SharedReferenceCount.ReferenceController = pTVar3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    pFVar11 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(pFVar2);
    if ((pFVar11->RuntimeSettings).MaximumArraySize < 1) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetPublicData<>().RuntimeSettings.MaximumArraySize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMExecuteContext.h"
                         ,0x310,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  pTVar15 = &this->VM;
  if (((uint)this->_padding_ >> 4 & 1) == 0) {
    if (param_1 == (URigVMHost *)0x0) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2045642706327174173>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMHost.cpp"
                         ,0x3e3,"InCDO");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      if ((pTVar15->field0_0x0).DebugPtr != (URigVM *)0x0) {
        pUVar12 = GetVM(param_1);
        if ((pTVar15->field0_0x0).DebugPtr == (URigVM *)0x0) {
          bVar7 = pUVar12 == (URigVM *)0x0;
        }
        else {
          bVar7 = (pTVar15->field0_0x0).DebugPtr == pUVar12;
        }
        if (!bVar7) {
          bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_2045642706327174171>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMHost.cpp"
                             ,0x3e5,"VM == nullptr || VM == InCDO->GetVM()");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
      }
      if ((this->VM).field0_0x0.DebugPtr == (URigVM *)0x0) {
        if ((param_1->VM).field0_0x0.DebugPtr == (URigVM *)0x0) {
          (**(code **)(param_1->_padding_ + 0x2c0))(param_1,1);
          if ((param_1->VM).field0_0x0.DebugPtr == (URigVM *)0x0) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("VM",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMHost.cpp"
                               ,0x2f0,L"");
            if (bVar7) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
        }
        pUVar12 = (param_1->VM).field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (URigVM *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar12);
        }
        (this->VM).field0_0x0.DebugPtr = pUVar12;
      }
    }
  }
  else {
    if ((pTVar15->field0_0x0).DebugPtr == (URigVM *)0x0) {
      pFVar13 = ::FName::FName(&local_res8,L"RigVM_VM");
      pUVar12 = NewObject<URigVM>((UObject *)this,*pFVar13,EVar16,(UObject *)0x0,false,
                                  (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (URigVM *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar12);
      }
      (pTVar15->field0_0x0).DebugPtr = pUVar12;
    }
    pFVar14 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(this->_padding_ + 0xc));
    if (((ulonglong)((pFVar14->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x19 & 1) != 0) {
      pFVar14 = FUObjectArray::IndexToObject
                          (&GUObjectArray,
                           *(int *)((longlong)&((this->VM).field0_0x0.DebugPtr)->_padding_ + 4));
      FUObjectItem::SetRootFlags(pFVar14,RootSet);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014a1b2956. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x318))(this);
  return;
}

// PostInitInstanceIfRequired @ 14a1b2970

void __thiscall URigVMHost::PostInitInstanceIfRequired(URigVMHost *this)

{
  return;
}

// PostLoad @ 14a1b2980

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall URigVMHost::PostLoad(URigVMHost *this)

{
  int *piVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  int iVar4;
  FRigVMExtendedExecuteContext *pFVar5;
  FScriptContainerElement *pFVar6;
  URigVM *pUVar7;
  code *pcVar8;
  bool bVar9;
  atomic<unsigned_int> aVar10;
  atomic<unsigned_int> aVar11;
  FRigVMRegistry_RWLock *this_00;
  FString local_48;
  FRigVMRegistryHandle local_38;
  char local_30;
  FRigVMRegistry_RWLock *local_28;
  atomic<FRigVMRegistry_NoLock::ELockType> local_20;
  
  UObject::PostLoad((UObject *)this);
  this_00 = FRigVMRegistry_RWLock::Get();
  FRigVMRegistryHandle::FRigVMRegistryHandle(&local_38,(FRigVMRegistry_NoLock *)this_00);
  local_30 = '\x01';
  local_20 = (atomic<FRigVMRegistry_NoLock::ELockType>)0x1;
  local_28 = this_00;
  AcquireSRWLockExclusive((PSRWLOCK)&this_00->Lock);
  aVar10 = (atomic<unsigned_int>)GetCurrentThreadId();
  LOCK();
  local_28->WriteLockOwnerThread = aVar10;
  UNLOCK();
  LOCK();
  paVar2 = &local_28->LockCount;
  aVar3 = *paVar2;
  *paVar2 = (atomic<int>)((int)*paVar2 + 1);
  UNLOCK();
  if (aVar3 == (atomic<int>)0x0) {
    LOCK();
    local_28->LockType = local_20;
    UNLOCK();
  }
  else if ((local_20 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) &&
          (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_4767296351463538103>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                              ,0x249,"DesiredLockType != LockType_Write"), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FRigVMRegistry_NoLock::RefreshEngineTypesIfRequired_NoLock((FRigVMRegistry_NoLock *)this_00);
  if (local_30 != '\0') {
    LOCK();
    paVar2 = &local_28->LockCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      LOCK();
      local_28->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
      UNLOCK();
    }
    if (local_20 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x0) {
      if (((int)aVar3 + -1 < 0) &&
         (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_4767296351463538070>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                             ,0x26a,"CurrentLockCount >= 0"), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      aVar10 = local_28->WriteLockOwnerThread;
      aVar11 = (atomic<unsigned_int>)GetCurrentThreadId();
      if (aVar10 != aVar11) {
        ReleaseSRWLockShared((PSRWLOCK)&local_28->Lock);
      }
    }
    else if (local_20 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) {
      if ((aVar3 != (atomic<int>)0x1) &&
         (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_4767296351463538060>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                             ,0x274,"CurrentLockCount == 0"), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      LOCK();
      local_28->WriteLockOwnerThread = (atomic<unsigned_int>)0xffffffff;
      UNLOCK();
      ReleaseSRWLockExclusive((PSRWLOCK)&local_28->Lock);
    }
  }
  if ((this->RigVMExtendedExecuteContext == (FRigVMExtendedExecuteContext *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("RigVMExtendedExecuteContext != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMHost.h"
                         ,0x14c,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar5 = this->RigVMExtendedExecuteContext;
  (pFVar5->CachedMemoryHandles).ArrayNum = 0;
  if ((pFVar5->CachedMemoryHandles).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&(pFVar5->CachedMemoryHandles).AllocatorInstance,0,
               &(pFVar5->CachedMemoryHandles).ArrayMax);
  }
  piVar1 = &(pFVar5->LazyBranchExecuteState).ArrayMax;
  pFVar6 = (pFVar5->LazyBranchExecuteState).AllocatorInstance.Data;
  iVar4 = (pFVar5->LazyBranchExecuteState).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FRigVMInstructionSetExecuteState,int>
              ((FRigVMInstructionSetExecuteState *)pFVar6,iVar4);
    (pFVar5->LazyBranchExecuteState).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,0,&(pFVar5->LazyBranchExecuteState).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FRigVMInstructionSetExecuteState,int>
              ((FRigVMInstructionSetExecuteState *)pFVar6,iVar4);
    (pFVar5->LazyBranchExecuteState).ArrayNum = 0;
  }
  if ((this->VM).field0_0x0.DebugPtr != (URigVM *)0x0) {
    if ((this->_padding_ & 0x10) != 0) {
      UObject::ConditionalPostLoad((UObject *)(this->VM).field0_0x0.DebugPtr);
      (**(code **)(this->_padding_ + 0x2f8))(this);
    }
    bVar9 = URigVM::ValidateBytecode((this->VM).field0_0x0.DebugPtr);
    if (!bVar9) {
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2045642706327174994>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMHost.cpp"
                         ,0xae,"VM->ValidateBytecode()");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (2 < (byte)LogRigVM._0_1_) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_48,(UObject *)0x0);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRigVM);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      pUVar7 = (this->VM).field0_0x0.DebugPtr;
      (**(code **)(pUVar7->_padding_ + 0x2e0))(pUVar7,pFVar5);
    }
  }
  return;
}

// PreSave @ 14a1b3150

void __thiscall URigVMHost::PreSave(URigVMHost *this,FObjectPreSaveContext param_1)

{
  code *pcVar1;
  bool bVar2;
  FScriptContainerElement *local_res8 [4];
  
  local_res8[0] = ((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data;
  *(int *)(local_res8[0] + 0x9c) = *(int *)(local_res8[0] + 0x9c) + 1;
  UObject::PreSave((UObject *)this,(FObjectSaveContextData *)local_res8);
  if (this->RigVMExtendedExecuteContext == (FRigVMExtendedExecuteContext *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("RigVMExtendedExecuteContext != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMHost.h"
                       ,0x14c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  GenerateUserDefinedDependenciesData(this,this->RigVMExtendedExecuteContext);
  return;
}

// RecreateCachedMemory @ 14a1b31c0

void __thiscall URigVMHost::RecreateCachedMemory(URigVMHost *this)

{
  if ((this->VM).field0_0x0.DebugPtr != (URigVM *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014a1b31ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x318))();
    return;
  }
  return;
}

// RemoveRunOnceEvent @ 14a1b3540

bool __thiscall URigVMHost::RemoveRunOnceEvent(URigVMHost *this,FName *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  FName *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  bool local_res10;
  
  lpCriticalSection = &this->EventQueueToRunOnceMutex;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar2 = (FName *)(this->EventsToRunOnce).AllocatorInstance.Data;
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (this->EventsToRunOnce).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar1 = (this->EventsToRunOnce).ArrayNum;
  lVar6 = (longlong)iVar1;
  iVar10 = 0;
  if (iVar1 != 0) {
    pFVar2 = (FName *)(this->EventsToRunOnce).AllocatorInstance.Data;
    lVar8 = 0;
    iVar9 = 0;
    local_res10 = *pFVar2 != *param_1;
    iVar10 = 0;
    do {
      lVar8 = lVar8 + 1;
      iVar7 = iVar10 + 1;
      if (lVar8 < lVar6) {
        do {
          if (local_res10 != (pFVar2[lVar8] != *param_1)) break;
          iVar7 = iVar7 + 1;
          lVar8 = lVar8 + 1;
        } while (lVar8 < lVar6);
      }
      if (local_res10 != false) {
        if (iVar9 != iVar10) {
          memmove(pFVar2 + iVar9,pFVar2 + iVar10,(longlong)(iVar7 - iVar10) << 3);
        }
        iVar9 = iVar9 + (iVar7 - iVar10);
      }
      local_res10 = (bool)(local_res10 ^ 1);
      iVar10 = iVar7;
    } while (lVar8 < lVar6);
    iVar10 = iVar1 - iVar9;
    (this->EventsToRunOnce).ArrayNum = iVar9;
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return 0 < iVar10;
}

// RemoveUserDataOfClass @ 14a1b3760

void __thiscall
URigVMHost::RemoveUserDataOfClass(URigVMHost *this,TSubclassOf<UAssetUserData> param_1)

{
  undefined1 *puVar1;
  void *_Dst;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  uint uVar9;
  UObject *pUVar10;
  UObject *pUVar11;
  
  pUVar11 = (UObject *)0x0;
  pUVar8 = pUVar11;
  pUVar10 = pUVar11;
  if (0 < *(int *)&this->PreExecutedEvent) {
    do {
      uVar9 = (uint)pUVar8;
      uVar5 = 0;
      if ((int)uVar9 < *(int *)&this->PreExecutedEvent) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = *(longlong *)(&pUVar10->field_0x0 + *(longlong *)&(this->ExecutedEvent).field_0x18);
      if (lVar2 != 0) {
        pUVar8 = *(UObject **)param_1.Class.field0_0x0;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar8 != (UObject *)0x0) goto LAB_14a1b381e;
LAB_14a1b384c:
          pUVar8 = pUVar11;
        }
        else {
          if (pUVar8 == (UObject *)0x0) goto LAB_14a1b384c;
          UE::GC::MarkAsReachable(pUVar8);
LAB_14a1b381e:
          pUVar7 = Z_Construct_UClass_UAssetUserData_NoRegister();
          if (pUVar7 == (UClass *)0x0) goto LAB_14a1b384c;
          iVar6 = (int)pUVar7->_padding_;
          if ((*(int *)&pUVar8[1].field_0x10 < iVar6) ||
             ((longlong *)*(undefined1 **)(*(longlong *)&pUVar8[1].field_0x8 + (longlong)iVar6 * 8)
              != &pUVar7->_padding_)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (!bVar4) goto LAB_14a1b384c;
        }
        lVar2 = *(longlong *)(lVar2 + 0x10);
        if ((*(int *)&pUVar8[1].field_0x10 <= *(int *)(lVar2 + 0x38)) &&
           (*(undefined1 **)
             (*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)&pUVar8[1].field_0x10 * 8) ==
            &pUVar8[1].field_0x8)) {
          puVar1 = &(this->ExecutedEvent).field_0x18;
          uVar5 = 0;
          if ((int)uVar9 < *(int *)&this->PreExecutedEvent) {
            uVar5 = ~uVar9 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          _Dst = (void *)(*(longlong *)puVar1 + (longlong)(int)uVar9 * 8);
          iVar6 = (*(int *)&this->PreExecutedEvent - uVar9) + -1;
          if (iVar6 != 0) {
            memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar6 << 3);
          }
          iVar6 = *(int *)&this->PreExecutedEvent + -1;
          *(int *)&this->PreExecutedEvent = iVar6;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,(ForAnyElementType *)puVar1,iVar6,
                     (int *)&(this->PreExecutedEvent).field_0x4);
          return;
        }
      }
      pUVar8 = (UObject *)(ulonglong)(uVar9 + 1);
      pUVar10 = (UObject *)&pUVar10->field_0x8;
    } while ((int)(uVar9 + 1) < *(int *)&this->PreExecutedEvent);
  }
  return;
}

// RequestInit @ 14a1b3a90

void __thiscall URigVMHost::RequestInit(URigVMHost *this)

{
  this->bRequiresInitExecution = true;
  return;
}

// RequestRunOnceEvent @ 14a1b3aa0

void __thiscall URigVMHost::RequestRunOnceEvent(URigVMHost *this,FName *param_1,int param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  
  lpCriticalSection = &this->EventQueueToRunOnceMutex;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
            (&this->EventsToRunOnce,param_1);
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// ResolveUserDefinedTypeById @ 14a1b4350

UObject * __thiscall URigVMHost::ResolveUserDefinedTypeById(URigVMHost *this,FString *param_1)

{
  FSoftObjectPath *this_00;
  UObject *pUVar1;
  TObjectPtr<UObject> local_res8;
  UObject *local_res18 [2];
  
  this_00 = TMapBase<FString,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FSoftObjectPath,0>_>
            ::Find((TMapBase<FString,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FSoftObjectPath,0>_>
                    *)&this->UserDefinedStructGuidToPathName,param_1);
  if ((this_00 == (FSoftObjectPath *)0x0) &&
     (this_00 = TMapBase<FString,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FSoftObjectPath,0>_>
                ::Find((TMapBase<FString,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FSoftObjectPath,0>_>
                        *)&this->UserDefinedEnumToPathName,param_1),
     this_00 == (FSoftObjectPath *)0x0)) {
    return (UObject *)0x0;
  }
  pUVar1 = FSoftObjectPath::TryLoad(this_00,(FUObjectSerializeContext *)0x0);
  if (pUVar1 == (UObject *)0x0) {
    return (UObject *)0x0;
  }
  local_res18[0] = pUVar1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
  Emplace<TObjectPtr<UObject>_>(&this->UserDefinedTypesInUse,&local_res8,(bool *)local_res18);
  return pUVar1;
}

// Serialize @ 14a1d7c40

void __thiscall URigVMHost::Serialize(URigVMHost *this,FArchive *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  URigVM *this_00;
  UObject *pUVar3;
  int iVar4;
  UClass *pUVar5;
  ForAnyElementType FVar6;
  undefined1 local_res10 [8];
  TArray<FRigVMMemoryStorageStruct_const_*,TSizedDefaultAllocator<32>_> local_68;
  TArray<UObject_const_*,TSizedDefaultAllocator<32>_> local_58;
  FSoftObjectPath local_48;
  
  UObject::Serialize((UObject *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FRigVMObjectVersion::GUID);
  if (((param_1->field_0x2b & 1) != 0) &&
     (this_00 = (this->VM).field0_0x0.DebugPtr, this_00 != (URigVM *)0x0)) {
    local_48.AssetPath.PackageName = (FName)(**(code **)(this->_padding_ + 0x338))(this,1);
    local_48.AssetPath.AssetName = (FName)(**(code **)(this->_padding_ + 0x338))(this,0);
    local_68.ArrayNum = 2;
    local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,2,0,&local_68.AllocatorInstance,2,&local_68.ArrayMax);
    *(FName *)local_68.AllocatorInstance.Data = local_48.AssetPath.PackageName;
    *(FName *)(local_68.AllocatorInstance.Data + 8) = local_48.AssetPath.AssetName;
    URigVM::GetUserDefinedDependencies(this_00,&local_58,&local_68);
    iVar4 = local_58.ArrayNum;
    pFVar1 = local_58.AllocatorInstance.Data + (longlong)local_58.ArrayNum * 8;
    FVar6.Data = local_58.AllocatorInstance.Data;
    while( true ) {
      if (local_58.ArrayNum != iVar4) {
        `TCheckedPointerIterator<UObject_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (FVar6.Data == pFVar1) break;
      pUVar3 = *(UObject **)FVar6.Data;
      if (pUVar3 != (UObject *)0x0) {
        pUVar5 = Z_Construct_UClass_UUserDefinedStruct_NoRegister();
        iVar2 = (int)pUVar5->_padding_;
        if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar2) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
            &pUVar5->_padding_)) {
          pUVar5 = Z_Construct_UClass_UUserDefinedEnum_NoRegister();
          iVar2 = (int)pUVar5->_padding_;
          if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar2) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
              &pUVar5->_padding_)) goto LAB_14a1d7ddc;
        }
        local_48.AssetPath.PackageName.ComparisonIndex.Value = 0;
        local_48.AssetPath.PackageName.Number = 0;
        local_48.AssetPath.AssetName.ComparisonIndex.Value = 0;
        local_48.AssetPath.AssetName.Number = 0;
        local_48.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_48.SubPathString.Data.ArrayNum = 0;
        local_48.SubPathString.Data.ArrayMax = 0;
        FSoftObjectPath::SetPath(&local_48,pUVar3);
        FSoftObjectPath::Serialize(&local_48,param_1);
        if (local_48.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.SubPathString.Data.AllocatorInstance.Data);
        }
      }
LAB_14a1d7ddc:
      FVar6.Data = FVar6.Data + 8;
    }
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
  }
  if ((param_1->field_0x28 & 1) != 0) {
    (**(code **)(this->_padding_ + 0x2e8))(this);
  }
  return;
}

// Serialize @ 14a1d7e50

void __thiscall URigVMHost::Serialize(URigVMHost *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SetAbsoluteAndDeltaTime @ 14a1d7e80

void __thiscall URigVMHost::SetAbsoluteAndDeltaTime(URigVMHost *this,float param_1,float param_2)

{
  this->AbsoluteTime = param_1;
  this->DeltaTime = param_2;
  return;
}

// SetAbsoluteTime @ 14a1d7ea0

void __thiscall URigVMHost::SetAbsoluteTime(URigVMHost *this,float param_1,bool param_2)

{
  this->AbsoluteTime = param_1;
  this->bAccumulateTime = false;
  if (param_2) {
    this->DeltaTime = 0.0;
  }
  return;
}

// SetDeltaTime @ 14a1d7ec0

void __thiscall URigVMHost::SetDeltaTime(URigVMHost *this,float param_1)

{
  this->DeltaTime = param_1;
  return;
}

// SetEventQueue @ 14a1d7ed0

void __thiscall
URigVMHost::SetEventQueue(URigVMHost *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=(&this->EventQueue,param_1);
  return;
}

// SetFramesPerSecond @ 14a1d81f0

void __thiscall URigVMHost::SetFramesPerSecond(URigVMHost *this,float param_1)

{
  this->FramesPerSecond = param_1;
  return;
}

// SetVariableFromString @ 14a1d8340

bool __thiscall URigVMHost::SetVariableFromString(URigVMHost *this,FName *param_1,FString *param_2)

{
  return false;
}

// StaticRegisterNativesURigVMHost @ 14a1ea980

void __cdecl URigVMHost::StaticRegisterNativesURigVMHost(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x17;
  local_18.DataPtr = Z_Construct_UClass_URigVMHost_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SupportsEvent @ 14a1ead60

bool __thiscall URigVMHost::SupportsEvent(URigVMHost *this,FName *param_1)

{
  URigVM *pUVar1;
  undefined1 uVar2;
  
  pUVar1 = (this->VM).field0_0x0.DebugPtr;
  if (pUVar1 != (URigVM *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014a1ead6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(pUVar1->_padding_ + 0x3b8))();
    return (bool)uVar2;
  }
  return false;
}

// SwapVMToNativizedIfRequired @ 14a1eae00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall URigVMHost::SwapVMToNativizedIfRequired(URigVMHost *this,UClass *param_1)

{
  code *pcVar1;
  FName FVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  URigVMHost *pUVar6;
  TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_> *pTVar7;
  UPackage *pUVar8;
  FName *pFVar9;
  URigVM *pUVar10;
  UClass *pUVar11;
  longlong *plVar12;
  undefined1 auStackY_138 [32];
  FName local_f8;
  TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> local_f0;
  TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> local_e0;
  TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_> local_d0;
  TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_> local_c0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_138;
  if (((uint)this->_padding_ >> 0xc & 1) != 0) {
    return;
  }
  if ((this->VM).field0_0x0.DebugPtr == (URigVM *)0x0) {
    return;
  }
  iVar5 = (**(code **)(*(longlong *)CVarRigVMDisableNativizedVMs._padding_ + 200))();
  if ((param_1 != (UClass *)0x0) || (iVar5 != 0)) goto LAB_14a1eaf4a;
  if ((this->_padding_ & 0x10) == 0) {
    pUVar6 = UClass::GetDefaultObject<URigVMHost>((UClass *)this->_padding_);
    if ((pUVar6 == (URigVMHost *)0x0) ||
       (pUVar10 = (pUVar6->VM).field0_0x0.DebugPtr, pUVar10 == (URigVM *)0x0)) goto LAB_14a1eaf4a;
    cVar4 = (**(code **)(pUVar10->_padding_ + 0x2c0))();
    pUVar10 = (pUVar6->VM).field0_0x0.DebugPtr;
    if (cVar4 != '\0') {
      param_1 = (UClass *)pUVar10->_padding_;
      goto LAB_14a1eaf4a;
    }
    (**(code **)(this->_padding_ + 0x378))(this,&local_f0,1);
    pTVar7 = RigVMTypeUtils::GetExternalVariableDefs(&local_d0,&local_f0);
    param_1 = URigVM::GetNativizedClass(pUVar10,pTVar7);
    local_e0.AllocatorInstance.Data = local_f0.AllocatorInstance.Data;
    if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.AllocatorInstance.Data);
      local_e0.AllocatorInstance.Data = local_f0.AllocatorInstance.Data;
    }
  }
  else {
    pUVar10 = (this->VM).field0_0x0.DebugPtr;
    (**(code **)(this->_padding_ + 0x378))(this,&local_e0,1);
    pTVar7 = RigVMTypeUtils::GetExternalVariableDefs(&local_c0,&local_e0);
    param_1 = URigVM::GetNativizedClass(pUVar10,pTVar7);
    if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.AllocatorInstance.Data);
    }
  }
  if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.AllocatorInstance.Data);
  }
LAB_14a1eaf4a:
  cVar4 = (**(code **)(((this->VM).field0_0x0.DebugPtr)->_padding_ + 0x2c0))();
  if (cVar4 == '\0') {
    if (param_1 == (UClass *)0x0) {
      return;
    }
    if (iVar5 != 0) {
      return;
    }
    lVar3 = ((this->VM).field0_0x0.DebugPtr)->_padding_;
    pUVar10 = (this->VM).field0_0x0.DebugPtr;
    pcVar1 = *(code **)(pUVar10->_padding_ + 0x170);
    pUVar8 = GetTransientPackage();
    (*pcVar1)(pUVar10,0,pUVar8,0x34);
    UObjectBaseUtility::MarkAsGarbage((UObjectBaseUtility *)(this->VM).field0_0x0.DebugPtr);
    pFVar9 = ::FName::FName(&local_f8,L"RigVM_NVMB");
    FVar2 = *pFVar9;
    if (FVar2 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar11 = Z_Construct_UClass_URigVM_NoRegister();
    CheckIsClassChildOf_Internal(pUVar11,param_1);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,param_1);
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_a8._8_8_ = this;
    local_a8._16_8_ = FVar2;
    local_a8._24_4_ = (EObjectFlags)lVar3;
    pUVar10 = (URigVM *)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8)
    ;
    if (local_a8._64_8_ != 0) {
      plVar12 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar12 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
  }
  else {
    if ((param_1 != (UClass *)0x0) && (iVar5 == 0)) {
      return;
    }
    lVar3 = ((this->VM).field0_0x0.DebugPtr)->_padding_;
    pUVar10 = (this->VM).field0_0x0.DebugPtr;
    pcVar1 = *(code **)(pUVar10->_padding_ + 0x170);
    pUVar8 = GetTransientPackage();
    (*pcVar1)(pUVar10,0,pUVar8);
    UObjectBaseUtility::MarkAsGarbage((UObjectBaseUtility *)(this->VM).field0_0x0.DebugPtr);
    pFVar9 = ::FName::FName(&local_f8,L"RigVM_NVMA");
    pUVar10 = NewObject<URigVM>((UObject *)this,*pFVar9,(EObjectFlags)lVar3,(UObject *)0x0,false,
                                (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (URigVM *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  (this->VM).field0_0x0.DebugPtr = pUVar10;
  return;
}

// UpdateVMSettings @ 14a1ebce0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall URigVMHost::UpdateVMSettings(URigVMHost *this)

{
  int iVar1;
  FRigVMExtendedExecuteContext *this_00;
  TFunction<void___cdecl(FRigVMLogSettings_const_&,FRigVMExecuteContext_const_*,FString_const_&)>
  *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  FRigVMExecuteContext *pFVar7;
  
  if ((this->VM).field0_0x0.DebugPtr == (URigVM *)0x0) {
    return;
  }
  if (this->RigVMExtendedExecuteContext == (FRigVMExtendedExecuteContext *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RigVMExtendedExecuteContext != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMHost.h"
                       ,0x14c,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this_00 = this->RigVMExtendedExecuteContext;
  iVar1 = (this->VMRuntimeSettings).MaximumArraySize;
  pTVar2 = (this->VMRuntimeSettings).LogFunction.Object;
  pTVar3 = (this->VMRuntimeSettings).LogFunction.SharedReferenceCount.ReferenceController;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pFVar7 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(this_00);
    (pFVar7->RuntimeSettings).MaximumArraySize = iVar1;
  }
  else {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    pFVar7 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(this_00);
    (pFVar7->RuntimeSettings).MaximumArraySize = iVar1;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (pFVar7->RuntimeSettings).LogFunction.SharedReferenceCount.ReferenceController;
  (pFVar7->RuntimeSettings).LogFunction.Object = pTVar2;
  (pFVar7->RuntimeSettings).LogFunction.SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  pFVar7 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(this_00);
  if ((pFVar7->RuntimeSettings).MaximumArraySize < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetPublicData<>().RuntimeSettings.MaximumArraySize > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMExecuteContext.h"
                       ,0x310,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// _getUObject @ 14a1f8dc0

UObject * __thiscall URigVMHost::_getUObject(URigVMHost *this)

{
  return (UObject *)&this[-1].EventQueueToRunOnceMutex;
}

// execCanExecute @ 14a1f8dd0

void __cdecl URigVMHost::execCanExecute(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2b8))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execExecute @ 14a1f8e10

void __cdecl URigVMHost::execExecute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  uchar *puVar3;
  uchar local_res8 [8];
  
  local_res8[0] = '\0';
  local_res8[1] = '\0';
  local_res8[2] = '\0';
  local_res8[3] = '\0';
  local_res8[4] = '\0';
  local_res8[5] = '\0';
  local_res8[6] = '\0';
  local_res8[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar3 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x2f0))(param_1,puVar3);
  *(undefined1 *)param_3 = uVar2;
  return;
}

// execExecuteEvent @ 14a1f8ec0

void __cdecl URigVMHost::execExecuteEvent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FName *pFVar3;
  FName local_res10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pFVar3 = &local_res10;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar3 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = ExecuteEvent((URigVMHost *)param_1,pFVar3);
  *(bool *)param_3 = bVar2;
  return;
}

// execFindRigVMHosts @ 14a1f8f70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl URigVMHost::execFindRigVMHosts(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  UObject *pUVar3;
  UObjectBaseUtility *this;
  bool bVar4;
  EInternalObjectFlags EVar5;
  uint uVar6;
  int iVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  longlong lVar10;
  UObject *local_res10;
  UObjectBaseUtility *local_res18;
  UObjectBaseUtility *local_58;
  ForAnyElementType local_50;
  undefined8 local_48;
  TObjectIterator<URigVMHost> local_40;
  
  local_res18 = (UObjectBaseUtility *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar3 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  this = local_res18;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48 = 0;
  if (local_res18 != (UObjectBaseUtility *)0x0) {
    pUVar8 = Z_Construct_UClass_AActor_NoRegister();
    iVar7 = (int)pUVar8->_padding_;
    if ((*(int *)(*(longlong *)&this->field_0x10 + 0x38) < iVar7) ||
       (pUVar9 = (UObject *)this,
       (longlong *)
       *(undefined1 **)(*(longlong *)(*(longlong *)&this->field_0x10 + 0x30) + (longlong)iVar7 * 8)
       != &pUVar8->_padding_)) {
      pUVar8 = Z_Construct_UClass_AActor_NoRegister();
      pUVar9 = UObjectBaseUtility::GetTypedOuter(this,pUVar8);
    }
    local_40.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_40.ObjectArray.ArrayNum = 0;
    local_40.ObjectArray.ArrayMax = 0;
    local_40.Index = 0xffffffff;
    EVar5 = UE::GetAsyncLoadingInternalFlagsExclusion();
    pUVar8 = StaticClass();
    GetObjectsOfClass(pUVar8,&local_40.ObjectArray,true,RF_ClassDefaultObject,
                      EVar5 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
LAB_14a1f90c8:
    do {
      TObjectIterator<URigVMHost>::Advance(&local_40);
      lVar10 = (longlong)local_40.Index;
      if ((local_40.Index < 0) || (local_40.ObjectArray.ArrayNum <= local_40.Index))
      goto LAB_14a1f92b1;
      uVar6 = 0;
      if (local_40.Index < local_40.ObjectArray.ArrayNum) {
        uVar6 = (uint)~local_40.Index >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_58 = *(UObjectBaseUtility **)(local_40.ObjectArray.AllocatorInstance.Data + lVar10 * 8);
    } while (local_58 == (UObjectBaseUtility *)0x0);
    lVar10 = *(longlong *)&local_58->field_0x10;
    if ((pUVar3 != (UObject *)0x0) && (pUVar8 = StaticClass(), pUVar8 != (UClass *)0x0)) {
      iVar7 = (int)pUVar8->_padding_;
      if ((*(int *)&pUVar3[1].field_0x10 < iVar7) ||
         ((longlong *)*(undefined1 **)(*(longlong *)&pUVar3[1].field_0x8 + (longlong)iVar7 * 8) !=
          &pUVar8->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        if ((lVar10 == 0) || (pUVar8 = StaticClass(), pUVar8 == (UClass *)0x0)) goto LAB_14a1f90c8;
        iVar7 = (int)pUVar8->_padding_;
        if ((*(int *)&pUVar3[1].field_0x10 < iVar7) ||
           ((longlong *)*(undefined1 **)(*(longlong *)&pUVar3[1].field_0x8 + (longlong)iVar7 * 8) !=
            &pUVar8->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) goto LAB_14a1f90c8;
        if ((*(int *)(lVar10 + 0x38) < *(int *)&pUVar3[1].field_0x10) ||
           (*(undefined1 **)
             (*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)&pUVar3[1].field_0x10 * 8) !=
            &pUVar3[1].field_0x8)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) goto LAB_14a1f90c8;
      }
    }
    bVar4 = UObjectBaseUtility::IsInOuter(local_58,(UObject *)this);
    if ((bVar4) ||
       ((pUVar9 != (UObject *)0x0 && (bVar4 = UObjectBaseUtility::IsInOuter(local_58,pUVar9), bVar4)
        ))) {
      if ((local_50.Data <= (FScriptContainerElement *)&local_58) &&
         (((FScriptContainerElement *)&local_58 < local_50.Data + (longlong)local_48._4_4_ * 8 &&
          (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar4)))) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar7 = (int)local_48;
      if ((int)local_48 == local_48._4_4_) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_50,(int *)((longlong)&local_48 + 4));
      }
      local_48 = CONCAT44(local_48._4_4_,iVar7 + 1);
      *(UObjectBaseUtility **)(local_50.Data + (longlong)iVar7 * 8) = local_58;
    }
    goto LAB_14a1f90c8;
  }
LAB_14a1f92c3:
  if (param_3 != &local_50) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_50.Data;
    *(int *)((longlong)param_3 + 8) = (int)local_48;
    local_50.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 0xc) = local_48._4_4_;
    local_48 = 0;
  }
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  return;
LAB_14a1f92b1:
  if (local_40.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.ObjectArray.AllocatorInstance.Data);
  }
  goto LAB_14a1f92c3;
}

// execGetAbsoluteTime @ 14a1f9330

void __cdecl URigVMHost::execGetAbsoluteTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[1].field_0x24;
  return;
}

// execGetCurrentFramesPerSecond @ 14a1f9360

void __cdecl
URigVMHost::execGetCurrentFramesPerSecond(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = __real_322bcc77;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar2 = *(float *)(param_1 + 2);
  if ((*(float *)(param_1 + 2) <= fVar1) &&
     (fVar2 = __real_42700000, fVar1 < *(float *)&param_1[1].field_0x20)) {
    *(float *)param_3 = __real_3f800000 / *(float *)&param_1[1].field_0x20;
    return;
  }
  *(float *)param_3 = fVar2;
  return;
}

// execGetDeltaTime @ 14a1f93c0

void __cdecl URigVMHost::execGetDeltaTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[1].field_0x20;
  return;
}

// execGetExtendedExecuteContext @ 14a1f93f0

void __cdecl
URigVMHost::execGetExtendedExecuteContext(UObject *param_1,FFrame *param_2,void *param_3)

{
  FRigVMExtendedExecuteContext *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = (FRigVMExtendedExecuteContext *)(**(code **)(*(longlong *)param_1 + 0x368))();
  FRigVMExtendedExecuteContext::operator=(param_3,pFVar1);
  return;
}

// execGetScriptAccessibleVariables @ 14a1f9430

void __cdecl
URigVMHost::execGetScriptAccessibleVariables(UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar1 = GetScriptAccessibleVariables((URigVMHost *)param_1,&local_18);
  if (param_3 != pTVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar1->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar1->ArrayMax;
    pTVar1->ArrayNum = 0;
    pTVar1->ArrayMax = 0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetSupportedEvents @ 14a1f94b0

void __cdecl URigVMHost::execGetSupportedEvents(UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar1 = (TArray<FName,TSizedDefaultAllocator<32>_> *)
           (**(code **)(*(longlong *)param_1 + 0x310))();
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=(param_3,pTVar1);
  return;
}

// execGetVM @ 14a1f96b0

void __cdecl URigVMHost::execGetVM(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[2].field_0x8 != 0) {
    *(undefined8 *)param_3 = *(undefined8 *)&param_1[2].field_0x8;
    return;
  }
  (**(code **)(*(longlong *)param_1 + 0x2c0))(param_1,1);
  if (*(longlong *)&param_1[2].field_0x8 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("VM",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMHost.cpp"
                       ,0x2f0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[2].field_0x8;
  return;
}

// execGetVariableAsString @ 14a1f9740

void __cdecl URigVMHost::execGetVariableAsString(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res10;
  undefined1 local_18 [16];
  
  local_res10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_3 != local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(undefined8 *)param_3 = 0;
    *(undefined8 *)((longlong)param_3 + 8) = 0;
  }
  return;
}

// execGetVariableType @ 14a1f97f0

void __cdecl URigVMHost::execGetVariableType(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FName *pFVar3;
  FName local_res10;
  FNameEntryId local_38;
  undefined4 uStack_34;
  FNameEntryId local_28;
  undefined4 uStack_24;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pFVar3 = &local_res10;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar3 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetPublicVariableByName((URigVMHost *)param_1,(FRigVMExternalVariable *)&local_38,pFVar3);
  bVar2 = ::FName::IsWithinBounds(local_38);
  if ((((bVar2) && (CONCAT44(uStack_34,local_38.Value) != 0)) &&
      (bVar2 = ::FName::IsWithinBounds(local_28), bVar2)) &&
     (CONCAT44(uStack_24,local_28.Value) != 0)) {
    *(longlong *)param_3 = CONCAT44(uStack_24,local_28.Value);
    return;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execIsInitRequired @ 14a1f98d0

void __cdecl URigVMHost::execIsInitRequired(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 800))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execRemoveRunOnceEvent @ 14a1f9940

void __cdecl URigVMHost::execRemoveRunOnceEvent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FName *pFVar3;
  FName local_res10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pFVar3 = &local_res10;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar3 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = RemoveRunOnceEvent((URigVMHost *)param_1,pFVar3);
  *(bool *)param_3 = bVar2;
  return;
}

// execRequestInit @ 14a1f9db0

void __cdecl URigVMHost::execRequestInit(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014a1f9dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x318))();
  return;
}

// execRequestRunOnceEvent @ 14a1f9de0

void __cdecl URigVMHost::execRequestRunOnceEvent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  undefined4 local_res8 [2];
  uchar local_res10 [8];
  
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  local_res10[4] = '\0';
  local_res10[5] = '\0';
  local_res10[6] = '\0';
  local_res10[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  puVar2 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x328))(param_1,puVar2,local_res8[0]);
  return;
}

// execSetAbsoluteAndDeltaTime @ 14a1f9fc0

void __cdecl URigVMHost::execSetAbsoluteAndDeltaTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[1].field_0x24 = local_res8[0];
  *(undefined4 *)&param_1[1].field_0x20 = local_res10[0];
  return;
}

// execSetAbsoluteTime @ 14a1fa090

void __cdecl URigVMHost::execSetAbsoluteTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  int local_res10 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[1].field_0x24 = local_res8[0];
  param_1[2].field_0x4 = 0;
  if (local_res10[0] != 0) {
    *(undefined4 *)&param_1[1].field_0x20 = 0;
  }
  return;
}

// execSetDeltaTime @ 14a1fa170

void __cdecl URigVMHost::execSetDeltaTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
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
  *(undefined4 *)&param_1[1].field_0x20 = local_res8[0];
  return;
}

// execSetFramesPerSecond @ 14a1fa200

void __cdecl URigVMHost::execSetFramesPerSecond(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
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
  *(undefined4 *)(param_1 + 2) = local_res8[0];
  return;
}

// execSetVariableFromString @ 14a1fa290

void __cdecl URigVMHost::execSetVariableFromString(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res10;
  void *local_18;
  undefined8 local_10;
  
  local_res10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_18 = (void *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 0;
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execSupportsEvent @ 14a1fa370

void __cdecl URigVMHost::execSupportsEvent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  uchar *puVar3;
  uchar local_res8 [8];
  
  local_res8[0] = '\0';
  local_res8[1] = '\0';
  local_res8[2] = '\0';
  local_res8[3] = '\0';
  local_res8[4] = '\0';
  local_res8[5] = '\0';
  local_res8[6] = '\0';
  local_res8[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar3 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x308))(param_1,puVar3);
  *(undefined1 *)param_3 = uVar2;
  return;
}

// operator() @ 15054bd30

bool __thiscall `URigVMHost::Evaluate_AnyThread'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UPackage *this_00;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2045642706327174851>);
  if (bVar2) {
    this_00 = UObjectBaseUtility::GetPackage(*(UObjectBaseUtility **)this);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_18,(UObject *)0x0);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2045642706327174851>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15054bda2;
    }
  }
  bVar2 = false;
LAB_15054bda2:
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

