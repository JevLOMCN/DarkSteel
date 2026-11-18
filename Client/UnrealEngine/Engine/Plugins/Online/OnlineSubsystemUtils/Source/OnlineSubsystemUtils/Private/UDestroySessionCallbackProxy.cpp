// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 10

// StaticClass @ 14ec463e0

UClass * __cdecl UDestroySessionCallbackProxy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDestroySessionCallbackProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"DestroySessionCallbackProxy",
               &Z_Registration_Info_UClass_UDestroySessionCallbackProxy.InnerSingleton,
               StaticRegisterNativesUDestroySessionCallbackProxy,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDestroySessionCallbackProxy>,
               InternalVTableHelperCtorCaller<UDestroySessionCallbackProxy>,local_res8,
               UOnlineBlueprintCallProxyBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDestroySessionCallbackProxy.InnerSingleton;
}

// UDestroySessionCallbackProxy @ 14ec53570

UDestroySessionCallbackProxy * __thiscall
UDestroySessionCallbackProxy::UDestroySessionCallbackProxy
          (UDestroySessionCallbackProxy *this,FVTableHelper *param_1)

{
  UOnlineBlueprintCallProxyBase::UOnlineBlueprintCallProxyBase
            ((UOnlineBlueprintCallProxyBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDestroySessionCallbackProxy__6B_;
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
  return this;
}

// UDestroySessionCallbackProxy @ 14ec535d0

UDestroySessionCallbackProxy * __thiscall
UDestroySessionCallbackProxy::UDestroySessionCallbackProxy
          (UDestroySessionCallbackProxy *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  UDestroySessionCallbackProxy *local_res8;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  UOnlineBlueprintCallProxyBase::UOnlineBlueprintCallProxyBase
            ((UOnlineBlueprintCallProxyBase *)this,param_1);
  puVar1 = &(this->Delegate).field_0x8;
  this->_padding_ = (longlong)&___7UDestroySessionCallbackProxy__6B_;
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
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDestroySessionCallbackProxy____A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
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

// ~UDestroySessionCallbackProxy @ 14ec56d10

void __thiscall
UDestroySessionCallbackProxy::~UDestroySessionCallbackProxy(UDestroySessionCallbackProxy *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDestroySessionCallbackProxy__6B_;
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

// Activate @ 14ec5df10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDestroySessionCallbackProxy::Activate(UDestroySessionCallbackProxy *this)

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
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_e8;
  ForAnyElementType local_e0;
  ulonglong local_d8;
  longlong *local_d0;
  TReferenceControllerBase<1> *local_c8;
  TSharedPtr<FUniqueNetId_const_,1> local_c0;
  FUniqueNetId *local_b0;
  FSharedReferencer<1> local_a8;
  IOnlineSubsystem *local_a0;
  wchar_t *local_98;
  FName local_90;
  FString local_88;
  FString local_78;
  FString local_68;
  FDestructionSentinel local_58;
  undefined1 local_40 [16];
  
  local_res10 = 0;
  local_90.ComparisonIndex.Value = 0;
  local_90.Number = 0;
  local_a8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  UEngine::GetWorldFromContextObject(GEngine,this->WorldContextObject,ReturnNull);
  local_a0 = IOnlineSubsystem::Get(&local_90);
  local_98 = L"DestroySession";
  if (local_a0 == (IOnlineSubsystem *)0x0) {
    ::FString::PrintfImpl(&local_88,L"%s - Invalid or uninitialized OnlineSubsystem");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_88.Data.ArrayNum != 0) {
      FVar6.Data = local_88.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar6.Data,Warning,(FName)0x0);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  pUVar4 = FWeakObjectPtr::Get(&(this->PlayerControllerWeakPtr).WeakPtr);
  local_b0 = (FUniqueNetId *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if ((pUVar4 == (UObject *)0x0) || (*(longlong *)&pUVar4[0x11].field_0x20 == 0)) {
    ::FString::PrintfImpl(&local_68,L"%s - Invalid player state");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar6.Data = local_68.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar6.Data,Warning,(FName)0x0);
    local_78.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
LAB_14ec5e1e8:
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  else {
    FUniqueNetIdWrapper::GetV1
              ((FUniqueNetIdWrapper *)(*(longlong *)&pUVar4[0x11].field_0x20 + 0x2d0),&local_c0);
    local_b0 = local_c0.Object;
    local_c0.Object = (FUniqueNetId *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_a8,&local_c0.SharedReferenceCount);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c0.SharedReferenceCount.ReferenceController);
    if (local_b0 == (FUniqueNetId *)0x0) {
      ::FString::PrintfImpl(&local_78,L"%s - Cannot map local player to unique net ID");
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_78.Data.ArrayNum != 0) {
        FVar6.Data = local_78.Data.AllocatorInstance.Data;
      }
      FFrame::KismetExecutionMessage((wchar_t *)FVar6.Data,Warning,(FName)0x0);
      goto LAB_14ec5e1e8;
    }
    if (local_a0 != (IOnlineSubsystem *)0x0) {
      (**(code **)(local_a0->_padding_ + 0x20))(local_a0,&local_d0);
      if (local_d0 != (longlong *)0x0) {
        if ((local_d0 == (longlong *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar5 = (ulong64 *)(**(code **)(*local_d0 + 0xf0))(local_d0,local_40,&this->Delegate);
        (this->DelegateHandle).ID = *puVar5;
        plVar7 = local_d0;
        if ((local_d0 == (longlong *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), plVar7 = local_d0, bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_d8 = 0;
        local_e8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
        local_e0.Data = (FScriptContainerElement *)0x0;
        pcVar1 = *(code **)(*plVar7 + 0xe8);
        FVar3 = FNameEntryId::FromValidEName((EName)local_res8);
        uStackX_1c = 0;
        local_res18 = *(undefined4 *)CONCAT44(extraout_var,FVar3.Value);
        (*pcVar1)(plVar7,local_res18);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_e8,(FWriteAccessScope *)&local_58);
        if (((int)local_d8 != 0) && (local_e0.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)local_e0.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_e0,0,0,0x10);
          local_d8 = local_d8 & 0xffffffff00000000;
        }
        if (local_58.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
        }
        if (local_e0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_e8.AccessDetector);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_c8);
        goto LAB_14ec5e1fb;
      }
      local_res20 = 0;
      FFrame::KismetExecutionMessage
                (L"Sessions not supported by Online Subsystem",Warning,(FName)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_c8);
    }
  }
  FEmptyOnlineDelegate_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnFailure);
LAB_14ec5e1fb:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.ReferenceController);
  return;
}

// DestroySession @ 14ec6c7b0

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

UDestroySessionCallbackProxy * __cdecl
UDestroySessionCallbackProxy::DestroySession(UObject *param_1,APlayerController *param_2)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDestroySessionCallbackProxy *pUVar3;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  APlayerController *local_a8 [2];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pUVar1 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pUVar1;
  pUVar3 = (UDestroySessionCallbackProxy *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar4 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  local_a8[0] = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (APlayerController *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&(pUVar3->PlayerControllerWeakPtr).WeakPtr,(FObjectPtr)local_a8);
  pUVar3->WorldContextObject = param_1;
  return pUVar3;
}

// GetPrivateStaticClass @ 14ec77a00

UClass * __cdecl UDestroySessionCallbackProxy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDestroySessionCallbackProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"DestroySessionCallbackProxy",
               &Z_Registration_Info_UClass_UDestroySessionCallbackProxy.InnerSingleton,
               StaticRegisterNativesUDestroySessionCallbackProxy,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDestroySessionCallbackProxy>,
               InternalVTableHelperCtorCaller<UDestroySessionCallbackProxy>,local_res8,
               UOnlineBlueprintCallProxyBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDestroySessionCallbackProxy.InnerSingleton;
}

// OnCompleted @ 14ec858e0

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
UDestroySessionCallbackProxy::OnCompleted
          (UDestroySessionCallbackProxy *this,FName param_1,bool param_2)

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
  local_30 = L"DestroySessionCallback";
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
          (**(code **)(*local_88 + 0xf8))(local_88,&this->DelegateHandle);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_80);
      }
      goto LAB_14ec85ac5;
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
LAB_14ec85ac5:
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

// StaticRegisterNativesUDestroySessionCallbackProxy @ 14ec99690

void __cdecl UDestroySessionCallbackProxy::StaticRegisterNativesUDestroySessionCallbackProxy(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDestroySessionCallbackProxy_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execDestroySession @ 14eca4cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UDestroySessionCallbackProxy::execDestroySession(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  undefined8 uVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  longlong *plVar6;
  undefined1 auStack_e8 [32];
  UObject *local_c8;
  undefined8 local_c0;
  UObject *local_b8 [2];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_c0 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c0);
  }
  local_c8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  uVar3 = local_c0;
  pUVar2 = local_c8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar4 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar4,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar5 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar5);
  local_a8._8_8_ = pUVar4;
  pUVar4 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar6 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  local_b8[0] = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&pUVar4[2].field_0x10,(FObjectPtr)local_b8);
  *(undefined8 *)&pUVar4[3].field_0x10 = uVar3;
  *(UObject **)param_3 = pUVar4;
  return;
}

