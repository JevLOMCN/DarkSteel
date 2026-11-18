// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// FScopedCsvStat @ 141917af0

FScopedCsvStat * __thiscall
FScopedCsvStat::FScopedCsvStat(FScopedCsvStat *this,char *param_1,uint param_2,char *param_3)

{
  ulonglong uVar1;
  FBlock *pFVar2;
  bool bVar3;
  FCsvProfilerThreadData *this_00;
  char *pcVar4;
  ulonglong uVar5;
  LARGE_INTEGER local_res8;
  
  bVar3 = GCsvProfilerIsCapturing;
  this->CategoryIndex = param_2;
  this->StatName = param_1;
  if ((bVar3) && (GCsvCategoriesEnabled[param_2] != false)) {
    if (GCsvProfilerNamedEventsTiming != false) {
      pcVar4 = param_1;
      if (param_3 != (char *)0x0) {
        pcVar4 = param_3;
      }
      CsvBeginNamedEvent((FColor)0xffff80ff,pcVar4);
    }
    this_00 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
    if (this_00 == (FCsvProfilerThreadData *)0x0) {
      this_00 = FCsvProfilerThreadData::CreateTLSData();
    }
    QueryPerformanceCounter(&local_res8);
    FCsvProfilerTrace::OutputBeginStat(param_1,param_2,local_res8.QuadPart);
    uVar1 = (this_00->TimingMarkers).Counter;
    uVar5 = uVar1 & 0xff;
    if ((char)uVar1 == '\0') {
      TSingleProducerSingleConsumerList<FCsvTimingMarker,256>::AddTailBlock(&this_00->TimingMarkers)
      ;
    }
    pFVar2 = (this_00->TimingMarkers).TailBlock;
    pFVar2->Entries[uVar5].field_0x15 = 2;
    *(char **)&pFVar2->Entries[uVar5].field_0x8 = param_1;
    *(uint *)&pFVar2->Entries[uVar5].field_0x10 = param_2;
    ((LARGE_INTEGER *)(pFVar2->Entries + uVar5))->QuadPart = (LONGLONG)local_res8;
    (this_00->TimingMarkers).Counter = (this_00->TimingMarkers).Counter + 1;
  }
  return this;
}

// ~FScopedCsvStat @ 14191c2a0

void __thiscall FScopedCsvStat::~FScopedCsvStat(FScopedCsvStat *this)

{
  uint uVar1;
  char *pcVar2;
  ulonglong uVar3;
  FBlock *pFVar4;
  FCsvProfilerThreadData *this_00;
  ulonglong uVar5;
  LARGE_INTEGER local_res8;
  
  pcVar2 = this->StatName;
  if ((GCsvProfilerIsCapturing) &&
     (uVar1 = this->CategoryIndex, GCsvCategoriesEnabled[uVar1] != false)) {
    this_00 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
    if (this_00 == (FCsvProfilerThreadData *)0x0) {
      this_00 = FCsvProfilerThreadData::CreateTLSData();
    }
    QueryPerformanceCounter(&local_res8);
    FCsvProfilerTrace::OutputEndStat(pcVar2,uVar1,local_res8.QuadPart);
    uVar3 = (this_00->TimingMarkers).Counter;
    uVar5 = uVar3 & 0xff;
    if ((char)uVar3 == '\0') {
      TSingleProducerSingleConsumerList<FCsvTimingMarker,256>::AddTailBlock(&this_00->TimingMarkers)
      ;
    }
    pFVar4 = (this_00->TimingMarkers).TailBlock;
    pFVar4->Entries[uVar5].field_0x15 = 0;
    *(char **)&pFVar4->Entries[uVar5].field_0x8 = pcVar2;
    ((LARGE_INTEGER *)(pFVar4->Entries + uVar5))[2].s.LowPart = uVar1;
    ((LARGE_INTEGER *)(pFVar4->Entries + uVar5))->QuadPart = (LONGLONG)local_res8;
    (this_00->TimingMarkers).Counter = (this_00->TimingMarkers).Counter + 1;
    if (GCsvProfilerNamedEventsTiming != false) {
      if (-1 < CpuChannel->Enabled) {
        FCpuProfilerTrace::OutputEndEvent();
        return;
      }
      FGenericPlatformMisc::EndNamedEvent();
    }
  }
  return;
}

