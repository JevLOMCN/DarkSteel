// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 4

// ~FChunkFileSizeRequest @ 141f237d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::BulkData::Private::FChunkFileSizeRequest::~FChunkFileSizeRequest(FChunkFileSizeRequest *this)

{
  FName FVar1;
  FName *pFVar2;
  FThreadSafeStaticStat<FStat_STAT_AsyncFileRequests> FVar3;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar4;
  FName FStackX_8;
  FStatMessage FStack_18;
  
  *(undefined ***)this = &___7IAsyncReadRequest__6B_;
  if ((this->field_0x41 == '\0') ||
     ((this->field_0x44 == '\0' && (*(longlong *)&this->field_0x8 != 0)))) {
    Logging::Private::BasicFatalLog
              (&`public:_virtual___cdecl_IAsyncReadRequest::~IAsyncReadRequest(void)___ptr64'::__l3
                ::LOG_Static,(FLogCategoryBase *)&LogHAL);
  }
  FVar3 = StatPtr_STAT_AsyncFileRequests;
  if (StatPtr_STAT_AsyncFileRequests == (FThreadSafeStaticStat<FStat_STAT_AsyncFileRequests>)0x0) {
    pFVar2 = ::FName::FName(&FStackX_8,"STAT_AsyncFileRequests");
    FVar3 = (FThreadSafeStaticStat<FStat_STAT_AsyncFileRequests>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AsyncFileRequests,*pFVar2,
                       L"Num Async File Requests","STATGROUP_Memory","STATCAT_Advanced",L"Memory",
                       true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar3;
  FStackX_8 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    FStack_18.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
    FStack_18.StatData.Pad[0] = '\x01';
    FStack_18.StatData.Pad[1] = '\0';
    FStack_18.StatData.Pad[2] = '\0';
    FStack_18.StatData.Pad[3] = '\0';
    FStack_18.StatData.Pad[4] = '\0';
    FStack_18.StatData.Pad[5] = '\0';
    FStack_18.StatData.Pad[6] = '\0';
    FStack_18.StatData.Pad[7] = '\0';
    FStackX_8 = FVar1;
    FStack_18.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&FStack_18);
    FStatsTrace::Add(&FStackX_8,-1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  if (*(longlong *)&this->field_0x10 == 0) {
    return;
  }
  plVar4 = (longlong *)&this->field_0x20;
  if (*(longlong **)&this->field_0x38 != (longlong *)0x0) {
    plVar4 = *(longlong **)&this->field_0x38;
  }
                    /* WARNING: Could not recover jumptable at 0x000141621431. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x10))();
  return;
}

// CancelImpl @ 141f2ae90

void __thiscall
UE::BulkData::Private::FChunkFileSizeRequest::CancelImpl(FChunkFileSizeRequest *this)

{
  return;
}

// ReleaseMemoryOwnershipImpl @ 141f43490

void __thiscall
UE::BulkData::Private::FChunkFileSizeRequest::ReleaseMemoryOwnershipImpl
          (FChunkFileSizeRequest *this)

{
  return;
}

// WaitCompletionImpl @ 141f50640

void __thiscall
UE::BulkData::Private::FChunkFileSizeRequest::WaitCompletionImpl
          (FChunkFileSizeRequest *this,float param_1)

{
  do {
  } while (this->field_0x41 == '\0');
  return;
}

