// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// Get @ 1480a3520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack>_>
* __cdecl UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::Get(void)

{
  FNetworkMemoryTrackingScopeStack *__return_storage_ptr__;
  FTSTicker *this;
  undefined ***pppuVar1;
  undefined1 auStackY_78 [32];
  code *local_48 [2];
  undefined **local_38;
  code *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_78;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack>_>&___ptr64___cdecl_UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::Get(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack>_>&___ptr64___cdecl_UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack>_>&___ptr64___cdecl_UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::Get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::Get'::__l2::
           _dynamic_atexit_destructor_for__Stack__);
    _Init_thread_footer(&`public:_static_class_TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack>_>&___ptr64___cdecl_UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (_Stack == 0) {
    __return_storage_ptr__ = ::operator_new(0x78);
    if (__return_storage_ptr__ == (FNetworkMemoryTrackingScopeStack *)0x0) {
      __return_storage_ptr__ = (FNetworkMemoryTrackingScopeStack *)0x0;
    }
    else {
      this = FTSTicker::GetCoreTicker();
      local_38 = &___7__TFunction_OwnedObject_P6A_NM_Z_00_0A__Function_Private_Core_UE__6B_;
      local_20 = (undefined ***)0x0;
      local_30 = OnTick;
      local_48[0] = Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(float),bool,float>::
                    Call;
      FTSTicker::AddTicker
                (this,&__return_storage_ptr__->TickHandle,
                 L"NetworkGranularMemoryLogging::FNetworkMemoryTrackingScopeStack",0.0,
                 (TUniqueFunction<bool___cdecl(float)> *)local_48);
      if (local_48[0] != (code *)0x0) {
        pppuVar1 = &local_38;
        if (local_20 != (undefined ***)0x0) {
          pppuVar1 = local_20;
        }
        (*(code *)(*pppuVar1)[2])();
      }
      *(undefined8 *)&(__return_storage_ptr__->TopLevelScopes).field_0x0 = 0;
      *(undefined8 *)&(__return_storage_ptr__->TopLevelScopes).field_0x8 = 0;
      *(undefined8 *)&(__return_storage_ptr__->TopLevelScopes).field_0x20 = 0;
      *(undefined4 *)&(__return_storage_ptr__->TopLevelScopes).field_0x28 = 0;
      *(undefined4 *)&(__return_storage_ptr__->TopLevelScopes).field_0x2c = 0x80;
      *(undefined4 *)&(__return_storage_ptr__->TopLevelScopes).field_0x30 = 0xffffffff;
      *(undefined4 *)&(__return_storage_ptr__->TopLevelScopes).field_0x34 = 0;
      *(undefined8 *)&(__return_storage_ptr__->TopLevelScopes).field_0x40 = 0;
      *(undefined4 *)&(__return_storage_ptr__->TopLevelScopes).field_0x48 = 0;
      __return_storage_ptr__->CurrentScope = (FNetworkMemoryTrackingScope *)0x0;
      (__return_storage_ptr__->ScopeStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->ScopeStack).ArrayNum = 0;
      (__return_storage_ptr__->ScopeStack).ArrayMax = 0;
    }
    TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack>_>
    ::Reset((TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack>_>
             *)&`public:_static_class_TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack>_>&___ptr64___cdecl_UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::Get(void)'
                ::__l2::Stack,__return_storage_ptr__);
  }
  return (TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack>_>
          *)&`public:_static_class_TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack>_>&___ptr64___cdecl_UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::Get(void)'
             ::__l2::Stack;
}

// OnTick @ 1480ba290

/* WARNING: Removing unreachable block (ram,0x0001480ba5e1) */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::OnTick(float param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_private:_static_bool___cdecl_UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::OnTick(float)_::_2_::FStat_STAT_FNetworkMemoryTrackingScopeStack_OnTick>
  FVar11;
  TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack>_>
  *pTVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  FNameEntryId FVar15;
  FName FVar16;
  TMap<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>_>
  *pTVar17;
  ForAnyElementType FVar18;
  uint uVar19;
  uint local_res10;
  uint uStackX_14;
  undefined1 local_res18 [8];
  FColor_u_0 local_res20 [2];
  ForAnyElementType local_148;
  undefined8 local_140;
  TArray<FString,TSizedDefaultAllocator<32>_> local_138;
  FString local_128;
  FString local_118;
  FName local_108;
  FName local_100;
  longlong *local_e8;
  undefined1 auStack_e0 [16];
  uint uStack_d0;
  uint uStack_cc;
  longlong local_c8;
  TSet<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>,FDefaultSetAllocator>
  *pTStack_c0;
  TSet<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>,FDefaultSetAllocator>
  *local_b8;
  undefined2 local_b0;
  FKeyComparisonClass<TLess<FString>_> local_a8;
  TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack>_>
  *local_a0;
  TWeakPtr<FTSTicker::FElement,1> local_98;
  FString local_88;
  FName local_78;
  FName local_70;
  undefined1 local_68 [32];
  longlong local_48;
  TSet<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>,FDefaultSetAllocator>
  *pTStack_40;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_static_bool___cdecl_UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::OnTick(float)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_static_bool___cdecl_UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::OnTick(float)'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_static_bool___cdecl_UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::OnTick(float)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `private:_static_bool___cdecl_UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::OnTick(float)'
    ::__l2::StatPtr_STAT_FNetworkMemoryTrackingScopeStack_OnTick =
         (FThreadSafeStaticStat<_private:_static_bool___cdecl_UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::OnTick(float)_::_2_::FStat_STAT_FNetworkMemoryTrackingScopeStack_OnTick>
          )0x0;
    pFVar10 = ::FName::FName(&local_78,"STAT_FNetworkMemoryTrackingScopeStack_OnTick");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_static_bool___cdecl_UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::OnTick(float)'
                ::__l2::StatPtr_STAT_FNetworkMemoryTrackingScopeStack_OnTick,*pFVar10,
               L"STAT_FNetworkMemoryTrackingScopeStack_OnTick","STATGROUP_Quick","STATCAT_Advanced",
               L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_static_bool___cdecl_UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::OnTick(float)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FVar11 = `private:_static_bool___cdecl_UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::OnTick(float)'
           ::__l2::StatPtr_STAT_FNetworkMemoryTrackingScopeStack_OnTick;
  if (`private:_static_bool___cdecl_UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::OnTick(float)'
      ::__l2::StatPtr_STAT_FNetworkMemoryTrackingScopeStack_OnTick ==
      (FThreadSafeStaticStat<_private:_static_bool___cdecl_UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::OnTick(float)_::_2_::FStat_STAT_FNetworkMemoryTrackingScopeStack_OnTick>
       )0x0) {
    pFVar10 = ::FName::FName(&local_70,"STAT_FNetworkMemoryTrackingScopeStack_OnTick");
    FVar11 = (FThreadSafeStaticStat<_private:_static_bool___cdecl_UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::OnTick(float)_::_2_::FStat_STAT_FNetworkMemoryTrackingScopeStack_OnTick>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`private:_static_bool___cdecl_UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::OnTick(float)'
                           ::__l2::StatPtr_STAT_FNetworkMemoryTrackingScopeStack_OnTick,*pFVar10,
                          L"STAT_FNetworkMemoryTrackingScopeStack_OnTick","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar11;
  bVar3 = false;
  bVar5 = false;
  local_100.ComparisonIndex.Value = 0;
  local_100.Number = 0;
  FVar15 = FVar16.ComparisonIndex.Value;
  uVar19 = FVar16.Number;
  if ((FVar15.Value != 0) || (uVar19 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_108.ComparisonIndex.Value = FVar15.Value;
        local_108.Number = uVar19;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_108,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\NetworkGranularMemoryLogging.cpp"
                   ,0xb4);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10 = FVar15.Value;
      uStackX_14 = uVar19;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar4 = true;
      goto LAB_1480ba408;
    }
  }
  bVar4 = false;
  FVar16 = local_100;
LAB_1480ba408:
  pTVar12 = Get();
  local_a8.Predicate.Predicate = (TDereferenceWrapper<FString,TLess<FString>_>)&local_res10;
  local_a0 = pTVar12;
  TSet<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>,FDefaultSetAllocator>
  ::
  Sort<TSortableMapBase<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>_>::FKeyComparisonClass<TLess<FString>_>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>,FDefaultSetAllocator>
              *)&pTVar12->Ptr->TopLevelScopes,&local_a8);
  ::FString::FString(&local_88,L"");
  local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.ArrayNum = 0;
  local_138.ArrayMax = 0;
  local_148.Data = (FScriptContainerElement *)0x0;
  local_140 = 0;
  pTVar17 = &pTVar12->Ptr->TopLevelScopes;
  TSet<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_68,
             (TSet<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>,FDefaultSetAllocator>
              *)pTVar17);
  local_b0 = 0;
  stack0xffffffffffffff28 = local_68._16_16_;
  local_e8 = (longlong *)local_68._0_8_;
  auStack_e0._0_8_ = local_68._8_8_;
  local_c8 = local_48;
  pTStack_c0 = pTStack_40;
  uVar13 = local_68._24_8_ >> 0x20;
  local_b8 = (TSet<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>,FDefaultSetAllocator>
              *)pTVar17;
  if (local_68._28_4_ < *(int *)(local_68._16_8_ + 0x18)) {
    do {
      FNetworkMemoryTrackingScope::GenerateRows
                (*(FNetworkMemoryTrackingScope **)((longlong)(int)uVar13 * 0x20 + 0x10 + *local_e8),
                 &local_88,&local_138);
      ::FString::PrintfImpl(&local_128,L"%s KB\r\n%llu");
      if (((local_148.Data <= (FScriptContainerElement *)&local_128) &&
          ((FScriptContainerElement *)&local_128 < local_148.Data + (longlong)local_140._4_4_ * 0x10
          )) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar6)) {
        pcVar2 = (code *)swi(3);
        uVar7 = (*pcVar2)();
        return (bool)uVar7;
      }
      iVar8 = (int)local_140;
      if ((int)local_140 == local_140._4_4_) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_148,(int *)((longlong)&local_140 + 4));
      }
      local_140 = CONCAT44(local_140._4_4_,iVar8 + 1);
      pFVar14 = local_148.Data + (longlong)iVar8 * 0x10;
      *(undefined8 *)pFVar14 = 0;
      *(FScriptContainerElement **)pFVar14 = local_128.Data.AllocatorInstance.Data;
      *(int *)(pFVar14 + 8) = local_128.Data.ArrayNum;
      *(int *)(pFVar14 + 0xc) = local_128.Data.ArrayMax;
      local_128.Data.ArrayNum = 0;
      local_128.Data.ArrayMax = 0;
      local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uStack_d0 = uStack_d0 & ~auStack_e0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_e0);
      uVar13 = (ulonglong)uStack_cc;
    } while ((int)uStack_cc < *(int *)(auStack_e0._8_8_ + 0x18));
    if (((char)local_b0 != '\0') && (local_b0._1_1_ != '\0')) {
      uVar19 = *(int *)&(local_b8->Elements).field_0x8 - *(int *)&(local_b8->Elements).field_0x34;
      if (uVar19 < 4) {
        iVar8 = 1;
      }
      else {
        uVar13 = (ulonglong)((uVar19 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar8 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar19) && (local_b8->HashSize < iVar8)) || (iVar8 < local_b8->HashSize)) {
        local_b8->HashSize = iVar8;
        TSet<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>,FDefaultSetAllocator>
        ::Rehash(local_b8);
      }
    }
  }
  iVar8 = (int)local_140;
  if ((int)local_140 != 0) {
    iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,(int)local_140,&local_138.AllocatorInstance,&local_138.ArrayNum,
                       &local_138.ArrayMax);
    ConstructItems<FString,FString,int>
              (local_138.AllocatorInstance.Data + (longlong)iVar9 * 0x10,(FString *)local_148.Data,
               iVar8);
  }
  if (2 < (byte)LogNet._0_1_) {
    iVar8 = local_138.ArrayNum;
    uVar13 = (ulonglong)local_138.ArrayNum;
    bVar6 = true;
    local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.Data.ArrayNum = 0;
    local_118.Data.ArrayMax = 0;
    pFVar14 = local_138.AllocatorInstance.Data + uVar13 * 0x10;
    FVar18.Data = local_138.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar13 != iVar8) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (FVar18.Data == pFVar14) break;
      if (bVar6) {
        bVar6 = false;
      }
      else {
        ::FString::AppendChars(&local_118,L"\r\n\r\n",4);
      }
      iVar9 = *(int *)(FVar18.Data + 8) + -1;
      if (*(int *)(FVar18.Data + 8) == 0) {
        iVar9 = 0;
      }
      ::FString::AppendChars(&local_118,*(wchar_t **)FVar18.Data,iVar9);
      uVar13 = local_138._8_8_ & 0xffffffff;
      FVar18.Data = FVar18.Data + 0x10;
    }
    Logging::Private::BasicLog<3>
              (&`private:_static_bool___cdecl_UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::OnTick(float)'
                ::__l5::LOG_Static,(FLogCategoryBase *)&LogNet);
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
  }
  pTVar12 = local_a0;
  local_98.Object = (local_a0->Ptr->TickHandle).Object;
  local_98.WeakReferenceCount.ReferenceController =
       (local_a0->Ptr->TickHandle).WeakReferenceCount.ReferenceController;
  if (local_98.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_98.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_98.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  FTSTicker::RemoveTicker(&local_98);
  TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack>_>
  ::Reset(pTVar12,(FNetworkMemoryTrackingScopeStack *)0x0);
  DestructItems<FString,int>((FString *)local_148.Data,(int)local_140);
  if (local_148.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data);
  }
  DestructItems<FString,int>((FString *)local_138.AllocatorInstance.Data,local_138.ArrayNum);
  if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar4) {
    FThreadStats::AddMessage(FVar16,CycleScopeEnd);
  }
  return true;
}

// PushScope @ 1480bf5e0

void __thiscall
UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::PushScope
          (FNetworkMemoryTrackingScopeStack *this,FString *param_1)

{
  FNetworkMemoryTrackingScope **ppFVar1;
  TArray<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope_*,TSizedDefaultAllocator<32>_>
  *pTVar2;
  int *piVar3;
  void *pvVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FNetworkMemoryTrackingScope *pFVar9;
  TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>
  *pTVar10;
  int local_res8;
  FNetworkMemoryTrackingScope *local_res18 [2];
  FString *local_28;
  FNetworkMemoryTrackingScope **local_20;
  
  ppFVar1 = &this->CurrentScope;
  if (*ppFVar1 == (FNetworkMemoryTrackingScope *)0x0) {
    pTVar10 = TMapBase<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>_>
              ::Find((TMapBase<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>_>
                      *)&this->TopLevelScopes,param_1);
    if (pTVar10 ==
        (TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>
         *)0x0) {
      pFVar9 = ::operator_new(0xc0);
      local_res18[0] = (FNetworkMemoryTrackingScope *)0x0;
      if (pFVar9 != (FNetworkMemoryTrackingScope *)0x0) {
        local_res18[0] = FNetworkMemoryTrackingScope::FNetworkMemoryTrackingScope(pFVar9,param_1);
      }
      local_20 = local_res18;
      local_28 = param_1;
      TSet<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FString_const_&,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_&&>_>
                ((TSet<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>,FDefaultSetAllocator>
                  *)&this->TopLevelScopes,
                 (TPairInitializer<FString_const_&,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_&&>
                  *)&local_res8,(bool *)&local_28);
      pFVar9 = local_res18[0];
      *ppFVar1 = *(FNetworkMemoryTrackingScope **)
                  ((longlong)local_res8 * 0x20 + 0x10 + *(longlong *)&this->TopLevelScopes);
      if (local_res18[0] != (FNetworkMemoryTrackingScope *)0x0) {
        *(undefined4 *)&(local_res18[0]->Fields).field_0x48 = 0;
        pvVar4 = *(void **)&(local_res18[0]->Fields).field_0x40;
        if (pvVar4 != (void *)0x0) {
          FMemory::Free(pvVar4);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FString,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FString,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)&pFVar9->Fields);
        *(undefined4 *)&(pFVar9->SubScopes).field_0x48 = 0;
        pvVar4 = *(void **)&(pFVar9->SubScopes).field_0x40;
        if (pvVar4 != (void *)0x0) {
          FMemory::Free(pvVar4);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)&pFVar9->SubScopes);
        pFVar5 = (pFVar9->ScopeName).Data.AllocatorInstance.Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        ::operator_delete(pFVar9,0xc0);
      }
    }
    else {
      *ppFVar1 = pTVar10->Ptr;
    }
  }
  else {
    pFVar9 = FNetworkMemoryTrackingScope::FindOrAddScope(*ppFVar1,param_1);
    *ppFVar1 = pFVar9;
  }
  pTVar2 = &this->ScopeStack;
  (*ppFVar1)->Count = (*ppFVar1)->Count + 1;
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar5 <= ppFVar1) && (ppFVar1 < pFVar5 + (longlong)(this->ScopeStack).ArrayMax * 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar8 = (this->ScopeStack).ArrayNum;
  piVar3 = &(this->ScopeStack).ArrayMax;
  if (iVar8 == *piVar3) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar3);
  }
  (this->ScopeStack).ArrayNum = iVar8 + 1;
  *(FNetworkMemoryTrackingScope **)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8) =
       *ppFVar1;
  return;
}

// TrackWork @ 1480dd240

void __thiscall
UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::TrackWork
          (FNetworkMemoryTrackingScopeStack *this,FString *param_1,ulong64 param_2)

{
  int iVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>
  *pTVar5;
  FNetworkMemoryTrackingScope *pFVar6;
  FNetworkMemoryTrackingScope *pFVar7;
  ulong64 *puVar8;
  int iVar9;
  wchar_t *pwVar10;
  TPairInitializer<FString_const_&,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_&&>
  local_res8;
  FString *local_38;
  TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>
  **local_30;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_void___cdecl_UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::TrackWork(FString_const&___ptr64,unsigned___int64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::TrackWork(FString_const&___ptr64,unsigned___int64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_void___cdecl_UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::TrackWork(FString_const&___ptr64,unsigned___int64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FString::FString(&`public:_void___cdecl_UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::TrackWork(FString_const&___ptr64,unsigned___int64)___ptr64'
                        ::__l2::UnknownScopeName,L"UNKNOWN");
    atexit(`UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::TrackWork'::
           __l2::_dynamic_atexit_destructor_for__UnknownScopeName__);
    _Init_thread_footer(&`public:_void___cdecl_UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::TrackWork(FString_const&___ptr64,unsigned___int64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pFVar6 = this->CurrentScope;
  pFVar7 = (FNetworkMemoryTrackingScope *)0x0;
  iVar9 = 0;
  if (pFVar6 == (FNetworkMemoryTrackingScope *)0x0) {
    pTVar5 = TMapBase<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>_>
             ::Find((TMapBase<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>_>
                     *)&this->TopLevelScopes,
                    &`public:_void___cdecl_UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::TrackWork(FString_const&___ptr64,unsigned___int64)___ptr64'
                     ::__l2::UnknownScopeName);
    if (pTVar5 == (TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>
                   *)0x0) {
      pFVar6 = ::operator_new(0xc0);
      if (pFVar6 != (FNetworkMemoryTrackingScope *)0x0) {
        pFVar7 = FNetworkMemoryTrackingScope::FNetworkMemoryTrackingScope
                           (pFVar6,&`public:_void___cdecl_UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::TrackWork(FString_const&___ptr64,unsigned___int64)___ptr64'
                                    ::__l2::UnknownScopeName);
      }
      local_30 = &local_res8.Value;
      local_38 = &`public:_void___cdecl_UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::TrackWork(FString_const&___ptr64,unsigned___int64)___ptr64'
                  ::__l2::UnknownScopeName;
      local_res8.Value =
           (TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>
            *)pFVar7;
      TSet<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FString_const_&,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_&&>_>
                ((TSet<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>,FDefaultSetAllocator>
                  *)&this->TopLevelScopes,&local_res8,(bool *)&local_38);
      pTVar5 = local_res8.Value;
      pFVar6 = *(FNetworkMemoryTrackingScope **)
                ((longlong)(int)local_res8.Key * 0x20 + 0x10 + *(longlong *)&this->TopLevelScopes);
      if ((FNetworkMemoryTrackingScope *)local_res8.Value != (FNetworkMemoryTrackingScope *)0x0) {
        *(undefined4 *)
         &((TMap<FString,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned___int64,0>_>
            *)((longlong)local_res8.Value + 0x60))->field_0x48 = 0;
        pvVar2 = *(void **)&((TMap<FString,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned___int64,0>_>
                              *)((longlong)local_res8.Value + 0x60))->field_0x40;
        if (pvVar2 != (void *)0x0) {
          FMemory::Free(pvVar2);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FString,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FString,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)((longlong)pTVar5 + 0x60));
        *(undefined4 *)
         &((TMap<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>_>
            *)((longlong)pTVar5 + 0x10))->field_0x48 = 0;
        pvVar2 = *(void **)&((TMap<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>_>
                              *)((longlong)pTVar5 + 0x10))->field_0x40;
        if (pvVar2 != (void *)0x0) {
          FMemory::Free(pvVar2);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)((longlong)pTVar5 + 0x10));
        pFVar3 = (((FString *)&pTVar5->Ptr)->Data).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        ::operator_delete(pTVar5,0xc0);
      }
    }
    else {
      pFVar6 = pTVar5->Ptr;
    }
  }
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar1 == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    iVar9 = iVar1 + -1;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar10);
  puVar8 = TMapBase<FString,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned___int64,0>_>
           ::FindOrAddImpl<FString_const_&>
                     ((TMapBase<FString,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned___int64,0>_>
                       *)&pFVar6->Fields,uVar4,param_1);
  *puVar8 = *puVar8 + param_2;
  pFVar6->TotalBytes = pFVar6->TotalBytes + param_2;
  return;
}

