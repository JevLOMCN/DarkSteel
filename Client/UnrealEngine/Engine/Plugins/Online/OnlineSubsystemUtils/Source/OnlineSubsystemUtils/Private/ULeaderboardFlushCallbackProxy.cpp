// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 12

// StaticClass @ 14ec44520

UClass * __cdecl ULeaderboardFlushCallbackProxy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULeaderboardFlushCallbackProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"LeaderboardFlushCallbackProxy",
               &Z_Registration_Info_UClass_ULeaderboardFlushCallbackProxy.InnerSingleton,
               StaticRegisterNativesULeaderboardFlushCallbackProxy,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULeaderboardFlushCallbackProxy>,
               InternalVTableHelperCtorCaller<ULeaderboardFlushCallbackProxy>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULeaderboardFlushCallbackProxy.InnerSingleton;
}

// ULeaderboardFlushCallbackProxy @ 14ec54760

ULeaderboardFlushCallbackProxy * __thiscall
ULeaderboardFlushCallbackProxy::ULeaderboardFlushCallbackProxy
          (ULeaderboardFlushCallbackProxy *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULeaderboardFlushCallbackProxy__6B_;
  *(undefined8 *)&this->OnSuccess = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x8 = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x10 = 0;
  *(undefined8 *)&this->OnFailure = 0;
  *(undefined8 *)&(this->OnFailure).field_0x8 = 0;
  *(undefined8 *)&(this->OnFailure).field_0x10 = 0;
  *(undefined8 *)&this->LeaderboardFlushCompleteDelegate = 0;
  *(undefined8 *)&(this->LeaderboardFlushCompleteDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->LeaderboardFlushCompleteDelegate).field_0x10 = 0;
  (this->LeaderboardFlushCompleteDelegateHandle).ID = 0;
  return this;
}

// ULeaderboardFlushCallbackProxy @ 14ec547b0

ULeaderboardFlushCallbackProxy * __thiscall
ULeaderboardFlushCallbackProxy::ULeaderboardFlushCallbackProxy
          (ULeaderboardFlushCallbackProxy *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULeaderboardFlushCallbackProxy__6B_;
  *(undefined8 *)&this->OnSuccess = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x8 = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x10 = 0;
  *(undefined8 *)&this->OnFailure = 0;
  *(undefined8 *)&(this->OnFailure).field_0x8 = 0;
  *(undefined8 *)&(this->OnFailure).field_0x10 = 0;
  *(undefined8 *)&this->LeaderboardFlushCompleteDelegate = 0;
  *(undefined8 *)&(this->LeaderboardFlushCompleteDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->LeaderboardFlushCompleteDelegate).field_0x10 = 0;
  (this->LeaderboardFlushCompleteDelegateHandle).ID = 0;
  return this;
}

// ~ULeaderboardFlushCallbackProxy @ 14ec57530

void __thiscall
ULeaderboardFlushCallbackProxy::~ULeaderboardFlushCallbackProxy
          (ULeaderboardFlushCallbackProxy *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7ULeaderboardFlushCallbackProxy__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->LeaderboardFlushCompleteDelegate);
  pvVar1 = *(void **)&(this->LeaderboardFlushCompleteDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->LeaderboardFlushCompleteDelegate);
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
  UObject::~UObject((UObject *)this);
  return;
}

// BeginDestroy @ 14ec60d90

void __thiscall ULeaderboardFlushCallbackProxy::BeginDestroy(ULeaderboardFlushCallbackProxy *this)

{
  RemoveDelegate(this);
  UObject::BeginDestroy((UObject *)this);
  return;
}

// CreateProxyObjectForFlush @ 14ec6a0d0

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

ULeaderboardFlushCallbackProxy * __cdecl
ULeaderboardFlushCallbackProxy::CreateProxyObjectForFlush(APlayerController *param_1,FName param_2)

{
  UObject *pUVar1;
  UClass *pUVar2;
  ULeaderboardFlushCallbackProxy *this;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar1 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pUVar1;
  this = (ULeaderboardFlushCallbackProxy *)
         StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_StrongRefOnFrame);
  TriggerFlush(this,param_1,param_2);
  return this;
}

// GetPrivateStaticClass @ 14ec784e0

UClass * __cdecl ULeaderboardFlushCallbackProxy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULeaderboardFlushCallbackProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"LeaderboardFlushCallbackProxy",
               &Z_Registration_Info_UClass_ULeaderboardFlushCallbackProxy.InnerSingleton,
               StaticRegisterNativesULeaderboardFlushCallbackProxy,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULeaderboardFlushCallbackProxy>,
               InternalVTableHelperCtorCaller<ULeaderboardFlushCallbackProxy>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULeaderboardFlushCallbackProxy.InnerSingleton;
}

// OnFlushCompleted @ 14ec87a90

void __thiscall
ULeaderboardFlushCallbackProxy::OnFlushCompleted
          (ULeaderboardFlushCallbackProxy *this,FName param_1,bool param_2)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *this_00;
  FName local_res20;
  
  RemoveDelegate(this);
  this_00 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnSuccess;
  if (!param_2) {
    this_00 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnFailure;
  }
  local_res20 = param_1;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (this_00,&local_res20);
  return;
}

// RemoveDelegate @ 14ec91580

void __thiscall ULeaderboardFlushCallbackProxy::RemoveDelegate(ULeaderboardFlushCallbackProxy *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  FModuleManager *this_00;
  FName *pFVar4;
  FOnlineSubsystemModule *pFVar5;
  longlong *plVar6;
  FName local_res18;
  FName local_res20;
  longlong *local_28;
  TReferenceControllerBase<1> *local_20;
  
  if (this->bFailedToEvenSubmit == false) {
    this_00 = FModuleManager::Get();
    pFVar4 = ::FName::FName(&local_res18,"OnlineSubsystem");
    bVar2 = FModuleManager::IsModuleLoaded(this_00,*pFVar4);
    if (bVar2) {
      pFVar4 = ::FName::FName(&local_res20,"OnlineSubsystem");
      pFVar5 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>(*pFVar4);
      cVar3 = (**(code **)(pFVar5->_padding_ + 0x70))(pFVar5,0);
      if (cVar3 != '\0') {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) <
             `public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
             ::__l2::_thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                                 ::__l2::_thread_safe_static_guard_0__),
           `public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
           ::__l2::_thread_safe_static_guard_0__ == -1)) {
          ::FName::FName(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                          ::__l2::OnlineSubsystemModuleName,L"OnlineSubsystem");
          _Init_thread_footer(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
        pFVar5 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>
                           (`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                            ::__l2::OnlineSubsystemModuleName);
        plVar6 = (longlong *)(**(code **)(pFVar5->_padding_ + 0x50))(pFVar5,0);
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x60))(plVar6,&local_28);
          if (local_28 != (longlong *)0x0) {
            if ((local_28 == (longlong *)0x0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            (**(code **)(*local_28 + 0x68))(local_28,&this->LeaderboardFlushCompleteDelegateHandle);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_20);
        }
      }
    }
  }
  return;
}

// StaticRegisterNativesULeaderboardFlushCallbackProxy @ 14ec999f0

void __cdecl
ULeaderboardFlushCallbackProxy::StaticRegisterNativesULeaderboardFlushCallbackProxy(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_ULeaderboardFlushCallbackProxy_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TriggerFlush @ 14ec9d190

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
ULeaderboardFlushCallbackProxy::TriggerFlush
          (ULeaderboardFlushCallbackProxy *this,APlayerController *param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  FModuleManager *this_00;
  FName *pFVar4;
  FOnlineSubsystemModule *pFVar5;
  IOnlineSubsystem *pIVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  ulong64 *puVar9;
  wchar_t *pwVar10;
  FName local_res10;
  FName local_res18;
  undefined8 local_res20;
  undefined1 local_d8 [8];
  FDelegateAllocation local_d0;
  longlong *local_c0;
  TReferenceControllerBase<1> *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  ULeaderboardFlushCallbackProxy *local_98;
  FName local_90;
  TSharedPtr<FUniqueNetId_const_,1> local_88;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  FName local_40;
  FName local_38;
  undefined1 local_30 [8];
  
  this->bFailedToEvenSubmit = true;
  local_res18 = param_2;
  if ((param_1 == (APlayerController *)0x0) || (param_1->_padding_ == 0)) {
    local_a0 = 0;
    FFrame::KismetExecutionMessage
              (L"ULeaderboardQueryCallbackProxy::TriggerFlush - Invalid player state",Warning,
               (FName)0x0);
    goto LAB_14ec9d4a2;
  }
  FUniqueNetIdWrapper::GetV1((FUniqueNetIdWrapper *)(param_1->_padding_ + 0x2d0),&local_88);
  if (local_88.Object == (FUniqueNetId *)0x0) {
    local_a8 = 0;
    pwVar10 = 
    L"ULeaderboardFlushCallbackProxy::TriggerFlush - Cannot map local player to unique net ID";
LAB_14ec9d471:
    FFrame::KismetExecutionMessage(pwVar10,Warning,(FName)0x0);
  }
  else {
    this_00 = FModuleManager::Get();
    pFVar4 = ::FName::FName(&local_40,"OnlineSubsystem");
    bVar2 = FModuleManager::IsModuleLoaded(this_00,*pFVar4);
    if (!bVar2) {
LAB_14ec9d453:
      local_b0 = 0;
      pwVar10 = 
      L"ULeaderboardFlushCallbackProxy::TriggerFlush - Invalid or uninitialized OnlineSubsystem";
      goto LAB_14ec9d471;
    }
    pFVar4 = ::FName::FName(&local_38,"OnlineSubsystem");
    pFVar5 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>(*pFVar4);
    cVar3 = (**(code **)(pFVar5->_padding_ + 0x70))(pFVar5,0);
    if (cVar3 == '\0') goto LAB_14ec9d453;
    local_res10.ComparisonIndex.Value = 0;
    local_res10.Number = 0;
    pIVar6 = IOnlineSubsystem::Get(&local_res10);
    if (pIVar6 == (IOnlineSubsystem *)0x0) goto LAB_14ec9d453;
    (**(code **)(pIVar6->_padding_ + 0x60))(pIVar6,&local_c0);
    if (local_c0 == (longlong *)0x0) {
      local_res20 = 0;
      FFrame::KismetExecutionMessage
                (L"ULeaderboardFlushCallbackProxy::TriggerFlush - Leaderboards not supported by Online Subsystem"
                 ,Warning,(FName)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b8);
    }
    else {
      local_d8 = (undefined1  [8])0x0;
      local_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_d0.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d8,
                 (FWriteAccessScope *)&local_60);
      local_48 = &local_d0;
      puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_d0);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &
                  ___7__TCommonDelegateInstanceState___A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar8 = FDelegateHandle::GenerateNewID();
        puVar7[2] = uVar8;
        *puVar7 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VULeaderboardFlushCallbackProxy____A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar7[3] = 0;
        local_98 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_98);
        puVar7[4] = OnFlushCompleted;
      }
      if (local_60.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                 &this->LeaderboardFlushCompleteDelegate,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_d8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d8,
                 (FWriteAccessScope *)&local_78);
      if ((local_d0.DelegateSize != 0) &&
         (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_d0.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_d0,0,0,0x10);
        local_d0.DelegateSize = 0;
      }
      if (local_78.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
      }
      if (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_d0.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_d8);
      if ((local_c0 == (longlong *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      puVar9 = (ulong64 *)
               (**(code **)(*local_c0 + 0x60))
                         (local_c0,local_30,&this->LeaderboardFlushCompleteDelegate);
      (this->LeaderboardFlushCompleteDelegateHandle).ID = *puVar9;
      if ((local_c0 == (longlong *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (**(code **)(*local_c0 + 0x58))(local_c0,&local_res18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b8);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
LAB_14ec9d4a2:
  if (this->bFailedToEvenSubmit != false) {
    local_90 = local_res18;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnFailure,&local_90);
  }
  return;
}

// execCreateProxyObjectForFlush @ 14eca1930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
ULeaderboardFlushCallbackProxy::execCreateProxyObjectForFlush
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  char cVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  UObjectBase *this;
  FModuleManager *this_00;
  FName *pFVar9;
  FOnlineSubsystemModule *pFVar10;
  IOnlineSubsystem *pIVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  TObjectPtr<UObject>_u_0 *pTVar14;
  longlong *plVar15;
  wchar_t *pwVar16;
  undefined1 auStack_1b8 [32];
  undefined1 local_198 [8];
  FDelegateAllocation local_190;
  undefined8 local_180;
  longlong *local_178;
  TReferenceControllerBase<1> *local_170;
  longlong local_168 [2];
  FName local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  UObjectBase *local_128;
  undefined8 local_120;
  TSharedPtr<FUniqueNetId_const_,1> local_118;
  FDestructionSentinel local_108;
  FDestructionSentinel local_f0;
  FDelegateAllocation *local_d8;
  FName local_d0;
  FName local_c8;
  undefined1 local_c0 [8];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  local_168[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_168,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_168);
  }
  local_180 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_180,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_180);
  }
  lVar2 = local_168[0];
  uVar4 = local_180;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar7 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar7,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar8);
  local_b8._8_8_ = pUVar7;
  this = (UObjectBase *)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8)
  ;
  if (local_b8._64_8_ != 0) {
    plVar15 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar15 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  UObjectBase::AtomicallySetFlags(this,RF_StrongRefOnFrame);
  local_130 = uVar4;
  *(undefined1 *)&this[3]._padding_ = 1;
  if ((lVar2 == 0) || (lVar2 = *(longlong *)(lVar2 + 0x2c8), lVar2 == 0)) {
    local_138 = 0;
    FFrame::KismetExecutionMessage
              (L"ULeaderboardQueryCallbackProxy::TriggerFlush - Invalid player state",Warning,
               (FName)0x0);
  }
  else {
    FUniqueNetIdWrapper::GetV1((FUniqueNetIdWrapper *)(lVar2 + 0x2d0),&local_118);
    if (local_118.Object == (FUniqueNetId *)0x0) {
      local_140 = 0;
      pwVar16 = 
      L"ULeaderboardFlushCallbackProxy::TriggerFlush - Cannot map local player to unique net ID";
    }
    else {
      local_168[1] = 0;
      this_00 = FModuleManager::Get();
      pFVar9 = ::FName::FName(&local_d0,"OnlineSubsystem");
      bVar5 = FModuleManager::IsModuleLoaded(this_00,*pFVar9);
      if (bVar5) {
        pFVar9 = ::FName::FName(&local_c8,"OnlineSubsystem");
        pFVar10 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>(*pFVar9);
        cVar6 = (**(code **)(pFVar10->_padding_ + 0x70))(pFVar10,0);
        if (cVar6 != '\0') {
          local_158.ComparisonIndex.Value = 0;
          local_158.Number = 0;
          pIVar11 = IOnlineSubsystem::Get(&local_158);
          if (pIVar11 != (IOnlineSubsystem *)0x0) {
            (**(code **)(pIVar11->_padding_ + 0x60))(pIVar11,&local_178);
            if (local_178 == (longlong *)0x0) {
              local_150 = 0;
              FFrame::KismetExecutionMessage
                        (L"ULeaderboardFlushCallbackProxy::TriggerFlush - Leaderboards not supported by Online Subsystem"
                         ,Warning,(FName)0x0);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_170);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_118.SharedReferenceCount.ReferenceController);
            }
            else {
              local_198 = (undefined1  [8])0x0;
              local_190.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
              local_190.DelegateSize = 0;
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_198,
                         (FWriteAccessScope *)&local_f0);
              local_d8 = &local_190;
              puVar12 = UE::Core::Private::DelegateAllocate(0x28,&local_190);
              if (puVar12 != (undefined8 *)0x0) {
                *puVar12 = &
                           ___7__TCommonDelegateInstanceState___A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
                ;
                uVar13 = FDelegateHandle::GenerateNewID();
                puVar12[2] = uVar13;
                *puVar12 = &
                           ___7__TBaseUObjectMethodDelegateInstance__0A_VULeaderboardFlushCallbackProxy____A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
                ;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)this);
                }
                puVar12[3] = 0;
                local_128 = this;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)this);
                }
                FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar12 + 3),(FObjectPtr)&local_128);
                puVar12[4] = OnFlushCompleted;
              }
              if (local_f0.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f0.Accessor,&local_f0);
              }
              TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                        ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this[2].ObjectFlags,
                         (TDelegateBase<FNotThreadSafeDelegateMode> *)local_198);
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_198,
                         (FWriteAccessScope *)&local_108);
              if ((local_190.DelegateSize != 0) &&
                 (local_190.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
                (*(code *)**(undefined8 **)local_190.DelegateAllocator)();
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          ((ForAnyElementType *)&local_190,0,0,0x10);
                local_190.DelegateSize = 0;
              }
              if (local_108.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_108.Accessor,&local_108);
              }
              if (local_190.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
                FMemory::Free((void *)local_190.DelegateAllocator);
              }
              FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                        ((FMRSWRecursiveAccessDetector *)local_198);
              if ((local_178 == (longlong *)0x0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pTVar14 = (TObjectPtr<UObject>_u_0 *)
                        (**(code **)(*local_178 + 0x60))(local_178,local_c0,&this[2].ObjectFlags);
              this[2].OuterPrivate.ObjectPtr.field0_0x0 = *pTVar14;
              if ((local_178 == (longlong *)0x0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              (**(code **)(*local_178 + 0x58))(local_178,&local_130);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_170);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_118.SharedReferenceCount.ReferenceController);
            }
            goto LAB_14eca1d6f;
          }
        }
      }
      local_148 = 0;
      pwVar16 = 
      L"ULeaderboardFlushCallbackProxy::TriggerFlush - Invalid or uninitialized OnlineSubsystem";
    }
    FFrame::KismetExecutionMessage(pwVar16,Warning,(FName)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_118.SharedReferenceCount.ReferenceController);
  }
LAB_14eca1d6f:
  if ((char)this[3]._padding_ != '\0') {
    local_120 = local_130;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this[1].NamePrivate,
               &local_120);
  }
  *(UObjectBase **)param_3 = this;
  return;
}

