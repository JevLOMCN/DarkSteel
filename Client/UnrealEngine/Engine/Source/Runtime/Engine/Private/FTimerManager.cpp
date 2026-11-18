// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 40

// SetTimer<AActor> @ 1473775d0

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

void __thiscall
FTimerManager::SetTimer<AActor>
          (FTimerManager *this,FTimerHandle *param_1,AActor *param_2,pmf_13d4066e param_3,
          float param_4,bool param_5,float param_6)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  ForAnyElementType FVar5;
  ulonglong uVar6;
  int iVar7;
  undefined1 auStackY_f8 [32];
  ForAnyElementType local_c0;
  int local_b8;
  FDelegateAllocation local_b0;
  AActor *local_a0;
  undefined1 local_98;
  FDelegateAllocation *local_90;
  FScriptContainerElement *local_88;
  int local_80;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_98 = 0;
  local_90 = &local_b0;
  local_b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_b0.DelegateSize = 0;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_b0);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAActor____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    puVar3[3] = 0;
    local_a0 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_a0);
    *(pmf_13d4066e *)(puVar3 + 4) = param_3;
  }
  local_88 = (FScriptContainerElement *)0x0;
  local_80 = 0;
  local_c0.Data = (FScriptContainerElement *)0x0;
  local_b8 = 0;
  FVar5.Data = (FScriptContainerElement *)0x0;
  iVar7 = 0;
  if ((local_b0.DelegateSize != 0) &&
     (iVar7 = 0, local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (**(code **)(*(longlong *)local_b0.DelegateAllocator + 0x48))();
    FVar5.Data = local_c0.Data;
    iVar7 = local_b8;
  }
  local_b8 = 0;
  local_c0.Data = (FScriptContainerElement *)0x0;
  if (local_80 == 0) {
LAB_147377744:
    if (local_88 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88);
    }
  }
  else if (local_88 != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_88)(local_88);
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_88,0,0,0x10);
    local_80 = 0;
    goto LAB_147377744;
  }
  local_88 = FVar5.Data;
  local_80 = iVar7;
  if (local_b8 == 0) {
LAB_147377796:
    if (local_c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data);
    }
  }
  else if (local_c0.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_c0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c0,0,0,0x10);
    local_b8 = 0;
    goto LAB_147377796;
  }
  local_58 = 1;
  InternalSetTimer(this,param_1,(FTimerUnifiedDelegate *)&local_88,param_4,param_5,param_6);
  uVar6 = (ulonglong)local_58;
  if (3 < local_58) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar6] ==
      UE::Core::Private::
      TDestructorCaller<TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>_>::
      Destruct) {
    if (local_80 != 0) {
      if (local_88 == (FScriptContainerElement *)0x0) goto LAB_14737786d;
      (*(code *)**(undefined8 **)local_88)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_88,0,0,0x10);
      local_80 = 0;
    }
    if (local_88 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88);
    }
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar6])(&local_88);
  }
LAB_14737786d:
  if ((local_b0.DelegateSize != 0) &&
     (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_b0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_b0,0,0,0x10);
    local_b0.DelegateSize = 0;
  }
  if (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_b0.DelegateAllocator);
  }
  return;
}

// SetTimer<UAvoidanceManager> @ 1473778d0

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

void __thiscall
FTimerManager::SetTimer<UAvoidanceManager>
          (FTimerManager *this,FTimerHandle *param_1,UAvoidanceManager *param_2,
          pmf_7be10c0a *param_3,float param_4,bool param_5,float param_6)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  ForAnyElementType FVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 auStackY_108 [32];
  ForAnyElementType local_d0;
  int local_c8;
  FDelegateAllocation local_c0;
  UAvoidanceManager *local_b0;
  undefined1 local_a8;
  FDelegateAllocation *local_a0;
  FScriptContainerElement *local_98;
  int local_90;
  byte local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_a8 = 0;
  local_a0 = &local_c0;
  uVar2 = *(undefined8 *)param_3;
  uVar3 = *(undefined8 *)&param_3->field_0x8;
  local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_c0.DelegateSize = 0;
  puVar5 = UE::Core::Private::DelegateAllocate(0x30,&local_c0);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAvoidanceManager____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_2 != (UAvoidanceManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    puVar5[3] = 0;
    local_b0 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_2 != (UAvoidanceManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&local_b0);
    puVar5[4] = uVar2;
    puVar5[5] = uVar3;
  }
  local_98 = (FScriptContainerElement *)0x0;
  local_90 = 0;
  local_d0.Data = (FScriptContainerElement *)0x0;
  local_c8 = 0;
  FVar7.Data = (FScriptContainerElement *)0x0;
  iVar9 = 0;
  if ((local_c0.DelegateSize != 0) &&
     (iVar9 = 0, local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (**(code **)(*(longlong *)local_c0.DelegateAllocator + 0x48))();
    FVar7.Data = local_d0.Data;
    iVar9 = local_c8;
  }
  local_c8 = 0;
  local_d0.Data = (FScriptContainerElement *)0x0;
  if (local_90 == 0) {
LAB_147377a50:
    if (local_98 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98);
    }
  }
  else if (local_98 != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_98)(local_98);
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_98,0,0,0x10);
    local_90 = 0;
    goto LAB_147377a50;
  }
  local_98 = FVar7.Data;
  local_90 = iVar9;
  if (local_c8 == 0) {
LAB_147377aa8:
    if (local_d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data);
    }
  }
  else if (local_d0.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_d0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_d0,0,0,0x10);
    local_c8 = 0;
    goto LAB_147377aa8;
  }
  local_68 = 1;
  InternalSetTimer(this,param_1,(FTimerUnifiedDelegate *)&local_98,param_4,param_5,param_6);
  uVar8 = (ulonglong)local_68;
  if (3 < local_68) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8] ==
      UE::Core::Private::
      TDestructorCaller<TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>_>::
      Destruct) {
    if (local_90 != 0) {
      if (local_98 == (FScriptContainerElement *)0x0) goto LAB_147377b7f;
      (*(code *)**(undefined8 **)local_98)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_98,0,0,0x10);
      local_90 = 0;
    }
    if (local_98 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98);
    }
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8])(&local_98);
  }
LAB_147377b7f:
  if ((local_c0.DelegateSize != 0) &&
     (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_c0,0,0,0x10);
    local_c0.DelegateSize = 0;
  }
  if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_c0.DelegateAllocator);
  }
  return;
}

// SetTimer<UDecalComponent> @ 1478a47a0

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

void __thiscall
FTimerManager::SetTimer<UDecalComponent>
          (FTimerManager *this,FTimerHandle *param_1,UDecalComponent *param_2,pmf_38da4c31 *param_3,
          float param_4,bool param_5,float param_6)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  ForAnyElementType FVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 auStackY_108 [32];
  ForAnyElementType local_d0;
  int local_c8;
  FDelegateAllocation local_c0;
  UDecalComponent *local_b0;
  undefined1 local_a8;
  FDelegateAllocation *local_a0;
  FScriptContainerElement *local_98;
  int local_90;
  byte local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_a8 = 0;
  local_a0 = &local_c0;
  uVar2 = *(undefined8 *)param_3;
  uVar3 = *(undefined8 *)&param_3->field_0x8;
  local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_c0.DelegateSize = 0;
  puVar5 = UE::Core::Private::DelegateAllocate(0x30,&local_c0);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDecalComponent____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UDecalComponent *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    puVar5[3] = 0;
    local_b0 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UDecalComponent *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&local_b0);
    puVar5[4] = uVar2;
    puVar5[5] = uVar3;
  }
  local_98 = (FScriptContainerElement *)0x0;
  local_90 = 0;
  local_d0.Data = (FScriptContainerElement *)0x0;
  local_c8 = 0;
  FVar7.Data = (FScriptContainerElement *)0x0;
  iVar9 = 0;
  if ((local_c0.DelegateSize != 0) &&
     (iVar9 = 0, local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (**(code **)(*(longlong *)local_c0.DelegateAllocator + 0x48))();
    FVar7.Data = local_d0.Data;
    iVar9 = local_c8;
  }
  local_c8 = 0;
  local_d0.Data = (FScriptContainerElement *)0x0;
  if (local_90 == 0) {
LAB_1478a4920:
    if (local_98 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98);
    }
  }
  else if (local_98 != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_98)(local_98);
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_98,0,0,0x10);
    local_90 = 0;
    goto LAB_1478a4920;
  }
  local_98 = FVar7.Data;
  local_90 = iVar9;
  if (local_c8 == 0) {
LAB_1478a4978:
    if (local_d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data);
    }
  }
  else if (local_d0.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_d0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_d0,0,0,0x10);
    local_c8 = 0;
    goto LAB_1478a4978;
  }
  local_68 = 1;
  InternalSetTimer(this,param_1,(FTimerUnifiedDelegate *)&local_98,param_4,param_5,param_6);
  uVar8 = (ulonglong)local_68;
  if (3 < local_68) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8] ==
      UE::Core::Private::
      TDestructorCaller<TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>_>::
      Destruct) {
    if (local_90 != 0) {
      if (local_98 == (FScriptContainerElement *)0x0) goto LAB_1478a4a4f;
      (*(code *)**(undefined8 **)local_98)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_98,0,0,0x10);
      local_90 = 0;
    }
    if (local_98 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98);
    }
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8])(&local_98);
  }
LAB_1478a4a4f:
  if ((local_c0.DelegateSize != 0) &&
     (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_c0,0,0,0x10);
    local_c0.DelegateSize = 0;
  }
  if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_c0.DelegateAllocator);
  }
  return;
}

// SetTimer<AGameNetworkManager> @ 147c2a810

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

void __thiscall
FTimerManager::SetTimer<AGameNetworkManager>
          (FTimerManager *this,FTimerHandle *param_1,AGameNetworkManager *param_2,
          pmf_ad46f124 param_3,float param_4,bool param_5,float param_6)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  ForAnyElementType FVar5;
  ulonglong uVar6;
  int iVar7;
  undefined1 auStackY_f8 [32];
  ForAnyElementType local_c0;
  int local_b8;
  FDelegateAllocation local_b0;
  AGameNetworkManager *local_a0;
  undefined1 local_98;
  FDelegateAllocation *local_90;
  FScriptContainerElement *local_88;
  int local_80;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_98 = 0;
  local_90 = &local_b0;
  local_b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_b0.DelegateSize = 0;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_b0);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAGameNetworkManager____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_2 != (AGameNetworkManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    puVar3[3] = 0;
    local_a0 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_2 != (AGameNetworkManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_a0);
    *(pmf_ad46f124 *)(puVar3 + 4) = param_3;
  }
  local_88 = (FScriptContainerElement *)0x0;
  local_80 = 0;
  local_c0.Data = (FScriptContainerElement *)0x0;
  local_b8 = 0;
  FVar5.Data = (FScriptContainerElement *)0x0;
  iVar7 = 0;
  if ((local_b0.DelegateSize != 0) &&
     (iVar7 = 0, local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (**(code **)(*(longlong *)local_b0.DelegateAllocator + 0x48))();
    FVar5.Data = local_c0.Data;
    iVar7 = local_b8;
  }
  local_b8 = 0;
  local_c0.Data = (FScriptContainerElement *)0x0;
  if (local_80 == 0) {
LAB_147c2a984:
    if (local_88 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88);
    }
  }
  else if (local_88 != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_88)(local_88);
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_88,0,0,0x10);
    local_80 = 0;
    goto LAB_147c2a984;
  }
  local_88 = FVar5.Data;
  local_80 = iVar7;
  if (local_b8 == 0) {
LAB_147c2a9d6:
    if (local_c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data);
    }
  }
  else if (local_c0.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_c0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c0,0,0,0x10);
    local_b8 = 0;
    goto LAB_147c2a9d6;
  }
  local_58 = 1;
  InternalSetTimer(this,param_1,(FTimerUnifiedDelegate *)&local_88,param_4,param_5,param_6);
  uVar6 = (ulonglong)local_58;
  if (3 < local_58) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar6] ==
      UE::Core::Private::
      TDestructorCaller<TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>_>::
      Destruct) {
    if (local_80 != 0) {
      if (local_88 == (FScriptContainerElement *)0x0) goto LAB_147c2aaad;
      (*(code *)**(undefined8 **)local_88)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_88,0,0,0x10);
      local_80 = 0;
    }
    if (local_88 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88);
    }
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar6])(&local_88);
  }
LAB_147c2aaad:
  if ((local_b0.DelegateSize != 0) &&
     (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_b0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_b0,0,0,0x10);
    local_b0.DelegateSize = 0;
  }
  if (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_b0.DelegateAllocator);
  }
  return;
}

// SetTimer<AGameState> @ 147c2ab10

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

void __thiscall
FTimerManager::SetTimer<AGameState>
          (FTimerManager *this,FTimerHandle *param_1,AGameState *param_2,pmf_37f5dfa4 param_3,
          float param_4,bool param_5,float param_6)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  ForAnyElementType FVar5;
  ulonglong uVar6;
  int iVar7;
  undefined1 auStackY_f8 [32];
  ForAnyElementType local_c0;
  int local_b8;
  FDelegateAllocation local_b0;
  AGameState *local_a0;
  undefined1 local_98;
  FDelegateAllocation *local_90;
  FScriptContainerElement *local_88;
  int local_80;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_98 = 0;
  local_90 = &local_b0;
  local_b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_b0.DelegateSize = 0;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_b0);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAGameState____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (AGameState *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    puVar3[3] = 0;
    local_a0 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (AGameState *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_a0);
    *(pmf_37f5dfa4 *)(puVar3 + 4) = param_3;
  }
  local_88 = (FScriptContainerElement *)0x0;
  local_80 = 0;
  local_c0.Data = (FScriptContainerElement *)0x0;
  local_b8 = 0;
  FVar5.Data = (FScriptContainerElement *)0x0;
  iVar7 = 0;
  if ((local_b0.DelegateSize != 0) &&
     (iVar7 = 0, local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (**(code **)(*(longlong *)local_b0.DelegateAllocator + 0x48))();
    FVar5.Data = local_c0.Data;
    iVar7 = local_b8;
  }
  local_b8 = 0;
  local_c0.Data = (FScriptContainerElement *)0x0;
  if (local_80 == 0) {
LAB_147c2ac84:
    if (local_88 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88);
    }
  }
  else if (local_88 != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_88)(local_88);
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_88,0,0,0x10);
    local_80 = 0;
    goto LAB_147c2ac84;
  }
  local_88 = FVar5.Data;
  local_80 = iVar7;
  if (local_b8 == 0) {
LAB_147c2acd6:
    if (local_c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data);
    }
  }
  else if (local_c0.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_c0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c0,0,0,0x10);
    local_b8 = 0;
    goto LAB_147c2acd6;
  }
  local_58 = 1;
  InternalSetTimer(this,param_1,(FTimerUnifiedDelegate *)&local_88,param_4,param_5,param_6);
  uVar6 = (ulonglong)local_58;
  if (3 < local_58) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar6] ==
      UE::Core::Private::
      TDestructorCaller<TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>_>::
      Destruct) {
    if (local_80 != 0) {
      if (local_88 == (FScriptContainerElement *)0x0) goto LAB_147c2adad;
      (*(code *)**(undefined8 **)local_88)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_88,0,0,0x10);
      local_80 = 0;
    }
    if (local_88 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88);
    }
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar6])(&local_88);
  }
LAB_147c2adad:
  if ((local_b0.DelegateSize != 0) &&
     (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_b0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_b0,0,0,0x10);
    local_b0.DelegateSize = 0;
  }
  if (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_b0.DelegateAllocator);
  }
  return;
}

// SetTimer<AGameStateBase> @ 147c2ae10

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

void __thiscall
FTimerManager::SetTimer<AGameStateBase>
          (FTimerManager *this,FTimerHandle *param_1,AGameStateBase *param_2,pmf_b59eba73 param_3,
          float param_4,bool param_5,float param_6)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  ForAnyElementType FVar5;
  ulonglong uVar6;
  int iVar7;
  undefined1 auStackY_f8 [32];
  ForAnyElementType local_c0;
  int local_b8;
  FDelegateAllocation local_b0;
  AGameStateBase *local_a0;
  undefined1 local_98;
  FDelegateAllocation *local_90;
  FScriptContainerElement *local_88;
  int local_80;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_98 = 0;
  local_90 = &local_b0;
  local_b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_b0.DelegateSize = 0;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_b0);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAGameStateBase____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (AGameStateBase *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    puVar3[3] = 0;
    local_a0 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (AGameStateBase *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_a0);
    *(pmf_b59eba73 *)(puVar3 + 4) = param_3;
  }
  local_88 = (FScriptContainerElement *)0x0;
  local_80 = 0;
  local_c0.Data = (FScriptContainerElement *)0x0;
  local_b8 = 0;
  FVar5.Data = (FScriptContainerElement *)0x0;
  iVar7 = 0;
  if ((local_b0.DelegateSize != 0) &&
     (iVar7 = 0, local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (**(code **)(*(longlong *)local_b0.DelegateAllocator + 0x48))();
    FVar5.Data = local_c0.Data;
    iVar7 = local_b8;
  }
  local_b8 = 0;
  local_c0.Data = (FScriptContainerElement *)0x0;
  if (local_80 == 0) {
LAB_147c2af84:
    if (local_88 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88);
    }
  }
  else if (local_88 != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_88)(local_88);
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_88,0,0,0x10);
    local_80 = 0;
    goto LAB_147c2af84;
  }
  local_88 = FVar5.Data;
  local_80 = iVar7;
  if (local_b8 == 0) {
LAB_147c2afd6:
    if (local_c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data);
    }
  }
  else if (local_c0.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_c0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c0,0,0,0x10);
    local_b8 = 0;
    goto LAB_147c2afd6;
  }
  local_58 = 1;
  InternalSetTimer(this,param_1,(FTimerUnifiedDelegate *)&local_88,param_4,param_5,param_6);
  uVar6 = (ulonglong)local_58;
  if (3 < local_58) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar6] ==
      UE::Core::Private::
      TDestructorCaller<TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>_>::
      Destruct) {
    if (local_80 != 0) {
      if (local_88 == (FScriptContainerElement *)0x0) goto LAB_147c2b0ad;
      (*(code *)**(undefined8 **)local_88)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_88,0,0,0x10);
      local_80 = 0;
    }
    if (local_88 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88);
    }
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar6])(&local_88);
  }
LAB_147c2b0ad:
  if ((local_b0.DelegateSize != 0) &&
     (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_b0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_b0,0,0,0x10);
    local_b0.DelegateSize = 0;
  }
  if (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_b0.DelegateAllocator);
  }
  return;
}

// SetTimerForNextTick<ALightWeightInstanceStaticMeshManager> @ 147ea2d00

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FTimerHandle __thiscall
FTimerManager::SetTimerForNextTick<ALightWeightInstanceStaticMeshManager>
          (FTimerManager *this,ALightWeightInstanceStaticMeshManager *param_1,pmf_ac80787c *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FTimerHandle FVar5;
  ForAnyElementType FVar6;
  ulonglong uVar7;
  int iVar8;
  undefined8 *in_R9;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined1 local_d7;
  undefined1 local_d6;
  undefined1 local_d5;
  ForAnyElementType local_c8;
  undefined8 uStack_c0;
  FDelegateAllocation local_b8;
  pmf_ac80787c *local_a8;
  undefined1 local_a0;
  FDelegateAllocation *local_98;
  ForAnyElementType local_88;
  int local_80;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_c8.Data = (FScriptContainerElement *)*in_R9;
  uStack_c0 = in_R9[1];
  local_a0 = 0;
  local_98 = &local_b8;
  local_b8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_b8.DelegateSize = 0;
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,&local_b8);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VALightWeightInstanceStaticMeshManager____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (pmf_ac80787c *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    puVar3[3] = 0;
    local_a8 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (pmf_ac80787c *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_a8);
    *(undefined4 *)(puVar3 + 4) = local_c8.Data._0_4_;
    *(undefined4 *)((longlong)puVar3 + 0x24) = local_c8.Data._4_4_;
    *(int *)(puVar3 + 5) = (int)uStack_c0;
    *(undefined4 *)((longlong)puVar3 + 0x2c) = uStack_c0._4_4_;
  }
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  local_c8.Data = (FScriptContainerElement *)0x0;
  uStack_c0 = uStack_c0 & 0xffffffff00000000;
  local_d8 = 0;
  FVar6.Data = (FScriptContainerElement *)0x0;
  iVar8 = 0;
  if ((local_b8.DelegateSize != 0) &&
     (local_b8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (**(code **)(*(longlong *)local_b8.DelegateAllocator + 0x48))();
    FVar6.Data = local_c8.Data;
    iVar8 = (int)uStack_c0;
  }
  uStack_c0 = uStack_c0 & 0xffffffff00000000;
  local_d7 = 0;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_d6 = 0;
  if (local_80 == 0) {
LAB_147ea2e6e:
    if (local_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data);
    }
  }
  else if (local_88.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_88.Data)(local_88.Data);
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_88,0,0,0x10);
    local_80 = 0;
    goto LAB_147ea2e6e;
  }
  local_d5 = 0;
  local_88.Data = FVar6.Data;
  local_80 = iVar8;
  if ((int)uStack_c0 == 0) {
LAB_147ea2ec0:
    if (local_c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data);
    }
  }
  else if (local_c8.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_c8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c8,0,0,0x10);
    uStack_c0 = uStack_c0 & 0xffffffff00000000;
    goto LAB_147ea2ec0;
  }
  local_58 = 1;
  InternalSetTimerForNextTick(this,(FTimerUnifiedDelegate *)param_1);
  uVar7 = (ulonglong)local_58;
  if (3 < local_58) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar5.Handle = (*pcVar1)();
      return (FTimerHandle)FVar5.Handle;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar7] ==
      UE::Core::Private::
      TDestructorCaller<TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>_>::
      Destruct) {
    if (local_80 != 0) {
      if (local_88.Data == (FScriptContainerElement *)0x0) goto LAB_147ea2f77;
      (*(code *)**(undefined8 **)local_88.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_88,0,0,0x10);
      local_80 = 0;
    }
    if (local_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data);
    }
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar7])(&local_88);
  }
LAB_147ea2f77:
  if ((local_b8.DelegateSize != 0) &&
     (local_b8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_b8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_b8,0,0,0x10);
    local_b8.DelegateSize = 0;
  }
  if (local_b8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_b8.DelegateAllocator);
  }
  return (FTimerHandle)(ulong64)param_1;
}

// SetTimerForNextTick @ 1480d3970

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

FTimerHandle __thiscall
FTimerManager::SetTimerForNextTick
          (FTimerManager *this,
          TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FTimerHandle FVar3;
  ForAnyElementType FVar4;
  ulonglong uVar5;
  int iVar6;
  ForAnyElementType *in_R8;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined1 local_97;
  undefined1 local_96;
  undefined1 local_95;
  ForAnyElementType local_90;
  int local_88;
  ForAnyElementType local_78;
  int local_70;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  if (in_R8 == &local_78) goto LAB_1480d3a97;
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88 = 0;
  local_98 = 0;
  FVar4.Data = (FScriptContainerElement *)0x0;
  iVar6 = 0;
  if ((*(int *)&in_R8[1].Data != 0) &&
     (FVar4.Data = (FScriptContainerElement *)0x0, in_R8->Data != (FScriptContainerElement *)0x0)) {
    (**(code **)(*(longlong *)in_R8->Data + 0x48))();
    FVar4.Data = local_90.Data;
    iVar6 = local_88;
  }
  local_88 = 0;
  local_97 = 0;
  local_90.Data = (FScriptContainerElement *)0x0;
  local_96 = 0;
  if (local_70 == 0) {
LAB_1480d3a3b:
    if (local_78.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data);
    }
  }
  else if (local_78.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_78.Data)(local_78.Data);
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_78,0,0,0x10);
    local_70 = 0;
    goto LAB_1480d3a3b;
  }
  local_95 = 0;
  local_78.Data = FVar4.Data;
  local_70 = iVar6;
  if (local_88 != 0) {
    if (local_90.Data == (FScriptContainerElement *)0x0) goto LAB_1480d3a97;
    (*(code *)**(undefined8 **)local_90.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_90,0,0,0x10);
    local_88 = 0;
  }
  if (local_90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data);
  }
LAB_1480d3a97:
  local_48 = 1;
  InternalSetTimerForNextTick(this,(FTimerUnifiedDelegate *)param_1);
  uVar5 = (ulonglong)local_48;
  if ((3 < local_48) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar3.Handle = (*pcVar1)();
    return (FTimerHandle)FVar3.Handle;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5] ==
      UE::Core::Private::
      TDestructorCaller<TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>_>::
      Destruct) {
    if (local_70 != 0) {
      if (local_78.Data == (FScriptContainerElement *)0x0) {
        return (FTimerHandle)(ulong64)param_1;
      }
      (*(code *)**(undefined8 **)local_78.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_78,0,0,0x10);
      local_70 = 0;
    }
    if (local_78.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data);
    }
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5])(&local_78);
  }
  return (FTimerHandle)(ulong64)param_1;
}

// SetTimer<APainCausingVolume> @ 1480f1f20

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

void __thiscall
FTimerManager::SetTimer<APainCausingVolume>
          (FTimerManager *this,FTimerHandle *param_1,APainCausingVolume *param_2,
          pmf_b19176b9 param_3,float param_4,bool param_5,float param_6)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  ForAnyElementType FVar5;
  ulonglong uVar6;
  int iVar7;
  undefined1 auStackY_f8 [32];
  ForAnyElementType local_c0;
  int local_b8;
  FDelegateAllocation local_b0;
  APainCausingVolume *local_a0;
  undefined1 local_98;
  FDelegateAllocation *local_90;
  FScriptContainerElement *local_88;
  int local_80;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_98 = 0;
  local_90 = &local_b0;
  local_b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_b0.DelegateSize = 0;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_b0);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAPainCausingVolume____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_2 != (APainCausingVolume *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    puVar3[3] = 0;
    local_a0 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_2 != (APainCausingVolume *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_a0);
    *(pmf_b19176b9 *)(puVar3 + 4) = param_3;
  }
  local_88 = (FScriptContainerElement *)0x0;
  local_80 = 0;
  local_c0.Data = (FScriptContainerElement *)0x0;
  local_b8 = 0;
  FVar5.Data = (FScriptContainerElement *)0x0;
  iVar7 = 0;
  if ((local_b0.DelegateSize != 0) &&
     (iVar7 = 0, local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (**(code **)(*(longlong *)local_b0.DelegateAllocator + 0x48))();
    FVar5.Data = local_c0.Data;
    iVar7 = local_b8;
  }
  local_b8 = 0;
  local_c0.Data = (FScriptContainerElement *)0x0;
  if (local_80 == 0) {
LAB_1480f2094:
    if (local_88 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88);
    }
  }
  else if (local_88 != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_88)(local_88);
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_88,0,0,0x10);
    local_80 = 0;
    goto LAB_1480f2094;
  }
  local_88 = FVar5.Data;
  local_80 = iVar7;
  if (local_b8 == 0) {
LAB_1480f20e6:
    if (local_c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data);
    }
  }
  else if (local_c0.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_c0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c0,0,0,0x10);
    local_b8 = 0;
    goto LAB_1480f20e6;
  }
  local_58 = 1;
  InternalSetTimer(this,param_1,(FTimerUnifiedDelegate *)&local_88,param_4,param_5,param_6);
  uVar6 = (ulonglong)local_58;
  if (3 < local_58) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar6] ==
      UE::Core::Private::
      TDestructorCaller<TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>_>::
      Destruct) {
    if (local_80 != 0) {
      if (local_88 == (FScriptContainerElement *)0x0) goto LAB_1480f21bd;
      (*(code *)**(undefined8 **)local_88)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_88,0,0,0x10);
      local_80 = 0;
    }
    if (local_88 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88);
    }
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar6])(&local_88);
  }
LAB_1480f21bd:
  if ((local_b0.DelegateSize != 0) &&
     (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_b0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_b0,0,0,0x10);
    local_b0.DelegateSize = 0;
  }
  if (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_b0.DelegateAllocator);
  }
  return;
}

// SetTimerForNextTick<UClusterUnionReplicatedProxyComponent> @ 14824b4d0

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

FTimerHandle __thiscall
FTimerManager::SetTimerForNextTick<UClusterUnionReplicatedProxyComponent>
          (FTimerManager *this,UClusterUnionReplicatedProxyComponent *param_1,pmf_f4e6f580 *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FTimerHandle FVar5;
  ForAnyElementType FVar6;
  ulonglong uVar7;
  int iVar8;
  undefined8 *in_R9;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined1 local_d7;
  undefined1 local_d6;
  undefined1 local_d5;
  ForAnyElementType local_c8;
  undefined8 uStack_c0;
  FDelegateAllocation local_b8;
  pmf_f4e6f580 *local_a8;
  undefined1 local_a0;
  FDelegateAllocation *local_98;
  ForAnyElementType local_88;
  int local_80;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_c8.Data = (FScriptContainerElement *)*in_R9;
  uStack_c0 = in_R9[1];
  local_a0 = 0;
  local_98 = &local_b8;
  local_b8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_b8.DelegateSize = 0;
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,&local_b8);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUClusterUnionReplicatedProxyComponent____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (pmf_f4e6f580 *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    puVar3[3] = 0;
    local_a8 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (pmf_f4e6f580 *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_a8);
    *(undefined4 *)(puVar3 + 4) = local_c8.Data._0_4_;
    *(undefined4 *)((longlong)puVar3 + 0x24) = local_c8.Data._4_4_;
    *(int *)(puVar3 + 5) = (int)uStack_c0;
    *(undefined4 *)((longlong)puVar3 + 0x2c) = uStack_c0._4_4_;
  }
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  local_c8.Data = (FScriptContainerElement *)0x0;
  uStack_c0 = uStack_c0 & 0xffffffff00000000;
  local_d8 = 0;
  FVar6.Data = (FScriptContainerElement *)0x0;
  iVar8 = 0;
  if ((local_b8.DelegateSize != 0) &&
     (local_b8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (**(code **)(*(longlong *)local_b8.DelegateAllocator + 0x48))();
    FVar6.Data = local_c8.Data;
    iVar8 = (int)uStack_c0;
  }
  uStack_c0 = uStack_c0 & 0xffffffff00000000;
  local_d7 = 0;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_d6 = 0;
  if (local_80 == 0) {
LAB_14824b63e:
    if (local_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data);
    }
  }
  else if (local_88.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_88.Data)(local_88.Data);
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_88,0,0,0x10);
    local_80 = 0;
    goto LAB_14824b63e;
  }
  local_d5 = 0;
  local_88.Data = FVar6.Data;
  local_80 = iVar8;
  if ((int)uStack_c0 == 0) {
LAB_14824b690:
    if (local_c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data);
    }
  }
  else if (local_c8.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_c8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c8,0,0,0x10);
    uStack_c0 = uStack_c0 & 0xffffffff00000000;
    goto LAB_14824b690;
  }
  local_58 = 1;
  InternalSetTimerForNextTick(this,(FTimerUnifiedDelegate *)param_1);
  uVar7 = (ulonglong)local_58;
  if (3 < local_58) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar5.Handle = (*pcVar1)();
      return (FTimerHandle)FVar5.Handle;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar7] ==
      UE::Core::Private::
      TDestructorCaller<TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>_>::
      Destruct) {
    if (local_80 != 0) {
      if (local_88.Data == (FScriptContainerElement *)0x0) goto LAB_14824b747;
      (*(code *)**(undefined8 **)local_88.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_88,0,0,0x10);
      local_80 = 0;
    }
    if (local_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data);
    }
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar7])(&local_88);
  }
LAB_14824b747:
  if ((local_b8.DelegateSize != 0) &&
     (local_b8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_b8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_b8,0,0,0x10);
    local_b8.DelegateSize = 0;
  }
  if (local_b8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_b8.DelegateAllocator);
  }
  return (FTimerHandle)(ulong64)param_1;
}

// SetTimer<APlayerCameraManager> @ 148347300

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

void __thiscall
FTimerManager::SetTimer<APlayerCameraManager>
          (FTimerManager *this,FTimerHandle *param_1,APlayerCameraManager *param_2,
          pmf_404311bc param_3,float param_4,bool param_5,float param_6)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  ForAnyElementType FVar5;
  ulonglong uVar6;
  int iVar7;
  undefined1 auStackY_f8 [32];
  ForAnyElementType local_c0;
  int local_b8;
  FDelegateAllocation local_b0;
  APlayerCameraManager *local_a0;
  undefined1 local_98;
  FDelegateAllocation *local_90;
  FScriptContainerElement *local_88;
  int local_80;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_98 = 0;
  local_90 = &local_b0;
  local_b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_b0.DelegateSize = 0;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_b0);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAPlayerCameraManager____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_2 != (APlayerCameraManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    puVar3[3] = 0;
    local_a0 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_2 != (APlayerCameraManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_a0);
    *(pmf_404311bc *)(puVar3 + 4) = param_3;
  }
  local_88 = (FScriptContainerElement *)0x0;
  local_80 = 0;
  local_c0.Data = (FScriptContainerElement *)0x0;
  local_b8 = 0;
  FVar5.Data = (FScriptContainerElement *)0x0;
  iVar7 = 0;
  if ((local_b0.DelegateSize != 0) &&
     (iVar7 = 0, local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (**(code **)(*(longlong *)local_b0.DelegateAllocator + 0x48))();
    FVar5.Data = local_c0.Data;
    iVar7 = local_b8;
  }
  local_b8 = 0;
  local_c0.Data = (FScriptContainerElement *)0x0;
  if (local_80 == 0) {
LAB_148347474:
    if (local_88 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88);
    }
  }
  else if (local_88 != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_88)(local_88);
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_88,0,0,0x10);
    local_80 = 0;
    goto LAB_148347474;
  }
  local_88 = FVar5.Data;
  local_80 = iVar7;
  if (local_b8 == 0) {
LAB_1483474c6:
    if (local_c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data);
    }
  }
  else if (local_c0.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_c0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c0,0,0,0x10);
    local_b8 = 0;
    goto LAB_1483474c6;
  }
  local_58 = 1;
  InternalSetTimer(this,param_1,(FTimerUnifiedDelegate *)&local_88,param_4,param_5,param_6);
  uVar6 = (ulonglong)local_58;
  if (3 < local_58) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar6] ==
      UE::Core::Private::
      TDestructorCaller<TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>_>::
      Destruct) {
    if (local_80 != 0) {
      if (local_88 == (FScriptContainerElement *)0x0) goto LAB_14834759d;
      (*(code *)**(undefined8 **)local_88)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_88,0,0,0x10);
      local_80 = 0;
    }
    if (local_88 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88);
    }
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar6])(&local_88);
  }
LAB_14834759d:
  if ((local_b0.DelegateSize != 0) &&
     (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_b0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_b0,0,0,0x10);
    local_b0.DelegateSize = 0;
  }
  if (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_b0.DelegateAllocator);
  }
  return;
}

// SetTimer<APlayerController> @ 148347600

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

void __thiscall
FTimerManager::SetTimer<APlayerController>
          (FTimerManager *this,FTimerHandle *param_1,APlayerController *param_2,
          pmf_3b773e8a *param_3,float param_4,bool param_5,float param_6)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  ForAnyElementType FVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 auStackY_108 [32];
  ForAnyElementType local_d0;
  int local_c8;
  FDelegateAllocation local_c0;
  APlayerController *local_b0;
  undefined1 local_a8;
  FDelegateAllocation *local_a0;
  FScriptContainerElement *local_98;
  int local_90;
  byte local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_a8 = 0;
  local_a0 = &local_c0;
  uVar2 = *(undefined8 *)param_3;
  uVar3 = *(undefined8 *)&param_3->field_0x8;
  local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_c0.DelegateSize = 0;
  puVar5 = UE::Core::Private::DelegateAllocate(0x30,&local_c0);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAPlayerController____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_2 != (APlayerController *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    puVar5[3] = 0;
    local_b0 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_2 != (APlayerController *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&local_b0);
    puVar5[4] = uVar2;
    puVar5[5] = uVar3;
  }
  local_98 = (FScriptContainerElement *)0x0;
  local_90 = 0;
  local_d0.Data = (FScriptContainerElement *)0x0;
  local_c8 = 0;
  FVar7.Data = (FScriptContainerElement *)0x0;
  iVar9 = 0;
  if ((local_c0.DelegateSize != 0) &&
     (iVar9 = 0, local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (**(code **)(*(longlong *)local_c0.DelegateAllocator + 0x48))();
    FVar7.Data = local_d0.Data;
    iVar9 = local_c8;
  }
  local_c8 = 0;
  local_d0.Data = (FScriptContainerElement *)0x0;
  if (local_90 == 0) {
LAB_148347780:
    if (local_98 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98);
    }
  }
  else if (local_98 != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_98)(local_98);
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_98,0,0,0x10);
    local_90 = 0;
    goto LAB_148347780;
  }
  local_98 = FVar7.Data;
  local_90 = iVar9;
  if (local_c8 == 0) {
LAB_1483477d8:
    if (local_d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data);
    }
  }
  else if (local_d0.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_d0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_d0,0,0,0x10);
    local_c8 = 0;
    goto LAB_1483477d8;
  }
  local_68 = 1;
  InternalSetTimer(this,param_1,(FTimerUnifiedDelegate *)&local_98,param_4,param_5,param_6);
  uVar8 = (ulonglong)local_68;
  if (3 < local_68) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8] ==
      UE::Core::Private::
      TDestructorCaller<TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>_>::
      Destruct) {
    if (local_90 != 0) {
      if (local_98 == (FScriptContainerElement *)0x0) goto LAB_1483478af;
      (*(code *)**(undefined8 **)local_98)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_98,0,0,0x10);
      local_90 = 0;
    }
    if (local_98 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98);
    }
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8])(&local_98);
  }
LAB_1483478af:
  if ((local_c0.DelegateSize != 0) &&
     (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_c0,0,0,0x10);
    local_c0.DelegateSize = 0;
  }
  if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_c0.DelegateAllocator);
  }
  return;
}

// FTimerManager @ 1488af700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FTimerManager * __thiscall FTimerManager::FTimerManager(FTimerManager *this,UGameInstance *param_1)

{
  this->_padding_ = (longlong)&___7FTimerManager__6B_;
  *(undefined8 *)&this->Timers = 0;
  *(undefined8 *)&(this->Timers).field_0x8 = 0;
  *(undefined8 *)&(this->Timers).field_0x20 = 0;
  *(undefined4 *)&(this->Timers).field_0x28 = 0;
  *(undefined4 *)&(this->Timers).field_0x2c = 0x80;
  *(undefined4 *)&(this->Timers).field_0x34 = 0;
  *(undefined4 *)&(this->Timers).field_0x30 = 0xffffffff;
  (this->ActiveTimerHeap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveTimerHeap).ArrayNum = 0;
  (this->ActiveTimerHeap).ArrayMax = 0;
  *(undefined8 *)&(this->PausedTimerSet).Elements = 0;
  *(undefined8 *)&(this->PausedTimerSet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PausedTimerSet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PausedTimerSet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PausedTimerSet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PausedTimerSet).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->PausedTimerSet).Elements.field_0x30 = 0xffffffff;
  (this->PausedTimerSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PausedTimerSet).HashSize = 0;
  *(undefined8 *)&(this->PendingTimerSet).Elements = 0;
  *(undefined8 *)&(this->PendingTimerSet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PendingTimerSet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PendingTimerSet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PendingTimerSet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingTimerSet).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->PendingTimerSet).Elements.field_0x30 = 0xffffffff;
  (this->PendingTimerSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PendingTimerSet).HashSize = 0;
  *(undefined8 *)&this->ObjectToTimers = 0;
  *(undefined8 *)&(this->ObjectToTimers).field_0x8 = 0;
  *(undefined8 *)&(this->ObjectToTimers).field_0x20 = 0;
  *(undefined4 *)&(this->ObjectToTimers).field_0x28 = 0;
  *(undefined4 *)&(this->ObjectToTimers).field_0x2c = 0x80;
  *(undefined4 *)&(this->ObjectToTimers).field_0x34 = 0;
  *(undefined4 *)&(this->ObjectToTimers).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ObjectToTimers).field_0x40 = 0;
  *(undefined4 *)&(this->ObjectToTimers).field_0x48 = 0;
  (this->CurrentlyExecutingTimer).Handle = 0;
  this->OwningGameInstance = (UGameInstance *)0x0;
  (this->TimerSourceList).Ptr = (FTimerSourceList *)0x0;
  this->InternalTime = 0.0;
  this->LastTickedFrame = 0xffffffffffffffff;
  if (param_1 != (UGameInstance *)0x0) {
    this->OwningGameInstance = param_1;
  }
  return this;
}

// ~FTimerManager @ 1488b2940

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FTimerManager::~FTimerManager(FTimerManager *this)

{
  FTimerSourceList *this_00;
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  FScriptContainerElement *pFVar3;
  
  this->_padding_ = (longlong)&___7FTimerManager__6B_;
  this_00 = (this->TimerSourceList).Ptr;
  if (this_00 != (FTimerSourceList *)0x0) {
    FTimerSourceList::DumpEntries(this_00);
    *(undefined4 *)&(this_00->Entries).field_0x48 = 0;
    pvVar1 = *(void **)&(this_00->Entries).field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FTimerSourceEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FTimerSourceEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,FTimerSourceEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)this_00);
    ::operator_delete(this_00,0x58);
  }
  *(undefined4 *)&(this->ObjectToTimers).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ObjectToTimers).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<void_const_*,TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<void_const_*,TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<void_const_*,TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ObjectToTimers);
  (this->PendingTimerSet).HashSize = 0;
  FVar2 = (this->PendingTimerSet).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FTimerHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FTimerHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PendingTimerSet).Elements);
  (this->PausedTimerSet).HashSize = 0;
  FVar2 = (this->PausedTimerSet).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FTimerHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FTimerHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PausedTimerSet).Elements);
  pFVar3 = (this->ActiveTimerHeap).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  TSparseArray<FTimerData,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FTimerData,FDefaultSparseArrayAllocator>(&this->Timers);
  return;
}

// AddTimer @ 1488b92a0

/* WARNING: Removing unreachable block (ram,0x0001488b9540) */
/* WARNING: Removing unreachable block (ram,0x0001488b9553) */
/* WARNING: Removing unreachable block (ram,0x0001488b9556) */
/* WARNING: Removing unreachable block (ram,0x0001488b9588) */
/* WARNING: Removing unreachable block (ram,0x0001488b958d) */
/* WARNING: Removing unreachable block (ram,0x0001488b9592) */
/* WARNING: Removing unreachable block (ram,0x0001488b92db) */
/* WARNING: Removing unreachable block (ram,0x0001488b92fc) */
/* WARNING: Removing unreachable block (ram,0x0001488b9339) */
/* WARNING: Removing unreachable block (ram,0x0001488b935a) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FTimerHandle __thiscall FTimerManager::AddTimer(FTimerManager *this,FTimerData *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  UObject *pUVar7;
  TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator> *this_00;
  byte bVar8;
  uint uVar9;
  byte *in_R8;
  FTimerHandle local_res20;
  UObject *local_78;
  FSparseArrayAllocationInfo local_70 [2];
  FReadAccessScope local_50;
  
  if (in_R8[0x40] == 1) {
    if ((((*(int *)(in_R8 + 0x18) != 0) && (*(longlong **)(in_R8 + 0x10) != (longlong *)0x0)) &&
        (cVar5 = (**(code **)(**(longlong **)(in_R8 + 0x10) + 0x38))(), cVar5 != '\0')) &&
       ((*(int *)(in_R8 + 0x18) != 0 && (*(longlong **)(in_R8 + 0x10) != (longlong *)0x0)))) {
      pUVar7 = (UObject *)(**(code **)(**(longlong **)(in_R8 + 0x10) + 0x18))();
      goto LAB_1488b93a0;
    }
  }
  else if ((in_R8[0x40] == 2) &&
          (bVar4 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                             ((TScriptDelegate<FNotThreadSafeDelegateMode> *)(in_R8 + 0x10)), bVar4)
          ) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(in_R8 + 0x10),&local_50);
    pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)(in_R8 + 0x18));
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_50);
    goto LAB_1488b93a0;
  }
  pUVar7 = (UObject *)0x0;
LAB_1488b93a0:
  *(UObject **)(in_R8 + 0x58) = pUVar7;
  iVar1 = *(int *)&(this->Timers).field_0x34;
  local_78 = pUVar7;
  if (iVar1 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x60,0x10,1,(ForAnyElementType *)&this->Timers,
                       (int *)&(this->Timers).field_0x8,(int *)&(this->Timers).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Timers).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Timers).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Timers;
    iVar2 = *(int *)((longlong)iVar6 * 0x60 + 4 + lVar3);
    *(int *)&(this->Timers).field_0x30 = iVar2;
    *(int *)&(this->Timers).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x60 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<96,16,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<96,16,FDefaultSparseArrayAllocator> *)&this->Timers,local_70,iVar6);
  if (local_70[0].Pointer != (byte *)0x0) {
    bVar8 = (*(byte *)local_70[0].Pointer ^ *in_R8) & 1 ^ *(byte *)local_70[0].Pointer;
    *(byte *)local_70[0].Pointer = bVar8;
    bVar8 = (bVar8 ^ *in_R8) & 2 ^ bVar8;
    *(byte *)local_70[0].Pointer = bVar8;
    *(byte *)local_70[0].Pointer = (bVar8 ^ *in_R8) & 4 ^ bVar8;
    *(byte *)((longlong)local_70[0].Pointer + 1) = in_R8[1];
    *(byte *)((longlong)local_70[0].Pointer + 2) = in_R8[2];
    *(undefined4 *)((longlong)local_70[0].Pointer + 4) = *(undefined4 *)(in_R8 + 4);
    *(undefined8 *)((longlong)local_70[0].Pointer + 8) = *(undefined8 *)(in_R8 + 8);
    TVariant<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>
    ::
    TVariant<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>
              ((TVariant<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>
                *)((longlong)local_70[0].Pointer + 0x10),
               (TVariant<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>
                *)(in_R8 + 0x10));
    *(undefined8 *)((longlong)local_70[0].Pointer + 0x50) = *(undefined8 *)(in_R8 + 0x50);
    *(undefined8 *)((longlong)local_70[0].Pointer + 0x58) = *(undefined8 *)(in_R8 + 0x58);
  }
  GenerateHandle(this,(int)param_1);
  *(undefined8 *)((longlong)local_70[0].Index * 0x60 + 0x50 + *(longlong *)&this->Timers) =
       *(undefined8 *)param_1;
  if (local_78 != (UObject *)0x0) {
    uVar9 = ((uint)((ulonglong)local_78 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_78 >> 4)) *
            -0x7a143595;
    uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
    this_00 = TMapBase<void_const_*,TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>,0>_>
              ::FindOrAddImpl<void_const_*_const_&>
                        ((TMapBase<void_const_*,TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>,0>_>
                          *)&this->ObjectToTimers,uVar9 >> 0x10 ^ uVar9,&local_78);
    TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>::
    Emplace<FTimerHandle_const_&>(this_00,&local_res20,(bool *)param_1);
  }
  return (FTimerHandle)(ulong64)param_1;
}

// FindTimer @ 1488bfff0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FTimerData * __thiscall FTimerManager::FindTimer(FTimerManager *this,FTimerHandle *param_1)

{
  code *pcVar1;
  bool bVar2;
  FTimerData *pFVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TimerManager.cpp"
                         ,0x21e,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FTimerData *)(*pcVar1)();
    return pFVar3;
  }
  if (param_1->Handle != 0) {
    uVar6 = (uint)param_1->Handle;
    uVar5 = uVar6 & 0xffffff;
    if ((int)uVar5 < *(int *)&(this->Timers).field_0x8) {
      if ((*(int *)&(this->Timers).field_0x28 <= (int)uVar5) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FTimerData *)(*pcVar1)();
        return pFVar3;
      }
      puVar4 = *(undefined1 **)&(this->Timers).field_0x20;
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &(this->Timers).field_0x10;
      }
      if ((((*(uint *)(puVar4 + (ulonglong)(uVar5 >> 5) * 4) >> (uVar6 & 0x1f) & 1) != 0) &&
          (pFVar3 = (FTimerData *)(*(longlong *)&this->Timers + (ulonglong)uVar5 * 0x60),
          (pFVar3->Handle).Handle == param_1->Handle)) && (pFVar3->Status != ActivePendingRemoval))
      {
        return pFVar3;
      }
    }
  }
  return (FTimerData *)0x0;
}

// GenerateHandle @ 1488c04b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FTimerHandle __thiscall FTimerManager::GenerateHandle(FTimerManager *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FTimerHandle FVar3;
  undefined4 in_register_00000014;
  ulonglong *puVar4;
  ulong64 uVar5;
  uint in_R8D;
  undefined1 local_res18 [8];
  
  puVar4 = (ulonglong *)CONCAT44(in_register_00000014,param_1);
  LastAssignedSerialNumber = LastAssignedSerialNumber + 1;
  uVar5 = LastAssignedSerialNumber;
  if (LastAssignedSerialNumber == 0x10000000000) {
    local_res18[0] = 0;
    uVar5 = 0x10000000000;
    bVar2 = `FTimerManager::GenerateHandle'::__l3::<lambda_1>::operator()(local_res18);
    if (!bVar2) {
      uVar5 = 1;
    }
  }
  *puVar4 = 0;
  if (0xffffff < in_R8D) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0 && Index < MaxIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\TimerHandle.h"
                       ,0x3d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3.Handle = (*pcVar1)();
      return (FTimerHandle)FVar3.Handle;
    }
  }
  if (0xffffffffff < uVar5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SerialNumber < MaxSerialNumber",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\TimerHandle.h"
                       ,0x3e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3.Handle = (*pcVar1)();
      return (FTimerHandle)FVar3.Handle;
    }
  }
  *puVar4 = uVar5 << 0x18 | (ulonglong)in_R8D;
  return (FTimerHandle)(ulong64)puVar4;
}

// GetStatId @ 1488c4ca0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TStatId __thiscall FTimerManager::GetStatId(FTimerManager *this)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_FTimerManager::GetStatId(void)const_::_2_::FStat_FTimerManager>
  FVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_FTimerManager ==
          (FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_FTimerManager::GetStatId(void)const_::_2_::FStat_FTimerManager>
           )0x0) {
        pFVar1 = ::FName::FName(&local_res10,"FTimerManager");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_FTimerManager,*pFVar1,L"FTimerManager",
                   "STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",true,true,ST_int64,true,
                   false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar2 = StatPtr_FTimerManager;
  if (StatPtr_FTimerManager ==
      (FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_FTimerManager::GetStatId(void)const_::_2_::FStat_FTimerManager>
       )0x0) {
    pFVar1 = ::FName::FName(&local_res10,"FTimerManager");
    FVar2 = (FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_FTimerManager::GetStatId(void)const_::_2_::FStat_FTimerManager>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_FTimerManager,*pFVar1,
                         L"FTimerManager","STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",true
                         ,true,ST_int64,true,false,MCR_Invalid);
  }
  in_RDX->Name = (TAtomic<FMinimalName>)FVar2;
  return (TStatId)in_RDX;
}

// GetTimer @ 1488c6c40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FTimerData * __thiscall FTimerManager::GetTimer(FTimerManager *this,FTimerHandle *param_1)

{
  return (FTimerData *)
         ((ulonglong)((uint)param_1->Handle & 0xffffff) * 0x60 + *(longlong *)&this->Timers);
}

// GetTimerElapsed @ 1488c6c60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

float __thiscall FTimerManager::GetTimerElapsed(FTimerManager *this,FTimerHandle param_1)

{
  FTimerData *pFVar1;
  FTimerHandle local_res10 [3];
  
  local_res10[0].Handle = param_1.Handle;
  pFVar1 = FindTimer(this,local_res10);
  if (pFVar1 == (FTimerData *)0x0) {
    return __real_bf800000;
  }
  if ((pFVar1->Status != Active) && (pFVar1->Status != Executing)) {
    return (float)((double)pFVar1->Rate - pFVar1->ExpireTime);
  }
  return (float)((double)pFVar1->Rate - (pFVar1->ExpireTime - this->InternalTime));
}

// GetTimerRemaining @ 1488c6ce0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

float __thiscall FTimerManager::GetTimerRemaining(FTimerManager *this,FTimerHandle param_1)

{
  FTimerData *pFVar1;
  FTimerHandle local_res10 [3];
  
  local_res10[0].Handle = param_1.Handle;
  pFVar1 = FindTimer(this,local_res10);
  if (pFVar1 == (FTimerData *)0x0) {
    return __real_bf800000;
  }
  if (pFVar1->Status != Active) {
    if (pFVar1->Status != Executing) {
      return (float)pFVar1->ExpireTime;
    }
    return 0.0;
  }
  return (float)(pFVar1->ExpireTime - this->InternalTime);
}

// InternalClearAllTimers @ 1488cbda0

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

void __thiscall FTimerManager::InternalClearAllTimers(FTimerManager *this,void *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FTimerManager *this_00;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_ClearAllTimers> FVar8;
  TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator> *pTVar9;
  byte bVar10;
  longlong lVar11;
  FNameEntryId FVar12;
  FName FVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  undefined1 auStackY_198 [32];
  undefined1 local_138 [4];
  FColor_u_0 local_134;
  uint local_130;
  uint uStack_12c;
  FName local_128;
  FName local_120;
  TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator> *local_110;
  uint uStack_108;
  uint uStack_104;
  TBitArray<FDefaultBitArrayAllocator> *local_100;
  undefined4 uStack_f8;
  uint uStack_f4;
  uint local_f0;
  uint uStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  FTimerManager *local_e0;
  TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator> *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  FName local_a8 [2];
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  uVar15 = 0;
  FVar8 = StatPtr_STAT_ClearAllTimers;
  local_e0 = this;
  if (StatPtr_STAT_ClearAllTimers == (FThreadSafeStaticStat<FStat_STAT_ClearAllTimers>)0x0) {
    pFVar7 = ::FName::FName(local_a8,"STAT_ClearAllTimers");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_ClearAllTimers>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ClearAllTimers,*pFVar7,
                       L"ClearAllTimers","STATGROUP_Engine","STATCAT_Advanced",L"Engine",true,true,
                       ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  local_120.ComparisonIndex.Value = 0;
  local_120.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar17 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar17 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_134.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_134._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_128.ComparisonIndex.Value = FVar12.Value;
        local_128.Number = uVar17;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_128,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TimerManager.cpp"
                   ,0x2f2);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_130 = FVar12.Value;
      uStack_12c = uVar17;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar4 = true;
      goto LAB_1488cbf04;
    }
  }
  bVar4 = false;
  FVar13 = local_120;
LAB_1488cbf04:
  if ((param_1 != (void *)0x0) &&
     (pTVar9 = TMapBase<void_const_*,TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>,0>_>
               ::Find((TMapBase<void_const_*,TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>,0>_>
                       *)&this->ObjectToTimers,param_1),
     pTVar9 != (TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator> *)0x0)) {
    local_98._0_8_ = 0;
    local_98._8_8_ = 0;
    local_78 = (uint *)0x0;
    local_70 = 0;
    local_6c = 0x80;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_58 = (ForElementType<FSetElementId>)0x0;
    local_50 = 0;
    TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>::operator=
              ((TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator> *)local_98,
               pTVar9);
    uVar17 = local_70;
    uStack_104 = 1;
    uStack_f4 = uVar15;
    local_f0 = uVar15;
    if (local_70 != 0) {
      puVar16 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar16 = local_78;
      }
      uVar18 = *puVar16;
      local_f0 = 0;
      uVar15 = 0;
      while (uVar18 == 0) {
        lVar11 = (longlong)(int)uVar15;
        local_f0 = local_f0 + 0x20;
        uVar15 = uVar15 + 1;
        uStack_f4 = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar15)
        goto LAB_1488cbfe1;
        uVar18 = puVar16[lVar11 + 1];
      }
      uStack_104 = -uVar18 & uVar18;
      uVar1 = (ulonglong)uStack_104 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_130 = (uint)lVar11;
      uStack_f4 = (local_f0 - 1) + local_130;
      if ((int)local_70 < (int)uStack_f4) {
        uStack_f4 = local_70;
      }
    }
LAB_1488cbfe1:
    local_100 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    uVar18 = local_70 & 0xffffffe0;
    iStack_e8 = local_98._8_4_ - local_64;
    uStack_f8 = 0xffffffff;
    TStack_d0.CurrentBitIndex = uStack_f4;
    TStack_d0.UnvisitedBitMask = 0xffffffff;
    TStack_d0._padding_ = CONCAT44(uStack_104,uVar15);
    iVar14 = (int)local_70 >> 5;
    TStack_d0._28_4_ = uStack_f4;
    TStack_d0.BaseBitIndex = local_f0;
    uStack_b0 = CONCAT44(uStack_e4,iStack_e8);
    bVar10 = (byte)local_70;
    local_110 = (TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator> *)local_98;
    uStack_108 = uVar15;
    uStack_ec = uStack_f4;
    local_d8 = (TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator> *)local_98;
    TStack_d0.Array = local_100;
    if (((int)local_70 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this_00 = local_e0;
    if (uVar17 != local_70) {
      puVar16 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar16 = local_78;
      }
      uVar15 = -1 << (bVar10 & 0x1f) & puVar16[iVar14];
      while (uVar15 == 0) {
        lVar11 = (longlong)iVar14;
        uVar18 = uVar18 + 0x20;
        iVar14 = iVar14 + 1;
        uVar17 = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_1488cc0dd;
        uVar15 = puVar16[lVar11 + 1];
      }
      uVar1 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar17 = (int)lVar11 + -1 + uVar18;
      if ((int)local_70 < (int)uVar17) {
        uVar17 = local_70;
      }
    }
LAB_1488cc0dd:
    while( true ) {
      pTVar9 = local_d8;
      if (*(int *)&(local_d8->Elements).field_0x8 - *(int *)&(local_d8->Elements).field_0x34 !=
          (int)uStack_b0) {
        `TSparseArray<TSparseSetElement<FTimerHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_138);
      }
      if (((TStack_d0.CurrentBitIndex == uVar17) &&
          (TStack_d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
         (pTVar9 == (TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator> *)
                    local_98)) break;
      InternalClearTimer(this_00,(FTimerHandle)
                                 *(ulong64 *)
                                  (*(longlong *)&pTVar9->Elements +
                                  (longlong)TStack_d0.CurrentBitIndex * 0x10));
      TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
    }
    local_50 = 0;
    if (local_58 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_58);
    }
    TSparseArray<TSparseSetElement<FTimerHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FTimerHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FTimerHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_98);
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar4) {
    FThreadStats::AddMessage(FVar13,CycleScopeEnd);
  }
  return;
}

// InternalClearTimer @ 1488cc1e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FTimerManager::InternalClearTimer(FTimerManager *this,FTimerHandle param_1)

{
  int *piVar1;
  char cVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_ClearTimer> FVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar11;
  FNameEntryId FVar12;
  FName FVar13;
  longlong lVar14;
  FColor_u_0 local_res8 [2];
  FTimerHandle local_res10;
  FName local_res18;
  LARGE_INTEGER local_res20;
  FName local_68;
  FName local_60;
  FStatMessage local_50 [2];
  
  FVar10 = StatPtr_STAT_ClearTimer;
  local_res10.Handle = param_1.Handle;
  if (StatPtr_STAT_ClearTimer == (FThreadSafeStaticStat<FStat_STAT_ClearTimer>)0x0) {
    pFVar9 = ::FName::FName(&local_68,"STAT_ClearTimer");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_ClearTimer>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ClearTimer,*pFVar9,L"ClearTimer",
                        "STATGROUP_Engine","STATCAT_Advanced",L"Engine",true,true,ST_int64,true,
                        false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar10;
  bVar4 = false;
  bVar6 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Value == 0) && (uVar11 == 0)) {
LAB_1488cc333:
    bVar5 = false;
    FVar13 = local_60;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar12.Value;
        local_res18.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TimerManager.cpp"
                   ,0x2c2);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1488cc333;
    local_res20.s.LowPart = FVar12.Value;
    local_res20.s.HighPart = uVar11;
    FThreadStats::AddMessage(FVar13,CycleScopeStart);
    bVar5 = true;
  }
  bVar7 = IsInGameThread();
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TimerManager.cpp"
                       ,0x2c5,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar14 = (ulonglong)((uint)param_1.Handle & 0xffffff) * 0x60;
  cVar2 = *(char *)(lVar14 + 1 + *(longlong *)&this->Timers);
  if (cVar2 == '\0') {
    iVar8 = TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>::Remove
                      (&this->PendingTimerSet,&local_res10);
    if (iVar8 != 1) {
      iVar8 = 0x2cd;
LAB_1488cc461:
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumRemoved == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TimerManager.cpp"
                         ,iVar8,L"");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  else {
    if (cVar2 == '\x01') {
      *(undefined1 *)(lVar14 + 1 + *(longlong *)&this->Timers) = 4;
      goto LAB_1488cc494;
    }
    if (cVar2 == '\x02') {
      iVar8 = TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>::Remove
                        (&this->PausedTimerSet,&local_res10);
      if (iVar8 != 1) {
        iVar8 = 0x2dd;
        goto LAB_1488cc461;
      }
    }
    else {
      if (cVar2 != '\x03') {
        if (cVar2 != '\x04') {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TimerManager.cpp"
                             ,0x2ec,L"");
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        goto LAB_1488cc494;
      }
      if ((this->CurrentlyExecutingTimer).Handle != param_1.Handle) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurrentlyExecutingTimer == InHandle",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TimerManager.cpp"
                           ,0x2e3,L"");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      (this->CurrentlyExecutingTimer).Handle = 0;
    }
  }
  RemoveTimer(this,param_1);
LAB_1488cc494:
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_50[0].NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_50[0].NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_50[0].StatData.Pad[4] = '\0';
      local_50[0].StatData.Pad[5] = '\0';
      local_50[0].StatData.Pad[6] = '\0';
      local_50[0].StatData.Pad[7] = '\0';
      local_50[0].StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_50[0].StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_50[0].StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_50[0].StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_50);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// InternalGetTimerElapsed @ 1488cc5a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

float __thiscall FTimerManager::InternalGetTimerElapsed(FTimerManager *this,FTimerData *param_1)

{
  if (param_1 == (FTimerData *)0x0) {
    return __real_bf800000;
  }
  if ((param_1->Status != Active) && (param_1->Status != Executing)) {
    return (float)((double)param_1->Rate - param_1->ExpireTime);
  }
  return (float)((double)param_1->Rate - (param_1->ExpireTime - this->InternalTime));
}

// InternalGetTimerRate @ 1488cc600

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

float __thiscall FTimerManager::InternalGetTimerRate(FTimerManager *this,FTimerData *param_1)

{
  if (param_1 != (FTimerData *)0x0) {
    return param_1->Rate;
  }
  return __real_bf800000;
}

// InternalGetTimerRemaining @ 1488cc620

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

float __thiscall FTimerManager::InternalGetTimerRemaining(FTimerManager *this,FTimerData *param_1)

{
  if (param_1 == (FTimerData *)0x0) {
    return __real_bf800000;
  }
  if (param_1->Status != Active) {
    if (param_1->Status != Executing) {
      return (float)param_1->ExpireTime;
    }
    return 0.0;
  }
  return (float)(param_1->ExpireTime - this->InternalTime);
}

// InternalSetTimer @ 1488cc670

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

void __thiscall
FTimerManager::InternalSetTimer
          (FTimerManager *this,FTimerHandle *param_1,FTimerUnifiedDelegate *param_2,float param_3,
          FTimerManagerTimerParameters *param_4)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_SetTimer> FVar8;
  FTimerData *pFVar9;
  UWorld *this_00;
  FLevelCollection *pFVar10;
  FTimerHandle FVar11;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FName FVar12;
  ulonglong uVar13;
  float fVar14;
  undefined1 auStackY_1a8 [32];
  FName local_148;
  FColor_u_0 local_140;
  undefined1 local_13c [8];
  uint local_134;
  FName local_130;
  LARGE_INTEGER local_120;
  FStatMessage local_118;
  FTimerHeapOrder local_108;
  FName local_f8;
  undefined1 local_f0 [24];
  byte local_d8;
  undefined2 local_d7;
  float local_d4;
  double local_d0;
  FTimerUnifiedDelegate local_c8;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  FVar8 = StatPtr_STAT_SetTimer;
  if (StatPtr_STAT_SetTimer == (FThreadSafeStaticStat<FStat_STAT_SetTimer>)0x0) {
    pFVar7 = ::FName::FName(&local_f8,"STAT_SetTimer");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_SetTimer>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SetTimer,*pFVar7,L"SetTimer",
                       "STATGROUP_Engine","STATCAT_Advanced",L"Engine",true,true,ST_int64,true,false
                       ,MCR_Invalid);
  }
  local_130.ComparisonIndex.Value = 0;
  local_130.Number = 0;
  bVar3 = false;
  bVar5 = false;
  FVar12 = *(FName *)FVar8;
  if ((FVar12.ComparisonIndex.Value.Value != 0) || (FVar12.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_140.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_140._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_13c._4_4_ = FVar12.ComparisonIndex.Value.Value;
        local_134 = FVar12.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)(local_13c + 4),(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TimerManager.cpp"
                   ,0x259);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_148 = FVar12;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar4 = true;
      goto LAB_1488cc7d9;
    }
  }
  bVar4 = false;
  FVar12 = local_130;
LAB_1488cc7d9:
  bVar6 = IsInGameThread();
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TimerManager.cpp"
                       ,0x25c,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar9 = FindTimer(this,param_1);
  if (pFVar9 != (FTimerData *)0x0) {
    InternalClearTimer(this,(FTimerHandle)param_1->Handle);
  }
  if (param_3 <= 0.0) {
    param_1->Handle = 0;
  }
  else {
    local_d8 = local_d8 & 0xf8;
    local_d7 = 1;
    local_d0 = 0.0;
    local_c8.VariantDelegate._0_8_ = 0;
    local_c8.VariantDelegate.TypeIndex = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_d4 = 0.0;
    FTimerUnifiedDelegate::operator=(&local_c8,param_2);
    local_d8 = (param_4->bMaxOncePerFrame & 1U) * '\x02' | local_d8 & 0xfc | param_4->bLoop & 1U;
    local_d4 = param_3;
    bVar6 = FTimerUnifiedDelegate::IsBound(&local_c8);
    local_d8 = local_d8 & 0xfb | bVar6 << 2;
    if (this->OwningGameInstance != (UGameInstance *)0x0) {
      this_00 = UGameInstance::GetWorld(this->OwningGameInstance);
      if (this_00 != (UWorld *)0x0) {
        pFVar10 = UWorld::GetActiveLevelCollection(this_00);
        if (pFVar10 != (FLevelCollection *)0x0) {
          pFVar10 = UWorld::GetActiveLevelCollection(this_00);
          local_d7 = (ushort)pFVar10->CollectionType << 8;
        }
      }
    }
    fVar14 = param_4->FirstDelay;
    if (param_4->FirstDelay < 0.0) {
      fVar14 = param_3;
    }
    local_d0 = (double)fVar14;
    if (this->LastTickedFrame == GFrameCounter) {
      local_d0 = local_d0 + this->InternalTime;
      local_d7 = CONCAT11(local_d7._1_1_,1);
      FVar11 = AddTimer(this,(FTimerData *)local_f0);
      local_148 = *(FName *)FVar11.Handle;
      local_108.NumTimers = *(int *)&(this->Timers).field_0x8 - *(int *)&(this->Timers).field_0x34;
      local_108.Timers = &this->Timers;
      TArray<FTimerHandle,TSizedDefaultAllocator<32>_>::HeapPush<FTimerHeapOrder>
                (&this->ActiveTimerHeap,(FTimerHandle *)&local_148,&local_108);
    }
    else {
      local_d7 = (ushort)local_d7._1_1_ << 8;
      FVar11 = AddTimer(this,(FTimerData *)(local_f0 + 8));
      local_148 = *(FName *)FVar11.Handle;
      TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>::
      Emplace<FTimerHandle_const_&>
                (&this->PendingTimerSet,(FTimerHandle *)local_13c,(bool *)&local_148);
    }
    uVar13 = (ulonglong)local_c8.VariantDelegate.TypeIndex;
    param_1->Handle = (ulong64)local_148;
    if (3 < local_c8.VariantDelegate.TypeIndex) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar13] !=
        UE::Core::Private::TDestructorCaller<std::nullptr_t>::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar13])(&local_c8);
    }
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_118.NameAndInfo.Index = FVar12.ComparisonIndex.Value;
      local_118.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_120);
      local_118.StatData.Pad[4] = '\0';
      local_118.StatData.Pad[5] = '\0';
      local_118.StatData.Pad[6] = '\0';
      local_118.StatData.Pad[7] = '\0';
      local_118.StatData.Pad[0] = local_120.s.LowPart._0_1_;
      local_118.StatData.Pad[1] = local_120.s.LowPart._1_1_;
      local_118.StatData.Pad[2] = local_120.s.LowPart._2_1_;
      local_118.StatData.Pad[3] = local_120.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_118);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// InternalSetTimer @ 1488ccae0

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
FTimerManager::InternalSetTimer
          (FTimerManager *this,FTimerHandle *param_1,FTimerUnifiedDelegate *param_2,float param_3,
          bool param_4,float param_5)

{
  FTimerManagerTimerParameters local_18 [3];
  
  local_18[0].bLoop = param_4;
  local_18[0].FirstDelay = param_5;
  local_18[0].bMaxOncePerFrame = false;
  InternalSetTimer(this,param_1,param_2,param_3,local_18);
  return;
}

// InternalSetTimerForNextTick @ 1488ccb20

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

FTimerHandle __thiscall
FTimerManager::InternalSetTimerForNextTick(FTimerManager *this,FTimerUnifiedDelegate *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_SetTimerForNextTick> FVar9;
  FTimerHandle FVar10;
  UWorld *this_00;
  FLevelCollection *pFVar11;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FNameEntryId FVar12;
  FName FVar13;
  FTimerUnifiedDelegate *in_R8;
  ulonglong uVar14;
  undefined1 auStackY_188 [32];
  FTimerHandle local_128;
  FColor_u_0 local_120 [2];
  FName local_118;
  FName local_110;
  LARGE_INTEGER local_100;
  FStatMessage local_f8;
  FTimerHeapOrder local_e8;
  FName local_d8;
  undefined1 local_d0 [24];
  byte local_b8;
  undefined2 local_b7;
  undefined4 local_b4;
  double local_b0;
  FTimerUnifiedDelegate local_a8;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_188;
  FVar9 = StatPtr_STAT_SetTimerForNextTick;
  if (StatPtr_STAT_SetTimerForNextTick == (FThreadSafeStaticStat<FStat_STAT_SetTimerForNextTick>)0x0
     ) {
    pFVar8 = ::FName::FName(&local_d8,"STAT_SetTimerForNextTick");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_SetTimerForNextTick>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SetTimerForNextTick,*pFVar8,
                       L"SetTimeForNextTick","STATGROUP_Engine","STATCAT_Advanced",L"Engine",true,
                       true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar9;
  bVar3 = false;
  bVar5 = false;
  local_110.ComparisonIndex.Value = 0;
  local_110.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar7 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_120[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_120[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_118.ComparisonIndex.Value = FVar12.Value;
        local_118.Number = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_118,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TimerManager.cpp"
                   ,0x298);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_128.Handle._0_4_ = FVar12.Value;
      local_128.Handle._4_4_ = uVar7;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar4 = true;
      goto LAB_1488ccc80;
    }
  }
  bVar4 = false;
  FVar13 = local_110;
LAB_1488ccc80:
  bVar6 = IsInGameThread();
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TimerManager.cpp"
                       ,0x29b,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      FVar10.Handle = (*pcVar2)();
      return (FTimerHandle)FVar10.Handle;
    }
  }
  local_a8.VariantDelegate._0_8_ = 0;
  local_a8.VariantDelegate.TypeIndex = 0;
  local_b8 = local_b8 & 0xf8 | 4;
  local_b4 = 0;
  local_b0 = 0.0;
  local_b7 = 1;
  local_68 = 0;
  uStack_60 = 0;
  FTimerUnifiedDelegate::operator=(&local_a8,in_R8);
  local_b0 = this->InternalTime;
  if (this->OwningGameInstance != (UGameInstance *)0x0) {
    this_00 = UGameInstance::GetWorld(this->OwningGameInstance);
    if (this_00 != (UWorld *)0x0) {
      pFVar11 = UWorld::GetActiveLevelCollection(this_00);
      if (pFVar11 != (FLevelCollection *)0x0) {
        pFVar11 = UWorld::GetActiveLevelCollection(this_00);
        local_b7 = (ushort)pFVar11->CollectionType << 8;
      }
    }
  }
  if ((GuaranteeEngineTickDelay == 0) || (this->LastTickedFrame == GFrameCounter)) {
    *(undefined8 *)&param_1->VariantDelegate = 0;
    local_b7 = CONCAT11(local_b7._1_1_,1);
    FVar10 = AddTimer(this,(FTimerData *)(local_d0 + 8));
    *(undefined8 *)&param_1->VariantDelegate = *(undefined8 *)FVar10.Handle;
    local_e8.Timers = &this->Timers;
    local_e8.NumTimers = *(int *)&(this->Timers).field_0x8 - *(int *)&(this->Timers).field_0x34;
    TArray<FTimerHandle,TSizedDefaultAllocator<32>_>::HeapPush<FTimerHeapOrder>
              (&this->ActiveTimerHeap,(FTimerHandle *)param_1,&local_e8);
  }
  else {
    local_b0 = 0.0;
    *(undefined8 *)&param_1->VariantDelegate = 0;
    local_b7 = (ushort)local_b7._1_1_ << 8;
    FVar10 = AddTimer(this,(FTimerData *)local_d0);
    *(undefined8 *)&param_1->VariantDelegate = *(undefined8 *)FVar10.Handle;
    TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>::
    Emplace<FTimerHandle_const_&>(&this->PendingTimerSet,&local_128,(bool *)param_1);
  }
  uVar14 = (ulonglong)local_a8.VariantDelegate.TypeIndex;
  if (3 < local_a8.VariantDelegate.TypeIndex) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      FVar10.Handle = (*pcVar2)();
      return (FTimerHandle)FVar10.Handle;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar14] !=
      UE::Core::Private::TDestructorCaller<std::nullptr_t>::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar14])(&local_a8);
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_f8.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_f8.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_100);
      local_f8.StatData.Pad[4] = '\0';
      local_f8.StatData.Pad[5] = '\0';
      local_f8.StatData.Pad[6] = '\0';
      local_f8.StatData.Pad[7] = '\0';
      local_f8.StatData.Pad[0] = local_100.s.LowPart._0_1_;
      local_f8.StatData.Pad[1] = local_100.s.LowPart._1_1_;
      local_f8.StatData.Pad[2] = local_100.s.LowPart._2_1_;
      local_f8.StatData.Pad[3] = local_100.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_f8);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return (FTimerHandle)(ulong64)param_1;
}

// K2_FindDynamicTimerHandle @ 1488cd520

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FTimerHandle __thiscall
FTimerManager::K2_FindDynamicTimerHandle(FTimerManager *this,FTimerDynamicDelegate *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  atomic<unsigned___int64> aVar7;
  code *pcVar8;
  TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator> *pTVar9;
  bool bVar10;
  UObject *pUVar11;
  TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator> *pTVar12;
  FTimerHandle FVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 *puVar19;
  uint *puVar20;
  undefined1 local_res18 [8];
  int local_res20;
  FWeakObjectPtr local_f8;
  TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator> *local_f0;
  int iStack_e8;
  uint uStack_e4;
  undefined1 *local_e0;
  undefined4 uStack_d8;
  int iStack_d4;
  int local_d0;
  int iStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator> *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  FDestructionSentinel local_90;
  FReadAccessScope local_78;
  FReadAccessScope local_60;
  
  *(undefined8 *)param_1 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (in_R8,(FWriteAccessScope *)&local_90);
  pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)(in_R8 + 1));
  if (local_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
  }
  if ((pUVar11 != (UObject *)0x0) &&
     (pTVar12 = TMapBase<void_const_*,TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>,0>_>
                ::Find((TMapBase<void_const_*,TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>,0>_>
                        *)&this->ObjectToTimers,pUVar11),
     pTVar12 != (TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator> *)0x0)) {
    iVar4 = *(int *)&(pTVar12->Elements).field_0x28;
    puVar1 = &(pTVar12->Elements).field_0x10;
    iStack_e8 = 0;
    local_d0 = 0;
    uStack_e4 = 1;
    iStack_d4 = 0;
    if (iVar4 != 0) {
      puVar20 = *(uint **)&(pTVar12->Elements).field_0x20;
      if (puVar20 == (uint *)0x0) {
        puVar20 = (uint *)puVar1;
      }
      uVar18 = *puVar20;
      while (uVar18 == 0) {
        lVar14 = (longlong)iStack_e8;
        local_d0 = local_d0 + 0x20;
        iStack_e8 = iStack_e8 + 1;
        iStack_d4 = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_e8) goto LAB_1488cd63d;
        uVar18 = puVar20[lVar14 + 1];
      }
      uStack_e4 = -uVar18 & uVar18;
      uVar3 = (ulonglong)uStack_e4 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_res20 = (int)lVar14;
      iStack_d4 = local_res20 + -1 + local_d0;
      if (iVar4 < iStack_d4) {
        iStack_d4 = iVar4;
      }
    }
LAB_1488cd63d:
    uVar18 = *(uint *)&(pTVar12->Elements).field_0x28;
    uVar17 = uVar18 & 0xffffffe0;
    iStack_c8 = *(int *)&(pTVar12->Elements).field_0x8 - *(int *)&(pTVar12->Elements).field_0x34;
    uStack_d8 = 0xffffffff;
    TStack_b8._padding_ = CONCAT44(uStack_e4,iStack_e8);
    TStack_b8.CurrentBitIndex = iStack_d4;
    TStack_b8.UnvisitedBitMask = 0xffffffff;
    iVar16 = (int)uVar18 >> 5;
    TStack_b8._28_4_ = iStack_d4;
    TStack_b8.BaseBitIndex = local_d0;
    uStack_98 = CONCAT44(uStack_c4,iStack_c8);
    local_f0 = pTVar12;
    local_e0 = puVar1;
    iStack_cc = iStack_d4;
    local_c0 = pTVar12;
    TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar18 < 0) || (iVar4 < (int)uVar18)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      FVar13.Handle = (*pcVar8)();
      return (FTimerHandle)FVar13.Handle;
    }
    uVar5 = *(uint *)&(pTVar12->Elements).field_0x28;
    if (uVar18 != uVar5) {
      puVar19 = *(undefined1 **)&(pTVar12->Elements).field_0x20;
      if (puVar19 == (undefined1 *)0x0) {
        puVar19 = puVar1;
      }
      uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar16 * 4);
      while (uVar18 == 0) {
        lVar14 = (longlong)iVar16;
        uVar17 = uVar17 + 0x20;
        iVar16 = iVar16 + 1;
        uVar18 = uVar5;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
        goto LAB_1488cd740;
        uVar18 = *(uint *)(puVar19 + lVar14 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      uVar18 = (int)lVar14 + -1 + uVar17;
      if ((int)uVar5 < (int)uVar18) {
        uVar18 = uVar5;
      }
    }
LAB_1488cd740:
    do {
      pTVar9 = local_c0;
      if (*(int *)&(local_c0->Elements).field_0x8 - *(int *)&(local_c0->Elements).field_0x34 !=
          (int)uStack_98) {
        `TSparseArray<TSparseSetElement<FTimerHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_b8.CurrentBitIndex == uVar18) &&
          (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar9 == pTVar12)) break;
      uVar6 = *(undefined8 *)
               (*(longlong *)&pTVar9->Elements + (longlong)TStack_b8.CurrentBitIndex * 0x10);
      lVar15 = (ulonglong)((uint)uVar6 & 0xffffff) * 0x60;
      lVar14 = *(longlong *)&this->Timers;
      if ((*(char *)(lVar15 + 1 + lVar14) != '\x04') &&
         (lVar2 = lVar15 + lVar14, *(char *)(lVar15 + 0x40 + lVar14) == '\x02')) {
        local_f8.ObjectIndex = 0;
        local_f8.ObjectSerialNumber = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(in_R8,&local_60);
        local_f8 = *(FWeakObjectPtr *)(in_R8 + 1);
        aVar7 = in_R8[2].AccessDetector.State;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_60);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x10),
                   &local_78);
        if ((((((FWeakObjectPtr *)(lVar2 + 0x18))->ObjectIndex == local_f8.ObjectIndex) &&
             (*(int *)(lVar2 + 0x1c) == local_f8.ObjectSerialNumber)) ||
            ((bVar10 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar2 + 0x18)), !bVar10 &&
             (bVar10 = FWeakObjectPtr::IsValid(&local_f8), !bVar10)))) &&
           (*(atomic<unsigned___int64> *)(lVar2 + 0x20) == aVar7)) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_78);
          *(undefined8 *)param_1 = uVar6;
          break;
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_78);
      }
      TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
    } while( true );
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&in_R8->AccessDetector);
  return (FTimerHandle)(ulong64)param_1;
}

// ListTimers @ 1488cd8b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FTimerManager::ListTimers(FTimerManager *this)

{
  TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator> *pTVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  FTimerData *pFVar5;
  code *pcVar6;
  TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  int iVar9;
  FOutputDeviceRedirector *pFVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  ForAnyElementType FVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  undefined1 *puVar22;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_158;
  ForAnyElementType local_150;
  undefined8 local_148;
  FTimerData *local_140;
  TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator> *local_138;
  int iStack_130;
  uint uStack_12c;
  undefined1 *local_128;
  undefined4 uStack_120;
  int iStack_11c;
  int local_118;
  undefined4 uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  ulonglong local_108;
  int local_100;
  int local_fc;
  int local_f8;
  FTimerHandle local_f0;
  TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator> *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator> *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  undefined4 local_6c;
  undefined4 local_4c;
  
  bVar8 = IsInGameThread();
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TimerManager.cpp"
                         ,0x4a2,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar19 = (this->ActiveTimerHeap).ArrayNum;
  iVar13 = 0;
  iVar20 = 0;
  local_150.Data = (FScriptContainerElement *)0x0;
  local_148 = 0;
  if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
  }
  if (0 < (int)uVar19) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar19,&local_150,0,(int *)((longlong)&local_148 + 4));
  }
  pFVar14 = (this->ActiveTimerHeap).AllocatorInstance.Data;
  iVar4 = (this->ActiveTimerHeap).ArrayNum;
  pFVar2 = pFVar14 + (longlong)iVar4 * 8;
  while( true ) {
    if ((this->ActiveTimerHeap).ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FTimerHandle_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar14 == pFVar2) break;
    local_f0.Handle = *(ulong64 *)pFVar14;
    local_140 = FindTimer(this,&local_f0);
    if (local_140 != (FTimerData *)0x0) {
      if (((local_150.Data <= (FScriptContainerElement *)&local_140) &&
          ((FScriptContainerElement *)&local_140 < local_150.Data + (longlong)local_148._4_4_ * 8))
         && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = (int)local_148;
      if ((int)local_148 == local_148._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_150,(int *)((longlong)&local_148 + 4));
      }
      local_148 = CONCAT44(local_148._4_4_,iVar9 + 1);
      *(FTimerData **)(local_150.Data + (longlong)iVar9 * 8) = local_140;
    }
    pFVar14 = pFVar14 + 8;
  }
  if (4 < (byte)LogEngine._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogEngine);
  }
  iVar4 = (int)local_148;
  pFVar2 = local_150.Data + (longlong)(int)local_148 * 8;
  FVar15.Data = local_150.Data;
  while( true ) {
    if ((int)local_148 != iVar4) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FTimerData_const_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (FVar15.Data == pFVar2) break;
    pFVar5 = *(FTimerData **)FVar15.Data;
    if ((pFVar5 == (FTimerData *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Data",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TimerManager.cpp"
                           ,0x4b1,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar10 = GetGlobalLogSingleton();
    ::`anonymous_namespace'::DescribeFTimerDataSafely((FOutputDevice *)pFVar10,pFVar5);
    FVar15.Data = FVar15.Data + 8;
  }
  if (4 < (byte)LogEngine._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogEngine);
  }
  iVar4 = *(int *)&(this->PausedTimerSet).Elements.field_0x28;
  local_128 = &(this->PausedTimerSet).Elements.field_0x10;
  local_138 = &this->PausedTimerSet;
  local_108 = 1;
  uStack_12c = 1;
  iVar9 = 0;
  iStack_11c = iVar9;
  iStack_130 = iVar20;
  local_118 = iVar9;
  if (iVar4 != 0) {
    puVar18 = *(uint **)&(this->PausedTimerSet).Elements.field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)local_128;
    }
    uStack_12c = *puVar18;
    local_118 = iVar13;
    iStack_130 = iVar13;
    while (uStack_12c == 0) {
      lVar11 = (longlong)iStack_130;
      local_118 = local_118 + 0x20;
      iStack_130 = iStack_130 + 1;
      uStack_12c = 1;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_130) goto LAB_1488cdbb2;
      uStack_12c = puVar18[lVar11 + 1];
    }
    uStack_12c = -uStack_12c & uStack_12c;
    uVar3 = (ulonglong)uStack_12c * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_100 = (int)lVar11;
    iStack_11c = local_118 + -1 + local_100;
    if (iVar4 < iStack_11c) {
LAB_1488cdbb2:
      iStack_11c = iVar4;
    }
  }
  puVar22 = &(this->PausedTimerSet).Elements.field_0x10;
  uStack_114 = local_6c;
  iStack_110 = *(int *)&(this->PausedTimerSet).Elements.field_0x8 -
               *(int *)&(this->PausedTimerSet).Elements.field_0x34;
  local_158 = *(uint *)&(this->PausedTimerSet).Elements.field_0x28;
  TStack_e0._padding_ = CONCAT44(uStack_12c,iStack_130);
  uStack_120 = 0xffffffff;
  TStack_e0.CurrentBitIndex = iStack_11c;
  TStack_e0.UnvisitedBitMask = 0xffffffff;
  uVar19 = local_158 & 0xffffffe0;
  iVar12 = (int)local_158 >> 5;
  TStack_e0._28_4_ = local_6c;
  TStack_e0.BaseBitIndex = local_118;
  uStack_c0 = CONCAT44(uStack_10c,iStack_110);
  local_e8 = local_138;
  TStack_e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_128;
  if ((((int)local_158 < 0) || (iVar4 < (int)local_158)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar21 = *(uint *)&(this->PausedTimerSet).Elements.field_0x28;
  if (local_158 != uVar21) {
    puVar17 = *(undefined1 **)&(this->PausedTimerSet).Elements.field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar22;
    }
    uVar16 = -1 << ((byte)local_158 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar12 * 4);
    while (uVar16 == 0) {
      lVar11 = (longlong)iVar12;
      uVar19 = uVar19 + 0x20;
      iVar12 = iVar12 + 1;
      local_158 = uVar21;
      if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
      goto LAB_1488cdcd0;
      uVar16 = *(uint *)(puVar17 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_fc = (int)lVar11;
    local_158 = local_fc + -1 + uVar19;
    if ((int)uVar21 < (int)local_158) {
      local_158 = uVar21;
    }
  }
LAB_1488cdcd0:
  while( true ) {
    pTVar1 = local_e8;
    if (*(int *)&(local_e8->Elements).field_0x8 - *(int *)&(local_e8->Elements).field_0x34 !=
        (int)uStack_c0) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<FTimerHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_e0.CurrentBitIndex == local_158) &&
        (TStack_e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar22)) &&
       (pTVar1 == &this->PausedTimerSet)) break;
    uVar19 = *(uint *)(*(longlong *)&pTVar1->Elements + (longlong)TStack_e0.CurrentBitIndex * 0x10);
    lVar11 = *(longlong *)&this->Timers;
    pFVar10 = GetGlobalLogSingleton();
    ::`anonymous_namespace'::DescribeFTimerDataSafely
              ((FOutputDevice *)pFVar10,
               (FTimerData *)((ulonglong)(uVar19 & 0xffffff) * 0x60 + lVar11));
    TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
  }
  if (4 < (byte)LogEngine._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogEngine);
  }
  local_128 = &(this->PendingTimerSet).Elements.field_0x10;
  iVar4 = *(int *)&(this->PendingTimerSet).Elements.field_0x28;
  pTVar1 = &this->PendingTimerSet;
  iStack_11c = iVar9;
  if (iVar4 != 0) {
    puVar18 = *(uint **)&(this->PendingTimerSet).Elements.field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)local_128;
    }
    uVar19 = *puVar18;
    iVar9 = iVar13;
    iVar20 = iVar13;
    while (uVar19 == 0) {
      lVar11 = (longlong)iVar20;
      iVar9 = iVar9 + 0x20;
      iVar20 = iVar20 + 1;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar20) goto LAB_1488cde17;
      uVar19 = puVar18[lVar11 + 1];
    }
    local_108 = (ulonglong)(-uVar19 & uVar19);
    uVar3 = local_108 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_f8 = (int)lVar11;
    iStack_11c = iVar9 + -1 + local_f8;
    if (iVar4 < iStack_11c) {
LAB_1488cde17:
      iStack_11c = iVar4;
    }
  }
  puVar22 = &(this->PendingTimerSet).Elements.field_0x10;
  uVar19 = *(uint *)&(this->PendingTimerSet).Elements.field_0x28;
  uStack_114 = local_4c;
  iStack_110 = *(int *)&(this->PendingTimerSet).Elements.field_0x8 -
               *(int *)&(this->PendingTimerSet).Elements.field_0x34;
  uStack_12c = (uint)local_108;
  uVar21 = uVar19 & 0xffffffe0;
  uStack_120 = 0xffffffff;
  TStack_b0._padding_ = CONCAT44(uStack_12c,iVar20);
  TStack_b0.CurrentBitIndex = iStack_11c;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar19 >> 5;
  TStack_b0._28_4_ = local_4c;
  TStack_b0.BaseBitIndex = iVar9;
  uStack_90 = CONCAT44(uStack_10c,iStack_110);
  iStack_130 = iVar20;
  local_118 = iVar9;
  local_138 = pTVar1;
  local_b8 = pTVar1;
  TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_128;
  if ((((int)uVar19 < 0) || (iVar4 < (int)uVar19)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar16 = *(uint *)&(this->PendingTimerSet).Elements.field_0x28;
  if (uVar19 != uVar16) {
    puVar17 = *(undefined1 **)&(this->PendingTimerSet).Elements.field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar22;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar13 * 4);
    while (uVar19 == 0) {
      lVar11 = (longlong)iVar13;
      uVar21 = uVar21 + 0x20;
      iVar13 = iVar13 + 1;
      uVar19 = uVar16;
      if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
      goto LAB_1488cdf30;
      uVar19 = *(uint *)(puVar17 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar19 = (int)lVar11 + -1 + uVar21;
    if ((int)uVar16 < (int)uVar19) {
      uVar19 = uVar16;
    }
  }
LAB_1488cdf30:
  while( true ) {
    pTVar7 = local_b8;
    if (*(int *)&(local_b8->Elements).field_0x8 - *(int *)&(local_b8->Elements).field_0x34 !=
        (int)uStack_90) {
      `TSparseArray<TSparseSetElement<FTimerHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_b0.CurrentBitIndex == uVar19) &&
        (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar22)) && (pTVar7 == pTVar1))
    break;
    uVar21 = *(uint *)(*(longlong *)&pTVar7->Elements + (longlong)TStack_b0.CurrentBitIndex * 0x10);
    lVar11 = *(longlong *)&this->Timers;
    pFVar10 = GetGlobalLogSingleton();
    ::`anonymous_namespace'::DescribeFTimerDataSafely
              ((FOutputDevice *)pFVar10,
               (FTimerData *)((ulonglong)(uVar21 & 0xffffff) * 0x60 + lVar11));
    TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
  }
  if (4 < (byte)LogEngine._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogEngine);
  }
  if (local_150.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.Data);
  }
  return;
}

// OnCrash @ 1488cf220

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FTimerManager::OnCrash(FTimerManager *this)

{
  TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator> *pTVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  FOutputDeviceRedirector *pFVar11;
  byte bVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  FTimerData *pFVar16;
  int iVar17;
  undefined1 *puVar18;
  int iVar19;
  uint *puVar20;
  int iVar21;
  uint uVar22;
  undefined1 *puVar23;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  uint local_140;
  undefined4 uStack_10c;
  undefined4 uStack_cc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator> *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined4 local_4c;
  
  if (2 < (byte)LogEngine._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEngine);
  }
  if (4 < (byte)LogEngine._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogEngine);
  }
  pFVar14 = (this->ActiveTimerHeap).AllocatorInstance.Data;
  iVar21 = 0;
  iVar4 = (this->ActiveTimerHeap).ArrayNum;
  pFVar2 = pFVar14 + (longlong)iVar4 * 8;
  while( true ) {
    if ((this->ActiveTimerHeap).ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FTimerHandle,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar14 == pFVar2) break;
    pFVar16 = (FTimerData *)
              ((ulonglong)(*(uint *)pFVar14 & 0xffffff) * 0x60 + *(longlong *)&this->Timers);
    if (pFVar16->Status == ActivePendingRemoval) {
      pFVar14 = pFVar14 + 8;
    }
    else {
      pFVar11 = GetGlobalLogSingleton();
      ::`anonymous_namespace'::DescribeFTimerDataSafely((FOutputDevice *)pFVar11,pFVar16);
      pFVar14 = pFVar14 + 8;
    }
  }
  if ((4 < (byte)LogEngine._0_1_) &&
     (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogEngine),
     4 < (byte)LogEngine._0_1_)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogEngine);
  }
  iVar4 = *(int *)&(this->PausedTimerSet).Elements.field_0x28;
  TStack_c0.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)&(this->PausedTimerSet).Elements.field_0x10;
  local_140 = 1;
  uVar22 = local_140;
  local_140 = 1;
  uVar9 = 1;
  iVar17 = 0;
  iVar19 = 0;
  iVar10 = 0;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->PausedTimerSet).Elements.field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)TStack_c0.Array;
    }
    uVar9 = *puVar20;
    while (uVar9 == 0) {
      lVar13 = (longlong)iVar17;
      iVar19 = iVar19 + 0x20;
      iVar17 = iVar17 + 1;
      uVar9 = 1;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_1488cf3c5;
      uVar9 = puVar20[lVar13 + 1];
    }
    uVar9 = -uVar9 & uVar9;
    uVar3 = (ulonglong)uVar9 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar10 = iVar19 + -1 + (int)lVar13;
    if (iVar4 < iVar10) {
LAB_1488cf3c5:
      iVar10 = iVar4;
    }
  }
  puVar23 = &(this->PausedTimerSet).Elements.field_0x10;
  local_res20 = *(uint *)&(this->PausedTimerSet).Elements.field_0x28;
  TStack_c0._padding_ = CONCAT44(uVar9,iVar17);
  TStack_c0.CurrentBitIndex = iVar10;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  uVar9 = local_res20 & 0xffffffe0;
  iVar17 = (int)local_res20 >> 5;
  TStack_c0._28_4_ = local_4c;
  TStack_c0.BaseBitIndex = iVar19;
  uStack_a0 = CONCAT44(uStack_10c,
                       *(int *)&(this->PausedTimerSet).Elements.field_0x8 -
                       *(int *)&(this->PausedTimerSet).Elements.field_0x34);
  bVar12 = (byte)local_res20;
  if ((((int)local_res20 < 0) || (iVar4 < (int)local_res20)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&(this->PausedTimerSet).Elements.field_0x28;
  uVar15 = local_res20;
  if (local_res20 != uVar5) {
    puVar18 = *(undefined1 **)&(this->PausedTimerSet).Elements.field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar23;
    }
    uVar15 = -1 << (bVar12 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar17 * 4);
    while (uVar15 == 0) {
      lVar13 = (longlong)iVar17;
      uVar9 = uVar9 + 0x20;
      iVar17 = iVar17 + 1;
      local_res20 = uVar5;
      uVar15 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_1488cf500;
      uVar15 = *(uint *)(puVar18 + lVar13 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_res20 = (int)lVar13 + -1 + uVar9;
    uVar15 = local_res20;
    if ((int)uVar5 < (int)local_res20) {
      local_res20 = uVar5;
      uVar15 = uVar5;
    }
  }
LAB_1488cf500:
  while( true ) {
    if (*(int *)&(this->PausedTimerSet).Elements.field_0x8 -
        *(int *)&(this->PausedTimerSet).Elements.field_0x34 != (int)uStack_a0) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<FTimerHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_c0.CurrentBitIndex == uVar15) &&
       (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar23)) break;
    uVar9 = *(uint *)(*(longlong *)&(this->PausedTimerSet).Elements +
                     (longlong)TStack_c0.CurrentBitIndex * 0x10);
    lVar13 = *(longlong *)&this->Timers;
    pFVar11 = GetGlobalLogSingleton();
    ::`anonymous_namespace'::DescribeFTimerDataSafely
              ((FOutputDevice *)pFVar11,
               (FTimerData *)((ulonglong)(uVar9 & 0xffffff) * 0x60 + lVar13));
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
  }
  if (4 < (byte)LogEngine._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogEngine);
  }
  TStack_90.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)&(this->PendingTimerSet).Elements.field_0x10;
  iVar4 = *(int *)&(this->PendingTimerSet).Elements.field_0x28;
  pTVar1 = &this->PendingTimerSet;
  iVar19 = 0;
  iVar17 = 0;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->PendingTimerSet).Elements.field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)TStack_90.Array;
    }
    local_140 = *puVar20;
    while (local_140 == 0) {
      lVar13 = (longlong)iVar21;
      iVar19 = iVar19 + 0x20;
      iVar21 = iVar21 + 1;
      local_140 = uVar22;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar21) goto LAB_1488cf639;
      local_140 = puVar20[lVar13 + 1];
    }
    local_140 = -local_140 & local_140;
    uVar3 = (ulonglong)local_140 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar17 = iVar19 + -1 + (int)lVar13;
    if (iVar4 < iVar17) {
LAB_1488cf639:
      iVar17 = iVar4;
    }
  }
  puVar23 = &(this->PendingTimerSet).Elements.field_0x10;
  uVar9 = *(uint *)&(this->PendingTimerSet).Elements.field_0x28;
  uVar22 = uVar9 & 0xffffffe0;
  TStack_90._padding_ = CONCAT44(local_140,iVar21);
  TStack_90.CurrentBitIndex = iVar17;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar21 = (int)uVar9 >> 5;
  TStack_90._28_4_ = iVar10;
  TStack_90.BaseBitIndex = iVar19;
  uStack_70 = CONCAT44(uStack_cc,
                       *(int *)&(this->PendingTimerSet).Elements.field_0x8 -
                       *(int *)&(this->PendingTimerSet).Elements.field_0x34);
  local_98 = pTVar1;
  if ((((int)uVar9 < 0) || (iVar4 < (int)uVar9)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&(this->PendingTimerSet).Elements.field_0x28;
  if (uVar9 != uVar5) {
    puVar18 = *(undefined1 **)&(this->PendingTimerSet).Elements.field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar23;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar21 * 4);
    while (uVar9 == 0) {
      lVar13 = (longlong)iVar21;
      uVar22 = uVar22 + 0x20;
      iVar21 = iVar21 + 1;
      uVar9 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21) goto LAB_1488cf750;
      uVar9 = *(uint *)(puVar18 + lVar13 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar9 = (int)lVar13 + -1 + uVar22;
    if ((int)uVar5 < (int)uVar9) {
      uVar9 = uVar5;
    }
  }
LAB_1488cf750:
  while( true ) {
    pTVar7 = local_98;
    if (*(int *)&(local_98->Elements).field_0x8 - *(int *)&(local_98->Elements).field_0x34 !=
        (int)uStack_70) {
      `TSparseArray<TSparseSetElement<FTimerHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_90.CurrentBitIndex == uVar9) &&
        (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar23)) && (pTVar7 == pTVar1))
    break;
    uVar22 = *(uint *)(*(longlong *)&pTVar7->Elements + (longlong)TStack_90.CurrentBitIndex * 0x10);
    lVar13 = *(longlong *)&this->Timers;
    pFVar11 = GetGlobalLogSingleton();
    ::`anonymous_namespace'::DescribeFTimerDataSafely
              ((FOutputDevice *)pFVar11,
               (FTimerData *)((ulonglong)(uVar22 & 0xffffff) * 0x60 + lVar13));
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  }
  if (4 < (byte)LogEngine._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogEngine);
  }
  if (2 < (byte)LogEngine._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)&PTR_u_TimerManager__p_151bc9ba0,
               (FLogCategoryBase *)&LogEngine);
  }
  return;
}

// PauseTimer @ 1488d06a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FTimerManager::PauseTimer(FTimerManager *this,FTimerHandle param_1)

{
  ETimerStatus EVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FTimerData *pFVar6;
  FScriptContainerElement *pFVar7;
  FTimerHandle local_res10;
  FTimerHandle local_res18 [2];
  FTimerHeapOrder local_38;
  
  local_res10.Handle = param_1.Handle;
  bVar4 = IsInGameThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TimerManager.cpp"
                         ,0x33a,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar6 = FindTimer(this,&local_res10);
  if ((pFVar6 != (FTimerData *)0x0) && (EVar1 = pFVar6->Status, EVar1 != Paused)) {
    if (EVar1 == Pending) {
      iVar5 = TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>::Remove
                        (&this->PendingTimerSet,&local_res10);
      if ((iVar5 != 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumRemoved == 1",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TimerManager.cpp"
                             ,0x355,L""), bVar4)) {
code_r0x0001488d0882:
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else if (EVar1 == Active) {
      pFVar2 = (this->ActiveTimerHeap).AllocatorInstance.Data;
      for (pFVar7 = pFVar2; pFVar7 != pFVar2 + (longlong)(this->ActiveTimerHeap).ArrayNum * 8;
          pFVar7 = pFVar7 + 8) {
        if (*(ulong64 *)pFVar7 == param_1.Handle) {
          iVar5 = (int)((longlong)pFVar7 - (longlong)pFVar2 >> 3);
          if (iVar5 == -1) goto LAB_1488d07db;
          goto LAB_1488d0806;
        }
      }
      iVar5 = -1;
LAB_1488d07db:
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IndexIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TimerManager.cpp"
                         ,0x34d,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
LAB_1488d0806:
      local_38.Timers = &this->Timers;
      local_38.NumTimers = *(int *)&(this->Timers).field_0x8 - *(int *)&(this->Timers).field_0x34;
      TArray<FTimerHandle,TSizedDefaultAllocator<32>_>::HeapRemoveAt<FTimerHeapOrder>
                (&this->ActiveTimerHeap,iVar5,&local_38,No);
    }
    else if (EVar1 == Executing) {
      if (((this->CurrentlyExecutingTimer).Handle != param_1.Handle) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentlyExecutingTimer == InHandle",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TimerManager.cpp"
                             ,0x35a,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (this->CurrentlyExecutingTimer).Handle = 0;
    }
    else if ((EVar1 != ActivePendingRemoval) &&
            (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TimerManager.cpp"
                                ,0x360,L""), bVar4)) goto code_r0x0001488d0882;
    if ((EVar1 == Executing) && (pFVar6->bLoop == 0)) {
      RemoveTimer(this,param_1);
      return;
    }
    TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>::
    Emplace<FTimerHandle_const_&>(&this->PausedTimerSet,local_res18,(bool *)&local_res10);
    pFVar6->Status = Paused;
    if (EVar1 != Pending) {
      pFVar6->ExpireTime = pFVar6->ExpireTime - this->InternalTime;
    }
  }
  return;
}

// RemoveTimer @ 1488d8270

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FTimerManager::RemoveTimer(FTimerManager *this,FTimerHandle param_1)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator> *this_00;
  uint uVar5;
  FTimerData *pFVar6;
  void *local_res8;
  FTimerHandle local_res10;
  FString local_58;
  FString local_48;
  
  pFVar6 = (FTimerData *)
           ((ulonglong)((uint)param_1.Handle & 0xffffff) * 0x60 + *(longlong *)&this->Timers);
  pvVar1 = pFVar6->TimerIndicesByObjectKey;
  local_res10.Handle = param_1.Handle;
  if (pvVar1 != (void *)0x0) {
    this_00 = TMapBase<void_const_*,TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>,0>_>
              ::Find((TMapBase<void_const_*,TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>,0>_>
                      *)&this->ObjectToTimers,pvVar1);
    if (this_00 == (TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator> *)0x0) {
      ::`anonymous_namespace'::GetFTimerDataSafely(&local_58,pFVar6);
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TimersForObject",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TimerManager.cpp"
                         ,0x4e4,
                         L"Removed timer was bound to an object which is not tracked by ObjectToTimers! (%s)"
                        );
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>::Remove
                      (this_00,&local_res10);
    if (iVar4 != 1) {
      ::`anonymous_namespace'::GetFTimerDataSafely(&local_48,pFVar6);
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumRemoved == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TimerManager.cpp"
                         ,0x4e7,
                         L"Removed timer was bound to an object which is not tracked by ObjectToTimers! (%s)"
                        );
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((*(int *)&(this_00->Elements).field_0x8 == *(int *)&(this_00->Elements).field_0x34) &&
       (local_res8 = pvVar1,
       *(int *)&(this->ObjectToTimers).field_0x8 != *(int *)&(this->ObjectToTimers).field_0x34)) {
      uVar5 = ((uint)((ulonglong)pvVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pvVar1 >> 4)) *
              -0x7a143595;
      uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
      TSet<TTuple<void_const_*,TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<void_const_*,TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
      ::RemoveImpl<void_const_*>
                ((TSet<TTuple<void_const_*,TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<void_const_*,TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                  *)&this->ObjectToTimers,uVar5 >> 0x10 ^ uVar5,&local_res8);
    }
  }
  TSparseArray<FTimerData,FDefaultSparseArrayAllocator>::RemoveAt
            (&this->Timers,(uint)param_1.Handle & 0xffffff,1);
  return;
}

// SetGameInstance @ 1488ddb90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FTimerManager::SetGameInstance(FTimerManager *this,UGameInstance *param_1)

{
  FTimerSourceList *pFVar1;
  
  pFVar1 = (this->TimerSourceList).Ptr;
  this->OwningGameInstance = param_1;
  if (pFVar1 != (FTimerSourceList *)0x0) {
    pFVar1->OwningGameInstance = param_1;
  }
  return;
}

// SetTimer @ 1488dfd20

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

void __thiscall
FTimerManager::SetTimer
          (FTimerManager *this,FTimerHandle *param_1,float param_2,bool param_3,float param_4)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  undefined1 auStackY_98 [32];
  FTimerManagerTimerParameters local_68 [2];
  FTimerUnifiedDelegate local_58;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_68[0].FirstDelay = param_4;
  local_58.VariantDelegate._0_8_ = 0;
  local_58.VariantDelegate.TypeIndex = 0;
  local_68[0].bMaxOncePerFrame = false;
  local_68[0].bLoop = param_3;
  InternalSetTimer(this,param_1,&local_58,param_2,local_68);
  uVar3 = (ulonglong)local_58.VariantDelegate.TypeIndex;
  if (3 < local_58.VariantDelegate.TypeIndex) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar3] !=
      UE::Core::Private::TDestructorCaller<std::nullptr_t>::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar3])(&local_58);
  }
  return;
}

// Tick @ 1488e24a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FTimerManager::Tick(FTimerManager *this,float param_1)

{
  int *piVar1;
  FTimerHandle *pFVar2;
  TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator> *pTVar3;
  FScriptContainerElement *pFVar4;
  ulonglong uVar5;
  double *pdVar6;
  float fVar7;
  double dVar8;
  uint uVar9;
  FName FVar10;
  void *pvVar11;
  FTimerHandle FVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  code *pcVar15;
  double dVar16;
  double dVar17;
  UWorld *pUVar18;
  TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator> *pTVar19;
  bool bVar20;
  bool bVar21;
  int iVar22;
  int iVar23;
  FName *pFVar24;
  FThreadSafeStaticStat<FStat_STAT_NumHeapEntries> FVar25;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FTimerSourceList *pFVar26;
  FTimerSourceList *pFVar27;
  FOutputDeviceRedirector *pFVar28;
  FString *pFVar29;
  FTimerSourceEntry *pFVar30;
  longlong lVar31;
  longlong lVar32;
  wchar_t *pwVar33;
  int iVar34;
  FScriptContainerElement *pFVar35;
  FTimerData *pFVar36;
  uint *puVar37;
  undefined1 *puVar38;
  uint uVar39;
  uchar auVar40 [8];
  uint uVar41;
  ForAnyElementType FVar42;
  TSparseArray<FTimerData,FDefaultSparseArrayAllocator> *pTVar43;
  undefined1 *puVar44;
  bool bVar45;
  undefined1 local_res20 [8];
  undefined1 local_1d8;
  undefined1 local_1d7 [3];
  int local_1d4;
  ForAnyElementType local_1d0;
  undefined8 local_1c8;
  FIdentityFunctor local_1c0;
  FIdentityFunctor local_1bf [7];
  FTimerData *local_1b8;
  undefined8 local_1b0;
  uint local_1a8;
  UWorld *local_1a0;
  int local_198;
  int local_194;
  FName local_190;
  LARGE_INTEGER local_188;
  FTimerHandle local_180;
  TDereferenceWrapper<FTimerHandle,FTimerHeapOrder> local_178;
  TDereferenceWrapper<FTimerHandle,FTimerHeapOrder> local_170;
  LARGE_INTEGER local_168;
  FStatMessage local_160;
  TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator> *local_150;
  int iStack_148;
  uint uStack_144;
  undefined1 *local_140;
  undefined4 uStack_138;
  int iStack_134;
  int local_130;
  undefined4 uStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator> *local_120;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_118;
  undefined8 uStack_f8;
  FTimerHeapOrder local_f0;
  FTimerHeapOrder local_e0;
  FLogScopedCategoryAndVerbosityOverride local_d0;
  FName local_c0;
  FString local_b8;
  FString local_a8;
  FScopedLevelCollectionContextSwitch local_98 [2];
  undefined4 local_6c;
  
  local_1a8 = 0;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Orange,"FTimerManager_Tick");
  bVar45 = -1 < CpuChannel->Enabled;
  if (bVar45) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId935,"FTimerManager_Tick",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TimerManager.cpp"
               ,0x3a7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId935);
  }
  if (__CsvProfilerStat936 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("TimerManager");
    __CsvProfilerStat936 = true;
  }
  FCsvProfiler::BeginExclusiveStat("TimerManager","CSV_TimerManager");
  auVar40 = (uchar  [8])(longlong)(this->ActiveTimerHeap).ArrayNum;
  if ((auVar40 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable != false)) {
    FVar25 = StatPtr_STAT_NumHeapEntries;
    if (StatPtr_STAT_NumHeapEntries == (FThreadSafeStaticStat<FStat_STAT_NumHeapEntries>)0x0) {
      pFVar24 = ::FName::FName(&local_c0,"STAT_NumHeapEntries");
      FVar25 = (FThreadSafeStaticStat<FStat_STAT_NumHeapEntries>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NumHeapEntries,*pFVar24,
                          L"TimerManager Heap Size","STATGROUP_Game","STATCAT_Advanced",L"Game",true
                          ,true,ST_int64,false,false,MCR_Invalid);
    }
    FVar10 = *(FName *)FVar25;
    if (((FVar10 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_160.NameAndInfo.Number = FVar10.Number & 0xffffafff | 0xa000;
      local_190 = FVar10;
      local_160.StatData.Pad = auVar40;
      local_160.NameAndInfo.Index.Value = FVar10.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_160);
      FStatsTrace::Add(&local_190,(long64)auVar40);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  pFVar27 = (FTimerSourceList *)0x0;
  if (this->LastTickedFrame != CONCAT44(GFrameCounter._4_4_,(uint)GFrameCounter)) {
    pFVar26 = (this->TimerSourceList).Ptr;
    if ((pFVar26 == (FTimerSourceList *)0x0) != (GBuildTimerSourceList == 0)) {
      if (pFVar26 == (FTimerSourceList *)0x0) {
        pFVar26 = ::operator_new(0x58);
        if (pFVar26 != (FTimerSourceList *)0x0) {
          *(undefined8 *)&pFVar26->Entries = 0;
          *(undefined8 *)&(pFVar26->Entries).field_0x8 = 0;
          *(undefined8 *)&(pFVar26->Entries).field_0x20 = 0;
          *(undefined4 *)&(pFVar26->Entries).field_0x28 = 0;
          *(undefined4 *)&(pFVar26->Entries).field_0x2c = 0x80;
          *(undefined4 *)&(pFVar26->Entries).field_0x30 = 0xffffffff;
          *(undefined4 *)&(pFVar26->Entries).field_0x34 = 0;
          *(undefined8 *)&(pFVar26->Entries).field_0x40 = 0;
          *(undefined4 *)&(pFVar26->Entries).field_0x48 = 0;
          pFVar26->OwningGameInstance = (UGameInstance *)0x0;
          pFVar27 = pFVar26;
        }
        pFVar26 = (this->TimerSourceList).Ptr;
        if ((pFVar26 != pFVar27) &&
           ((this->TimerSourceList).Ptr = pFVar27, pFVar26 != (FTimerSourceList *)0x0)) {
          FTimerSourceList::DumpEntries(pFVar26);
          *(undefined4 *)&(pFVar26->Entries).field_0x48 = 0;
          pvVar11 = *(void **)&(pFVar26->Entries).field_0x40;
          if (pvVar11 != (void *)0x0) {
            FMemory::Free(pvVar11);
          }
          TSparseArray<TSparseSetElement<TTuple<FString,FTimerSourceEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FString,FTimerSourceEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<FString,FTimerSourceEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)pFVar26);
          ::operator_delete(pFVar26,0x58);
        }
        ((this->TimerSourceList).Ptr)->OwningGameInstance = this->OwningGameInstance;
      }
      else {
        TUniquePtr<FTimerSourceList,TDefaultDelete<FTimerSourceList>_>::Reset
                  (&this->TimerSourceList,(FTimerSourceList *)0x0);
      }
    }
    QueryPerformanceCounter(&local_188);
    bVar21 = false;
    iVar34 = 0;
    local_1d4 = 0;
    dVar16 = (double)local_188.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    this->InternalTime = (double)param_1 + this->InternalTime;
    if (this->OwningGameInstance == (UGameInstance *)0x0) {
      local_1a0 = (UWorld *)0x0;
    }
    else {
      local_1a0 = UGameInstance::GetWorld(this->OwningGameInstance);
    }
    if (2 < (byte)LogEngine._0_1_) {
      FLogScopedCategoryAndVerbosityOverride::FLogScopedCategoryAndVerbosityOverride
                (&local_d0,(FName)LogEngine._4_8_,Warning);
      if (((0 < DumpAllTimerLogsThreshold) &&
          (DumpAllTimerLogsThreshold < (this->ActiveTimerHeap).ArrayNum)) &&
         (bAlreadyLogged == false)) {
        bAlreadyLogged = true;
        if (2 < (byte)LogEngine._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEngine);
        }
        uVar39 = (this->ActiveTimerHeap).ArrayNum;
        local_1d0.Data = (FScriptContainerElement *)0x0;
        local_1c8 = 0;
        if ((int)uVar39 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar39);
        }
        if (0 < (int)uVar39) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,uVar39,&local_1d0,0,(int *)((longlong)&local_1c8 + 4));
        }
        pFVar35 = (this->ActiveTimerHeap).AllocatorInstance.Data;
        iVar23 = (this->ActiveTimerHeap).ArrayNum;
        pFVar4 = pFVar35 + (longlong)iVar23 * 8;
        while( true ) {
          if ((this->ActiveTimerHeap).ArrayNum != iVar23) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<FTimerHandle,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res20);
          }
          if (pFVar35 == pFVar4) break;
          local_180.Handle = *(ulong64 *)pFVar35;
          local_1b8 = FindTimer(this,&local_180);
          if (local_1b8 != (FTimerData *)0x0) {
            if (((local_1d0.Data <= (FScriptContainerElement *)&local_1b8) &&
                ((FScriptContainerElement *)&local_1b8 <
                 local_1d0.Data + (longlong)local_1c8._4_4_ * 8)) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar20)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            iVar22 = (int)local_1c8;
            if ((int)local_1c8 == local_1c8._4_4_) {
              iVar22 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_1d0,(int *)((longlong)&local_1c8 + 4));
            }
            local_1c8 = CONCAT44(local_1c8._4_4_,iVar22 + 1);
            *(FTimerData **)(local_1d0.Data + (longlong)iVar22 * 8) = local_1b8;
          }
          pFVar35 = pFVar35 + 8;
        }
        iVar23 = (int)local_1c8;
        pFVar4 = local_1d0.Data + (longlong)(int)local_1c8 * 8;
        FVar42.Data = local_1d0.Data;
        while( true ) {
          if ((int)local_1c8 != iVar23) {
            local_1d8 = 0;
            `TCheckedPointerIterator<FTimerData_const_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_1d8);
          }
          if (FVar42.Data == pFVar4) break;
          pFVar36 = *(FTimerData **)FVar42.Data;
          pFVar28 = GetGlobalLogSingleton();
          ::`anonymous_namespace'::DescribeFTimerDataSafely((FOutputDevice *)pFVar28,pFVar36);
          FVar42.Data = FVar42.Data + 8;
        }
        if (local_1d0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d0.Data);
        }
      }
      FLogCategoryBase::PostTrigger((FLogCategoryBase *)&LogEngine,Warning);
      FLogScopedCategoryAndVerbosityOverride::~FLogScopedCategoryAndVerbosityOverride(&local_d0);
    }
    dVar17 = __real_408f400000000000;
    iVar23 = (this->ActiveTimerHeap).ArrayNum;
    uVar39 = local_1a8;
    while (0 < iVar23) {
      pTVar43 = &this->Timers;
      if (((this->ActiveTimerHeap).ArrayNum < 1) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      pFVar36 = (FTimerData *)
                ((ulonglong)(*(uint *)(this->ActiveTimerHeap).AllocatorInstance.Data & 0xffffff) *
                 0x60 + *(longlong *)pTVar43);
      if (pFVar36->Status == ActivePendingRemoval) {
        local_f0.NumTimers = *(int *)&(this->Timers).field_0x8 - *(int *)&(this->Timers).field_0x34;
        local_f0.Timers = pTVar43;
        if (((this->ActiveTimerHeap).ArrayNum < 1) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        FVar12.Handle = *(ulong64 *)(this->ActiveTimerHeap).AllocatorInstance.Data;
        if (((this->ActiveTimerHeap).ArrayNum < 1) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        iVar23 = (this->ActiveTimerHeap).ArrayNum;
        pFVar4 = (this->ActiveTimerHeap).AllocatorInstance.Data;
        iVar22 = iVar23 + -1;
        if (1 < iVar22) {
          iVar22 = 1;
        }
        if (iVar22 != 0) {
          memmove(pFVar4,pFVar4 + (longlong)(iVar23 - iVar22) * 8,(longlong)iVar22 << 3);
        }
        piVar1 = &(this->ActiveTimerHeap).ArrayNum;
        *piVar1 = *piVar1 + -1;
        local_178.Predicate = &local_f0;
        AlgoImpl::
        HeapSiftDown<FTimerHandle,int,FIdentityFunctor,TDereferenceWrapper<FTimerHandle,FTimerHeapOrder>_>
                  ((FTimerHandle *)(this->ActiveTimerHeap).AllocatorInstance.Data,0,
                   (this->ActiveTimerHeap).ArrayNum,&local_1c0,&local_178);
        RemoveTimer(this,FVar12);
      }
      else {
        if (this->InternalTime <= pFVar36->ExpireTime) break;
        if ((bVar21) && (local_1d4 = iVar34 + 1, local_1d4 <= MaxExpiredTimersToLog)) {
          pFVar28 = GetGlobalLogSingleton();
          ::`anonymous_namespace'::DescribeFTimerDataSafely((FOutputDevice *)pFVar28,pFVar36);
        }
        pUVar18 = local_1a0;
        if (local_1a0 == (UWorld *)0x0) {
          iVar34 = -1;
        }
        else {
          iVar34 = UWorld::FindCollectionIndexByType(local_1a0,pFVar36->LevelCollection);
        }
        FScopedLevelCollectionContextSwitch::FScopedLevelCollectionContextSwitch
                  (local_98,iVar34,pUVar18);
        local_e0.NumTimers = *(int *)&(this->Timers).field_0x8 - *(int *)&(this->Timers).field_0x34;
        local_e0.Timers = pTVar43;
        if (((this->ActiveTimerHeap).ArrayNum < 1) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        (this->CurrentlyExecutingTimer).Handle =
             *(ulong64 *)(this->ActiveTimerHeap).AllocatorInstance.Data;
        if (((this->ActiveTimerHeap).ArrayNum < 1) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        iVar34 = (this->ActiveTimerHeap).ArrayNum;
        pFVar4 = (this->ActiveTimerHeap).AllocatorInstance.Data;
        iVar23 = iVar34 + -1;
        if (1 < iVar23) {
          iVar23 = 1;
        }
        if (iVar23 != 0) {
          memmove(pFVar4,pFVar4 + (longlong)(iVar34 - iVar23) * 8,(longlong)iVar23 << 3);
        }
        piVar1 = &(this->ActiveTimerHeap).ArrayNum;
        *piVar1 = *piVar1 + -1;
        local_170.Predicate = &local_e0;
        AlgoImpl::
        HeapSiftDown<FTimerHandle,int,FIdentityFunctor,TDereferenceWrapper<FTimerHandle,FTimerHeapOrder>_>
                  ((FTimerHandle *)(this->ActiveTimerHeap).AllocatorInstance.Data,0,
                   (this->ActiveTimerHeap).ArrayNum,local_1bf,&local_170);
        pFVar36->Status = Executing;
        if (pFVar36->bLoop == 0) {
          iVar34 = 1;
        }
        else {
          iVar34 = (int)(longlong)
                        ((this->InternalTime - pFVar36->ExpireTime) / (double)pFVar36->Rate) + 1;
        }
        pFVar27 = (this->TimerSourceList).Ptr;
        if (pFVar27 != (FTimerSourceList *)0x0) {
          if (GBuildTimerSourceList == 2) {
            uVar39 = uVar39 | 1;
            pFVar29 = FTimerUnifiedDelegate::ToString(&pFVar36->TimerDelegate,&local_a8);
          }
          else {
            uVar39 = uVar39 | 2;
            pFVar29 = FTimerSourceList::GetPartialDeduplicateDelegateToString
                                (&local_b8,&pFVar36->TimerDelegate);
          }
          iVar23 = (pFVar29->Data).ArrayNum;
          if (iVar23 == 0) {
            pwVar33 = L"";
            iVar23 = 0;
          }
          else {
            pwVar33 = (wchar_t *)(pFVar29->Data).AllocatorInstance.Data;
            iVar23 = iVar23 + -1;
          }
          uVar41 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar23,pwVar33);
          pFVar30 = TMapBase<FString,FTimerSourceEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTimerSourceEntry,0>_>
                    ::FindOrAddImpl<FString>
                              ((TMapBase<FString,FTimerSourceEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTimerSourceEntry,0>_>
                                *)pFVar27,uVar41,pFVar29);
          uVar41 = (uint)GFrameCounter;
          fVar7 = pFVar36->Rate;
          pFVar30->TotalCount = pFVar30->TotalCount + (longlong)iVar34;
          pFVar30->SumApproxRate = (double)fVar7 + pFVar30->SumApproxRate;
          if (pFVar30->LastFrameID != uVar41) {
            pFVar30->LastFrameID = uVar41;
            pFVar30->NumThisFrame = 0;
          }
          pFVar30->NumThisFrame = pFVar30->NumThisFrame + iVar34;
          uVar41 = pFVar30->MaxPerFrame;
          if (pFVar30->MaxPerFrame < pFVar30->NumThisFrame) {
            uVar41 = pFVar30->NumThisFrame;
          }
          pFVar30->MaxPerFrame = uVar41;
          if (((uVar39 & 2) != 0) &&
             (uVar39 = uVar39 & 0xfffffffd,
             local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          }
          if (((uVar39 & 1) != 0) &&
             (uVar39 = uVar39 & 0xfffffffe,
             local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
        }
        iVar23 = 0;
        if (0 < iVar34) {
          while( true ) {
            bVar20 = WillRemoveTimerAssert
                               (this,(FTimerHandle)(this->CurrentlyExecutingTimer).Handle);
            if ((bVar20) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!WillRemoveTimerAssert(CurrentlyExecutingTimer)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TimerManager.cpp"
                                    ,0x43b,
                                    L"RemoveTimer(CurrentlyExecutingTimer) - due to fail before Execute()"
                                   ), bVar20)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            FTimerUnifiedDelegate::Execute(&pFVar36->TimerDelegate);
            pFVar36 = FindTimer(this,&this->CurrentlyExecutingTimer);
            if (pFVar36 == (FTimerData *)0x0) break;
            bVar20 = WillRemoveTimerAssert
                               (this,(FTimerHandle)(this->CurrentlyExecutingTimer).Handle);
            if ((bVar20) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!Top || !WillRemoveTimerAssert(CurrentlyExecutingTimer)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TimerManager.cpp"
                                    ,0x440,
                                    L"RemoveTimer(CurrentlyExecutingTimer) - due to fail after Execute()"
                                   ), bVar20)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            if (((pFVar36->Status != Executing) || (pFVar36->bMaxOncePerFrame != '\0')) ||
               (iVar23 = iVar23 + 1, iVar34 <= iVar23)) break;
          }
        }
        if (((DumpTimerLogsThreshold <= 0.0) || (bVar21)) ||
           (QueryPerformanceCounter(&local_168),
           ((double)local_168.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar16) * dVar17 <
           (double)DumpTimerLogsThreshold)) {
          if (pFVar36 != (FTimerData *)0x0) goto LAB_1488e2fb6;
        }
        else {
          local_1d4 = local_1d4 + 1;
          bVar21 = true;
          if (4 < (byte)LogEngine._0_1_) {
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogEngine);
          }
          if (pFVar36 == (FTimerData *)0x0) {
            if (4 < (byte)LogEngine._0_1_) {
              UE::Logging::Private::BasicLog<5>
                        ((FStaticBasicLogRecord *)&PTR_u_There_was_no_ti_151bca048,
                         (FLogCategoryBase *)&LogEngine);
            }
          }
          else {
            pFVar28 = GetGlobalLogSingleton();
            ::`anonymous_namespace'::DescribeFTimerDataSafely((FOutputDevice *)pFVar28,pFVar36);
LAB_1488e2fb6:
            if ((pFVar36->bLoop == 0) ||
               ((pFVar36->bRequiresDelegate != '\0' &&
                (bVar20 = FTimerUnifiedDelegate::IsBound(&pFVar36->TimerDelegate), !bVar20)))) {
              RemoveTimer(this,(FTimerHandle)(this->CurrentlyExecutingTimer).Handle);
            }
            else {
              pFVar36->Status = Active;
              pFVar36->ExpireTime = (double)((float)iVar34 * pFVar36->Rate) + pFVar36->ExpireTime;
              pFVar2 = &this->CurrentlyExecutingTimer;
              pFVar4 = (this->ActiveTimerHeap).AllocatorInstance.Data;
              if (((pFVar4 <= pFVar2) &&
                  (pFVar2 < pFVar4 + (longlong)(this->ActiveTimerHeap).ArrayMax * 8)) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar20)) {
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              iVar34 = (this->ActiveTimerHeap).ArrayNum;
              piVar1 = &(this->ActiveTimerHeap).ArrayMax;
              if (iVar34 == *piVar1) {
                iVar34 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&(this->ActiveTimerHeap).AllocatorInstance,piVar1);
              }
              (this->ActiveTimerHeap).ArrayNum = iVar34 + 1;
              *(ulong64 *)((this->ActiveTimerHeap).AllocatorInstance.Data + (longlong)iVar34 * 8) =
                   pFVar2->Handle;
              pFVar4 = (this->ActiveTimerHeap).AllocatorInstance.Data;
              iVar34 = (this->ActiveTimerHeap).ArrayNum + -1;
              while (0 < iVar34) {
                lVar32 = (longlong)iVar34;
                iVar34 = (iVar34 + -1) / 2;
                lVar31 = (longlong)iVar34;
                dVar8 = *(double *)
                         ((ulonglong)(*(uint *)(pFVar4 + lVar31 * 8) & 0xffffff) * 0x60 + 8 +
                         *(longlong *)&this->Timers);
                pdVar6 = (double *)
                         ((ulonglong)(*(uint *)(pFVar4 + lVar32 * 8) & 0xffffff) * 0x60 + 8 +
                         *(longlong *)&this->Timers);
                if (dVar8 < *pdVar6 || dVar8 == *pdVar6) break;
                uVar14 = *(undefined8 *)(pFVar4 + lVar32 * 8);
                *(undefined8 *)(pFVar4 + lVar32 * 8) = *(undefined8 *)(pFVar4 + lVar31 * 8);
                *(undefined8 *)(pFVar4 + lVar31 * 8) = uVar14;
              }
            }
            (this->CurrentlyExecutingTimer).Handle = 0;
          }
        }
        FScopedLevelCollectionContextSwitch::~FScopedLevelCollectionContextSwitch(local_98);
        iVar34 = local_1d4;
      }
      iVar23 = (this->ActiveTimerHeap).ArrayNum;
    }
    if ((MaxExpiredTimersToLog < iVar34) && (4 < (byte)LogEngine._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogEngine);
    }
    this->LastTickedFrame = CONCAT44(GFrameCounter._4_4_,(uint)GFrameCounter);
    if (0 < *(int *)&(this->PendingTimerSet).Elements.field_0x8 -
            *(int *)&(this->PendingTimerSet).Elements.field_0x34) {
      local_140 = &(this->PendingTimerSet).Elements.field_0x10;
      iStack_148 = 0;
      iVar34 = *(int *)&(this->PendingTimerSet).Elements.field_0x28;
      local_130 = 0;
      iStack_134 = 0;
      if (iVar34 == 0) {
LAB_1488e324b:
        uStack_144 = 1;
      }
      else {
        puVar37 = *(uint **)&(this->PendingTimerSet).Elements.field_0x20;
        if (puVar37 == (uint *)0x0) {
          puVar37 = (uint *)local_140;
        }
        uStack_144 = *puVar37;
        while (uStack_144 == 0) {
          lVar31 = (longlong)iStack_148;
          local_130 = local_130 + 0x20;
          iStack_148 = iStack_148 + 1;
          iStack_134 = iVar34;
          if ((int)(iVar34 + -1 + (iVar34 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_148)
          goto LAB_1488e324b;
          uStack_144 = puVar37[lVar31 + 1];
        }
        uStack_144 = -uStack_144 & uStack_144;
        uVar5 = (ulonglong)uStack_144 * 2 + 1;
        lVar31 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar31 == 0; lVar31 = lVar31 + -1) {
          }
        }
        local_198 = (int)lVar31;
        iStack_134 = local_130 + -1 + local_198;
        if (iVar34 < iStack_134) {
          iStack_134 = iVar34;
        }
      }
      puVar44 = &(this->PendingTimerSet).Elements.field_0x10;
      uVar39 = *(uint *)&(this->PendingTimerSet).Elements.field_0x28;
      pTVar3 = &this->PendingTimerSet;
      uStack_12c = local_6c;
      iStack_128 = *(int *)&(this->PendingTimerSet).Elements.field_0x8 -
                   *(int *)&(this->PendingTimerSet).Elements.field_0x34;
      uVar41 = uVar39 & 0xffffffe0;
      TStack_118._padding_ = CONCAT44(uStack_144,iStack_148);
      uStack_138 = 0xffffffff;
      TStack_118.CurrentBitIndex = iStack_134;
      TStack_118.UnvisitedBitMask = 0xffffffff;
      iVar34 = (int)uVar39 >> 5;
      TStack_118._28_4_ = local_6c;
      TStack_118.BaseBitIndex = local_130;
      uStack_f8 = CONCAT44(uStack_124,iStack_128);
      local_150 = pTVar3;
      local_120 = pTVar3;
      TStack_118.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_140;
      if (((int)uVar39 < 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar21)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      uVar9 = *(uint *)&(this->PendingTimerSet).Elements.field_0x28;
      if (uVar39 != uVar9) {
        puVar13 = *(undefined1 **)&(this->PendingTimerSet).Elements.field_0x20;
        puVar38 = puVar44;
        if (puVar13 != (undefined1 *)0x0) {
          puVar38 = puVar13;
        }
        uVar39 = -1 << ((byte)uVar39 & 0x1f) & *(uint *)(puVar38 + (longlong)iVar34 * 4);
        while (uVar39 == 0) {
          lVar31 = (longlong)iVar34;
          uVar41 = uVar41 + 0x20;
          iVar34 = iVar34 + 1;
          uVar39 = uVar9;
          if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar34)
          goto LAB_1488e3380;
          uVar39 = *(uint *)(puVar38 + lVar31 * 4 + 4);
        }
        uVar5 = (ulonglong)(-uVar39 & uVar39) * 2 + 1;
        lVar31 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar31 == 0; lVar31 = lVar31 + -1) {
          }
        }
        local_194 = (int)lVar31;
        uVar39 = (uVar41 - 1) + local_194;
        if ((int)uVar9 < (int)uVar39) {
          uVar39 = uVar9;
        }
      }
LAB_1488e3380:
      while( true ) {
        pTVar19 = local_120;
        if (*(int *)&(local_120->Elements).field_0x8 - *(int *)&(local_120->Elements).field_0x34 !=
            (int)uStack_f8) {
          local_1d7[0] = 0;
          `TSparseArray<TSparseSetElement<FTimerHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1d7);
        }
        if (((TStack_118.CurrentBitIndex == uVar39) &&
            (TStack_118.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar44)) &&
           (pTVar19 == pTVar3)) break;
        dVar16 = this->InternalTime;
        local_1b0 = *(undefined8 *)
                     (*(longlong *)&pTVar19->Elements + (longlong)TStack_118.CurrentBitIndex * 0x10)
        ;
        lVar31 = *(longlong *)&this->Timers;
        lVar32 = (ulonglong)((uint)local_1b0 & 0xffffff) * 0x60;
        *(undefined1 *)(lVar32 + 1 + lVar31) = 1;
        *(double *)(lVar32 + 8 + lVar31) = dVar16 + *(double *)(lVar32 + 8 + lVar31);
        pFVar4 = (this->ActiveTimerHeap).AllocatorInstance.Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_1b0) &&
            ((FScriptContainerElement *)&local_1b0 <
             pFVar4 + (longlong)(this->ActiveTimerHeap).ArrayMax * 8)) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar21)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        iVar34 = (this->ActiveTimerHeap).ArrayNum;
        piVar1 = &(this->ActiveTimerHeap).ArrayMax;
        if (iVar34 == *piVar1) {
          iVar34 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&(this->ActiveTimerHeap).AllocatorInstance,piVar1);
        }
        (this->ActiveTimerHeap).ArrayNum = iVar34 + 1;
        *(undefined8 *)((this->ActiveTimerHeap).AllocatorInstance.Data + (longlong)iVar34 * 8) =
             local_1b0;
        pFVar4 = (this->ActiveTimerHeap).AllocatorInstance.Data;
        iVar34 = (this->ActiveTimerHeap).ArrayNum + -1;
        while (0 < iVar34) {
          lVar32 = (longlong)iVar34;
          iVar34 = (iVar34 + -1) / 2;
          lVar31 = (longlong)iVar34;
          dVar16 = *(double *)
                    ((ulonglong)(*(uint *)(pFVar4 + lVar31 * 8) & 0xffffff) * 0x60 + 8 +
                    *(longlong *)&this->Timers);
          pdVar6 = (double *)
                   ((ulonglong)(*(uint *)(pFVar4 + lVar32 * 8) & 0xffffff) * 0x60 + 8 +
                   *(longlong *)&this->Timers);
          if (dVar16 < *pdVar6 || dVar16 == *pdVar6) break;
          uVar14 = *(undefined8 *)(pFVar4 + lVar32 * 8);
          *(undefined8 *)(pFVar4 + lVar32 * 8) = *(undefined8 *)(pFVar4 + lVar31 * 8);
          *(undefined8 *)(pFVar4 + lVar31 * 8) = uVar14;
        }
        TStack_118.UnvisitedBitMask = TStack_118.UnvisitedBitMask & ~TStack_118._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_118);
      }
      if (*(int *)&(this->PendingTimerSet).Elements.field_0x8 !=
          *(int *)&(this->PendingTimerSet).Elements.field_0x34) {
        TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>::UnhashElements
                  (&this->PendingTimerSet);
        iVar34 = *(int *)&(this->PendingTimerSet).Elements.field_0xc;
        *(undefined4 *)&(this->PendingTimerSet).Elements.field_0x8 = 0;
        if (iVar34 < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,(ForAnyElementType *)&this->PendingTimerSet,0,
                     (int *)&(this->PendingTimerSet).Elements.field_0xc);
        }
        *(undefined4 *)&(this->PendingTimerSet).Elements.field_0x30 = 0xffffffff;
        *(undefined4 *)&(this->PendingTimerSet).Elements.field_0x34 = 0;
        *(undefined4 *)&(this->PendingTimerSet).Elements.field_0x28 = 0;
      }
    }
  }
  FCsvProfiler::EndExclusiveStat("TimerManager");
  if (bVar45) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// UnPauseTimer @ 1488e92d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FTimerManager::UnPauseTimer(FTimerManager *this,FTimerHandle param_1)

{
  double dVar1;
  code *pcVar2;
  bool bVar3;
  FTimerData *pFVar4;
  FTimerHandle local_res10;
  FTimerHandle local_res18 [2];
  FTimerHeapOrder local_18;
  
  local_res10.Handle = param_1.Handle;
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TimerManager.cpp"
                       ,0x37b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar4 = FindTimer(this,&local_res10);
  if ((pFVar4 != (FTimerData *)0x0) && (pFVar4->Status == Paused)) {
    if (this->LastTickedFrame == GFrameCounter) {
      dVar1 = this->InternalTime;
      local_18.Timers = &this->Timers;
      pFVar4->Status = Active;
      pFVar4->ExpireTime = dVar1 + pFVar4->ExpireTime;
      local_18.NumTimers = *(int *)&(this->Timers).field_0x8 - *(int *)&(this->Timers).field_0x34;
      TArray<FTimerHandle,TSizedDefaultAllocator<32>_>::HeapPush<FTimerHeapOrder>
                (&this->ActiveTimerHeap,&local_res10,&local_18);
      TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>::Remove
                (&this->PausedTimerSet,&local_res10);
      return;
    }
    pFVar4->Status = Pending;
    TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>::
    Emplace<FTimerHandle_const_&>(&this->PendingTimerSet,local_res18,(bool *)&local_res10);
    TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>::Remove
              (&this->PausedTimerSet,&local_res10);
  }
  return;
}

// WillRemoveTimerAssert @ 1488ec820

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FTimerManager::WillRemoveTimerAssert(FTimerManager *this,FTimerHandle param_1)

{
  void *pvVar1;
  int iVar2;
  TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator> *pTVar3;
  ulong64 *puVar4;
  ForElementType<FSetElementId> FVar5;
  
  pvVar1 = *(void **)((ulonglong)((uint)param_1.Handle & 0xffffff) * 0x60 + 0x58 +
                     *(longlong *)&this->Timers);
  if (pvVar1 == (void *)0x0) {
    return false;
  }
  pTVar3 = TMapBase<void_const_*,TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>,0>_>
           ::Find((TMapBase<void_const_*,TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>,0>_>
                   *)&this->ObjectToTimers,pvVar1);
  if ((pTVar3 != (TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator> *)0x0) &&
     (*(int *)&(pTVar3->Elements).field_0x8 != *(int *)&(pTVar3->Elements).field_0x34)) {
    FVar5 = (pTVar3->Hash).SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&pTVar3->Hash;
    }
    iVar2 = *(int *)((longlong)FVar5 +
                    ((param_1.Handle >> 0x20) * 0x17 + param_1.Handle &
                    (ulonglong)(pTVar3->HashSize - 1)) * 4);
    if (iVar2 != -1) {
      do {
        puVar4 = (ulong64 *)((longlong)iVar2 * 0x10 + *(longlong *)&pTVar3->Elements);
        if (*puVar4 == param_1.Handle) {
          return puVar4 == (ulong64 *)0x0;
        }
        iVar2 = (int)puVar4[1];
      } while (iVar2 != -1);
    }
  }
  return true;
}

// operator() @ 150533240

bool __thiscall `FTimerManager::GenerateHandle'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6025064823878843124>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6025064823878843124>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

