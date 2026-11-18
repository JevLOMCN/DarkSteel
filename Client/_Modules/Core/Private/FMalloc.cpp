// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 24

// ClearAndDisableTLSCachesOnCurrentThread @ 14162e800

void __thiscall FMalloc::ClearAndDisableTLSCachesOnCurrentThread(FMalloc *this)

{
  return;
}

// DumpAllocatorStats @ 141636b60

void __thiscall FMalloc::DumpAllocatorStats(FMalloc *this,FOutputDevice *param_1)

{
  (**(code **)((longlong)*this + 200))();
  FOutputDevice::LogfImpl(param_1,L"Allocator Stats for %s: (not implemented)");
  return;
}

// Exec @ 141638c10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FMalloc::Exec(FMalloc *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  return false;
}

// GetAllocationSize @ 14163e6a0

bool __thiscall FMalloc::GetAllocationSize(FMalloc *this,void *param_1,ulong64 *param_2)

{
  return false;
}

// GetDescriptiveName @ 141641080

wchar_t * __thiscall FMalloc::GetDescriptiveName(FMalloc *this)

{
  return L"Unspecified allocator";
}

// GetImmediatelyFreeableCachedMemorySize @ 141642af0

ulong64 __thiscall FMalloc::GetImmediatelyFreeableCachedMemorySize(FMalloc *this)

{
  return 0;
}

// GetTotalFreeCachedMemorySize @ 1416471a0

ulong64 __thiscall FMalloc::GetTotalFreeCachedMemorySize(FMalloc *this)

{
  return 0;
}

// IsInternallyThreadSafe @ 141649fa0

bool __thiscall FMalloc::IsInternallyThreadSafe(FMalloc *this)

{
  return false;
}

// MarkTLSCachesAsUnusedOnCurrentThread @ 14164da80

void __thiscall FMalloc::MarkTLSCachesAsUnusedOnCurrentThread(FMalloc *this)

{
  return;
}

// MarkTLSCachesAsUsedOnCurrentThread @ 14164da90

void __thiscall FMalloc::MarkTLSCachesAsUsedOnCurrentThread(FMalloc *this)

{
  return;
}

// OnMallocInitialized @ 14164f3d0

void __thiscall FMalloc::OnMallocInitialized(FMalloc *this)

{
  return;
}

// OnPostFork @ 14164f470

void __thiscall FMalloc::OnPostFork(FMalloc *this)

{
  return;
}

// OnPreFork @ 14164f480

void __thiscall FMalloc::OnPreFork(FMalloc *this)

{
  return;
}

// QuantizeSize @ 141652240

ulong64 __thiscall FMalloc::QuantizeSize(FMalloc *this,ulong64 param_1,uint param_2)

{
  return param_1;
}

// SetupTLSCachesOnCurrentThread @ 14165fee0

void __thiscall FMalloc::SetupTLSCachesOnCurrentThread(FMalloc *this)

{
  return;
}

// Trim @ 141665ad0

void __thiscall FMalloc::Trim(FMalloc *this,bool param_1)

{
  return;
}

// ValidateHeap @ 141669020

bool __thiscall FMalloc::ValidateHeap(FMalloc *this)

{
  return true;
}

// GetAllocatorStats @ 1416f1f90

void __thiscall FMalloc::GetAllocatorStats(FMalloc *this,FGenericMemoryStats *param_1)

{
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = L"Malloc calls";
  local_18.Size = 0xc;
  FGenericMemoryStats::Add(param_1,&local_18,(ulonglong)DAT_154eb2844);
  local_18.DataPtr = L"Realloc calls";
  local_18.Size = 0xd;
  FGenericMemoryStats::Add(param_1,&local_18,(ulonglong)DAT_154eb2848);
  local_18.DataPtr = L"Free calls";
  local_18.Size = 10;
  FGenericMemoryStats::Add(param_1,&local_18,(ulonglong)DAT_154eb284c);
  local_18.DataPtr = L"Total Allocator calls";
  local_18.Size = 0x15;
  FGenericMemoryStats::Add(param_1,&local_18,(ulonglong)DAT_154eb2850);
  return;
}

// InitializeStatsMetadata @ 141700a90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMalloc::InitializeStatsMetadata(FMalloc *this)

{
  FName *pFVar1;
  FName local_res10;
  
  if (StatPtr_STAT_MallocCalls == (FThreadSafeStaticStat<FStat_STAT_MallocCalls>)0x0) {
    pFVar1 = ::FName::FName(&local_res10,"STAT_MallocCalls");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MallocCalls,*pFVar1,L"Malloc calls",
               "STATGROUP_MemoryAllocator","STATCAT_Advanced",L"Memory Allocator",true,true,ST_int64
               ,false,false,MCR_Invalid);
  }
  if (StatPtr_STAT_ReallocCalls == (FThreadSafeStaticStat<FStat_STAT_ReallocCalls>)0x0) {
    pFVar1 = ::FName::FName(&local_res10,"STAT_ReallocCalls");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ReallocCalls,*pFVar1,L"Realloc calls",
               "STATGROUP_MemoryAllocator","STATCAT_Advanced",L"Memory Allocator",true,true,ST_int64
               ,false,false,MCR_Invalid);
  }
  if (StatPtr_STAT_FreeCalls == (FThreadSafeStaticStat<FStat_STAT_FreeCalls>)0x0) {
    pFVar1 = ::FName::FName(&local_res10,"STAT_FreeCalls");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FreeCalls,*pFVar1,L"Free calls",
               "STATGROUP_MemoryAllocator","STATCAT_Advanced",L"Memory Allocator",true,true,ST_int64
               ,false,false,MCR_Invalid);
  }
  if (StatPtr_STAT_TotalAllocatorCalls == (FThreadSafeStaticStat<FStat_STAT_TotalAllocatorCalls>)0x0
     ) {
    pFVar1 = ::FName::FName(&local_res10,"STAT_TotalAllocatorCalls");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TotalAllocatorCalls,*pFVar1,
               L"Total Allocator calls","STATGROUP_MemoryAllocator","STATCAT_Advanced",
               L"Memory Allocator",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// MallocZeroed @ 1417048d0

void * __thiscall FMalloc::MallocZeroed(FMalloc *this,ulong64 param_1,uint param_2)

{
  void *_Dst;
  undefined4 in_register_00000084;
  
  _Dst = (void *)(**(code **)((longlong)*this + 0x28))
                           (this,param_1,CONCAT44(in_register_00000084,param_2));
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,param_1);
  }
  return _Dst;
}

// TryMalloc @ 1417179d0

void * __thiscall FMalloc::TryMalloc(FMalloc *this,ulong64 param_1,uint param_2)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001417179d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (void *)(**(code **)((longlong)*this + 0x28))();
  return pvVar1;
}

// TryMallocZeroed @ 141717d20

void * __thiscall FMalloc::TryMallocZeroed(FMalloc *this,ulong64 param_1,uint param_2)

{
  void *_Dst;
  undefined4 in_register_00000084;
  
  _Dst = (void *)(**(code **)((longlong)*this + 0x28))
                           (this,param_1,CONCAT44(in_register_00000084,param_2));
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,param_1);
  }
  return _Dst;
}

// TryRealloc @ 141717dc0

void * __thiscall FMalloc::TryRealloc(FMalloc *this,void *param_1,ulong64 param_2,uint param_3)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141717dc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (void *)(**(code **)((longlong)*this + 0x38))();
  return pvVar1;
}

// UpdateStats @ 141719d60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMalloc::UpdateStats(FMalloc *this)

{
  FName FVar1;
  FName *pFVar2;
  FThreadSafeStaticStat<FStat_STAT_MallocCalls> FVar3;
  FThreadStats *pFVar4;
  FThreadStatsPool *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_ReallocCalls> FVar6;
  FThreadSafeStaticStat<FStat_STAT_FreeCalls> FVar7;
  FThreadSafeStaticStat<FStat_STAT_TotalAllocatorCalls> FVar8;
  uchar auVar9 [8];
  uchar auVar10 [8];
  uchar auVar11 [8];
  uchar auVar12 [8];
  FName local_res10;
  FStatMessage local_38;
  
  DAT_154eb284c = -DAT_154eb2840;
  DAT_154eb2848 = -DAT_154eb283c;
  DAT_154eb2844 = -DAT_154eb2838;
  DAT_154eb2850 = DAT_154eb284c + DAT_154eb2848 + DAT_154eb2844;
  _DAT_154eb2838 = 0;
  DAT_154eb2840 = 0;
  if (FThreadStats::bPrimaryEnable) {
    FVar3 = StatPtr_STAT_MallocCalls;
    if (StatPtr_STAT_MallocCalls == (FThreadSafeStaticStat<FStat_STAT_MallocCalls>)0x0) {
      pFVar2 = ::FName::FName(&local_res10,"STAT_MallocCalls");
      FVar3 = (FThreadSafeStaticStat<FStat_STAT_MallocCalls>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MallocCalls,*pFVar2,
                         L"Malloc calls","STATGROUP_MemoryAllocator","STATCAT_Advanced",
                         L"Memory Allocator",true,true,ST_int64,false,false,MCR_Invalid);
    }
    FVar1 = *(FName *)FVar3;
    auVar9[4] = '\0';
    auVar9[5] = '\0';
    auVar9[6] = '\0';
    auVar9[7] = '\0';
    auVar9[0] = (undefined1)DAT_154eb2844;
    auVar9[1] = DAT_154eb2844._1_1_;
    auVar9[2] = DAT_154eb2844._2_1_;
    auVar9[3] = DAT_154eb2844._3_1_;
    local_res10 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar4 == (FThreadStats *)0x0) {
        pFVar5 = FThreadStatsPool::Get();
        pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
      }
      local_38.NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
      local_res10 = FVar1;
      local_38.StatData.Pad = auVar9;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar4,&local_38);
      FStatsTrace::Set(&local_res10,(long64)auVar9);
      if (pFVar4->ScopeCount == 0) {
        FThreadStats::Flush(pFVar4,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar4,false,false);
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FVar6 = StatPtr_STAT_ReallocCalls;
      if (StatPtr_STAT_ReallocCalls == (FThreadSafeStaticStat<FStat_STAT_ReallocCalls>)0x0) {
        pFVar2 = ::FName::FName(&local_res10,"STAT_ReallocCalls");
        FVar6 = (FThreadSafeStaticStat<FStat_STAT_ReallocCalls>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ReallocCalls,*pFVar2,
                           L"Realloc calls","STATGROUP_MemoryAllocator","STATCAT_Advanced",
                           L"Memory Allocator",true,true,ST_int64,false,false,MCR_Invalid);
      }
      FVar1 = *(FName *)FVar6;
      auVar10[4] = '\0';
      auVar10[5] = '\0';
      auVar10[6] = '\0';
      auVar10[7] = '\0';
      auVar10[0] = (undefined1)DAT_154eb2848;
      auVar10[1] = DAT_154eb2848._1_1_;
      auVar10[2] = DAT_154eb2848._2_1_;
      auVar10[3] = DAT_154eb2848._3_1_;
      local_res10 = FVar1;
      if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar4 == (FThreadStats *)0x0) {
          pFVar5 = FThreadStatsPool::Get();
          pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
        }
        local_38.NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
        local_res10 = FVar1;
        local_38.StatData.Pad = auVar10;
        local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar4,&local_38);
        FStatsTrace::Set(&local_res10,(long64)auVar10);
        if (pFVar4->ScopeCount == 0) {
          FThreadStats::Flush(pFVar4,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar4,false,false);
        }
      }
      if (FThreadStats::bPrimaryEnable != false) {
        FVar7 = StatPtr_STAT_FreeCalls;
        if (StatPtr_STAT_FreeCalls == (FThreadSafeStaticStat<FStat_STAT_FreeCalls>)0x0) {
          pFVar2 = ::FName::FName(&local_res10,"STAT_FreeCalls");
          FVar7 = (FThreadSafeStaticStat<FStat_STAT_FreeCalls>)
                  FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FreeCalls,*pFVar2,
                             L"Free calls","STATGROUP_MemoryAllocator","STATCAT_Advanced",
                             L"Memory Allocator",true,true,ST_int64,false,false,MCR_Invalid);
        }
        FVar1 = *(FName *)FVar7;
        auVar11[4] = '\0';
        auVar11[5] = '\0';
        auVar11[6] = '\0';
        auVar11[7] = '\0';
        auVar11[0] = (undefined1)DAT_154eb284c;
        auVar11[1] = DAT_154eb284c._1_1_;
        auVar11[2] = DAT_154eb284c._2_1_;
        auVar11[3] = DAT_154eb284c._3_1_;
        local_res10 = FVar1;
        if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar4 == (FThreadStats *)0x0) {
            pFVar5 = FThreadStatsPool::Get();
            pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
          }
          local_38.NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
          local_res10 = FVar1;
          local_38.StatData.Pad = auVar11;
          local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar4,&local_38);
          FStatsTrace::Set(&local_res10,(long64)auVar11);
          if (pFVar4->ScopeCount == 0) {
            FThreadStats::Flush(pFVar4,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar4,false,false);
          }
        }
        if (FThreadStats::bPrimaryEnable != false) {
          FVar8 = StatPtr_STAT_TotalAllocatorCalls;
          if (StatPtr_STAT_TotalAllocatorCalls ==
              (FThreadSafeStaticStat<FStat_STAT_TotalAllocatorCalls>)0x0) {
            pFVar2 = ::FName::FName(&local_res10,"STAT_TotalAllocatorCalls");
            FVar8 = (FThreadSafeStaticStat<FStat_STAT_TotalAllocatorCalls>)
                    FThreadSafeStaticStatBase::DoSetup
                              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TotalAllocatorCalls,
                               *pFVar2,L"Total Allocator calls","STATGROUP_MemoryAllocator",
                               "STATCAT_Advanced",L"Memory Allocator",true,true,ST_int64,false,false
                               ,MCR_Invalid);
          }
          FVar1 = *(FName *)FVar8;
          auVar12[4] = '\0';
          auVar12[5] = '\0';
          auVar12[6] = '\0';
          auVar12[7] = '\0';
          auVar12[0] = (undefined1)DAT_154eb2850;
          auVar12[1] = DAT_154eb2850._1_1_;
          auVar12[2] = DAT_154eb2850._2_1_;
          auVar12[3] = DAT_154eb2850._3_1_;
          if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
             (FThreadStats::TlsSlot != 0xffffffff)) {
            local_res10 = FVar1;
            pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
            if (pFVar4 == (FThreadStats *)0x0) {
              pFVar5 = FThreadStatsPool::Get();
              pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
            }
            local_38.NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
            local_res10 = FVar1;
            local_38.StatData.Pad = auVar12;
            local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
            FThreadStats::AddStatMessage(pFVar4,&local_38);
            FStatsTrace::Set(&local_res10,(long64)auVar12);
            if (pFVar4->ScopeCount == 0) {
              FThreadStats::Flush(pFVar4,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(pFVar4,false,false);
            }
          }
        }
      }
    }
  }
  return;
}

