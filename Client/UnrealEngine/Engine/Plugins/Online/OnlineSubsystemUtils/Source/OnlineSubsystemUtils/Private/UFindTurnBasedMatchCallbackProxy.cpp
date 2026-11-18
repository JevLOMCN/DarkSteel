// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 9

// StaticClass @ 14ec48ad0

UClass * __cdecl UFindTurnBasedMatchCallbackProxy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFindTurnBasedMatchCallbackProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"FindTurnBasedMatchCallbackProxy",
               &Z_Registration_Info_UClass_UFindTurnBasedMatchCallbackProxy.InnerSingleton,
               StaticRegisterNativesUFindTurnBasedMatchCallbackProxy,0x98,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UFindTurnBasedMatchCallbackProxy>,
               InternalVTableHelperCtorCaller<UFindTurnBasedMatchCallbackProxy>,local_res8,
               UOnlineBlueprintCallProxyBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFindTurnBasedMatchCallbackProxy.InnerSingleton;
}

// UFindTurnBasedMatchCallbackProxy @ 14ec539e0

UFindTurnBasedMatchCallbackProxy * __thiscall
UFindTurnBasedMatchCallbackProxy::UFindTurnBasedMatchCallbackProxy
          (UFindTurnBasedMatchCallbackProxy *this,FVTableHelper *param_1)

{
  UOnlineBlueprintCallProxyBase::UOnlineBlueprintCallProxyBase
            ((UOnlineBlueprintCallProxyBase *)this,param_1);
  this->_padding_ = (longlong)&___7UFindTurnBasedMatchCallbackProxy__6B_;
  *(undefined8 *)&this->OnSuccess = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x8 = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x10 = 0;
  *(undefined8 *)&this->OnFailure = 0;
  *(undefined8 *)&(this->OnFailure).field_0x8 = 0;
  *(undefined8 *)&(this->OnFailure).field_0x10 = 0;
  (this->PlayerControllerWeakPtr).WeakPtr = (FWeakObjectPtr)0x0;
  (this->Delegate).Object = (FFindTurnBasedMatchCallbackProxyMatchmakerDelegate *)0x0;
  (this->Delegate).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UFindTurnBasedMatchCallbackProxy @ 14ec53a40

UFindTurnBasedMatchCallbackProxy * __thiscall
UFindTurnBasedMatchCallbackProxy::UFindTurnBasedMatchCallbackProxy
          (UFindTurnBasedMatchCallbackProxy *this,FObjectInitializer *param_1)

{
  FFindTurnBasedMatchCallbackProxyMatchmakerDelegate *pFVar1;
  FFindTurnBasedMatchCallbackProxyMatchmakerDelegate *pFVar2;
  
  UOnlineBlueprintCallProxyBase::UOnlineBlueprintCallProxyBase
            ((UOnlineBlueprintCallProxyBase *)this,param_1);
  pFVar2 = (FFindTurnBasedMatchCallbackProxyMatchmakerDelegate *)0x0;
  this->_padding_ = (longlong)&___7UFindTurnBasedMatchCallbackProxy__6B_;
  *(undefined8 *)&this->OnSuccess = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x8 = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x10 = 0;
  *(undefined8 *)&this->OnFailure = 0;
  *(undefined8 *)&(this->OnFailure).field_0x8 = 0;
  *(undefined8 *)&(this->OnFailure).field_0x10 = 0;
  (this->PlayerControllerWeakPtr).WeakPtr = (FWeakObjectPtr)0x0;
  this->WorldContextObject = (UObject *)0x0;
  pFVar1 = ::operator_new(0x30);
  if (pFVar1 != (FFindTurnBasedMatchCallbackProxyMatchmakerDelegate *)0x0) {
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FFindTurnBasedMatchCallbackProxyMatchmakerDelegate__6B_;
    pFVar1->_padding_ = 0;
    pFVar1->FindTurnBasedMatchCallbackProxy = (UFindTurnBasedMatchCallbackProxy *)0x0;
    (pFVar1->TurnBasedInterface).Object = (IOnlineTurnBased *)0x0;
    (pFVar1->TurnBasedInterface).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar2 = pFVar1;
  }
  TSharedPtr<FFindTurnBasedMatchCallbackProxyMatchmakerDelegate,1>::
  TSharedPtr<FFindTurnBasedMatchCallbackProxyMatchmakerDelegate,1><FFindTurnBasedMatchCallbackProxyMatchmakerDelegate>
            (&this->Delegate,pFVar2);
  return this;
}

// ~UFindTurnBasedMatchCallbackProxy @ 14ec56f00

void __thiscall
UFindTurnBasedMatchCallbackProxy::~UFindTurnBasedMatchCallbackProxy
          (UFindTurnBasedMatchCallbackProxy *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UFindTurnBasedMatchCallbackProxy__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Delegate).SharedReferenceCount.ReferenceController);
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

// Activate @ 14ec5f080

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UFindTurnBasedMatchCallbackProxy::Activate(UFindTurnBasedMatchCallbackProxy *this)

{
  FFindTurnBasedMatchCallbackProxyMatchmakerDelegate *pFVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  UObject *pUVar5;
  ForAnyElementType FVar6;
  FName local_res18;
  IOnlineTurnBased *local_d8;
  TReferenceControllerBase<1> *local_d0;
  TSharedPtr<FUniqueNetId_const_,1> local_c8;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  undefined1 local_ac;
  FUniqueNetId *local_a8;
  FSharedReferencer<1> local_a0;
  IOnlineSubsystem *local_98;
  wchar_t *local_90;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FFindTurnBasedMatchCallbackProxyMatchmakerDelegate *local_48;
  TReferenceControllerBase<1> *local_40;
  IOnlineTurnBased *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_a0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  UEngine::GetWorldFromContextObject(GEngine,this->WorldContextObject,ReturnNull);
  local_98 = IOnlineSubsystem::Get(&local_res18);
  local_90 = L"FindTurnBasedMatch";
  if (local_98 == (IOnlineSubsystem *)0x0) {
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
  pUVar5 = FWeakObjectPtr::Get(&(this->PlayerControllerWeakPtr).WeakPtr);
  local_a8 = (FUniqueNetId *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if ((pUVar5 == (UObject *)0x0) || (*(longlong *)&pUVar5[0x11].field_0x20 == 0)) {
    ::FString::PrintfImpl(&local_68,L"%s - Invalid player state");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar6.Data = local_68.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar6.Data,Warning,(FName)0x0);
    local_78.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
LAB_14ec5f389:
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  else {
    FUniqueNetIdWrapper::GetV1
              ((FUniqueNetIdWrapper *)(*(longlong *)&pUVar5[0x11].field_0x20 + 0x2d0),&local_c8);
    local_a8 = local_c8.Object;
    local_c8.Object = (FUniqueNetId *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_a0,&local_c8.SharedReferenceCount);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c8.SharedReferenceCount.ReferenceController);
    if (local_a8 == (FUniqueNetId *)0x0) {
      ::FString::PrintfImpl(&local_78,L"%s - Cannot map local player to unique net ID");
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_78.Data.ArrayNum != 0) {
        FVar6.Data = local_78.Data.AllocatorInstance.Data;
      }
      FFrame::KismetExecutionMessage((wchar_t *)FVar6.Data,Warning,(FName)0x0);
      goto LAB_14ec5f389;
    }
    if (local_98 != (IOnlineSubsystem *)0x0) {
      (**(code **)(local_98->_padding_ + 0x100))(local_98,&local_d8);
      if (local_d8 != (IOnlineTurnBased *)0x0) {
        if (((this->Delegate).Object == (FFindTurnBasedMatchCallbackProxyMatchmakerDelegate *)0x0)
           && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        ((this->Delegate).Object)->FindTurnBasedMatchCallbackProxy = this;
        if (((this->Delegate).Object == (FFindTurnBasedMatchCallbackProxyMatchmakerDelegate *)0x0)
           && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pTVar3 = local_d0;
        pFVar1 = (this->Delegate).Object;
        if (local_d0 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_d0->SharedReferenceCount = (atomic<int>)((int)local_d0->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          local_d0->SharedReferenceCount = (atomic<int>)((int)local_d0->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_38 = (pFVar1->TurnBasedInterface).Object;
        pTStack_30 = (pFVar1->TurnBasedInterface).SharedReferenceCount.ReferenceController;
        (pFVar1->TurnBasedInterface).Object = local_d8;
        (pFVar1->TurnBasedInterface).SharedReferenceCount.ReferenceController = local_d0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_30);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        if ((local_d8 == (IOnlineTurnBased *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = *(code **)((longlong)*local_d8 + 8);
        local_48 = (this->Delegate).Object;
        local_40 = (this->Delegate).SharedReferenceCount.ReferenceController;
        if (local_40 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
          UNLOCK();
        }
        (*pcVar2)(local_d8,&local_48);
        local_b8 = this->MinPlayers;
        local_b4 = this->MaxPlayers;
        local_b0 = this->PlayerGroup;
        local_ac = this->ShowExistingMatches;
        if ((local_d8 == (IOnlineTurnBased *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        (**(code **)((longlong)*local_d8 + 0x10))(local_d8,&local_b8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_d0);
        goto LAB_14ec5f3a8;
      }
      FFrame::KismetExecutionMessage
                (L"Turn based games not supported by online subsystem",Warning,(FName)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_d0);
    }
  }
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  FOnlineTurnBasedMatchResult::Broadcast(&this->OnFailure,&local_58);
LAB_14ec5f3a8:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a0.ReferenceController);
  return;
}

// FindTurnBasedMatch @ 14ec72b00

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

UFindTurnBasedMatchCallbackProxy * __cdecl
UFindTurnBasedMatchCallbackProxy::FindTurnBasedMatch
          (UObject *param_1,APlayerController *param_2,
          TScriptInterface<ITurnBasedMatchInterface> *param_3,int param_4,int param_5,int param_6,
          bool param_7)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UFindTurnBasedMatchCallbackProxy *pUVar3;
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
  pUVar3 = (UFindTurnBasedMatchCallbackProxy *)
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
  pUVar3->MaxPlayers = param_5;
  pUVar3->PlayerGroup = param_6;
  pUVar3->ShowExistingMatches = param_7;
  pUVar3->WorldContextObject = param_1;
  pUVar3->MinPlayers = param_4;
  pUVar3->TurnBasedMatchInterface = *(UTurnBasedMatchInterface **)param_3;
  return pUVar3;
}

// GetPrivateStaticClass @ 14ec77d00

UClass * __cdecl UFindTurnBasedMatchCallbackProxy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFindTurnBasedMatchCallbackProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"FindTurnBasedMatchCallbackProxy",
               &Z_Registration_Info_UClass_UFindTurnBasedMatchCallbackProxy.InnerSingleton,
               StaticRegisterNativesUFindTurnBasedMatchCallbackProxy,0x98,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UFindTurnBasedMatchCallbackProxy>,
               InternalVTableHelperCtorCaller<UFindTurnBasedMatchCallbackProxy>,local_res8,
               UOnlineBlueprintCallProxyBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFindTurnBasedMatchCallbackProxy.InnerSingleton;
}

// StaticRegisterNativesUFindTurnBasedMatchCallbackProxy @ 14ec99790

void __cdecl
UFindTurnBasedMatchCallbackProxy::StaticRegisterNativesUFindTurnBasedMatchCallbackProxy(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execFindTurnBasedMatch @ 14eca56c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UFindTurnBasedMatchCallbackProxy::execFindTurnBasedMatch
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  UObject *pUVar5;
  UObject *pUVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_138 [32];
  int local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  UObject *local_108;
  undefined8 local_100;
  UObject *local_f8;
  undefined8 local_f0;
  undefined8 *local_e8;
  UObject *local_e0;
  undefined8 uStack_d8;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_100 = 0;
  local_e8 = param_3;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_100,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_100);
  }
  local_108 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  local_e0 = (UObject *)0x0;
  uStack_d8 = 0;
  FInterfaceProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e0);
  }
  local_10c = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_10c,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_10c);
  }
  local_110 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_110,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_110);
  }
  local_114 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_114,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_114);
  }
  local_118 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_118,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_118);
  }
  pUVar6 = local_e0;
  uVar4 = local_10c;
  uVar3 = local_110;
  uVar2 = local_114;
  bVar10 = local_118 != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_e0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_e0);
  }
  pUVar5 = local_108;
  local_f0 = local_100;
  pUVar7 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar7,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,pUVar8);
  local_c8._8_8_ = pUVar7;
  pUVar7 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar9 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  local_f8 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&pUVar7[2].field_0x10,(FObjectPtr)&local_f8);
  *(undefined8 *)&pUVar7[2].field_0x18 = local_f0;
  *(undefined4 *)(pUVar7 + 3) = uVar4;
  *(undefined4 *)&pUVar7[3].field_0x4 = uVar3;
  *(undefined4 *)&pUVar7[3].field_0x8 = uVar2;
  pUVar7[3].field_0xc = bVar10;
  *(UObject **)&pUVar7[2].field_0x20 = pUVar6;
  *local_e8 = pUVar7;
  return;
}

