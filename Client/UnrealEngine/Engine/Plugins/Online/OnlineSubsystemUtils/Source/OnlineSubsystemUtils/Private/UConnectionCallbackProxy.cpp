// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 10

// StaticClass @ 14ec42eb0

UClass * __cdecl UConnectionCallbackProxy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UConnectionCallbackProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"ConnectionCallbackProxy",
               &Z_Registration_Info_UClass_UConnectionCallbackProxy.InnerSingleton,
               StaticRegisterNativesUConnectionCallbackProxy,0x90,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UConnectionCallbackProxy>,
               InternalVTableHelperCtorCaller<UConnectionCallbackProxy>,local_res8,
               UOnlineBlueprintCallProxyBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UConnectionCallbackProxy.InnerSingleton;
}

// UConnectionCallbackProxy @ 14ec532e0

UConnectionCallbackProxy * __thiscall
UConnectionCallbackProxy::UConnectionCallbackProxy
          (UConnectionCallbackProxy *this,FVTableHelper *param_1)

{
  UOnlineBlueprintCallProxyBase::UOnlineBlueprintCallProxyBase
            ((UOnlineBlueprintCallProxyBase *)this,param_1);
  this->_padding_ = (longlong)&___7UConnectionCallbackProxy__6B_;
  *(undefined8 *)&this->OnSuccess = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x8 = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x10 = 0;
  *(undefined8 *)&this->OnFailure = 0;
  *(undefined8 *)&(this->OnFailure).field_0x8 = 0;
  *(undefined8 *)&(this->OnFailure).field_0x10 = 0;
  (this->PlayerControllerWeakPtr).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&this->OnLoginCompleteDelegate = 0;
  *(undefined8 *)&(this->OnLoginCompleteDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnLoginCompleteDelegate).field_0x10 = 0;
  (this->OnLoginCompleteDelegateHandle).ID = 0;
  return this;
}

// UConnectionCallbackProxy @ 14ec53340

UConnectionCallbackProxy * __thiscall
UConnectionCallbackProxy::UConnectionCallbackProxy
          (UConnectionCallbackProxy *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  UConnectionCallbackProxy *local_res8;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  UOnlineBlueprintCallProxyBase::UOnlineBlueprintCallProxyBase
            ((UOnlineBlueprintCallProxyBase *)this,param_1);
  puVar1 = &(this->OnLoginCompleteDelegate).field_0x8;
  this->WorldContextObject = (UObject *)0x0;
  this->_padding_ = (longlong)&___7UConnectionCallbackProxy__6B_;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&(this->OnLoginCompleteDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnSuccess = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x8 = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x10 = 0;
  *(undefined8 *)&this->OnFailure = 0;
  *(undefined8 *)&(this->OnFailure).field_0x8 = 0;
  *(undefined8 *)&(this->OnFailure).field_0x10 = 0;
  (this->PlayerControllerWeakPtr).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&this->OnLoginCompleteDelegate = 0;
  (this->OnLoginCompleteDelegateHandle).ID = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnLoginCompleteDelegate,(FWriteAccessScope *)&local_28);
  local_10 = puVar1;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXH_NAEBVFUniqueNetId__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUConnectionCallbackProxy____A6AXH_NAEBVFUniqueNetId__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
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
    puVar2[4] = OnLoginCompleted;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return this;
}

// ~UConnectionCallbackProxy @ 14ec56be0

void __thiscall UConnectionCallbackProxy::~UConnectionCallbackProxy(UConnectionCallbackProxy *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UConnectionCallbackProxy__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnLoginCompleteDelegate);
  pvVar1 = *(void **)&(this->OnLoginCompleteDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLoginCompleteDelegate);
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

// Activate @ 14ec5d7b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UConnectionCallbackProxy::Activate(UConnectionCallbackProxy *this)

{
  undefined1 *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  ulong64 *puVar6;
  FString *pFVar7;
  ForAnyElementType FVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  undefined8 local_res18;
  FName local_res20;
  longlong *local_118;
  TReferenceControllerBase<1> *local_110;
  TSharedPtr<FUniqueNetId_const_,1> local_108;
  FUniqueNetId *local_f8;
  FSharedReferencer<1> local_f0;
  IOnlineSubsystem *local_e8;
  wchar_t *local_e0;
  void *local_d8;
  undefined8 local_d0;
  void *local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined8 local_b0;
  FString local_a8;
  FString local_98;
  FString local_88;
  undefined1 local_78 [8];
  FString local_70;
  FString local_60;
  FString local_50;
  
  local_res10 = 0;
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  local_f0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  UEngine::GetWorldFromContextObject(GEngine,this->WorldContextObject,ReturnNull);
  local_e8 = IOnlineSubsystem::Get(&local_res20);
  local_e0 = L"ConnectToService";
  pwVar9 = L"";
  if (local_e8 == (IOnlineSubsystem *)0x0) {
    ::FString::PrintfImpl(&local_a8,L"%s - Invalid or uninitialized OnlineSubsystem");
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_a8.Data.ArrayNum != 0) {
      FVar8.Data = local_a8.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar8.Data,Warning,(FName)0x0);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  pUVar4 = FWeakObjectPtr::Get(&(this->PlayerControllerWeakPtr).WeakPtr);
  local_f8 = (FUniqueNetId *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if ((pUVar4 == (UObject *)0x0) || (*(longlong *)&pUVar4[0x11].field_0x20 == 0)) {
    ::FString::PrintfImpl(&local_88,L"%s - Invalid player state");
    if (local_88.Data.ArrayNum != 0) {
      pwVar9 = (wchar_t *)local_88.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage(pwVar9,Warning,(FName)0x0);
    local_98.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
LAB_14ec5dad9:
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  else {
    FUniqueNetIdWrapper::GetV1
              ((FUniqueNetIdWrapper *)(*(longlong *)&pUVar4[0x11].field_0x20 + 0x2d0),&local_108);
    local_f8 = local_108.Object;
    local_108.Object = (FUniqueNetId *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_f0,&local_108.SharedReferenceCount);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_108.SharedReferenceCount.ReferenceController);
    if (local_f8 == (FUniqueNetId *)0x0) {
      ::FString::PrintfImpl(&local_98,L"%s - Cannot map local player to unique net ID");
      if (local_98.Data.ArrayNum != 0) {
        pwVar9 = (wchar_t *)local_98.Data.AllocatorInstance.Data;
      }
      FFrame::KismetExecutionMessage(pwVar9,Warning,(FName)0x0);
      goto LAB_14ec5dad9;
    }
    if (local_e8 != (IOnlineSubsystem *)0x0) {
      (**(code **)(local_e8->_padding_ + 0x80))(local_e8,&local_118);
      if (local_118 != (longlong *)0x0) {
        pUVar4 = FWeakObjectPtr::Get(&(this->PlayerControllerWeakPtr).WeakPtr);
        this_00 = &pUVar4[0x16].field_0x8;
        if (*(longlong *)this_00 == 0) {
          pFVar7 = GetTypeName<ULocalPlayer>(&local_50);
          if ((pFVar7->Data).ArrayNum != 0) {
            pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(L"nullptr",pwVar9);
        }
        pUVar5 = Z_Construct_UClass_ULocalPlayer_NoRegister();
        bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar5);
        if ((!bVar3) || (*(longlong *)this_00 == 0)) {
          pFVar7 = GetTypeName<ULocalPlayer>(&local_70);
          if ((pFVar7->Data).ArrayNum == 0) {
            pwVar10 = L"";
          }
          else {
            pwVar10 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
          }
          pFVar7 = GetFullNameForCastLogError<UPlayer>(&local_60,*(UPlayer **)this_00);
          if ((pFVar7->Data).ArrayNum != 0) {
            pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(pwVar9,pwVar10);
        }
        iVar1 = *(int *)(*(longlong *)this_00 + 0xf0);
        if ((local_118 == (longlong *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        bVar3 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBoundToObject
                          ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                           (local_118 + (longlong)iVar1 * 4 + 0x1d),this);
        if (!bVar3) {
          if ((local_118 == (longlong *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          puVar6 = (ulong64 *)
                   (**(code **)(*local_118 + 0x90))
                             (local_118,local_78,iVar1,&this->OnLoginCompleteDelegate);
          (this->OnLoginCompleteDelegateHandle).ID = *puVar6;
          if ((local_118 == (longlong *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          local_d8 = (void *)0x0;
          local_d0 = 0;
          local_c8 = (void *)0x0;
          local_c0 = 0;
          local_b8 = (void *)0x0;
          local_b0 = 0;
          (**(code **)(*local_118 + 0x88))(local_118,iVar1,&local_d8);
          if (local_b8 != (void *)0x0) {
            FMemory::Free(local_b8);
          }
          if (local_c8 != (void *)0x0) {
            FMemory::Free(local_c8);
          }
          if (local_d8 != (void *)0x0) {
            FMemory::Free(local_d8);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_110);
        goto LAB_14ec5daf4;
      }
      local_res18 = 0;
      FFrame::KismetExecutionMessage
                (L"Connection control not supported by online subsystem",Warning,(FName)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_110)
      ;
    }
  }
  local_res8[0] = 0;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnFailure,local_res8);
LAB_14ec5daf4:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f0.ReferenceController);
  return;
}

// ConnectToService @ 14ec643c0

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

UConnectionCallbackProxy * __cdecl
UConnectionCallbackProxy::ConnectToService(UObject *param_1,APlayerController *param_2)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UConnectionCallbackProxy *pUVar3;
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
  pUVar3 = (UConnectionCallbackProxy *)
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

// GetPrivateStaticClass @ 14ec77880

UClass * __cdecl UConnectionCallbackProxy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UConnectionCallbackProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"ConnectionCallbackProxy",
               &Z_Registration_Info_UClass_UConnectionCallbackProxy.InnerSingleton,
               StaticRegisterNativesUConnectionCallbackProxy,0x90,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UConnectionCallbackProxy>,
               InternalVTableHelperCtorCaller<UConnectionCallbackProxy>,local_res8,
               UOnlineBlueprintCallProxyBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UConnectionCallbackProxy.InnerSingleton;
}

// OnLoginCompleted @ 14ec88a60

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
UConnectionCallbackProxy::OnLoginCompleted
          (UConnectionCallbackProxy *this,int param_1,bool param_2,FUniqueNetId *param_3,
          FString *param_4)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  ForAnyElementType FVar4;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *this_00;
  undefined4 *puVar5;
  undefined4 local_res8 [2];
  undefined4 local_res18 [4];
  TSharedPtr<FUniqueNetId_const_,1> local_b0;
  longlong *local_a0;
  TReferenceControllerBase<1> *local_98;
  FUniqueNetId *local_90;
  FSharedReferencer<1> local_88;
  IOnlineSubsystem *local_80;
  wchar_t *local_78;
  FName local_70;
  FString local_68;
  FString local_58;
  FString local_48;
  
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  local_88.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  UEngine::GetWorldFromContextObject(GEngine,this->WorldContextObject,ReturnNull);
  local_80 = IOnlineSubsystem::Get(&local_70);
  local_78 = L"ConnectToService";
  if (local_80 == (IOnlineSubsystem *)0x0) {
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
  local_90 = (FUniqueNetId *)0x0;
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
              ((FUniqueNetIdWrapper *)(*(longlong *)&pUVar3[0x11].field_0x20 + 0x2d0),&local_b0);
    local_90 = local_b0.Object;
    local_b0.Object = (FUniqueNetId *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_88,&local_b0.SharedReferenceCount);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b0.SharedReferenceCount.ReferenceController);
    if (local_90 != (FUniqueNetId *)0x0) {
      if (local_80 != (IOnlineSubsystem *)0x0) {
        (**(code **)(local_80->_padding_ + 0x80))(local_80,&local_a0);
        if (local_a0 != (longlong *)0x0) {
          if ((local_a0 == (longlong *)0x0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          (**(code **)(*local_a0 + 0x98))(local_a0,param_1,&this->OnLoginCompleteDelegateHandle);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_98);
      }
      goto LAB_14ec88c4c;
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
LAB_14ec88c4c:
  if (param_2) {
    local_res18[0] = 0;
    this_00 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnSuccess;
    puVar5 = local_res18;
  }
  else {
    local_res8[0] = 0;
    this_00 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnFailure;
    puVar5 = local_res8;
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (this_00,puVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.ReferenceController);
  return;
}

// StaticRegisterNativesUConnectionCallbackProxy @ 14ec99610

void __cdecl UConnectionCallbackProxy::StaticRegisterNativesUConnectionCallbackProxy(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UConnectionCallbackProxy_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execConnectToService @ 14eca17a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UConnectionCallbackProxy::execConnectToService(UObject *param_1,FFrame *param_2,void *param_3)

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

