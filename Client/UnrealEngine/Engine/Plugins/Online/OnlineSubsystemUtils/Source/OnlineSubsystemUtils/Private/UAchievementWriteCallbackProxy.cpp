// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 11

// StaticClass @ 14ec47210

UClass * __cdecl UAchievementWriteCallbackProxy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAchievementWriteCallbackProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"AchievementWriteCallbackProxy",
               &Z_Registration_Info_UClass_UAchievementWriteCallbackProxy.InnerSingleton,
               StaticRegisterNativesUAchievementWriteCallbackProxy,0x98,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAchievementWriteCallbackProxy>,
               InternalVTableHelperCtorCaller<UAchievementWriteCallbackProxy>,local_res8,
               UOnlineBlueprintCallProxyBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAchievementWriteCallbackProxy.InnerSingleton;
}

// UAchievementWriteCallbackProxy @ 14ec53220

UAchievementWriteCallbackProxy * __thiscall
UAchievementWriteCallbackProxy::UAchievementWriteCallbackProxy
          (UAchievementWriteCallbackProxy *this,FVTableHelper *param_1)

{
  UOnlineBlueprintCallProxyBase::UOnlineBlueprintCallProxyBase
            ((UOnlineBlueprintCallProxyBase *)this,param_1);
  this->_padding_ = (longlong)&___7UAchievementWriteCallbackProxy__6B_;
  *(undefined8 *)&this->OnWriteSuccess = 0;
  *(undefined8 *)&(this->OnWriteSuccess).field_0x8 = 0;
  *(undefined8 *)&(this->OnWriteSuccess).field_0x10 = 0;
  *(undefined8 *)&this->OnWriteFailure = 0;
  *(undefined8 *)&(this->OnWriteFailure).field_0x8 = 0;
  *(undefined8 *)&(this->OnWriteFailure).field_0x10 = 0;
  (this->PlayerControllerWeakPtr).WeakPtr = (FWeakObjectPtr)0x0;
  (this->WriteObject).Object = (FOnlineAchievementsWrite *)0x0;
  (this->WriteObject).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->AchievementName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AchievementName).Data.ArrayNum = 0;
  (this->AchievementName).Data.ArrayMax = 0;
  return this;
}

// UAchievementWriteCallbackProxy @ 14ec53280

UAchievementWriteCallbackProxy * __thiscall
UAchievementWriteCallbackProxy::UAchievementWriteCallbackProxy
          (UAchievementWriteCallbackProxy *this,FObjectInitializer *param_1)

{
  UOnlineBlueprintCallProxyBase::UOnlineBlueprintCallProxyBase
            ((UOnlineBlueprintCallProxyBase *)this,param_1);
  this->_padding_ = (longlong)&___7UAchievementWriteCallbackProxy__6B_;
  *(undefined8 *)&this->OnWriteSuccess = 0;
  *(undefined8 *)&(this->OnWriteSuccess).field_0x8 = 0;
  *(undefined8 *)&(this->OnWriteSuccess).field_0x10 = 0;
  *(undefined8 *)&this->OnWriteFailure = 0;
  *(undefined8 *)&(this->OnWriteFailure).field_0x8 = 0;
  *(undefined8 *)&(this->OnWriteFailure).field_0x10 = 0;
  (this->PlayerControllerWeakPtr).WeakPtr = (FWeakObjectPtr)0x0;
  (this->WriteObject).Object = (FOnlineAchievementsWrite *)0x0;
  (this->WriteObject).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->AchievementName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AchievementName).Data.ArrayNum = 0;
  (this->AchievementName).Data.ArrayMax = 0;
  this->WorldContextObject = (UObject *)0x0;
  return this;
}

// ~UAchievementWriteCallbackProxy @ 14ec56b60

void __thiscall
UAchievementWriteCallbackProxy::~UAchievementWriteCallbackProxy
          (UAchievementWriteCallbackProxy *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UAchievementWriteCallbackProxy__6B_;
  pFVar1 = (this->AchievementName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->WriteObject).SharedReferenceCount.ReferenceController);
  pvVar2 = *(void **)&(this->OnWriteFailure).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnWriteFailure);
  pvVar2 = *(void **)&(this->OnWriteSuccess).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnWriteSuccess);
  UOnlineBlueprintCallProxyBase::~UOnlineBlueprintCallProxyBase
            ((UOnlineBlueprintCallProxyBase *)this);
  return;
}

// Activate @ 14ec5d340

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UAchievementWriteCallbackProxy::Activate(UAchievementWriteCallbackProxy *this)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  FString *pFVar8;
  ForAnyElementType FVar9;
  longlong *plVar10;
  FName local_res18;
  UAchievementWriteCallbackProxy *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_138;
  FDelegateAllocation local_130;
  longlong *local_120;
  TReferenceControllerBase<1> *local_118;
  FUniqueNetId *local_110;
  FSharedReferencer<1> local_108;
  IOnlineSubsystem *local_100;
  wchar_t *local_f8;
  TSharedPtr<FUniqueNetId_const_,1> local_f0;
  FOnlineAchievementsWrite *local_e0;
  TReferenceControllerBase<1> *local_d8;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  undefined8 local_a0;
  FSharedReferencer<1> FStack_98;
  FDestructionSentinel local_90;
  FDestructionSentinel local_78;
  FDelegateAllocation *local_60;
  FString local_58 [2];
  
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_108.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  UEngine::GetWorldFromContextObject(GEngine,this->WorldContextObject,ReturnNull);
  local_100 = IOnlineSubsystem::Get(&local_res18);
  local_f8 = L"WriteAchievementObject";
  if (local_100 == (IOnlineSubsystem *)0x0) {
    ::FString::PrintfImpl(&local_d0,L"%s - Invalid or uninitialized OnlineSubsystem");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_d0.Data.ArrayNum != 0) {
      FVar9.Data = local_d0.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar9.Data,Warning,(FName)0x0);
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
  }
  pUVar5 = FWeakObjectPtr::Get(&(this->PlayerControllerWeakPtr).WeakPtr);
  local_110 = (FUniqueNetId *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if ((pUVar5 == (UObject *)0x0) || (*(longlong *)&pUVar5[0x11].field_0x20 == 0)) {
    ::FString::PrintfImpl(&local_b0,L"%s - Invalid player state");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_b0.Data.ArrayNum != 0) {
      FVar9.Data = local_b0.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar9.Data,Warning,(FName)0x0);
    local_c0.Data.AllocatorInstance.Data = local_b0.Data.AllocatorInstance.Data;
LAB_14ec5d70e:
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
  }
  else {
    FUniqueNetIdWrapper::GetV1
              ((FUniqueNetIdWrapper *)(*(longlong *)&pUVar5[0x11].field_0x20 + 0x2d0),&local_f0);
    local_110 = local_f0.Object;
    local_f0.Object = (FUniqueNetId *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_108,&local_f0.SharedReferenceCount);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f0.SharedReferenceCount.ReferenceController);
    if (local_110 == (FUniqueNetId *)0x0) {
      ::FString::PrintfImpl(&local_c0,L"%s - Cannot map local player to unique net ID");
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_c0.Data.ArrayNum != 0) {
        FVar9.Data = local_c0.Data.AllocatorInstance.Data;
      }
      FFrame::KismetExecutionMessage((wchar_t *)FVar9.Data,Warning,(FName)0x0);
      goto LAB_14ec5d70e;
    }
    if (local_100 != (IOnlineSubsystem *)0x0) {
      (**(code **)(local_100->_padding_ + 0xa8))(local_100,&local_120);
      if (local_120 != (longlong *)0x0) {
        if (((this->WriteObject).Object == (FOnlineAchievementsWrite *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x408,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_d8 = (this->WriteObject).SharedReferenceCount.ReferenceController;
        local_e0 = (this->WriteObject).Object;
        if (local_d8 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_d8->SharedReferenceCount = (atomic<int>)((int)local_d8->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((local_e0 == (FOnlineAchievementsWrite *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x25d,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_138.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        local_130.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_130.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_138,(FWriteAccessScope *)&local_78);
        local_60 = &local_130;
        puVar6 = UE::Core::Private::DelegateAllocate(0x28,&local_130);
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = &
                    ___7__TCommonDelegateInstanceState___A6AXAEBVFUniqueNetId___N_ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar7 = FDelegateHandle::GenerateNewID();
          puVar6[2] = uVar7;
          *puVar6 = &
                    ___7__TBaseUObjectMethodDelegateInstance__0A_VUAchievementWriteCallbackProxy____A6AXAEBVFUniqueNetId___N_ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar6[3] = 0;
          local_res20 = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_res20);
          puVar6[4] = OnAchievementWritten;
        }
        if (local_78.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
        }
        plVar10 = local_120;
        if ((local_120 == (longlong *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), plVar10 = local_120, bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcVar3 = *(code **)(*plVar10 + 8);
        if ((local_110 == (FUniqueNetId *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (*pcVar3)(plVar10,local_110,&local_e0,&local_138);
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
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_d8);
        goto LAB_14ec5d77e;
      }
      FFrame::KismetExecutionMessage
                (L"WriteAchievementObject - Achievements not supported by Online Subsystem",Warning,
                 (FName)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_118)
      ;
    }
  }
  iVar2 = this->UserTag;
  fVar1 = this->AchievementProgress;
  pFVar8 = ::FString::FString(local_58,&this->AchievementName);
  FAchievementWriteCompleteDelegate::Broadcast(&this->OnWriteFailure,pFVar8,fVar1,iVar2);
  local_a0 = 0;
  FStack_98.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_118 = FStack_98.ReferenceController;
  if (&this->WriteObject != (TSharedPtr<FOnlineAchievementsWrite,1> *)&local_a0) {
    (this->WriteObject).Object = (FOnlineAchievementsWrite *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->WriteObject).SharedReferenceCount,&FStack_98);
    local_118 = FStack_98.ReferenceController;
  }
LAB_14ec5d77e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_118);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_108.ReferenceController);
  return;
}

// BeginDestroy @ 14ec60d00

void __thiscall UAchievementWriteCallbackProxy::BeginDestroy(UAchievementWriteCallbackProxy *this)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->WriteObject != (TSharedPtr<FOnlineAchievementsWrite,1> *)&local_18) {
    (this->WriteObject).Object = (FOnlineAchievementsWrite *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->WriteObject).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  UObject::BeginDestroy((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14ec777c0

UClass * __cdecl UAchievementWriteCallbackProxy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAchievementWriteCallbackProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"AchievementWriteCallbackProxy",
               &Z_Registration_Info_UClass_UAchievementWriteCallbackProxy.InnerSingleton,
               StaticRegisterNativesUAchievementWriteCallbackProxy,0x98,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAchievementWriteCallbackProxy>,
               InternalVTableHelperCtorCaller<UAchievementWriteCallbackProxy>,local_res8,
               UOnlineBlueprintCallProxyBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAchievementWriteCallbackProxy.InnerSingleton;
}

// OnAchievementWritten @ 14ec84540

void __thiscall
UAchievementWriteCallbackProxy::OnAchievementWritten
          (UAchievementWriteCallbackProxy *this,FUniqueNetId *param_1,bool param_2)

{
  float fVar1;
  int iVar2;
  FString *pFVar3;
  FAchievementWriteCompleteDelegate *this_00;
  undefined8 local_38;
  FSharedReferencer<1> FStack_30;
  FString local_28 [2];
  
  iVar2 = this->UserTag;
  fVar1 = this->AchievementProgress;
  if (param_2) {
    pFVar3 = ::FString::FString(local_28,&this->AchievementName);
    this_00 = &this->OnWriteSuccess;
  }
  else {
    pFVar3 = ::FString::FString(local_28,&this->AchievementName);
    this_00 = &this->OnWriteFailure;
  }
  FAchievementWriteCompleteDelegate::Broadcast(this_00,pFVar3,fVar1,iVar2);
  local_38 = 0;
  FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->WriteObject != (TSharedPtr<FOnlineAchievementsWrite,1> *)&local_38) {
    (this->WriteObject).Object = (FOnlineAchievementsWrite *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->WriteObject).SharedReferenceCount,&FStack_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_30.ReferenceController);
  return;
}

// StaticRegisterNativesUAchievementWriteCallbackProxy @ 14ec995d0

void __cdecl
UAchievementWriteCallbackProxy::StaticRegisterNativesUAchievementWriteCallbackProxy(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UAchievementWriteCallbackProxy_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// WriteProgress @ 14eca0760

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

UAchievementWriteCallbackProxy * __cdecl
UAchievementWriteCallbackProxy::WriteProgress
          (UObject *param_1,APlayerController *param_2,FString *param_3,float param_4,int param_5)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  UAchievementWriteCallbackProxy *pUVar7;
  FOnlineAchievementsWrite *pFVar8;
  longlong *plVar9;
  int iVar10;
  undefined1 auStack_f8 [32];
  TRawPtrProxy<FOnlineAchievementsWrite> local_d8;
  APlayerController *local_d0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pUVar5 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar5,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,pUVar6);
  local_c8._8_8_ = pUVar5;
  pUVar7 = (UAchievementWriteCallbackProxy *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar9 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  pFVar8 = ::operator_new(0x60);
  local_d8.Object = (FOnlineAchievementsWrite *)0x0;
  if (pFVar8 != (FOnlineAchievementsWrite *)0x0) {
    pFVar8->_padding_ = 0;
    pFVar8->_padding_ = 0;
    pFVar8->_padding_ = 0;
    *(undefined4 *)&pFVar8->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar8->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar8->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar8->_padding_ + 4) = 0;
    pFVar8->_padding_ = 0;
    *(undefined4 *)&pFVar8->_padding_ = 0;
    pFVar8->_padding_ = (longlong)&___7FOnlineAchievementsWrite__6B_;
    pFVar8->WriteState = NotStarted;
    local_d8.Object = pFVar8;
  }
  TSharedPtr<FOnlineAchievementsWrite,1>::operator=<FOnlineAchievementsWrite>
            (&pUVar7->WriteObject,&local_d8);
  if (((pUVar7->WriteObject).Object == (FOnlineAchievementsWrite *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pUVar7 = (UAchievementWriteCallbackProxy *)(*pcVar3)();
    return pUVar7;
  }
  pFVar8 = (pUVar7->WriteObject).Object;
  (**(code **)pFVar8->_padding_)(pFVar8,param_3,param_4);
  local_d0 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (APlayerController *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&(pUVar7->PlayerControllerWeakPtr).WeakPtr,(FObjectPtr)&local_d0);
  iVar1 = (param_3->Data).ArrayNum;
  iVar10 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar10 = 0;
  }
  ::FString::AssignRange
            (&pUVar7->AchievementName,(wchar_t *)(param_3->Data).AllocatorInstance.Data,iVar10);
  pUVar7->UserTag = param_5;
  pUVar7->AchievementProgress = param_4;
  pUVar7->WorldContextObject = param_1;
  pFVar2 = (param_3->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return pUVar7;
}

// execWriteProgress @ 14eca7280

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UAchievementWriteCallbackProxy::execWriteProgress(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  float fVar3;
  void *_Src;
  UAchievementWriteCallbackProxy *pUVar4;
  longlong lVar5;
  int local_res10 [2];
  float local_res18 [2];
  APlayerController *local_res20;
  UObject *local_68;
  void *local_60;
  undefined8 local_58;
  FString local_50 [2];
  
  local_68 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res20 = (APlayerController *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_60 = (void *)0x0;
  local_58 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
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
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  _Src = local_60;
  fVar3 = local_res18[0];
  iVar2 = local_res10[0];
  local_50[0].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar5 = (longlong)(int)local_58;
  local_50[0].Data.ArrayNum = (int)local_58;
  if ((int)local_58 == 0) {
    local_50[0].Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_58,0,(ForAnyElementType *)local_50,(int)local_58,
               &local_50[0].Data.ArrayMax);
    memcpy(local_50[0].Data.AllocatorInstance.Data,_Src,lVar5 * 2);
  }
  pUVar4 = WriteProgress(local_68,local_res20,local_50,fVar3,iVar2);
  *(UAchievementWriteCallbackProxy **)param_3 = pUVar4;
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  return;
}

