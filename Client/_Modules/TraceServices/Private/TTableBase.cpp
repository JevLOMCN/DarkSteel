// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 44

// ~TTableBase<TraceServices::FLogMessageInternal> @ 14d3ceed0

void __thiscall
TraceServices::TTableBase<TraceServices::FLogMessageInternal>::
~TTableBase<TraceServices::FLogMessageInternal>
          (TTableBase<TraceServices::FLogMessageInternal> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TraceServices::TTableLayout<TraceServices::FLogMessageInternal>::FColumnDeclaration,int>
            ((FColumnDeclaration *)(this->Layout).Columns.AllocatorInstance.Data,
             (this->Layout).Columns.ArrayNum);
  pFVar1 = (this->Layout).Columns.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TTableBase<TraceServices::FExportsTableRow> @ 14d42aa50

void __thiscall
TraceServices::TTableBase<TraceServices::FExportsTableRow>::
~TTableBase<TraceServices::FExportsTableRow>(TTableBase<TraceServices::FExportsTableRow> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TraceServices::TTableLayout<TraceServices::FExportsTableRow>::FColumnDeclaration,int>
            ((FColumnDeclaration *)(this->Layout).Columns.AllocatorInstance.Data,
             (this->Layout).Columns.ArrayNum);
  pFVar1 = (this->Layout).Columns.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TTableBase<TraceServices::FFileActivity> @ 14d42aa90

void __thiscall
TraceServices::TTableBase<TraceServices::FFileActivity>::~TTableBase<TraceServices::FFileActivity>
          (TTableBase<TraceServices::FFileActivity> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TraceServices::TTableLayout<TraceServices::FFileActivity>::FColumnDeclaration,int>
            ((FColumnDeclaration *)(this->Layout).Columns.AllocatorInstance.Data,
             (this->Layout).Columns.ArrayNum);
  pFVar1 = (this->Layout).Columns.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TTableBase<TraceServices::FLoadRequest> @ 14d42aad0

void __thiscall
TraceServices::TTableBase<TraceServices::FLoadRequest>::~TTableBase<TraceServices::FLoadRequest>
          (TTableBase<TraceServices::FLoadRequest> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TraceServices::TTableLayout<TraceServices::FLoadRequest>::FColumnDeclaration,int>
            ((FColumnDeclaration *)(this->Layout).Columns.AllocatorInstance.Data,
             (this->Layout).Columns.ArrayNum);
  pFVar1 = (this->Layout).Columns.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TTableBase<TraceServices::FLoadTimeProfilerAggregatedStats> @ 14d42ab10

void __thiscall
TraceServices::TTableBase<TraceServices::FLoadTimeProfilerAggregatedStats>::
~TTableBase<TraceServices::FLoadTimeProfilerAggregatedStats>
          (TTableBase<TraceServices::FLoadTimeProfilerAggregatedStats> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TraceServices::TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::FColumnDeclaration,int>
            ((FColumnDeclaration *)(this->Layout).Columns.AllocatorInstance.Data,
             (this->Layout).Columns.ArrayNum);
  pFVar1 = (this->Layout).Columns.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TTableBase<TraceServices::FNetProfilerAggregatedStats> @ 14d42ab50

void __thiscall
TraceServices::TTableBase<TraceServices::FNetProfilerAggregatedStats>::
~TTableBase<TraceServices::FNetProfilerAggregatedStats>
          (TTableBase<TraceServices::FNetProfilerAggregatedStats> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TraceServices::TTableLayout<TraceServices::FNetProfilerAggregatedStats>::FColumnDeclaration,int>
            ((FColumnDeclaration *)(this->Layout).Columns.AllocatorInstance.Data,
             (this->Layout).Columns.ArrayNum);
  pFVar1 = (this->Layout).Columns.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TTableBase<TraceServices::FNetProfilerAggregatedStatsCounterStats> @ 14d42ab90

void __thiscall
TraceServices::TTableBase<TraceServices::FNetProfilerAggregatedStatsCounterStats>::
~TTableBase<TraceServices::FNetProfilerAggregatedStatsCounterStats>
          (TTableBase<TraceServices::FNetProfilerAggregatedStatsCounterStats> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TraceServices::TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats>::FColumnDeclaration,int>
            ((FColumnDeclaration *)(this->Layout).Columns.AllocatorInstance.Data,
             (this->Layout).Columns.ArrayNum);
  pFVar1 = (this->Layout).Columns.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TTableBase<TraceServices::FPackagesTableRow> @ 14d42abd0

void __thiscall
TraceServices::TTableBase<TraceServices::FPackagesTableRow>::
~TTableBase<TraceServices::FPackagesTableRow>(TTableBase<TraceServices::FPackagesTableRow> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TraceServices::TTableLayout<TraceServices::FPackagesTableRow>::FColumnDeclaration,int>
            ((FColumnDeclaration *)(this->Layout).Columns.AllocatorInstance.Data,
             (this->Layout).Columns.ArrayNum);
  pFVar1 = (this->Layout).Columns.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TTableBase<TraceServices::FRequestsTableRow> @ 14d42ac10

void __thiscall
TraceServices::TTableBase<TraceServices::FRequestsTableRow>::
~TTableBase<TraceServices::FRequestsTableRow>(TTableBase<TraceServices::FRequestsTableRow> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::FColumnDeclaration,int>
            ((FColumnDeclaration *)(this->Layout).Columns.AllocatorInstance.Data,
             (this->Layout).Columns.ArrayNum);
  pFVar1 = (this->Layout).Columns.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TTableBase<TraceServices::FTimingProfilerAggregatedStats> @ 14d42ac50

void __thiscall
TraceServices::TTableBase<TraceServices::FTimingProfilerAggregatedStats>::
~TTableBase<TraceServices::FTimingProfilerAggregatedStats>
          (TTableBase<TraceServices::FTimingProfilerAggregatedStats> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TraceServices::TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::FColumnDeclaration,int>
            ((FColumnDeclaration *)(this->Layout).Columns.AllocatorInstance.Data,
             (this->Layout).Columns.ArrayNum);
  pFVar1 = (this->Layout).Columns.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TTableBase<TraceServices::FImportTableRow> @ 14d42ac90

void __thiscall
TraceServices::TTableBase<TraceServices::FImportTableRow>::
~TTableBase<TraceServices::FImportTableRow>(TTableBase<TraceServices::FImportTableRow> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TraceServices::TTableLayout<TraceServices::FImportTableRow>::FColumnDeclaration,int>
            ((FColumnDeclaration *)(this->Layout).Columns.AllocatorInstance.Data,
             (this->Layout).Columns.ArrayNum);
  pFVar1 = (this->Layout).Columns.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// CreateReader @ 14d44cbe0

ITableReader<TraceServices::FExportsTableRow> * __thiscall
TraceServices::TTableBase<TraceServices::FExportsTableRow>::CreateReader
          (TTableBase<TraceServices::FExportsTableRow> *this)

{
  ITableReader<TraceServices::FExportsTableRow> *pIVar1;
  ITableReader<TraceServices::FExportsTableRow> IVar2;
  
  pIVar1 = ::operator_new(0x48);
  if (pIVar1 != (ITableReader<TraceServices::FExportsTableRow> *)0x0) {
    IVar2 = (ITableReader<TraceServices::FExportsTableRow>)
            (**(code **)(this->_padding_ + 0x20))(this);
    pIVar1[2] = IVar2;
    *pIVar1 = (ITableReader<TraceServices::FExportsTableRow>)
              &___7__TTableReader_UFExportsTableRow_TraceServices___TraceServices__6B_;
    pIVar1[1] = (ITableReader<TraceServices::FExportsTableRow>)&this->Layout;
    pIVar1[3] = (ITableReader<TraceServices::FExportsTableRow>)0x0;
    pIVar1[4] = (ITableReader<TraceServices::FExportsTableRow>)0x0;
    pIVar1[5] = (ITableReader<TraceServices::FExportsTableRow>)0x0;
    pIVar1[6] = (ITableReader<TraceServices::FExportsTableRow>)0x0;
    pIVar1[7] = (ITableReader<TraceServices::FExportsTableRow>)0x0;
    TPagedArrayIterator<TraceServices::FExportsTableRow,TraceServices::TPagedArrayPage<TraceServices::FExportsTableRow>_>
    ::SetPositionInternal
              ((TPagedArrayIterator<TraceServices::FExportsTableRow,TraceServices::TPagedArrayPage<TraceServices::FExportsTableRow>_>
                *)(pIVar1 + 2),0);
    pIVar1[8] = pIVar1[7];
    return pIVar1;
  }
  return (ITableReader<TraceServices::FExportsTableRow> *)0x0;
}

// CreateReader @ 14d44cc70

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

ITableReader<TraceServices::FFileActivity> * __thiscall
TraceServices::TTableBase<TraceServices::FFileActivity>::CreateReader
          (TTableBase<TraceServices::FFileActivity> *this)

{
  ITableReader<TraceServices::FFileActivity> *pIVar1;
  ITableReader<TraceServices::FFileActivity> IVar2;
  
  pIVar1 = ::operator_new(0x48);
  if (pIVar1 != (ITableReader<TraceServices::FFileActivity> *)0x0) {
    IVar2 = (ITableReader<TraceServices::FFileActivity>)(**(code **)(this->_padding_ + 0x20))(this);
    pIVar1[2] = IVar2;
    *pIVar1 = (ITableReader<TraceServices::FFileActivity>)
              &___7__TTableReader_UFFileActivity_TraceServices___TraceServices__6B_;
    pIVar1[1] = (ITableReader<TraceServices::FFileActivity>)&this->Layout;
    pIVar1[3] = (ITableReader<TraceServices::FFileActivity>)0x0;
    pIVar1[4] = (ITableReader<TraceServices::FFileActivity>)0x0;
    pIVar1[5] = (ITableReader<TraceServices::FFileActivity>)0x0;
    pIVar1[6] = (ITableReader<TraceServices::FFileActivity>)0x0;
    pIVar1[7] = (ITableReader<TraceServices::FFileActivity>)0x0;
    TPagedArrayIterator<TraceServices::FFileActivity,TraceServices::TPagedArrayPage<TraceServices::FFileActivity>_>
    ::SetPositionInternal
              ((TPagedArrayIterator<TraceServices::FFileActivity,TraceServices::TPagedArrayPage<TraceServices::FFileActivity>_>
                *)(pIVar1 + 2),0);
    pIVar1[8] = pIVar1[7];
    return pIVar1;
  }
  return (ITableReader<TraceServices::FFileActivity> *)0x0;
}

// CreateReader @ 14d44cd00

ITableReader<TraceServices::FLoadRequest> * __thiscall
TraceServices::TTableBase<TraceServices::FLoadRequest>::CreateReader
          (TTableBase<TraceServices::FLoadRequest> *this)

{
  ITableReader<TraceServices::FLoadRequest> *pIVar1;
  ITableReader<TraceServices::FLoadRequest> IVar2;
  
  pIVar1 = ::operator_new(0x48);
  if (pIVar1 != (ITableReader<TraceServices::FLoadRequest> *)0x0) {
    IVar2 = (ITableReader<TraceServices::FLoadRequest>)(**(code **)(this->_padding_ + 0x20))(this);
    pIVar1[2] = IVar2;
    *pIVar1 = (ITableReader<TraceServices::FLoadRequest>)
              &___7__TTableReader_UFLoadRequest_TraceServices___TraceServices__6B_;
    pIVar1[1] = (ITableReader<TraceServices::FLoadRequest>)&this->Layout;
    pIVar1[3] = (ITableReader<TraceServices::FLoadRequest>)0x0;
    pIVar1[4] = (ITableReader<TraceServices::FLoadRequest>)0x0;
    pIVar1[5] = (ITableReader<TraceServices::FLoadRequest>)0x0;
    pIVar1[6] = (ITableReader<TraceServices::FLoadRequest>)0x0;
    pIVar1[7] = (ITableReader<TraceServices::FLoadRequest>)0x0;
    TPagedArrayIterator<TraceServices::FLoadRequest,TraceServices::TPagedArrayPage<TraceServices::FLoadRequest>_>
    ::SetPositionInternal
              ((TPagedArrayIterator<TraceServices::FLoadRequest,TraceServices::TPagedArrayPage<TraceServices::FLoadRequest>_>
                *)(pIVar1 + 2),0);
    pIVar1[8] = pIVar1[7];
    return pIVar1;
  }
  return (ITableReader<TraceServices::FLoadRequest> *)0x0;
}

// CreateReader @ 14d44cd90

ITableReader<TraceServices::FLoadTimeProfilerAggregatedStats> * __thiscall
TraceServices::TTableBase<TraceServices::FLoadTimeProfilerAggregatedStats>::CreateReader
          (TTableBase<TraceServices::FLoadTimeProfilerAggregatedStats> *this)

{
  ITableReader<TraceServices::FLoadTimeProfilerAggregatedStats> *pIVar1;
  ITableReader<TraceServices::FLoadTimeProfilerAggregatedStats> IVar2;
  
  pIVar1 = ::operator_new(0x48);
  if (pIVar1 != (ITableReader<TraceServices::FLoadTimeProfilerAggregatedStats> *)0x0) {
    IVar2 = (ITableReader<TraceServices::FLoadTimeProfilerAggregatedStats>)
            (**(code **)(this->_padding_ + 0x20))(this);
    pIVar1[2] = IVar2;
    *pIVar1 = (ITableReader<TraceServices::FLoadTimeProfilerAggregatedStats>)
              &
              ___7__TTableReader_UFLoadTimeProfilerAggregatedStats_TraceServices___TraceServices__6B_
    ;
    pIVar1[1] = (ITableReader<TraceServices::FLoadTimeProfilerAggregatedStats>)&this->Layout;
    pIVar1[3] = (ITableReader<TraceServices::FLoadTimeProfilerAggregatedStats>)0x0;
    pIVar1[4] = (ITableReader<TraceServices::FLoadTimeProfilerAggregatedStats>)0x0;
    pIVar1[5] = (ITableReader<TraceServices::FLoadTimeProfilerAggregatedStats>)0x0;
    pIVar1[6] = (ITableReader<TraceServices::FLoadTimeProfilerAggregatedStats>)0x0;
    pIVar1[7] = (ITableReader<TraceServices::FLoadTimeProfilerAggregatedStats>)0x0;
    TPagedArrayIterator<TraceServices::FLoadTimeProfilerAggregatedStats,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerAggregatedStats>_>
    ::SetPositionInternal
              ((TPagedArrayIterator<TraceServices::FLoadTimeProfilerAggregatedStats,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerAggregatedStats>_>
                *)(pIVar1 + 2),0);
    pIVar1[8] = pIVar1[7];
    return pIVar1;
  }
  return (ITableReader<TraceServices::FLoadTimeProfilerAggregatedStats> *)0x0;
}

// CreateReader @ 14d44ce20

/* WARNING: Enum "Type": Some values do not have unique names */

ITableReader<TraceServices::FLogMessageInternal> * __thiscall
TraceServices::TTableBase<TraceServices::FLogMessageInternal>::CreateReader
          (TTableBase<TraceServices::FLogMessageInternal> *this)

{
  ITableReader<TraceServices::FLogMessageInternal> *pIVar1;
  ITableReader<TraceServices::FLogMessageInternal> IVar2;
  
  pIVar1 = ::operator_new(0x48);
  if (pIVar1 != (ITableReader<TraceServices::FLogMessageInternal> *)0x0) {
    IVar2 = (ITableReader<TraceServices::FLogMessageInternal>)
            (**(code **)(this->_padding_ + 0x20))(this);
    pIVar1[2] = IVar2;
    *pIVar1 = (ITableReader<TraceServices::FLogMessageInternal>)
              &___7__TTableReader_UFLogMessageInternal_TraceServices___TraceServices__6B_;
    pIVar1[1] = (ITableReader<TraceServices::FLogMessageInternal>)&this->Layout;
    pIVar1[3] = (ITableReader<TraceServices::FLogMessageInternal>)0x0;
    pIVar1[4] = (ITableReader<TraceServices::FLogMessageInternal>)0x0;
    pIVar1[5] = (ITableReader<TraceServices::FLogMessageInternal>)0x0;
    pIVar1[6] = (ITableReader<TraceServices::FLogMessageInternal>)0x0;
    pIVar1[7] = (ITableReader<TraceServices::FLogMessageInternal>)0x0;
    TPagedArrayIterator<TraceServices::FLogMessageInternal,TraceServices::TPagedArrayPage<TraceServices::FLogMessageInternal>_>
    ::SetPositionInternal
              ((TPagedArrayIterator<TraceServices::FLogMessageInternal,TraceServices::TPagedArrayPage<TraceServices::FLogMessageInternal>_>
                *)(pIVar1 + 2),0);
    pIVar1[8] = pIVar1[7];
    return pIVar1;
  }
  return (ITableReader<TraceServices::FLogMessageInternal> *)0x0;
}

// CreateReader @ 14d44ceb0

ITableReader<TraceServices::FNetProfilerAggregatedStats> * __thiscall
TraceServices::TTableBase<TraceServices::FNetProfilerAggregatedStats>::CreateReader
          (TTableBase<TraceServices::FNetProfilerAggregatedStats> *this)

{
  ITableReader<TraceServices::FNetProfilerAggregatedStats> *pIVar1;
  ITableReader<TraceServices::FNetProfilerAggregatedStats> IVar2;
  
  pIVar1 = ::operator_new(0x48);
  if (pIVar1 != (ITableReader<TraceServices::FNetProfilerAggregatedStats> *)0x0) {
    IVar2 = (ITableReader<TraceServices::FNetProfilerAggregatedStats>)
            (**(code **)(this->_padding_ + 0x20))(this);
    pIVar1[2] = IVar2;
    *pIVar1 = (ITableReader<TraceServices::FNetProfilerAggregatedStats>)
              &___7__TTableReader_UFNetProfilerAggregatedStats_TraceServices___TraceServices__6B_;
    pIVar1[1] = (ITableReader<TraceServices::FNetProfilerAggregatedStats>)&this->Layout;
    pIVar1[3] = (ITableReader<TraceServices::FNetProfilerAggregatedStats>)0x0;
    pIVar1[4] = (ITableReader<TraceServices::FNetProfilerAggregatedStats>)0x0;
    pIVar1[5] = (ITableReader<TraceServices::FNetProfilerAggregatedStats>)0x0;
    pIVar1[6] = (ITableReader<TraceServices::FNetProfilerAggregatedStats>)0x0;
    pIVar1[7] = (ITableReader<TraceServices::FNetProfilerAggregatedStats>)0x0;
    TPagedArrayIterator<TraceServices::FNetProfilerAggregatedStats,TraceServices::TPagedArrayPage<TraceServices::FNetProfilerAggregatedStats>_>
    ::SetPositionInternal
              ((TPagedArrayIterator<TraceServices::FNetProfilerAggregatedStats,TraceServices::TPagedArrayPage<TraceServices::FNetProfilerAggregatedStats>_>
                *)(pIVar1 + 2),0);
    pIVar1[8] = pIVar1[7];
    return pIVar1;
  }
  return (ITableReader<TraceServices::FNetProfilerAggregatedStats> *)0x0;
}

// CreateReader @ 14d44cf40

ITableReader<TraceServices::FNetProfilerAggregatedStatsCounterStats> * __thiscall
TraceServices::TTableBase<TraceServices::FNetProfilerAggregatedStatsCounterStats>::CreateReader
          (TTableBase<TraceServices::FNetProfilerAggregatedStatsCounterStats> *this)

{
  ITableReader<TraceServices::FNetProfilerAggregatedStatsCounterStats> *pIVar1;
  ITableReader<TraceServices::FNetProfilerAggregatedStatsCounterStats> IVar2;
  
  pIVar1 = ::operator_new(0x48);
  if (pIVar1 != (ITableReader<TraceServices::FNetProfilerAggregatedStatsCounterStats> *)0x0) {
    IVar2 = (ITableReader<TraceServices::FNetProfilerAggregatedStatsCounterStats>)
            (**(code **)(this->_padding_ + 0x20))(this);
    pIVar1[2] = IVar2;
    *pIVar1 = (ITableReader<TraceServices::FNetProfilerAggregatedStatsCounterStats>)
              &
              ___7__TTableReader_UFNetProfilerAggregatedStatsCounterStats_TraceServices___TraceServices__6B_
    ;
    pIVar1[1] = (ITableReader<TraceServices::FNetProfilerAggregatedStatsCounterStats>)&this->Layout;
    pIVar1[3] = (ITableReader<TraceServices::FNetProfilerAggregatedStatsCounterStats>)0x0;
    pIVar1[4] = (ITableReader<TraceServices::FNetProfilerAggregatedStatsCounterStats>)0x0;
    pIVar1[5] = (ITableReader<TraceServices::FNetProfilerAggregatedStatsCounterStats>)0x0;
    pIVar1[6] = (ITableReader<TraceServices::FNetProfilerAggregatedStatsCounterStats>)0x0;
    pIVar1[7] = (ITableReader<TraceServices::FNetProfilerAggregatedStatsCounterStats>)0x0;
    TPagedArrayIterator<TraceServices::FNetProfilerAggregatedStatsCounterStats,TraceServices::TPagedArrayPage<TraceServices::FNetProfilerAggregatedStatsCounterStats>_>
    ::SetPositionInternal
              ((TPagedArrayIterator<TraceServices::FNetProfilerAggregatedStatsCounterStats,TraceServices::TPagedArrayPage<TraceServices::FNetProfilerAggregatedStatsCounterStats>_>
                *)(pIVar1 + 2),0);
    pIVar1[8] = pIVar1[7];
    return pIVar1;
  }
  return (ITableReader<TraceServices::FNetProfilerAggregatedStatsCounterStats> *)0x0;
}

// CreateReader @ 14d44cfd0

ITableReader<TraceServices::FPackagesTableRow> * __thiscall
TraceServices::TTableBase<TraceServices::FPackagesTableRow>::CreateReader
          (TTableBase<TraceServices::FPackagesTableRow> *this)

{
  ITableReader<TraceServices::FPackagesTableRow> *pIVar1;
  ITableReader<TraceServices::FPackagesTableRow> IVar2;
  
  pIVar1 = ::operator_new(0x48);
  if (pIVar1 != (ITableReader<TraceServices::FPackagesTableRow> *)0x0) {
    IVar2 = (ITableReader<TraceServices::FPackagesTableRow>)
            (**(code **)(this->_padding_ + 0x20))(this);
    pIVar1[2] = IVar2;
    *pIVar1 = (ITableReader<TraceServices::FPackagesTableRow>)
              &___7__TTableReader_UFPackagesTableRow_TraceServices___TraceServices__6B_;
    pIVar1[1] = (ITableReader<TraceServices::FPackagesTableRow>)&this->Layout;
    pIVar1[3] = (ITableReader<TraceServices::FPackagesTableRow>)0x0;
    pIVar1[4] = (ITableReader<TraceServices::FPackagesTableRow>)0x0;
    pIVar1[5] = (ITableReader<TraceServices::FPackagesTableRow>)0x0;
    pIVar1[6] = (ITableReader<TraceServices::FPackagesTableRow>)0x0;
    pIVar1[7] = (ITableReader<TraceServices::FPackagesTableRow>)0x0;
    TPagedArrayIterator<TraceServices::FPackagesTableRow,TraceServices::TPagedArrayPage<TraceServices::FPackagesTableRow>_>
    ::SetPositionInternal
              ((TPagedArrayIterator<TraceServices::FPackagesTableRow,TraceServices::TPagedArrayPage<TraceServices::FPackagesTableRow>_>
                *)(pIVar1 + 2),0);
    pIVar1[8] = pIVar1[7];
    return pIVar1;
  }
  return (ITableReader<TraceServices::FPackagesTableRow> *)0x0;
}

// CreateReader @ 14d44d060

ITableReader<TraceServices::FRequestsTableRow> * __thiscall
TraceServices::TTableBase<TraceServices::FRequestsTableRow>::CreateReader
          (TTableBase<TraceServices::FRequestsTableRow> *this)

{
  ITableReader<TraceServices::FRequestsTableRow> *pIVar1;
  ITableReader<TraceServices::FRequestsTableRow> IVar2;
  
  pIVar1 = ::operator_new(0x48);
  if (pIVar1 != (ITableReader<TraceServices::FRequestsTableRow> *)0x0) {
    IVar2 = (ITableReader<TraceServices::FRequestsTableRow>)
            (**(code **)(this->_padding_ + 0x20))(this);
    pIVar1[2] = IVar2;
    *pIVar1 = (ITableReader<TraceServices::FRequestsTableRow>)
              &___7__TTableReader_UFRequestsTableRow_TraceServices___TraceServices__6B_;
    pIVar1[1] = (ITableReader<TraceServices::FRequestsTableRow>)&this->Layout;
    pIVar1[3] = (ITableReader<TraceServices::FRequestsTableRow>)0x0;
    pIVar1[4] = (ITableReader<TraceServices::FRequestsTableRow>)0x0;
    pIVar1[5] = (ITableReader<TraceServices::FRequestsTableRow>)0x0;
    pIVar1[6] = (ITableReader<TraceServices::FRequestsTableRow>)0x0;
    pIVar1[7] = (ITableReader<TraceServices::FRequestsTableRow>)0x0;
    TPagedArrayIterator<TraceServices::FRequestsTableRow,TraceServices::TPagedArrayPage<TraceServices::FRequestsTableRow>_>
    ::SetPositionInternal
              ((TPagedArrayIterator<TraceServices::FRequestsTableRow,TraceServices::TPagedArrayPage<TraceServices::FRequestsTableRow>_>
                *)(pIVar1 + 2),0);
    pIVar1[8] = pIVar1[7];
    return pIVar1;
  }
  return (ITableReader<TraceServices::FRequestsTableRow> *)0x0;
}

// CreateReader @ 14d44d0f0

/* WARNING: Enum "ETimingProfilerTimerType": Some values do not have unique names */

ITableReader<TraceServices::FTimingProfilerAggregatedStats> * __thiscall
TraceServices::TTableBase<TraceServices::FTimingProfilerAggregatedStats>::CreateReader
          (TTableBase<TraceServices::FTimingProfilerAggregatedStats> *this)

{
  ITableReader<TraceServices::FTimingProfilerAggregatedStats> *pIVar1;
  ITableReader<TraceServices::FTimingProfilerAggregatedStats> IVar2;
  
  pIVar1 = ::operator_new(0x48);
  if (pIVar1 != (ITableReader<TraceServices::FTimingProfilerAggregatedStats> *)0x0) {
    IVar2 = (ITableReader<TraceServices::FTimingProfilerAggregatedStats>)
            (**(code **)(this->_padding_ + 0x20))(this);
    pIVar1[2] = IVar2;
    *pIVar1 = (ITableReader<TraceServices::FTimingProfilerAggregatedStats>)
              &___7__TTableReader_UFTimingProfilerAggregatedStats_TraceServices___TraceServices__6B_
    ;
    pIVar1[1] = (ITableReader<TraceServices::FTimingProfilerAggregatedStats>)&this->Layout;
    pIVar1[3] = (ITableReader<TraceServices::FTimingProfilerAggregatedStats>)0x0;
    pIVar1[4] = (ITableReader<TraceServices::FTimingProfilerAggregatedStats>)0x0;
    pIVar1[5] = (ITableReader<TraceServices::FTimingProfilerAggregatedStats>)0x0;
    pIVar1[6] = (ITableReader<TraceServices::FTimingProfilerAggregatedStats>)0x0;
    pIVar1[7] = (ITableReader<TraceServices::FTimingProfilerAggregatedStats>)0x0;
    TPagedArrayIterator<TraceServices::FTimingProfilerAggregatedStats,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerAggregatedStats>_>
    ::SetPositionInternal
              ((TPagedArrayIterator<TraceServices::FTimingProfilerAggregatedStats,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerAggregatedStats>_>
                *)(pIVar1 + 2),0);
    pIVar1[8] = pIVar1[7];
    return pIVar1;
  }
  return (ITableReader<TraceServices::FTimingProfilerAggregatedStats> *)0x0;
}

// CreateReader @ 14d44d180

ITableReader<TraceServices::FImportTableRow> * __thiscall
TraceServices::TTableBase<TraceServices::FImportTableRow>::CreateReader
          (TTableBase<TraceServices::FImportTableRow> *this)

{
  ITableReader<TraceServices::FImportTableRow> *pIVar1;
  ITableReader<TraceServices::FImportTableRow> IVar2;
  
  pIVar1 = ::operator_new(0x48);
  if (pIVar1 != (ITableReader<TraceServices::FImportTableRow> *)0x0) {
    IVar2 = (ITableReader<TraceServices::FImportTableRow>)
            (**(code **)(this->_padding_ + 0x20))(this);
    pIVar1[2] = IVar2;
    *pIVar1 = (ITableReader<TraceServices::FImportTableRow>)
              &___7__TTableReader_VFImportTableRow_TraceServices___TraceServices__6B_;
    pIVar1[1] = (ITableReader<TraceServices::FImportTableRow>)&this->Layout;
    pIVar1[3] = (ITableReader<TraceServices::FImportTableRow>)0x0;
    pIVar1[4] = (ITableReader<TraceServices::FImportTableRow>)0x0;
    pIVar1[5] = (ITableReader<TraceServices::FImportTableRow>)0x0;
    pIVar1[6] = (ITableReader<TraceServices::FImportTableRow>)0x0;
    pIVar1[7] = (ITableReader<TraceServices::FImportTableRow>)0x0;
    TPagedArrayIterator<TraceServices::FImportTableRow,TraceServices::TPagedArrayPage<TraceServices::FImportTableRow>_>
    ::SetPositionInternal
              ((TPagedArrayIterator<TraceServices::FImportTableRow,TraceServices::TPagedArrayPage<TraceServices::FImportTableRow>_>
                *)(pIVar1 + 2),0);
    pIVar1[8] = pIVar1[7];
    return pIVar1;
  }
  return (ITableReader<TraceServices::FImportTableRow> *)0x0;
}

// GetLayout @ 14d468e80

ITableLayout * __thiscall
TraceServices::TTableBase<TraceServices::FExportsTableRow>::GetLayout
          (TTableBase<TraceServices::FExportsTableRow> *this)

{
  return (ITableLayout *)&this->Layout;
}

// GetLayout @ 14d468e90

ITableLayout * __thiscall
TraceServices::TTableBase<TraceServices::FFileActivity>::GetLayout
          (TTableBase<TraceServices::FFileActivity> *this)

{
  return (ITableLayout *)&this->Layout;
}

// GetLayout @ 14d468ea0

ITableLayout * __thiscall
TraceServices::TTableBase<TraceServices::FLoadRequest>::GetLayout
          (TTableBase<TraceServices::FLoadRequest> *this)

{
  return (ITableLayout *)&this->Layout;
}

// GetLayout @ 14d468eb0

ITableLayout * __thiscall
TraceServices::TTableBase<TraceServices::FLoadTimeProfilerAggregatedStats>::GetLayout
          (TTableBase<TraceServices::FLoadTimeProfilerAggregatedStats> *this)

{
  return (ITableLayout *)&this->Layout;
}

// GetLayout @ 14d468ec0

ITableLayout * __thiscall
TraceServices::TTableBase<TraceServices::FLogMessageInternal>::GetLayout
          (TTableBase<TraceServices::FLogMessageInternal> *this)

{
  return (ITableLayout *)&this->Layout;
}

// GetLayout @ 14d468ed0

ITableLayout * __thiscall
TraceServices::TTableBase<TraceServices::FNetProfilerAggregatedStats>::GetLayout
          (TTableBase<TraceServices::FNetProfilerAggregatedStats> *this)

{
  return (ITableLayout *)&this->Layout;
}

// GetLayout @ 14d468ee0

ITableLayout * __thiscall
TraceServices::TTableBase<TraceServices::FNetProfilerAggregatedStatsCounterStats>::GetLayout
          (TTableBase<TraceServices::FNetProfilerAggregatedStatsCounterStats> *this)

{
  return (ITableLayout *)&this->Layout;
}

// GetLayout @ 14d468ef0

ITableLayout * __thiscall
TraceServices::TTableBase<TraceServices::FPackagesTableRow>::GetLayout
          (TTableBase<TraceServices::FPackagesTableRow> *this)

{
  return (ITableLayout *)&this->Layout;
}

// GetLayout @ 14d468f00

ITableLayout * __thiscall
TraceServices::TTableBase<TraceServices::FRequestsTableRow>::GetLayout
          (TTableBase<TraceServices::FRequestsTableRow> *this)

{
  return (ITableLayout *)&this->Layout;
}

// GetLayout @ 14d468f10

ITableLayout * __thiscall
TraceServices::TTableBase<TraceServices::FTimingProfilerAggregatedStats>::GetLayout
          (TTableBase<TraceServices::FTimingProfilerAggregatedStats> *this)

{
  return (ITableLayout *)&this->Layout;
}

// GetLayout @ 14d468f20

ITableLayout * __thiscall
TraceServices::TTableBase<TraceServices::FImportTableRow>::GetLayout
          (TTableBase<TraceServices::FImportTableRow> *this)

{
  return (ITableLayout *)&this->Layout;
}

// GetRowCount @ 14d46c5b0

ulong64 __thiscall
TraceServices::TTableBase<TraceServices::FExportsTableRow>::GetRowCount
          (TTableBase<TraceServices::FExportsTableRow> *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(this->_padding_ + 0x20))();
  return *(ulong64 *)(lVar1 + 0x30);
}

// GetRowCount @ 14d46c5d0

ulong64 __thiscall
TraceServices::TTableBase<TraceServices::FFileActivity>::GetRowCount
          (TTableBase<TraceServices::FFileActivity> *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(this->_padding_ + 0x20))();
  return *(ulong64 *)(lVar1 + 0x30);
}

// GetRowCount @ 14d46c5f0

ulong64 __thiscall
TraceServices::TTableBase<TraceServices::FLoadRequest>::GetRowCount
          (TTableBase<TraceServices::FLoadRequest> *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(this->_padding_ + 0x20))();
  return *(ulong64 *)(lVar1 + 0x30);
}

// GetRowCount @ 14d46c610

ulong64 __thiscall
TraceServices::TTableBase<TraceServices::FLoadTimeProfilerAggregatedStats>::GetRowCount
          (TTableBase<TraceServices::FLoadTimeProfilerAggregatedStats> *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(this->_padding_ + 0x20))();
  return *(ulong64 *)(lVar1 + 0x30);
}

// GetRowCount @ 14d46c630

ulong64 __thiscall
TraceServices::TTableBase<TraceServices::FLogMessageInternal>::GetRowCount
          (TTableBase<TraceServices::FLogMessageInternal> *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(this->_padding_ + 0x20))();
  return *(ulong64 *)(lVar1 + 0x30);
}

// GetRowCount @ 14d46c650

ulong64 __thiscall
TraceServices::TTableBase<TraceServices::FNetProfilerAggregatedStats>::GetRowCount
          (TTableBase<TraceServices::FNetProfilerAggregatedStats> *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(this->_padding_ + 0x20))();
  return *(ulong64 *)(lVar1 + 0x30);
}

// GetRowCount @ 14d46c670

ulong64 __thiscall
TraceServices::TTableBase<TraceServices::FNetProfilerAggregatedStatsCounterStats>::GetRowCount
          (TTableBase<TraceServices::FNetProfilerAggregatedStatsCounterStats> *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(this->_padding_ + 0x20))();
  return *(ulong64 *)(lVar1 + 0x30);
}

// GetRowCount @ 14d46c690

ulong64 __thiscall
TraceServices::TTableBase<TraceServices::FPackagesTableRow>::GetRowCount
          (TTableBase<TraceServices::FPackagesTableRow> *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(this->_padding_ + 0x20))();
  return *(ulong64 *)(lVar1 + 0x30);
}

// GetRowCount @ 14d46c6b0

ulong64 __thiscall
TraceServices::TTableBase<TraceServices::FRequestsTableRow>::GetRowCount
          (TTableBase<TraceServices::FRequestsTableRow> *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(this->_padding_ + 0x20))();
  return *(ulong64 *)(lVar1 + 0x30);
}

// GetRowCount @ 14d46c6d0

ulong64 __thiscall
TraceServices::TTableBase<TraceServices::FTimingProfilerAggregatedStats>::GetRowCount
          (TTableBase<TraceServices::FTimingProfilerAggregatedStats> *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(this->_padding_ + 0x20))();
  return *(ulong64 *)(lVar1 + 0x30);
}

// GetRowCount @ 14d46c6f0

ulong64 __thiscall
TraceServices::TTableBase<TraceServices::FImportTableRow>::GetRowCount
          (TTableBase<TraceServices::FImportTableRow> *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(this->_padding_ + 0x20))();
  return *(ulong64 *)(lVar1 + 0x30);
}

