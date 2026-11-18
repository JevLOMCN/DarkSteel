// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 6

// SetTimer @ 146effcd0

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
          (FTimerManager *this,FTimerHandle *param_1,
          TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *param_2,
          float param_3,bool param_4,float param_5)

{
  code *pcVar1;
  bool bVar2;
  ForAnyElementType FVar3;
  ulonglong uVar4;
  int iVar5;
  undefined1 auStackY_e8 [32];
  ForAnyElementType local_b0;
  int local_a8;
  FTimerUnifiedDelegate local_98;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_98.VariantDelegate._0_8_ = (FScriptContainerElement *)0x0;
  local_98.VariantDelegate._8_4_ = 0;
  if (param_2 ==
      (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)&local_98)
  goto LAB_146effe02;
  local_b0.Data = (FScriptContainerElement *)0x0;
  local_a8 = 0;
  FVar3.Data = (FScriptContainerElement *)0x0;
  iVar5 = 0;
  if ((*(int *)&param_2->field_0x8 != 0) &&
     (FVar3.Data = (FScriptContainerElement *)0x0, *(longlong **)param_2 != (longlong *)0x0)) {
    (**(code **)(**(longlong **)param_2 + 0x48))();
    FVar3.Data = local_b0.Data;
    iVar5 = local_a8;
  }
  local_a8 = 0;
  local_b0.Data = (FScriptContainerElement *)0x0;
  if (local_98.VariantDelegate._8_4_ == 0) {
LAB_146effda6:
    if ((FScriptContainerElement *)local_98.VariantDelegate._0_8_ != (FScriptContainerElement *)0x0)
    {
      FMemory::Free((void *)local_98.VariantDelegate._0_8_);
    }
  }
  else if ((FScriptContainerElement *)local_98.VariantDelegate._0_8_ !=
           (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_98.VariantDelegate._0_8_)(local_98.VariantDelegate._0_8_);
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_98,0,0,0x10);
    local_98.VariantDelegate._8_4_ = 0;
    goto LAB_146effda6;
  }
  local_98.VariantDelegate._0_8_ = FVar3.Data;
  local_98.VariantDelegate._8_4_ = iVar5;
  if (local_a8 != 0) {
    if (local_b0.Data == (FScriptContainerElement *)0x0) goto LAB_146effe02;
    (*(code *)**(undefined8 **)local_b0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_b0,0,0,0x10);
    local_a8 = 0;
  }
  if (local_b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data);
  }
LAB_146effe02:
  local_98.VariantDelegate.TypeIndex = 1;
  InternalSetTimer(this,param_1,&local_98,param_3,param_4,param_5);
  uVar4 = (ulonglong)local_98.VariantDelegate.TypeIndex;
  if ((3 < local_98.VariantDelegate.TypeIndex) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar4] ==
      UE::Core::Private::
      TDestructorCaller<TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>_>::
      Destruct) {
    if (local_98.VariantDelegate._8_4_ != 0) {
      if ((FScriptContainerElement *)local_98.VariantDelegate._0_8_ ==
          (FScriptContainerElement *)0x0) {
        return;
      }
      (*(code *)**(undefined8 **)local_98.VariantDelegate._0_8_)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_98,0,0,0x10);
      local_98.VariantDelegate._8_4_ = 0;
    }
    if ((FScriptContainerElement *)local_98.VariantDelegate._0_8_ != (FScriptContainerElement *)0x0)
    {
      FMemory::Free((void *)local_98.VariantDelegate._0_8_);
    }
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar4])(&local_98);
  }
  return;
}

// SetTimer<UAIAsyncTaskBlueprintProxy> @ 146f27340

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
FTimerManager::SetTimer<UAIAsyncTaskBlueprintProxy>
          (FTimerManager *this,FTimerHandle *param_1,UAIAsyncTaskBlueprintProxy *param_2,
          pmf_42e81743 param_3,float param_4,bool param_5,float param_6)

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
  UAIAsyncTaskBlueprintProxy *local_a0;
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAIAsyncTaskBlueprintProxy____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_2 != (UAIAsyncTaskBlueprintProxy *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    puVar3[3] = 0;
    local_a0 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_2 != (UAIAsyncTaskBlueprintProxy *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_a0);
    *(pmf_42e81743 *)(puVar3 + 4) = param_3;
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
LAB_146f274b4:
    if (local_88 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88);
    }
  }
  else if (local_88 != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_88)(local_88);
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_88,0,0,0x10);
    local_80 = 0;
    goto LAB_146f274b4;
  }
  local_88 = FVar5.Data;
  local_80 = iVar7;
  if (local_b8 == 0) {
LAB_146f27506:
    if (local_c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data);
    }
  }
  else if (local_c0.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_c0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c0,0,0,0x10);
    local_b8 = 0;
    goto LAB_146f27506;
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
      if (local_88 == (FScriptContainerElement *)0x0) goto LAB_146f275dd;
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
LAB_146f275dd:
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

// SetTimer<UPathFollowingComponent> @ 146f8fb30

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
FTimerManager::SetTimer<UPathFollowingComponent>
          (FTimerManager *this,FTimerHandle *param_1,UPathFollowingComponent *param_2,
          pmf_b679f9f2 *param_3,float param_4,bool param_5,float param_6)

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
  UPathFollowingComponent *local_b0;
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUPathFollowingComponent____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_2 != (UPathFollowingComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    puVar5[3] = 0;
    local_b0 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_2 != (UPathFollowingComponent *)0x0)) {
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
LAB_146f8fcb0:
    if (local_98 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98);
    }
  }
  else if (local_98 != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_98)(local_98);
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_98,0,0,0x10);
    local_90 = 0;
    goto LAB_146f8fcb0;
  }
  local_98 = FVar7.Data;
  local_90 = iVar9;
  if (local_c8 == 0) {
LAB_146f8fd08:
    if (local_d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data);
    }
  }
  else if (local_d0.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_d0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_d0,0,0,0x10);
    local_c8 = 0;
    goto LAB_146f8fd08;
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
      if (local_98 == (FScriptContainerElement *)0x0) goto LAB_146f8fddf;
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
LAB_146f8fddf:
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

// SetTimer<UAITask_MoveTo> @ 146feae30

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
FTimerManager::SetTimer<UAITask_MoveTo>
          (FTimerManager *this,FTimerHandle *param_1,UAITask_MoveTo *param_2,pmf_f8d6f193 *param_3,
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
  UAITask_MoveTo *local_b0;
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAITask_MoveTo____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UAITask_MoveTo *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    puVar5[3] = 0;
    local_b0 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UAITask_MoveTo *)0x0))
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
LAB_146feafb0:
    if (local_98 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98);
    }
  }
  else if (local_98 != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_98)(local_98);
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_98,0,0,0x10);
    local_90 = 0;
    goto LAB_146feafb0;
  }
  local_98 = FVar7.Data;
  local_90 = iVar9;
  if (local_c8 == 0) {
LAB_146feb008:
    if (local_d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data);
    }
  }
  else if (local_d0.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_d0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_d0,0,0,0x10);
    local_c8 = 0;
    goto LAB_146feb008;
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
      if (local_98 == (FScriptContainerElement *)0x0) goto LAB_146feb0df;
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
LAB_146feb0df:
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

// SetTimer<UPawnSensingComponent> @ 146feb140

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
FTimerManager::SetTimer<UPawnSensingComponent>
          (FTimerManager *this,FTimerHandle *param_1,UPawnSensingComponent *param_2,
          pmf_f5bc859b *param_3,float param_4,bool param_5,float param_6)

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
  UPawnSensingComponent *local_b0;
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUPawnSensingComponent____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_2 != (UPawnSensingComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    puVar5[3] = 0;
    local_b0 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_2 != (UPawnSensingComponent *)0x0)) {
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
LAB_146feb2c0:
    if (local_98 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98);
    }
  }
  else if (local_98 != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_98)(local_98);
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_98,0,0,0x10);
    local_90 = 0;
    goto LAB_146feb2c0;
  }
  local_98 = FVar7.Data;
  local_90 = iVar9;
  if (local_c8 == 0) {
LAB_146feb318:
    if (local_d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data);
    }
  }
  else if (local_d0.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_d0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_d0,0,0,0x10);
    local_c8 = 0;
    goto LAB_146feb318;
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
      if (local_98 == (FScriptContainerElement *)0x0) goto LAB_146feb3ef;
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
LAB_146feb3ef:
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

// SetTimerForNextTick<UAITask_MoveTo> @ 146feb450

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
FTimerManager::SetTimerForNextTick<UAITask_MoveTo>
          (FTimerManager *this,UAITask_MoveTo *param_1,pmf_f8d6f193 *param_2)

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
  pmf_f8d6f193 *local_a8;
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAITask_MoveTo____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (pmf_f8d6f193 *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    puVar3[3] = 0;
    local_a8 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (pmf_f8d6f193 *)0x0)) {
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
LAB_146feb5be:
    if (local_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data);
    }
  }
  else if (local_88.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_88.Data)(local_88.Data);
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_88,0,0,0x10);
    local_80 = 0;
    goto LAB_146feb5be;
  }
  local_d5 = 0;
  local_88.Data = FVar6.Data;
  local_80 = iVar8;
  if ((int)uStack_c0 == 0) {
LAB_146feb610:
    if (local_c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data);
    }
  }
  else if (local_c8.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_c8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c8,0,0,0x10);
    uStack_c0 = uStack_c0 & 0xffffffff00000000;
    goto LAB_146feb610;
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
      if (local_88.Data == (FScriptContainerElement *)0x0) goto LAB_146feb6c7;
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
LAB_146feb6c7:
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

