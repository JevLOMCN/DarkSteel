// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 49

// StaticClass @ 14ec46220

UClass * __cdecl UOnlineServicesEngineInterfaceImpl::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOnlineServicesEngineInterfaceImpl.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"OnlineServicesEngineInterfaceImpl",
               &Z_Registration_Info_UClass_UOnlineServicesEngineInterfaceImpl.InnerSingleton,
               StaticRegisterNativesUOnlineServicesEngineInterfaceImpl,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOnlineServicesEngineInterfaceImpl>,
               InternalVTableHelperCtorCaller<UOnlineServicesEngineInterfaceImpl>,local_res8,
               UOnlineEngineInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOnlineServicesEngineInterfaceImpl.InnerSingleton;
}

// UOnlineServicesEngineInterfaceImpl @ 14ec54d30

UOnlineServicesEngineInterfaceImpl * __thiscall
UOnlineServicesEngineInterfaceImpl::UOnlineServicesEngineInterfaceImpl
          (UOnlineServicesEngineInterfaceImpl *this,FVTableHelper *param_1)

{
  UOnlineEngineInterface::UOnlineEngineInterface((UOnlineEngineInterface *)this,param_1);
  *(undefined ***)this = &___7UOnlineServicesEngineInterfaceImpl__6B_;
  return this;
}

// UOnlineServicesEngineInterfaceImpl @ 14ec54d60

UOnlineServicesEngineInterfaceImpl * __thiscall
UOnlineServicesEngineInterfaceImpl::UOnlineServicesEngineInterfaceImpl
          (UOnlineServicesEngineInterfaceImpl *this,FObjectInitializer *param_1)

{
  UOnlineEngineInterface::UOnlineEngineInterface((UOnlineEngineInterface *)this,param_1);
  *(undefined ***)this = &___7UOnlineServicesEngineInterfaceImpl__6B_;
  return this;
}

// ~UOnlineServicesEngineInterfaceImpl @ 14ec57800

void __thiscall
UOnlineServicesEngineInterfaceImpl::~UOnlineServicesEngineInterfaceImpl
          (UOnlineServicesEngineInterfaceImpl *this)

{
  *(undefined ***)this = &___7UOnlineServicesEngineInterfaceImpl__6B_;
  UOnlineEngineInterface::~UOnlineEngineInterface((UOnlineEngineInterface *)this);
  return;
}

// operator() @ 14ec58c30

void __thiscall
`UOnlineServicesEngineInterfaceImpl::AutoLogin'::__l8::<lambda_1>::operator()
          (void *this,TOnlineResult<UE::Online::FAuthLogin> *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  FString *pFVar8;
  FString local_68;
  FScriptContainerElement *local_58;
  int local_50;
  int local_4c;
  FString local_48;
  FReadAccessScope local_38;
  
  bVar1 = param_1->field_0x30;
  if (1 < (ulonglong)bVar1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FAuthLogin::Result,UE::Online::FAuthLogin::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + (ulonglong)bVar1 + 4) == '\0') {
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar8 = &local_68;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    bVar6 = false;
    bVar7 = true;
  }
  else {
    bVar1 = param_1->field_0x30;
    if (1 < (ulonglong)bVar1) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FAuthLogin::Result,UE::Online::FAuthLogin::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + (ulonglong)bVar1 + 4) == '\0') {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsError()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineResult.h"
                         ,0x85,
                         L"It is an error to call GetErrorValue() on a TResult that does not hold an error value. Please either check IsError() or use TryGetErrorValue"
                        );
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (param_1->field_0x30 != '\x01') {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar8 = UE::Online::FOnlineError::GetLogString
                       ((FOnlineError *)&param_1->field_0x8,&local_48,true);
    bVar6 = true;
    bVar7 = false;
  }
  local_58 = (pFVar8->Data).AllocatorInstance.Data;
  (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50 = (pFVar8->Data).ArrayNum;
  local_4c = (pFVar8->Data).ArrayMax;
  (pFVar8->Data).ArrayNum = 0;
  (pFVar8->Data).ArrayMax = 0;
  if (bVar7) {
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  if ((bVar6) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  bVar1 = param_1->field_0x30;
  if (1 < (ulonglong)bVar1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar2 = *(undefined1 *)
           ((longlong)
            &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FAuthLogin::Result,UE::Online::FAuthLogin::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
             ::__l2::bIsSameType + (ulonglong)bVar1);
  uVar3 = *(undefined4 *)this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             &local_38);
  if ((*(int *)((longlong)this + 0x18) != 0) &&
     (plVar4 = *(longlong **)((longlong)this + 0x10), plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x68))(plVar4,uVar3,uVar2,&local_58);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  if (local_58 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// AutoLogin @ 14ec608f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UOnlineServicesEngineInterfaceImpl::AutoLogin
          (UOnlineServicesEngineInterfaceImpl *this,UWorld *param_1,int param_2,
          TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy> *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FPlatformUserId FVar4;
  IOnlineServicesEngineUtils *pIVar5;
  undefined4 extraout_var;
  undefined8 *puVar6;
  ulong64 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined1 auStack_178 [32];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_158;
  FDelegateAllocation local_150;
  FName local_140;
  undefined8 *local_138;
  TReferenceControllerBase<1> *local_130;
  undefined8 local_128;
  TSharedPtr<UE::Online::IOnlineServices,1> local_120;
  longlong *local_110;
  TReferenceControllerBase<1> *local_108;
  undefined1 local_100 [8];
  UOnlineServicesEngineInterfaceImpl *local_f8;
  int local_f0;
  undefined1 local_e8 [24];
  FDestructionSentinel local_d0;
  FDestructionSentinel local_b8;
  FDelegateAllocation *local_a0;
  undefined4 local_98;
  undefined8 local_94;
  void *local_88;
  undefined8 local_80;
  void *local_78;
  undefined8 uStack_70;
  byte local_60;
  FString *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_178;
  pIVar5 = UE::Online::GetServicesEngineUtils();
  if (pIVar5 == (IOnlineServicesEngineUtils *)0x0) {
    local_140.ComparisonIndex.Value = 0;
    local_140.Number = 0;
  }
  else {
    (**(code **)((longlong)*pIVar5 + 8))(pIVar5,&local_140,param_1);
  }
  local_128 = 0;
  UE::Online::GetServices(&local_120,Default,local_140,(FName)0x0);
  if (local_120.Object != (IOnlineServices *)0x0) {
    if ((local_120.Object == (IOnlineServices *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    (**(code **)(*(longlong *)local_120.Object + 0x20))(local_120.Object,&local_138);
    if (local_138 != (undefined8 *)0x0) {
      local_78 = (void *)0x0;
      uStack_70 = 0;
      local_94 = 0;
      local_88 = (void *)0x0;
      local_80 = 0;
      local_60 = 0;
      local_58 = (FString *)0x0;
      local_50 = 0;
      FVar4 = FGenericPlatformMisc::GetPlatformUserForUserIndex((int)local_100);
      local_98 = *(undefined4 *)CONCAT44(extraout_var,FVar4.InternalId);
      if ((local_138 == (undefined8 *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      (**(code **)*local_138)(local_138,&local_110);
      local_f0 = param_2;
      TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>::
      TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy> *)
                 local_e8,param_3);
      plVar9 = local_110;
      if ((local_110 == (longlong *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), plVar9 = local_110, bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      local_158.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_150.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_150.DelegateSize = 0;
      pcVar1 = *(code **)(*plVar9 + 0x28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_158,(FWriteAccessScope *)&local_b8);
      local_a0 = &local_150;
      puVar6 = UE::Core::Private::DelegateAllocate(0x40,&local_150);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEBV__TOnlineResult_UFAuthLogin_Online_UE___Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar7 = FDelegateHandle::GenerateNewID();
        puVar6[2] = uVar7;
        *puVar6 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Online::TOnlineResult<UE::Online::FAuthLogin>_const_&),FDefaultDelegateUserPolicy,`UOnlineServicesEngineInterfaceImpl::AutoLogin'::`8'::<lambda_1>_>
                   ::_vftable_;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UOnlineServicesEngineInterfaceImpl *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar6[3] = 0;
        local_f8 = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UOnlineServicesEngineInterfaceImpl *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_f8);
        *(int *)(puVar6 + 4) = local_f0;
        TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>::
        TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>
                  ((TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy> *)
                   (puVar6 + 5),
                   (TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy> *)
                   local_e8);
      }
      if (local_b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
      }
      (*pcVar1)(plVar9,&local_158);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_158,(FWriteAccessScope *)&local_d0);
      if ((local_150.DelegateSize != 0) &&
         (local_150.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_150.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_150,0,0,0x10);
        local_150.DelegateSize = 0;
      }
      if (local_d0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
      }
      if (local_150.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_150.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_158.AccessDetector);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e8);
      if ((void *)local_e8._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_e8._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_e8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_108)
      ;
      DestructItems<FString,int>(local_58,(int)local_50);
      if (local_58 != (FString *)0x0) {
        FMemory::Free(local_58);
      }
      uVar8 = (ulonglong)local_60;
      if ((1 < local_60) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,UE::Online::FExternalAuthToken>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8] ==
          UE::Core::Private::TDestructorCaller<FString>::Destruct) {
        if (local_78 != (void *)0x0) {
          FMemory::Free(local_78);
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,UE::Online::FExternalAuthToken>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8])(&local_78);
      }
      if (local_88 != (void *)0x0) {
        FMemory::Free(local_88);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_130)
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_120.SharedReferenceCount.ReferenceController);
      return true;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_130);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_120.SharedReferenceCount.ReferenceController);
  return false;
}

// BindToExternalUIOpening @ 14ec60ff0

void __thiscall
UOnlineServicesEngineInterfaceImpl::BindToExternalUIOpening
          (UOnlineServicesEngineInterfaceImpl *this,
          TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *param_1)

{
  IOnlineServicesEngineUtils *pIVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  UOnlineServicesEngineInterfaceImpl *local_res18;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  undefined1 local_50 [8];
  ForAnyElementType local_48;
  int local_40;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pIVar1 = UE::Online::GetServicesEngineUtils();
  if (pIVar1 != (IOnlineServicesEngineUtils *)0x0) {
    local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    local_50 = (undefined1  [8])0x0;
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40 = 0;
    TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)local_50,param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_38);
    local_20 = &local_60;
    puVar2 = UE::Core::Private::DelegateAllocate(0x38,&local_60);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UOnlineServicesEngineInterfaceImpl::BindToExternalUIOpening'::`5'::<lambda_1>_>
                 ::_vftable_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UOnlineServicesEngineInterfaceImpl *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res18 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UOnlineServicesEngineInterfaceImpl *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res18);
      puVar2[4] = 0;
      puVar2[5] = 0;
      *(undefined4 *)(puVar2 + 6) = 0;
      TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)(puVar2 + 4),
                 (TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)local_50);
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_50,
               (FWriteAccessScope *)&local_38);
    if ((local_40 != 0) && (local_48.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_48.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,0x10);
      local_40 = 0;
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_50);
    (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1,&local_68);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_38);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_60,0,0,0x10);
      local_60.DelegateSize = 0;
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
    if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_60.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  }
  return;
}

// ClearVoicePackets @ 14ec62b80

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
UOnlineServicesEngineInterfaceImpl::ClearVoicePackets
          (UOnlineServicesEngineInterfaceImpl *this,UWorld *param_1)

{
  return;
}

// CloseWebURL @ 14ec64250

bool __thiscall
UOnlineServicesEngineInterfaceImpl::CloseWebURL(UOnlineServicesEngineInterfaceImpl *this)

{
  int iVar1;
  FOnlineServicesRegistry *this_00;
  ForAnyElementType FVar2;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar3;
  undefined1 local_res10 [8];
  TArray<TSharedRef<UE::Online::IOnlineServices,1>,TSizedDefaultAllocator<32>_> local_28;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  this_00 = UE::Online::FOnlineServicesRegistry::Get();
  UE::Online::FOnlineServicesRegistry::GetAllServicesInstances(this_00,&local_28);
  iVar1 = local_28.ArrayNum;
  pTVar3 = (TSharedRef<UE::Online::IOnlineServices,1> *)
           (local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 0x10);
  FVar2.Data = local_28.AllocatorInstance.Data;
  while( true ) {
    if (local_28.ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<UE::Online::IOnlineServices,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if ((TSharedRef<UE::Online::IOnlineServices,1> *)FVar2.Data == pTVar3) break;
    (**(code **)(*(longlong *)((TSharedRef<UE::Online::IOnlineServices,1> *)FVar2.Data)->Object +
                0x48))(((TSharedRef<UE::Online::IOnlineServices,1> *)FVar2.Data)->Object,local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
    FVar2.Data = FVar2.Data + 0x10;
  }
  DestructItems<TSharedRef<UE::Online::IOnlineServices,1>,int>
            ((TSharedRef<UE::Online::IOnlineServices,1> *)local_28.AllocatorInstance.Data,
             local_28.ArrayNum);
  if ((TSharedRef<UE::Online::IOnlineServices,1> *)local_28.AllocatorInstance.Data !=
      (TSharedRef<UE::Online::IOnlineServices,1> *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return false;
}

// CreateUniquePlayerIdWrapper @ 14ec6b0a0

FUniqueNetIdWrapper * __thiscall
UOnlineServicesEngineInterfaceImpl::CreateUniquePlayerIdWrapper
          (UOnlineServicesEngineInterfaceImpl *this,FUniqueNetIdWrapper *__return_storage_ptr__,
          FString *param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  FUniqueNetIdWrapper *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\OnlineServicesEngineInterfaceImpl.cpp"
                     ,0x5a,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FUniqueNetIdWrapper *)(*pcVar1)();
    return pFVar3;
  }
  *(undefined4 *)&(__return_storage_ptr__->Variant).field_0x11 = 0;
  *(undefined2 *)&(__return_storage_ptr__->Variant).field_0x15 = 0;
  (__return_storage_ptr__->Variant).field_0x17 = 0;
  __return_storage_ptr__->_padding_ = (longlong)&___7FUniqueNetIdWrapper__6B_;
  (__return_storage_ptr__->Variant)._padding_ = 0;
  (__return_storage_ptr__->Variant)._padding_ = 0;
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// DestroyOnlineSubsystem @ 14ec6c7a0

void __thiscall
UOnlineServicesEngineInterfaceImpl::DestroyOnlineSubsystem
          (UOnlineServicesEngineInterfaceImpl *this,FName param_1)

{
  return;
}

// DoesInstanceExist @ 14ec6cda0

bool __thiscall
UOnlineServicesEngineInterfaceImpl::DoesInstanceExist
          (UOnlineServicesEngineInterfaceImpl *this,FName param_1)

{
  bool bVar1;
  
  bVar1 = UE::Online::IsLoaded(Default,param_1,(FName)0x0);
  return bVar1;
}

// DoesSessionExist @ 14ec6ce70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UOnlineServicesEngineInterfaceImpl::DoesSessionExist
          (UOnlineServicesEngineInterfaceImpl *this,UWorld *param_1,FName param_2)

{
  return false;
}

// DumpChatState @ 14ec6cf20

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
UOnlineServicesEngineInterfaceImpl::DumpChatState
          (UOnlineServicesEngineInterfaceImpl *this,UWorld *param_1)

{
  return;
}

// DumpPartyState @ 14ec6cfd0

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
UOnlineServicesEngineInterfaceImpl::DumpPartyState
          (UOnlineServicesEngineInterfaceImpl *this,UWorld *param_1)

{
  return;
}

// DumpSessionState @ 14ec6d080

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
UOnlineServicesEngineInterfaceImpl::DumpSessionState
          (UOnlineServicesEngineInterfaceImpl *this,UWorld *param_1)

{
  return;
}

// DumpVoiceState @ 14ec6d1b0

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
UOnlineServicesEngineInterfaceImpl::DumpVoiceState
          (UOnlineServicesEngineInterfaceImpl *this,UWorld *param_1)

{
  return;
}

// EndSession @ 14ec6dfb0

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
UOnlineServicesEngineInterfaceImpl::EndSession
          (UOnlineServicesEngineInterfaceImpl *this,UWorld *param_1,FName param_2,
          TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *param_3)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,&local_28);
  if ((*(int *)&param_3->field_0x10 != 0) &&
     (plVar1 = *(longlong **)&param_3->field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_2,0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// GetDefaultOnlineSubsystemName @ 14ec75050

FName __thiscall
UOnlineServicesEngineInterfaceImpl::GetDefaultOnlineSubsystemName
          (UOnlineServicesEngineInterfaceImpl *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetLocalPacket @ 14ec75960

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSharedPtr<FVoicePacket,1> * __thiscall
UOnlineServicesEngineInterfaceImpl::GetLocalPacket
          (UOnlineServicesEngineInterfaceImpl *this,
          TSharedPtr<FVoicePacket,1> *__return_storage_ptr__,UWorld *param_1,uchar param_2)

{
  __return_storage_ptr__->Object = (FVoicePacket *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetNumLocalTalkers @ 14ec76010

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
UOnlineServicesEngineInterfaceImpl::GetNumLocalTalkers
          (UOnlineServicesEngineInterfaceImpl *this,UWorld *param_1)

{
  return 0;
}

// GetOnlineIdentifier @ 14ec76500

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FName __thiscall
UOnlineServicesEngineInterfaceImpl::GetOnlineIdentifier
          (UOnlineServicesEngineInterfaceImpl *this,UWorld *param_1)

{
  IOnlineServicesEngineUtils *pIVar1;
  
  pIVar1 = UE::Online::GetServicesEngineUtils();
  if (pIVar1 != (IOnlineServicesEngineUtils *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,param_1);
    return (FName)param_1;
  }
  param_1->_padding_ = 0;
  return (FName)param_1;
}

// GetOnlineIdentifier @ 14ec76560

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FName __thiscall
UOnlineServicesEngineInterfaceImpl::GetOnlineIdentifier
          (UOnlineServicesEngineInterfaceImpl *this,FWorldContext *param_1)

{
  IOnlineServicesEngineUtils *pIVar1;
  
  pIVar1 = UE::Online::GetServicesEngineUtils();
  if (pIVar1 != (IOnlineServicesEngineUtils *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1,param_1);
    return (FName)param_1;
  }
  *(undefined8 *)param_1 = 0;
  return (FName)param_1;
}

// GetPlayerNickname @ 14ec76830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __thiscall
UOnlineServicesEngineInterfaceImpl::GetPlayerNickname
          (UOnlineServicesEngineInterfaceImpl *this,FString *__return_storage_ptr__,UWorld *param_1,
          FUniqueNetIdWrapper *param_2)

{
  int *piVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  IOnlineServicesEngineUtils *pIVar5;
  FSchemaVariant *this_00;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStackY_118 [32];
  undefined4 local_d8 [2];
  FName local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  TReferenceControllerBase<1> *local_b8;
  TSharedPtr<UE::Online::IOnlineServices,1> local_b0;
  FString local_a0;
  FString local_90;
  undefined1 local_80 [8];
  longlong local_78 [5];
  byte local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_118;
  bVar3 = FUniqueNetIdWrapper::IsValid(param_2);
  if (bVar3) {
    uVar7 = (ulonglong)(param_2->Variant).TypeIndex;
    if ((1 < uVar7) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<struct_UE::Online::OnlineIdHandleTags::FAccount>_>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar7) != '\0') goto LAB_14ec768da;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("UniqueId.IsValid() && UniqueId.IsV2()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\OnlineServicesEngineInterfaceImpl.cpp"
                     ,0x74,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar2)();
    return pFVar4;
  }
LAB_14ec768da:
  pIVar5 = UE::Online::GetServicesEngineUtils();
  if (pIVar5 == (IOnlineServicesEngineUtils *)0x0) {
    local_d0.ComparisonIndex.Value = 0;
    local_d0.Number = 0;
  }
  else {
    (**(code **)((longlong)*pIVar5 + 8))(pIVar5,&local_d0,param_1);
  }
  local_c8 = 0;
  UE::Online::GetServices(&local_b0,Default,local_d0,(FName)0x0);
  if (local_b0.Object != (IOnlineServices *)0x0) {
    if ((local_b0.Object == (IOnlineServices *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
    (**(code **)(*(longlong *)local_b0.Object + 0x20))();
    if (local_c0 != (longlong *)0x0) {
      uVar7 = (ulonglong)(param_2->Variant).TypeIndex;
      local_d8[0] = 0;
      if ((1 < uVar7) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0x12f,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FString *)(*pcVar2)();
        return pFVar4;
      }
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<struct_UE::Online::OnlineIdHandleTags::FAccount>_>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + uVar7) == '\0') {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8098327459864248889>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreOnline\\Public\\Online\\CoreOnline.h"
                           ,0x239,"IsV2()");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar4 = (FString *)(*pcVar2)();
          return pFVar4;
        }
      }
      else {
        if (((param_2->Variant).TypeIndex != '\x01') &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index == TypeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                               ,0x97,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar4 = (FString *)(*pcVar2)();
          return pFVar4;
        }
        local_d8[0] = (undefined4)(param_2->Variant)._padding_;
      }
      if ((local_c0 == (longlong *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FString *)(*pcVar2)();
        return pFVar4;
      }
      (**(code **)(*local_c0 + 0x58))(local_c0,local_80,local_d8);
      uVar7 = (ulonglong)local_50;
      if ((1 < uVar7) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0x12f,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FString *)(*pcVar2)();
        return pFVar4;
      }
      uVar8 = (ulonglong)local_50;
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FAuthGetLocalOnlineUserByPlatformUserId::Result,UE::Online::FAuthGetLocalOnlineUserByPlatformUserId::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + uVar7 + 4) != '\0') {
        if ((1 < uVar8) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0x12f,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar4 = (FString *)(*pcVar2)();
          return pFVar4;
        }
        if ((*(char *)((longlong)
                       &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FAuthGetLocalOnlineUserByPlatformUserId::Result,UE::Online::FAuthGetLocalOnlineUserByPlatformUserId::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                        ::__l2::bIsSameType + uVar8 + 4) == '\0') &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsOk()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineResult.h"
                               ,0x7e,
                               L"It is an error to call GetOkValue() on a TResult that does not hold an ok value. Please either check IsOk() or use TryGetOkValue"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar4 = (FString *)(*pcVar2)();
          return pFVar4;
        }
        if ((local_50 != 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index == TypeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                               ,0x97,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar4 = (FString *)(*pcVar2)();
          return pFVar4;
        }
        this_00 = TMapBase<FName,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>_>
                  ::Find((TMapBase<FName,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>_>
                          *)(local_78[0] + 0x10),UE::Online::AccountAttributeData::DisplayName);
        if (this_00 == (FSchemaVariant *)0x0) {
          local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_a0.Data.ArrayNum = 0;
          local_a0.Data.ArrayMax = 0;
          ::FString::FString(__return_storage_ptr__,&local_a0);
          local_90.Data.AllocatorInstance.Data = local_a0.Data.AllocatorInstance.Data;
        }
        else {
          pFVar4 = UE::Online::FSchemaVariant::GetString(this_00);
          pFVar4 = ::FString::FString(&local_90,pFVar4);
          ::FString::FString(__return_storage_ptr__,pFVar4);
        }
        if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
        }
        if ((1 < local_50) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar4 = (FString *)(*pcVar2)();
          return pFVar4;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FAuthGetLocalOnlineUserByOnlineAccountId::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[local_50])(local_78);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_b8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_b0.SharedReferenceCount.ReferenceController);
        return __return_storage_ptr__;
      }
      if ((1 < local_50) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FString *)(*pcVar2)();
        return pFVar4;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FAuthGetLocalOnlineUserByOnlineAccountId::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8])(local_78);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b0.SharedReferenceCount.ReferenceController);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(&InvalidName,L"InvalidOSSUser");
    atexit(`UOnlineServicesEngineInterfaceImpl::GetPlayerNickname'::__l2::
           _dynamic_atexit_destructor_for__InvalidName__);
    _Init_thread_footer(&::_TSS0);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  _Src = InvalidName.Data.AllocatorInstance;
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  iVar6 = InvalidName.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar6,0,(ForAnyElementType *)__return_storage_ptr__,iVar6,piVar1);
    memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src.Data,(longlong)iVar6 * 2);
  }
  return __return_storage_ptr__;
}

// GetPlayerPlatformNickname @ 14ec76ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UOnlineServicesEngineInterfaceImpl::GetPlayerPlatformNickname
          (UOnlineServicesEngineInterfaceImpl *this,UWorld *param_1,int param_2,FString *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  IOnlineServicesEngineUtils *pIVar5;
  Result *pRVar6;
  FSchemaVariant *this_00;
  FString *pFVar7;
  ulonglong uVar8;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  FName local_a0;
  longlong *local_98;
  TReferenceControllerBase<1> *local_90;
  undefined8 local_88;
  TSharedPtr<UE::Online::IOnlineServices,1> local_80;
  TResult<UE::Online::FAuthGetLocalOnlineUserByPlatformUserId::Result,UE::Online::FOnlineError>
  local_70;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pIVar5 = UE::Online::GetServicesEngineUtils();
  if (pIVar5 == (IOnlineServicesEngineUtils *)0x0) {
    local_a0.ComparisonIndex.Value = 0;
    local_a0.Number = 0;
  }
  else {
    (**(code **)((longlong)*pIVar5 + 8))(pIVar5,&local_a0,param_1);
  }
  local_88 = 0;
  UE::Online::GetServices(&local_80,Platform,local_a0,(FName)0x0);
  if (local_80.Object != (IOnlineServices *)0x0) {
    if ((local_80.Object == (IOnlineServices *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    (**(code **)(*(longlong *)local_80.Object + 0x20))(local_80.Object,&local_98);
    if (local_98 != (longlong *)0x0) {
      FGenericPlatformMisc::GetPlatformUserForUserIndex((int)local_a8);
      if ((local_98 == (longlong *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      (**(code **)(*local_98 + 0x60))(local_98,&local_70,local_a8);
      uVar8 = (ulonglong)local_70.Storage.TypeIndex;
      if ((1 < uVar8) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0x12f,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FAuthGetLocalOnlineUserByPlatformUserId::Result,UE::Online::FAuthGetLocalOnlineUserByPlatformUserId::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + uVar8) != '\0') {
        pRVar6 = UE::Online::
                 TResult<UE::Online::FAuthGetLocalOnlineUserByPlatformUserId::Result,UE::Online::FOnlineError>
                 ::GetOkValue(&local_70);
        this_00 = TMapBase<FName,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>_>
                  ::Find((TMapBase<FName,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>_>
                          *)&((pRVar6->AccountInfo).Object)->Attributes,
                         UE::Online::AccountAttributeData::DisplayName);
        if (this_00 != (FSchemaVariant *)0x0) {
          pFVar7 = UE::Online::FSchemaVariant::GetString(this_00);
          ::FString::operator=(param_3,pFVar7);
        }
        iVar1 = (param_3->Data).ArrayNum;
        if ((1 < local_70.Storage.TypeIndex) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FAuthGetLocalOnlineUserByPlatformUserId::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[local_70.Storage.TypeIndex])(&local_70.Storage);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_90);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_80.SharedReferenceCount.ReferenceController);
        return 1 < iVar1;
      }
      if ((1 < local_70.Storage.TypeIndex) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FAuthGetLocalOnlineUserByPlatformUserId::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_70.Storage.TypeIndex])(&local_70.Storage);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_80.SharedReferenceCount.ReferenceController);
  return false;
}

// GetPrivateStaticClass @ 14ec78930

UClass * __cdecl UOnlineServicesEngineInterfaceImpl::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOnlineServicesEngineInterfaceImpl.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"OnlineServicesEngineInterfaceImpl",
               &Z_Registration_Info_UClass_UOnlineServicesEngineInterfaceImpl.InnerSingleton,
               StaticRegisterNativesUOnlineServicesEngineInterfaceImpl,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOnlineServicesEngineInterfaceImpl>,
               InternalVTableHelperCtorCaller<UOnlineServicesEngineInterfaceImpl>,local_res8,
               UOnlineEngineInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOnlineServicesEngineInterfaceImpl.InnerSingleton;
}

// GetReplicationHashForSubsystem @ 14ec78b10

uchar __thiscall
UOnlineServicesEngineInterfaceImpl::GetReplicationHashForSubsystem
          (UOnlineServicesEngineInterfaceImpl *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uchar uVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\OnlineServicesEngineInterfaceImpl.cpp"
                     ,0x4c,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return '\0';
}

// GetResolvedConnectString @ 14ec78c40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UOnlineServicesEngineInterfaceImpl::GetResolvedConnectString
          (UOnlineServicesEngineInterfaceImpl *this,UWorld *param_1,FName param_2,FString *param_3)

{
  return false;
}

// GetSessionJoinability @ 14ec78f60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UOnlineServicesEngineInterfaceImpl::GetSessionJoinability
          (UOnlineServicesEngineInterfaceImpl *this,UWorld *param_1,FName param_2,
          FJoinabilitySettings *param_3)

{
  return false;
}

// GetSubsystemFromReplicationHash @ 14ec790b0

FName __thiscall
UOnlineServicesEngineInterfaceImpl::GetSubsystemFromReplicationHash
          (UOnlineServicesEngineInterfaceImpl *this,uchar param_1)

{
  code *pcVar1;
  bool bVar2;
  FName FVar3;
  undefined7 in_register_00000011;
  
  FVar3._1_7_ = in_register_00000011;
  FVar3.ComparisonIndex.Value._0_1_ = param_1;
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\OnlineServicesEngineInterfaceImpl.cpp"
                     ,0x53,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    FVar3 = (FName)(*pcVar1)();
    return FVar3;
  }
  *(undefined8 *)FVar3 = 0;
  return FVar3;
}

// GetUniquePlayerIdWrapper @ 14ec797c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FUniqueNetIdWrapper * __thiscall
UOnlineServicesEngineInterfaceImpl::GetUniquePlayerIdWrapper
          (UOnlineServicesEngineInterfaceImpl *this,FUniqueNetIdWrapper *__return_storage_ptr__,
          UWorld *param_1,int param_2,FName param_3)

{
  FAccountInfo *pFVar1;
  code *pcVar2;
  bool bVar3;
  IOnlineServicesEngineUtils *pIVar4;
  FUniqueNetIdWrapper *pFVar5;
  Result *pRVar6;
  ulonglong uVar7;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  FName local_a0;
  longlong *local_98;
  TReferenceControllerBase<1> *local_90;
  undefined8 local_88;
  TSharedPtr<UE::Online::IOnlineServices,1> local_80;
  TResult<UE::Online::FAuthGetLocalOnlineUserByPlatformUserId::Result,UE::Online::FOnlineError>
  local_70;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pIVar4 = UE::Online::GetServicesEngineUtils();
  if (pIVar4 == (IOnlineServicesEngineUtils *)0x0) {
    local_a0.ComparisonIndex.Value = 0;
    local_a0.Number = 0;
  }
  else {
    (**(code **)((longlong)*pIVar4 + 8))(pIVar4,&local_a0,param_1);
  }
  local_88 = 0;
  UE::Online::GetServices(&local_80,Default,local_a0,(FName)0x0);
  if (local_80.Object != (IOnlineServices *)0x0) {
    if ((local_80.Object == (IOnlineServices *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FUniqueNetIdWrapper *)(*pcVar2)();
      return pFVar5;
    }
    (**(code **)(*(longlong *)local_80.Object + 0x20))(local_80.Object,&local_98);
    if (local_98 != (longlong *)0x0) {
      FGenericPlatformMisc::GetPlatformUserForUserIndex((int)local_a8);
      if ((local_98 == (longlong *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FUniqueNetIdWrapper *)(*pcVar2)();
        return pFVar5;
      }
      (**(code **)(*local_98 + 0x60))(local_98,&local_70,local_a8);
      uVar7 = (ulonglong)local_70.Storage.TypeIndex;
      if ((1 < uVar7) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0x12f,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FUniqueNetIdWrapper *)(*pcVar2)();
        return pFVar5;
      }
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FAuthGetLocalOnlineUserByPlatformUserId::Result,UE::Online::FAuthGetLocalOnlineUserByPlatformUserId::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + uVar7) != '\0') {
        pRVar6 = UE::Online::
                 TResult<UE::Online::FAuthGetLocalOnlineUserByPlatformUserId::Result,UE::Online::FOnlineError>
                 ::GetOkValue(&local_70);
        pFVar1 = (pRVar6->AccountInfo).Object;
        __return_storage_ptr__->_padding_ = (longlong)&___7FUniqueNetIdWrapper__6B_;
        (__return_storage_ptr__->Variant)._padding_ = 0;
        (__return_storage_ptr__->Variant)._padding_ = 0;
        (__return_storage_ptr__->Variant).TypeIndex = '\0';
        TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
        ::
        Emplace<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_const_&>
                  (&__return_storage_ptr__->Variant,&pFVar1->AccountId);
        if ((1 < local_70.Storage.TypeIndex) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FUniqueNetIdWrapper *)(*pcVar2)();
          return pFVar5;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FAuthGetLocalOnlineUserByPlatformUserId::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[local_70.Storage.TypeIndex])(&local_70.Storage);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_90);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_80.SharedReferenceCount.ReferenceController);
        return __return_storage_ptr__;
      }
      if ((1 < local_70.Storage.TypeIndex) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FUniqueNetIdWrapper *)(*pcVar2)();
        return pFVar5;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FAuthGetLocalOnlineUserByPlatformUserId::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_70.Storage.TypeIndex])(&local_70.Storage);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_80.SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(__return_storage_ptr__->Variant).field_0x11 = 0;
  *(undefined2 *)&(__return_storage_ptr__->Variant).field_0x15 = 0;
  (__return_storage_ptr__->Variant).field_0x17 = 0;
  __return_storage_ptr__->_padding_ = (longlong)&___7FUniqueNetIdWrapper__6B_;
  (__return_storage_ptr__->Variant)._padding_ = 0;
  (__return_storage_ptr__->Variant)._padding_ = 0;
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// IsCompatibleUniqueNetId @ 14ec81520

bool __thiscall
UOnlineServicesEngineInterfaceImpl::IsCompatibleUniqueNetId
          (UOnlineServicesEngineInterfaceImpl *this,FUniqueNetIdWrapper *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(param_1->Variant).TypeIndex;
  if (1 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (bool)*(undefined1 *)
                ((longlong)
                 &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<struct_UE::Online::OnlineIdHandleTags::FAccount>_>::IsSame(unsigned___int64)'
                  ::__l2::bIsSameType + uVar4);
}

// IsLoaded @ 14ec81600

bool __thiscall
UOnlineServicesEngineInterfaceImpl::IsLoaded(UOnlineServicesEngineInterfaceImpl *this,FName param_1)

{
  bool bVar1;
  
  bVar1 = UE::Online::IsLoaded(Default,param_1,(FName)0x0);
  return bVar1;
}

// IsLoggedIn @ 14ec816d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UOnlineServicesEngineInterfaceImpl::IsLoggedIn
          (UOnlineServicesEngineInterfaceImpl *this,UWorld *param_1,int param_2)

{
  ELoginStatus EVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  IOnlineServicesEngineUtils *pIVar5;
  Result *pRVar6;
  ulonglong uVar7;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [8];
  FName local_90;
  longlong *local_88;
  TReferenceControllerBase<1> *local_80;
  undefined8 local_78;
  TSharedPtr<UE::Online::IOnlineServices,1> local_70;
  TResult<UE::Online::FAuthGetLocalOnlineUserByPlatformUserId::Result,UE::Online::FOnlineError>
  local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pIVar5 = UE::Online::GetServicesEngineUtils();
  if (pIVar5 == (IOnlineServicesEngineUtils *)0x0) {
    local_90.ComparisonIndex.Value = 0;
    local_90.Number = 0;
  }
  else {
    (**(code **)((longlong)*pIVar5 + 8))(pIVar5,&local_90,param_1);
  }
  local_78 = 0;
  UE::Online::GetServices(&local_70,Default,local_90,(FName)0x0);
  if (local_70.Object != (IOnlineServices *)0x0) {
    if ((local_70.Object == (IOnlineServices *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    (**(code **)(*(longlong *)local_70.Object + 0x20))(local_70.Object,&local_88);
    if (local_88 != (longlong *)0x0) {
      FGenericPlatformMisc::GetPlatformUserForUserIndex((int)local_98);
      if ((local_88 == (longlong *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      (**(code **)(*local_88 + 0x60))(local_88,&local_60,local_98);
      uVar7 = (ulonglong)local_60.Storage.TypeIndex;
      if ((1 < uVar7) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0x12f,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FAuthGetLocalOnlineUserByPlatformUserId::Result,UE::Online::FAuthGetLocalOnlineUserByPlatformUserId::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + uVar7) != '\0') {
        pRVar6 = UE::Online::
                 TResult<UE::Online::FAuthGetLocalOnlineUserByPlatformUserId::Result,UE::Online::FOnlineError>
                 ::GetOkValue(&local_60);
        EVar1 = ((pRVar6->AccountInfo).Object)->LoginStatus;
        if ((1 < local_60.Storage.TypeIndex) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FAuthGetLocalOnlineUserByPlatformUserId::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[local_60.Storage.TypeIndex])(&local_60.Storage);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_80);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_70.SharedReferenceCount.ReferenceController);
        return EVar1 == LoggedIn;
      }
      if ((1 < local_60.Storage.TypeIndex) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FAuthGetLocalOnlineUserByPlatformUserId::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_60.Storage.TypeIndex])(&local_60.Storage);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_70.SharedReferenceCount.ReferenceController);
  return false;
}

// MuteRemoteTalker @ 14ec82fd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UOnlineServicesEngineInterfaceImpl::MuteRemoteTalker
          (UOnlineServicesEngineInterfaceImpl *this,UWorld *param_1,uchar param_2,
          FUniqueNetIdWrapper *param_3,bool param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  
  bVar2 = FUniqueNetIdWrapper::IsValid(param_3);
  if (bVar2) {
    uVar4 = (ulonglong)(param_3->Variant).TypeIndex;
    if ((1 < uVar4) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<struct_UE::Online::OnlineIdHandleTags::FAccount>_>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar4) != '\0') {
      return false;
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("PlayerId.IsValid() && PlayerId.IsV2()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\OnlineServicesEngineInterfaceImpl.cpp"
                     ,0x120,L"");
  if (!bVar2) {
    return false;
  }
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return (bool)uVar3;
}

// RegisterPlayer @ 14ec90810

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
UOnlineServicesEngineInterfaceImpl::RegisterPlayer
          (UOnlineServicesEngineInterfaceImpl *this,UWorld *param_1,FName param_2,
          FUniqueNetIdWrapper *param_3,bool param_4)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  
  bVar2 = FUniqueNetIdWrapper::IsValid(param_3);
  if (bVar2) {
    uVar3 = (ulonglong)(param_3->Variant).TypeIndex;
    if ((1 < uVar3) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<struct_UE::Online::OnlineIdHandleTags::FAccount>_>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar3) != '\0') {
      return;
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("UniqueId.IsValid() && UniqueId.IsV2()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\OnlineServicesEngineInterfaceImpl.cpp"
                     ,0xea,L"");
  if (!bVar2) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// SerializeRemotePacket @ 14ec965e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSharedPtr<FVoicePacket,1> * __thiscall
UOnlineServicesEngineInterfaceImpl::SerializeRemotePacket
          (UOnlineServicesEngineInterfaceImpl *this,
          TSharedPtr<FVoicePacket,1> *__return_storage_ptr__,UWorld *param_1,UNetConnection *param_2
          ,FArchive *param_3)

{
  __return_storage_ptr__->Object = (FVoicePacket *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// ShowAchievementsUI @ 14ec98600

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
UOnlineServicesEngineInterfaceImpl::ShowAchievementsUI
          (UOnlineServicesEngineInterfaceImpl *this,UWorld *param_1,int param_2)

{
  int iVar1;
  FOnlineServicesRegistry *this_00;
  ForAnyElementType FVar2;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar3;
  undefined1 local_res20 [8];
  TArray<TSharedRef<UE::Online::IOnlineServices,1>,TSizedDefaultAllocator<32>_> local_28;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  this_00 = UE::Online::FOnlineServicesRegistry::Get();
  UE::Online::FOnlineServicesRegistry::GetAllServicesInstances(this_00,&local_28);
  iVar1 = local_28.ArrayNum;
  pTVar3 = (TSharedRef<UE::Online::IOnlineServices,1> *)
           (local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 0x10);
  FVar2.Data = local_28.AllocatorInstance.Data;
  while( true ) {
    if (local_28.ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<UE::Online::IOnlineServices,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if ((TSharedRef<UE::Online::IOnlineServices,1> *)FVar2.Data == pTVar3) break;
    (**(code **)(*(longlong *)((TSharedRef<UE::Online::IOnlineServices,1> *)FVar2.Data)->Object +
                0x48))(((TSharedRef<UE::Online::IOnlineServices,1> *)FVar2.Data)->Object,local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
    FVar2.Data = FVar2.Data + 0x10;
  }
  DestructItems<TSharedRef<UE::Online::IOnlineServices,1>,int>
            ((TSharedRef<UE::Online::IOnlineServices,1> *)local_28.AllocatorInstance.Data,
             local_28.ArrayNum);
  if ((TSharedRef<UE::Online::IOnlineServices,1> *)local_28.AllocatorInstance.Data !=
      (TSharedRef<UE::Online::IOnlineServices,1> *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// ShowLeaderboardUI @ 14ec98760

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
UOnlineServicesEngineInterfaceImpl::ShowLeaderboardUI
          (UOnlineServicesEngineInterfaceImpl *this,UWorld *param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  IOnlineServicesEngineUtils *pIVar3;
  FName local_res20;
  TSharedPtr<UE::Online::IOnlineServices,1> local_30;
  undefined1 local_20 [8];
  TReferenceControllerBase<1> *local_18;
  
  pIVar3 = UE::Online::GetServicesEngineUtils();
  if (pIVar3 == (IOnlineServicesEngineUtils *)0x0) {
    local_res20.ComparisonIndex.Value = 0;
    local_res20.Number = 0;
  }
  else {
    (**(code **)((longlong)*pIVar3 + 8))(pIVar3,&local_res20,param_1);
  }
  UE::Online::GetServices(&local_30,Default,local_res20,(FName)0x0);
  if (local_30.Object != (IOnlineServices *)0x0) {
    if ((local_30.Object == (IOnlineServices *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (**(code **)(*(longlong *)local_30.Object + 0x48))(local_30.Object,local_20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.SharedReferenceCount.ReferenceController);
  return;
}

// ShowWebURL @ 14ec989d0

void __thiscall
UOnlineServicesEngineInterfaceImpl::ShowWebURL
          (UOnlineServicesEngineInterfaceImpl *this,FString *param_1,FShowWebUrlParams *param_2,
          TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy> *param_3)

{
  int iVar1;
  FOnlineServicesRegistry *this_00;
  ForAnyElementType FVar2;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar3;
  undefined1 local_38 [8];
  TArray<TSharedRef<UE::Online::IOnlineServices,1>,TSizedDefaultAllocator<32>_> local_30;
  undefined1 local_20 [8];
  TReferenceControllerBase<1> *local_18;
  
  local_30.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.ArrayNum = 0;
  local_30.ArrayMax = 0;
  this_00 = UE::Online::FOnlineServicesRegistry::Get();
  UE::Online::FOnlineServicesRegistry::GetAllServicesInstances(this_00,&local_30);
  iVar1 = local_30.ArrayNum;
  pTVar3 = (TSharedRef<UE::Online::IOnlineServices,1> *)
           (local_30.AllocatorInstance.Data + (longlong)local_30.ArrayNum * 0x10);
  FVar2.Data = local_30.AllocatorInstance.Data;
  while( true ) {
    if (local_30.ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<UE::Online::IOnlineServices,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_38);
    }
    if ((TSharedRef<UE::Online::IOnlineServices,1> *)FVar2.Data == pTVar3) break;
    (**(code **)(*(longlong *)((TSharedRef<UE::Online::IOnlineServices,1> *)FVar2.Data)->Object +
                0x48))(((TSharedRef<UE::Online::IOnlineServices,1> *)FVar2.Data)->Object,local_20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
    FVar2.Data = FVar2.Data + 0x10;
  }
  DestructItems<TSharedRef<UE::Online::IOnlineServices,1>,int>
            ((TSharedRef<UE::Online::IOnlineServices,1> *)local_30.AllocatorInstance.Data,
             local_30.ArrayNum);
  if ((TSharedRef<UE::Online::IOnlineServices,1> *)local_30.AllocatorInstance.Data !=
      (TSharedRef<UE::Online::IOnlineServices,1> *)0x0) {
    FMemory::Free(local_30.AllocatorInstance.Data);
  }
  return;
}

// ShutdownOnlineSubsystem @ 14ec98b50

void __thiscall
UOnlineServicesEngineInterfaceImpl::ShutdownOnlineSubsystem
          (UOnlineServicesEngineInterfaceImpl *this,FName param_1)

{
  UE::Online::DestroyAllServicesWithName(param_1);
  return;
}

// StartNetworkedVoice @ 14ec98e50

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
UOnlineServicesEngineInterfaceImpl::StartNetworkedVoice
          (UOnlineServicesEngineInterfaceImpl *this,UWorld *param_1,uchar param_2)

{
  return;
}

// StartSession @ 14ec99330

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
UOnlineServicesEngineInterfaceImpl::StartSession
          (UOnlineServicesEngineInterfaceImpl *this,UWorld *param_1,FName param_2,
          TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *param_3)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,&local_28);
  if ((*(int *)&param_3->field_0x10 != 0) &&
     (plVar1 = *(longlong **)&param_3->field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_2,0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// StaticRegisterNativesUOnlineServicesEngineInterfaceImpl @ 14ec99ae0

void __cdecl
UOnlineServicesEngineInterfaceImpl::StaticRegisterNativesUOnlineServicesEngineInterfaceImpl(void)

{
  return;
}

// StopNetworkedVoice @ 14ec99bb0

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
UOnlineServicesEngineInterfaceImpl::StopNetworkedVoice
          (UOnlineServicesEngineInterfaceImpl *this,UWorld *param_1,uchar param_2)

{
  return;
}

// UnmuteRemoteTalker @ 14ec9f340

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UOnlineServicesEngineInterfaceImpl::UnmuteRemoteTalker
          (UOnlineServicesEngineInterfaceImpl *this,UWorld *param_1,uchar param_2,
          FUniqueNetIdWrapper *param_3,bool param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  
  bVar2 = FUniqueNetIdWrapper::IsValid(param_3);
  if (bVar2) {
    uVar4 = (ulonglong)(param_3->Variant).TypeIndex;
    if ((1 < uVar4) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<struct_UE::Online::OnlineIdHandleTags::FAccount>_>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar4) != '\0') {
      return false;
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("PlayerId.IsValid() && PlayerId.IsV2()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\OnlineServicesEngineInterfaceImpl.cpp"
                     ,0x127,L"");
  if (!bVar2) {
    return false;
  }
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return (bool)uVar3;
}

// UnregisterPlayer @ 14ec9f630

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
UOnlineServicesEngineInterfaceImpl::UnregisterPlayer
          (UOnlineServicesEngineInterfaceImpl *this,UWorld *param_1,FName param_2,
          FUniqueNetIdWrapper *param_3)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  
  bVar2 = FUniqueNetIdWrapper::IsValid(param_3);
  if (bVar2) {
    uVar3 = (ulonglong)(param_3->Variant).TypeIndex;
    if ((1 < uVar3) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<struct_UE::Online::OnlineIdHandleTags::FAccount>_>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar3) != '\0') {
      return;
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("UniqueId.IsValid() && UniqueId.IsV2()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\OnlineServicesEngineInterfaceImpl.cpp"
                     ,0xf0,L"");
  if (!bVar2) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// UnregisterPlayers @ 14ec9faa0

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
UOnlineServicesEngineInterfaceImpl::UnregisterPlayers
          (UOnlineServicesEngineInterfaceImpl *this,UWorld *param_1,FName param_2,
          TArray<FUniqueNetIdWrapper,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement FVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res20 [8];
  
  iVar2 = param_3->ArrayNum;
  pFVar6 = (param_3->AllocatorInstance).Data;
  pFVar7 = pFVar6 + (longlong)iVar2 * 0x20;
  do {
    if (param_3->ArrayNum != iVar2) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FUniqueNetIdWrapper_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (pFVar6 == pFVar7) {
      return;
    }
    FVar1 = pFVar6[0x18];
    if (1 < (ulonglong)(byte)FVar1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<struct_UE::Online::OnlineIdHandleTags::FAccount>_>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + (ulonglong)(byte)FVar1 + 4) == '\0') {
      if (pFVar6[0x18] != (FScriptContainerElement)0x1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      bVar4 = (*(uint *)(pFVar6 + 8) & 0xffffff) == 0;
LAB_14ec9fb9e:
      if (bVar4) goto LAB_14ec9fbdb;
      FVar1 = pFVar6[0x18];
      if (1 < (ulonglong)(byte)FVar1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<struct_UE::Online::OnlineIdHandleTags::FAccount>_>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + (ulonglong)(byte)FVar1) == '\0') goto LAB_14ec9fbdb;
    }
    else {
      if (pFVar6[0x18] != (FScriptContainerElement)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (*(longlong **)(pFVar6 + 8) != (longlong *)0x0) {
        cVar5 = (**(code **)(**(longlong **)(pFVar6 + 8) + 0x28))();
        bVar4 = cVar5 == '\0';
        goto LAB_14ec9fb9e;
      }
LAB_14ec9fbdb:
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PlayerId.IsValid() && PlayerId.IsV2()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\OnlineServicesEngineInterfaceImpl.cpp"
                         ,0xf8,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar6 = pFVar6 + 0x20;
  } while( true );
}

// UpdateSessionJoinability @ 14ec9fd30

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
UOnlineServicesEngineInterfaceImpl::UpdateSessionJoinability
          (UOnlineServicesEngineInterfaceImpl *this,UWorld *param_1,FName param_2,bool param_3,
          bool param_4,bool param_5,bool param_6)

{
  return;
}

