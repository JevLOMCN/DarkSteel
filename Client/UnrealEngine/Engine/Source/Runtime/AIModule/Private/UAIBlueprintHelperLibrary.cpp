// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 43

// StaticClass @ 146f10870

UClass * __cdecl UAIBlueprintHelperLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAIBlueprintHelperLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AIBlueprintHelperLibrary",
               &Z_Registration_Info_UClass_UAIBlueprintHelperLibrary.InnerSingleton,
               StaticRegisterNativesUAIBlueprintHelperLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAIBlueprintHelperLibrary>,
               InternalVTableHelperCtorCaller<UAIBlueprintHelperLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAIBlueprintHelperLibrary.InnerSingleton;
}

// UAIBlueprintHelperLibrary @ 146f29e80

UAIBlueprintHelperLibrary * __thiscall
UAIBlueprintHelperLibrary::UAIBlueprintHelperLibrary
          (UAIBlueprintHelperLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UAIBlueprintHelperLibrary__6B_;
  return this;
}

// UAIBlueprintHelperLibrary @ 146f29eb0

UAIBlueprintHelperLibrary * __thiscall
UAIBlueprintHelperLibrary::UAIBlueprintHelperLibrary
          (UAIBlueprintHelperLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UAIBlueprintHelperLibrary__6B_;
  return this;
}

// ~UAIBlueprintHelperLibrary @ 146f2e620

void __thiscall
UAIBlueprintHelperLibrary::~UAIBlueprintHelperLibrary(UAIBlueprintHelperLibrary *this)

{
  *(undefined ***)this = &___7UAIBlueprintHelperLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// CreateMoveToProxyObject @ 146f3cc70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

UAIAsyncTaskBlueprintProxy * __cdecl
UAIBlueprintHelperLibrary::CreateMoveToProxyObject
          (UObject *param_1,APawn *param_2,TVector<double> *param_3,AActor *param_4,float param_5,
          bool param_6)

{
  char *pcVar1;
  int iVar2;
  AController *pAVar3;
  TObjectPtr<UClass>_u_0 TVar4;
  UAIAsyncTaskBlueprintProxy *pUVar5;
  UAIAsyncTaskBlueprintProxy *pUVar6;
  bool bVar7;
  UClass *pUVar8;
  UWorld *this;
  UAIAsyncTaskBlueprintProxy *pUVar9;
  UObject *pUVar10;
  UAIAsyncTaskBlueprintProxy *pUVar11;
  UObject *this_00;
  UFunction *pUVar12;
  FTimerManager *this_01;
  longlong *plVar13;
  code *pcVar14;
  undefined1 auStackY_218 [32];
  undefined1 local_1d8;
  undefined1 local_1d7;
  undefined1 local_1d6;
  undefined1 local_1d5;
  <lambda_1> local_1d4 [4];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1d0;
  FWeakObjectPtr local_1c8;
  FName local_1c0;
  undefined8 local_1b8;
  FName local_1b0;
  FAIRequestID local_1a8;
  char local_1a4;
  AController *local_1a0;
  FName local_198;
  UAIAsyncTaskBlueprintProxy *local_190;
  FName *local_188;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_180;
  FDestructionSentinel local_170;
  FAIMoveRequest local_158;
  FReadAccessScope local_108;
  FReadAccessScope local_f0;
  undefined1 local_d8 [128];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_218;
  if ((param_1 != (UObject *)0x0) && ((*(uint *)&param_1->field_0x8 >> 0x1e & 1) != 0)) {
    local_1d8 = 0;
    bVar7 = `UAIBlueprintHelperLibrary::CreateMoveToProxyObject'::__l3::<lambda_1>::operator()
                      (&local_1d8);
    if (!bVar7) {
      return (UAIAsyncTaskBlueprintProxy *)0x0;
    }
  }
  if ((param_2 != (APawn *)0x0) && (((uint)param_2->_padding_ >> 0x1e & 1) != 0)) {
    local_1d7 = 0;
    bVar7 = `UAIBlueprintHelperLibrary::CreateMoveToProxyObject'::__l6::<lambda_2>::operator()
                      (&local_1d7);
    if (!bVar7) {
      return (UAIAsyncTaskBlueprintProxy *)0x0;
    }
  }
  if (param_1 == (UObject *)0x0) {
    param_1 = (UObject *)param_2;
    if (param_2 == (APawn *)0x0) {
      if ((byte)LogAIBlueprint._0_1_ < 3) {
        return (UAIAsyncTaskBlueprintProxy *)0x0;
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAIBlueprint);
      return (UAIAsyncTaskBlueprintProxy *)0x0;
    }
  }
  else if (param_2 == (APawn *)0x0) {
    pUVar8 = Z_Construct_UClass_AAIController_NoRegister();
    iVar2 = (int)pUVar8->_padding_;
    if (*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar2) {
      return (UAIAsyncTaskBlueprintProxy *)0x0;
    }
    if ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar8->_padding_) {
      return (UAIAsyncTaskBlueprintProxy *)0x0;
    }
    param_2 = *(APawn **)&param_1[0x13].field_0x18;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (param_2 == (APawn *)0x0) {
        return (UAIAsyncTaskBlueprintProxy *)0x0;
      }
    }
    else {
      if (param_2 == (APawn *)0x0) {
        return (UAIAsyncTaskBlueprintProxy *)0x0;
      }
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
  }
  if (((uint)param_2->_padding_ >> 0x1e & 1) != 0) {
    local_1d6 = 0;
    bVar7 = `UAIBlueprintHelperLibrary::CreateMoveToProxyObject'::__l41::<lambda_3>::operator()
                      (&local_1d6);
    if (!bVar7) {
      return (UAIAsyncTaskBlueprintProxy *)0x0;
    }
  }
  pAVar3 = (param_2->Controller).field0_0x0.DebugPtr;
  if (pAVar3 == (AController *)0x0) {
    return (UAIAsyncTaskBlueprintProxy *)0x0;
  }
  pUVar8 = Z_Construct_UClass_AAIController_NoRegister();
  iVar2 = (int)pUVar8->_padding_;
  if (*(int *)(pAVar3->_padding_ + 0x38) < iVar2) {
    return (UAIAsyncTaskBlueprintProxy *)0x0;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(pAVar3->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
      &pUVar8->_padding_) {
    return (UAIAsyncTaskBlueprintProxy *)0x0;
  }
  if (((uint)pAVar3->_padding_ >> 0x1e & 1) != 0) {
    local_1d5 = 0;
    bVar7 = `UAIBlueprintHelperLibrary::CreateMoveToProxyObject'::__l44::<lambda_4>::operator()
                      (&local_1d5);
    if (!bVar7) {
      return (UAIAsyncTaskBlueprintProxy *)0x0;
    }
  }
  this = UEngine::GetWorldFromContextObject(GEngine,param_1,Assert);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_d8,pUVar8);
  local_d8._8_8_ = this;
  pUVar9 = (UAIAsyncTaskBlueprintProxy *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_d8);
  if (local_d8._64_8_ != 0) {
    plVar13 = (longlong *)(local_d8 + 0x50);
    if ((longlong *)local_d8._104_8_ != (longlong *)0x0) {
      plVar13 = (longlong *)local_d8._104_8_;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  FAIMoveRequest::FAIMoveRequest(&local_158);
  local_158.AcceptanceRadius = param_5;
  local_158._40_4_ = (uint)param_6 << 8 | local_158._40_4_ & 0xfffffeff | 4;
  if (param_4 == (AActor *)0x0) {
    FAIMoveRequest::SetGoalLocation(&local_158,param_3);
  }
  else {
    FAIMoveRequest::SetGoalActor(&local_158,param_4);
  }
  TVar4 = (TObjectPtr<UClass>_u_0)pAVar3[1]._padding_;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (TVar4.DebugPtr != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar4.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
    }
  }
  local_158.bCanStrafe = (uint)pAVar3[1]._padding_ >> 4;
  local_158.FilterClass.Class.field0_0x0 = (TObjectPtr<UClass>)(TObjectPtr<UClass>)TVar4;
  (**(code **)(pAVar3->_padding_ + 0x8b0))(pAVar3,&local_1a8,&local_158,0);
  if (local_1a4 == '\0') {
LAB_146f3d1a2:
    this_01 = UWorld::GetTimerManager(this);
    pcVar14 = UAIAsyncTaskBlueprintProxy::OnNoPath;
  }
  else {
    if (local_1a4 != '\x01') {
      if (local_1a4 != '\x02') goto LAB_146f3d1a2;
      local_1a0 = pAVar3;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pAVar3);
      }
      FWeakObjectPtr::operator=(&(pUVar9->AIController).WeakPtr,(FObjectPtr)&local_1a0);
      pUVar10 = FWeakObjectPtr::Get(&(pUVar9->AIController).WeakPtr);
      pUVar11 = (UAIAsyncTaskBlueprintProxy *)
                strstr("&UAIAsyncTaskBlueprintProxy::OnMoveCompleted","::");
      pUVar6 = (UAIAsyncTaskBlueprintProxy *)0x0;
      while (pUVar5 = pUVar11, pUVar5 != (UAIAsyncTaskBlueprintProxy *)0x0) {
        pUVar11 = (UAIAsyncTaskBlueprintProxy *)
                  strstr((char *)((longlong)&pUVar5->_padding_ + 1),"::");
        pUVar6 = pUVar5;
      }
      pcVar1 = (char *)((longlong)&pUVar6->_padding_ + 2);
      if (((pUVar6 == (UAIAsyncTaskBlueprintProxy *)0x0) || (*pcVar1 == '0')) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result && Result[2] != \'0\'",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                             ,0x1da,L"\'%hs\' does not look like a member function"), bVar7)) {
        pcVar14 = (code *)swi(3);
        pUVar9 = (UAIAsyncTaskBlueprintProxy *)(*pcVar14)();
        return pUVar9;
      }
      ::FName::FName(&local_198,pcVar1);
      if ((pUVar9 == (UAIAsyncTaskBlueprintProxy *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InUserObject != nullptr && InMethodPtr != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                             ,0x4c8,L""), bVar7)) {
        pcVar14 = (code *)swi(3);
        pUVar9 = (UAIAsyncTaskBlueprintProxy *)(*pcVar14)();
        return pUVar9;
      }
      local_1d0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_1c8.ObjectIndex = 0;
      local_1c8.ObjectSerialNumber = 0;
      local_1c0.ComparisonIndex.Value = 0;
      local_1c0.Number = 0;
      local_1b0 = local_198;
      local_190 = pUVar9;
      if ((pUVar9 == (UAIAsyncTaskBlueprintProxy *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InUserObject != nullptr && InMethodPtr != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                             ,0x46d,L""), local_190 = (UAIAsyncTaskBlueprintProxy *)0x0, bVar7)) {
        pcVar14 = (code *)swi(3);
        pUVar9 = (UAIAsyncTaskBlueprintProxy *)(*pcVar14)();
        return pUVar9;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_190 != (UAIAsyncTaskBlueprintProxy *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_190);
      }
      FWeakObjectPtr::operator=(&local_1c8,(FObjectPtr)&local_190);
      local_1c0 = local_1b0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                (&local_1d0,&local_108);
      local_1b8 = 0;
      if ((local_1c0 == (FName)0x0) ||
         (this_00 = FWeakObjectPtr::Get(&local_1c8), this_00 == (UObject *)0x0)) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_108);
LAB_146f3d107:
        local_188 = &local_1b0;
        `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,FAIRequestID,enum_EPathFollowingResult::Type>
        ::__Internal_BindDynamic<UAIAsyncTaskBlueprintProxy>'::__l2::<lambda_1>::operator()
                  (&local_188);
      }
      else {
        pUVar12 = UObject::FindFunction(this_00,local_1c0);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_108);
        if (pUVar12 == (UFunction *)0x0) goto LAB_146f3d107;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                (&local_1d0,&local_f0);
      local_180.Object = local_1c8;
      local_180.FunctionName = local_1c0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_f0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar10[0x18].field_0x20
                 ,(FWriteAccessScope *)&local_170);
      TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
      RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
                ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
                  *)(pUVar10 + 0x19),local_1d4,Default);
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar10[0x18].field_0x20,
                 &local_180);
      if (local_170.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_170.Accessor,&local_170);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1d0.AccessDetector);
      (pUVar9->MoveRequestId).RequestID = local_1a8.RequestID;
      goto LAB_146f3d1e1;
    }
    this_01 = UWorld::GetTimerManager(this);
    pcVar14 = UAIAsyncTaskBlueprintProxy::OnAtGoal;
  }
  FTimerManager::SetTimer<UAIAsyncTaskBlueprintProxy>
            (this_01,&pUVar9->TimerHandle_OnInstantFinish,pUVar9,(pmf_42e81743)pcVar14,
             __real_3dcccccd,false,__real_bf800000);
LAB_146f3d1e1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.UserData.SharedReferenceCount.ReferenceController);
  return pUVar9;
}

// GetAIController @ 146f4f760

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AAIController * __cdecl UAIBlueprintHelperLibrary::GetAIController(AActor *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (AActor *)0x0) {
    pUVar2 = Z_Construct_UClass_APawn_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      param_1 = (AActor *)param_1[1].PrimaryActorTick._padding_;
    }
  }
  if ((AAIController *)param_1 != (AAIController *)0x0) {
    pUVar2 = Z_Construct_UClass_AAIController_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(((AAIController *)param_1)->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(((AAIController *)param_1)->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      return (AAIController *)param_1;
    }
  }
  return (AAIController *)0x0;
}

// GetBlackboard @ 146f502a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UBlackboardComponent * __cdecl UAIBlueprintHelperLibrary::GetBlackboard(AActor *param_1)

{
  int iVar1;
  AActor *this;
  UClass *pUVar2;
  UBlackboardComponent *pUVar3;
  
  if (param_1 == (AActor *)0x0) {
    return (UBlackboardComponent *)0x0;
  }
  pUVar2 = Z_Construct_UClass_APawn_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) &&
      (this = (AActor *)param_1[1].PrimaryActorTick._padding_, this != (AActor *)0x0)) &&
     (pUVar3 = AActor::FindComponentByClass<UBlackboardComponent>(this),
     pUVar3 != (UBlackboardComponent *)0x0)) {
    return pUVar3;
  }
  pUVar3 = AActor::FindComponentByClass<UBlackboardComponent>(param_1);
  return pUVar3;
}

// GetCurrentPath @ 146f50820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UNavigationPath * __cdecl UAIBlueprintHelperLibrary::GetCurrentPath(AController *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FNavigationPath *pFVar3;
  UClass *pUVar4;
  UPathFollowingComponent *pUVar5;
  UObject *pUVar6;
  UNavigationPath *this;
  longlong *plVar7;
  undefined1 auStack_c8 [32];
  TSharedPtr<FNavigationPath,1> local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  this = (UNavigationPath *)0x0;
  if (param_1 != (AController *)0x0) {
    pUVar4 = Z_Construct_UClass_AAIController_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar4->_padding_)) {
      pUVar5 = AActor::FindComponentByClass<UPathFollowingComponent>((AActor *)param_1);
    }
    else {
      pUVar5 = (UPathFollowingComponent *)param_1[1]._padding_;
    }
    if (pUVar5 != (UPathFollowingComponent *)0x0) {
      pTVar2 = (pUVar5->Path).SharedReferenceCount.ReferenceController;
      pFVar3 = (pUVar5->Path).Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar3 != (FNavigationPath *)0x0) {
        pUVar6 = GetTransientPackageAsObject();
        FObjectInitializer::AssertIfInConstructor
                  (pUVar6,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar4 = Z_Construct_UClass_UNavigationPath_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_98,pUVar4);
        local_98._8_8_ = pUVar6;
        this = (UNavigationPath *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
        if (local_98._64_8_ != 0) {
          plVar7 = (longlong *)(local_98 + 0x50);
          if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
            plVar7 = (longlong *)local_98._104_8_;
          }
          (**(code **)(*plVar7 + 0x10))();
        }
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_a8.Object = pFVar3;
        local_a8.SharedReferenceCount.ReferenceController = pTVar2;
        UNavigationPath::SetPath(this,&local_a8);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    }
  }
  return this;
}

// GetCurrentPathIndex @ 146f50970

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __cdecl UAIBlueprintHelperLibrary::GetCurrentPathIndex(AController *param_1)

{
  int iVar1;
  UClass *pUVar2;
  UPathFollowingComponent *pUVar3;
  
  if (param_1 != (AController *)0x0) {
    pUVar2 = Z_Construct_UClass_AAIController_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar2->_padding_)) {
      pUVar3 = AActor::FindComponentByClass<UPathFollowingComponent>((AActor *)param_1);
    }
    else {
      pUVar3 = (UPathFollowingComponent *)param_1[1]._padding_;
    }
    if (pUVar3 != (UPathFollowingComponent *)0x0) {
      return pUVar3->MoveSegmentStartIndex;
    }
  }
  return -1;
}

// GetCurrentPathPoints @ 146f509e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> * __cdecl
UAIBlueprintHelperLibrary::GetCurrentPathPoints
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          AController *param_1)

{
  uint uVar1;
  int iVar2;
  FNavigationPath *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  UClass *pUVar10;
  UPathFollowingComponent *pUVar11;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  FScriptContainerElement *pFVar14;
  TSharedPtr<FNavigationPath,1> *pTVar15;
  UPathFollowingComponent *pUVar16;
  FScriptContainerElement *pFVar17;
  uint local_res8;
  undefined4 uStackX_c;
  
  pUVar16 = (UPathFollowingComponent *)0x0;
  local_res8 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pUVar11 = pUVar16;
  if (param_1 == (AController *)0x0) {
LAB_146f50a76:
    pTVar13 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
    pTVar15 = &pUVar11->Path;
  }
  else {
    pUVar10 = Z_Construct_UClass_AAIController_NoRegister();
    iVar2 = (int)pUVar10->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar10->_padding_)) {
      pUVar11 = AActor::FindComponentByClass<UPathFollowingComponent>((AActor *)param_1);
    }
    else {
      pUVar11 = (UPathFollowingComponent *)param_1[1]._padding_;
    }
    if (pUVar11 == (UPathFollowingComponent *)0x0) goto LAB_146f50a76;
    pTVar15 = &pUVar11->Path;
    pUVar16 = (UPathFollowingComponent *)&DAT_00000001;
    pTVar13 = (pUVar11->Path).SharedReferenceCount.ReferenceController;
    pFVar3 = pTVar15->Object;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar3 != (FNavigationPath *)0x0) {
      bVar8 = true;
      goto LAB_146f50a85;
    }
  }
  bVar8 = false;
LAB_146f50a85:
  if (pUVar16 != (UPathFollowingComponent *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
  if (bVar8) {
    pTVar13 = (pTVar15->SharedReferenceCount).ReferenceController;
    pFVar3 = pTVar15->Object;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar3 == (FNavigationPath *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      pTVar12 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
      return pTVar12;
    }
    uVar1 = (pFVar3->PathPoints).ArrayNum;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (__return_storage_ptr__->ArrayMax < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar1,&__return_storage_ptr__->AllocatorInstance,
                 __return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
    pTVar13 = (pUVar11->Path).SharedReferenceCount.ReferenceController;
    pFVar3 = (pUVar11->Path).Object;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar3 == (FNavigationPath *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      pTVar12 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
      return pTVar12;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
    iVar2 = (pFVar3->PathPoints).ArrayNum;
    pFVar17 = (pFVar3->PathPoints).AllocatorInstance.Data;
    pFVar14 = pFVar17 + (longlong)iVar2 * 0x30;
    while( true ) {
      if ((pFVar3->PathPoints).ArrayNum != iVar2) {
        local_res8 = local_res8 & 0xffffff00;
        `TCheckedPointerIterator<FNavPathPoint,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res8);
      }
      if (pFVar17 == pFVar14) break;
      pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar4 <= pFVar17) &&
          (pFVar17 < pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 0x18)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        pTVar12 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar12;
      }
      iVar9 = __return_storage_ptr__->ArrayNum;
      if (iVar9 == __return_storage_ptr__->ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar9 + 1;
      uVar7 = *(undefined8 *)(pFVar17 + 8);
      pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
      pFVar4 = pFVar5 + (longlong)iVar9 * 0x18;
      *(undefined8 *)pFVar4 = *(undefined8 *)pFVar17;
      *(undefined8 *)(pFVar4 + 8) = uVar7;
      pFVar4 = pFVar17 + 0x10;
      pFVar17 = pFVar17 + 0x30;
      *(undefined8 *)(pFVar5 + (longlong)iVar9 * 0x18 + 0x10) = *(undefined8 *)pFVar4;
    }
  }
  return __return_storage_ptr__;
}

// GetNextNavLinkIndex @ 146f57030

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __cdecl UAIBlueprintHelperLibrary::GetNextNavLinkIndex(AController *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FNavigationPath *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UClass *pUVar7;
  UPathFollowingComponent *pUVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  if (param_1 != (AController *)0x0) {
    pUVar7 = Z_Construct_UClass_AAIController_NoRegister();
    iVar6 = (int)pUVar7->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar6) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar6 * 8)
        != &pUVar7->_padding_)) {
      pUVar8 = AActor::FindComponentByClass<UPathFollowingComponent>((AActor *)param_1);
    }
    else {
      pUVar8 = (UPathFollowingComponent *)param_1[1]._padding_;
    }
    if (pUVar8 != (UPathFollowingComponent *)0x0) {
      pTVar1 = (pUVar8->Path).SharedReferenceCount.ReferenceController;
      pFVar2 = (pUVar8->Path).Object;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar2 != (FNavigationPath *)0x0) {
        uVar10 = (ulonglong)pUVar8->MoveSegmentStartIndex;
        iVar6 = (pFVar2->PathPoints).ArrayNum;
        if (pUVar8->MoveSegmentStartIndex < iVar6) {
          lVar11 = uVar10 * 0x30;
          do {
            uVar9 = (uint)uVar10;
            uVar5 = 0;
            if ((int)uVar9 < iVar6) {
              uVar5 = ~uVar9 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              iVar6 = (*pcVar3)();
              return iVar6;
            }
            if (((byte)(pFVar2->PathPoints).AllocatorInstance.Data[lVar11 + 0x20] & 4) != 0) {
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar1);
              return uVar9;
            }
            iVar6 = (pFVar2->PathPoints).ArrayNum;
            uVar10 = (ulonglong)(uVar9 + 1);
            lVar11 = lVar11 + 0x30;
          } while ((int)(uVar9 + 1) < iVar6);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    }
  }
  return -1;
}

// GetPathComp @ 146f57240

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UPathFollowingComponent * __cdecl UAIBlueprintHelperLibrary::GetPathComp(AController *param_1)

{
  int iVar1;
  UClass *pUVar2;
  UPathFollowingComponent *pUVar3;
  
  if (param_1 == (AController *)0x0) {
    return (UPathFollowingComponent *)0x0;
  }
  pUVar2 = Z_Construct_UClass_AAIController_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UPathFollowingComponent *)param_1[1]._padding_;
  }
  pUVar3 = AActor::FindComponentByClass<UPathFollowingComponent>((AActor *)param_1);
  return pUVar3;
}

// GetPrivateStaticClass @ 146f57580

UClass * __cdecl UAIBlueprintHelperLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAIBlueprintHelperLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AIBlueprintHelperLibrary",
               &Z_Registration_Info_UClass_UAIBlueprintHelperLibrary.InnerSingleton,
               StaticRegisterNativesUAIBlueprintHelperLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAIBlueprintHelperLibrary>,
               InternalVTableHelperCtorCaller<UAIBlueprintHelperLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAIBlueprintHelperLibrary.InnerSingleton;
}

// IsValidAIDirection @ 146f5be90

bool __cdecl UAIBlueprintHelperLibrary::IsValidAIDirection(TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  if (((((__real_c7efffffe0000000 < dVar1) && (dVar1 < __real_47efffffe0000000)) &&
       (dVar2 = (param_1->field0_0x0)._s_0.Y, __real_c7efffffe0000000 < dVar2)) &&
      ((dVar2 < __real_47efffffe0000000 &&
       (dVar3 = (param_1->field0_0x0)._s_0.Z, __real_c7efffffe0000000 < dVar3)))) &&
     ((dVar3 < __real_47efffffe0000000 && (((dVar1 != 0.0 || (dVar2 != 0.0)) || (dVar3 != 0.0))))))
  {
    return true;
  }
  return false;
}

// IsValidAILocation @ 146f5bf00

bool __cdecl UAIBlueprintHelperLibrary::IsValidAILocation(TVector<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  if ((((__real_c7efffffe0000000 < dVar1) && (dVar1 < __real_47efffffe0000000)) &&
      (dVar1 = (param_1->field0_0x0)._s_0.Y, __real_c7efffffe0000000 < dVar1)) &&
     (((dVar1 < __real_47efffffe0000000 &&
       (dVar1 = (param_1->field0_0x0)._s_0.Z, __real_c7efffffe0000000 < dVar1)) &&
      (dVar1 < __real_47efffffe0000000)))) {
    return true;
  }
  return false;
}

// IsValidAIRotation @ 146f5bf50

bool __cdecl UAIBlueprintHelperLibrary::IsValidAIRotation(TRotator<double> *param_1)

{
  if (((FAISystem::InvalidRotation.Pitch == param_1->Pitch) &&
      (FAISystem::InvalidRotation.Yaw == param_1->Yaw)) &&
     (FAISystem::InvalidRotation.Roll == param_1->Roll)) {
    return false;
  }
  return true;
}

// LockAIResourcesWithAnimation @ 146f5c320

void __cdecl
UAIBlueprintHelperLibrary::LockAIResourcesWithAnimation
          (UAnimInstance *param_1,bool param_2,bool param_3)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  longlong *plVar4;
  
  if (((param_1 != (UAnimInstance *)0x0) &&
      (lVar2 = (**(code **)(*(longlong *)param_1 + 0x2b0))(), lVar2 != 0)) &&
     (lVar2 = *(longlong *)(lVar2 + 0x2f0), lVar2 != 0)) {
    pUVar3 = Z_Construct_UClass_AAIController_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      if ((param_2) && (*(longlong *)(lVar2 + 0x3b0) != 0)) {
        plVar4 = (longlong *)(*(longlong *)(lVar2 + 0x3b0) + 0xc0);
        (**(code **)(*plVar4 + 0x10))(plVar4,2);
      }
      if ((param_3) && (*(longlong *)(lVar2 + 0x3b8) != 0)) {
        plVar4 = (longlong *)(*(longlong *)(lVar2 + 0x3b8) + 0xc0);
        (**(code **)(*plVar4 + 0x10))(plVar4,2);
      }
    }
  }
  return;
}

// SendAIMessage @ 146f73330

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UAIBlueprintHelperLibrary::SendAIMessage(APawn *param_1,FName param_2,UObject *param_3,bool param_4)

{
  AController *pAVar1;
  code *pcVar2;
  UBrainComponent *pUVar3;
  UClass *local_res8;
  FName local_28;
  FWeakObjectPtr local_20;
  undefined4 local_18;
  undefined1 local_14;
  undefined1 local_13;
  
  local_28 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_3);
  }
  local_20.ObjectIndex = 0;
  local_20.ObjectSerialNumber = 0;
  local_res8 = (UClass *)param_3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_3);
  }
  FWeakObjectPtr::operator=(&local_20,(FObjectPtr)&local_res8);
  local_18 = 0;
  local_13 = 0;
  if (param_1 == (APawn *)0x0) {
    return;
  }
  pAVar1 = (param_1->Controller).field0_0x0.DebugPtr;
  local_14 = param_4;
  if (pAVar1 != (AController *)0x0) {
    pcVar2 = *(code **)(pAVar1->_padding_ + 0x738);
    local_res8 = UBrainComponent::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    pUVar3 = (UBrainComponent *)(*pcVar2)(pAVar1,&local_res8);
    if (pUVar3 != (UBrainComponent *)0x0) goto LAB_146f73404;
  }
  pUVar3 = AActor::FindComponentByClass<UBrainComponent>((AActor *)param_1);
  if (pUVar3 == (UBrainComponent *)0x0) {
    return;
  }
LAB_146f73404:
  (**(code **)(pUVar3->_padding_ + 0x548))(pUVar3,&local_28);
  return;
}

// SimpleMoveToActor @ 146f75820

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl UAIBlueprintHelperLibrary::SimpleMoveToActor(AController *param_1,AActor *param_2)

{
  int iVar1;
  APawn *pAVar2;
  code *pcVar3;
  USceneComponent *pUVar4;
  char cVar5;
  bool bVar6;
  UWorld *pUVar7;
  UClass *pUVar8;
  UPathFollowingComponent *this;
  FMessageLog *pFVar9;
  FText *pFVar10;
  FText *pFVar11;
  FTextFormat *pFVar12;
  undefined8 uVar13;
  ANavigationData *pAVar14;
  FPathFindingQuery *pFVar15;
  FAIMoveRequest *pFVar16;
  UNavigationSystemV1 *pUVar17;
  UNavigationSystemV1 *this_00;
  undefined4 local_res8 [2];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FString local_3f8;
  FString local_3e8;
  FString local_3d8;
  FString local_3c8;
  FPathFindingResult local_3b8;
  FName local_3a0;
  FName local_398;
  FName local_390;
  FName local_388;
  FName local_380;
  FName local_378;
  FName local_370;
  FName local_368;
  FNavigationPath *local_360;
  TReferenceControllerBase<1> *local_358;
  FText local_350;
  FText local_340;
  TSharedRef<FTokenizedMessage,1> local_330;
  FText local_320;
  FText local_310;
  TSharedPtr<FNavigationPath,1> local_300;
  TSharedPtr<FNavigationQueryFilter_const_,1> local_2f0;
  TSharedRef<FTokenizedMessage,1> local_2e0;
  TVector<double>_u_0 local_2d0;
  TVector<double> local_2b8;
  undefined4 local_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  double local_290;
  FTextFormat local_288;
  FText local_278;
  FTextFormat local_268;
  FText local_258;
  FMessageLog local_248;
  FMessageLog local_218;
  undefined1 local_1e8 [176];
  FAIMoveRequest local_138;
  FPathFindingQuery local_e8;
  
  pUVar17 = (UNavigationSystemV1 *)0x0;
  local_res8[0] = 0;
  this_00 = pUVar17;
  if (param_1 != (AController *)0x0) {
    pUVar7 = AActor::GetWorld((AActor *)param_1);
    if ((pUVar7 == (UWorld *)0x0) ||
       (this_00 = (UNavigationSystemV1 *)(pUVar7->NavigationSystem).field0_0x0.DebugPtr,
       this_00 == (UNavigationSystemV1 *)0x0)) {
LAB_146f7588a:
      this_00 = pUVar17;
    }
    else {
      pUVar8 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
      iVar1 = (int)pUVar8->_padding_;
      if ((*(int *)(*(longlong *)&this_00->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar8->_padding_)) goto LAB_146f7588a;
    }
    if ((this_00 != (UNavigationSystemV1 *)0x0) && (param_2 != (AActor *)0x0)) {
      pAVar2 = (param_1->Pawn).field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pAVar2 != (APawn *)0x0) goto LAB_146f758cb;
      }
      else if (pAVar2 != (APawn *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pAVar2);
LAB_146f758cb:
        this = ::`anonymous_namespace'::InitNavigationControl(param_1);
        if (this == (UPathFollowingComponent *)0x0) {
          ::FName::FName(&local_3a0,"PIE");
          pFVar9 = FMessageLog::FMessageLog(&local_248,&local_3a0);
          local_398 = (FName)param_1->_padding_;
          pFVar10 = FText::FromName(&local_278,&local_398);
          pFVar11 = FText::AsLocalizable_Advanced_LocText
                              (&local_340,L"AIBlueprintHelperLibrary",L"SimpleMoveErrorNoComp",
                               L"SimpleMove failed for {0}: missing components");
          pFVar12 = FTextFormat::FTextFormat(&local_268,pFVar11,Default);
          pFVar10 = FText::Format<FText>(&local_350,pFVar12,pFVar10);
          FMessageLog::Warning(pFVar9,&local_2e0,pFVar10);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2e0.SharedReferenceCount.ReferenceController);
          if (local_350.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_350.TextData.Reference + 0x10))();
          }
          if (local_340.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_340.TextData.Reference + 0x10))();
          }
          FMessageLog::~FMessageLog(&local_248);
          return;
        }
        cVar5 = (**(code **)(this->_padding_ + 0x590))(this);
        if (cVar5 == '\0') {
          ::FName::FName(&local_390,"PIE");
          pFVar9 = FMessageLog::FMessageLog(&local_218,&local_390);
          local_388 = (FName)param_1->_padding_;
          pFVar10 = FText::FromName(&local_258,&local_388);
          pFVar11 = FText::AsLocalizable_Advanced_LocText
                              (&local_310,L"AIBlueprintHelperLibrary",L"SimpleMoveErrorMovement",
                               L"SimpleMove failed for {0}: movement not allowed");
          pFVar12 = FTextFormat::FTextFormat(&local_288,pFVar11,Default);
          pFVar10 = FText::Format<FText>(&local_320,pFVar12,pFVar10);
          FMessageLog::Warning(pFVar9,&local_330,pFVar10);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_330.SharedReferenceCount.ReferenceController);
          if (local_320.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_320.TextData.Reference + 0x10))();
          }
          if (local_310.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_310.TextData.Reference + 0x10))();
          }
          FMessageLog::~FMessageLog(&local_218);
          return;
        }
        bVar6 = UPathFollowingComponent::HasReached
                          (this,param_2,OverlapAgentAndGoal,
                           UPathFollowingComponent::DefaultAcceptanceRadius,true);
        if ((this->Status).Value != '\0') {
          (**(code **)(this->_padding_ + 0x518))
                    (this,this_00,0x180,FAIRequestID::AnyRequest.RequestID,!bVar6);
        }
        if (bVar6) {
          UPathFollowingComponent::RequestMoveWithImmediateFinish(this,(Type)local_res8,Reset);
          return;
        }
        (**(code **)(param_1->_padding_ + 0x18))(&param_1->_padding_,&local_2b8);
        pcVar3 = *(code **)(*(longlong *)this_00 + 0x350);
        uVar13 = (**(code **)(param_1->_padding_ + 0x10))(&param_1->_padding_);
        pAVar14 = (ANavigationData *)
                  (*pcVar3)(this_00,uVar13,&local_2b8,&UE::Math::TVector<double>::ZeroVector);
        if (pAVar14 == (ANavigationData *)0x0) {
          return;
        }
        pUVar4 = (param_2->RootComponent).field0_0x0.DebugPtr;
        local_300.Object = (FNavigationPath *)0x0;
        local_300.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_2f0.Object = (FNavigationQueryFilter *)0x0;
        local_2f0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_2d0._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        local_2d0._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        local_2d0._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        local_2d0._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        local_2d0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        if (pUVar4 != (USceneComponent *)0x0) {
          local_290 = (pUVar4->ComponentToWorld).Translation.ZW.m128d_f64[0];
          local_2a0 = *(undefined4 *)(pUVar4->ComponentToWorld).Translation.XY.m128d_f64;
          uStack_29c = *(undefined4 *)
                        ((longlong)(pUVar4->ComponentToWorld).Translation.XY.m128d_f64 + 4);
          uStack_298 = *(undefined4 *)((pUVar4->ComponentToWorld).Translation.XY.m128d_f64 + 1);
          uStack_294 = *(undefined4 *)
                        ((longlong)(pUVar4->ComponentToWorld).Translation.XY.m128d_f64 + 0xc);
          local_2d0._0_4_ = local_2a0;
          local_2d0._4_4_ = uStack_29c;
          local_2d0._8_4_ = uStack_298;
          local_2d0._12_4_ = uStack_294;
          local_2d0._s_0.Z = local_290;
        }
        FPathFindingQuery::FPathFindingQuery
                  ((FPathFindingQuery *)local_1e8,(UObject *)param_1,pAVar14,&local_2b8,
                   (TVector<double> *)&local_2d0._s_0,&local_2f0,&local_300,__real_7fefffffffffffff,
                   true);
        pFVar15 = FPathFindingQuery::FPathFindingQuery(&local_e8,(FPathFindingQuery *)local_1e8);
        UNavigationSystemV1::FindPathSync(this_00,&local_3b8,pFVar15,Regular);
        if (local_3b8.Result == Success) {
          if ((local_3b8.Path.Object == (FNavigationPath *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FNavigationPath::SetGoalActorObservation(local_3b8.Path.Object,param_2,__real_42c80000);
          pcVar3 = *(code **)(this->_padding_ + 0x510);
          local_360 = local_3b8.Path.Object;
          local_358 = local_3b8.Path.SharedReferenceCount.ReferenceController;
          if (local_3b8.Path.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_3b8.Path.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_3b8.Path.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          pFVar16 = FAIMoveRequest::FAIMoveRequest(&local_138,param_2);
          (*pcVar3)(this,local_res18,pFVar16,&local_360);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_138.UserData.SharedReferenceCount.ReferenceController);
        }
        else if ((this->Status).Value != '\0') {
          UPathFollowingComponent::RequestMoveWithImmediateFinish(this,(Type)local_res20,5);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_3b8.Path.SharedReferenceCount.ReferenceController);
        if ((void *)local_1e8._152_8_ != (void *)0x0) {
          FMemory::Free((void *)local_1e8._152_8_);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_1e8._104_8_);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_1e8._64_8_);
        return;
      }
    }
  }
  if ((byte)LogNavigation._0_1_ < 3) {
    return;
  }
  if (param_2 == (AActor *)0x0) {
    ::FString::FString(&local_3c8,L"None");
  }
  else {
    local_380 = (FName)param_2->_padding_;
    ::FName::ToString(&local_380,&local_3c8);
  }
  if (param_1 == (AController *)0x0) {
    ::FString::FString(&local_3e8,L"None");
    goto LAB_146f75de1;
  }
  pUVar17 = (UNavigationSystemV1 *)0x1;
  pAVar2 = (param_1->Pawn).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pAVar2 != (APawn *)0x0) goto LAB_146f75d75;
LAB_146f75db6:
    ::FString::FString(&local_3d8,L"None");
  }
  else {
    if (pAVar2 == (APawn *)0x0) goto LAB_146f75db6;
    UE::GC::MarkAsReachable((UObject *)pAVar2);
LAB_146f75d75:
    local_378 = (FName)pAVar2->_padding_;
    ::FName::ToString(&local_378,&local_3d8);
  }
  local_370 = (FName)param_1->_padding_;
  ::FName::ToString(&local_370,&local_3e8);
LAB_146f75de1:
  if (this_00 == (UNavigationSystemV1 *)0x0) {
    ::FString::FString(&local_3f8,L"None");
  }
  else {
    local_368.ComparisonIndex.Value = *(uint *)&this_00->field_0x18;
    local_368.Number = *(uint *)&this_00->field_0x1c;
    ::FName::ToString(&local_368,&local_3f8);
  }
  UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
  if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
  }
  if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
  }
  if ((pUVar17 != (UNavigationSystemV1 *)0x0) &&
     (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
  }
  if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
  }
  return;
}

// SimpleMoveToLocation @ 146f75eb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UAIBlueprintHelperLibrary::SimpleMoveToLocation(AController *param_1,TVector<double> *param_2)

{
  int iVar1;
  APawn *pAVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  UWorld *pUVar6;
  UClass *pUVar7;
  UPathFollowingComponent *this;
  FMessageLog *pFVar8;
  FText *pFVar9;
  FText *pFVar10;
  FTextFormat *pFVar11;
  undefined8 uVar12;
  ANavigationData *pAVar13;
  FPathFindingQuery *pFVar14;
  FAIMoveRequest *pFVar15;
  UNavigationSystemV1 *pUVar16;
  UNavigationSystemV1 *this_00;
  FName local_res8;
  FName local_res18;
  undefined8 in_stack_fffffffffffffd98;
  ulonglong uVar17;
  TSharedPtr<FNavigationPath,1> local_238;
  TSharedPtr<FNavigationQueryFilter_const_,1> local_228;
  FText local_218;
  FPathFindingResult local_208;
  TVector<double> local_1f0;
  FAIMoveRequest local_1d8;
  undefined1 local_188 [176];
  FPathFindingQuery local_d8;
  
  pUVar16 = (UNavigationSystemV1 *)0x0;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  this_00 = pUVar16;
  if (param_1 != (AController *)0x0) {
    pUVar6 = AActor::GetWorld((AActor *)param_1);
    if ((pUVar6 == (UWorld *)0x0) ||
       (this_00 = (UNavigationSystemV1 *)(pUVar6->NavigationSystem).field0_0x0.DebugPtr,
       this_00 == (UNavigationSystemV1 *)0x0)) {
LAB_146f75f21:
      this_00 = pUVar16;
    }
    else {
      pUVar7 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
      iVar1 = (int)pUVar7->_padding_;
      if ((*(int *)(*(longlong *)&this_00->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar7->_padding_)) goto LAB_146f75f21;
    }
    if (this_00 != (UNavigationSystemV1 *)0x0) {
      pAVar2 = (param_1->Pawn).field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pAVar2 != (APawn *)0x0) goto LAB_146f75f59;
      }
      else if (pAVar2 != (APawn *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pAVar2);
LAB_146f75f59:
        this = ::`anonymous_namespace'::InitNavigationControl(param_1);
        if (this == (UPathFollowingComponent *)0x0) {
          ::FName::FName(&local_res8,"PIE");
          pFVar8 = FMessageLog::FMessageLog((FMessageLog *)&local_1d8,&local_res8);
          local_res18 = (FName)param_1->_padding_;
          pFVar9 = FText::FromName((FText *)&local_1f0,&local_res18);
          pFVar10 = FText::AsLocalizable_Advanced_LocText
                              (&local_218,L"AIBlueprintHelperLibrary",L"SimpleMoveErrorNoComp",
                               L"SimpleMove failed for {0}: missing components");
          pFVar11 = FTextFormat::FTextFormat((FTextFormat *)&local_208,pFVar10,Default);
          pFVar9 = FText::Format<FText>((FText *)&local_228,pFVar11,pFVar9);
          FMessageLog::Warning(pFVar8,(TSharedRef<FTokenizedMessage,1> *)&local_238,pFVar9);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_238.SharedReferenceCount.ReferenceController);
          if (local_228.Object != (FNavigationQueryFilter *)0x0) {
            (**(code **)((local_228.Object)->_padding_ + 0x10))();
          }
          if (local_218.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_218.TextData.Reference + 0x10))();
          }
          FMessageLog::~FMessageLog((FMessageLog *)&local_1d8);
          return;
        }
        cVar4 = (**(code **)(this->_padding_ + 0x590))(this);
        if (cVar4 == '\0') {
          ::FName::FName(&local_res8,"PIE");
          pFVar8 = FMessageLog::FMessageLog((FMessageLog *)&local_1d8,&local_res8);
          local_res18 = (FName)param_1->_padding_;
          pFVar9 = FText::FromName((FText *)&local_208,&local_res18);
          pFVar10 = FText::AsLocalizable_Advanced_LocText
                              (&local_218,L"AIBlueprintHelperLibrary",L"SimpleMoveErrorMovement",
                               L"SimpleMove failed for {0}: movement not allowed");
          pFVar11 = FTextFormat::FTextFormat((FTextFormat *)&local_1f0,pFVar10,Default);
          pFVar9 = FText::Format<FText>((FText *)&local_228,pFVar11,pFVar9);
          FMessageLog::Warning(pFVar8,(TSharedRef<FTokenizedMessage,1> *)&local_238,pFVar9);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_238.SharedReferenceCount.ReferenceController);
          if (local_228.Object != (FNavigationQueryFilter *)0x0) {
            (**(code **)((local_228.Object)->_padding_ + 0x10))();
          }
          if (local_218.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_218.TextData.Reference + 0x10))();
          }
          FMessageLog::~FMessageLog((FMessageLog *)&local_1d8);
          return;
        }
        bVar5 = UPathFollowingComponent::HasReached
                          (this,param_2,OverlapAgent,
                           UPathFollowingComponent::DefaultAcceptanceRadius);
        if ((this->Status).Value != '\0') {
          uVar17 = CONCAT71((int7)((ulonglong)in_stack_fffffffffffffd98 >> 8),!bVar5);
          (**(code **)(this->_padding_ + 0x518))
                    (this,this_00,0x180,FAIRequestID::AnyRequest.RequestID,uVar17);
          if ((this->Status).Value != '\0') {
            (**(code **)(this->_padding_ + 0x518))
                      (this,this_00,0x180,FAIRequestID::CurrentRequest.RequestID,
                       uVar17 & 0xffffffffffffff00);
          }
        }
        if (bVar5) {
          UPathFollowingComponent::RequestMoveWithImmediateFinish(this,(Type)&local_res8,Reset);
          return;
        }
        (**(code **)(param_1->_padding_ + 0x18))(&param_1->_padding_,&local_1f0);
        pcVar3 = *(code **)(*(longlong *)this_00 + 0x350);
        uVar12 = (**(code **)(param_1->_padding_ + 0x10))(&param_1->_padding_);
        pAVar13 = (ANavigationData *)
                  (*pcVar3)(this_00,uVar12,&local_1f0,&UE::Math::TVector<double>::ZeroVector);
        if (pAVar13 == (ANavigationData *)0x0) {
          return;
        }
        local_238.Object = (FNavigationPath *)0x0;
        local_238.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_228.Object = (FNavigationQueryFilter *)0x0;
        local_228.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        FPathFindingQuery::FPathFindingQuery
                  ((FPathFindingQuery *)local_188,(UObject *)param_1,pAVar13,&local_1f0,param_2,
                   &local_228,&local_238,__real_7fefffffffffffff,true);
        pFVar14 = FPathFindingQuery::FPathFindingQuery(&local_d8,(FPathFindingQuery *)local_188);
        UNavigationSystemV1::FindPathSync(this_00,&local_208,pFVar14,Regular);
        if (local_208.Result == Success) {
          pcVar3 = *(code **)(this->_padding_ + 0x510);
          local_238.Object = local_208.Path.Object;
          local_238.SharedReferenceCount.ReferenceController =
               local_208.Path.SharedReferenceCount.ReferenceController;
          if (local_208.Path.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_208.Path.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_208.Path.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          pFVar15 = FAIMoveRequest::FAIMoveRequest(&local_1d8,param_2);
          (*pcVar3)(this,&local_res8,pFVar15,&local_238);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1d8.UserData.SharedReferenceCount.ReferenceController);
        }
        else if ((this->Status).Value != '\0') {
          UPathFollowingComponent::RequestMoveWithImmediateFinish(this,(Type)&local_res8,5);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_208.Path.SharedReferenceCount.ReferenceController);
        if ((void *)local_188._152_8_ != (void *)0x0) {
          FMemory::Free((void *)local_188._152_8_);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_188._104_8_);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_188._64_8_);
        return;
      }
    }
  }
  if ((byte)LogNavigation._0_1_ < 3) {
    return;
  }
  if (param_1 == (AController *)0x0) {
    ::FString::FString((FString *)&local_228,L"None");
    goto LAB_146f763ca;
  }
  pUVar16 = (UNavigationSystemV1 *)0x1;
  pAVar2 = (param_1->Pawn).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pAVar2 != (APawn *)0x0) goto LAB_146f76352;
LAB_146f7639f:
    ::FString::FString((FString *)&local_238,L"None");
  }
  else {
    if (pAVar2 == (APawn *)0x0) goto LAB_146f7639f;
    UE::GC::MarkAsReachable((UObject *)pAVar2);
LAB_146f76352:
    local_res8 = (FName)pAVar2->_padding_;
    ::FName::ToString(&local_res8,(FString *)&local_238);
  }
  local_res8 = (FName)param_1->_padding_;
  ::FName::ToString(&local_res8,(FString *)&local_228);
LAB_146f763ca:
  if (this_00 == (UNavigationSystemV1 *)0x0) {
    ::FString::FString((FString *)&local_218,L"None");
  }
  else {
    local_res8.ComparisonIndex.Value = *(uint *)&this_00->field_0x18;
    local_res8.Number = *(uint *)&this_00->field_0x1c;
    ::FName::ToString(&local_res8,(FString *)&local_218);
  }
  UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
  if (local_218.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_218.TextData.Reference);
  }
  if (local_228.Object != (FNavigationQueryFilter *)0x0) {
    FMemory::Free(local_228.Object);
  }
  if ((pUVar16 != (UNavigationSystemV1 *)0x0) && (local_238.Object != (FNavigationPath *)0x0)) {
    FMemory::Free(local_238.Object);
  }
  return;
}

// SpawnAIFromClass @ 146f76940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

APawn * __cdecl
UAIBlueprintHelperLibrary::SpawnAIFromClass
          (UObject *param_1,TSubclassOf<APawn> param_2,UBehaviorTree *param_3,
          TVector<double> *param_4,TRotator<double> *param_5,bool param_6,AActor *param_7)

{
  int iVar1;
  AController *pAVar2;
  UWorld *this;
  UClass *pUVar3;
  APawn *pAVar4;
  FString *pFVar5;
  longlong *plVar6;
  wchar_t *pwVar7;
  APawn *pAVar8;
  wchar_t *pwVar9;
  undefined1 auStackY_118 [32];
  FString local_e8;
  FString local_d8;
  undefined1 local_c8 [112];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_118;
  pAVar8 = (APawn *)0x0;
  this = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  if (this != (UWorld *)0x0) {
    pUVar3 = TSubclassOf<APawn>::operator*((TSubclassOf<APawn> *)param_2.Class.field0_0x0);
    if (pUVar3 != (UClass *)0x0) {
      FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_c8);
      local_c8._16_8_ = param_7;
      local_c8[0x30] = !param_6 * '\x02' + AlwaysSpawn;
      pUVar3 = TSubclassOf<APawn>::operator*((TSubclassOf<APawn> *)param_2.Class.field0_0x0);
      pAVar4 = (APawn *)UWorld::SpawnActor(this,pUVar3,param_4,param_5,
                                           (FActorSpawnParameters *)local_c8);
      if (pAVar4 != (APawn *)0x0) {
        pUVar3 = Z_Construct_UClass_APawn_NoRegister();
        iVar1 = (int)pUVar3->_padding_;
        if ((*(int *)(pAVar4->_padding_ + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pAVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar3->_padding_)) {
          pFVar5 = GetTypeName<APawn>(&local_e8);
          pwVar9 = L"";
          if ((pFVar5->Data).ArrayNum == 0) {
            pwVar7 = L"";
          }
          else {
            pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
          }
          pFVar5 = GetFullNameForCastLogError<AActor>(&local_d8,(AActor *)pAVar4);
          if ((pFVar5->Data).ArrayNum != 0) {
            pwVar9 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(pwVar9,pwVar7);
        }
        if ((pAVar4->Controller).field0_0x0.DebugPtr == (AController *)0x0) {
          (**(code **)(pAVar4->_padding_ + 0x860))(pAVar4);
        }
        pAVar8 = pAVar4;
        if ((param_3 != (UBehaviorTree *)0x0) &&
           (pAVar2 = (pAVar4->Controller).field0_0x0.DebugPtr, pAVar2 != (AController *)0x0)) {
          pUVar3 = Z_Construct_UClass_AAIController_NoRegister();
          iVar1 = (int)pUVar3->_padding_;
          if ((iVar1 <= *(int *)(pAVar2->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pAVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
              &pUVar3->_padding_)) {
            (**(code **)(pAVar2->_padding_ + 0x8e8))(pAVar2,param_3);
          }
        }
      }
      if (local_c8._64_8_ != 0) {
        plVar6 = (longlong *)(local_c8 + 0x50);
        if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
          plVar6 = (longlong *)local_c8._104_8_;
        }
        (**(code **)(*plVar6 + 0x10))();
      }
    }
  }
  return pAVar8;
}

// StaticRegisterNativesUAIBlueprintHelperLibrary @ 146f76b70

void __cdecl UAIBlueprintHelperLibrary::StaticRegisterNativesUAIBlueprintHelperLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x10;
  local_18.DataPtr = Z_Construct_UClass_UAIBlueprintHelperLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UnlockAIResourcesWithAnimation @ 146f7c8d0

void __cdecl
UAIBlueprintHelperLibrary::UnlockAIResourcesWithAnimation
          (UAnimInstance *param_1,bool param_2,bool param_3)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  longlong *plVar4;
  
  if (((param_1 != (UAnimInstance *)0x0) &&
      (lVar2 = (**(code **)(*(longlong *)param_1 + 0x2b0))(), lVar2 != 0)) &&
     (lVar2 = *(longlong *)(lVar2 + 0x2f0), lVar2 != 0)) {
    pUVar3 = Z_Construct_UClass_AAIController_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      if ((param_2) && (*(longlong *)(lVar2 + 0x3b0) != 0)) {
        plVar4 = (longlong *)(*(longlong *)(lVar2 + 0x3b0) + 0xc0);
        (**(code **)(*plVar4 + 0x18))(plVar4,2);
      }
      if ((param_3) && (*(longlong *)(lVar2 + 0x3b8) != 0)) {
        plVar4 = (longlong *)(*(longlong *)(lVar2 + 0x3b8) + 0xc0);
        (**(code **)(*plVar4 + 0x18))(plVar4,2);
      }
    }
  }
  return;
}

// execCreateMoveToProxyObject @ 146f7f670

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UAIBlueprintHelperLibrary::execCreateMoveToProxyObject
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UAIAsyncTaskBlueprintProxy *pUVar2;
  int local_res10 [2];
  float local_res18 [2];
  AActor *local_res20;
  APawn *local_68;
  UObject *local_60;
  double local_58;
  double dStack_50;
  double local_48;
  TVector<double>_u_0 local_38;
  
  local_60 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_68 = (APawn *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res20 = (AActor *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_38._s_0.X = local_58;
  local_38._s_0.Y = dStack_50;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38._s_0.Z = local_48;
  pUVar2 = CreateMoveToProxyObject
                     (local_60,local_68,(TVector<double> *)&local_38._s_0,local_res20,local_res18[0]
                      ,local_res10[0] != 0);
  *(UAIAsyncTaskBlueprintProxy **)param_3 = pUVar2;
  return;
}

// execGetAIController @ 146f7f860

void __cdecl
UAIBlueprintHelperLibrary::execGetAIController(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  UClass *pUVar3;
  longlong lVar4;
  longlong local_res10;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  lVar4 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 != 0) {
    pUVar3 = Z_Construct_UClass_APawn_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      lVar4 = *(longlong *)(lVar4 + 0x2f0);
    }
    if (lVar4 != 0) {
      pUVar3 = Z_Construct_UClass_AAIController_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8)
          == &pUVar3->_padding_)) goto LAB_146f7f92a;
    }
  }
  lVar4 = 0;
LAB_146f7f92a:
  *(longlong *)param_3 = lVar4;
  return;
}

// execGetBlackboard @ 146f7f950

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UAIBlueprintHelperLibrary::execGetBlackboard(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  AActor *this;
  AActor *this_00;
  UClass *pUVar3;
  UBlackboardComponent *pUVar4;
  AActor *local_res10 [3];
  
  local_res10[0] = (AActor *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  this_00 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == (AActor *)0x0) {
    *(undefined8 *)param_3 = 0;
    return;
  }
  pUVar3 = Z_Construct_UClass_APawn_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if (((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
      ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
       == &pUVar3->_padding_)) &&
     (this = (AActor *)this_00[1].PrimaryActorTick._padding_, this != (AActor *)0x0)) {
    pUVar4 = AActor::FindComponentByClass<UBlackboardComponent>(this);
    if (pUVar4 != (UBlackboardComponent *)0x0) goto LAB_146f7fa02;
  }
  pUVar4 = AActor::FindComponentByClass<UBlackboardComponent>(this_00);
LAB_146f7fa02:
  *(UBlackboardComponent **)param_3 = pUVar4;
  return;
}

// execGetCurrentPath @ 146f7fc50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UAIBlueprintHelperLibrary::execGetCurrentPath(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  FNavigationPath *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  AActor *this;
  UClass *pUVar5;
  UPathFollowingComponent *pUVar6;
  UObject *pUVar7;
  UNavigationPath *this_00;
  longlong *plVar8;
  undefined1 auStack_e8 [32];
  AActor *local_c8;
  TSharedPtr<FNavigationPath,1> local_c0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  this_00 = (UNavigationPath *)0x0;
  local_c8 = (AActor *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  this = local_c8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_c8 != (AActor *)0x0) {
    pUVar5 = Z_Construct_UClass_AAIController_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(this->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      pUVar6 = AActor::FindComponentByClass<UPathFollowingComponent>(this);
    }
    else {
      pUVar6 = *(UPathFollowingComponent **)
                ((longlong)&this[1].ReplicatedMovement.AngularVelocity.field0_0x0 + 8);
    }
    if (pUVar6 != (UPathFollowingComponent *)0x0) {
      pFVar3 = (pUVar6->Path).Object;
      pTVar4 = (pUVar6->Path).SharedReferenceCount.ReferenceController;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar3 != (FNavigationPath *)0x0) {
        pUVar7 = GetTransientPackageAsObject();
        FObjectInitializer::AssertIfInConstructor
                  (pUVar7,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar5 = Z_Construct_UClass_UNavigationPath_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_a8,pUVar5);
        local_a8._8_8_ = pUVar7;
        this_00 = (UNavigationPath *)
                  StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
        if (local_a8._64_8_ != 0) {
          plVar8 = (longlong *)(local_a8 + 0x50);
          if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
            plVar8 = (longlong *)local_a8._104_8_;
          }
          (**(code **)(*plVar8 + 0x10))();
        }
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_c0.Object = pFVar3;
        local_c0.SharedReferenceCount.ReferenceController = pTVar4;
        UNavigationPath::SetPath(this_00,&local_c0);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  *(UNavigationPath **)param_3 = this_00;
  return;
}

// execGetCurrentPathIndex @ 146f7fe10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UAIBlueprintHelperLibrary::execGetCurrentPathIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  AActor *this;
  UClass *pUVar3;
  UPathFollowingComponent *pUVar4;
  AActor *local_res10;
  
  local_res10 = (AActor *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  this = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 != (AActor *)0x0) {
    pUVar3 = Z_Construct_UClass_AAIController_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(this->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) {
      pUVar4 = AActor::FindComponentByClass<UPathFollowingComponent>(this);
    }
    else {
      pUVar4 = (UPathFollowingComponent *)
               this[1].ReplicatedMovement.AngularVelocity.field0_0x0._s_0.Y;
    }
    if (pUVar4 != (UPathFollowingComponent *)0x0) {
      *(int *)param_3 = pUVar4->MoveSegmentStartIndex;
      return;
    }
  }
  *(undefined4 *)param_3 = 0xffffffff;
  return;
}

// execGetCurrentPathPoints @ 146f7fef0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UAIBlueprintHelperLibrary::execGetCurrentPathPoints(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  AController *local_res10;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_18;
  
  local_res10 = (AController *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = GetCurrentPathPoints(&local_18,local_res10);
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=(param_3,pTVar2);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetNextNavLinkIndex @ 146f804d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UAIBlueprintHelperLibrary::execGetNextNavLinkIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FNavigationPath *pFVar3;
  code *pcVar4;
  AActor *this;
  bool bVar5;
  uint uVar6;
  UClass *pUVar7;
  UPathFollowingComponent *pUVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  AActor *local_res10;
  
  local_res10 = (AActor *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  this = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 != (AActor *)0x0) {
    pUVar7 = Z_Construct_UClass_AAIController_NoRegister();
    iVar9 = (int)pUVar7->_padding_;
    if ((*(int *)(this->_padding_ + 0x38) < iVar9) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar9 * 8) !=
        &pUVar7->_padding_)) {
      pUVar8 = AActor::FindComponentByClass<UPathFollowingComponent>(this);
    }
    else {
      pUVar8 = *(UPathFollowingComponent **)
                ((longlong)&this[1].ReplicatedMovement.AngularVelocity.field0_0x0 + 8);
    }
    if (pUVar8 != (UPathFollowingComponent *)0x0) {
      pTVar2 = (pUVar8->Path).SharedReferenceCount.ReferenceController;
      pFVar3 = (pUVar8->Path).Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar3 != (FNavigationPath *)0x0) {
        uVar11 = (ulonglong)pUVar8->MoveSegmentStartIndex;
        iVar9 = (pFVar3->PathPoints).ArrayNum;
        if (pUVar8->MoveSegmentStartIndex < iVar9) {
          lVar12 = uVar11 * 0x30;
          do {
            uVar10 = (uint)uVar11;
            uVar6 = 0;
            if ((int)uVar10 < iVar9) {
              uVar6 = ~uVar10 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (((byte)(pFVar3->PathPoints).AllocatorInstance.Data[lVar12 + 0x20] & 4) != 0) {
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar2);
              *(uint *)param_3 = uVar10;
              return;
            }
            iVar9 = (pFVar3->PathPoints).ArrayNum;
            uVar11 = (ulonglong)(uVar10 + 1);
            lVar12 = lVar12 + 0x30;
          } while ((int)(uVar10 + 1) < iVar9);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    }
  }
  *(undefined4 *)param_3 = 0xffffffff;
  return;
}

// execIsValidAIDirection @ 146f81280

void __cdecl
UAIBlueprintHelperLibrary::execIsValidAIDirection(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  double local_28;
  double local_20;
  double local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  dVar2 = __real_c7efffffe0000000;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((((dVar2 < local_28) && (local_28 < __real_47efffffe0000000)) && (dVar2 < local_20)) &&
      ((local_20 < __real_47efffffe0000000 && (dVar2 < local_18)))) &&
     ((local_18 < __real_47efffffe0000000 &&
      (((local_28 != 0.0 || (local_20 != 0.0)) || (local_18 != 0.0)))))) {
    *(undefined1 *)param_3 = 1;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsValidAILocation @ 146f81360

void __cdecl
UAIBlueprintHelperLibrary::execIsValidAILocation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  double local_28;
  double local_20;
  double local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  dVar2 = __real_c7efffffe0000000;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((((dVar2 < local_28) && (local_28 < __real_47efffffe0000000)) && (dVar2 < local_20)) &&
     (((local_20 < __real_47efffffe0000000 && (dVar2 < local_18)) &&
      (local_18 < __real_47efffffe0000000)))) {
    *(undefined1 *)param_3 = 1;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsValidAIRotation @ 146f81430

void __cdecl
UAIBlueprintHelperLibrary::execIsValidAIRotation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double local_28;
  double local_20;
  double local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((local_28 == FAISystem::InvalidRotation.Pitch) &&
      (local_20 == FAISystem::InvalidRotation.Yaw)) && (local_18 == FAISystem::InvalidRotation.Roll)
     ) {
    *(undefined1 *)param_3 = 0;
    return;
  }
  *(undefined1 *)param_3 = 1;
  return;
}

// execLockAIResourcesWithAnimation @ 146f814e0

void __cdecl
UAIBlueprintHelperLibrary::execLockAIResourcesWithAnimation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  longlong lVar4;
  UClass *pUVar5;
  longlong *plVar6;
  bool bVar7;
  bool bVar8;
  int local_res10 [2];
  int local_res20 [2];
  longlong *local_28 [2];
  
  local_28[0] = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar7 = local_res10[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar8 = local_res20[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_28[0] != (longlong *)0x0) {
    lVar4 = (**(code **)(*local_28[0] + 0x2b0))();
    if ((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x2f0), lVar4 != 0)) {
      pUVar5 = Z_Construct_UClass_AAIController_NoRegister();
      iVar2 = (int)pUVar5->_padding_;
      if ((iVar2 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar2 * 8)
          == &pUVar5->_padding_)) {
        if ((bVar7) && (*(longlong *)(lVar4 + 0x3b0) != 0)) {
          plVar6 = (longlong *)(*(longlong *)(lVar4 + 0x3b0) + 0xc0);
          (**(code **)(*plVar6 + 0x10))(plVar6,2);
        }
        if ((bVar8) && (*(longlong *)(lVar4 + 0x3b8) != 0)) {
          plVar6 = (longlong *)(*(longlong *)(lVar4 + 0x3b8) + 0xc0);
          (**(code **)(*plVar6 + 0x10))(plVar6,2);
        }
      }
    }
  }
  return;
}

// execSendAIMessage @ 146f81bb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UAIBlueprintHelperLibrary::execSendAIMessage(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  AActor *this;
  UClass *pUVar5;
  UBrainComponent *pUVar6;
  bool bVar7;
  int local_res10 [2];
  undefined8 local_res20;
  AActor *local_48;
  UClass *local_40;
  UClass *local_38;
  undefined8 local_30;
  FWeakObjectPtr local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined1 local_1b;
  
  local_48 = (AActor *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res20 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_40 = (UClass *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar5 = local_40;
  this = local_48;
  bVar7 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_30 = local_res20;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_40 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_40);
  }
  local_28.ObjectIndex = 0;
  local_28.ObjectSerialNumber = 0;
  local_38 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  FWeakObjectPtr::operator=(&local_28,(FObjectPtr)&local_38);
  local_20 = 0;
  local_1b = 0;
  if (this == (AActor *)0x0) {
    return;
  }
  plVar3 = (longlong *)this[1].PrimaryActorTick._padding_;
  local_1c = bVar7;
  if (plVar3 != (longlong *)0x0) {
    pcVar4 = *(code **)(*plVar3 + 0x738);
    local_38 = UBrainComponent::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_38);
    }
    pUVar6 = (UBrainComponent *)(*pcVar4)(plVar3,&local_38);
    if (pUVar6 != (UBrainComponent *)0x0) goto LAB_146f81d74;
  }
  pUVar6 = AActor::FindComponentByClass<UBrainComponent>(this);
  if (pUVar6 == (UBrainComponent *)0x0) {
    return;
  }
LAB_146f81d74:
  (**(code **)(pUVar6->_padding_ + 0x548))(pUVar6,&local_30);
  return;
}

// execSimpleMoveToActor @ 146f81e90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UAIBlueprintHelperLibrary::execSimpleMoveToActor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  AActor *local_res10 [2];
  AController *local_res20;
  
  local_res20 = (AController *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = (AActor *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SimpleMoveToActor(local_res20,local_res10[0]);
  return;
}

// execSimpleMoveToLocation @ 146f81f50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UAIBlueprintHelperLibrary::execSimpleMoveToLocation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TVector<double> *pTVar2;
  AController *local_res10 [3];
  TVector<double> local_28;
  
  local_res10[0] = (AController *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar2 = &local_28;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar2 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SimpleMoveToLocation(local_res10[0],pTVar2);
  return;
}

// execSpawnAIFromClass @ 146f82020

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UAIBlueprintHelperLibrary::execSpawnAIFromClass(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  AActor *pAVar2;
  UBehaviorTree *pUVar3;
  APawn *pAVar4;
  bool bVar5;
  int local_res10 [2];
  AActor *local_res18;
  UBehaviorTree *local_res20;
  UObject *local_c8;
  UObject *local_c0;
  double local_b8;
  double local_b0;
  UObject *local_a8 [2];
  TVector<double>_u_0 local_98;
  TRotator<double> local_78;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  double local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  double local_30;
  
  local_c0 = (UObject *)0x0;
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
  local_res20 = (UBehaviorTree *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar5 = local_res10[0] != 0;
  local_res18 = (AActor *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  pUVar3 = local_res20;
  pAVar2 = local_res18;
  local_a8[0] = local_c8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_98._0_4_ = local_58;
  local_98._4_4_ = uStack_54;
  local_98._8_4_ = uStack_50;
  local_98._12_4_ = uStack_4c;
  local_b8 = local_48;
  local_78.Pitch._0_4_ = local_40;
  local_78.Pitch._4_4_ = uStack_3c;
  local_78.Yaw._0_4_ = uStack_38;
  local_78.Yaw._4_4_ = uStack_34;
  local_b0 = local_30;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_c8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_c8);
    local_58 = local_98._0_4_;
    uStack_54 = local_98._4_4_;
    uStack_50 = local_98._8_4_;
    uStack_4c = local_98._12_4_;
    local_40 = local_78.Pitch._0_4_;
    uStack_3c = local_78.Pitch._4_4_;
    uStack_38 = local_78.Yaw._0_4_;
    uStack_34 = local_78.Yaw._4_4_;
  }
  local_98._0_4_ = local_40;
  local_98._4_4_ = uStack_3c;
  local_98._8_4_ = uStack_38;
  local_98._12_4_ = uStack_34;
  local_98._s_0.Z = local_b0;
  local_78.Pitch._0_4_ = local_58;
  local_78.Pitch._4_4_ = uStack_54;
  local_78.Yaw._0_4_ = uStack_50;
  local_78.Yaw._4_4_ = uStack_4c;
  local_78.Roll = local_b8;
  pAVar4 = SpawnAIFromClass(local_c0,(TSubclassOf<APawn>)local_a8,pUVar3,
                            (TVector<double> *)&local_98._s_0,&local_78,bVar5,pAVar2);
  *(APawn **)param_3 = pAVar4;
  return;
}

// execUnlockAIResourcesWithAnimation @ 146f82380

void __cdecl
UAIBlueprintHelperLibrary::execUnlockAIResourcesWithAnimation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  longlong lVar4;
  UClass *pUVar5;
  longlong *plVar6;
  bool bVar7;
  bool bVar8;
  int local_res10 [2];
  int local_res20 [2];
  longlong *local_28 [2];
  
  local_28[0] = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar7 = local_res10[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar8 = local_res20[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_28[0] != (longlong *)0x0) {
    lVar4 = (**(code **)(*local_28[0] + 0x2b0))();
    if ((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x2f0), lVar4 != 0)) {
      pUVar5 = Z_Construct_UClass_AAIController_NoRegister();
      iVar2 = (int)pUVar5->_padding_;
      if ((iVar2 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar2 * 8)
          == &pUVar5->_padding_)) {
        if ((bVar7) && (*(longlong *)(lVar4 + 0x3b0) != 0)) {
          plVar6 = (longlong *)(*(longlong *)(lVar4 + 0x3b0) + 0xc0);
          (**(code **)(*plVar6 + 0x18))(plVar6,2);
        }
        if ((bVar8) && (*(longlong *)(lVar4 + 0x3b8) != 0)) {
          plVar6 = (longlong *)(*(longlong *)(lVar4 + 0x3b8) + 0xc0);
          (**(code **)(*plVar6 + 0x18))(plVar6,2);
        }
      }
    }
  }
  return;
}

// operator() @ 1504ff4c0

bool __thiscall
`UAIBlueprintHelperLibrary::CreateMoveToProxyObject'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3547397769633202287>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3547397769633202287>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504ff5c0

bool __thiscall
`UAIBlueprintHelperLibrary::CreateMoveToProxyObject'::__l6::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3547397769633202292>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3547397769633202292>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504ff600

bool __thiscall
`UAIBlueprintHelperLibrary::CreateMoveToProxyObject'::__l41::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3547397769633202321>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3547397769633202321>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504ff640

bool __thiscall
`UAIBlueprintHelperLibrary::CreateMoveToProxyObject'::__l44::<lambda_4>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3547397769633202329>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3547397769633202329>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

