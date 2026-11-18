// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 10

// StaticClass @ 14eca8b80

UClass * __cdecl UShowLoginUICallbackProxy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UShowLoginUICallbackProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"ShowLoginUICallbackProxy",
               &Z_Registration_Info_UClass_UShowLoginUICallbackProxy.InnerSingleton,
               StaticRegisterNativesUShowLoginUICallbackProxy,0x70,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UShowLoginUICallbackProxy>,
               InternalVTableHelperCtorCaller<UShowLoginUICallbackProxy>,local_res8,
               UBlueprintAsyncActionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UShowLoginUICallbackProxy.InnerSingleton;
}

// UShowLoginUICallbackProxy @ 14ecad680

UShowLoginUICallbackProxy * __thiscall
UShowLoginUICallbackProxy::UShowLoginUICallbackProxy
          (UShowLoginUICallbackProxy *this,FVTableHelper *param_1)

{
  UBlueprintAsyncActionBase::UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this,param_1);
  this->_padding_ = (longlong)&___7UShowLoginUICallbackProxy__6B_;
  *(undefined8 *)&this->OnSuccess = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x8 = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x10 = 0;
  *(undefined8 *)&this->OnFailure = 0;
  *(undefined8 *)&(this->OnFailure).field_0x8 = 0;
  *(undefined8 *)&(this->OnFailure).field_0x10 = 0;
  (this->PlayerControllerWeakPtr).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UShowLoginUICallbackProxy @ 14ecad6d0

UShowLoginUICallbackProxy * __thiscall
UShowLoginUICallbackProxy::UShowLoginUICallbackProxy
          (UShowLoginUICallbackProxy *this,FObjectInitializer *param_1)

{
  UBlueprintAsyncActionBase::UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this,param_1);
  this->_padding_ = (longlong)&___7UShowLoginUICallbackProxy__6B_;
  *(undefined8 *)&this->OnSuccess = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x8 = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x10 = 0;
  *(undefined8 *)&this->OnFailure = 0;
  *(undefined8 *)&(this->OnFailure).field_0x8 = 0;
  *(undefined8 *)&(this->OnFailure).field_0x10 = 0;
  (this->PlayerControllerWeakPtr).WeakPtr = (FWeakObjectPtr)0x0;
  this->WorldContextObject = (UObject *)0x0;
  return this;
}

// ~UShowLoginUICallbackProxy @ 14ecadc50

void __thiscall
UShowLoginUICallbackProxy::~UShowLoginUICallbackProxy(UShowLoginUICallbackProxy *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UShowLoginUICallbackProxy__6B_;
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

// Activate @ 14ecaf190

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UShowLoginUICallbackProxy::Activate(UShowLoginUICallbackProxy *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  UObject **ppUVar9;
  longlong *plVar10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_108;
  FDelegateAllocation local_100;
  undefined8 local_f0;
  longlong *local_e8;
  TReferenceControllerBase<1> *local_e0;
  undefined8 local_d8;
  UObject *local_d0;
  UObject *local_c8;
  UShowLoginUICallbackProxy *local_c0;
  UObject *local_b8;
  UObject *local_b0;
  FDestructionSentinel local_a8;
  FDestructionSentinel local_90;
  FDelegateAllocation *local_78;
  FOnlineSubsystemBPCallHelper local_70;
  
  pUVar5 = FWeakObjectPtr::Get(&(this->PlayerControllerWeakPtr).WeakPtr);
  if (pUVar5 == (UObject *)0x0) {
    FFrame::KismetExecutionMessage
              (L"A player controller must be provided in order to show the external login UI.",
               Warning,(FName)0x0);
    local_d8 = 0;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnFailure,&local_d8);
    return;
  }
  FOnlineSubsystemBPCallHelper::FOnlineSubsystemBPCallHelper
            (&local_70,L"ShowLoginUI",this->WorldContextObject,(FName)0x0);
  if (local_70.OnlineSub == (IOnlineSubsystem *)0x0) {
    local_d0 = pUVar5;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnFailure,&local_d0);
    goto LAB_14ecaf4b0;
  }
  (**(code **)((local_70.OnlineSub)->_padding_ + 0x70))(local_70.OnlineSub,&local_e8);
  if (local_e8 == (longlong *)0x0) {
    FFrame::KismetExecutionMessage
              (L"External UI not supported by the current online subsystem",Warning,(FName)0x0);
    local_c8 = pUVar5;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnFailure,&local_c8);
  }
  else {
    if (*(longlong *)&pUVar5[0x16].field_0x8 == 0) {
LAB_14ecaf46f:
      local_f0 = 0;
      FFrame::KismetExecutionMessage(L"Can only show login UI for local players",Warning,(FName)0x0)
      ;
      ppUVar9 = &local_b0;
      local_b0 = pUVar5;
    }
    else {
      pUVar6 = Z_Construct_UClass_ULocalPlayer_NoRegister();
      bVar3 = FObjectPtr::IsA((FObjectPtr *)&pUVar5[0x16].field_0x8,pUVar6);
      if ((!bVar3) || (lVar1 = *(longlong *)&pUVar5[0x16].field_0x8, lVar1 == 0))
      goto LAB_14ecaf46f;
      plVar10 = local_e8;
      if ((local_e8 == (longlong *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), plVar10 = local_e8, bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_108.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_100.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_100.DelegateSize = 0;
      pcVar2 = *(code **)(*plVar10 + 8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_108,(FWriteAccessScope *)&local_90);
      local_78 = &local_100;
      puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_100);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &
                  ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr___CBVFUniqueNetId___00__HAEBUFOnlineError___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar8 = FDelegateHandle::GenerateNewID();
        puVar7[2] = uVar8;
        *puVar7 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUShowLoginUICallbackProxy____A6AXV__TSharedPtr___CBVFUniqueNetId___00__HAEBUFOnlineError___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar7[3] = 0;
        local_c0 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_c0);
        puVar7[4] = OnShowLoginUICompleted;
      }
      if (local_90.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
      }
      cVar4 = (*pcVar2)(plVar10,*(undefined4 *)(lVar1 + 0xf0),0,0,&local_108);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_108,(FWriteAccessScope *)&local_a8);
      if ((local_100.DelegateSize != 0) &&
         (local_100.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_100.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_100,0,0,0x10);
        local_100.DelegateSize = 0;
      }
      if (local_a8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
      }
      if (local_100.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_100.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_108.AccessDetector);
      if (cVar4 != '\0') goto LAB_14ecaf4a6;
      FFrame::KismetExecutionMessage
                (L"The online subsystem couldn\'t show its login UI",Log,(FName)0x0);
      ppUVar9 = &local_b8;
      local_b8 = pUVar5;
    }
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnFailure,ppUVar9);
  }
LAB_14ecaf4a6:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e0);
LAB_14ecaf4b0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_70.UserID.SharedReferenceCount.ReferenceController);
  return;
}

// GetPrivateStaticClass @ 14ecbb7e0

UClass * __cdecl UShowLoginUICallbackProxy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UShowLoginUICallbackProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"ShowLoginUICallbackProxy",
               &Z_Registration_Info_UClass_UShowLoginUICallbackProxy.InnerSingleton,
               StaticRegisterNativesUShowLoginUICallbackProxy,0x70,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UShowLoginUICallbackProxy>,
               InternalVTableHelperCtorCaller<UShowLoginUICallbackProxy>,local_res8,
               UBlueprintAsyncActionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UShowLoginUICallbackProxy.InnerSingleton;
}

// OnShowLoginUICompleted @ 14ecc20d0

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

void __thiscall
UShowLoginUICallbackProxy::OnShowLoginUICompleted
          (UShowLoginUICallbackProxy *this,TSharedPtr<FUniqueNetId_const_,1> *param_1,int param_2,
          FOnlineError *param_3)

{
  APlayerState *this_00;
  code *pcVar1;
  bool bVar2;
  char cVar3;
  APlayerController *this_01;
  ULocalPlayer *this_02;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *this_03;
  APlayerController **ppAVar4;
  ulonglong uVar5;
  undefined1 auStack_d8 [32];
  APlayerController *local_b8;
  APlayerController *local_b0;
  undefined1 local_a8 [16];
  TReferenceControllerBase<1> *pTStack_98;
  byte local_90;
  ForAnyElementType local_88;
  undefined8 local_80;
  undefined1 local_78 [16];
  TReferenceControllerBase<1> *pTStack_68;
  byte local_60;
  ForAnyElementType local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_d8;
  this_01 = (APlayerController *)FWeakObjectPtr::Get(&(this->PlayerControllerWeakPtr).WeakPtr);
  if (this_01 != (APlayerController *)0x0) {
    this_02 = APlayerController::GetLocalPlayer(this_01);
    if (this_02 != (ULocalPlayer *)0x0) {
      local_a8._0_8_ = &___7FUniqueNetIdWrapper__6B_;
      local_90 = 0;
      local_a8._8_8_ = 0;
      pTStack_98 = (TReferenceControllerBase<1> *)0x0;
      TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
      ::Emplace<TSharedPtr<FUniqueNetId_const_,1>,TSharedPtr<FUniqueNetId_const_,1>_const_&>
                ((TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
                  *)(local_a8 + 8),param_1);
      local_a8._0_8_ = &___7FUniqueNetIdRepl__6B_;
      local_88.Data = (FScriptContainerElement *)0x0;
      local_80._0_4_ = 0;
      local_80._4_4_ = 0;
      ULocalPlayer::SetCachedUniqueNetId(this_02,(FUniqueNetIdRepl *)local_a8);
      local_a8._0_8_ = &___7FUniqueNetIdRepl__6B_;
      if (local_88.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data);
      }
      uVar5 = (ulonglong)local_90;
      if ((1 < local_90) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5] ==
          UE::Core::Private::TDestructorCaller<TSharedPtr<FUniqueNetId_const_,1>_>::Destruct) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_98);
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5])(local_a8 + 8);
      }
    }
    this_00 = (APlayerState *)this_01->_padding_;
    if (this_00 != (APlayerState *)0x0) {
      local_78._0_8_ = &___7FUniqueNetIdWrapper__6B_;
      local_60 = 0;
      local_78._8_8_ = 0;
      pTStack_68 = (TReferenceControllerBase<1> *)0x0;
      TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
      ::Emplace<TSharedPtr<FUniqueNetId_const_,1>,TSharedPtr<FUniqueNetId_const_,1>_const_&>
                ((TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
                  *)(local_78 + 8),param_1);
      local_78._0_8_ = &___7FUniqueNetIdRepl__6B_;
      local_58.Data = (FScriptContainerElement *)0x0;
      local_50._0_4_ = 0;
      local_50._4_4_ = 0;
      APlayerState::SetUniqueId(this_00,(FUniqueNetIdRepl *)local_78);
      local_78._0_8_ = &___7FUniqueNetIdRepl__6B_;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
      uVar5 = (ulonglong)local_60;
      if ((1 < local_60) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5] ==
          UE::Core::Private::TDestructorCaller<TSharedPtr<FUniqueNetId_const_,1>_>::Destruct) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_68);
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5])(local_78 + 8);
      }
    }
  }
  if ((param_1->Object == (FUniqueNetId *)0x0) ||
     (cVar3 = (**(code **)(*(longlong *)param_1->Object + 0x28))(), cVar3 == '\0')) {
    this_03 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnFailure;
    ppAVar4 = &local_b0;
    local_b0 = this_01;
  }
  else {
    this_03 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnSuccess;
    ppAVar4 = &local_b8;
    local_b8 = this_01;
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (this_03,ppAVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// ShowExternalLoginUI @ 14ecc9020

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

UShowLoginUICallbackProxy * __cdecl
UShowLoginUICallbackProxy::ShowExternalLoginUI(UObject *param_1,APlayerController *param_2)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UShowLoginUICallbackProxy *pUVar3;
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
  pUVar3 = (UShowLoginUICallbackProxy *)
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

// StaticRegisterNativesUShowLoginUICallbackProxy @ 14ecca4a0

void __cdecl UShowLoginUICallbackProxy::StaticRegisterNativesUShowLoginUICallbackProxy(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UShowLoginUICallbackProxy_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execShowExternalLoginUI @ 14ecd3eb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UShowLoginUICallbackProxy::execShowExternalLoginUI(UObject *param_1,FFrame *param_2,void *param_3)

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
  *(undefined8 *)&pUVar4[2].field_0x18 = uVar3;
  *(UObject **)param_3 = pUVar4;
  return;
}

