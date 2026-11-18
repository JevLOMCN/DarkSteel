// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 18

// StaticClass @ 14ec47680

UClass * __cdecl UFindSessionsCallbackProxy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFindSessionsCallbackProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"FindSessionsCallbackProxy",
               &Z_Registration_Info_UClass_UFindSessionsCallbackProxy.InnerSingleton,
               StaticRegisterNativesUFindSessionsCallbackProxy,0xa8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UFindSessionsCallbackProxy>,
               InternalVTableHelperCtorCaller<UFindSessionsCallbackProxy>,local_res8,
               UOnlineBlueprintCallProxyBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFindSessionsCallbackProxy.InnerSingleton;
}

// UFindSessionsCallbackProxy @ 14ec53840

UFindSessionsCallbackProxy * __thiscall
UFindSessionsCallbackProxy::UFindSessionsCallbackProxy
          (UFindSessionsCallbackProxy *this,FVTableHelper *param_1)

{
  UOnlineBlueprintCallProxyBase::UOnlineBlueprintCallProxyBase
            ((UOnlineBlueprintCallProxyBase *)this,param_1);
  this->_padding_ = (longlong)&___7UFindSessionsCallbackProxy__6B_;
  *(undefined8 *)&this->OnSuccess = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x8 = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x10 = 0;
  *(undefined8 *)&this->OnFailure = 0;
  *(undefined8 *)&(this->OnFailure).field_0x8 = 0;
  *(undefined8 *)&(this->OnFailure).field_0x10 = 0;
  (this->PlayerControllerWeakPtr).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&this->Delegate = 0;
  *(undefined8 *)&(this->Delegate).field_0x8 = 0;
  *(undefined4 *)&(this->Delegate).field_0x10 = 0;
  (this->DelegateHandle).ID = 0;
  (this->SearchObject).Object = (FOnlineSessionSearch *)0x0;
  (this->SearchObject).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  return this;
}

// UFindSessionsCallbackProxy @ 14ec538b0

UFindSessionsCallbackProxy * __thiscall
UFindSessionsCallbackProxy::UFindSessionsCallbackProxy
          (UFindSessionsCallbackProxy *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  UFindSessionsCallbackProxy *local_res8;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  UOnlineBlueprintCallProxyBase::UOnlineBlueprintCallProxyBase
            ((UOnlineBlueprintCallProxyBase *)this,param_1);
  puVar1 = &(this->Delegate).field_0x8;
  this->_padding_ = (longlong)&___7UFindSessionsCallbackProxy__6B_;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&(this->Delegate).field_0x10 = 0;
  *(undefined8 *)&this->OnSuccess = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x8 = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x10 = 0;
  *(undefined8 *)&this->OnFailure = 0;
  *(undefined8 *)&(this->OnFailure).field_0x8 = 0;
  *(undefined8 *)&(this->OnFailure).field_0x10 = 0;
  (this->PlayerControllerWeakPtr).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&this->Delegate = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Delegate,
             (FWriteAccessScope *)&local_28);
  local_10 = puVar1;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUFindSessionsCallbackProxy____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar2[3] = 0;
    local_res8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res8);
    puVar2[4] = OnCompleted;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  (this->DelegateHandle).ID = 0;
  (this->SearchObject).Object = (FOnlineSessionSearch *)0x0;
  (this->SearchObject).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  this->bUseLAN = false;
  return this;
}

// ~UFindSessionsCallbackProxy @ 14ec56e70

void __thiscall
UFindSessionsCallbackProxy::~UFindSessionsCallbackProxy(UFindSessionsCallbackProxy *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UFindSessionsCallbackProxy__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SearchObject).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Delegate);
  pvVar1 = *(void **)&(this->Delegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Delegate);
  pvVar1 = *(void **)&(this->OnFailure).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFailure);
  pvVar1 = *(void **)&(this->OnSuccess).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSuccess);
  UOnlineBlueprintCallProxyBase::~UOnlineBlueprintCallProxyBase
            ((UOnlineBlueprintCallProxyBase *)this);
  return;
}

// Activate @ 14ec5ebb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UFindSessionsCallbackProxy::Activate(UFindSessionsCallbackProxy *this)

{
  TSharedPtr<FOnlineSessionSearch,1> *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  UObject *pUVar5;
  ulong64 *puVar6;
  FOnlineSessionSearch *pFVar7;
  FOnlineSessionSearch *pFVar8;
  FName *pFVar9;
  ForAnyElementType FVar10;
  longlong *plVar11;
  bool local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18;
  FName local_res20;
  ForAnyElementType local_e8;
  int local_e0;
  int local_dc;
  longlong *local_d8;
  TReferenceControllerBase<1> *local_d0;
  FUniqueNetId *local_c8;
  FSharedReferencer<1> local_c0;
  IOnlineSubsystem *local_b8;
  wchar_t *local_b0;
  TSharedPtr<FUniqueNetId_const_,1> local_a8;
  FOnlineSessionSearch *local_98;
  TReferenceControllerBase<1> *local_90;
  TRawPtrProxy<FOnlineSessionSearch> local_88;
  FString local_80;
  FString local_70;
  FString local_60;
  undefined1 local_50 [8];
  FName local_48 [3];
  
  pFVar8 = (FOnlineSessionSearch *)0x0;
  local_res10 = 0;
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  local_c0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  UEngine::GetWorldFromContextObject(GEngine,this->WorldContextObject,ReturnNull);
  local_b8 = IOnlineSubsystem::Get(&local_res20);
  local_b0 = L"FindSessions";
  if (local_b8 == (IOnlineSubsystem *)0x0) {
    ::FString::PrintfImpl(&local_80,L"%s - Invalid or uninitialized OnlineSubsystem");
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_80.Data.ArrayNum != 0) {
      FVar10.Data = local_80.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar10.Data,Warning,(FName)0x0);
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
  }
  pUVar5 = FWeakObjectPtr::Get(&(this->PlayerControllerWeakPtr).WeakPtr);
  local_c8 = (FUniqueNetId *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if ((pUVar5 == (UObject *)0x0) || (*(longlong *)&pUVar5[0x11].field_0x20 == 0)) {
    ::FString::PrintfImpl(&local_60,L"%s - Invalid player state");
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_60.Data.ArrayNum != 0) {
      FVar10.Data = local_60.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar10.Data,Warning,(FName)0x0);
    local_70.Data.AllocatorInstance.Data = local_60.Data.AllocatorInstance.Data;
LAB_14ec5efc8:
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
  }
  else {
    FUniqueNetIdWrapper::GetV1
              ((FUniqueNetIdWrapper *)(*(longlong *)&pUVar5[0x11].field_0x20 + 0x2d0),&local_a8);
    local_c8 = local_a8.Object;
    local_a8.Object = (FUniqueNetId *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_c0,&local_a8.SharedReferenceCount);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.SharedReferenceCount.ReferenceController);
    if (local_c8 == (FUniqueNetId *)0x0) {
      ::FString::PrintfImpl(&local_70,L"%s - Cannot map local player to unique net ID");
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_70.Data.ArrayNum != 0) {
        FVar10.Data = local_70.Data.AllocatorInstance.Data;
      }
      FFrame::KismetExecutionMessage((wchar_t *)FVar10.Data,Warning,(FName)0x0);
      goto LAB_14ec5efc8;
    }
    if (local_b8 != (IOnlineSubsystem *)0x0) {
      (**(code **)(local_b8->_padding_ + 0x20))(local_b8,&local_d8);
      if (local_d8 != (longlong *)0x0) {
        if ((local_d8 == (longlong *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        puVar6 = (ulong64 *)(**(code **)(*local_d8 + 0x188))(local_d8,local_50,&this->Delegate);
        (this->DelegateHandle).ID = *puVar6;
        pFVar7 = ::operator_new(0x88);
        if (pFVar7 != (FOnlineSessionSearch *)0x0) {
          (pFVar7->SearchResults).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar7->SearchResults).ArrayNum = 0;
          (pFVar7->SearchResults).ArrayMax = 0;
          *(undefined8 *)&(pFVar7->QuerySettings).SearchParams = 0;
          *(undefined8 *)&(pFVar7->QuerySettings).SearchParams.field_0x8 = 0;
          *(undefined8 *)&(pFVar7->QuerySettings).SearchParams.field_0x20 = 0;
          pFVar7->_padding_ = (longlong)&___7FOnlineSessionSearch__6B_;
          (pFVar7->QuerySettings)._padding_ = (longlong)&___7FOnlineSearchSettings__6B_;
          pFVar7->SearchState = NotStarted;
          pFVar7->MaxSearchResults = 1;
          *(undefined4 *)&(pFVar7->QuerySettings).SearchParams.field_0x28 = 0;
          *(undefined4 *)&(pFVar7->QuerySettings).SearchParams.field_0x2c = 0x80;
          *(undefined4 *)&(pFVar7->QuerySettings).SearchParams.field_0x30 = 0xffffffff;
          *(undefined4 *)&(pFVar7->QuerySettings).SearchParams.field_0x34 = 0;
          *(undefined8 *)&(pFVar7->QuerySettings).SearchParams.field_0x40 = 0;
          *(undefined4 *)&(pFVar7->QuerySettings).SearchParams.field_0x48 = 0;
          pFVar7->bIsLanQuery = false;
          pFVar7->PingBucketSize = 0;
          pFVar7->PlatformHash = 0;
          pFVar7->TimeoutInSeconds = 0.0;
          pFVar8 = pFVar7;
        }
        this_00 = &this->SearchObject;
        local_88.Object = pFVar8;
        TSharedPtr<FOnlineSessionSearch,1>::operator=<FOnlineSessionSearch>(this_00,&local_88);
        iVar1 = this->MaxResults;
        if ((this_00->Object == (FOnlineSessionSearch *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_00->Object->MaxSearchResults = iVar1;
        bVar3 = this->bUseLAN;
        if ((this_00->Object == (FOnlineSessionSearch *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_00->Object->bIsLanQuery = bVar3;
        if (this->bUseLobbies != false) {
          pFVar8 = TSharedPtr<FOnlineSessionSearch,1>::operator->(this_00);
          local_res8[0] = true;
          pFVar9 = ::FName::FName(local_48,L"LOBBYSEARCH");
          FOnlineSearchSettings::Set<bool>(&pFVar8->QuerySettings,*pFVar9,local_res8,Equals);
        }
        plVar11 = local_d8;
        if ((local_d8 == (longlong *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), plVar11 = local_d8, bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = *(code **)(*plVar11 + 0x178);
        if ((this_00->Object == (FOnlineSessionSearch *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x408,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_90 = (this->SearchObject).SharedReferenceCount.ReferenceController;
        local_98 = this_00->Object;
        if (local_90 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_90->SharedReferenceCount = (atomic<int>)((int)local_90->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((local_98 == (FOnlineSessionSearch *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x25d,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if ((local_c8 == (FUniqueNetId *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        (*pcVar2)(plVar11,local_c8,&local_98);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_90);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_d0);
        goto LAB_14ec5f05f;
      }
      local_res18 = 0;
      FFrame::KismetExecutionMessage
                (L"Sessions not supported by Online Subsystem",Warning,(FName)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_d0);
    }
  }
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_dc = 0;
  DestructItems<FBlueprintSessionResult,int>((FBlueprintSessionResult *)0x0,0);
  local_e0 = 0;
  if (local_dc != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x120,8,0,local_dc,&local_e8,0,&local_dc);
    ConstructItems<FBlueprintSessionResult,FBlueprintSessionResult,int>
              (local_e8.Data,(FBlueprintSessionResult *)0x0,0);
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnFailure,&local_e8);
  DestructItems<FBlueprintSessionResult,int>((FBlueprintSessionResult *)local_e8.Data,local_e0);
  if (local_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  DestructItems<FBlueprintSessionResult,int>((FBlueprintSessionResult *)0x0,0);
LAB_14ec5f05f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.ReferenceController);
  return;
}

// FindSessions @ 14ec729f0

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

UFindSessionsCallbackProxy * __cdecl
UFindSessionsCallbackProxy::FindSessions
          (UObject *param_1,APlayerController *param_2,int param_3,bool param_4,bool param_5)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UFindSessionsCallbackProxy *pUVar3;
  longlong *plVar4;
  undefined1 auStack_d8 [32];
  APlayerController *local_b8 [2];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pUVar1 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar2);
  local_a8._8_8_ = pUVar1;
  pUVar3 = (UFindSessionsCallbackProxy *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar4 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  local_b8[0] = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (APlayerController *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&(pUVar3->PlayerControllerWeakPtr).WeakPtr,(FObjectPtr)local_b8);
  pUVar3->bUseLobbies = param_5;
  pUVar3->bUseLAN = param_4;
  pUVar3->MaxResults = param_3;
  pUVar3->WorldContextObject = param_1;
  return pUVar3;
}

// GetCurrentPlayers @ 14ec74e60

int __cdecl UFindSessionsCallbackProxy::GetCurrentPlayers(FBlueprintSessionResult *param_1)

{
  return (param_1->OnlineResult).Session.SessionSettings.NumPublicConnections -
         (param_1->OnlineResult).Session.NumOpenPublicConnections;
}

// GetMaxPlayers @ 14ec75f00

int __cdecl UFindSessionsCallbackProxy::GetMaxPlayers(FBlueprintSessionResult *param_1)

{
  return (param_1->OnlineResult).Session.SessionSettings.NumPublicConnections;
}

// GetPingInMs @ 14ec765c0

int __cdecl UFindSessionsCallbackProxy::GetPingInMs(FBlueprintSessionResult *param_1)

{
  return (param_1->OnlineResult).PingInMs;
}

// GetPrivateStaticClass @ 14ec77c40

UClass * __cdecl UFindSessionsCallbackProxy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFindSessionsCallbackProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"FindSessionsCallbackProxy",
               &Z_Registration_Info_UClass_UFindSessionsCallbackProxy.InnerSingleton,
               StaticRegisterNativesUFindSessionsCallbackProxy,0xa8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UFindSessionsCallbackProxy>,
               InternalVTableHelperCtorCaller<UFindSessionsCallbackProxy>,local_res8,
               UOnlineBlueprintCallProxyBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFindSessionsCallbackProxy.InnerSingleton;
}

// GetServerName @ 14ec78c90

FString * __cdecl
UFindSessionsCallbackProxy::GetServerName
          (FString *__return_storage_ptr__,FBlueprintSessionResult *param_1)

{
  ::FString::FString(__return_storage_ptr__,&(param_1->OnlineResult).Session.OwningUserName);
  return __return_storage_ptr__;
}

// OnCompleted @ 14ec85b10

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
UFindSessionsCallbackProxy::OnCompleted(UFindSessionsCallbackProxy *this,bool param_1)

{
  FOnlineSessionSearch *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FUniqueNetId *pFVar3;
  FOnlineSessionInfo *pFVar4;
  code *pcVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  int iVar8;
  UObject *pUVar9;
  ForAnyElementType FVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  undefined1 auStackY_288 [32];
  undefined1 local_238 [8];
  TArray<FBlueprintSessionResult,TSizedDefaultAllocator<32>_> local_230;
  ForAnyElementType local_220;
  int local_218;
  int local_214;
  uint local_210;
  undefined8 local_208;
  TSharedPtr<FUniqueNetId_const_,1> local_200;
  longlong *local_1f0;
  TReferenceControllerBase<1> *local_1e8;
  FUniqueNetId *local_1e0;
  FSharedReferencer<1> local_1d8;
  IOnlineSubsystem *local_1d0;
  wchar_t *local_1c8;
  FName local_1c0;
  UFindSessionsCallbackProxy *local_1b8;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FUniqueNetId *local_180;
  TReferenceControllerBase<1> *pTStack_178;
  FOnlineSessionInfo *local_170;
  TReferenceControllerBase<1> *pTStack_168;
  undefined **local_158;
  FUniqueNetId *local_150;
  FSharedReferencer<1> FStack_148;
  FString FStack_140;
  undefined1 local_130 [192];
  ForElementType<FSetElementId> local_70;
  int local_60 [2];
  FOnlineSessionInfo *local_58;
  FSharedReferencer<1> FStack_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_288;
  local_1c0.ComparisonIndex.Value = 0;
  local_1c0.Number = 0;
  local_208 = 0;
  local_1d8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1b8 = this;
  UEngine::GetWorldFromContextObject(GEngine,this->WorldContextObject,ReturnNull);
  local_1d0 = IOnlineSubsystem::Get(&local_1c0);
  local_1c8 = L"FindSessionsCallback";
  if (local_1d0 == (IOnlineSubsystem *)0x0) {
    ::FString::PrintfImpl(&local_1b0,L"%s - Invalid or uninitialized OnlineSubsystem");
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_1b0.Data.ArrayNum != 0) {
      FVar10.Data = local_1b0.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar10.Data,Warning,(FName)0x0);
    if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
    }
  }
  pUVar9 = FWeakObjectPtr::Get(&(this->PlayerControllerWeakPtr).WeakPtr);
  local_1e0 = (FUniqueNetId *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if ((pUVar9 == (UObject *)0x0) || (*(longlong *)&pUVar9[0x11].field_0x20 == 0)) {
    ::FString::PrintfImpl(&local_190,L"%s - Invalid player state");
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_190.Data.ArrayNum != 0) {
      FVar10.Data = local_190.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar10.Data,Warning,(FName)0x0);
    local_1a0.Data.AllocatorInstance.Data = local_190.Data.AllocatorInstance.Data;
  }
  else {
    FUniqueNetIdWrapper::GetV1
              ((FUniqueNetIdWrapper *)(*(longlong *)&pUVar9[0x11].field_0x20 + 0x2d0),&local_200);
    local_1e0 = local_200.Object;
    local_200.Object = (FUniqueNetId *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_1d8,&local_200.SharedReferenceCount);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_200.SharedReferenceCount.ReferenceController);
    if (local_1e0 != (FUniqueNetId *)0x0) {
      if (local_1d0 != (IOnlineSubsystem *)0x0) {
        (**(code **)(local_1d0->_padding_ + 0x20))();
        if (local_1f0 != (longlong *)0x0) {
          if ((local_1f0 == (longlong *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          (**(code **)(*local_1f0 + 400))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1e8);
      }
      goto LAB_14ec85d15;
    }
    ::FString::PrintfImpl(&local_1a0,L"%s - Cannot map local player to unique net ID");
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_1a0.Data.ArrayNum != 0) {
      FVar10.Data = local_1a0.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar10.Data,Warning,(FName)0x0);
  }
  if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
  }
LAB_14ec85d15:
  local_230.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_230.ArrayNum = 0;
  local_230.ArrayMax = 0;
  if ((param_1) && (pFVar1 = (this->SearchObject).Object, pFVar1 != (FOnlineSessionSearch *)0x0)) {
    local_210 = (pFVar1->SearchResults).ArrayNum;
    uVar11 = (ulonglong)(int)local_210;
    pFVar12 = (pFVar1->SearchResults).AllocatorInstance.Data;
    pFVar15 = pFVar12 + uVar11 * 0x120;
    while( true ) {
      if ((pFVar1->SearchResults).ArrayNum != (int)uVar11) {
        local_238[0] = 0;
        `TCheckedPointerIterator<FOnlineSessionSearchResult,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_238);
      }
      if (pFVar12 == pFVar15) break;
      local_158 = &___7FOnlineSession__6B_;
      FStack_148.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      FStack_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_150 = (FUniqueNetId *)0x0;
      FStack_140.Data.ArrayNum = 0;
      FStack_140.Data.ArrayMax = 0;
      FOnlineSessionSettings::FOnlineSessionSettings((FOnlineSessionSettings *)local_130);
      FVar6.ReferenceController = FStack_148.ReferenceController;
      pTVar2 = *(TReferenceControllerBase<1> **)(pFVar12 + 0x10);
      pFVar3 = *(FUniqueNetId **)(pFVar12 + 8);
      local_58 = (FOnlineSessionInfo *)0x0;
      FStack_50.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_48._0_4_ = 0;
      local_48._4_4_ = 0;
      local_40 = 9999;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_180 = local_150;
      pTStack_178 = FStack_148.ReferenceController;
      local_150 = pFVar3;
      FStack_148.ReferenceController = pTVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar6.ReferenceController);
      ::FString::operator=(&FStack_140,(FString *)(pFVar12 + 0x18));
      local_130._8_4_ = *(undefined4 *)(pFVar12 + 0x30);
      local_130._12_4_ = *(undefined4 *)(pFVar12 + 0x34);
      local_130[0x10] = pFVar12[0x38];
      local_130[0x11] = pFVar12[0x39];
      local_130[0x12] = pFVar12[0x3a];
      local_130[0x13] = pFVar12[0x3b];
      local_130[0x14] = pFVar12[0x3c];
      local_130[0x15] = pFVar12[0x3d];
      local_130[0x16] = pFVar12[0x3e];
      local_130[0x17] = pFVar12[0x3f];
      local_130[0x18] = pFVar12[0x40];
      local_130[0x19] = pFVar12[0x41];
      local_130[0x1a] = pFVar12[0x42];
      local_130[0x1b] = pFVar12[0x43];
      ::FString::operator=((FString *)(local_130 + 0x20),(FString *)(pFVar12 + 0x48));
      local_130._48_4_ = *(undefined4 *)(pFVar12 + 0x58);
      TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
                   *)(local_130 + 0x38),
                  (TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
                   *)(pFVar12 + 0x60));
      if ((TSparseArray<TSparseSetElement<TTuple<TSharedRef<FUniqueNetId_const_,1>,FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)(local_130 + 0x88) !=
          (TSparseArray<TSparseSetElement<TTuple<TSharedRef<FUniqueNetId_const_,1>,FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)(pFVar12 + 0xb0)) {
        UE::Core::Private::
        CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                  (&local_70,local_60,(ForElementType<FSetElementId> *)(pFVar12 + 0xe8),
                   *(int *)(pFVar12 + 0xf8));
        TSparseArray<TSparseSetElement<TTuple<TSharedRef<FUniqueNetId_const_,1>,FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::operator=((TSparseArray<TSparseSetElement<TTuple<TSharedRef<FUniqueNetId_const_,1>,FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)(local_130 + 0x88),
                    (TSparseArray<TSparseSetElement<TTuple<TSharedRef<FUniqueNetId_const_,1>,FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)(pFVar12 + 0xb0));
      }
      FVar6.ReferenceController = FStack_50.ReferenceController;
      pTVar2 = *(TReferenceControllerBase<1> **)(pFVar12 + 0x108);
      pFVar4 = *(FOnlineSessionInfo **)(pFVar12 + 0x100);
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_170 = local_58;
      pTStack_168 = FStack_50.ReferenceController;
      local_58 = pFVar4;
      FStack_50.ReferenceController = pTVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar6.ReferenceController);
      local_48 = *(undefined8 *)(pFVar12 + 0x110);
      local_40 = *(int *)(pFVar12 + 0x118);
      if (((local_230.AllocatorInstance.Data <= (FScriptContainerElement *)&local_158) &&
          ((FScriptContainerElement *)&local_158 <
           local_230.AllocatorInstance.Data + (longlong)local_230.ArrayMax * 0x120)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = local_230.ArrayNum;
      if (local_230.ArrayNum == local_230.ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x120,8,&local_230.AllocatorInstance,&local_230.ArrayMax);
      }
      FVar10.Data = FStack_140.Data.AllocatorInstance.Data;
      local_230.ArrayNum = iVar8 + 1;
      pFVar14 = local_230.AllocatorInstance.Data + (longlong)iVar8 * 0x120;
      *(undefined ***)pFVar14 = &___7FOnlineSession__6B_;
      *(FUniqueNetId **)(pFVar14 + 8) = local_150;
      *(TReferenceControllerBase<1> **)(pFVar14 + 0x10) = FStack_148.ReferenceController;
      if (FStack_148.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FStack_148.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FStack_148.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(undefined8 *)(pFVar14 + 0x18) = 0;
      lVar13 = (longlong)FStack_140.Data.ArrayNum;
      *(int *)(pFVar14 + 0x20) = FStack_140.Data.ArrayNum;
      if (FStack_140.Data.ArrayNum == 0) {
        *(int *)(pFVar14 + 0x24) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,FStack_140.Data.ArrayNum,0,(ForAnyElementType *)(pFVar14 + 0x18),
                   FStack_140.Data.ArrayNum,(int *)(pFVar14 + 0x24));
                    /* WARNING: Load size is inaccurate */
        memcpy(pFVar14[0x18],FVar10.Data,lVar13 * 2);
      }
      FOnlineSessionSettings::FOnlineSessionSettings
                ((FOnlineSessionSettings *)(pFVar14 + 0x28),(FOnlineSessionSettings *)local_130);
      *(FOnlineSessionInfo **)(pFVar14 + 0x100) = local_58;
      *(TReferenceControllerBase<1> **)(pFVar14 + 0x108) = FStack_50.ReferenceController;
      if (FStack_50.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FStack_50.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FStack_50.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(int *)(pFVar14 + 0x110) = (int)local_48;
      *(int *)(pFVar14 + 0x114) = local_48._4_4_;
      *(int *)(pFVar14 + 0x118) = local_40;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_50.ReferenceController);
      FOnlineSessionSettings::~FOnlineSessionSettings((FOnlineSessionSettings *)local_130);
      if (FStack_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_140.Data.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_148.ReferenceController);
      uVar11 = (ulonglong)local_210;
      pFVar12 = pFVar12 + 0x120;
    }
    FBlueprintFindSessionsResultDelegate::Broadcast(&local_1b8->OnSuccess,&local_230);
  }
  else {
    local_220.Data = (FScriptContainerElement *)0x0;
    local_214 = 0;
    DestructItems<FBlueprintSessionResult,int>((FBlueprintSessionResult *)0x0,0);
    FVar10.Data = local_230.AllocatorInstance.Data;
    iVar8 = local_230.ArrayNum;
    local_218 = local_230.ArrayNum;
    if ((local_230.ArrayNum != 0) || (local_214 != 0)) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x120,8,local_230.ArrayNum,local_214,&local_220,local_230.ArrayNum,&local_214);
      ConstructItems<FBlueprintSessionResult,FBlueprintSessionResult,int>
                (local_220.Data,(FBlueprintSessionResult *)FVar10.Data,iVar8);
    }
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnFailure,&local_220);
    DestructItems<FBlueprintSessionResult,int>((FBlueprintSessionResult *)local_220.Data,local_218);
    if (local_220.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_220.Data);
    }
  }
  DestructItems<FBlueprintSessionResult,int>
            ((FBlueprintSessionResult *)local_230.AllocatorInstance.Data,local_230.ArrayNum);
  if (local_230.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_230.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d8.ReferenceController);
  return;
}

// StaticRegisterNativesUFindSessionsCallbackProxy @ 14ec99750

void __cdecl UFindSessionsCallbackProxy::StaticRegisterNativesUFindSessionsCallbackProxy(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UFindSessionsCallbackProxy_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execFindSessions @ 14eca5450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UFindSessionsCallbackProxy::execFindSessions(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  UObject *pUVar3;
  undefined8 uVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  longlong *plVar7;
  bool bVar8;
  bool bVar9;
  undefined1 auStack_118 [32];
  int local_f8;
  int local_f4;
  undefined4 local_f0 [2];
  UObject *local_e8;
  undefined8 local_e0;
  UObject *local_d8 [2];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_e0 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e0);
  }
  local_e8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  local_f0[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_f0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_f0);
  }
  local_f8 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  bVar8 = local_f8 != 0;
  local_f4 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f4);
  }
  uVar4 = local_e0;
  pUVar3 = local_e8;
  uVar2 = local_f0[0];
  bVar9 = local_f4 != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar5 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar5,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,pUVar6);
  local_c8._8_8_ = pUVar5;
  pUVar5 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar7 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  local_d8[0] = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&pUVar5[2].field_0x10,(FObjectPtr)local_d8);
  pUVar5[3].field_0x20 = bVar8;
  pUVar5[3].field_0x21 = bVar9;
  *(undefined4 *)&pUVar5[3].field_0x24 = uVar2;
  *(undefined8 *)(pUVar5 + 4) = uVar4;
  *(UObject **)param_3 = pUVar5;
  return;
}

// execGetCurrentPlayers @ 14eca5ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UFindSessionsCallbackProxy::execGetCurrentPlayers(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined ***pppuVar2;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  TReferenceControllerBase<1> *local_128;
  void *pvStack_120;
  undefined8 local_118;
  FOnlineSessionSettings local_110;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_138 = &___7FOnlineSession__6B_;
  local_130 = 0;
  local_128 = (TReferenceControllerBase<1> *)0x0;
  pvStack_120 = (void *)0x0;
  local_118 = 0;
  FOnlineSessionSettings::FOnlineSessionSettings(&local_110);
  local_28 = 0;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_20 = 9999;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  pppuVar2 = &local_138;
  if ((undefined ***)param_2->MostRecentPropertyAddress != (undefined ***)0x0) {
    pppuVar2 = (undefined ***)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(int *)param_3 = *(int *)(pppuVar2 + 6) - *(int *)((longlong)pppuVar2 + 0x114);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  FOnlineSessionSettings::~FOnlineSessionSettings(&local_110);
  if (pvStack_120 != (void *)0x0) {
    FMemory::Free(pvStack_120);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_128);
  return;
}

// execGetMaxPlayers @ 14eca5fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UFindSessionsCallbackProxy::execGetMaxPlayers(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined ***pppuVar2;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  TReferenceControllerBase<1> *local_128;
  void *pvStack_120;
  undefined8 local_118;
  FOnlineSessionSettings local_110;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_138 = &___7FOnlineSession__6B_;
  local_130 = 0;
  local_128 = (TReferenceControllerBase<1> *)0x0;
  pvStack_120 = (void *)0x0;
  local_118 = 0;
  FOnlineSessionSettings::FOnlineSessionSettings(&local_110);
  local_28 = 0;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_20 = 9999;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  pppuVar2 = &local_138;
  if ((undefined ***)param_2->MostRecentPropertyAddress != (undefined ***)0x0) {
    pppuVar2 = (undefined ***)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)(pppuVar2 + 6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  FOnlineSessionSettings::~FOnlineSessionSettings(&local_110);
  if (pvStack_120 != (void *)0x0) {
    FMemory::Free(pvStack_120);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_128);
  return;
}

// execGetPingInMs @ 14eca6120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UFindSessionsCallbackProxy::execGetPingInMs(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined ***pppuVar2;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  TReferenceControllerBase<1> *local_128;
  void *pvStack_120;
  undefined8 local_118;
  FOnlineSessionSettings local_110;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_138 = &___7FOnlineSession__6B_;
  local_130 = 0;
  local_128 = (TReferenceControllerBase<1> *)0x0;
  pvStack_120 = (void *)0x0;
  local_118 = 0;
  FOnlineSessionSettings::FOnlineSessionSettings(&local_110);
  local_28 = 0;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_20 = 9999;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  pppuVar2 = &local_138;
  if ((undefined ***)param_2->MostRecentPropertyAddress != (undefined ***)0x0) {
    pppuVar2 = (undefined ***)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)(pppuVar2 + 0x23);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  FOnlineSessionSettings::~FOnlineSessionSettings(&local_110);
  if (pvStack_120 != (void *)0x0) {
    FMemory::Free(pvStack_120);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_128);
  return;
}

// execGetServerName @ 14eca6260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UFindSessionsCallbackProxy::execGetServerName(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  undefined **_Src;
  undefined ***pppuVar3;
  undefined1 auStackY_198 [32];
  ForAnyElementType local_158;
  undefined8 local_150;
  undefined **local_148;
  undefined8 local_140;
  TReferenceControllerBase<1> *local_138;
  void *pvStack_130;
  undefined8 local_128;
  FOnlineSessionSettings local_120;
  undefined8 local_48;
  TReferenceControllerBase<1> *pTStack_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_148 = &___7FOnlineSession__6B_;
  local_140 = 0;
  local_138 = (TReferenceControllerBase<1> *)0x0;
  pvStack_130 = (void *)0x0;
  local_128 = 0;
  FOnlineSessionSettings::FOnlineSessionSettings(&local_120);
  local_38 = 0;
  local_48 = 0;
  pTStack_40 = (TReferenceControllerBase<1> *)0x0;
  local_30 = 9999;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_148,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_148);
  }
  pppuVar3 = &local_148;
  if ((undefined ***)param_2->MostRecentPropertyAddress != (undefined ***)0x0) {
    pppuVar3 = (undefined ***)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)(pppuVar3 + 4);
  _Src = pppuVar3[3];
  local_158.Data = (FScriptContainerElement *)0x0;
  local_150 = CONCAT44(local_150._4_4_,iVar1);
  if (iVar1 == 0) {
    local_150 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,&local_158,iVar1,(int *)((longlong)&local_150 + 4));
    memcpy(local_158.Data,_Src,(longlong)iVar1 * 2);
  }
  if (param_3 != &local_158) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_158.Data;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_150;
    local_158.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_150._4_4_;
    local_150 = 0;
  }
  if (local_158.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  FOnlineSessionSettings::~FOnlineSessionSettings(&local_120);
  if (pvStack_130 != (void *)0x0) {
    FMemory::Free(pvStack_130);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_138);
  return;
}

