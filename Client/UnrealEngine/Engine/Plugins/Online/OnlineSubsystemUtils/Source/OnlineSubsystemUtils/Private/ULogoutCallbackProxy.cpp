// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 10

// StaticClass @ 14ec465a0

UClass * __cdecl ULogoutCallbackProxy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULogoutCallbackProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"LogoutCallbackProxy",
               &Z_Registration_Info_UClass_ULogoutCallbackProxy.InnerSingleton,
               StaticRegisterNativesULogoutCallbackProxy,0x78,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULogoutCallbackProxy>,
               InternalVTableHelperCtorCaller<ULogoutCallbackProxy>,local_res8,
               UBlueprintAsyncActionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULogoutCallbackProxy.InnerSingleton;
}

// ULogoutCallbackProxy @ 14ec54900

ULogoutCallbackProxy * __thiscall
ULogoutCallbackProxy::ULogoutCallbackProxy(ULogoutCallbackProxy *this,FVTableHelper *param_1)

{
  UBlueprintAsyncActionBase::UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this,param_1);
  this->_padding_ = (longlong)&___7ULogoutCallbackProxy__6B_;
  *(undefined8 *)&this->OnSuccess = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x8 = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x10 = 0;
  *(undefined8 *)&this->OnFailure = 0;
  *(undefined8 *)&(this->OnFailure).field_0x8 = 0;
  *(undefined8 *)&(this->OnFailure).field_0x10 = 0;
  (this->PlayerControllerWeakPtr).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OnLogoutCompleteDelegateHandle).ID = 0;
  return this;
}

// ULogoutCallbackProxy @ 14ec54950

ULogoutCallbackProxy * __thiscall
ULogoutCallbackProxy::ULogoutCallbackProxy(ULogoutCallbackProxy *this,FObjectInitializer *param_1)

{
  UBlueprintAsyncActionBase::UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this,param_1);
  this->_padding_ = (longlong)&___7ULogoutCallbackProxy__6B_;
  *(undefined8 *)&this->OnSuccess = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x8 = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x10 = 0;
  *(undefined8 *)&this->OnFailure = 0;
  *(undefined8 *)&(this->OnFailure).field_0x8 = 0;
  *(undefined8 *)&(this->OnFailure).field_0x10 = 0;
  (this->PlayerControllerWeakPtr).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OnLogoutCompleteDelegateHandle).ID = 0;
  this->WorldContextObject = (UObject *)0x0;
  return this;
}

// ~ULogoutCallbackProxy @ 14ec57650

void __thiscall ULogoutCallbackProxy::~ULogoutCallbackProxy(ULogoutCallbackProxy *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7ULogoutCallbackProxy__6B_;
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
  UBlueprintAsyncActionBase::~UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this);
  return;
}

// Activate @ 14ec5f690

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ULogoutCallbackProxy::Activate(ULogoutCallbackProxy *this)

{
  undefined1 *this_00;
  int iVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  IOnlineSubsystem *pIVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  ulong64 *puVar10;
  ForAnyElementType FVar11;
  UObject **ppUVar12;
  longlong *local_148;
  TReferenceControllerBase<1> *local_140;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_138;
  FDelegateAllocation local_130;
  FUniqueNetId *local_120;
  FSharedReferencer<1> local_118;
  IOnlineSubsystem *local_110;
  wchar_t *local_108;
  TSharedPtr<FUniqueNetId_const_,1> local_100;
  UObject *local_f0;
  FName local_e8;
  UObject *local_e0;
  UObject *local_d8;
  ULogoutCallbackProxy *local_d0;
  UObject *local_c8;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FDestructionSentinel local_90;
  FDestructionSentinel local_78;
  FDelegateAllocation *local_60;
  undefined1 local_58 [24];
  
  bVar4 = FWeakObjectPtr::IsValid(&(this->PlayerControllerWeakPtr).WeakPtr);
  if (!bVar4) {
    FFrame::KismetExecutionMessage
              (L"A player controller must be provided in order to show the external login UI.",
               Warning,(FName)0x0);
    local_f0 = FWeakObjectPtr::Get(&(this->PlayerControllerWeakPtr).WeakPtr);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnFailure,&local_f0);
    return;
  }
  local_e8.ComparisonIndex.Value = 0;
  local_e8.Number = 0;
  local_118.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  UEngine::GetWorldFromContextObject(GEngine,this->WorldContextObject,ReturnNull);
  pIVar5 = IOnlineSubsystem::Get(&local_e8);
  local_108 = L"Logout";
  local_110 = pIVar5;
  if (pIVar5 == (IOnlineSubsystem *)0x0) {
    ::FString::PrintfImpl(&local_c0,L"%s - Invalid or uninitialized OnlineSubsystem");
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_c0.Data.ArrayNum != 0) {
      FVar11.Data = local_c0.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar11.Data,Warning,(FName)0x0);
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
  }
  pUVar6 = FWeakObjectPtr::Get(&(this->PlayerControllerWeakPtr).WeakPtr);
  local_120 = (FUniqueNetId *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if ((pUVar6 == (UObject *)0x0) || (*(longlong *)&pUVar6[0x11].field_0x20 == 0)) {
    ::FString::PrintfImpl(&local_a0,L"%s - Invalid player state");
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_a0.Data.ArrayNum != 0) {
      FVar11.Data = local_a0.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar11.Data,Warning,(FName)0x0);
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
  }
  else {
    FUniqueNetIdWrapper::GetV1
              ((FUniqueNetIdWrapper *)(*(longlong *)&pUVar6[0x11].field_0x20 + 0x2d0),&local_100);
    local_120 = local_100.Object;
    local_100.Object = (FUniqueNetId *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_118,&local_100.SharedReferenceCount);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_100.SharedReferenceCount.ReferenceController);
    pIVar5 = local_110;
    if (local_120 == (FUniqueNetId *)0x0) {
      ::FString::PrintfImpl(&local_b0,L"%s - Cannot map local player to unique net ID");
      FVar11.Data = (FScriptContainerElement *)L"";
      if (local_b0.Data.ArrayNum != 0) {
        FVar11.Data = local_b0.Data.AllocatorInstance.Data;
      }
      FFrame::KismetExecutionMessage((wchar_t *)FVar11.Data,Warning,(FName)0x0);
      pIVar5 = local_110;
      if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        pIVar5 = local_110;
      }
    }
  }
  if (pIVar5 == (IOnlineSubsystem *)0x0) {
    local_e0 = FWeakObjectPtr::Get(&(this->PlayerControllerWeakPtr).WeakPtr);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnFailure,&local_e0);
    goto LAB_14ec5fb75;
  }
  (**(code **)(pIVar5->_padding_ + 0x80))(pIVar5,&local_148);
  if (local_148 == (longlong *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Logout: identity functionality not supported by the current online subsystem",
               Warning,(FName)0x0);
    local_d8 = FWeakObjectPtr::Get(&(this->PlayerControllerWeakPtr).WeakPtr);
    ppUVar12 = &local_d8;
LAB_14ec5fb62:
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnFailure,ppUVar12);
  }
  else {
    pUVar6 = FWeakObjectPtr::Get(&(this->PlayerControllerWeakPtr).WeakPtr);
    this_00 = &pUVar6[0x16].field_0x8;
    if (*(longlong *)this_00 == 0) {
LAB_14ec5fb39:
      FFrame::KismetExecutionMessage(L"Only local players can log out",Warning,(FName)0x0);
      local_c8 = FWeakObjectPtr::Get(&(this->PlayerControllerWeakPtr).WeakPtr);
      ppUVar12 = &local_c8;
      goto LAB_14ec5fb62;
    }
    pUVar7 = Z_Construct_UClass_ULocalPlayer_NoRegister();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar7);
    if ((!bVar4) || (*(longlong *)this_00 == 0)) goto LAB_14ec5fb39;
    iVar1 = *(int *)(*(longlong *)this_00 + 0xf0);
    if ((local_148 == (longlong *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar4 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBoundToObject
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       (local_148 + (longlong)iVar1 * 4 + 0x2d),this);
    if (!bVar4) {
      if ((local_148 == (longlong *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar3 = local_148;
      local_138.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_130.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_130.DelegateSize = 0;
      pcVar2 = *(code **)(*local_148 + 0xb8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_138,(FWriteAccessScope *)&local_78);
      local_60 = &local_130;
      puVar8 = UE::Core::Private::DelegateAllocate(0x28,&local_130);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &
                  ___7__TCommonDelegateInstanceState___A6AXH_N_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar9 = FDelegateHandle::GenerateNewID();
        puVar8[2] = uVar9;
        *puVar8 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VULogoutCallbackProxy____A6AXH_N_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar8[3] = 0;
        local_d0 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_d0);
        puVar8[4] = OnLogoutCompleted;
      }
      if (local_78.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
      }
      puVar10 = (ulong64 *)(*pcVar2)(plVar3,local_58,iVar1,&local_138);
      (this->OnLogoutCompleteDelegateHandle).ID = *puVar10;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_138,(FWriteAccessScope *)&local_90);
      if ((local_130.DelegateSize != 0) &&
         (local_130.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_130.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_130,0,0,0x10);
        local_130.DelegateSize = 0;
      }
      if (local_90.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
      }
      if (local_130.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_130.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_138.AccessDetector);
      if ((local_148 == (longlong *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (**(code **)(*local_148 + 0xb0))(local_148,iVar1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_140);
LAB_14ec5fb75:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_118.ReferenceController);
  return;
}

// GetPrivateStaticClass @ 14ec78640

UClass * __cdecl ULogoutCallbackProxy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULogoutCallbackProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"LogoutCallbackProxy",
               &Z_Registration_Info_UClass_ULogoutCallbackProxy.InnerSingleton,
               StaticRegisterNativesULogoutCallbackProxy,0x78,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULogoutCallbackProxy>,
               InternalVTableHelperCtorCaller<ULogoutCallbackProxy>,local_res8,
               UBlueprintAsyncActionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULogoutCallbackProxy.InnerSingleton;
}

// Logout @ 14ec82270

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

ULogoutCallbackProxy * __cdecl
ULogoutCallbackProxy::Logout(UObject *param_1,APlayerController *param_2)

{
  UObject *pUVar1;
  UClass *pUVar2;
  ULogoutCallbackProxy *pUVar3;
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
  pUVar3 = (ULogoutCallbackProxy *)
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

// OnLogoutCompleted @ 14ec88ca0

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
ULogoutCallbackProxy::OnLogoutCompleted(ULogoutCallbackProxy *this,int param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  ForAnyElementType FVar4;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *this_00;
  UObject **ppUVar5;
  FName local_res20;
  TSharedPtr<FUniqueNetId_const_,1> local_b8;
  longlong *local_a8;
  TReferenceControllerBase<1> *local_a0;
  FUniqueNetId *local_98;
  FSharedReferencer<1> local_90;
  IOnlineSubsystem *local_88;
  wchar_t *local_80;
  UObject *local_78;
  UObject *local_70;
  FString local_68;
  FString local_58;
  FString local_48;
  
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  local_90.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  UEngine::GetWorldFromContextObject(GEngine,this->WorldContextObject,ReturnNull);
  local_88 = IOnlineSubsystem::Get(&local_res20);
  local_80 = L"Logout";
  if (local_88 == (IOnlineSubsystem *)0x0) {
    ::FString::PrintfImpl(&local_68,L"%s - Invalid or uninitialized OnlineSubsystem");
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar4.Data = local_68.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar4.Data,Warning,(FName)0x0);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  pUVar3 = FWeakObjectPtr::Get(&(this->PlayerControllerWeakPtr).WeakPtr);
  local_98 = (FUniqueNetId *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if ((pUVar3 == (UObject *)0x0) || (*(longlong *)&pUVar3[0x11].field_0x20 == 0)) {
    ::FString::PrintfImpl(&local_48,L"%s - Invalid player state");
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar4.Data = local_48.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar4.Data,Warning,(FName)0x0);
    local_58.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
  }
  else {
    FUniqueNetIdWrapper::GetV1
              ((FUniqueNetIdWrapper *)(*(longlong *)&pUVar3[0x11].field_0x20 + 0x2d0),&local_b8);
    local_98 = local_b8.Object;
    local_b8.Object = (FUniqueNetId *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_90,&local_b8.SharedReferenceCount);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.SharedReferenceCount.ReferenceController);
    if (local_98 != (FUniqueNetId *)0x0) {
      if (local_88 != (IOnlineSubsystem *)0x0) {
        (**(code **)(local_88->_padding_ + 0x80))(local_88,&local_a8);
        if (local_a8 != (longlong *)0x0) {
          if ((local_a8 == (longlong *)0x0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          (**(code **)(*local_a8 + 0xc0))(local_a8,param_1,&this->OnLogoutCompleteDelegateHandle);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a0);
      }
      goto LAB_14ec88e8a;
    }
    ::FString::PrintfImpl(&local_58,L"%s - Cannot map local player to unique net ID");
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar4.Data = local_58.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar4.Data,Warning,(FName)0x0);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
LAB_14ec88e8a:
  pUVar3 = FWeakObjectPtr::Get(&(this->PlayerControllerWeakPtr).WeakPtr);
  if (param_2) {
    this_00 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnSuccess;
    ppUVar5 = &local_78;
    local_78 = pUVar3;
  }
  else {
    this_00 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnFailure;
    ppUVar5 = &local_70;
    local_70 = pUVar3;
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (this_00,ppUVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_90.ReferenceController);
  return;
}

// StaticRegisterNativesULogoutCallbackProxy @ 14ec99a70

void __cdecl ULogoutCallbackProxy::StaticRegisterNativesULogoutCallbackProxy(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_ULogoutCallbackProxy_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execLogout @ 14eca6680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl ULogoutCallbackProxy::execLogout(UObject *param_1,FFrame *param_2,void *param_3)

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
  *(undefined8 *)&pUVar4[2].field_0x20 = uVar3;
  *(UObject **)param_3 = pUVar4;
  return;
}

