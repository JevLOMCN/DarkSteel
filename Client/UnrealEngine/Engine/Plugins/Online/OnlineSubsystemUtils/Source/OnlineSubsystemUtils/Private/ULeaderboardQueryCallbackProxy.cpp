// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 13

// StaticClass @ 14ec45620

UClass * __cdecl ULeaderboardQueryCallbackProxy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULeaderboardQueryCallbackProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"LeaderboardQueryCallbackProxy",
               &Z_Registration_Info_UClass_ULeaderboardQueryCallbackProxy.InnerSingleton,
               StaticRegisterNativesULeaderboardQueryCallbackProxy,0xb8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULeaderboardQueryCallbackProxy>,
               InternalVTableHelperCtorCaller<ULeaderboardQueryCallbackProxy>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULeaderboardQueryCallbackProxy.InnerSingleton;
}

// ULeaderboardQueryCallbackProxy @ 14ec54800

ULeaderboardQueryCallbackProxy * __thiscall
ULeaderboardQueryCallbackProxy::ULeaderboardQueryCallbackProxy
          (ULeaderboardQueryCallbackProxy *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULeaderboardQueryCallbackProxy__6B_;
  *(undefined8 *)&this->OnSuccess = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x8 = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x10 = 0;
  *(undefined8 *)&this->OnFailure = 0;
  *(undefined8 *)&(this->OnFailure).field_0x8 = 0;
  *(undefined8 *)&(this->OnFailure).field_0x10 = 0;
  *(undefined8 *)&this->LeaderboardReadCompleteDelegate = 0;
  *(undefined8 *)&(this->LeaderboardReadCompleteDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->LeaderboardReadCompleteDelegate).field_0x10 = 0;
  (this->LeaderboardReadCompleteDelegateHandle).ID = 0;
  (this->ReadObject).Object = (FOnlineLeaderboardRead *)0x0;
  (this->ReadObject).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->StatName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StatName).Data.ArrayNum = 0;
  (this->StatName).Data.ArrayMax = 0;
  (this->WorldPtr).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OnStatsRead_DelayedTimerHandle).Handle = 0;
  return this;
}

// ULeaderboardQueryCallbackProxy @ 14ec54880

ULeaderboardQueryCallbackProxy * __thiscall
ULeaderboardQueryCallbackProxy::ULeaderboardQueryCallbackProxy
          (ULeaderboardQueryCallbackProxy *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULeaderboardQueryCallbackProxy__6B_;
  *(undefined8 *)&this->OnSuccess = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x8 = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x10 = 0;
  *(undefined8 *)&this->OnFailure = 0;
  *(undefined8 *)&(this->OnFailure).field_0x8 = 0;
  *(undefined8 *)&(this->OnFailure).field_0x10 = 0;
  *(undefined8 *)&this->LeaderboardReadCompleteDelegate = 0;
  *(undefined8 *)&(this->LeaderboardReadCompleteDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->LeaderboardReadCompleteDelegate).field_0x10 = 0;
  (this->LeaderboardReadCompleteDelegateHandle).ID = 0;
  (this->ReadObject).Object = (FOnlineLeaderboardRead *)0x0;
  (this->ReadObject).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->StatName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StatName).Data.ArrayNum = 0;
  (this->StatName).Data.ArrayMax = 0;
  (this->WorldPtr).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OnStatsRead_DelayedTimerHandle).Handle = 0;
  return this;
}

// ~ULeaderboardQueryCallbackProxy @ 14ec575b0

void __thiscall
ULeaderboardQueryCallbackProxy::~ULeaderboardQueryCallbackProxy
          (ULeaderboardQueryCallbackProxy *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7ULeaderboardQueryCallbackProxy__6B_;
  pFVar1 = (this->StatName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ReadObject).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->LeaderboardReadCompleteDelegate);
  pvVar2 = *(void **)&(this->LeaderboardReadCompleteDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->LeaderboardReadCompleteDelegate);
  pvVar2 = *(void **)&(this->OnFailure).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFailure);
  pvVar2 = *(void **)&(this->OnSuccess).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSuccess);
  UObject::~UObject((UObject *)this);
  return;
}

// BeginDestroy @ 14ec60dc0

void __thiscall ULeaderboardQueryCallbackProxy::BeginDestroy(ULeaderboardQueryCallbackProxy *this)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->ReadObject != (TSharedPtr<FOnlineLeaderboardRead,1> *)&local_18) {
    (this->ReadObject).Object = (FOnlineLeaderboardRead *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ReadObject).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  RemoveDelegate(this);
  UObject::BeginDestroy((UObject *)this);
  return;
}

// CreateProxyObjectForIntQuery @ 14ec6a710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

ULeaderboardQueryCallbackProxy * __cdecl
ULeaderboardQueryCallbackProxy::CreateProxyObjectForIntQuery
          (APlayerController *param_1,FString *param_2)

{
  UObject *pUVar1;
  UClass *pUVar2;
  ULeaderboardQueryCallbackProxy *this;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar1 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pUVar1;
  this = (ULeaderboardQueryCallbackProxy *)
         StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_StrongRefOnFrame);
  TriggerQuery(this,param_1,param_2,Int32);
  return this;
}

// GetPrivateStaticClass @ 14ec78590

UClass * __cdecl ULeaderboardQueryCallbackProxy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULeaderboardQueryCallbackProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"LeaderboardQueryCallbackProxy",
               &Z_Registration_Info_UClass_ULeaderboardQueryCallbackProxy.InnerSingleton,
               StaticRegisterNativesULeaderboardQueryCallbackProxy,0xb8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULeaderboardQueryCallbackProxy>,
               InternalVTableHelperCtorCaller<ULeaderboardQueryCallbackProxy>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULeaderboardQueryCallbackProxy.InnerSingleton;
}

// OnStatsRead @ 14ec8af40

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
ULeaderboardQueryCallbackProxy::OnStatsRead(ULeaderboardQueryCallbackProxy *this,bool param_1)

{
  FOnlineLeaderboardRead *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FVariantData *pFVar8;
  UWorld *this_00;
  FTimerManager *this_01;
  longlong lVar9;
  wchar_t *pwVar10;
  uint uVar11;
  FVariantData *pFVar12;
  FVariantData *pFVar13;
  FVariantData *pFVar14;
  uint local_res10 [2];
  undefined8 local_38;
  FSharedReferencer<1> FStack_30;
  
  RemoveDelegate(this);
  pFVar13 = (FVariantData *)0x0;
  bVar4 = false;
  local_res10[0] = 0;
  pFVar8 = pFVar13;
  if ((param_1) &&
     (pFVar8 = (FVariantData *)0x0, pFVar12 = pFVar13, pFVar14 = pFVar13, bVar5 = false,
     (this->ReadObject).Object != (FOnlineLeaderboardRead *)0x0)) {
    while( true ) {
      bVar4 = bVar5;
      if (((this->ReadObject).Object == (FOnlineLeaderboardRead *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this->ReadObject).Object;
      uVar11 = (uint)pFVar12;
      if ((pFVar1->Rows).ArrayNum <= (int)uVar11) break;
      if ((pFVar1 == (FOnlineLeaderboardRead *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this->ReadObject).Object;
      uVar6 = 0;
      if ((int)uVar11 < (pFVar1->Rows).ArrayNum) {
        uVar6 = ~uVar11 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar7 = (this->StatName).Data.ArrayNum;
      pFVar2 = (pFVar1->Rows).AllocatorInstance.Data;
      if (iVar7 == 0) {
        pwVar10 = L"";
        uVar6 = 0;
      }
      else {
        pwVar10 = (wchar_t *)(this->StatName).Data.AllocatorInstance.Data;
        uVar6 = iVar7 - 1;
      }
      uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar6,pwVar10);
      iVar7 = TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>
                        ((TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
                          *)((longlong)&pFVar14[1].Value + (longlong)pFVar2),uVar6,&this->StatName);
      if (iVar7 != -1) {
        lVar9 = (longlong)iVar7 * 0x38 +
                *(longlong *)((longlong)&pFVar14[1].Value + (longlong)pFVar2);
        pFVar8 = (FVariantData *)(lVar9 + 0x10);
        if (lVar9 == 0) {
          pFVar8 = pFVar13;
        }
        if (pFVar8 != (FVariantData *)0x0) {
          bVar4 = true;
          FVariantData::GetValue(pFVar8,(int *)local_res10);
        }
      }
      pFVar12 = (FVariantData *)(ulonglong)(uVar11 + 1);
      pFVar14 = (FVariantData *)&pFVar14[3].CachedEstimatedMaxEscapedStringSize;
      bVar5 = bVar4;
    }
    pFVar8 = (FVariantData *)(ulonglong)local_res10[0];
  }
  if (!bVar4) {
    this->SavedValue = 0;
  }
  else {
    this->SavedValue = (int)pFVar8;
  }
  this->bSavedWasSuccessful = bVar4;
  this_00 = (UWorld *)FWeakObjectPtr::Get(&(this->WorldPtr).WeakPtr);
  if (this_00 != (UWorld *)0x0) {
    this_01 = UWorld::GetTimerManager(this_00);
    FTimerManager::SetTimer<ULeaderboardQueryCallbackProxy>
              (this_01,&this->OnStatsRead_DelayedTimerHandle,this,(pmf_3ab4b919)0x14ec8b1b0,
               __real_3a83126f,false,__real_bf800000);
  }
  local_38 = 0;
  FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->ReadObject != (TSharedPtr<FOnlineLeaderboardRead,1> *)&local_38) {
    (this->ReadObject).Object = (FOnlineLeaderboardRead *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ReadObject).SharedReferenceCount,&FStack_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_30.ReferenceController);
  return;
}

// OnStatsRead_Delayed @ 14ec8b1b0

void __thiscall
ULeaderboardQueryCallbackProxy::OnStatsRead_Delayed(ULeaderboardQueryCallbackProxy *this)

{
  int local_res8 [8];
  
  if (this->bSavedWasSuccessful != false) {
    local_res8[0] = this->SavedValue;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnSuccess,local_res8);
    return;
  }
  local_res8[0] = 0;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnFailure,local_res8);
  return;
}

// RemoveDelegate @ 14ec91710

void __thiscall ULeaderboardQueryCallbackProxy::RemoveDelegate(ULeaderboardQueryCallbackProxy *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  FModuleManager *this_00;
  FName *pFVar4;
  FOnlineSubsystemModule *pFVar5;
  longlong *plVar6;
  FName local_res18;
  FName local_res20;
  longlong *local_28;
  TReferenceControllerBase<1> *local_20;
  
  if (this->bFailedToEvenSubmit == false) {
    this_00 = FModuleManager::Get();
    pFVar4 = ::FName::FName(&local_res18,"OnlineSubsystem");
    bVar2 = FModuleManager::IsModuleLoaded(this_00,*pFVar4);
    if (bVar2) {
      pFVar4 = ::FName::FName(&local_res20,"OnlineSubsystem");
      pFVar5 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>(*pFVar4);
      cVar3 = (**(code **)(pFVar5->_padding_ + 0x70))(pFVar5,0);
      if (cVar3 != '\0') {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) <
             `public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
             ::__l2::_thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                                 ::__l2::_thread_safe_static_guard_0__),
           `public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
           ::__l2::_thread_safe_static_guard_0__ == -1)) {
          ::FName::FName(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                          ::__l2::OnlineSubsystemModuleName,L"OnlineSubsystem");
          _Init_thread_footer(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
        pFVar5 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>
                           (`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                            ::__l2::OnlineSubsystemModuleName);
        plVar6 = (longlong *)(**(code **)(pFVar5->_padding_ + 0x50))(pFVar5,0);
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x60))(plVar6,&local_28);
          if (local_28 != (longlong *)0x0) {
            if ((local_28 == (longlong *)0x0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            (**(code **)(*local_28 + 0x30))(local_28,&this->LeaderboardReadCompleteDelegateHandle);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_20);
        }
      }
    }
  }
  return;
}

// StaticRegisterNativesULeaderboardQueryCallbackProxy @ 14ec99a30

void __cdecl
ULeaderboardQueryCallbackProxy::StaticRegisterNativesULeaderboardQueryCallbackProxy(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TriggerQuery @ 14ec9e770

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ULeaderboardQueryCallbackProxy::TriggerQuery
          (ULeaderboardQueryCallbackProxy *this,APlayerController *param_1,FString *param_2,
          Type param_3)

{
  FScriptContainerElement *this_00;
  code *pcVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  FModuleManager *this_01;
  FName *pFVar5;
  FOnlineSubsystemModule *pFVar6;
  IOnlineSubsystem *pIVar7;
  UWorld *pUVar8;
  UWorld *pUVar9;
  FOnlineLeaderboardRead *pFVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  ulong64 *puVar13;
  uint uVar14;
  longlong lVar15;
  wchar_t *pwVar16;
  FName local_res10;
  ForAnyElementType local_138;
  int local_130;
  int iStack_12c;
  undefined1 local_128 [8];
  FDelegateAllocation local_120;
  longlong *local_110;
  TReferenceControllerBase<1> *local_108;
  TSharedRef<FUniqueNetId_const_,1> local_f8;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  TSharedPtr<FUniqueNetId_const_,1> local_c8;
  FOnlineLeaderboardRead *local_b8;
  TReferenceControllerBase<1> *local_b0;
  UWorld *local_a8;
  TRawPtrProxy<FOnlineLeaderboardRead> local_a0;
  ULeaderboardQueryCallbackProxy *local_98;
  FDestructionSentinel local_90;
  FDestructionSentinel local_78;
  FDelegateAllocation *local_60;
  FName local_58;
  FName local_50;
  undefined1 local_48 [16];
  
  pUVar9 = (UWorld *)0x0;
  this->bFailedToEvenSubmit = true;
  local_a8 = pUVar9;
  if (param_1 != (APlayerController *)0x0) {
    local_a8 = AActor::GetWorld((AActor *)param_1);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a8 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_a8);
  }
  FWeakObjectPtr::operator=(&(this->WorldPtr).WeakPtr,(FObjectPtr)&local_a8);
  if ((param_1 == (APlayerController *)0x0) || (param_1->_padding_ == 0)) {
    local_d0 = 0;
    FFrame::KismetExecutionMessage
              (L"ULeaderboardQueryCallbackProxy::TriggerQuery - Invalid player state",Warning,
               (FName)0x0);
    goto LAB_14ec9ee4f;
  }
  FUniqueNetIdWrapper::GetV1((FUniqueNetIdWrapper *)(param_1->_padding_ + 0x2d0),&local_c8);
  if (local_c8.Object == (FUniqueNetId *)0x0) {
    local_d8 = 0;
    pwVar16 = 
    L"ULeaderboardQueryCallbackProxy::TriggerQuery - Cannot map local player to unique net ID";
LAB_14ec9ee20:
    FFrame::KismetExecutionMessage(pwVar16,Warning,(FName)0x0);
  }
  else {
    this_01 = FModuleManager::Get();
    pFVar5 = ::FName::FName(&local_58,"OnlineSubsystem");
    bVar2 = FModuleManager::IsModuleLoaded(this_01,*pFVar5);
    if (!bVar2) {
LAB_14ec9ee02:
      local_e0 = 0;
      pwVar16 = 
      L"ULeaderboardQueryCallbackProxy::TriggerQuery - Invalid or uninitialized OnlineSubsystem";
      goto LAB_14ec9ee20;
    }
    pFVar5 = ::FName::FName(&local_50,"OnlineSubsystem");
    pFVar6 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>(*pFVar5);
    cVar3 = (**(code **)(pFVar6->_padding_ + 0x70))(pFVar6,0);
    if (cVar3 == '\0') goto LAB_14ec9ee02;
    local_res10.ComparisonIndex.Value = 0;
    local_res10.Number = 0;
    pIVar7 = IOnlineSubsystem::Get(&local_res10);
    if (pIVar7 == (IOnlineSubsystem *)0x0) goto LAB_14ec9ee02;
    (**(code **)(pIVar7->_padding_ + 0x60))(pIVar7,&local_110);
    if (local_110 == (longlong *)0x0) {
      local_e8 = 0;
      FFrame::KismetExecutionMessage
                (L"ULeaderboardQueryCallbackProxy::TriggerQuery - Leaderboards not supported by Online Subsystem"
                 ,Warning,(FName)0x0);
LAB_14ec9edf7:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_108)
      ;
    }
    else {
      this->bFailedToEvenSubmit = false;
      ::FString::operator=(&this->StatName,param_2);
      pUVar8 = ::operator_new(0x48);
      if (pUVar8 != (UWorld *)0x0) {
        pUVar8->_padding_ = 0;
        pUVar8->_padding_ = 0;
        pUVar8->_padding_ = 0;
        pUVar8->_padding_ = 0;
        pUVar8->_padding_ = 0;
        pUVar8->_padding_ = 0;
        (pUVar8->PersistentLevel).field0_0x0.DebugPtr = (ULevel *)0x0;
        (pUVar8->NetDriver).field0_0x0.DebugPtr = (UNetDriver *)0x0;
        *(undefined4 *)&(pUVar8->LineBatcher_DEPRECATED).field0_0x0 = 0;
        pUVar9 = pUVar8;
      }
      local_a0.Object = (FOnlineLeaderboardRead *)pUVar9;
      TSharedPtr<FOnlineLeaderboardRead,1>::operator=<FOnlineLeaderboardRead>
                (&this->ReadObject,&local_a0);
      if (((this->ReadObject).Object == (FOnlineLeaderboardRead *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      ::FString::operator=((FString *)(this->ReadObject).Object,param_2);
      if (((this->ReadObject).Object == (FOnlineLeaderboardRead *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      ::FString::operator=((FString *)&((this->ReadObject).Object)->SortedColumn,param_2);
      pFVar10 = TSharedPtr<FOnlineLeaderboardRead,1>::operator->(&this->ReadObject);
      uVar4 = (pFVar10->ColumnMetadata).ArrayNum;
      if (uVar4 == (pFVar10->ColumnMetadata).ArrayMax) {
        uVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&(pFVar10->ColumnMetadata).AllocatorInstance,
                           &(pFVar10->ColumnMetadata).ArrayMax);
      }
      (pFVar10->ColumnMetadata).ArrayNum = uVar4 + 1;
      uVar14 = 0;
      if ((int)uVar4 < (int)(uVar4 + 1)) {
        uVar14 = ~uVar4 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_00 = (pFVar10->ColumnMetadata).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x18;
      if (this_00 != (FScriptContainerElement *)0x0) {
        ::FString::FString((FString *)this_00,param_2);
        this_00[0x10] = (FScriptContainerElement)param_3;
      }
      local_128 = (undefined1  [8])0x0;
      local_120.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_120.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_128,
                 (FWriteAccessScope *)&local_78);
      local_60 = &local_120;
      puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_120);
      if (puVar11 != (undefined8 *)0x0) {
        *puVar11 = &
                   ___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar12 = FDelegateHandle::GenerateNewID();
        puVar11[2] = uVar12;
        *puVar11 = &
                   ___7__TBaseUObjectMethodDelegateInstance__0A_VULeaderboardQueryCallbackProxy____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar11[3] = 0;
        local_98 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_98);
        puVar11[4] = OnStatsRead;
      }
      if (local_78.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->LeaderboardReadCompleteDelegate
                 ,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_128);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_128,
                 (FWriteAccessScope *)&local_90);
      if ((local_120.DelegateSize != 0) &&
         (local_120.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_120.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_120,0,0,0x10);
        local_120.DelegateSize = 0;
      }
      if (local_90.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
      }
      if (local_120.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_120.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_128);
      if ((local_110 == (longlong *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      puVar13 = (ulong64 *)
                (**(code **)(*local_110 + 0x28))
                          (local_110,local_48,&this->LeaderboardReadCompleteDelegate);
      (this->LeaderboardReadCompleteDelegateHandle).ID = *puVar13;
      local_138.Data = (FScriptContainerElement *)0x0;
      local_130 = 0;
      iStack_12c = 0;
      if ((local_c8.Object == (FUniqueNetId *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_f8.Object = local_c8.Object;
      local_f8.SharedReferenceCount.ReferenceController =
           local_c8.SharedReferenceCount.ReferenceController;
      if (local_c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_c8.Object == (FUniqueNetId *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (((local_138.Data <= &local_f8) &&
          (&local_f8 <
           (TSharedRef<FUniqueNetId_const_,1> *)(local_138.Data + (longlong)iStack_12c * 0x10))) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (local_130 == iStack_12c) {
        local_130 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_138,&iStack_12c);
      }
      lVar15 = (longlong)local_130;
      _local_130 = CONCAT44(iStack_12c,local_130 + 1);
      *(FUniqueNetId **)&local_138.Data[lVar15 * 0x10].field_0x0 = local_f8.Object;
      *(TReferenceControllerBase<1> **)(local_138.Data + lVar15 * 0x10 + 8) =
           local_f8.SharedReferenceCount.ReferenceController;
      if (local_f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_f8.SharedReferenceCount.ReferenceController);
      if (((this->ReadObject).Object == (FOnlineLeaderboardRead *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_b0 = (this->ReadObject).SharedReferenceCount.ReferenceController;
      local_b8 = (this->ReadObject).Object;
      if (local_b0 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_b0->SharedReferenceCount = (atomic<int>)((int)local_b0->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_b8 == (FOnlineLeaderboardRead *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((local_110 == (longlong *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (**(code **)(*local_110 + 8))(local_110,&local_138,&local_b8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b0);
      DestructItems<TSharedRef<FUniqueNetId_const_,1>,int>
                ((TSharedRef<FUniqueNetId_const_,1> *)local_138.Data,local_130);
      if ((TSharedRef<FUniqueNetId_const_,1> *)local_138.Data ==
          (TSharedRef<FUniqueNetId_const_,1> *)0x0) goto LAB_14ec9edf7;
      FMemory::Free(local_138.Data);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_108)
      ;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.SharedReferenceCount.ReferenceController);
LAB_14ec9ee4f:
  if ((this->bFailedToEvenSubmit != false) && (param_1 != (APlayerController *)0x0)) {
    OnStatsRead(this,false);
  }
  return;
}

// execCreateProxyObjectForIntQuery @ 14eca48b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
ULeaderboardQueryCallbackProxy::execCreateProxyObjectForIntQuery
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  APlayerController *pAVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  ULeaderboardQueryCallbackProxy *this;
  longlong *plVar5;
  undefined1 auStack_d8 [32];
  APlayerController *local_b8;
  FString local_b0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_b8 = (APlayerController *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.Data.ArrayNum = 0;
  local_b0.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  pAVar2 = local_b8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar3,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar4);
  local_98._8_8_ = pUVar3;
  this = (ULeaderboardQueryCallbackProxy *)
         StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar5 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_StrongRefOnFrame);
  TriggerQuery(this,pAVar2,&local_b0,Int32);
  *(ULeaderboardQueryCallbackProxy **)param_3 = this;
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  return;
}

