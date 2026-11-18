// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// ~FScopedCsvStatExclusive @ 14191c3b0

void __thiscall FScopedCsvStatExclusive::~FScopedCsvStatExclusive(FScopedCsvStatExclusive *this)

{
  LARGE_INTEGER *pLVar1;
  _struct_19 _Var2;
  ulonglong uVar3;
  uint uVar4;
  FCsvProfilerThreadData *this_00;
  LARGE_INTEGER local_res8;
  
  _Var2 = (_struct_19)this->StatName;
  if ((GCsvProfilerIsCapturing) && (GCsvCategoriesEnabled[_GCsvCategory_Exclusive.Index] != false))
  {
    this_00 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
    if (this_00 == (FCsvProfilerThreadData *)0x0) {
      this_00 = FCsvProfilerThreadData::CreateTLSData();
    }
    QueryPerformanceCounter(&local_res8);
    FCsvProfilerTrace::OutputEndExclusiveStat
              ((char *)_Var2,_GCsvCategory_Exclusive.Index,local_res8.QuadPart);
    uVar3 = (this_00->TimingMarkers).Counter;
    if ((char)uVar3 == '\0') {
      TSingleProducerSingleConsumerList<FCsvTimingMarker,256>::AddTailBlock(&this_00->TimingMarkers)
      ;
    }
    uVar4 = _GCsvCategory_Exclusive.Index;
    pLVar1 = (LARGE_INTEGER *)(((this_00->TimingMarkers).TailBlock)->Entries + (uVar3 & 0xff));
    pLVar1->QuadPart = (LONGLONG)local_res8;
    *(undefined1 *)((longlong)pLVar1 + 0x15) = 0x10;
    pLVar1[1].s = _Var2;
    pLVar1[2].s.LowPart = uVar4;
    (this_00->TimingMarkers).Counter = (this_00->TimingMarkers).Counter + 1;
    if (GCsvProfilerNamedEventsExclusive != false) {
      if (-1 < CpuChannel->Enabled) {
        FCpuProfilerTrace::OutputEndEvent();
        return;
      }
      FGenericPlatformMisc::EndNamedEvent();
      return;
    }
  }
  return;
}

