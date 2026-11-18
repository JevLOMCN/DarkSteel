// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 10

// StaticClass @ 14ec42860

UClass * __cdecl UJoinSessionCallbackProxy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UJoinSessionCallbackProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"JoinSessionCallbackProxy",
               &Z_Registration_Info_UClass_UJoinSessionCallbackProxy.InnerSingleton,
               StaticRegisterNativesUJoinSessionCallbackProxy,0x1b0,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UJoinSessionCallbackProxy>,
               InternalVTableHelperCtorCaller<UJoinSessionCallbackProxy>,local_res8,
               UOnlineBlueprintCallProxyBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UJoinSessionCallbackProxy.InnerSingleton;
}

// UJoinSessionCallbackProxy @ 14ec544d0

UJoinSessionCallbackProxy * __thiscall
UJoinSessionCallbackProxy::UJoinSessionCallbackProxy
          (UJoinSessionCallbackProxy *this,FVTableHelper *param_1)

{
  UOnlineBlueprintCallProxyBase::UOnlineBlueprintCallProxyBase
            ((UOnlineBlueprintCallProxyBase *)this,param_1);
  this->_padding_ = (longlong)&___7UJoinSessionCallbackProxy__6B_;
  *(undefined8 *)&this->OnSuccess = 0;
  (this->OnlineSearchResult).Session._padding_ = (longlong)&___7FOnlineSession__6B_;
  *(undefined8 *)&(this->OnSuccess).field_0x8 = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x10 = 0;
  *(undefined8 *)&this->OnFailure = 0;
  *(undefined8 *)&(this->OnFailure).field_0x8 = 0;
  *(undefined8 *)&(this->OnFailure).field_0x10 = 0;
  (this->PlayerControllerWeakPtr).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OnlineSearchResult).Session.OwningUserId.Object = (FUniqueNetId *)0x0;
  (this->OnlineSearchResult).Session.OwningUserId.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->OnlineSearchResult).Session.OwningUserName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->OnlineSearchResult).Session.OwningUserName.Data.ArrayNum = 0;
  (this->OnlineSearchResult).Session.OwningUserName.Data.ArrayMax = 0;
  FOnlineSessionSettings::FOnlineSessionSettings
            (&(this->OnlineSearchResult).Session.SessionSettings);
  (this->OnlineSearchResult).Session.SessionInfo.Object = (FOnlineSessionInfo *)0x0;
  (this->OnlineSearchResult).Session.SessionInfo.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->OnlineSearchResult).Session.NumOpenPrivateConnections = 0;
  (this->OnlineSearchResult).Session.NumOpenPublicConnections = 0;
  (this->OnlineSearchResult).PingInMs = 9999;
  *(undefined8 *)&this->Delegate = 0;
  *(undefined8 *)&(this->Delegate).field_0x8 = 0;
  *(undefined4 *)&(this->Delegate).field_0x10 = 0;
  (this->DelegateHandle).ID = 0;
  return this;
}

// UJoinSessionCallbackProxy @ 14ec54590

UJoinSessionCallbackProxy * __thiscall
UJoinSessionCallbackProxy::UJoinSessionCallbackProxy
          (UJoinSessionCallbackProxy *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  UJoinSessionCallbackProxy *local_res8;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  UOnlineBlueprintCallProxyBase::UOnlineBlueprintCallProxyBase
            ((UOnlineBlueprintCallProxyBase *)this,param_1);
  this->_padding_ = (longlong)&___7UJoinSessionCallbackProxy__6B_;
  *(undefined8 *)&this->OnSuccess = 0;
  (this->OnlineSearchResult).Session._padding_ = (longlong)&___7FOnlineSession__6B_;
  *(undefined8 *)&(this->OnSuccess).field_0x8 = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x10 = 0;
  *(undefined8 *)&this->OnFailure = 0;
  *(undefined8 *)&(this->OnFailure).field_0x8 = 0;
  *(undefined8 *)&(this->OnFailure).field_0x10 = 0;
  (this->PlayerControllerWeakPtr).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OnlineSearchResult).Session.OwningUserId.Object = (FUniqueNetId *)0x0;
  (this->OnlineSearchResult).Session.OwningUserId.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->OnlineSearchResult).Session.OwningUserName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->OnlineSearchResult).Session.OwningUserName.Data.ArrayNum = 0;
  (this->OnlineSearchResult).Session.OwningUserName.Data.ArrayMax = 0;
  FOnlineSessionSettings::FOnlineSessionSettings
            (&(this->OnlineSearchResult).Session.SessionSettings);
  (this->OnlineSearchResult).Session.SessionInfo.Object = (FOnlineSessionInfo *)0x0;
  (this->OnlineSearchResult).Session.SessionInfo.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  puVar1 = &(this->Delegate).field_0x8;
  (this->OnlineSearchResult).Session.NumOpenPrivateConnections = 0;
  (this->OnlineSearchResult).Session.NumOpenPublicConnections = 0;
  (this->OnlineSearchResult).PingInMs = 9999;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&(this->Delegate).field_0x10 = 0;
  *(undefined8 *)&this->Delegate = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Delegate,
             (FWriteAccessScope *)&local_28);
  local_10 = puVar1;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXVFName__W4Type_EOnJoinSessionCompleteResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUJoinSessionCallbackProxy____A6AXVFName__W4Type_EOnJoinSessionCompleteResult___ZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// ~UJoinSessionCallbackProxy @ 14ec57450

void __thiscall
UJoinSessionCallbackProxy::~UJoinSessionCallbackProxy(UJoinSessionCallbackProxy *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UJoinSessionCallbackProxy__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Delegate);
  pvVar1 = *(void **)&(this->Delegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Delegate);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OnlineSearchResult).Session.SessionInfo.SharedReferenceCount.ReferenceController
            );
  FOnlineSessionSettings::~FOnlineSessionSettings
            (&(this->OnlineSearchResult).Session.SessionSettings);
  pFVar2 = (this->OnlineSearchResult).Session.OwningUserName.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OnlineSearchResult).Session.OwningUserId.SharedReferenceCount.
             ReferenceController);
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

// Activate @ 14ec5f3d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UJoinSessionCallbackProxy::Activate(UJoinSessionCallbackProxy *this)

{
  code *pcVar1;
  bool bVar2;
  FNameEntryId FVar3;
  UObject *pUVar4;
  ulong64 *puVar5;
  undefined4 extraout_var;
  ForAnyElementType FVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined4 local_res18;
  undefined4 uStackX_1c;
  undefined8 local_res20;
  longlong *local_b8;
  TReferenceControllerBase<1> *local_b0;
  FUniqueNetId *local_a8;
  FSharedReferencer<1> local_a0;
  IOnlineSubsystem *local_98;
  wchar_t *local_90;
  TSharedPtr<FUniqueNetId_const_,1> local_88;
  FName local_78;
  FString local_70;
  FString local_60;
  FString local_50;
  undefined1 local_40 [16];
  
  local_res10 = 0;
  local_78.ComparisonIndex.Value = 0;
  local_78.Number = 0;
  local_a0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  UEngine::GetWorldFromContextObject(GEngine,this->WorldContextObject,ReturnNull);
  local_98 = IOnlineSubsystem::Get(&local_78);
  local_90 = L"JoinSession";
  if (local_98 == (IOnlineSubsystem *)0x0) {
    ::FString::PrintfImpl(&local_70,L"%s - Invalid or uninitialized OnlineSubsystem");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_70.Data.ArrayNum != 0) {
      FVar6.Data = local_70.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar6.Data,Warning,(FName)0x0);
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
  }
  pUVar4 = FWeakObjectPtr::Get(&(this->PlayerControllerWeakPtr).WeakPtr);
  local_a8 = (FUniqueNetId *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if ((pUVar4 == (UObject *)0x0) || (*(longlong *)&pUVar4[0x11].field_0x20 == 0)) {
    ::FString::PrintfImpl(&local_50,L"%s - Invalid player state");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_50.Data.ArrayNum != 0) {
      FVar6.Data = local_50.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar6.Data,Warning,(FName)0x0);
    local_60.Data.AllocatorInstance.Data = local_50.Data.AllocatorInstance.Data;
LAB_14ec5f65c:
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
  }
  else {
    FUniqueNetIdWrapper::GetV1
              ((FUniqueNetIdWrapper *)(*(longlong *)&pUVar4[0x11].field_0x20 + 0x2d0),&local_88);
    local_a8 = local_88.Object;
    local_88.Object = (FUniqueNetId *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_a0,&local_88.SharedReferenceCount);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
    if (local_a8 == (FUniqueNetId *)0x0) {
      ::FString::PrintfImpl(&local_60,L"%s - Cannot map local player to unique net ID");
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_60.Data.ArrayNum != 0) {
        FVar6.Data = local_60.Data.AllocatorInstance.Data;
      }
      FFrame::KismetExecutionMessage((wchar_t *)FVar6.Data,Warning,(FName)0x0);
      goto LAB_14ec5f65c;
    }
    if (local_98 != (IOnlineSubsystem *)0x0) {
      (**(code **)(local_98->_padding_ + 0x20))(local_98,&local_b8);
      if (local_b8 != (longlong *)0x0) {
        if ((local_b8 == (longlong *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar5 = (ulong64 *)(**(code **)(*local_b8 + 0x218))(local_b8,local_40,&this->Delegate);
        (this->DelegateHandle).ID = *puVar5;
        plVar7 = local_b8;
        if ((local_b8 == (longlong *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), plVar7 = local_b8, bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pcVar1 = *(code **)(*plVar7 + 0x208);
        FVar3 = FNameEntryId::FromValidEName((EName)local_res8);
        uStackX_1c = 0;
        local_res18 = *(undefined4 *)CONCAT44(extraout_var,FVar3.Value);
        if ((local_a8 == (FUniqueNetId *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        (*pcVar1)(plVar7,local_a8,CONCAT44(uStackX_1c,local_res18),&this->OnlineSearchResult);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_b0);
        goto LAB_14ec5f66f;
      }
      local_res20 = 0;
      FFrame::KismetExecutionMessage
                (L"Sessions not supported by Online Subsystem",Warning,(FName)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b0);
    }
  }
  FEmptyOnlineDelegate_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnFailure);
LAB_14ec5f66f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a0.ReferenceController);
  return;
}

// GetPrivateStaticClass @ 14ec78360

UClass * __cdecl UJoinSessionCallbackProxy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UJoinSessionCallbackProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"JoinSessionCallbackProxy",
               &Z_Registration_Info_UClass_UJoinSessionCallbackProxy.InnerSingleton,
               StaticRegisterNativesUJoinSessionCallbackProxy,0x1b0,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UJoinSessionCallbackProxy>,
               InternalVTableHelperCtorCaller<UJoinSessionCallbackProxy>,local_res8,
               UOnlineBlueprintCallProxyBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UJoinSessionCallbackProxy.InnerSingleton;
}

// JoinSession @ 14ec81fc0

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

UJoinSessionCallbackProxy * __cdecl
UJoinSessionCallbackProxy::JoinSession
          (UObject *param_1,APlayerController *param_2,FBlueprintSessionResult *param_3)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UJoinSessionCallbackProxy *pUVar3;
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
  pUVar3 = (UJoinSessionCallbackProxy *)
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
  FOnlineSessionSearchResult::operator=(&pUVar3->OnlineSearchResult,&param_3->OnlineResult);
  pUVar3->WorldContextObject = param_1;
  return pUVar3;
}

// OnCompleted @ 14ec86210

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
UJoinSessionCallbackProxy::OnCompleted(UJoinSessionCallbackProxy *this,FName param_1,Type param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  FNameEntryId FVar4;
  UObject *pUVar5;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  APlayerController *this_00;
  ForAnyElementType FVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  FString local_118;
  longlong *local_108;
  TReferenceControllerBase<1> *local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  TSharedPtr<FUniqueNetId_const_,1> local_e0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  FUniqueNetId *local_b8;
  FSharedReferencer<1> local_b0;
  IOnlineSubsystem *local_a8;
  wchar_t *local_a0;
  FName local_98;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FGuid local_48;
  
  local_f8 = 0;
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  local_b0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  UEngine::GetWorldFromContextObject(GEngine,this->WorldContextObject,ReturnNull);
  local_a8 = IOnlineSubsystem::Get(&local_98);
  local_a0 = L"JoinSessionCallback";
  if (local_a8 == (IOnlineSubsystem *)0x0) {
    ::FString::PrintfImpl(&local_90,L"%s - Invalid or uninitialized OnlineSubsystem");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_90.Data.ArrayNum != 0) {
      FVar6.Data = local_90.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar6.Data,Warning,(FName)0x0);
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
  }
  pUVar5 = FWeakObjectPtr::Get(&(this->PlayerControllerWeakPtr).WeakPtr);
  local_b8 = (FUniqueNetId *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if ((pUVar5 == (UObject *)0x0) || (*(longlong *)&pUVar5[0x11].field_0x20 == 0)) {
    ::FString::PrintfImpl(&local_60,L"%s - Invalid player state");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_60.Data.ArrayNum != 0) {
      FVar6.Data = local_60.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar6.Data,Warning,(FName)0x0);
    local_80.Data.AllocatorInstance.Data = local_60.Data.AllocatorInstance.Data;
LAB_14ec86566:
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
  }
  else {
    FUniqueNetIdWrapper::GetV1
              ((FUniqueNetIdWrapper *)(*(longlong *)&pUVar5[0x11].field_0x20 + 0x2d0),&local_e0);
    local_b8 = local_e0.Object;
    local_e0.Object = (FUniqueNetId *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_b0,&local_e0.SharedReferenceCount);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e0.SharedReferenceCount.ReferenceController);
    if (local_b8 == (FUniqueNetId *)0x0) {
      ::FString::PrintfImpl(&local_80,L"%s - Cannot map local player to unique net ID");
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_80.Data.ArrayNum != 0) {
        FVar6.Data = local_80.Data.AllocatorInstance.Data;
      }
      FFrame::KismetExecutionMessage((wchar_t *)FVar6.Data,Warning,(FName)0x0);
      goto LAB_14ec86566;
    }
    if (local_a8 != (IOnlineSubsystem *)0x0) {
      (**(code **)(local_a8->_padding_ + 0x20))(local_a8,&local_108);
      if (local_108 != (longlong *)0x0) {
        if ((local_108 == (longlong *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        (**(code **)(*local_108 + 0x220))(local_108,&this->DelegateHandle);
        if (param_2 == Success) {
          local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_118.Data.ArrayNum = 0;
          local_118.Data.ArrayMax = 0;
          plVar7 = local_108;
          if ((local_108 == (longlong *)0x0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), plVar7 = local_108, bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pcVar1 = *(code **)(*plVar7 + 0x378);
          FVar4 = FNameEntryId::FromValidEName((EName)local_res8);
          uStack_ec = 0;
          local_f0 = *(undefined4 *)CONCAT44(extraout_var,FVar4.Value);
          FVar4 = FNameEntryId::FromValidEName((EName)local_res20);
          uStack_e4 = 0;
          local_e8 = *(undefined4 *)CONCAT44(extraout_var_00,FVar4.Value);
          cVar3 = (*pcVar1)(plVar7,local_e8);
          if ((cVar3 != '\0') &&
             (bVar2 = FWeakObjectPtr::IsValid(&(this->PlayerControllerWeakPtr).WeakPtr), bVar2)) {
            if (4 < (byte)LogOnlineSession._0_1_) {
              ::FString::PrintfImpl(&local_70,L"Join session: traveling to %s");
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSession)
              ;
              if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_70.Data.AllocatorInstance.Data);
              }
            }
            this_00 = (APlayerController *)
                      FWeakObjectPtr::Get(&(this->PlayerControllerWeakPtr).WeakPtr);
            local_c8 = 0;
            uStack_c0 = 0;
            local_48.A = 0;
            local_48.B = 0;
            local_48.C = 0;
            local_48.D = 0;
            APlayerController::ClientTravel(this_00,&local_118,TRAVEL_Absolute,false,&local_48);
            FEmptyOnlineDelegate_DelegateWrapper
                      ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnSuccess);
            if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_118.Data.AllocatorInstance.Data);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_100);
            goto LAB_14ec86579;
          }
          if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_118.Data.AllocatorInstance.Data);
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_100)
      ;
    }
  }
  FEmptyOnlineDelegate_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnFailure);
LAB_14ec86579:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b0.ReferenceController);
  return;
}

// StaticRegisterNativesUJoinSessionCallbackProxy @ 14ec99970

void __cdecl UJoinSessionCallbackProxy::StaticRegisterNativesUJoinSessionCallbackProxy(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UJoinSessionCallbackProxy_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execJoinSession @ 14eca6430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UJoinSessionCallbackProxy::execJoinSession(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  undefined8 uVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  FOnlineSessionSearchResult *pFVar6;
  longlong *plVar7;
  undefined1 auStack_218 [32];
  UObject *local_1f8;
  undefined8 local_1f0;
  UObject *local_1e8 [2];
  undefined1 local_1d8 [128];
  FOnlineSessionSearchResult local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_218;
  local_1f0 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1f0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1f0);
  }
  local_1f8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1f8);
  }
  local_158.Session.OwningUserId.Object = (FUniqueNetId *)0x0;
  local_158.Session._padding_ = (longlong)&___7FOnlineSession__6B_;
  local_158.Session.OwningUserId.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_158.Session.OwningUserName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.Session.OwningUserName.Data.ArrayNum = 0;
  local_158.Session.OwningUserName.Data.ArrayMax = 0;
  FOnlineSessionSettings::FOnlineSessionSettings(&local_158.Session.SessionSettings);
  local_158.Session.NumOpenPrivateConnections = 0;
  local_158.Session.NumOpenPublicConnections = 0;
  local_158.Session.SessionInfo.Object = (FOnlineSessionInfo *)0x0;
  local_158.Session.SessionInfo.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_158.PingInMs = 9999;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_158,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_158);
  }
  uVar3 = local_1f0;
  pUVar2 = local_1f8;
  pFVar6 = &local_158;
  if ((FOnlineSessionSearchResult *)param_2->MostRecentPropertyAddress !=
      (FOnlineSessionSearchResult *)0x0) {
    pFVar6 = (FOnlineSessionSearchResult *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar4 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar4,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar5 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1d8,pUVar5);
  local_1d8._8_8_ = pUVar4;
  pUVar4 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1d8);
  if (local_1d8._64_8_ != 0) {
    plVar7 = (longlong *)(local_1d8 + 0x50);
    if ((longlong *)local_1d8._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_1d8._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  local_1e8[0] = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&pUVar4[2].field_0x10,(FObjectPtr)local_1e8);
  FOnlineSessionSearchResult::operator=((FOnlineSessionSearchResult *)&pUVar4[2].field_0x18,pFVar6);
  *(undefined8 *)&pUVar4[10].field_0x18 = uVar3;
  *(UObject **)param_3 = pUVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.Session.SessionInfo.SharedReferenceCount.ReferenceController);
  FOnlineSessionSettings::~FOnlineSessionSettings(&local_158.Session.SessionSettings);
  if (local_158.Session.OwningUserName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
    FMemory::Free(local_158.Session.OwningUserName.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.Session.OwningUserId.SharedReferenceCount.ReferenceController);
  return;
}

