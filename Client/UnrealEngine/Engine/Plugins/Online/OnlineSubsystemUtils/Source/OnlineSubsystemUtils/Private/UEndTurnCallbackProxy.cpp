// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 10

// StaticClass @ 14ec47d00

UClass * __cdecl UEndTurnCallbackProxy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEndTurnCallbackProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"EndTurnCallbackProxy",
               &Z_Registration_Info_UClass_UEndTurnCallbackProxy.InnerSingleton,
               StaticRegisterNativesUEndTurnCallbackProxy,0x88,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UEndTurnCallbackProxy>,
               InternalVTableHelperCtorCaller<UEndTurnCallbackProxy>,local_res8,
               UOnlineBlueprintCallProxyBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEndTurnCallbackProxy.InnerSingleton;
}

// UEndTurnCallbackProxy @ 14ec537a0

UEndTurnCallbackProxy * __thiscall
UEndTurnCallbackProxy::UEndTurnCallbackProxy(UEndTurnCallbackProxy *this,FVTableHelper *param_1)

{
  UOnlineBlueprintCallProxyBase::UOnlineBlueprintCallProxyBase
            ((UOnlineBlueprintCallProxyBase *)this,param_1);
  this->_padding_ = (longlong)&___7UEndTurnCallbackProxy__6B_;
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

// UEndTurnCallbackProxy @ 14ec537f0

UEndTurnCallbackProxy * __thiscall
UEndTurnCallbackProxy::UEndTurnCallbackProxy
          (UEndTurnCallbackProxy *this,FObjectInitializer *param_1)

{
  UOnlineBlueprintCallProxyBase::UOnlineBlueprintCallProxyBase
            ((UOnlineBlueprintCallProxyBase *)this,param_1);
  this->_padding_ = (longlong)&___7UEndTurnCallbackProxy__6B_;
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

// ~UEndTurnCallbackProxy @ 14ec56e00

void __thiscall UEndTurnCallbackProxy::~UEndTurnCallbackProxy(UEndTurnCallbackProxy *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UEndTurnCallbackProxy__6B_;
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

// Activate @ 14ec5e630

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UEndTurnCallbackProxy::Activate(UEndTurnCallbackProxy *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UObject *pUVar4;
  TSharedPtr<FRepLayout,1> *this_00;
  FRepLayout *this_01;
  undefined8 *puVar5;
  ulong64 uVar6;
  TDelegate<void___cdecl(FString,bool),FDefaultDelegateUserPolicy> *pTVar7;
  ForAnyElementType FVar8;
  FDestructionSentinel *pFVar9;
  longlong *plVar10;
  wchar_t *pwVar11;
  FName local_res20;
  undefined1 local_238 [8];
  FDelegateAllocation local_230;
  longlong *local_220;
  TReferenceControllerBase<1> *local_218;
  longlong *local_210;
  TReferenceControllerBase<1> *local_208;
  TSharedPtr<FUniqueNetId_const_,1> local_200;
  FUniqueNetId *local_1f0;
  FSharedReferencer<1> local_1e8;
  IOnlineSubsystem *local_1e0;
  wchar_t *local_1d8;
  UEndTurnCallbackProxy *local_1d0;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FDestructionSentinel local_188;
  FDestructionSentinel local_170;
  FDestructionSentinel local_158;
  FDelegateAllocation *local_140;
  TSharedPtr<FRepLayout,1> local_138;
  FString local_128;
  TDelegate<void___cdecl(FString,bool),FDefaultDelegateUserPolicy> local_118;
  FBitWriter local_f8;
  
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  local_1e8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  UEngine::GetWorldFromContextObject(GEngine,this->WorldContextObject,ReturnNull);
  local_1e0 = IOnlineSubsystem::Get(&local_res20);
  local_1d8 = L"EndTurn";
  pwVar11 = L"";
  if (local_1e0 == (IOnlineSubsystem *)0x0) {
    ::FString::PrintfImpl(&local_1c8,L"%s - Invalid or uninitialized OnlineSubsystem");
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_1c8.Data.ArrayNum != 0) {
      FVar8.Data = local_1c8.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar8.Data,Warning,(FName)0x0);
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
  }
  pUVar4 = FWeakObjectPtr::Get(&(this->PlayerControllerWeakPtr).WeakPtr);
  local_1f0 = (FUniqueNetId *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if ((pUVar4 == (UObject *)0x0) || (*(longlong *)&pUVar4[0x11].field_0x20 == 0)) {
    ::FString::PrintfImpl(&local_198,L"%s - Invalid player state");
    if (local_198.Data.ArrayNum != 0) {
      pwVar11 = (wchar_t *)local_198.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage(pwVar11,Warning,(FName)0x0);
    local_1b8.Data.AllocatorInstance.Data = local_198.Data.AllocatorInstance.Data;
LAB_14ec5eb7b:
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
  }
  else {
    FUniqueNetIdWrapper::GetV1
              ((FUniqueNetIdWrapper *)(*(longlong *)&pUVar4[0x11].field_0x20 + 0x2d0),&local_200);
    local_1f0 = local_200.Object;
    local_200.Object = (FUniqueNetId *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_1e8,&local_200.SharedReferenceCount);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_200.SharedReferenceCount.ReferenceController);
    if (local_1f0 == (FUniqueNetId *)0x0) {
      ::FString::PrintfImpl(&local_1b8,L"%s - Cannot map local player to unique net ID");
      if (local_1b8.Data.ArrayNum != 0) {
        pwVar11 = (wchar_t *)local_1b8.Data.AllocatorInstance.Data;
      }
      FFrame::KismetExecutionMessage(pwVar11,Warning,(FName)0x0);
      goto LAB_14ec5eb7b;
    }
    if (local_1e0 != (IOnlineSubsystem *)0x0) {
      (**(code **)(local_1e0->_padding_ + 0x100))(local_1e0,&local_220);
      if (local_220 != (longlong *)0x0) {
        if (this->TurnBasedMatchInterface == (UTurnBasedMatchInterface *)0x0) {
          FFrame::KismetExecutionMessage(L"No match data passed in to End Turn.",Warning,(FName)0x0)
          ;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_218);
          goto LAB_14ec5eb8e;
        }
        if ((local_220 == (longlong *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar3 = (**(code **)(*local_220 + 0x58))();
        FBitWriter::FBitWriter(&local_f8,(longlong)iVar3,false);
        this_00 = FRepLayout::CreateFromClass
                            (&local_138,*(UClass **)&this->TurnBasedMatchInterface->field_0x10,
                             (UNetConnection *)0x0,None);
        this_01 = TSharedPtr<FRepLayout,1>::operator->(this_00);
        FRepLayout::SerializeObjectReplicatedProperties
                  (this_01,(UObject *)this->TurnBasedMatchInterface,(FBitArchive *)&local_f8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_138.SharedReferenceCount.ReferenceController);
        local_238 = (undefined1  [8])0x0;
        local_230.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_230.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_238,
                   (FWriteAccessScope *)&local_158);
        local_140 = &local_230;
        puVar5 = UE::Core::Private::DelegateAllocate(0x28,&local_230);
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = &
                    ___7__TCommonDelegateInstanceState___A6AXVFString___N_ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar6 = FDelegateHandle::GenerateNewID();
          puVar5[2] = uVar6;
          *puVar5 = &
                    ___7__TBaseUObjectMethodDelegateInstance__0A_VUEndTurnCallbackProxy____A6AXVFString___N_ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar5[3] = 0;
          local_1d0 = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&local_1d0);
          puVar5[4] = UploadMatchDataDelegate;
        }
        if (local_158.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_158.Accessor,&local_158);
        }
        plVar10 = local_220;
        if ((local_220 == (longlong *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), plVar10 = local_220, bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pcVar1 = *(code **)(*plVar10 + 0x38);
        ::FString::FString(&local_128,&this->MatchID);
        (*pcVar1)(plVar10,&local_210);
        if (local_210 == (longlong *)0x0) {
          ::FString::PrintfImpl(&local_1a8,L"Match ID %s not found");
          if (local_1a8.Data.ArrayNum != 0) {
            pwVar11 = (wchar_t *)local_1a8.Data.AllocatorInstance.Data;
          }
          FFrame::KismetExecutionMessage(pwVar11,Warning,(FName)0x0);
          if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_208);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_238,
                     (FWriteAccessScope *)&local_170);
          if ((local_230.DelegateSize != 0) &&
             (local_230.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (*(code *)**(undefined8 **)local_230.DelegateAllocator)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&local_230,0,0,0x10);
            local_230.DelegateSize = 0;
          }
          if (local_170.bDestroyed == false) {
            pFVar9 = &local_170;
            local_188.Accessor = local_170.Accessor;
            goto LAB_14ec5ead0;
          }
        }
        else {
          plVar10 = local_210;
          if ((local_210 == (longlong *)0x0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), plVar10 = local_210, bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pcVar1 = *(code **)(*plVar10 + 0x58);
          pTVar7 = TDelegate<void___cdecl(FString,bool),FDefaultDelegateUserPolicy>::
                   TDelegate<void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
                             (&local_118,
                              (TDelegate<void___cdecl(FString,bool),FDefaultDelegateUserPolicy> *)
                              local_238);
          if (((local_f8._padding_._1_1_ & 2) != 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("!IsError()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\BitWriter.h"
                                 ,0x5d,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          (*pcVar1)(plVar10,&local_f8.Buffer,0,pTVar7);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_208);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_238,
                     (FWriteAccessScope *)&local_188);
          if ((local_230.DelegateSize != 0) &&
             (local_230.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (*(code *)**(undefined8 **)local_230.DelegateAllocator)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&local_230,0,0,0x10);
            local_230.DelegateSize = 0;
          }
          if (local_188.bDestroyed == false) {
            pFVar9 = &local_188;
LAB_14ec5ead0:
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_188.Accessor,pFVar9);
          }
        }
        if (local_230.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_230.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_238);
        FBitWriter::~FBitWriter(&local_f8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_218);
        goto LAB_14ec5eb8e;
      }
      FFrame::KismetExecutionMessage
                (L"Turn based games not supported by online subsystem",Warning,(FName)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_218)
      ;
    }
  }
  FEmptyOnlineDelegate_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnFailure);
LAB_14ec5eb8e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1e8.ReferenceController);
  return;
}

// EndTurn @ 14ec6e010

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

UEndTurnCallbackProxy * __cdecl
UEndTurnCallbackProxy::EndTurn
          (UObject *param_1,APlayerController *param_2,FString *param_3,
          TScriptInterface<ITurnBasedMatchInterface> *param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UEndTurnCallbackProxy *pUVar5;
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
  pUVar5 = (UEndTurnCallbackProxy *)
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
  pUVar5->TurnBasedMatchInterface = *(UTurnBasedMatchInterface **)param_4;
  pFVar2 = (param_3->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return pUVar5;
}

// GetPrivateStaticClass @ 14ec77b80

UClass * __cdecl UEndTurnCallbackProxy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEndTurnCallbackProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"EndTurnCallbackProxy",
               &Z_Registration_Info_UClass_UEndTurnCallbackProxy.InnerSingleton,
               StaticRegisterNativesUEndTurnCallbackProxy,0x88,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UEndTurnCallbackProxy>,
               InternalVTableHelperCtorCaller<UEndTurnCallbackProxy>,local_res8,
               UOnlineBlueprintCallProxyBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEndTurnCallbackProxy.InnerSingleton;
}

// StaticRegisterNativesUEndTurnCallbackProxy @ 14ec99710

void __cdecl UEndTurnCallbackProxy::StaticRegisterNativesUEndTurnCallbackProxy(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UEndTurnCallbackProxy_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UploadMatchDataDelegate @ 14ec9fd40

void __thiscall
UEndTurnCallbackProxy::UploadMatchDataDelegate
          (UEndTurnCallbackProxy *this,FString *param_1,bool param_2)

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

// execEndTurn @ 14eca5190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl UEndTurnCallbackProxy::execEndTurn(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  undefined8 uVar3;
  void *_Src;
  UObject *pUVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStackY_148 [32];
  ForAnyElementType local_108;
  int local_100;
  int local_fc;
  UObject *local_f8;
  undefined8 local_f0;
  void *local_e8;
  undefined8 local_e0;
  UObject *local_d8;
  UObject *local_d0;
  undefined8 uStack_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_f0 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f0);
  }
  local_f8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  local_e8 = (void *)0x0;
  local_e0 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  local_d0 = (UObject *)0x0;
  uStack_c8 = 0;
  FInterfaceProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d0);
  }
  pUVar4 = local_d0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_d0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_d0);
  }
  _Src = local_e8;
  lVar8 = (longlong)(int)local_e0;
  local_108.Data = (FScriptContainerElement *)0x0;
  local_100 = (int)local_e0;
  if ((int)local_e0 == 0) {
    local_fc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_e0,0,&local_108,(int)local_e0,&local_fc);
    memcpy(local_108.Data,_Src,lVar8 * 2);
  }
  uVar3 = local_f0;
  pUVar2 = local_f8;
  pUVar5 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar5,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar6);
  local_b8._8_8_ = pUVar5;
  pUVar5 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar7 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  local_d8 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&pUVar5[2].field_0x10,(FObjectPtr)&local_d8);
  *(undefined8 *)&pUVar5[2].field_0x18 = uVar3;
  iVar9 = local_100 + -1;
  if (local_100 == 0) {
    iVar9 = 0;
  }
  ::FString::AssignRange((FString *)&pUVar5[2].field_0x20,(wchar_t *)local_108.Data,iVar9);
  *(UObject **)&pUVar5[3].field_0x8 = pUVar4;
  if (local_108.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data);
  }
  *(UObject **)param_3 = pUVar5;
  if (local_e8 != (void *)0x0) {
    FMemory::Free(local_e8);
  }
  return;
}

