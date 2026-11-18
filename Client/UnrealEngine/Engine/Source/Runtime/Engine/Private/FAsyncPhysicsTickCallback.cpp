// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// GetFNameForStatId @ 1482878c0

FName __thiscall FAsyncPhysicsTickCallback::GetFNameForStatId(FAsyncPhysicsTickCallback *this)

{
  FName in_RDX;
  
  FLazyName::Resolve(&`public:_virtual_class_FName___cdecl_FAsyncPhysicsTickCallback::GetFNameForStatId(void)const___ptr64'
                      ::__l2::StaticName);
  return in_RDX;
}

// OnPreSimulate_Internal @ 148297be0

/* WARNING: Removing unreachable block (ram,0x000148298aae) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAsyncPhysicsTickCallback::OnPreSimulate_Internal(FAsyncPhysicsTickCallback *this)

{
  int *piVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  UObjectBaseUtility *pUVar8;
  TAtomic<FMinimalName> TVar9;
  FName FVar10;
  FName FVar11;
  undefined1 *puVar12;
  code *pcVar13;
  bool bVar14;
  TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *pTVar15;
  TBitArray<FDefaultBitArrayAllocator> *pTVar16;
  TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *pTVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  int iVar21;
  FNameEntryId FVar22;
  undefined8 uVar23;
  TStatId TVar24;
  FUObjectItem *pFVar25;
  FName *pFVar26;
  FThreadSafeStaticStat<FStat_STAT_UObjectsStatGroupTester> FVar27;
  FUObjectItem *pFVar28;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  byte bVar29;
  FScriptContainerElement *pFVar30;
  longlong lVar31;
  TStatIdData *pTVar32;
  uint uVar33;
  undefined1 *puVar34;
  uint *puVar35;
  uint uVar36;
  undefined1 *puVar37;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  FColor_u_0 local_res20 [2];
  uint local_278 [2];
  FName local_270;
  byte local_268;
  FName local_260;
  byte local_258;
  ForAnyElementType local_250;
  undefined8 local_248;
  FName local_240;
  FName local_238;
  FCycleCounter local_230;
  FColor_u_0 local_220;
  FColor_u_0 local_21c;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_218;
  undefined8 uStack_210;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  int local_1f0;
  undefined4 uStack_1ec;
  int local_1e8;
  uint uStack_1e4;
  undefined1 *puStack_1e0;
  undefined4 local_1d8;
  int iStack_1d4;
  int iStack_1d0;
  undefined4 uStack_1cc;
  TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *local_1c8;
  FName local_1c0;
  FName local_1b8;
  FName local_1b0;
  FName local_1a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_198;
  int local_178;
  int local_174;
  int local_170;
  LARGE_INTEGER local_168;
  FStatMessage local_160;
  TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  FName local_120;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_118;
  undefined8 uStack_f8;
  FSourceLocation local_e8;
  TArrayView<int_const_,int> local_c8;
  FName local_b8 [2];
  FName local_a8;
  FName local_a0;
  FName local_98;
  FName local_90 [4];
  undefined4 local_6c;
  
  uVar36 = (this->PendingCommands).ArrayNum;
  local_250.Data = (FScriptContainerElement *)0x0;
  local_248 = 0;
  if ((int)uVar36 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar36);
  }
  if (0 < (int)uVar36) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar36,&local_250,0,(int *)((longlong)&local_248 + 4));
  }
  local_278[0] = 0;
  if (0 < (this->PendingCommands).ArrayNum) {
    do {
      uVar36 = local_278[0];
      iVar21 = *(int *)(this->_padding_ + 0x328);
      uVar33 = 0;
      if ((int)local_278[0] < (this->PendingCommands).ArrayNum) {
        uVar33 = ~local_278[0] >> 0x1f;
      }
      if ((uVar33 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pFVar7 = (this->PendingCommands).AllocatorInstance.Data;
      lVar31 = (longlong)(int)uVar36 * 0x50;
      bVar19 = FWeakObjectPtr::IsStale((FWeakObjectPtr *)(pFVar7 + lVar31 + 4),true,false);
      if ((bVar19) || (*(void **)(pFVar7 + lVar31 + 0x10) == (void *)0x0)) {
LAB_148297d34:
        if (((local_250.Data <= (FScriptContainerElement *)local_278) &&
            ((FScriptContainerElement *)local_278 < local_250.Data + (longlong)local_248._4_4_ * 4))
           && (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar19)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        iVar21 = (int)local_248;
        if ((int)local_248 == local_248._4_4_) {
          iVar21 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_250,(int *)((longlong)&local_248 + 4));
        }
        local_248 = CONCAT44(local_248._4_4_,iVar21 + 1);
        *(uint *)(local_250.Data + (longlong)iVar21 * 4) = local_278[0];
      }
      else if (*(int *)(pFVar7 + lVar31) <= iVar21) {
        UE::Core::Private::Function::CheckCallable(*(void **)(pFVar7 + lVar31 + 0x10));
        pFVar30 = *(FScriptContainerElement **)(pFVar7 + lVar31 + 0x38);
        pcVar13 = *(code **)(pFVar7 + lVar31 + 0x10);
        if (pFVar30 == (FScriptContainerElement *)0x0) {
          pFVar30 = pFVar7 + lVar31 + 0x20;
        }
        uVar23 = (**(code **)(*(longlong *)pFVar30 + 8))();
        (*pcVar13)(uVar23);
        goto LAB_148297d34;
      }
      local_278[0] = local_278[0] + 1;
    } while ((int)local_278[0] < (this->PendingCommands).ArrayNum);
  }
  iVar21 = (int)local_248;
  local_c8.DataPtr = (int *)local_250.Data;
  if (((int)local_248 < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar19)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  local_c8.ArrayNum = iVar21;
  Chaos::
  RemoveArrayItemsAtSortedIndices<TArray<FPendingAsyncPhysicsCommand,TSizedDefaultAllocator<32>_>_>
            (&this->PendingCommands,&local_c8);
  dVar3 = (double)this->_padding_;
  dVar4 = (double)this->_padding_;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_void___cdecl_FAsyncPhysicsTickCallback::OnPreSimulate_Internal(void)___ptr64'
       ::__l12::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_void___cdecl_FAsyncPhysicsTickCallback::OnPreSimulate_Internal(void)___ptr64'
                           ::__l12::_thread_safe_static_guard_0__),
     `public:_virtual_void___cdecl_FAsyncPhysicsTickCallback::OnPreSimulate_Internal(void)___ptr64'
     ::__l12::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_AsyncPhys_TickComponents = 0;
    pFVar26 = ::FName::FName(&local_a8,"STAT_AsyncPhys_TickComponents");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_virtual_void___cdecl_FAsyncPhysicsTickCallback::OnPreSimulate_Internal(void)___ptr64'
                ::__l12::StatPtr_STAT_AsyncPhys_TickComponents,*pFVar26,
               L"STAT_AsyncPhys_TickComponents","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
               true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_virtual_void___cdecl_FAsyncPhysicsTickCallback::OnPreSimulate_Internal(void)___ptr64'
                         ::__l12::_thread_safe_static_guard_0__);
  }
  TVar24 = FThreadSafeStaticStatInner<`FAsyncPhysicsTickCallback::OnPreSimulate_Internal'::__l12::FStat_STAT_AsyncPhys_TickComponents,1>
           ::GetStatId(&`public:_virtual_void___cdecl_FAsyncPhysicsTickCallback::OnPreSimulate_Internal(void)___ptr64'
                        ::__l12::StatPtr_STAT_AsyncPhys_TickComponents);
  local_e8.Impl._Line = 0xd9;
  local_e8.Impl._Column = 4;
  local_e8.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysScene_Chaos.cpp"
  ;
  local_e8.Impl._Function = "void __cdecl FAsyncPhysicsTickCallback::OnPreSimulate_Internal(void)";
  local_230.StatId.ComparisonIndex.Value = 0;
  local_230.StatId.Number = 0;
  local_230.EmittedEvent = 0;
  FCycleCounter::Start
            (&local_230,*(TStatIdData **)&(TVar24.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false,
             &local_e8);
  pTStack_208 = (TBitArray<FDefaultBitArrayAllocator> *)
                &(this->AsyncPhysicsTickComponents).Elements.field_0x10;
  iStack_1d4 = 0;
  iStack_1d0 = 0;
  iVar21 = *(int *)&(this->AsyncPhysicsTickComponents).Elements.field_0x28;
  local_240 = (FName)&this->AsyncPhysicsTickComponents;
  local_238.ComparisonIndex.Value = 1;
  local_238.Number = 0;
  local_1e8 = 0;
  uStack_1e4 = 1;
  if (iVar21 != 0) {
    puVar35 = *(uint **)&(this->AsyncPhysicsTickComponents).Elements.field_0x20;
    if (puVar35 == (uint *)0x0) {
      puVar35 = (uint *)pTStack_208;
    }
    uVar36 = *puVar35;
    while (uVar36 == 0) {
      iStack_1d0 = iStack_1d0 + 0x20;
      lVar31 = (longlong)local_1e8;
      local_1e8 = local_1e8 + 1;
      if ((int)(iVar21 + -1 + (iVar21 + -1 >> 0x1f & 0x1fU)) >> 5 < local_1e8) goto LAB_148297fa5;
      uVar36 = puVar35[lVar31 + 1];
    }
    uStack_1e4 = ~(uVar36 - 1) & uVar36;
    uVar2 = (ulonglong)uStack_1e4 * 2 + 1;
    lVar31 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar31 == 0; lVar31 = lVar31 + -1) {
      }
    }
    local_178 = (int)lVar31;
    iStack_1d4 = local_178 + -1 + iStack_1d0;
    if (iVar21 < iStack_1d4) {
LAB_148297fa5:
      iStack_1d4 = iVar21;
    }
  }
  local_1d8 = 0xffffffff;
  local_198.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)
       &(this->AsyncPhysicsTickComponents).Elements.field_0x10;
  uStack_210 = CONCAT44(uStack_1e4,local_1e8);
  local_1f0 = *(int *)&(this->AsyncPhysicsTickComponents).Elements.field_0x8 -
              *(int *)&(this->AsyncPhysicsTickComponents).Elements.field_0x34;
  uStack_200._4_4_ = iStack_1d4;
  uStack_200._0_4_ = 0xffffffff;
  uStack_1f8._4_4_ = uStack_1cc;
  uStack_1f8._0_4_ = iStack_1d0;
  uVar36 = *(uint *)&(this->AsyncPhysicsTickComponents).Elements.field_0x28;
  local_198._padding_._0_4_ = (int)uVar36 >> 5;
  bVar29 = (byte)uVar36 & 0x1f;
  local_198._padding_._4_4_ = 1 << bVar29;
  local_198.UnvisitedBitMask = -1 << bVar29;
  local_198.BaseBitIndex = uVar36 & 0xffffffe0;
  uStack_f8 = CONCAT44(uStack_1ec,local_1f0);
  local_218 = (TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *)
              local_240;
  puStack_1e0 = (undefined1 *)pTStack_208;
  local_198.CurrentBitIndex = uVar36;
  local_120 = local_240;
  TStack_118._padding_ = uStack_210;
  TStack_118.Array = pTStack_208;
  TStack_118._16_8_ = uStack_200;
  TStack_118._24_8_ = uStack_1f8;
  if (((int)uVar36 < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar19)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  if (uVar36 != *(uint *)&(this->AsyncPhysicsTickComponents).Elements.field_0x28) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_198);
  }
  iVar21 = local_198.CurrentBitIndex;
  pTVar16 = local_198.Array;
  FVar11 = local_240;
  uStack_210 = CONCAT44(local_198._padding_._4_4_,(int)local_198._padding_);
  uStack_200 = CONCAT44(local_198.CurrentBitIndex,local_198.UnvisitedBitMask);
  uStack_1f8 = CONCAT44(local_198._28_4_,local_198.BaseBitIndex);
  pTStack_208 = local_198.Array;
  while( true ) {
    FVar10 = local_120;
    if (*(int *)((longlong)local_120 + 8) - *(int *)((longlong)local_120 + 0x34) != (int)uStack_f8)
    {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_118.CurrentBitIndex == iVar21) && (TStack_118.Array == pTVar16)) &&
       (FVar10 == FVar11)) break;
    pUVar8 = *(UObjectBaseUtility **)
              (*(longlong *)FVar10 + (longlong)TStack_118.CurrentBitIndex * 0x10);
    if (((pUVar8 == (UObjectBaseUtility *)0x0) || ((pUVar8[3].field_0x22 & 0x10) == 0)) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Component && Component->IsActive()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysScene_Chaos.cpp"
                            ,0xdc,L""), bVar19)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    local_260.ComparisonIndex.Value = 0;
    local_260.Number = 0;
    local_258 = 0;
    if (pUVar8 != (UObjectBaseUtility *)0x0) {
      pFVar25 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar8->field_0xc);
      FVar27 = StatPtr_STAT_UObjectsStatGroupTester;
      if (StatPtr_STAT_UObjectsStatGroupTester ==
          (FThreadSafeStaticStat<FStat_STAT_UObjectsStatGroupTester>)0x0) {
        pFVar26 = ::FName::FName(local_b8,"STAT_UObjectsStatGroupTester");
        FVar27 = (FThreadSafeStaticStat<FStat_STAT_UObjectsStatGroupTester>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UObjectsStatGroupTester,
                            *pFVar26,L"STAT_UObjectsStatGroupTester","STATGROUP_UObjects",
                            "STATCAT_Advanced",L"UObjects",true,true,ST_int64,false,false,
                            MCR_Invalid);
      }
      if ((((int)*(undefined8 *)FVar27 == 0) &&
          ((int)((ulonglong)*(undefined8 *)FVar27 >> 0x20) == 0)) ||
         (FThreadStats::bPrimaryEnable == false)) {
        pTVar32 = &TStatId::TStatId_NAME_None;
      }
      else {
        TVar9 = ((pFVar25->StatID).StatIdPtr)->Name;
        if ((TVar9._0_4_ == 0) && (TVar9._4_4_ == 0)) {
          pFVar28 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar8->field_0xc);
          FUObjectItem::CreateStatID(pFVar28);
        }
        pTVar32 = (pFVar25->StatID).StatIdPtr;
      }
      if (((SUB84(pTVar32->Name,0) == 0) && (SUB84(pTVar32->Name,4) == 0)) ||
         (FThreadStats::bPrimaryEnable == false)) {
        if (-1 < CpuChannel->Enabled) {
          FScopeCycleCounterUObject::StartObjectTrace
                    ((FScopeCycleCounterUObject *)&local_260,pUVar8);
        }
      }
      else {
        FVar10 = *(FName *)&pTVar32->Name;
        if ((FVar10.ComparisonIndex.Value.Value != 0) || (FVar10.Number != 0)) {
          if (GCycleStatsShouldEmitNamedEvents != 0) {
            local_res20[0].Bits = 0;
            FGenericPlatformMisc::BeginNamedEvent
                      ((FColor *)&local_res20[0]._s_0,(pTVar32->StatDescriptionAnsi).Ptr);
            local_258 = local_258 | 1;
            if (-1 < CpuChannel->Enabled) {
              local_1c0.ComparisonIndex.Value = FVar10.ComparisonIndex.Value.Value;
              local_1c0.Number = FVar10.Number;
              FCpuProfilerTrace::OutputBeginDynamicEventWithId
                        (&local_1c0,(pTVar32->StatDescriptionWide).Ptr,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                         ,0x3d8);
              local_258 = local_258 | 2;
            }
          }
          if (FThreadStats::bPrimaryEnable != false) {
            local_260 = FVar10;
            local_240 = FVar10;
            FThreadStats::AddMessage(FVar10,CycleScopeStart);
            local_258 = local_258 | 4;
          }
        }
      }
    }
    (**(code **)(*(longlong *)pUVar8 + 0x418))(pUVar8,(float)dVar3,(float)dVar4);
    if ((local_258 & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_258 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FVar10 = local_260;
    if (((((local_258 & 4) != 0) && (local_260 != (FName)0x0)) &&
        (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_160.NameAndInfo.Index = FVar10.ComparisonIndex.Value;
        local_160.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_168);
        local_160.StatData.Pad[4] = '\0';
        local_160.StatData.Pad[5] = '\0';
        local_160.StatData.Pad[6] = '\0';
        local_160.StatData.Pad[7] = '\0';
        local_160.StatData.Pad[0] = local_168.s.LowPart._0_1_;
        local_160.StatData.Pad[1] = local_168.s.LowPart._1_1_;
        local_160.StatData.Pad[2] = local_168.s.LowPart._2_1_;
        local_160.StatData.Pad[3] = local_168.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&local_160);
        piVar1 = &this_00->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
    local_258 = 0;
    TStack_118.UnvisitedBitMask = TStack_118.UnvisitedBitMask & ~TStack_118._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_118);
  }
  if ((local_230.EmittedEvent & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_230.EmittedEvent & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_230.EmittedEvent & 4) != 0) {
    FThreadStats::AddMessage(local_230.StatId,CycleScopeEnd);
  }
  local_230.EmittedEvent = '\0';
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_void___cdecl_FAsyncPhysicsTickCallback::OnPreSimulate_Internal(void)___ptr64'
       ::__l24::_thread_safe_static_guard_2__) &&
     (_Init_thread_header(&`public:_virtual_void___cdecl_FAsyncPhysicsTickCallback::OnPreSimulate_Internal(void)___ptr64'
                           ::__l24::_thread_safe_static_guard_2__),
     `public:_virtual_void___cdecl_FAsyncPhysicsTickCallback::OnPreSimulate_Internal(void)___ptr64'
     ::__l24::_thread_safe_static_guard_2__ == -1)) {
    _StatPtr_STAT_AsyncPhys_TickActors = (TStatIdData *)0x0;
    pFVar26 = ::FName::FName(local_90,"STAT_AsyncPhys_TickActors");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_virtual_void___cdecl_FAsyncPhysicsTickCallback::OnPreSimulate_Internal(void)___ptr64'
                ::__l24::StatPtr_STAT_AsyncPhys_TickActors,*pFVar26,L"STAT_AsyncPhys_TickActors",
               "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_virtual_void___cdecl_FAsyncPhysicsTickCallback::OnPreSimulate_Internal(void)___ptr64'
                         ::__l24::_thread_safe_static_guard_2__);
  }
  iVar21 = 0;
  pTVar32 = _StatPtr_STAT_AsyncPhys_TickActors;
  if (_StatPtr_STAT_AsyncPhys_TickActors == (TStatIdData *)0x0) {
    pFVar26 = ::FName::FName(&local_a0,"STAT_AsyncPhys_TickActors");
    pTVar32 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_virtual_void___cdecl_FAsyncPhysicsTickCallback::OnPreSimulate_Internal(void)___ptr64'
                          ::__l24::StatPtr_STAT_AsyncPhys_TickActors,*pFVar26,
                         L"STAT_AsyncPhys_TickActors","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                         true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)&pTVar32->Name;
  bVar14 = false;
  bVar19 = false;
  local_1a8.ComparisonIndex.Value = 0;
  local_1a8.Number = 0;
  bVar20 = false;
  bVar18 = false;
  if ((FVar11.ComparisonIndex.Value.Value != 0) || (FVar11.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_220.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_220._s_0,(pTVar32->StatDescriptionAnsi).Ptr);
      bVar14 = false;
      bVar19 = true;
      bVar20 = false;
      bVar18 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1b8.ComparisonIndex.Value = FVar11.ComparisonIndex.Value.Value;
        local_1b8.Number = FVar11.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1b8,(pTVar32->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysScene_Chaos.cpp"
                   ,0xe4);
        bVar14 = true;
        bVar19 = true;
        bVar20 = true;
        bVar18 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_240 = FVar11;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar18 = true;
      goto LAB_1482985a8;
    }
  }
  bVar14 = bVar20;
  bVar19 = bVar18;
  bVar18 = false;
  local_240 = local_1a8;
LAB_1482985a8:
  pTStack_208 = (TBitArray<FDefaultBitArrayAllocator> *)
                &(this->AsyncPhysicsTickActors).Elements.field_0x10;
  iVar5 = *(int *)&(this->AsyncPhysicsTickActors).Elements.field_0x28;
  local_218 = (TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *)
              &this->AsyncPhysicsTickActors;
  uStack_200._4_4_ = iVar21;
  uStack_1f8._0_4_ = iVar21;
  if (iVar5 == 0) {
LAB_148298642:
    FVar22 = local_238.ComparisonIndex.Value;
  }
  else {
    puVar35 = *(uint **)&(this->AsyncPhysicsTickActors).Elements.field_0x20;
    if (puVar35 == (uint *)0x0) {
      puVar35 = (uint *)pTStack_208;
    }
    uVar36 = *puVar35;
    while (uVar36 == 0) {
      lVar31 = (longlong)iVar21;
      uStack_1f8._0_4_ = (int)uStack_1f8 + 0x20;
      iVar21 = iVar21 + 1;
      uStack_200._4_4_ = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar21) goto LAB_148298642;
      uVar36 = puVar35[lVar31 + 1];
    }
    FVar22.Value = -uVar36 & uVar36;
    uVar2 = (ulonglong)FVar22.Value * 2 + 1;
    lVar31 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar31 == 0; lVar31 = lVar31 + -1) {
      }
    }
    local_174 = (int)lVar31;
    uStack_200._4_4_ = local_174 + -1 + (int)uStack_1f8;
    if (iVar5 < uStack_200._4_4_) {
      uStack_200._4_4_ = iVar5;
    }
  }
  puVar37 = &(this->AsyncPhysicsTickActors).Elements.field_0x10;
  local_1f0 = *(int *)&(this->AsyncPhysicsTickActors).Elements.field_0x8 -
              *(int *)&(this->AsyncPhysicsTickActors).Elements.field_0x34;
  uVar36 = *(uint *)&(this->AsyncPhysicsTickActors).Elements.field_0x28;
  uVar33 = uVar36 & 0xffffffe0;
  uStack_200._0_4_ = 0xffffffff;
  uStack_210 = CONCAT44(FVar22.Value,iVar21);
  uStack_1f8._4_4_ = local_6c;
  TStack_148._padding_ = uStack_210;
  iVar21 = (int)uVar36 >> 5;
  uStack_128 = CONCAT44(uStack_1ec,local_1f0);
  TStack_148.UnvisitedBitMask = 0xffffffff;
  TStack_148.CurrentBitIndex = uStack_200._4_4_;
  TStack_148.BaseBitIndex = (int)uStack_1f8;
  TStack_148._28_4_ = local_6c;
  local_1c8 = (TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *)local_218;
  local_150 = (TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *)local_218;
  TStack_148.Array = pTStack_208;
  if (((int)uVar36 < 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pTVar15 = local_1c8;
  uVar6 = *(uint *)&(this->AsyncPhysicsTickActors).Elements.field_0x28;
  if (uVar36 != uVar6) {
    puVar12 = *(undefined1 **)&(this->AsyncPhysicsTickActors).Elements.field_0x20;
    puVar34 = puVar37;
    if (puVar12 != (undefined1 *)0x0) {
      puVar34 = puVar12;
    }
    uVar36 = -1 << ((byte)uVar36 & 0x1f) & *(uint *)(puVar34 + (longlong)iVar21 * 4);
    while (uVar36 == 0) {
      lVar31 = (longlong)iVar21;
      uVar33 = uVar33 + 0x20;
      iVar21 = iVar21 + 1;
      uVar36 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21) goto LAB_148298760;
      uVar36 = *(uint *)(puVar34 + lVar31 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar36 & uVar36) * 2 + 1;
    lVar31 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar31 == 0; lVar31 = lVar31 + -1) {
      }
    }
    local_170 = (int)lVar31;
    uVar36 = local_170 + -1 + uVar33;
    if ((int)uVar6 < (int)uVar36) {
      uVar36 = uVar6;
    }
  }
LAB_148298760:
  while( true ) {
    pTVar17 = local_150;
    if (*(int *)&(local_150->Elements).field_0x8 - *(int *)&(local_150->Elements).field_0x34 !=
        (int)uStack_128) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<AActor_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    FVar11 = local_240;
    if (((TStack_148.CurrentBitIndex == uVar36) &&
        (TStack_148.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar37)) &&
       (pTVar17 == pTVar15)) break;
    pUVar8 = *(UObjectBaseUtility **)
              (*(longlong *)&pTVar17->Elements + (longlong)TStack_148.CurrentBitIndex * 0x10);
    if ((pUVar8 == (UObjectBaseUtility *)0x0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("Actor",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysScene_Chaos.cpp"
                            ,0xe7,L""), bVar20)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    local_270.ComparisonIndex.Value = 0;
    local_270.Number = 0;
    local_268 = 0;
    if (pUVar8 != (UObjectBaseUtility *)0x0) {
      pFVar25 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar8->field_0xc);
      FVar27 = StatPtr_STAT_UObjectsStatGroupTester;
      if (StatPtr_STAT_UObjectsStatGroupTester ==
          (FThreadSafeStaticStat<FStat_STAT_UObjectsStatGroupTester>)0x0) {
        pFVar26 = ::FName::FName(&local_98,"STAT_UObjectsStatGroupTester");
        FVar27 = (FThreadSafeStaticStat<FStat_STAT_UObjectsStatGroupTester>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UObjectsStatGroupTester,
                            *pFVar26,L"STAT_UObjectsStatGroupTester","STATGROUP_UObjects",
                            "STATCAT_Advanced",L"UObjects",true,true,ST_int64,false,false,
                            MCR_Invalid);
      }
      if ((((int)*(undefined8 *)FVar27 == 0) &&
          ((int)((ulonglong)*(undefined8 *)FVar27 >> 0x20) == 0)) ||
         (FThreadStats::bPrimaryEnable == false)) {
        pTVar32 = &TStatId::TStatId_NAME_None;
      }
      else {
        TVar9 = ((pFVar25->StatID).StatIdPtr)->Name;
        if ((TVar9._0_4_ == 0) && (TVar9._4_4_ == 0)) {
          pFVar28 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar8->field_0xc);
          FUObjectItem::CreateStatID(pFVar28);
        }
        pTVar32 = (pFVar25->StatID).StatIdPtr;
      }
      if (((SUB84(pTVar32->Name,0) == 0) && (SUB84(pTVar32->Name,4) == 0)) ||
         (FThreadStats::bPrimaryEnable == false)) {
        if (-1 < CpuChannel->Enabled) {
          FScopeCycleCounterUObject::StartObjectTrace
                    ((FScopeCycleCounterUObject *)&local_270,pUVar8);
        }
      }
      else {
        FVar11 = *(FName *)&pTVar32->Name;
        if ((FVar11.ComparisonIndex.Value.Value != 0) || (FVar11.Number != 0)) {
          if (GCycleStatsShouldEmitNamedEvents != 0) {
            local_21c.Bits = 0;
            FGenericPlatformMisc::BeginNamedEvent
                      ((FColor *)&local_21c._s_0,(pTVar32->StatDescriptionAnsi).Ptr);
            local_268 = local_268 | 1;
            if (-1 < CpuChannel->Enabled) {
              local_1b0.ComparisonIndex.Value = FVar11.ComparisonIndex.Value.Value;
              local_1b0.Number = FVar11.Number;
              FCpuProfilerTrace::OutputBeginDynamicEventWithId
                        (&local_1b0,(pTVar32->StatDescriptionWide).Ptr,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                         ,0x3d8);
              local_268 = local_268 | 2;
            }
          }
          if (FThreadStats::bPrimaryEnable != false) {
            local_270 = FVar11;
            local_238 = FVar11;
            FThreadStats::AddMessage(FVar11,CycleScopeStart);
            local_268 = local_268 | 4;
          }
        }
      }
    }
    (**(code **)(*(longlong *)pUVar8 + 0x4b8))(pUVar8,(float)dVar3,(float)dVar4);
    if ((local_268 & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_268 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_268 & 4) != 0) {
      FThreadStats::AddMessage(local_270,CycleScopeEnd);
    }
    local_268 = 0;
    TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
  }
  if (bVar19) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar18) {
    FThreadStats::AddMessage(FVar11,CycleScopeEnd);
  }
  if (local_250.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_250.Data);
  }
  return;
}

