// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTasks
// Functions: 3

// SetTimer<UGameplayTask_TimeLimitedExecution> @ 146cecd40

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
FTimerManager::SetTimer<UGameplayTask_TimeLimitedExecution>
          (FTimerManager *this,FTimerHandle *param_1,UGameplayTask_TimeLimitedExecution *param_2,
          pmf_628d0a52 *param_3,float param_4,bool param_5,float param_6)

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
  UGameplayTask_TimeLimitedExecution *local_b0;
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUGameplayTask_TimeLimitedExecution____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_2 != (UGameplayTask_TimeLimitedExecution *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    puVar5[3] = 0;
    local_b0 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_2 != (UGameplayTask_TimeLimitedExecution *)0x0)) {
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
LAB_146cecec0:
    if (local_98 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98);
    }
  }
  else if (local_98 != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_98)(local_98);
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_98,0,0,0x10);
    local_90 = 0;
    goto LAB_146cecec0;
  }
  local_98 = FVar7.Data;
  local_90 = iVar9;
  if (local_c8 == 0) {
LAB_146cecf18:
    if (local_d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data);
    }
  }
  else if (local_d0.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_d0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_d0,0,0,0x10);
    local_c8 = 0;
    goto LAB_146cecf18;
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
      if (local_98 == (FScriptContainerElement *)0x0) goto LAB_146cecfef;
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
LAB_146cecfef:
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

// SetTimer<UGameplayTask_WaitDelay> @ 146ced050

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
FTimerManager::SetTimer<UGameplayTask_WaitDelay>
          (FTimerManager *this,FTimerHandle *param_1,UGameplayTask_WaitDelay *param_2,
          pmf_459a3c1b *param_3,float param_4,bool param_5,float param_6)

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
  UGameplayTask_WaitDelay *local_b0;
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUGameplayTask_WaitDelay____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_2 != (UGameplayTask_WaitDelay *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    puVar5[3] = 0;
    local_b0 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_2 != (UGameplayTask_WaitDelay *)0x0)) {
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
LAB_146ced1d0:
    if (local_98 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98);
    }
  }
  else if (local_98 != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_98)(local_98);
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_98,0,0,0x10);
    local_90 = 0;
    goto LAB_146ced1d0;
  }
  local_98 = FVar7.Data;
  local_90 = iVar9;
  if (local_c8 == 0) {
LAB_146ced228:
    if (local_d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data);
    }
  }
  else if (local_d0.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_d0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_d0,0,0,0x10);
    local_c8 = 0;
    goto LAB_146ced228;
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
      if (local_98 == (FScriptContainerElement *)0x0) goto LAB_146ced2ff;
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
LAB_146ced2ff:
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

// SetTimerForNextTick<UGameplayTask_WaitDelay> @ 146ced360

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
FTimerManager::SetTimerForNextTick<UGameplayTask_WaitDelay>
          (FTimerManager *this,UGameplayTask_WaitDelay *param_1,pmf_459a3c1b *param_2)

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
  pmf_459a3c1b *local_a8;
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUGameplayTask_WaitDelay____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (pmf_459a3c1b *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    puVar3[3] = 0;
    local_a8 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (pmf_459a3c1b *)0x0)) {
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
LAB_146ced4ce:
    if (local_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data);
    }
  }
  else if (local_88.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_88.Data)(local_88.Data);
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_88,0,0,0x10);
    local_80 = 0;
    goto LAB_146ced4ce;
  }
  local_d5 = 0;
  local_88.Data = FVar6.Data;
  local_80 = iVar8;
  if ((int)uStack_c0 == 0) {
LAB_146ced520:
    if (local_c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data);
    }
  }
  else if (local_c8.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_c8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c8,0,0,0x10);
    uStack_c0 = uStack_c0 & 0xffffffff00000000;
    goto LAB_146ced520;
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
      if (local_88.Data == (FScriptContainerElement *)0x0) goto LAB_146ced5d7;
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
LAB_146ced5d7:
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

