// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 1

// SetTimer<ULeaderboardQueryCallbackProxy> @ 14ec50b10

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
FTimerManager::SetTimer<ULeaderboardQueryCallbackProxy>
          (FTimerManager *this,FTimerHandle *param_1,ULeaderboardQueryCallbackProxy *param_2,
          pmf_3ab4b919 param_3,float param_4,bool param_5,float param_6)

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
  ULeaderboardQueryCallbackProxy *local_a0;
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VULeaderboardQueryCallbackProxy____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_2 != (ULeaderboardQueryCallbackProxy *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    puVar3[3] = 0;
    local_a0 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_2 != (ULeaderboardQueryCallbackProxy *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_a0);
    *(pmf_3ab4b919 *)(puVar3 + 4) = param_3;
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
LAB_14ec50c84:
    if (local_88 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88);
    }
  }
  else if (local_88 != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_88)(local_88);
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_88,0,0,0x10);
    local_80 = 0;
    goto LAB_14ec50c84;
  }
  local_88 = FVar5.Data;
  local_80 = iVar7;
  if (local_b8 == 0) {
LAB_14ec50cd6:
    if (local_c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data);
    }
  }
  else if (local_c0.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_c0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c0,0,0,0x10);
    local_b8 = 0;
    goto LAB_14ec50cd6;
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
      if (local_88 == (FScriptContainerElement *)0x0) goto LAB_14ec50dad;
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
LAB_14ec50dad:
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

