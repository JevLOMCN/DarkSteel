// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 1

// ~FSimpleScopeSecondsStat @ 142a57610

void __thiscall FSimpleScopeSecondsStat::~FSimpleScopeSecondsStat(FSimpleScopeSecondsStat *this)

{
  LARGE_INTEGER LVar1;
  uchar auVar2 [8];
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  LARGE_INTEGER local_res8;
  FStatMessage local_28 [2];
  
  this->_padding_ = (longlong)&___7FSimpleScopeSecondsStat__6B_;
  QueryPerformanceCounter(&local_res8);
  LVar1 = *(LARGE_INTEGER *)&((this->StatId).StatIdPtr)->Name;
  auVar2 = (uchar  [8])
           ((((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
             __real_4170000000000000) - this->StartTime) * this->Scale);
  if ((((TAtomic<FMinimalName>)LVar1.QuadPart != (TAtomic<FMinimalName>)0x0) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    local_res8 = LVar1;
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_28[0].NameAndInfo.Number = LVar1.s.HighPart & 0xffffafffU | 0xa000;
    local_res8 = LVar1;
    local_28[0].StatData.Pad = auVar2;
    local_28[0].NameAndInfo.Index.Value = LVar1.s.LowPart;
    FThreadStats::AddStatMessage(this_00,local_28);
    FStatsTrace::Add((FName *)&local_res8.s,(double)auVar2);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  return;
}

