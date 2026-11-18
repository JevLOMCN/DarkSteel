// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// Accumulate @ 1443276f0

void __thiscall
UE::Net::Private::FNetSendStats::Accumulate(FNetSendStats *this,FNetSendStats *param_1)

{
  int *piVar1;
  
  if (this != (FNetSendStats *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)this);
    piVar1 = &(this->Stats).ScheduledForReplicationRootObjectCount;
    *piVar1 = *piVar1 + (param_1->Stats).ScheduledForReplicationRootObjectCount;
    piVar1 = &(this->Stats).ReplicatedRootObjectCount;
    *piVar1 = *piVar1 + (param_1->Stats).ReplicatedRootObjectCount;
    piVar1 = &(this->Stats).ReplicatedObjectCount;
    *piVar1 = *piVar1 + (param_1->Stats).ReplicatedObjectCount;
    piVar1 = &(this->Stats).ReplicatedDestructionInfoCount;
    *piVar1 = *piVar1 + (param_1->Stats).ReplicatedDestructionInfoCount;
    piVar1 = &(this->Stats).DeltaCompressedObjectCount;
    *piVar1 = *piVar1 + (param_1->Stats).DeltaCompressedObjectCount;
    piVar1 = &(this->Stats).ReplicatedObjectStatesMaskedOut;
    *piVar1 = *piVar1 + (param_1->Stats).ReplicatedObjectStatesMaskedOut;
    piVar1 = &(this->Stats).ActiveHugeObjectCount;
    *piVar1 = *piVar1 + (param_1->Stats).ActiveHugeObjectCount;
    piVar1 = &(this->Stats).HugeObjectsWaitingForAckCount;
    *piVar1 = *piVar1 + (param_1->Stats).HugeObjectsWaitingForAckCount;
    piVar1 = &(this->Stats).HugeObjectsStallingCount;
    *piVar1 = *piVar1 + (param_1->Stats).HugeObjectsStallingCount;
    (this->Stats).HugeObjectWaitingForAckTimeInSeconds =
         (param_1->Stats).HugeObjectWaitingForAckTimeInSeconds +
         (this->Stats).HugeObjectWaitingForAckTimeInSeconds;
    (this->Stats).HugeObjectStallingTimeInSeconds =
         (param_1->Stats).HugeObjectStallingTimeInSeconds +
         (this->Stats).HugeObjectStallingTimeInSeconds;
                    /* WARNING: Could not recover jumptable at 0x00014432776c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// ReportCsvStats @ 1443398c0

void __thiscall UE::Net::Private::FNetSendStats::ReportCsvStats(FNetSendStats *this)

{
  int iVar1;
  float fVar2;
  
  if (this != (FNetSendStats *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)this);
    iVar1 = (this->Stats).ReplicatingConnectionCount;
    if (iVar1 < 1) {
      if (__CsvProfilerStat89 == false) {
        FCsvProfilerTrace::OutputInlineStat
                  ("AvgScheduledForReplicationRootObjectCount",_GCsvCategory_Iris.Index);
        __CsvProfilerStat89 = true;
      }
      FCsvProfiler::RecordCustomStat
                ("AvgScheduledForReplicationRootObjectCount",_GCsvCategory_Iris.Index,0.0,Set);
      if (__CsvProfilerStat90 == false) {
        FCsvProfilerTrace::OutputInlineStat("AvgReplicatedRootObjectCount",_GCsvCategory_Iris.Index)
        ;
        __CsvProfilerStat90 = true;
      }
      FCsvProfiler::RecordCustomStat
                ("AvgReplicatedRootObjectCount",_GCsvCategory_Iris.Index,0.0,Set);
      if (__CsvProfilerStat91 == false) {
        FCsvProfilerTrace::OutputInlineStat("AvgReplicatedObjectCount",_GCsvCategory_Iris.Index);
        __CsvProfilerStat91 = true;
      }
      FCsvProfiler::RecordCustomStat("AvgReplicatedObjectCount",_GCsvCategory_Iris.Index,0.0,Set);
      if (__CsvProfilerStat92 == false) {
        FCsvProfilerTrace::OutputInlineStat
                  ("AvgReplicatedDestructionInfoCount",_GCsvCategory_Iris.Index);
        __CsvProfilerStat92 = true;
      }
      FCsvProfiler::RecordCustomStat
                ("AvgReplicatedDestructionInfoCount",_GCsvCategory_Iris.Index,0.0,Set);
      if (__CsvProfilerStat93 == false) {
        FCsvProfilerTrace::OutputInlineStat("AvgReplicatedHugeObjectCount",_GCsvCategory_Iris.Index)
        ;
        __CsvProfilerStat93 = true;
      }
      FCsvProfiler::RecordCustomStat
                ("AvgReplicatedHugeObjectCount",_GCsvCategory_Iris.Index,0.0,Set);
      if (__CsvProfilerStat94 == false) {
        FCsvProfilerTrace::OutputInlineStat
                  ("AvgDeltaCompressedObjectCount",_GCsvCategory_Iris.Index);
        __CsvProfilerStat94 = true;
      }
      FCsvProfiler::RecordCustomStat
                ("AvgDeltaCompressedObjectCount",_GCsvCategory_Iris.Index,0.0,Set);
    }
    else {
      if (__CsvProfilerStat80 == false) {
        FCsvProfilerTrace::OutputInlineStat
                  ("AvgScheduledForReplicationRootObjectCount",_GCsvCategory_Iris.Index);
        __CsvProfilerStat80 = true;
      }
      fVar2 = __real_3f800000 / (float)iVar1;
      FCsvProfiler::RecordCustomStat
                ("AvgScheduledForReplicationRootObjectCount",_GCsvCategory_Iris.Index,
                 (float)(this->Stats).ScheduledForReplicationRootObjectCount * fVar2,Set);
      if (__CsvProfilerStat81 == false) {
        FCsvProfilerTrace::OutputInlineStat("AvgReplicatedRootObjectCount",_GCsvCategory_Iris.Index)
        ;
        __CsvProfilerStat81 = true;
      }
      FCsvProfiler::RecordCustomStat
                ("AvgReplicatedRootObjectCount",_GCsvCategory_Iris.Index,
                 (float)(this->Stats).ReplicatedRootObjectCount * fVar2,Set);
      if (__CsvProfilerStat82 == false) {
        FCsvProfilerTrace::OutputInlineStat("AvgReplicatedObjectCount",_GCsvCategory_Iris.Index);
        __CsvProfilerStat82 = true;
      }
      FCsvProfiler::RecordCustomStat
                ("AvgReplicatedObjectCount",_GCsvCategory_Iris.Index,
                 (float)(this->Stats).ReplicatedObjectCount * fVar2,Set);
      if (__CsvProfilerStat83 == false) {
        FCsvProfilerTrace::OutputInlineStat
                  ("AvgReplicatedDestructionInfoCount",_GCsvCategory_Iris.Index);
        __CsvProfilerStat83 = true;
      }
      FCsvProfiler::RecordCustomStat
                ("AvgReplicatedDestructionInfoCount",_GCsvCategory_Iris.Index,
                 (float)(this->Stats).ReplicatedDestructionInfoCount * fVar2,Set);
      if (__CsvProfilerStat84 == false) {
        FCsvProfilerTrace::OutputInlineStat
                  ("AvgReplicatedObjectStatesMaskedOut",_GCsvCategory_Iris.Index);
        __CsvProfilerStat84 = true;
      }
      FCsvProfiler::RecordCustomStat
                ("AvgReplicatedObjectStatesMaskedOut",_GCsvCategory_Iris.Index,
                 (float)(this->Stats).ReplicatedObjectStatesMaskedOut * fVar2,Set);
      if (__CsvProfilerStat85 == false) {
        FCsvProfilerTrace::OutputInlineStat
                  ("AvgDeltaCompressedObjectCount",_GCsvCategory_Iris.Index);
        __CsvProfilerStat85 = true;
      }
      FCsvProfiler::RecordCustomStat
                ("AvgDeltaCompressedObjectCount",_GCsvCategory_Iris.Index,
                 (float)(this->Stats).DeltaCompressedObjectCount * fVar2,Set);
    }
    if (__CsvProfilerStat98 == false) {
      FCsvProfilerTrace::OutputInlineStat("ActiveHugeObjectCount",_GCsvCategory_Iris.Index);
      __CsvProfilerStat98 = true;
    }
    FCsvProfiler::RecordCustomStat
              ("ActiveHugeObjectCount",_GCsvCategory_Iris.Index,(this->Stats).ActiveHugeObjectCount,
               Set);
    if (__CsvProfilerStat99 == false) {
      FCsvProfilerTrace::OutputInlineStat("HugeObjectsWaitingForAckCount",_GCsvCategory_Iris.Index);
      __CsvProfilerStat99 = true;
    }
    FCsvProfiler::RecordCustomStat
              ("HugeObjectsWaitingForAckCount",_GCsvCategory_Iris.Index,
               (this->Stats).HugeObjectsWaitingForAckCount,Set);
    if (__CsvProfilerStat100 == false) {
      FCsvProfilerTrace::OutputInlineStat("HugeObjectsStallingCount",_GCsvCategory_Iris.Index);
      __CsvProfilerStat100 = true;
    }
    FCsvProfiler::RecordCustomStat
              ("HugeObjectsStallingCount",_GCsvCategory_Iris.Index,
               (this->Stats).HugeObjectsStallingCount,Set);
    if (__CsvProfilerStat102 == false) {
      FCsvProfilerTrace::OutputInlineStat("ReplicatingConnectionCount",_GCsvCategory_Iris.Index);
      __CsvProfilerStat102 = true;
    }
    FCsvProfiler::RecordCustomStat
              ("ReplicatingConnectionCount",_GCsvCategory_Iris.Index,
               (this->Stats).ReplicatingConnectionCount,Set);
    if (__CsvProfilerStat104 == false) {
      FCsvProfilerTrace::OutputInlineStat
                ("HugeObjectWaitingForAckTimeInSeconds",_GCsvCategory_Iris.Index);
      __CsvProfilerStat104 = true;
    }
    FCsvProfiler::RecordCustomStat
              ("HugeObjectWaitingForAckTimeInSeconds",_GCsvCategory_Iris.Index,
               (this->Stats).HugeObjectWaitingForAckTimeInSeconds,Set);
    if (__CsvProfilerStat105 == false) {
      FCsvProfilerTrace::OutputInlineStat
                ("HugeObjectStallingTimeInSeconds",_GCsvCategory_Iris.Index);
      __CsvProfilerStat105 = true;
    }
    FCsvProfiler::RecordCustomStat
              ("HugeObjectStallingTimeInSeconds",_GCsvCategory_Iris.Index,
               (this->Stats).HugeObjectStallingTimeInSeconds,Set);
                    /* WARNING: Could not recover jumptable at 0x000144339d69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// Reset @ 144339e00

void __thiscall UE::Net::Private::FNetSendStats::Reset(FNetSendStats *this)

{
  if (this != (FNetSendStats *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)this);
    (this->Stats).HugeObjectWaitingForAckTimeInSeconds = 0.0;
    (this->Stats).HugeObjectStallingTimeInSeconds = 0.0;
    (this->Stats).ScheduledForReplicationRootObjectCount = 0;
    (this->Stats).ReplicatedRootObjectCount = 0;
    (this->Stats).ReplicatedObjectCount = 0;
    (this->Stats).ReplicatedDestructionInfoCount = 0;
    (this->Stats).DeltaCompressedObjectCount = 0;
    (this->Stats).ReplicatedObjectStatesMaskedOut = 0;
    (this->Stats).ActiveHugeObjectCount = 0;
    (this->Stats).HugeObjectsWaitingForAckCount = 0;
    (this->Stats).HugeObjectsStallingCount = 0;
    (this->Stats).ReplicatingConnectionCount = 0;
                    /* WARNING: Could not recover jumptable at 0x000144339e3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

