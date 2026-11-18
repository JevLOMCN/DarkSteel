// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 10

// StaticClass @ 14ec46920

UClass * __cdecl UEndMatchCallbackProxy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEndMatchCallbackProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"EndMatchCallbackProxy",
               &Z_Registration_Info_UClass_UEndMatchCallbackProxy.InnerSingleton,
               StaticRegisterNativesUEndMatchCallbackProxy,0x90,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UEndMatchCallbackProxy>,
               InternalVTableHelperCtorCaller<UEndMatchCallbackProxy>,local_res8,
               UOnlineBlueprintCallProxyBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEndMatchCallbackProxy.InnerSingleton;
}

// UEndMatchCallbackProxy @ 14ec536f0

UEndMatchCallbackProxy * __thiscall
UEndMatchCallbackProxy::UEndMatchCallbackProxy(UEndMatchCallbackProxy *this,FVTableHelper *param_1)

{
  UOnlineBlueprintCallProxyBase::UOnlineBlueprintCallProxyBase
            ((UOnlineBlueprintCallProxyBase *)this,param_1);
  this->_padding_ = (longlong)&___7UEndMatchCallbackProxy__6B_;
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

// UEndMatchCallbackProxy @ 14ec53740

UEndMatchCallbackProxy * __thiscall
UEndMatchCallbackProxy::UEndMatchCallbackProxy
          (UEndMatchCallbackProxy *this,FObjectInitializer *param_1)

{
  UOnlineBlueprintCallProxyBase::UOnlineBlueprintCallProxyBase
            ((UOnlineBlueprintCallProxyBase *)this,param_1);
  this->_padding_ = (longlong)&___7UEndMatchCallbackProxy__6B_;
  *(undefined8 *)&this->OnSuccess = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x8 = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x10 = 0;
  *(undefined8 *)&this->OnFailure = 0;
  *(undefined8 *)&(this->OnFailure).field_0x8 = 0;
  *(undefined8 *)&(this->OnFailure).field_0x10 = 0;
  (this->PlayerControllerWeakPtr).WeakPtr = (FWeakObjectPtr)0x0;
  this->WorldContextObject = (UObject *)0x0;
  this->TurnBasedMatchInterface = (UTurnBasedMatchInterface *)0x0;
  (this->MatchID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MatchID).Data.ArrayNum = 0;
  (this->MatchID).Data.ArrayMax = 0;
  return this;
}

// ~UEndMatchCallbackProxy @ 14ec56d90

void __thiscall UEndMatchCallbackProxy::~UEndMatchCallbackProxy(UEndMatchCallbackProxy *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UEndMatchCallbackProxy__6B_;
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

// Activate @ 14ec5e220

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UEndMatchCallbackProxy::Activate(UEndMatchCallbackProxy *this)

{
  Outcome OVar1;
  Outcome OVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  FString *pFVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  TDelegate<void___cdecl(FString,bool),FDefaultDelegateUserPolicy> *pTVar9;
  ForAnyElementType FVar10;
  longlong *plVar11;
  FName local_res18;
  UEndMatchCallbackProxy *local_res20;
  undefined1 local_138 [8];
  FDelegateAllocation local_130;
  longlong *local_120;
  TReferenceControllerBase<1> *local_118;
  longlong *local_110;
  TReferenceControllerBase<1> *local_108;
  TSharedPtr<FUniqueNetId_const_,1> local_100;
  FUniqueNetId *local_f0;
  FSharedReferencer<1> local_e8;
  IOnlineSubsystem *local_e0;
  wchar_t *local_d8;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FDestructionSentinel local_a0;
  FDestructionSentinel local_88;
  FDelegateAllocation *local_70;
  FString local_68;
  TDelegate<void___cdecl(FString,bool),FDefaultDelegateUserPolicy> local_58;
  
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_e8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  UEngine::GetWorldFromContextObject(GEngine,this->WorldContextObject,ReturnNull);
  local_e0 = IOnlineSubsystem::Get(&local_res18);
  local_d8 = L"EndMatch";
  if (local_e0 == (IOnlineSubsystem *)0x0) {
    ::FString::PrintfImpl(&local_d0,L"%s - Invalid or uninitialized OnlineSubsystem");
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_d0.Data.ArrayNum != 0) {
      FVar10.Data = local_d0.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar10.Data,Warning,(FName)0x0);
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
  }
  pUVar5 = FWeakObjectPtr::Get(&(this->PlayerControllerWeakPtr).WeakPtr);
  local_f0 = (FUniqueNetId *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if ((pUVar5 == (UObject *)0x0) || (*(longlong *)&pUVar5[0x11].field_0x20 == 0)) {
    ::FString::PrintfImpl(&local_b0,L"%s - Invalid player state");
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_b0.Data.ArrayNum != 0) {
      FVar10.Data = local_b0.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar10.Data,Warning,(FName)0x0);
    local_c0.Data.AllocatorInstance.Data = local_b0.Data.AllocatorInstance.Data;
LAB_14ec5e5ef:
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
  }
  else {
    FUniqueNetIdWrapper::GetV1
              ((FUniqueNetIdWrapper *)(*(longlong *)&pUVar5[0x11].field_0x20 + 0x2d0),&local_100);
    local_f0 = local_100.Object;
    local_100.Object = (FUniqueNetId *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_e8,&local_100.SharedReferenceCount);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_100.SharedReferenceCount.ReferenceController);
    if (local_f0 == (FUniqueNetId *)0x0) {
      ::FString::PrintfImpl(&local_c0,L"%s - Cannot map local player to unique net ID");
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_c0.Data.ArrayNum != 0) {
        FVar10.Data = local_c0.Data.AllocatorInstance.Data;
      }
      FFrame::KismetExecutionMessage((wchar_t *)FVar10.Data,Warning,(FName)0x0);
      goto LAB_14ec5e5ef;
    }
    if (local_e0 != (IOnlineSubsystem *)0x0) {
      (**(code **)(local_e0->_padding_ + 0x100))(local_e0,&local_110);
      if (local_110 == (longlong *)0x0) {
        FFrame::KismetExecutionMessage
                  (L"Turn based games not supported by online subsystem",Warning,(FName)0x0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_108);
      }
      else {
        plVar11 = local_110;
        if ((local_110 == (longlong *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), plVar11 = local_110, bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcVar3 = *(code **)(*plVar11 + 0x38);
        pFVar6 = ::FString::FString(&local_68,&this->MatchID);
        (*pcVar3)(plVar11,&local_120,pFVar6);
        if (local_120 != (longlong *)0x0) {
          local_138 = (undefined1  [8])0x0;
          local_130.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_130.DelegateSize = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_138,
                     (FWriteAccessScope *)&local_88);
          local_70 = &local_130;
          puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_130);
          if (puVar7 != (undefined8 *)0x0) {
            *puVar7 = &
                      ___7__TCommonDelegateInstanceState___A6AXVFString___N_ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar8 = FDelegateHandle::GenerateNewID();
            puVar7[2] = uVar8;
            *puVar7 = &
                      ___7__TBaseUObjectMethodDelegateInstance__0A_VUEndMatchCallbackProxy____A6AXVFString___N_ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            puVar7[3] = 0;
            local_res20 = this;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_res20);
            puVar7[4] = EndMatchDelegate;
          }
          if (local_88.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
          }
          plVar11 = local_120;
          if ((local_120 == (longlong *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), plVar11 = local_120, bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          OVar1 = this->OtherPlayersOutcome;
          OVar2 = this->LocalPlayerOutcome;
          pcVar3 = *(code **)(*plVar11 + 0x68);
          pTVar9 = TDelegate<void___cdecl(FString,bool),FDefaultDelegateUserPolicy>::
                   TDelegate<void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
                             (&local_58,
                              (TDelegate<void___cdecl(FString,bool),FDefaultDelegateUserPolicy> *)
                              local_138);
          (*pcVar3)(plVar11,pTVar9,OVar2,OVar1);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_138,
                     (FWriteAccessScope *)&local_a0);
          if ((local_130.DelegateSize != 0) &&
             (local_130.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (*(code *)**(undefined8 **)local_130.DelegateAllocator)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&local_130,0,0,0x10);
            local_130.DelegateSize = 0;
          }
          if (local_a0.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
          }
          if (local_130.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            FMemory::Free((void *)local_130.DelegateAllocator);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_138);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_118);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_108);
          goto LAB_14ec5e602;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_118);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_108);
      }
    }
  }
  FEmptyOnlineDelegate_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnFailure);
LAB_14ec5e602:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.ReferenceController);
  return;
}

// EndMatch @ 14ec6d950

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

UEndMatchCallbackProxy * __cdecl
UEndMatchCallbackProxy::EndMatch
          (UObject *param_1,APlayerController *param_2,
          TScriptInterface<ITurnBasedMatchInterface> *param_3,FString *param_4,Outcome param_5,
          Outcome param_6)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UEndMatchCallbackProxy *pUVar5;
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
  pUVar5 = (UEndMatchCallbackProxy *)
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
  iVar1 = (param_4->Data).ArrayNum;
  iVar7 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar7 = 0;
  }
  ::FString::AssignRange(&pUVar5->MatchID,(wchar_t *)(param_4->Data).AllocatorInstance.Data,iVar7);
  pUVar5->LocalPlayerOutcome = param_5;
  pUVar5->OtherPlayersOutcome = param_6;
  pFVar2 = (param_4->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return pUVar5;
}

// EndMatchDelegate @ 14ec6da80

void __thiscall
UEndMatchCallbackProxy::EndMatchDelegate(UEndMatchCallbackProxy *this,FString *param_1,bool param_2)

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

// GetPrivateStaticClass @ 14ec77ac0

UClass * __cdecl UEndMatchCallbackProxy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEndMatchCallbackProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"EndMatchCallbackProxy",
               &Z_Registration_Info_UClass_UEndMatchCallbackProxy.InnerSingleton,
               StaticRegisterNativesUEndMatchCallbackProxy,0x90,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UEndMatchCallbackProxy>,
               InternalVTableHelperCtorCaller<UEndMatchCallbackProxy>,local_res8,
               UOnlineBlueprintCallProxyBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEndMatchCallbackProxy.InnerSingleton;
}

// StaticRegisterNativesUEndMatchCallbackProxy @ 14ec996d0

void __cdecl UEndMatchCallbackProxy::StaticRegisterNativesUEndMatchCallbackProxy(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UEndMatchCallbackProxy_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execEndMatch @ 14eca4e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl UEndMatchCallbackProxy::execEndMatch(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte bVar2;
  byte bVar3;
  UObject *pUVar4;
  undefined8 uVar5;
  void *_Src;
  UObject *pUVar6;
  UClass *pUVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStackY_158 [32];
  byte local_118;
  byte local_117 [7];
  ForAnyElementType local_110;
  int local_108;
  int local_104;
  UObject *local_100;
  undefined8 local_f8;
  void *local_f0;
  undefined8 local_e8;
  UObject *local_e0;
  UObject *local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_f8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  local_100 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_100,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_100);
  }
  local_d8 = (UObject *)0x0;
  uStack_d0 = 0;
  FInterfaceProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  local_f0 = (void *)0x0;
  local_e8 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f0);
  }
  local_117[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_117,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_117);
  }
  local_118 = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_118,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_118);
  }
  _Src = local_f0;
  bVar3 = local_117[0];
  bVar2 = local_118;
  local_110.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar9 = (longlong)(int)local_e8;
  local_108 = (int)local_e8;
  if ((int)local_e8 == 0) {
    local_104 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_e8,0,&local_110,(int)local_e8,&local_104);
    memcpy(local_110.Data,_Src,lVar9 * 2);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_d8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_d8);
  }
  uVar5 = local_f8;
  pUVar4 = local_100;
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
  local_e0 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&pUVar6[2].field_0x10,(FObjectPtr)&local_e0);
  *(undefined8 *)&pUVar6[2].field_0x18 = uVar5;
  iVar10 = local_108 + -1;
  if (local_108 == 0) {
    iVar10 = 0;
  }
  ::FString::AssignRange((FString *)(pUVar6 + 3),(wchar_t *)local_110.Data,iVar10);
  *(uint *)&pUVar6[3].field_0x10 = (uint)bVar3;
  *(uint *)&pUVar6[3].field_0x14 = (uint)bVar2;
  if (local_110.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data);
  }
  *(UObject **)param_3 = pUVar6;
  if (local_f0 != (void *)0x0) {
    FMemory::Free(local_f0);
  }
  return;
}

