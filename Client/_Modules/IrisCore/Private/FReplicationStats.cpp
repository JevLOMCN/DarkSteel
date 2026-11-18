// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 1

// ReportCSVStats @ 144339550

void __thiscall UE::Net::Private::FReplicationStats::ReportCSVStats(FReplicationStats *this)

{
  double dVar1;
  uint uVar2;
  
  uVar2 = this->SampleCount;
  if (uVar2 == 0) {
    if (!__CsvProfilerStat379) {
      FCsvProfilerTrace::OutputInlineStat("AvgPendingObjectCount",_GCsvCategory_Iris.Index);
      __CsvProfilerStat379 = true;
    }
    FCsvProfiler::RecordCustomStat("AvgPendingObjectCount",_GCsvCategory_Iris.Index,0.0,Set);
    if (__CsvProfilerStat380 == false) {
      FCsvProfilerTrace::OutputInlineStat("AvgPendingDependentObjectCount",_GCsvCategory_Iris.Index)
      ;
      __CsvProfilerStat380 = true;
    }
    FCsvProfiler::RecordCustomStat
              ("AvgPendingDependentObjectCount",_GCsvCategory_Iris.Index,0.0,Set);
    if (__CsvProfilerStat381 == false) {
      FCsvProfilerTrace::OutputInlineStat("AvgHugeObjectSendQueue",_GCsvCategory_Iris.Index);
      __CsvProfilerStat381 = true;
    }
    FCsvProfiler::RecordCustomStat("AvgHugeObjectSendQueue",_GCsvCategory_Iris.Index,0.0,Set);
    if (__CsvProfilerStat382 == false) {
      FCsvProfilerTrace::OutputInlineStat("MaxPendingObjectCount",_GCsvCategory_Iris.Index);
      __CsvProfilerStat382 = true;
    }
    FCsvProfiler::RecordCustomStat("MaxPendingObjectCount",_GCsvCategory_Iris.Index,0,Set);
    if (__CsvProfilerStat383 == false) {
      FCsvProfilerTrace::OutputInlineStat("MaxPendingDependentObjectCount",_GCsvCategory_Iris.Index)
      ;
      __CsvProfilerStat383 = true;
    }
    FCsvProfiler::RecordCustomStat("MaxPendingDependentObjectCount",_GCsvCategory_Iris.Index,0,Set);
    if (__CsvProfilerStat384 == false) {
      FCsvProfilerTrace::OutputInlineStat("MaxHugeObjectSendQueue",_GCsvCategory_Iris.Index);
      __CsvProfilerStat384 = true;
    }
    uVar2 = 0;
  }
  else {
    if (!__CsvProfilerStat370) {
      FCsvProfilerTrace::OutputInlineStat("AvgPendingObjectCount",_GCsvCategory_Iris.Index);
      __CsvProfilerStat370 = true;
    }
    dVar1 = __real_3ff0000000000000 / (double)uVar2;
    FCsvProfiler::RecordCustomStat
              ("AvgPendingObjectCount",_GCsvCategory_Iris.Index,
               (double)this->PendingObjectCount * dVar1,Set);
    if (__CsvProfilerStat371 == false) {
      FCsvProfilerTrace::OutputInlineStat("AvgPendingDependentObjectCount",_GCsvCategory_Iris.Index)
      ;
      __CsvProfilerStat371 = true;
    }
    FCsvProfiler::RecordCustomStat
              ("AvgPendingDependentObjectCount",_GCsvCategory_Iris.Index,
               (double)this->PendingDependentObjectCount * dVar1,Set);
    if (__CsvProfilerStat372 == false) {
      FCsvProfilerTrace::OutputInlineStat("AvgHugeObjectSendQueue",_GCsvCategory_Iris.Index);
      __CsvProfilerStat372 = true;
    }
    FCsvProfiler::RecordCustomStat
              ("AvgHugeObjectSendQueue",_GCsvCategory_Iris.Index,
               (double)this->HugeObjectSendQueue * dVar1,Set);
    if (__CsvProfilerStat373 == false) {
      FCsvProfilerTrace::OutputInlineStat("MaxPendingObjectCount",_GCsvCategory_Iris.Index);
      __CsvProfilerStat373 = true;
    }
    FCsvProfiler::RecordCustomStat
              ("MaxPendingObjectCount",_GCsvCategory_Iris.Index,this->MaxPendingObjectCount,Set);
    if (__CsvProfilerStat374 == false) {
      FCsvProfilerTrace::OutputInlineStat("MaxPendingDependentObjectCount",_GCsvCategory_Iris.Index)
      ;
      __CsvProfilerStat374 = true;
    }
    FCsvProfiler::RecordCustomStat
              ("MaxPendingDependentObjectCount",_GCsvCategory_Iris.Index,
               this->MaxPendingDependentObjectCount,Set);
    if (__CsvProfilerStat375 == false) {
      FCsvProfilerTrace::OutputInlineStat("MaxHugeObjectSendQueue",_GCsvCategory_Iris.Index);
      __CsvProfilerStat375 = true;
    }
    uVar2 = this->MaxHugeObjectSendQueue;
  }
  FCsvProfiler::RecordCustomStat("MaxHugeObjectSendQueue",_GCsvCategory_Iris.Index,uVar2,Set);
  return;
}

