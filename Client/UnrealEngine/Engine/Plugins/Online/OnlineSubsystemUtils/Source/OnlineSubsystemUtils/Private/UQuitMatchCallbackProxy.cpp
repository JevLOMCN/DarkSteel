// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 10

// StaticClass @ 14eca82f0

UClass * __cdecl UQuitMatchCallbackProxy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UQuitMatchCallbackProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"QuitMatchCallbackProxy",
               &Z_Registration_Info_UClass_UQuitMatchCallbackProxy.InnerSingleton,
               StaticRegisterNativesUQuitMatchCallbackProxy,0x88,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UQuitMatchCallbackProxy>,
               InternalVTableHelperCtorCaller<UQuitMatchCallbackProxy>,local_res8,
               UOnlineBlueprintCallProxyBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UQuitMatchCallbackProxy.InnerSingleton;
}

// UQuitMatchCallbackProxy @ 14ecad5e0

UQuitMatchCallbackProxy * __thiscall
UQuitMatchCallbackProxy::UQuitMatchCallbackProxy
          (UQuitMatchCallbackProxy *this,FVTableHelper *param_1)

{
  UOnlineBlueprintCallProxyBase::UOnlineBlueprintCallProxyBase
            ((UOnlineBlueprintCallProxyBase *)this,param_1);
  this->_padding_ = (longlong)&___7UQuitMatchCallbackProxy__6B_;
  *(undefined8 *)&this->OnSuccess = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x8 = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x10 = 0;
  *(undefined8 *)&this->OnFailure = 0;
  *(undefined8 *)&(this->OnFailure).field_0x8 = 0;
  *(undefined8 *)&(this->OnFailure).field_0x10 = 0;
  (this->PlayerControllerWeakPtr).WeakPtr = (FWeakObjectPtr)0x0;
  (this->MatchID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MatchID).Data.ArrayNum = 0;
  (this->MatchID).Data.ArrayMax = 0;
  return this;
}

// UQuitMatchCallbackProxy @ 14ecad630

UQuitMatchCallbackProxy * __thiscall
UQuitMatchCallbackProxy::UQuitMatchCallbackProxy
          (UQuitMatchCallbackProxy *this,FObjectInitializer *param_1)

{
  UOnlineBlueprintCallProxyBase::UOnlineBlueprintCallProxyBase
            ((UOnlineBlueprintCallProxyBase *)this,param_1);
  this->_padding_ = (longlong)&___7UQuitMatchCallbackProxy__6B_;
  *(undefined8 *)&this->OnSuccess = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x8 = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x10 = 0;
  *(undefined8 *)&this->OnFailure = 0;
  *(undefined8 *)&(this->OnFailure).field_0x8 = 0;
  *(undefined8 *)&(this->OnFailure).field_0x10 = 0;
  (this->PlayerControllerWeakPtr).WeakPtr = (FWeakObjectPtr)0x0;
  (this->MatchID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MatchID).Data.ArrayNum = 0;
  (this->MatchID).Data.ArrayMax = 0;
  return this;
}

// ~UQuitMatchCallbackProxy @ 14ecadbe0

void __thiscall UQuitMatchCallbackProxy::~UQuitMatchCallbackProxy(UQuitMatchCallbackProxy *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UQuitMatchCallbackProxy__6B_;
  pFVar1 = (this->MatchID).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
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
  UOnlineBlueprintCallProxyBase::~UOnlineBlueprintCallProxyBase
            ((UOnlineBlueprintCallProxyBase *)this);
  return;
}

// Activate @ 14ecaee80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UQuitMatchCallbackProxy::Activate(UQuitMatchCallbackProxy *this)

{
  code *pcVar1;
  bool bVar2;
  APlayerController *pAVar3;
  FString *pFVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  TDelegate<void___cdecl(FString,bool),FDefaultDelegateUserPolicy> *pTVar7;
  longlong *plVar8;
  ForAnyElementType FVar9;
  UQuitMatchCallbackProxy *local_res18 [2];
  undefined1 local_108 [8];
  FDelegateAllocation local_100;
  longlong *local_f0;
  TReferenceControllerBase<1> *local_e8;
  longlong *local_e0;
  TReferenceControllerBase<1> *local_d8;
  FString local_d0;
  FDestructionSentinel local_c0;
  FDestructionSentinel local_a8;
  FDelegateAllocation *local_90;
  FOnlineSubsystemBPCallHelper local_88;
  FString local_68;
  TDelegate<void___cdecl(FString,bool),FDefaultDelegateUserPolicy> local_58;
  
  FOnlineSubsystemBPCallHelper::FOnlineSubsystemBPCallHelper
            (&local_88,L"QuitMatch",this->WorldContextObject,(FName)0x0);
  pAVar3 = (APlayerController *)FWeakObjectPtr::Get(&(this->PlayerControllerWeakPtr).WeakPtr);
  FOnlineSubsystemBPCallHelper::QueryIDFromPlayerController(&local_88,pAVar3);
  if ((local_88.UserID.Object != (FUniqueNetId *)0x0) &&
     (local_88.OnlineSub != (IOnlineSubsystem *)0x0)) {
    (**(code **)((local_88.OnlineSub)->_padding_ + 0x100))(local_88.OnlineSub,&local_e0);
    if (local_e0 == (longlong *)0x0) {
      FFrame::KismetExecutionMessage
                (L"Turn Based Matches not supported by Online Subsystem",Warning,(FName)0x0);
    }
    else {
      plVar8 = local_e0;
      if ((local_e0 == (longlong *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), plVar8 = local_e0, bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = *(code **)(*plVar8 + 0x38);
      pFVar4 = ::FString::FString(&local_68,&this->MatchID);
      (*pcVar1)(plVar8,&local_f0,pFVar4);
      if (local_f0 != (longlong *)0x0) {
        local_108 = (undefined1  [8])0x0;
        local_100.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_100.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_108,
                   (FWriteAccessScope *)&local_a8);
        local_90 = &local_100;
        puVar5 = UE::Core::Private::DelegateAllocate(0x28,&local_100);
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = &
                    ___7__TCommonDelegateInstanceState___A6AXVFString___N_ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar6 = FDelegateHandle::GenerateNewID();
          puVar5[2] = uVar6;
          *puVar5 = &
                    ___7__TBaseUObjectMethodDelegateInstance__0A_VUQuitMatchCallbackProxy____A6AXVFString___N_ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar5[3] = 0;
          local_res18[0] = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)local_res18);
          puVar5[4] = QuitMatchDelegate;
        }
        if (local_a8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
        }
        plVar8 = local_f0;
        if ((local_f0 == (longlong *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), plVar8 = local_f0, bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pcVar1 = *(code **)(*plVar8 + 0x60);
        pTVar7 = TDelegate<void___cdecl(FString,bool),FDefaultDelegateUserPolicy>::
                 TDelegate<void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
                           (&local_58,
                            (TDelegate<void___cdecl(FString,bool),FDefaultDelegateUserPolicy> *)
                            local_108);
        (*pcVar1)(plVar8,this->Outcome,this->TurnTimeoutInSeconds,pTVar7);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_108,
                   (FWriteAccessScope *)&local_c0);
        if ((local_100.DelegateSize != 0) &&
           (local_100.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_100.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_100,0,0,0x10);
          local_100.DelegateSize = 0;
        }
        if (local_c0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
        }
        if (local_100.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_100.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_108);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_e8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_d8);
        goto LAB_14ecaf16a;
      }
      ::FString::PrintfImpl(&local_d0,L"Match ID %s not found");
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_d0.Data.ArrayNum != 0) {
        FVar9.Data = local_d0.Data.AllocatorInstance.Data;
      }
      FFrame::KismetExecutionMessage((wchar_t *)FVar9.Data,Warning,(FName)0x0);
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_d8);
  }
  FEmptyOnlineDelegate_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnFailure);
LAB_14ecaf16a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.UserID.SharedReferenceCount.ReferenceController);
  return;
}

// GetPrivateStaticClass @ 14ecbb720

UClass * __cdecl UQuitMatchCallbackProxy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UQuitMatchCallbackProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"QuitMatchCallbackProxy",
               &Z_Registration_Info_UClass_UQuitMatchCallbackProxy.InnerSingleton,
               StaticRegisterNativesUQuitMatchCallbackProxy,0x88,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UQuitMatchCallbackProxy>,
               InternalVTableHelperCtorCaller<UQuitMatchCallbackProxy>,local_res8,
               UOnlineBlueprintCallProxyBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UQuitMatchCallbackProxy.InnerSingleton;
}

// QuitMatch @ 14ecc4840

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

UQuitMatchCallbackProxy * __cdecl
UQuitMatchCallbackProxy::QuitMatch
          (UObject *param_1,APlayerController *param_2,FString *param_3,Outcome param_4,int param_5)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UQuitMatchCallbackProxy *pUVar5;
  longlong *plVar6;
  int iVar7;
  undefined1 auStack_d8 [32];
  APlayerController *local_b8 [2];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pUVar3 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar3,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar4);
  local_a8._8_8_ = pUVar3;
  pUVar5 = (UQuitMatchCallbackProxy *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar6 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  local_b8[0] = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (APlayerController *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&(pUVar5->PlayerControllerWeakPtr).WeakPtr,(FObjectPtr)local_b8);
  pUVar5->WorldContextObject = param_1;
  iVar1 = (param_3->Data).ArrayNum;
  iVar7 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar7 = 0;
  }
  ::FString::AssignRange(&pUVar5->MatchID,(wchar_t *)(param_3->Data).AllocatorInstance.Data,iVar7);
  pUVar5->TurnTimeoutInSeconds = param_5;
  pUVar5->Outcome = param_4;
  pFVar2 = (param_3->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return pUVar5;
}

// QuitMatchDelegate @ 14ecc4970

void __thiscall
UQuitMatchCallbackProxy::QuitMatchDelegate
          (UQuitMatchCallbackProxy *this,FString *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  
  lVar2 = 0x30;
  if (!param_2) {
    lVar2 = 0x48;
  }
  FEmptyOnlineDelegate_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             ((longlong)&this->_padding_ + lVar2));
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// StaticRegisterNativesUQuitMatchCallbackProxy @ 14ecca460

void __cdecl UQuitMatchCallbackProxy::StaticRegisterNativesUQuitMatchCallbackProxy(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UQuitMatchCallbackProxy_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execQuitMatch @ 14ecd37a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl UQuitMatchCallbackProxy::execQuitMatch(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte bVar2;
  undefined4 uVar3;
  UObject *pUVar4;
  undefined8 uVar5;
  void *_Src;
  UObject *pUVar6;
  UClass *pUVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStackY_148 [32];
  byte local_108 [4];
  undefined4 local_104;
  ForAnyElementType local_100;
  int local_f8;
  int local_f4;
  UObject *local_f0;
  undefined8 local_e8;
  void *local_e0;
  undefined8 local_d8;
  UObject *local_d0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_e8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  local_f0 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f0);
  }
  local_e0 = (void *)0x0;
  local_d8 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e0);
  }
  local_108[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_108);
  }
  local_104 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_104,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_104);
  }
  _Src = local_e0;
  uVar3 = local_104;
  bVar2 = local_108[0];
  local_100.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar9 = (longlong)(int)local_d8;
  local_f8 = (int)local_d8;
  if ((int)local_d8 == 0) {
    local_f4 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_d8,0,&local_100,(int)local_d8,&local_f4);
    memcpy(local_100.Data,_Src,lVar9 * 2);
  }
  uVar5 = local_e8;
  pUVar4 = local_f0;
  pUVar6 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar6,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar7 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,pUVar7);
  local_c8._8_8_ = pUVar6;
  pUVar6 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar8 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  local_d0 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&pUVar6[2].field_0x10,(FObjectPtr)&local_d0);
  *(undefined8 *)&pUVar6[2].field_0x18 = uVar5;
  iVar10 = local_f8 + -1;
  if (local_f8 == 0) {
    iVar10 = 0;
  }
  ::FString::AssignRange((FString *)&pUVar6[2].field_0x20,(wchar_t *)local_100.Data,iVar10);
  *(uint *)&pUVar6[3].field_0x8 = (uint)bVar2;
  *(undefined4 *)&pUVar6[3].field_0xc = uVar3;
  if (local_100.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data);
  }
  *(UObject **)param_3 = pUVar6;
  if (local_e0 != (void *)0x0) {
    FMemory::Free(local_e0);
  }
  return;
}

