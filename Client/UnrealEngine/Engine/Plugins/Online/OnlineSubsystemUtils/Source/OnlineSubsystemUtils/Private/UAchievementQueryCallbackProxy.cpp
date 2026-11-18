// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 12

// StaticClass @ 14ec46d10

UClass * __cdecl UAchievementQueryCallbackProxy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAchievementQueryCallbackProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"AchievementQueryCallbackProxy",
               &Z_Registration_Info_UClass_UAchievementQueryCallbackProxy.InnerSingleton,
               StaticRegisterNativesUAchievementQueryCallbackProxy,0x78,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAchievementQueryCallbackProxy>,
               InternalVTableHelperCtorCaller<UAchievementQueryCallbackProxy>,local_res8,
               UOnlineBlueprintCallProxyBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAchievementQueryCallbackProxy.InnerSingleton;
}

// UAchievementQueryCallbackProxy @ 14ec53180

UAchievementQueryCallbackProxy * __thiscall
UAchievementQueryCallbackProxy::UAchievementQueryCallbackProxy
          (UAchievementQueryCallbackProxy *this,FVTableHelper *param_1)

{
  UOnlineBlueprintCallProxyBase::UOnlineBlueprintCallProxyBase
            ((UOnlineBlueprintCallProxyBase *)this,param_1);
  this->_padding_ = (longlong)&___7UAchievementQueryCallbackProxy__6B_;
  *(undefined8 *)&this->OnSuccess = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x8 = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x10 = 0;
  *(undefined8 *)&this->OnFailure = 0;
  *(undefined8 *)&(this->OnFailure).field_0x8 = 0;
  *(undefined8 *)&(this->OnFailure).field_0x10 = 0;
  (this->PlayerControllerWeakPtr).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UAchievementQueryCallbackProxy @ 14ec531d0

UAchievementQueryCallbackProxy * __thiscall
UAchievementQueryCallbackProxy::UAchievementQueryCallbackProxy
          (UAchievementQueryCallbackProxy *this,FObjectInitializer *param_1)

{
  UOnlineBlueprintCallProxyBase::UOnlineBlueprintCallProxyBase
            ((UOnlineBlueprintCallProxyBase *)this,param_1);
  this->_padding_ = (longlong)&___7UAchievementQueryCallbackProxy__6B_;
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

// ~UAchievementQueryCallbackProxy @ 14ec56b00

void __thiscall
UAchievementQueryCallbackProxy::~UAchievementQueryCallbackProxy
          (UAchievementQueryCallbackProxy *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UAchievementQueryCallbackProxy__6B_;
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

// Activate @ 14ec5cf70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UAchievementQueryCallbackProxy::Activate(UAchievementQueryCallbackProxy *this)

{
  FUniqueNetId *pFVar1;
  bool bVar2;
  UObject *pUVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  ForAnyElementType FVar6;
  code *pcVar7;
  longlong *plVar8;
  FName local_res18;
  UAchievementQueryCallbackProxy *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_f8;
  FDelegateAllocation local_f0;
  longlong *local_e0;
  TReferenceControllerBase<1> *local_d8;
  FUniqueNetId *local_d0;
  FSharedReferencer<1> local_c8;
  IOnlineSubsystem *local_c0;
  wchar_t *local_b8;
  TSharedPtr<FUniqueNetId_const_,1> local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FDestructionSentinel local_70;
  FDestructionSentinel local_58;
  FDelegateAllocation *local_40;
  
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_c8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  UEngine::GetWorldFromContextObject(GEngine,this->WorldContextObject,ReturnNull);
  local_c0 = IOnlineSubsystem::Get(&local_res18);
  local_b8 = L"CacheAchievements or CacheAchievementDescriptions";
  if (local_c0 == (IOnlineSubsystem *)0x0) {
    ::FString::PrintfImpl(&local_a0,L"%s - Invalid or uninitialized OnlineSubsystem");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_a0.Data.ArrayNum != 0) {
      FVar6.Data = local_a0.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar6.Data,Warning,(FName)0x0);
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
  }
  pUVar3 = FWeakObjectPtr::Get(&(this->PlayerControllerWeakPtr).WeakPtr);
  local_d0 = (FUniqueNetId *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if ((pUVar3 == (UObject *)0x0) || (*(longlong *)&pUVar3[0x11].field_0x20 == 0)) {
    ::FString::PrintfImpl(&local_80,L"%s - Invalid player state");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_80.Data.ArrayNum != 0) {
      FVar6.Data = local_80.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar6.Data,Warning,(FName)0x0);
    local_90.Data.AllocatorInstance.Data = local_80.Data.AllocatorInstance.Data;
LAB_14ec5d307:
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
  }
  else {
    FUniqueNetIdWrapper::GetV1
              ((FUniqueNetIdWrapper *)(*(longlong *)&pUVar3[0x11].field_0x20 + 0x2d0),&local_b0);
    local_d0 = local_b0.Object;
    local_b0.Object = (FUniqueNetId *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_c8,&local_b0.SharedReferenceCount);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b0.SharedReferenceCount.ReferenceController);
    pFVar1 = local_d0;
    if (local_d0 == (FUniqueNetId *)0x0) {
      ::FString::PrintfImpl(&local_90,L"%s - Cannot map local player to unique net ID");
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_90.Data.ArrayNum != 0) {
        FVar6.Data = local_90.Data.AllocatorInstance.Data;
      }
      FFrame::KismetExecutionMessage((wchar_t *)FVar6.Data,Warning,(FName)0x0);
      goto LAB_14ec5d307;
    }
    if (local_c0 != (IOnlineSubsystem *)0x0) {
      (**(code **)(local_c0->_padding_ + 0xa8))(local_c0,&local_e0);
      if (local_e0 != (longlong *)0x0) {
        local_f8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
        local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_f0.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_f8,(FWriteAccessScope *)&local_58);
        local_40 = &local_f0;
        puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_f0);
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = &
                    ___7__TCommonDelegateInstanceState___A6AXAEBVFUniqueNetId___N_ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar5 = FDelegateHandle::GenerateNewID();
          puVar4[2] = uVar5;
          *puVar4 = &
                    ___7__TBaseUObjectMethodDelegateInstance__0A_VUAchievementQueryCallbackProxy____A6AXAEBVFUniqueNetId___N_ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar4[3] = 0;
          local_res20 = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res20);
          puVar4[4] = OnQueryCompleted;
        }
        if (local_58.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
        }
        if (this->bFetchDescriptions == false) {
          if ((local_e0 == (longlong *)0x0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar2)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pcVar7 = *(code **)(*local_e0 + 0x10);
          plVar8 = local_e0;
        }
        else {
          if ((local_e0 == (longlong *)0x0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar2)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pcVar7 = *(code **)(*local_e0 + 0x18);
          plVar8 = local_e0;
        }
        if ((pFVar1 == (FUniqueNetId *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar2)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        (*pcVar7)(plVar8,pFVar1);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_f8,(FWriteAccessScope *)&local_70);
        if ((local_f0.DelegateSize != 0) &&
           (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_f0,0,0,0x10);
          local_f0.DelegateSize = 0;
        }
        if (local_70.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
        }
        if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_f0.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_f8.AccessDetector);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_d8);
        goto LAB_14ec5d31a;
      }
      FFrame::KismetExecutionMessage
                (L"Achievements not supported by Online Subsystem",Warning,(FName)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_d8);
    }
  }
  FEmptyOnlineDelegate_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnFailure);
LAB_14ec5d31a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.ReferenceController);
  return;
}

// CacheAchievementDescriptions @ 14ec61940

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UAchievementQueryCallbackProxy * __cdecl
UAchievementQueryCallbackProxy::CacheAchievementDescriptions
          (UObject *param_1,APlayerController *param_2)

{
  UObject *pUVar1;
  UAchievementQueryCallbackProxy *pUVar2;
  APlayerController *local_res8;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = NewObject<UAchievementQueryCallbackProxy>(pUVar1);
  local_res8 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (APlayerController *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&(pUVar2->PlayerControllerWeakPtr).WeakPtr,(FObjectPtr)&local_res8);
  pUVar2->WorldContextObject = param_1;
  pUVar2->bFetchDescriptions = true;
  return pUVar2;
}

// CacheAchievements @ 14ec619b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UAchievementQueryCallbackProxy * __cdecl
UAchievementQueryCallbackProxy::CacheAchievements(UObject *param_1,APlayerController *param_2)

{
  UObject *pUVar1;
  UAchievementQueryCallbackProxy *pUVar2;
  APlayerController *local_res8;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = NewObject<UAchievementQueryCallbackProxy>(pUVar1);
  local_res8 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (APlayerController *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&(pUVar2->PlayerControllerWeakPtr).WeakPtr,(FObjectPtr)&local_res8);
  pUVar2->WorldContextObject = param_1;
  pUVar2->bFetchDescriptions = false;
  return pUVar2;
}

// GetPrivateStaticClass @ 14ec77700

UClass * __cdecl UAchievementQueryCallbackProxy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAchievementQueryCallbackProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"AchievementQueryCallbackProxy",
               &Z_Registration_Info_UClass_UAchievementQueryCallbackProxy.InnerSingleton,
               StaticRegisterNativesUAchievementQueryCallbackProxy,0x78,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAchievementQueryCallbackProxy>,
               InternalVTableHelperCtorCaller<UAchievementQueryCallbackProxy>,local_res8,
               UOnlineBlueprintCallProxyBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAchievementQueryCallbackProxy.InnerSingleton;
}

// OnQueryCompleted @ 14ec89e30

void __thiscall
UAchievementQueryCallbackProxy::OnQueryCompleted
          (UAchievementQueryCallbackProxy *this,FUniqueNetId *param_1,bool param_2)

{
  longlong lVar1;
  
  lVar1 = 0x30;
  if (!param_2) {
    lVar1 = 0x48;
  }
  FEmptyOnlineDelegate_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             ((longlong)&this->_padding_ + lVar1));
  return;
}

// StaticRegisterNativesUAchievementQueryCallbackProxy @ 14ec99590

void __cdecl
UAchievementQueryCallbackProxy::StaticRegisterNativesUAchievementQueryCallbackProxy(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCacheAchievementDescriptions @ 14eca1370

void __cdecl
UAchievementQueryCallbackProxy::execCacheAchievementDescriptions
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  UAchievementQueryCallbackProxy *pUVar5;
  UObject *local_res10;
  UObject *local_res18;
  UObject *local_res20;
  
  local_res18 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar3 = local_res18;
  pUVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = NewObject<UAchievementQueryCallbackProxy>(pUVar4);
  local_res20 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  FWeakObjectPtr::operator=(&(pUVar5->PlayerControllerWeakPtr).WeakPtr,(FObjectPtr)&local_res20);
  pUVar5->bFetchDescriptions = true;
  pUVar5->WorldContextObject = pUVar3;
  *(UAchievementQueryCallbackProxy **)param_3 = pUVar5;
  return;
}

// execCacheAchievements @ 14eca1480

void __cdecl
UAchievementQueryCallbackProxy::execCacheAchievements
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  UAchievementQueryCallbackProxy *pUVar5;
  UObject *local_res10;
  UObject *local_res18;
  UObject *local_res20;
  
  local_res18 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar3 = local_res18;
  pUVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = NewObject<UAchievementQueryCallbackProxy>(pUVar4);
  local_res20 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  FWeakObjectPtr::operator=(&(pUVar5->PlayerControllerWeakPtr).WeakPtr,(FObjectPtr)&local_res20);
  pUVar5->bFetchDescriptions = false;
  pUVar5->WorldContextObject = pUVar3;
  *(UAchievementQueryCallbackProxy **)param_3 = pUVar5;
  return;
}

