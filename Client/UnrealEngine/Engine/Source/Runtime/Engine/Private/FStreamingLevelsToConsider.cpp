// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticStruct @ 148998630

UScriptStruct * __cdecl FStreamingLevelsToConsider::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStreamingLevelsToConsider.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FStreamingLevelsToConsider.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStreamingLevelsToConsider,(UObject *)pUVar1,
                         L"StreamingLevelsToConsider");
  }
  return Z_Registration_Info_UScriptStruct_FStreamingLevelsToConsider.OuterSingleton;
}

// AddReferencedObjects @ 1489c7260

void __thiscall
FStreamingLevelsToConsider::AddReferencedObjects
          (FStreamingLevelsToConsider *this,UObject *param_1,FReferenceCollector *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->LevelsToProcess).Pairs.ArrayNum;
  pFVar2 = (this->LevelsToProcess).Pairs.AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->LevelsToProcess).Pairs.ArrayNum != iVar1) {
      `TCheckedPointerIterator<TTuple<TObjectPtr<ULevelStreaming>,enum_FStreamingLevelsToConsider::EProcessReason>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (*(longlong *)pFVar2 != 0) {
      (**(code **)(param_2->_padding_ + 0x88))(param_2,pFVar2,param_1,0);
    }
    pFVar2 = pFVar2 + 0x10;
  }
  return;
}

// Add_Internal @ 1489ca890

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FStreamingLevelsToConsider::Add_Internal
          (FStreamingLevelsToConsider *this,ULevelStreaming *param_1,bool param_2)

{
  int *piVar1;
  FName FVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_ManageLevelsToConsider> FVar10;
  EProcessReason *pEVar11;
  TTuple<TObjectPtr<ULevelStreaming>,FStreamingLevelsToConsider::EProcessReason> *pTVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName *pFVar13;
  FScriptContainerElement *pFVar14;
  FName FVar15;
  uint uVar16;
  int iVar17;
  bool bVar18;
  FName local_res10 [2];
  FColor_u_0 local_res20 [2];
  FName local_88;
  FName local_80;
  FName local_78;
  LARGE_INTEGER local_70;
  FName local_68;
  FName local_60;
  FStatMessage local_50;
  
  if (param_1 == (ULevelStreaming *)0x0) {
    return;
  }
  iVar17 = 0;
  FVar10 = StatPtr_STAT_ManageLevelsToConsider;
  local_res10[0] = (FName)param_1;
  if (StatPtr_STAT_ManageLevelsToConsider ==
      (FThreadSafeStaticStat<FStat_STAT_ManageLevelsToConsider>)0x0) {
    pFVar9 = ::FName::FName(&local_68,"STAT_ManageLevelsToConsider");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_ManageLevelsToConsider>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ManageLevelsToConsider,*pFVar9,
                        L"Manage LevelsToConsider","STATGROUP_StreamingDetails","STATCAT_Advanced",
                        L"Streaming Details",true,true,ST_int64,true,true,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar10;
  bVar5 = false;
  bVar7 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  if ((FVar15.ComparisonIndex.Value.Value != 0) || (FVar15.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_80.ComparisonIndex.Value = FVar15.ComparisonIndex.Value.Value;
        local_80.Number = FVar15.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_80,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\World.cpp"
                   ,0x11c7);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_78 = FVar15;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar6 = true;
      goto LAB_1489ca9e1;
    }
  }
  bVar6 = false;
  FVar15 = local_60;
LAB_1489ca9e1:
  if (this->StreamingLevelsBeingConsidered < 1) {
    if (!param_2) {
      pFVar13 = (FName *)(this->StreamingLevels).AllocatorInstance.Data;
      pFVar9 = pFVar13 + (this->StreamingLevels).ArrayNum;
      for (; pFVar13 != pFVar9; pFVar13 = pFVar13 + 1) {
        if (*pFVar13 == (FName)0x0) {
          bVar18 = local_res10[0] == (FName)0x0;
        }
        else {
          bVar18 = *pFVar13 == local_res10[0];
        }
        if (bVar18) goto LAB_1489cabe0;
      }
    }
    uVar16 = (this->StreamingLevels).ArrayNum;
    if (0 < (int)uVar16) {
      do {
        iVar8 = (uVar16 >> 1) + iVar17;
        FVar2 = *(FName *)((this->StreamingLevels).AllocatorInstance.Data + (longlong)iVar8 * 8);
        if ((FVar2 == (FName)0x0) || (local_res10[0] == (FName)0x0)) {
          bVar18 = FVar2 != (FName)0x0;
        }
        else if (*(int *)((longlong)FVar2 + 0x50) == *(int *)((longlong)local_res10[0] + 0x50)) {
          bVar18 = (ulonglong)FVar2 < (ulonglong)local_res10[0];
        }
        else {
          bVar18 = *(int *)((longlong)FVar2 + 0x50) < *(int *)((longlong)local_res10[0] + 0x50);
        }
        if (bVar18) {
          iVar17 = iVar8 + (uVar16 & 1);
        }
        uVar4 = uVar16 >> 1;
        uVar16 = uVar16 >> 1;
      } while (uVar4 != 0);
    }
    local_88 = local_res10[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10[0] != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res10[0]);
    }
    pFVar9 = (FName *)(this->StreamingLevels).AllocatorInstance.Data;
    if (((pFVar9 <= &local_88) && (&local_88 < pFVar9 + (this->StreamingLevels).ArrayMax)) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar18)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar8 = (this->StreamingLevels).ArrayNum;
    piVar1 = &(this->StreamingLevels).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)this,piVar1);
    }
    pFVar14 = (this->StreamingLevels).AllocatorInstance.Data;
    (this->StreamingLevels).ArrayNum = iVar8 + 1;
    pFVar14 = pFVar14 + (longlong)iVar17 * 8;
    memmove(pFVar14 + 8,pFVar14,(longlong)(iVar8 - iVar17) << 3);
    *(FName *)((this->StreamingLevels).AllocatorInstance.Data + (longlong)iVar17 * 8) = local_88;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_88 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_88);
    }
  }
  else {
    local_78 = local_res10[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10[0] != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res10[0]);
    }
    pEVar11 = TSortedMap<TObjectPtr<ULevelStreaming>,enum_FStreamingLevelsToConsider::EProcessReason,TSizedDefaultAllocator<32>,TLess<TObjectPtr<ULevelStreaming_const_>_const_>_>
              ::Find(&this->LevelsToProcess,(TObjectPtr<ULevelStreaming_const_>)&local_78);
    if (pEVar11 == (EProcessReason *)0x0) {
      pTVar12 = TSortedMap<TObjectPtr<ULevelStreaming>,enum_FStreamingLevelsToConsider::EProcessReason,TSizedDefaultAllocator<32>,TLess<TObjectPtr<ULevelStreaming_const_>_const_>_>
                ::AllocateMemoryForEmplace<TObjectPtr<ULevelStreaming>_const_&>
                          (&this->LevelsToProcess,(TObjectPtr<ULevelStreaming> *)local_res10);
      *(uint *)&pTVar12->field_0x0 = local_res10[0].ComparisonIndex.Value;
      *(uint *)&pTVar12->field_0x4 = local_res10[0].Number;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10[0] != (FName)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res10[0]);
      }
      pEVar11 = &pTVar12->field_0x8;
      *pEVar11 = 0;
    }
    *pEVar11 = Add;
  }
LAB_1489cabe0:
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_50.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_50.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_70);
      local_50.StatData.Pad[4] = '\0';
      local_50.StatData.Pad[5] = '\0';
      local_50.StatData.Pad[6] = '\0';
      local_50.StatData.Pad[7] = '\0';
      local_50.StatData.Pad[0] = local_70.s.LowPart._0_1_;
      local_50.StatData.Pad[1] = local_70.s.LowPart._1_1_;
      local_50.StatData.Pad[2] = local_70.s.LowPart._2_1_;
      local_50.StatData.Pad[3] = local_70.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_50);
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
  return;
}

// BeginConsideration @ 1489cc900

void __thiscall FStreamingLevelsToConsider::BeginConsideration(FStreamingLevelsToConsider *this)

{
  this->StreamingLevelsBeingConsidered = this->StreamingLevelsBeingConsidered + 1;
  return;
}

// Contains @ 1489d2c80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FStreamingLevelsToConsider::Contains(FStreamingLevelsToConsider *this,ULevelStreaming *param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FScriptContainerElement *pFVar3;
  ULevelStreaming *local_res10 [3];
  
  if (param_1 != (ULevelStreaming *)0x0) {
    pFVar3 = (this->StreamingLevels).AllocatorInstance.Data;
    pFVar1 = pFVar3 + (longlong)(this->StreamingLevels).ArrayNum * 8;
    for (; pFVar3 != pFVar1; pFVar3 = pFVar3 + 8) {
      if (*(ULevelStreaming **)pFVar3 == param_1) {
        return true;
      }
    }
    local_res10[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    bVar2 = TSortedMap<TObjectPtr<ULevelStreaming>,enum_FStreamingLevelsToConsider::EProcessReason,TSizedDefaultAllocator<32>,TLess<TObjectPtr<ULevelStreaming_const_>_const_>_>
            ::Contains(&this->LevelsToProcess,(TObjectPtr<ULevelStreaming_const_>)local_res10);
    if (bVar2) {
      return true;
    }
  }
  return false;
}

// EndConsideration @ 1489d94e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FStreamingLevelsToConsider::EndConsideration(FStreamingLevelsToConsider *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  ULevelStreaming *pUVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  TObjectPtr<ULevelStreaming>_u_0 local_res8;
  
  this->StreamingLevelsBeingConsidered = this->StreamingLevelsBeingConsidered + -1;
  if (this->StreamingLevelsBeingConsidered < 1) {
    if (0 < (this->LevelsToProcess).Pairs.ArrayNum) {
      pFVar2 = (this->LevelsToProcess).Pairs.AllocatorInstance.Data;
      (this->LevelsToProcess).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar1 = (this->LevelsToProcess).Pairs.ArrayNum;
      (this->LevelsToProcess).Pairs.ArrayNum = 0;
      (this->LevelsToProcess).Pairs.ArrayMax = 0;
      for (pFVar5 = pFVar2; pFVar5 != pFVar2 + (longlong)iVar1 * 0x10; pFVar5 = pFVar5 + 0x10) {
        pUVar3 = *(ULevelStreaming **)pFVar5;
        if ((pUVar3 != (ULevelStreaming *)0x0) &&
           ((bVar4 = Remove(this,pUVar3), bVar4 || (pFVar5[8] == (FScriptContainerElement)0x0)))) {
          Add_Internal(this,pUVar3,true);
        }
      }
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
    }
    local_res8.DebugPtr = (ULevelStreaming *)0x0;
    TArray<TObjectPtr<ULevelStreaming>,TSizedDefaultAllocator<32>_>::Remove
              (&this->StreamingLevels,(TObjectPtr<ULevelStreaming> *)&local_res8.ObjectPtr);
  }
  return;
}

// Reevaluate @ 148a05d00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FStreamingLevelsToConsider::Reevaluate(FStreamingLevelsToConsider *this,ULevelStreaming *param_1)

{
  bool bVar1;
  TObjectPtr<ULevelStreaming>_u_0 *pTVar2;
  TObjectPtr<ULevelStreaming>_u_0 local_res10;
  ULevelStreaming *local_res18 [2];
  
  if (param_1 != (ULevelStreaming *)0x0) {
    local_res10.DebugPtr = param_1;
    if (this->StreamingLevelsBeingConsidered < 1) {
      bVar1 = Remove(this,param_1);
      if (bVar1) {
        Add_Internal(this,local_res10.DebugPtr,true);
      }
    }
    else {
      local_res18[0] = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      bVar1 = TSortedMap<TObjectPtr<ULevelStreaming>,enum_FStreamingLevelsToConsider::EProcessReason,TSizedDefaultAllocator<32>,TLess<TObjectPtr<ULevelStreaming_const_>_const_>_>
              ::Contains(&this->LevelsToProcess,(TObjectPtr<ULevelStreaming_const_>)local_res18);
      if (!bVar1) {
        pTVar2 = (TObjectPtr<ULevelStreaming>_u_0 *)
                 TSortedMap<TObjectPtr<ULevelStreaming>,enum_FStreamingLevelsToConsider::EProcessReason,TSizedDefaultAllocator<32>,TLess<TObjectPtr<ULevelStreaming_const_>_const_>_>
                 ::AllocateMemoryForEmplace<TObjectPtr<ULevelStreaming>_const_&>
                           (&this->LevelsToProcess,
                            (TObjectPtr<ULevelStreaming> *)&local_res10.ObjectPtr);
        pTVar2->DebugPtr = (ULevelStreaming *)local_res10;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_res10.DebugPtr != (ULevelStreaming *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_res10.DebugPtr);
        }
        *(undefined1 *)(pTVar2 + 1) = 1;
        return;
      }
    }
  }
  return;
}

// Remove @ 148a08460

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FStreamingLevelsToConsider::Remove(FStreamingLevelsToConsider *this,ULevelStreaming *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName FVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_ManageLevelsToConsider> FVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar13;
  uint uVar14;
  FName *pFVar15;
  FName local_res10;
  FColor_u_0 local_res18 [2];
  FName local_res20;
  FName local_78;
  LARGE_INTEGER local_70;
  FName local_68;
  FName local_60;
  FStatMessage local_50;
  
  bVar7 = false;
  if (param_1 == (ULevelStreaming *)0x0) {
    return false;
  }
  FVar12 = StatPtr_STAT_ManageLevelsToConsider;
  local_res10 = (FName)param_1;
  if (StatPtr_STAT_ManageLevelsToConsider ==
      (FThreadSafeStaticStat<FStat_STAT_ManageLevelsToConsider>)0x0) {
    pFVar11 = ::FName::FName(&local_68,"STAT_ManageLevelsToConsider");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_ManageLevelsToConsider>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ManageLevelsToConsider,*pFVar11,
                        L"Manage LevelsToConsider","STATGROUP_StreamingDetails","STATCAT_Advanced",
                        L"Streaming Details",true,true,ST_int64,true,true,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar12;
  bVar3 = false;
  bVar5 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  if ((FVar13.ComparisonIndex.Value.Value != 0) || (FVar13.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar13.ComparisonIndex.Value.Value;
        local_res20.Number = FVar13.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\World.cpp"
                   ,0x11f0);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_78 = FVar13;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar4 = true;
      goto LAB_148a085c5;
    }
  }
  bVar4 = false;
  FVar13 = local_60;
LAB_148a085c5:
  FVar6 = local_res10;
  if (this->StreamingLevelsBeingConsidered < 1) {
    iVar10 = TArray<TObjectPtr<ULevelStreaming>,TSizedDefaultAllocator<32>_>::Remove
                       (&this->StreamingLevels,(TObjectPtr<ULevelStreaming> *)&local_res10);
    bVar7 = 0 < iVar10;
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res10);
    }
    pFVar11 = (FName *)(this->StreamingLevels).AllocatorInstance.Data;
    iVar10 = (this->StreamingLevels).ArrayNum;
    for (pFVar15 = pFVar11; pFVar15 != pFVar11 + iVar10; pFVar15 = pFVar15 + 1) {
      if (*pFVar15 == FVar6) {
        uVar14 = (uint)((longlong)pFVar15 - (longlong)pFVar11 >> 3);
        if (uVar14 != 0xffffffff) {
          uVar9 = 0;
          if ((int)uVar14 < iVar10) {
            uVar9 = ~uVar14 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            uVar8 = (*pcVar2)();
            return (bool)uVar8;
          }
          bVar7 = true;
          *(undefined8 *)
           ((this->StreamingLevels).AllocatorInstance.Data + (longlong)(int)uVar14 * 8) = 0;
        }
        break;
      }
    }
    local_78 = local_res10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res10);
    }
    iVar10 = TSortedMap<TObjectPtr<ULevelStreaming>,enum_FStreamingLevelsToConsider::EProcessReason,TSizedDefaultAllocator<32>,TLess<TObjectPtr<ULevelStreaming_const_>_const_>_>
             ::Remove(&this->LevelsToProcess,(TObjectPtr<ULevelStreaming_const_>)&local_78);
    if (0 < iVar10) {
      bVar7 = true;
    }
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_50.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_50.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_70);
      local_50.StatData.Pad[4] = '\0';
      local_50.StatData.Pad[5] = '\0';
      local_50.StatData.Pad[6] = '\0';
      local_50.StatData.Pad[7] = '\0';
      local_50.StatData.Pad[0] = local_70.s.LowPart._0_1_;
      local_50.StatData.Pad[1] = local_70.s.LowPart._1_1_;
      local_50.StatData.Pad[2] = local_70.s.LowPart._2_1_;
      local_50.StatData.Pad[3] = local_70.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_50);
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
  return bVar7;
}

// RemoveAt @ 148a08ef0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FStreamingLevelsToConsider::RemoveAt(FStreamingLevelsToConsider *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UObject *local_res8;
  
  if (this->StreamingLevelsBeingConsidered < 1) {
    TArray<TObjectPtr<ULevelStreaming>,TSizedDefaultAllocator<32>_>::RemoveAt
              (&this->StreamingLevels,param_1,No);
    return;
  }
  uVar3 = 0;
  if (param_1 < (this->StreamingLevels).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res8 = *(UObject **)((this->StreamingLevels).AllocatorInstance.Data + (longlong)param_1 * 8)
  ;
  if (local_res8 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(local_res8);
    }
    TSortedMap<TObjectPtr<ULevelStreaming>,enum_FStreamingLevelsToConsider::EProcessReason,TSizedDefaultAllocator<32>,TLess<TObjectPtr<ULevelStreaming_const_>_const_>_>
    ::Remove(&this->LevelsToProcess,(TObjectPtr<ULevelStreaming_const_>)&local_res8);
    uVar3 = 0;
    if (param_1 < (this->StreamingLevels).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(undefined8 *)((this->StreamingLevels).AllocatorInstance.Data + (longlong)param_1 * 8) = 0;
  }
  return;
}

// Reset @ 148a0f6b0

void __thiscall FStreamingLevelsToConsider::Reset(FStreamingLevelsToConsider *this)

{
  int iVar1;
  
  if (this->StreamingLevelsBeingConsidered < 1) {
    (this->StreamingLevels).ArrayNum = 0;
    if ((this->StreamingLevels).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)this,0,&(this->StreamingLevels).ArrayMax);
    }
  }
  else {
    memset((this->StreamingLevels).AllocatorInstance.Data,0,
           (longlong)(this->StreamingLevels).ArrayNum << 3);
  }
  iVar1 = (this->LevelsToProcess).Pairs.ArrayMax;
  (this->LevelsToProcess).Pairs.ArrayNum = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)&this->LevelsToProcess,0,
               &(this->LevelsToProcess).Pairs.ArrayMax);
  }
  return;
}

