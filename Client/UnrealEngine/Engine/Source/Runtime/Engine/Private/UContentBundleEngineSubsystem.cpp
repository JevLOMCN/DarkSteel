// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 18

// StaticClass @ 148a269c0

UClass * __cdecl UContentBundleEngineSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UContentBundleEngineSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ContentBundleEngineSubsystem",
               &Z_Registration_Info_UClass_UContentBundleEngineSubsystem.InnerSingleton,
               StaticRegisterNativesUContentBundleEngineSubsystem,0xf0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UContentBundleEngineSubsystem>,
               InternalVTableHelperCtorCaller<UContentBundleEngineSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UContentBundleEngineSubsystem.InnerSingleton;
}

// UContentBundleEngineSubsystem @ 148a422e0

UContentBundleEngineSubsystem * __thiscall
UContentBundleEngineSubsystem::UContentBundleEngineSubsystem
          (UContentBundleEngineSubsystem *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UEngineSubsystem::UEngineSubsystem((UEngineSubsystem *)this,param_1);
  this_00 = &(this->ContentBundleTypeFactoryClass).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UContentBundleEngineSubsystem__6B_;
  *(undefined8 *)&this->OnContentBundleClientRegistered = 0;
  *(undefined8 *)&(this->OnContentBundleClientRegistered).field_0x8 = 0;
  *(undefined8 *)&(this->OnContentBundleClientRegistered).field_0x10 = 0;
  *(undefined8 *)&(this->OnContentBundleClientRegistered).field_0x18 = 2;
  *(undefined8 *)&this->OnContentBundleClientUnregistered = 0;
  *(undefined8 *)&(this->OnContentBundleClientUnregistered).field_0x8 = 0;
  *(undefined8 *)&(this->OnContentBundleClientUnregistered).field_0x10 = 0;
  *(undefined8 *)&(this->OnContentBundleClientUnregistered).field_0x18 = 2;
  *(undefined8 *)&this->OnContentBundleClientRequestedContentInjection = 0;
  *(undefined8 *)&(this->OnContentBundleClientRequestedContentInjection).field_0x8 = 0;
  *(undefined8 *)&(this->OnContentBundleClientRequestedContentInjection).field_0x10 = 0;
  *(undefined8 *)&(this->OnContentBundleClientRequestedContentInjection).field_0x18 = 2;
  *(undefined8 *)&this->OnContentBundleClientRequestedContentRemoval = 0;
  *(undefined8 *)&(this->OnContentBundleClientRequestedContentRemoval).field_0x8 = 0;
  *(undefined8 *)&(this->OnContentBundleClientRequestedContentRemoval).field_0x10 = 0;
  *(undefined8 *)&(this->OnContentBundleClientRequestedContentRemoval).field_0x18 = 2;
  (this->ContentBundleClients).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContentBundleClients).ArrayNum = 0;
  (this->ContentBundleClients).ArrayMax = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->ContentBundleTypeFactoryClass).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->ContentBundleTypeFactoryClass).SoftObjectPtr = 0;
  *(undefined8 *)&(this->ContentBundleTypeFactoryClass).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->ContentBundleTypeFactoryClass).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->ContentBundleTypeFactory).field0_0x0.DebugPtr = (UContentBundleTypeFactory *)0x0;
  return this;
}

// UContentBundleEngineSubsystem @ 148a423c0

UContentBundleEngineSubsystem * __thiscall
UContentBundleEngineSubsystem::UContentBundleEngineSubsystem(UContentBundleEngineSubsystem *this)

{
  undefined1 *this_00;
  
  UEngineSubsystem::UEngineSubsystem((UEngineSubsystem *)this);
  this_00 = &(this->ContentBundleTypeFactoryClass).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UContentBundleEngineSubsystem__6B_;
  *(undefined8 *)&this->OnContentBundleClientRegistered = 0;
  *(undefined8 *)&(this->OnContentBundleClientRegistered).field_0x8 = 0;
  *(undefined8 *)&(this->OnContentBundleClientRegistered).field_0x10 = 0;
  *(undefined8 *)&(this->OnContentBundleClientRegistered).field_0x18 = 2;
  *(undefined8 *)&this->OnContentBundleClientUnregistered = 0;
  *(undefined8 *)&(this->OnContentBundleClientUnregistered).field_0x8 = 0;
  *(undefined8 *)&(this->OnContentBundleClientUnregistered).field_0x10 = 0;
  *(undefined8 *)&(this->OnContentBundleClientUnregistered).field_0x18 = 2;
  *(undefined8 *)&this->OnContentBundleClientRequestedContentInjection = 0;
  *(undefined8 *)&(this->OnContentBundleClientRequestedContentInjection).field_0x8 = 0;
  *(undefined8 *)&(this->OnContentBundleClientRequestedContentInjection).field_0x10 = 0;
  *(undefined8 *)&(this->OnContentBundleClientRequestedContentInjection).field_0x18 = 2;
  *(undefined8 *)&this->OnContentBundleClientRequestedContentRemoval = 0;
  *(undefined8 *)&(this->OnContentBundleClientRequestedContentRemoval).field_0x8 = 0;
  *(undefined8 *)&(this->OnContentBundleClientRequestedContentRemoval).field_0x10 = 0;
  *(undefined8 *)&(this->OnContentBundleClientRequestedContentRemoval).field_0x18 = 2;
  (this->ContentBundleClients).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContentBundleClients).ArrayNum = 0;
  (this->ContentBundleClients).ArrayMax = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->ContentBundleTypeFactoryClass).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->ContentBundleTypeFactoryClass).SoftObjectPtr = 0;
  *(undefined8 *)&(this->ContentBundleTypeFactoryClass).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->ContentBundleTypeFactoryClass).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->ContentBundleTypeFactory).field0_0x0.DebugPtr = (UContentBundleTypeFactory *)0x0;
  return this;
}

// ~UContentBundleEngineSubsystem @ 148a44480

void __thiscall
UContentBundleEngineSubsystem::~UContentBundleEngineSubsystem(UContentBundleEngineSubsystem *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UContentBundleEngineSubsystem__6B_;
  pvVar1 = *(void **)&(this->ContentBundleTypeFactoryClass).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<TSharedPtr<FContentBundleClient,1>,int>
            ((TSharedPtr<FContentBundleClient,1> *)
             (this->ContentBundleClients).AllocatorInstance.Data,
             (this->ContentBundleClients).ArrayNum);
  pFVar2 = (this->ContentBundleClients).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnContentBundleClientRequestedContentRemoval).field_0x8,
             *(int *)&(this->OnContentBundleClientRequestedContentRemoval).field_0x10);
  pvVar1 = *(void **)&(this->OnContentBundleClientRequestedContentRemoval).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnContentBundleClientRequestedContentRemoval);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnContentBundleClientRequestedContentInjection).field_0x8,
             *(int *)&(this->OnContentBundleClientRequestedContentInjection).field_0x10);
  pvVar1 = *(void **)&(this->OnContentBundleClientRequestedContentInjection).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnContentBundleClientRequestedContentInjection);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnContentBundleClientUnregistered).field_0x8,
             *(int *)&(this->OnContentBundleClientUnregistered).field_0x10);
  pvVar1 = *(void **)&(this->OnContentBundleClientUnregistered).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnContentBundleClientUnregistered);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnContentBundleClientRegistered).field_0x8,
             *(int *)&(this->OnContentBundleClientRegistered).field_0x10);
  pvVar1 = *(void **)&(this->OnContentBundleClientRegistered).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnContentBundleClientRegistered);
  UEngineSubsystem::~UEngineSubsystem((UEngineSubsystem *)this);
  return;
}

// Deinitialize @ 148a4fad0

void __thiscall UContentBundleEngineSubsystem::Deinitialize(UContentBundleEngineSubsystem *this)

{
  int *piVar1;
  
  DestructItems<TSharedPtr<FContentBundleClient,1>,int>
            ((TSharedPtr<FContentBundleClient,1> *)
             (this->ContentBundleClients).AllocatorInstance.Data,
             (this->ContentBundleClients).ArrayNum);
  piVar1 = &(this->ContentBundleClients).ArrayMax;
  (this->ContentBundleClients).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->ContentBundleClients).AllocatorInstance,0,piVar1);
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FWorldDelegates::OnPreWorldInitialization,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FWorldDelegates::OnPostWorldCleanup,this);
  (this->ContentBundleTypeFactory).field0_0x0.DebugPtr = (UContentBundleTypeFactory *)0x0;
  return;
}

// FindRegisteredClient @ 148a52af0

TSharedPtr<FContentBundleClient,1> * __thiscall
UContentBundleEngineSubsystem::FindRegisteredClient
          (UContentBundleEngineSubsystem *this,FContentBundleClient *param_1)

{
  code *pcVar1;
  bool bVar2;
  UContentBundleDescriptor *pUVar3;
  TSharedPtr<FContentBundleClient,1> *pTVar4;
  
  pUVar3 = (UContentBundleDescriptor *)
           FWeakObjectPtr::Get(&(param_1->ContentBundleDescriptor).WeakPtr);
  pTVar4 = FindRegisteredClient(this,pUVar3);
  if (((pTVar4 != (TSharedPtr<FContentBundleClient,1> *)0x0) && (pTVar4->Object != param_1)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("RegisteredClient == nullptr || RegisteredClient->Get() == &InClient",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\ContentBundle\\ContentBundleEngineSubsystem.cpp"
                         ,0x92,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TSharedPtr<FContentBundleClient,1> *)(*pcVar1)();
    return pTVar4;
  }
  return pTVar4;
}

// FindRegisteredClient @ 148a52b60

TSharedPtr<FContentBundleClient,1> * __thiscall
UContentBundleEngineSubsystem::FindRegisteredClient
          (UContentBundleEngineSubsystem *this,UContentBundleDescriptor *param_1)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FContentBundleClient,1> *pTVar3;
  UContentBundleDescriptor *pUVar4;
  TSharedPtr<FContentBundleClient,1> *pTVar5;
  
  pTVar3 = (TSharedPtr<FContentBundleClient,1> *)(this->ContentBundleClients).AllocatorInstance.Data
  ;
  pTVar5 = pTVar3 + (this->ContentBundleClients).ArrayNum;
  while( true ) {
    if (pTVar3 == pTVar5) {
      return (TSharedPtr<FContentBundleClient,1> *)0x0;
    }
    if ((pTVar3->Object == (FContentBundleClient *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) break;
    pUVar4 = (UContentBundleDescriptor *)
             FWeakObjectPtr::Get(&(pTVar3->Object->ContentBundleDescriptor).WeakPtr);
    if (pUVar4 == param_1) {
      return pTVar3;
    }
    pTVar3 = pTVar3 + 1;
  }
  pcVar1 = (code *)swi(3);
  pTVar3 = (TSharedPtr<FContentBundleClient,1> *)(*pcVar1)();
  return pTVar3;
}

// Get @ 148a53b20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UContentBundleEngineSubsystem * __cdecl UContentBundleEngineSubsystem::Get(void)

{
  code *pcVar1;
  bool bVar2;
  UContentBundleEngineSubsystem *pUVar3;
  
  if (GEngine != (UEngine *)0x0) {
    pUVar3 = UEngine::GetEngineSubsystem<UContentBundleEngineSubsystem>(GEngine);
    return pUVar3;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\ContentBundle\\ContentBundleEngineSubsystem.cpp"
                     ,0x86,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UContentBundleEngineSubsystem *)(*pcVar1)();
    return pUVar3;
  }
  return (UContentBundleEngineSubsystem *)0x0;
}

// GetContentBundleDescriptor @ 148a54dd0

UContentBundleDescriptor * __thiscall
UContentBundleEngineSubsystem::GetContentBundleDescriptor
          (UContentBundleEngineSubsystem *this,FGuid *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UContentBundleDescriptor *pUVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  iVar1 = (this->ContentBundleClients).ArrayNum;
  pFVar5 = (this->ContentBundleClients).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->ContentBundleClients).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FContentBundleClient,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar6) break;
    if ((*(longlong *)pFVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UContentBundleDescriptor *)(*pcVar2)();
      return pUVar4;
    }
    pUVar4 = (UContentBundleDescriptor *)
             FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)pFVar5 + 8));
    if ((((pUVar4->Guid).D == param_1->D && (pUVar4->Guid).C == param_1->C) &&
        (pUVar4->Guid).B == param_1->B) && (pUVar4->Guid).A == param_1->A) {
      return pUVar4;
    }
    pFVar5 = pFVar5 + 0x10;
  }
  return (UContentBundleDescriptor *)0x0;
}

// GetPrivateStaticClass @ 148a59ca0

UClass * __cdecl UContentBundleEngineSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UContentBundleEngineSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ContentBundleEngineSubsystem",
               &Z_Registration_Info_UClass_UContentBundleEngineSubsystem.InnerSingleton,
               StaticRegisterNativesUContentBundleEngineSubsystem,0xf0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UContentBundleEngineSubsystem>,
               InternalVTableHelperCtorCaller<UContentBundleEngineSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UContentBundleEngineSubsystem.InnerSingleton;
}

// Initialize @ 148a5c010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UContentBundleEngineSubsystem::Initialize
          (UContentBundleEngineSubsystem *this,FSubsystemCollectionBase *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  longlong *plVar7;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pUVar4 = (UClass *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ContentBundleTypeFactoryClass)
  ;
  if (pUVar4 != (UClass *)0x0) {
    pUVar5 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if (((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
        ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
         == &pUVar5->_padding_)) &&
       (pUVar5 = UContentBundleTypeFactory::StaticClass(), pUVar5 != (UClass *)0x0)) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)pUVar4->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) goto LAB_148a5c0a9;
    }
  }
  pUVar4 = UContentBundleTypeFactory::StaticClass();
LAB_148a5c0a9:
  local_b8 = 0;
  local_b0 = 0;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar5 = UContentBundleTypeFactory::StaticClass();
  CheckIsClassChildOf_Internal(pUVar5,pUVar4);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar4);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._16_4_ = 0;
  local_98._20_4_ = 0;
  local_98._24_4_ = RF_NoFlags;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = this;
  pUVar6 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar7 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar6 == (UObject *)0x0)) {
    (this->ContentBundleTypeFactory).field0_0x0.DebugPtr = (UContentBundleTypeFactory *)pUVar6;
    if ((pUVar6 == (UObject *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContentBundleTypeFactory",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\ContentBundle\\ContentBundleEngineSubsystem.cpp"
                           ,0x17,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    UE::GC::MarkAsReachable(pUVar6);
    (this->ContentBundleTypeFactory).field0_0x0.DebugPtr = (UContentBundleTypeFactory *)pUVar6;
  }
  TMulticastDelegateRegistration<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
  ::AddUObject<UContentBundleEngineSubsystem>
            ((TMulticastDelegateRegistration<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
              *)&FWorldDelegates::OnPreWorldInitialization,(UContentBundleEngineSubsystem *)local_a8
             ,(pmf_78b6fe56)this);
  TMulticastDelegateRegistration<void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>::
  AddUObject<UContentBundleEngineSubsystem>
            ((TMulticastDelegateRegistration<void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
              *)&FWorldDelegates::OnPostWorldCleanup,(UContentBundleEngineSubsystem *)(local_a8 + 8)
             ,(pmf_4d370f30)this);
  return;
}

// OnPreWorldInitialization @ 148a5fde0

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UContentBundleEngineSubsystem::OnPreWorldInitialization
          (UContentBundleEngineSubsystem *this,UWorld *param_1,FWorldInitializationValues *param_2)

{
  pmf_c2420d18 pVar1;
  UWorldPartition *pUVar2;
  UClass *pUVar3;
  UContentBundleManager *pUVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [24];
  UWorld *local_90;
  longlong local_58;
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pUVar2 = UWorld::GetWorldPartition(param_1);
  if ((pUVar2 == (UWorldPartition *)0x0) ||
     ((param_1->ContentBundleManager).field0_0x0.DebugPtr != (UContentBundleManager *)0x0)) {
    pUVar2 = UWorld::GetWorldPartition(param_1);
    if ((pUVar2 == (UWorldPartition *)0x0) &&
       ((param_1->ContentBundleManager).field0_0x0.DebugPtr != (UContentBundleManager *)0x0)) {
      (param_1->ContentBundleManager).field0_0x0.DebugPtr = (UContentBundleManager *)0x0;
    }
  }
  else {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar3 = UContentBundleManager::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)(local_a8 + 0x10),pUVar3);
    local_90 = param_1;
    pUVar4 = (UContentBundleManager *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)(local_a8 + 0x10));
    if (local_58 != 0) {
      plVar6 = local_48;
      if (local_30 != (longlong *)0x0) {
        plVar6 = local_30;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UContentBundleManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (param_1->ContentBundleManager).field0_0x0.DebugPtr = pUVar4;
  }
  pVar1 = (pmf_c2420d18)(param_1->ContentBundleManager).field0_0x0.DebugPtr;
  if (pVar1 != (pmf_c2420d18)0x0) {
    lVar5 = (**(code **)(*(longlong *)pVar1 + 0x180))(pVar1);
    TMulticastDelegateRegistration<void___cdecl(UWorldPartition_*),FDefaultDelegateUserPolicy>::
    AddUObject<UContentBundleManager>
              ((TMulticastDelegateRegistration<void___cdecl(UWorldPartition_*),FDefaultDelegateUserPolicy>
                *)(lVar5 + 0x718),(UContentBundleManager *)local_a8,pVar1);
    lVar5 = (**(code **)(*(longlong *)pVar1 + 0x180))(pVar1);
    TMulticastDelegateRegistration<void___cdecl(UWorldPartition_*),FDefaultDelegateUserPolicy>::
    AddUObject<UContentBundleManager>
              ((TMulticastDelegateRegistration<void___cdecl(UWorldPartition_*),FDefaultDelegateUserPolicy>
                *)(lVar5 + 0x738),(UContentBundleManager *)local_a8,pVar1);
  }
  return;
}

// OnWorldPostCleanup @ 148a60480

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
UContentBundleEngineSubsystem::OnWorldPostCleanup
          (UContentBundleEngineSubsystem *this,UWorld *param_1,bool param_2,bool param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  UContentBundleManager *pUVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  undefined7 in_register_00000081;
  undefined7 in_register_00000089;
  undefined1 local_res10 [8];
  
  pUVar4 = (param_1->ContentBundleManager).field0_0x0.DebugPtr;
  if (pUVar4 != (UContentBundleManager *)0x0) {
    lVar5 = (**(code **)(pUVar4->_padding_ + 0x180))
                      (pUVar4,param_1,CONCAT71(in_register_00000081,param_2),
                       CONCAT71(in_register_00000089,param_3));
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(lVar5 + 0x718),pUVar4);
    lVar5 = (**(code **)(pUVar4->_padding_ + 0x180))(pUVar4);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(lVar5 + 0x738),pUVar4);
    pFVar6 = (pUVar4->ContentBundleContainers).AllocatorInstance.Data;
    iVar3 = (pUVar4->ContentBundleContainers).ArrayNum;
    pFVar2 = pFVar6 + (longlong)iVar3 * 8;
    while( true ) {
      if ((pUVar4->ContentBundleContainers).ArrayNum != iVar3) {
        `TCheckedPointerIterator<TUniquePtr<FContentBundleContainer,TDefaultDelete<FContentBundleContainer>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar6 == pFVar2) break;
      FContentBundleContainer::Deinitialize(*(FContentBundleContainer **)pFVar6);
      pFVar6 = pFVar6 + 8;
    }
    DestructItems<TUniquePtr<FContentBundleContainer,TDefaultDelete<FContentBundleContainer>_>,int>
              ((TUniquePtr<FContentBundleContainer,TDefaultDelete<FContentBundleContainer>_> *)
               (pUVar4->ContentBundleContainers).AllocatorInstance.Data,
               (pUVar4->ContentBundleContainers).ArrayNum);
    piVar1 = &(pUVar4->ContentBundleContainers).ArrayMax;
    (pUVar4->ContentBundleContainers).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(pUVar4->ContentBundleContainers).AllocatorInstance,0,piVar1);
    }
  }
  return;
}

// RegisterContentBundle @ 148a61fc0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FContentBundleClient,1> * __thiscall
UContentBundleEngineSubsystem::RegisterContentBundle
          (UContentBundleEngineSubsystem *this,
          TSharedPtr<FContentBundleClient,1> *__return_storage_ptr__,
          UContentBundleDescriptor *param_1,FString *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  TArray<TSharedPtr<FContentBundleClient,1>,TSizedDefaultAllocator<32>_> *pTVar3;
  UContentBundleTypeFactory *pUVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  longlong *plVar7;
  TReferenceControllerBase<1> *pTVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  char cVar12;
  int iVar13;
  uint uVar14;
  TSharedPtr<FContentBundleClient,1> *pTVar15;
  FScriptContainerElement *pFVar16;
  FContentBundleClient *pFVar17;
  uint uVar18;
  longlong lVar19;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  FDestructionSentinel local_48;
  
  if (param_1 != (UContentBundleDescriptor *)0x0) {
    pTVar15 = FindRegisteredClient(this,param_1);
    if (pTVar15 == (TSharedPtr<FContentBundleClient,1> *)0x0) {
      pTVar15 = FindRegisteredClient(this,param_1);
      if ((pTVar15 != (TSharedPtr<FContentBundleClient,1> *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("FindRegisteredClient(Descriptor) == nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\ContentBundle\\ContentBundleEngineSubsystem.cpp"
                              ,0x2e,L""), bVar10)) {
        pcVar9 = (code *)swi(3);
        pTVar15 = (TSharedPtr<FContentBundleClient,1> *)(*pcVar9)();
        return pTVar15;
      }
      pUVar4 = (this->ContentBundleTypeFactory).field0_0x0.DebugPtr;
      pTVar3 = &this->ContentBundleClients;
      pFVar16 = (FScriptContainerElement *)
                (**(code **)(*(longlong *)pUVar4 + 0x2b0))(pUVar4,local_58,param_1,param_2);
      pFVar5 = (pTVar3->AllocatorInstance).Data;
      if (((pFVar5 <= pFVar16) &&
          (pFVar16 < pFVar5 + (longlong)(this->ContentBundleClients).ArrayMax * 0x10)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar9 = (code *)swi(3);
        pTVar15 = (TSharedPtr<FContentBundleClient,1> *)(*pcVar9)();
        return pTVar15;
      }
      iVar13 = (this->ContentBundleClients).ArrayNum;
      piVar1 = &(this->ContentBundleClients).ArrayMax;
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar3->AllocatorInstance,piVar1);
      }
      (this->ContentBundleClients).ArrayNum = iVar13 + 1;
      pTVar15 = (TSharedPtr<FContentBundleClient,1> *)
                ((pTVar3->AllocatorInstance).Data + (longlong)iVar13 * 0x10);
      pTVar15->Object = *(FContentBundleClient **)pFVar16;
      (pTVar15->SharedReferenceCount).ReferenceController =
           *(TReferenceControllerBase<1> **)(pFVar16 + 8);
      *(undefined8 *)(pFVar16 + 8) = 0;
      *(undefined8 *)pFVar16 = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
      if (4 < (byte)LogContentBundle._0_1_) {
        pFVar17 = TSharedPtr<FContentBundleClient,1>::operator->(pTVar15);
        FWeakObjectPtr::Get(&(pFVar17->ContentBundleDescriptor).WeakPtr);
        TSharedPtr<FContentBundleClient,1>::operator->(pTVar15);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogContentBundle);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnContentBundleClientRegistered,(FWriteAccessScope *)&local_48);
      puVar2 = &(this->OnContentBundleClientRegistered).field_0x1c;
      *(int *)puVar2 = *(int *)puVar2 + 1;
      bVar10 = false;
      uVar18 = *(int *)&(this->OnContentBundleClientRegistered).field_0x10 - 1;
      if (-1 < (int)uVar18) {
        lVar19 = (longlong)(int)uVar18 << 4;
        bVar10 = false;
        do {
          uVar14 = 0;
          if ((int)uVar18 < *(int *)&(this->OnContentBundleClientRegistered).field_0x10) {
            uVar14 = ~uVar18 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar9 = (code *)swi(3);
            pTVar15 = (TSharedPtr<FContentBundleClient,1> *)(*pcVar9)();
            return pTVar15;
          }
          lVar6 = *(longlong *)&(this->OnContentBundleClientRegistered).field_0x8;
          if (((*(int *)(lVar19 + 8 + lVar6) == 0) ||
              (plVar7 = *(longlong **)(lVar19 + lVar6), plVar7 == (longlong *)0x0)) ||
             (cVar12 = (**(code **)(*plVar7 + 0x68))(), cVar12 == '\0')) {
            bVar10 = true;
          }
          lVar19 = lVar19 + -0x10;
          uVar18 = uVar18 - 1;
        } while (-1 < (int)uVar18);
      }
      puVar2 = &(this->OnContentBundleClientRegistered).field_0x1c;
      *(int *)puVar2 = *(int *)puVar2 + -1;
      if (bVar10) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &this->OnContentBundleClientRegistered,false);
      }
      if (local_48.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
      }
      __return_storage_ptr__->Object = pTVar15->Object;
      pTVar8 = (pTVar15->SharedReferenceCount).ReferenceController;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar8;
      if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
        return __return_storage_ptr__;
      }
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
    if (1 < (byte)LogContentBundle._0_1_) {
      TSharedPtr<FContentBundleClient,1>::operator->(pTVar15);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogContentBundle);
    }
  }
  __return_storage_ptr__->Object = (FContentBundleClient *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// RequestContentInjection @ 148a66170

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UContentBundleEngineSubsystem::RequestContentInjection
          (UContentBundleEngineSubsystem *this,FContentBundleClient *param_1)

{
  code *pcVar1;
  bool bVar2;
  UContentBundleDescriptor *pUVar3;
  TSharedPtr<FContentBundleClient,1> *pTVar4;
  
  pUVar3 = (UContentBundleDescriptor *)
           FWeakObjectPtr::Get(&(param_1->ContentBundleDescriptor).WeakPtr);
  pTVar4 = FindRegisteredClient(this,pUVar3);
  if (pTVar4 == (TSharedPtr<FContentBundleClient,1> *)0x0) {
    if (1 < (byte)LogContentBundle._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogContentBundle);
    }
  }
  else {
    if (4 < (byte)LogContentBundle._0_1_) {
      FWeakObjectPtr::Get(&(param_1->ContentBundleDescriptor).WeakPtr);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogContentBundle);
    }
    if ((pTVar4->Object == (FContentBundleClient *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    TMulticastDelegate<void___cdecl(FContentBundleClient_&),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnContentBundleClientRequestedContentInjection,pTVar4->Object);
  }
  return;
}

// RequestContentRemoval @ 148a66290

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UContentBundleEngineSubsystem::RequestContentRemoval
          (UContentBundleEngineSubsystem *this,FContentBundleClient *param_1)

{
  code *pcVar1;
  bool bVar2;
  UContentBundleDescriptor *pUVar3;
  TSharedPtr<FContentBundleClient,1> *pTVar4;
  
  pUVar3 = (UContentBundleDescriptor *)
           FWeakObjectPtr::Get(&(param_1->ContentBundleDescriptor).WeakPtr);
  pTVar4 = FindRegisteredClient(this,pUVar3);
  if (pTVar4 == (TSharedPtr<FContentBundleClient,1> *)0x0) {
    if (1 < (byte)LogContentBundle._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogContentBundle);
    }
  }
  else {
    if (4 < (byte)LogContentBundle._0_1_) {
      FWeakObjectPtr::Get(&(param_1->ContentBundleDescriptor).WeakPtr);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogContentBundle);
    }
    if ((pTVar4->Object == (FContentBundleClient *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    TMulticastDelegate<void___cdecl(FContentBundleClient_&),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnContentBundleClientRequestedContentRemoval,pTVar4->Object);
  }
  return;
}

// StaticRegisterNativesUContentBundleEngineSubsystem @ 148a6a2e0

void __cdecl UContentBundleEngineSubsystem::StaticRegisterNativesUContentBundleEngineSubsystem(void)

{
  return;
}

// UnregisterContentBundle @ 148a6b0d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UContentBundleEngineSubsystem::UnregisterContentBundle
          (UContentBundleEngineSubsystem *this,FContentBundleClient *param_1)

{
  TArray<TSharedPtr<FContentBundleClient,1>,TSizedDefaultAllocator<32>_> *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UContentBundleDescriptor *pUVar4;
  TSharedPtr<FContentBundleClient,1> *pTVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  
  this_00 = &this->ContentBundleClients;
  pFVar8 = (this_00->AllocatorInstance).Data;
  pFVar7 = pFVar8;
  do {
    if (pFVar7 == pFVar8 + (longlong)(this->ContentBundleClients).ArrayNum * 0x10) {
LAB_148a6b10e:
      if (1 < (byte)LogContentBundle._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogContentBundle);
      }
      return;
    }
    if (*(FContentBundleClient **)pFVar7 == param_1) {
      uVar6 = (uint)((longlong)pFVar7 - (longlong)pFVar8 >> 4);
      if (uVar6 != 0xffffffff) {
        pUVar4 = (UContentBundleDescriptor *)
                 FWeakObjectPtr::Get(&(param_1->ContentBundleDescriptor).WeakPtr);
        pTVar5 = FindRegisteredClient(this,pUVar4);
        if ((pTVar5 == (TSharedPtr<FContentBundleClient,1> *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("FindRegisteredClient(DescriptorBackup) != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\ContentBundle\\ContentBundleEngineSubsystem.cpp"
                               ,0x47,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (4 < (byte)LogContentBundle._0_1_) {
          FWeakObjectPtr::Get(&(param_1->ContentBundleDescriptor).WeakPtr);
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogContentBundle);
        }
        uVar3 = 0;
        if ((int)uVar6 < (this->ContentBundleClients).ArrayNum) {
          uVar3 = ~uVar6 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar8 = (this_00->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x10;
        if ((*(longlong *)pFVar8 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        TMulticastDelegate<void___cdecl(FContentBundleClient_&),FDefaultDelegateUserPolicy>::
        Broadcast(&this->OnContentBundleClientUnregistered,*(FContentBundleClient **)pFVar8);
        uVar3 = 0;
        if ((int)uVar6 < (this->ContentBundleClients).ArrayNum) {
          uVar3 = ~uVar6 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        TArray<TSharedPtr<FContentBundleClient,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (this_00,uVar6);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&this_00->AllocatorInstance,(this->ContentBundleClients).ArrayNum,
                   &(this->ContentBundleClients).ArrayMax);
        pTVar5 = FindRegisteredClient(this,pUVar4);
        if (pTVar5 == (TSharedPtr<FContentBundleClient,1> *)0x0) {
          return;
        }
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("FindRegisteredClient(DescriptorBackup) == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\ContentBundle\\ContentBundleEngineSubsystem.cpp"
                           ,0x4e,L"");
        if (!bVar2) {
          return;
        }
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      goto LAB_148a6b10e;
    }
    pFVar7 = pFVar7 + 0x10;
  } while( true );
}

