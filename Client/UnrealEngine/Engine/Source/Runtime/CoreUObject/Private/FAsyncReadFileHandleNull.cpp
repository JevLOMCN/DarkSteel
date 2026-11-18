// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 4

// FAsyncReadFileHandleNull @ 14212b000

/* WARNING: Enum "Type": Some values do not have unique names */

FAsyncReadFileHandleNull * __thiscall
FAsyncReadFileHandleNull::FAsyncReadFileHandleNull(FAsyncReadFileHandleNull *this)

{
  FName FVar1;
  FName *pFVar2;
  FThreadSafeStaticStat<FStat_STAT_AsyncFileHandles> FVar3;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res8;
  FStatMessage local_18;
  
  *this = (FAsyncReadFileHandleNull)&___7IAsyncReadFileHandle__6B_;
  FVar3 = StatPtr_STAT_AsyncFileHandles;
  if (StatPtr_STAT_AsyncFileHandles == (FThreadSafeStaticStat<FStat_STAT_AsyncFileHandles>)0x0) {
    pFVar2 = ::FName::FName(&local_res8,"STAT_AsyncFileHandles");
    FVar3 = (FThreadSafeStaticStat<FStat_STAT_AsyncFileHandles>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AsyncFileHandles,*pFVar2,
                       L"Num Async File Handles","STATGROUP_Memory","STATCAT_Advanced",L"Memory",
                       true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar3;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    local_res8 = FVar1;
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_18.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
    local_18.StatData.Pad[0] = '\x01';
    local_18.StatData.Pad[1] = '\0';
    local_18.StatData.Pad[2] = '\0';
    local_18.StatData.Pad[3] = '\0';
    local_18.StatData.Pad[4] = '\0';
    local_18.StatData.Pad[5] = '\0';
    local_18.StatData.Pad[6] = '\0';
    local_18.StatData.Pad[7] = '\0';
    local_res8 = FVar1;
    local_18.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_18);
    FStatsTrace::Add(&local_res8,1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  *this = (FAsyncReadFileHandleNull)&___7FAsyncReadFileHandleNull__6B_;
  return this;
}

// ReadRequest @ 142146ec0

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

IAsyncReadRequest * __thiscall
FAsyncReadFileHandleNull::ReadRequest
          (FAsyncReadFileHandleNull *this,long64 param_1,long64 param_2,
          EAsyncIOPriorityAndFlags param_3,
          TFunction<void___cdecl(bool,IAsyncReadRequest_*)> *param_4,uchar *param_5)

{
  FAsyncReadRequestNull *this_00;
  IAsyncReadRequest *pIVar1;
  
  this_00 = ::operator_new(0x50);
  if (this_00 != (FAsyncReadRequestNull *)0x0) {
    pIVar1 = (IAsyncReadRequest *)
             FAsyncReadRequestNull::FAsyncReadRequestNull(this_00,param_4,false);
    return pIVar1;
  }
  return (IAsyncReadRequest *)0x0;
}

// SizeRequest @ 142151a90

IAsyncReadRequest * __thiscall
FAsyncReadFileHandleNull::SizeRequest
          (FAsyncReadFileHandleNull *this,TFunction<void___cdecl(bool,IAsyncReadRequest_*)> *param_1
          )

{
  FAsyncReadRequestNull *this_00;
  IAsyncReadRequest *pIVar1;
  
  this_00 = ::operator_new(0x50);
  if (this_00 != (FAsyncReadRequestNull *)0x0) {
    pIVar1 = (IAsyncReadRequest *)FAsyncReadRequestNull::FAsyncReadRequestNull(this_00,param_1,true)
    ;
    return pIVar1;
  }
  return (IAsyncReadRequest *)0x0;
}

// UsesCache @ 1421547c0

bool __thiscall FAsyncReadFileHandleNull::UsesCache(FAsyncReadFileHandleNull *this)

{
  return false;
}

