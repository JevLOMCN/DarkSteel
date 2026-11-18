// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 11

// StaticClass @ 14ec44690

UClass * __cdecl UCreateSessionCallbackProxy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCreateSessionCallbackProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"CreateSessionCallbackProxy",
               &Z_Registration_Info_UClass_UCreateSessionCallbackProxy.InnerSingleton,
               StaticRegisterNativesUCreateSessionCallbackProxy,0xb8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCreateSessionCallbackProxy>,
               InternalVTableHelperCtorCaller<UCreateSessionCallbackProxy>,local_res8,
               UOnlineBlueprintCallProxyBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCreateSessionCallbackProxy.InnerSingleton;
}

// UCreateSessionCallbackProxy @ 14ec53460

UCreateSessionCallbackProxy * __thiscall
UCreateSessionCallbackProxy::UCreateSessionCallbackProxy
          (UCreateSessionCallbackProxy *this,FVTableHelper *param_1)

{
  UOnlineBlueprintCallProxyBase::UOnlineBlueprintCallProxyBase
            ((UOnlineBlueprintCallProxyBase *)this,param_1);
  this->_padding_ = (longlong)&___7UCreateSessionCallbackProxy__6B_;
  *(undefined8 *)&this->OnSuccess = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x8 = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x10 = 0;
  *(undefined8 *)&this->OnFailure = 0;
  *(undefined8 *)&(this->OnFailure).field_0x8 = 0;
  *(undefined8 *)&(this->OnFailure).field_0x10 = 0;
  (this->PlayerControllerWeakPtr).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&this->CreateCompleteDelegate = 0;
  *(undefined8 *)&(this->CreateCompleteDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->CreateCompleteDelegate).field_0x10 = 0;
  *(undefined8 *)&this->StartCompleteDelegate = 0;
  *(undefined8 *)&(this->StartCompleteDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->StartCompleteDelegate).field_0x10 = 0;
  (this->CreateCompleteDelegateHandle).ID = 0;
  (this->StartCompleteDelegateHandle).ID = 0;
  return this;
}

// UCreateSessionCallbackProxy @ 14ec534e0

UCreateSessionCallbackProxy * __thiscall
UCreateSessionCallbackProxy::UCreateSessionCallbackProxy
          (UCreateSessionCallbackProxy *this,FObjectInitializer *param_1)

{
  UOnlineBlueprintCallProxyBase::UOnlineBlueprintCallProxyBase
            ((UOnlineBlueprintCallProxyBase *)this,param_1);
  this->_padding_ = (longlong)&___7UCreateSessionCallbackProxy__6B_;
  *(undefined8 *)&this->OnSuccess = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x8 = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x10 = 0;
  *(undefined8 *)&this->OnFailure = 0;
  *(undefined8 *)&(this->OnFailure).field_0x8 = 0;
  *(undefined8 *)&(this->OnFailure).field_0x10 = 0;
  (this->PlayerControllerWeakPtr).WeakPtr = (FWeakObjectPtr)0x0;
  TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>::
  CreateUObject<UCreateSessionCallbackProxy>
            (&this->CreateCompleteDelegate,this,(pmf_f83ca02e)0x14ec86af0);
  TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>::
  CreateUObject<UCreateSessionCallbackProxy>
            (&this->StartCompleteDelegate,this,(pmf_f83ca02e)0x14ec8aa80);
  (this->CreateCompleteDelegateHandle).ID = 0;
  (this->StartCompleteDelegateHandle).ID = 0;
  this->NumPublicConnections = 1;
  return this;
}

// ~UCreateSessionCallbackProxy @ 14ec56c60

void __thiscall
UCreateSessionCallbackProxy::~UCreateSessionCallbackProxy(UCreateSessionCallbackProxy *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UCreateSessionCallbackProxy__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->StartCompleteDelegate);
  pvVar1 = *(void **)&(this->StartCompleteDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->StartCompleteDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->CreateCompleteDelegate);
  pvVar1 = *(void **)&(this->CreateCompleteDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->CreateCompleteDelegate);
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

// Activate @ 14ec5db70

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

void __thiscall UCreateSessionCallbackProxy::Activate(UCreateSessionCallbackProxy *this)

{
  code *pcVar1;
  bool bVar2;
  FNameEntryId FVar3;
  UObject *pUVar4;
  ulong64 *puVar5;
  undefined4 extraout_var;
  ForAnyElementType FVar6;
  longlong *plVar7;
  undefined1 auStack_1c8 [32];
  longlong *local_1a8;
  TReferenceControllerBase<1> *local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  FUniqueNetId *local_180;
  FSharedReferencer<1> local_178;
  IOnlineSubsystem *local_170;
  wchar_t *local_168;
  TSharedPtr<FUniqueNetId_const_,1> local_160;
  undefined1 local_150 [8];
  FName local_148;
  FString local_140;
  FString local_130;
  FString local_120;
  undefined1 local_110 [8];
  undefined1 local_108 [120];
  void *local_90;
  undefined4 local_88;
  TSparseArray<TSparseSetElement<TTuple<TSharedRef<FUniqueNetId_const_,1>,FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_80;
  void *local_40;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  local_198 = 0;
  local_148.ComparisonIndex.Value = 0;
  local_148.Number = 0;
  local_178.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  UEngine::GetWorldFromContextObject(GEngine,this->WorldContextObject,ReturnNull);
  local_170 = IOnlineSubsystem::Get(&local_148);
  local_168 = L"CreateSession";
  if (local_170 == (IOnlineSubsystem *)0x0) {
    ::FString::PrintfImpl(&local_140,L"%s - Invalid or uninitialized OnlineSubsystem");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_140.Data.ArrayNum != 0) {
      FVar6.Data = local_140.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar6.Data,Warning,(FName)0x0);
    if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
    }
  }
  pUVar4 = FWeakObjectPtr::Get(&(this->PlayerControllerWeakPtr).WeakPtr);
  local_180 = (FUniqueNetId *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if ((pUVar4 == (UObject *)0x0) || (*(longlong *)&pUVar4[0x11].field_0x20 == 0)) {
    ::FString::PrintfImpl(&local_120,L"%s - Invalid player state");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_120.Data.ArrayNum != 0) {
      FVar6.Data = local_120.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar6.Data,Warning,(FName)0x0);
    local_130.Data.AllocatorInstance.Data = local_120.Data.AllocatorInstance.Data;
LAB_14ec5deb5:
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
  }
  else {
    FUniqueNetIdWrapper::GetV1
              ((FUniqueNetIdWrapper *)(*(longlong *)&pUVar4[0x11].field_0x20 + 0x2d0),&local_160);
    local_180 = local_160.Object;
    local_160.Object = (FUniqueNetId *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_178,&local_160.SharedReferenceCount);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_160.SharedReferenceCount.ReferenceController);
    if (local_180 == (FUniqueNetId *)0x0) {
      ::FString::PrintfImpl(&local_130,L"%s - Cannot map local player to unique net ID");
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_130.Data.ArrayNum != 0) {
        FVar6.Data = local_130.Data.AllocatorInstance.Data;
      }
      FFrame::KismetExecutionMessage((wchar_t *)FVar6.Data,Warning,(FName)0x0);
      goto LAB_14ec5deb5;
    }
    if (local_170 != (IOnlineSubsystem *)0x0) {
      (**(code **)(local_170->_padding_ + 0x20))(local_170,&local_1a8);
      if (local_1a8 != (longlong *)0x0) {
        if ((local_1a8 == (longlong *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar5 = (ulong64 *)
                 (**(code **)(*local_1a8 + 0x50))(local_1a8,local_110,&this->CreateCompleteDelegate)
        ;
        (this->CreateCompleteDelegateHandle).ID = *puVar5;
        FOnlineSessionSettings::FOnlineSessionSettings((FOnlineSessionSettings *)local_108);
        local_108._8_4_ = this->NumPublicConnections;
        local_108[0x12] = this->bUseLAN;
        local_108[0x1a] = this->bUseLobbiesIfAvailable;
        local_108[0x10] = true;
        local_108[0x11] = true;
        local_108[0x16] = true;
        local_108[0x17] = true;
        plVar7 = local_1a8;
        if ((local_1a8 == (longlong *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), plVar7 = local_1a8, bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pcVar1 = *(code **)(*plVar7 + 0x40);
        FVar3 = FNameEntryId::FromValidEName((EName)local_150);
        uStack_18c = 0;
        local_190 = *(undefined4 *)CONCAT44(extraout_var,FVar3.Value);
        if ((local_180 == (FUniqueNetId *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        (*pcVar1)(plVar7,local_180,CONCAT44(uStack_18c,local_190),local_108);
        local_108._0_8_ = &___7FOnlineSessionSettings__6B_;
        local_38 = 0;
        if (local_40 != (void *)0x0) {
          FMemory::Free(local_40);
        }
        TSparseArray<TSparseSetElement<TTuple<TSharedRef<FUniqueNetId_const_,1>,FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<TSharedRef<FUniqueNetId_const_,1>,FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_80);
        local_88 = 0;
        if (local_90 != (void *)0x0) {
          FMemory::Free(local_90);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,FOnlineSessionSetting>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FName,FOnlineSessionSetting>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FName,FOnlineSessionSetting>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)(local_108 + 0x38));
        if ((FScriptContainerElement *)local_108._32_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_108._32_8_);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1a0);
        goto LAB_14ec5dec8;
      }
      local_188 = 0;
      FFrame::KismetExecutionMessage
                (L"Sessions not supported by Online Subsystem",Warning,(FName)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1a0)
      ;
    }
  }
  FEmptyOnlineDelegate_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnFailure);
LAB_14ec5dec8:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.ReferenceController);
  return;
}

// CreateSession @ 14ec6ac90

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

UCreateSessionCallbackProxy * __cdecl
UCreateSessionCallbackProxy::CreateSession
          (UObject *param_1,APlayerController *param_2,int param_3,bool param_4,bool param_5)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UCreateSessionCallbackProxy *pUVar3;
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
  pUVar3 = (UCreateSessionCallbackProxy *)
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
  pUVar3->bUseLobbiesIfAvailable = param_5;
  pUVar3->NumPublicConnections = param_3;
  pUVar3->bUseLAN = param_4;
  pUVar3->WorldContextObject = param_1;
  return pUVar3;
}

// GetPrivateStaticClass @ 14ec77940

UClass * __cdecl UCreateSessionCallbackProxy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCreateSessionCallbackProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"CreateSessionCallbackProxy",
               &Z_Registration_Info_UClass_UCreateSessionCallbackProxy.InnerSingleton,
               StaticRegisterNativesUCreateSessionCallbackProxy,0xb8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCreateSessionCallbackProxy>,
               InternalVTableHelperCtorCaller<UCreateSessionCallbackProxy>,local_res8,
               UOnlineBlueprintCallProxyBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCreateSessionCallbackProxy.InnerSingleton;
}

// OnCreateCompleted @ 14ec86af0

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
UCreateSessionCallbackProxy::OnCreateCompleted
          (UCreateSessionCallbackProxy *this,FName param_1,bool param_2)

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
  longlong *local_b8;
  TReferenceControllerBase<1> *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  TSharedPtr<FUniqueNetId_const_,1> local_a0;
  FUniqueNetId *local_90;
  FSharedReferencer<1> local_88;
  IOnlineSubsystem *local_80;
  wchar_t *local_78;
  FName local_70;
  FString local_68;
  FString local_58;
  FString local_48;
  undefined1 local_38 [16];
  
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  local_88.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  UEngine::GetWorldFromContextObject(GEngine,this->WorldContextObject,ReturnNull);
  local_80 = IOnlineSubsystem::Get(&local_70);
  local_78 = L"CreateSessionCallback";
  if (local_80 == (IOnlineSubsystem *)0x0) {
    ::FString::PrintfImpl(&local_68,L"%s - Invalid or uninitialized OnlineSubsystem");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar6.Data = local_68.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar6.Data,Warning,(FName)0x0);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  pUVar4 = FWeakObjectPtr::Get(&(this->PlayerControllerWeakPtr).WeakPtr);
  local_90 = (FUniqueNetId *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if ((pUVar4 == (UObject *)0x0) || (*(longlong *)&pUVar4[0x11].field_0x20 == 0)) {
    ::FString::PrintfImpl(&local_48,L"%s - Invalid player state");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar6.Data = local_48.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar6.Data,Warning,(FName)0x0);
    local_58.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
LAB_14ec86d80:
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  else {
    FUniqueNetIdWrapper::GetV1
              ((FUniqueNetIdWrapper *)(*(longlong *)&pUVar4[0x11].field_0x20 + 0x2d0),&local_a0);
    local_90 = local_a0.Object;
    local_a0.Object = (FUniqueNetId *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_88,&local_a0.SharedReferenceCount);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a0.SharedReferenceCount.ReferenceController);
    if (local_90 == (FUniqueNetId *)0x0) {
      ::FString::PrintfImpl(&local_58,L"%s - Cannot map local player to unique net ID");
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_58.Data.ArrayNum != 0) {
        FVar6.Data = local_58.Data.AllocatorInstance.Data;
      }
      FFrame::KismetExecutionMessage((wchar_t *)FVar6.Data,Warning,(FName)0x0);
      goto LAB_14ec86d80;
    }
    if (local_80 != (IOnlineSubsystem *)0x0) {
      (**(code **)(local_80->_padding_ + 0x20))(local_80,&local_b8);
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
        (**(code **)(*local_b8 + 0x58))(local_b8,&this->CreateCompleteDelegateHandle);
        if (param_2) {
          if ((local_b8 == (longlong *)0x0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          puVar5 = (ulong64 *)
                   (**(code **)(*local_b8 + 0x78))(local_b8,local_38,&this->StartCompleteDelegate);
          (this->StartCompleteDelegateHandle).ID = *puVar5;
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
          pcVar1 = *(code **)(*plVar7 + 0x70);
          FVar3 = FNameEntryId::FromValidEName((EName)local_res8);
          uStack_a4 = 0;
          local_a8 = *(undefined4 *)CONCAT44(extraout_var,FVar3.Value);
          (*pcVar1)(plVar7,local_a8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_b0);
          goto LAB_14ec86d98;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b0);
    }
  }
  if (!param_2) {
    FEmptyOnlineDelegate_DelegateWrapper
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnFailure);
  }
LAB_14ec86d98:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.ReferenceController);
  return;
}

// OnStartCompleted @ 14ec8aa80

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
UCreateSessionCallbackProxy::OnStartCompleted
          (UCreateSessionCallbackProxy *this,FName param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  ForAnyElementType FVar4;
  longlong lVar5;
  FName local_res20;
  TSharedPtr<FUniqueNetId_const_,1> local_98;
  longlong *local_88;
  TReferenceControllerBase<1> *local_80;
  FString local_78;
  FString local_68;
  FString local_58;
  FUniqueNetId *local_48;
  FSharedReferencer<1> local_40;
  IOnlineSubsystem *local_38;
  wchar_t *local_30;
  
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  local_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  UEngine::GetWorldFromContextObject(GEngine,this->WorldContextObject,ReturnNull);
  local_38 = IOnlineSubsystem::Get(&local_res20);
  local_30 = L"StartSessionCallback";
  if (local_38 == (IOnlineSubsystem *)0x0) {
    ::FString::PrintfImpl(&local_78,L"%s - Invalid or uninitialized OnlineSubsystem");
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar4.Data = local_78.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar4.Data,Warning,(FName)0x0);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  pUVar3 = FWeakObjectPtr::Get(&(this->PlayerControllerWeakPtr).WeakPtr);
  local_48 = (FUniqueNetId *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if ((pUVar3 == (UObject *)0x0) || (*(longlong *)&pUVar3[0x11].field_0x20 == 0)) {
    ::FString::PrintfImpl(&local_58,L"%s - Invalid player state");
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar4.Data = local_58.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar4.Data,Warning,(FName)0x0);
    local_68.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
  }
  else {
    FUniqueNetIdWrapper::GetV1
              ((FUniqueNetIdWrapper *)(*(longlong *)&pUVar3[0x11].field_0x20 + 0x2d0),&local_98);
    local_48 = local_98.Object;
    local_98.Object = (FUniqueNetId *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_40,&local_98.SharedReferenceCount);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.SharedReferenceCount.ReferenceController);
    if (local_48 != (FUniqueNetId *)0x0) {
      if (local_38 != (IOnlineSubsystem *)0x0) {
        (**(code **)(local_38->_padding_ + 0x20))(local_38,&local_88);
        if (local_88 != (longlong *)0x0) {
          if ((local_88 == (longlong *)0x0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          (**(code **)(*local_88 + 0x80))(local_88,&this->StartCompleteDelegateHandle);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_80);
      }
      goto LAB_14ec8ac65;
    }
    ::FString::PrintfImpl(&local_68,L"%s - Cannot map local player to unique net ID");
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar4.Data = local_68.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar4.Data,Warning,(FName)0x0);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
LAB_14ec8ac65:
  lVar5 = 0x30;
  if (!param_2) {
    lVar5 = 0x48;
  }
  FEmptyOnlineDelegate_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             ((longlong)&this->_padding_ + lVar5));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.ReferenceController);
  return;
}

// StaticRegisterNativesUCreateSessionCallbackProxy @ 14ec99650

void __cdecl UCreateSessionCallbackProxy::StaticRegisterNativesUCreateSessionCallbackProxy(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UCreateSessionCallbackProxy_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCreateSession @ 14eca4a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UCreateSessionCallbackProxy::execCreateSession(UObject *param_1,FFrame *param_2,void *param_3)

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
  *(undefined4 *)&pUVar5[4].field_0x8 = uVar2;
  pUVar5[4].field_0xc = bVar8;
  pUVar5[4].field_0xd = bVar9;
  *(undefined8 *)&pUVar5[4].field_0x10 = uVar4;
  *(UObject **)param_3 = pUVar5;
  return;
}

