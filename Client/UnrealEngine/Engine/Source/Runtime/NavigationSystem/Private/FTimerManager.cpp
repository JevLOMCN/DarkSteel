// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 1

// SetTimer<UNavLinkCustomComponent> @ 146dd23c0

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
FTimerManager::SetTimer<UNavLinkCustomComponent>
          (FTimerManager *this,FTimerHandle *param_1,UNavLinkCustomComponent *param_2,
          pmf_e62c9050 *param_3,float param_4,bool param_5,float param_6)

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
  UNavLinkCustomComponent *local_b0;
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNavLinkCustomComponent____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_2 != (UNavLinkCustomComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    puVar5[3] = 0;
    local_b0 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_2 != (UNavLinkCustomComponent *)0x0)) {
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
LAB_146dd2540:
    if (local_98 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98);
    }
  }
  else if (local_98 != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_98)(local_98);
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_98,0,0,0x10);
    local_90 = 0;
    goto LAB_146dd2540;
  }
  local_98 = FVar7.Data;
  local_90 = iVar9;
  if (local_c8 == 0) {
LAB_146dd2598:
    if (local_d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data);
    }
  }
  else if (local_d0.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_d0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_d0,0,0,0x10);
    local_c8 = 0;
    goto LAB_146dd2598;
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
      if (local_98 == (FScriptContainerElement *)0x0) goto LAB_146dd266f;
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
LAB_146dd266f:
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

