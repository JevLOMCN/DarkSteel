// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 9

// TTable<TraceServices::FLoadTimeProfilerAggregatedStats,2097152> @ 14d420360

TTable<TraceServices::FLoadTimeProfilerAggregatedStats,2097152> * __thiscall
TraceServices::TTable<TraceServices::FLoadTimeProfilerAggregatedStats,2097152>::
TTable<TraceServices::FLoadTimeProfilerAggregatedStats,2097152>
          (TTable<TraceServices::FLoadTimeProfilerAggregatedStats,2097152> *this,
          TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats> *param_1)

{
  FScriptContainerElement *pFVar1;
  TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats> *pTVar2;
  TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats> local_28;
  
  pTVar2 = TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::
           TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>(&local_28,param_1);
  this->_padding_ =
       (longlong)
       &___7__TTableBase_UFLoadTimeProfilerAggregatedStats_TraceServices___TraceServices__6B_;
  TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::
  TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>
            ((TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats> *)&this->_padding_,
             pTVar2);
  DestructItems<TraceServices::TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::FColumnDeclaration,int>
            ((FColumnDeclaration *)(pTVar2->Columns).AllocatorInstance.Data,
             (pTVar2->Columns).ArrayNum);
  pFVar1 = (pTVar2->Columns).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ =
       (longlong)
       &___7__TTable_UFLoadTimeProfilerAggregatedStats_TraceServices___0CAAAAA__TraceServices__6B_;
  (this->Allocator)._padding_ = (longlong)&___7FSlabAllocator_TraceServices__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&(this->Allocator).Cs,4000);
  (this->Allocator).SlabSize = 0x200000;
  (this->Allocator).Slabs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Allocator).Slabs.ArrayNum = 0;
  (this->Allocator).Slabs.ArrayMax = 0;
  (this->Allocator).CurrentSlab = (uchar *)0x0;
  (this->Allocator).CurrentSlabAllocatedSize = 0;
  (this->Allocator).TotalUsedSize = 0;
  (this->Allocator).TotalAllocatedSize = 0;
  (this->Rows).Allocator = (ILinearAllocator *)&this->Allocator;
  (this->Rows).PagesArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Rows).PagesArray.ArrayNum = 0;
  (this->Rows).PagesArray.ArrayMax = 0;
  (this->Rows).FirstPage = (TPagedArrayPage<TraceServices::FLoadTimeProfilerAggregatedStats> *)0x0;
  (this->Rows).LastPage = (TPagedArrayPage<TraceServices::FLoadTimeProfilerAggregatedStats> *)0x0;
  (this->Rows).PageSize = 0x400;
  (this->Rows).TotalItemCount = 0;
  DestructItems<TraceServices::TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::FColumnDeclaration,int>
            ((FColumnDeclaration *)(param_1->Columns).AllocatorInstance.Data,
             (param_1->Columns).ArrayNum);
  pFVar1 = (param_1->Columns).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

// GetRows @ 14d46c730

TPagedArray<TraceServices::FExportsTableRow,TraceServices::TPagedArrayPage<TraceServices::FExportsTableRow>_>
* __thiscall
TraceServices::TTable<TraceServices::FExportsTableRow,2097152>::GetRows
          (TTable<TraceServices::FExportsTableRow,2097152> *this)

{
  return &this->Rows;
}

// GetRows @ 14d46c740

TPagedArray<TraceServices::FLoadTimeProfilerAggregatedStats,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerAggregatedStats>_>
* __thiscall
TraceServices::TTable<TraceServices::FLoadTimeProfilerAggregatedStats,2097152>::GetRows
          (TTable<TraceServices::FLoadTimeProfilerAggregatedStats,2097152> *this)

{
  return &this->Rows;
}

// GetRows @ 14d46c750

TPagedArray<TraceServices::FNetProfilerAggregatedStats,TraceServices::TPagedArrayPage<TraceServices::FNetProfilerAggregatedStats>_>
* __thiscall
TraceServices::TTable<TraceServices::FNetProfilerAggregatedStats,2097152>::GetRows
          (TTable<TraceServices::FNetProfilerAggregatedStats,2097152> *this)

{
  return &this->Rows;
}

// GetRows @ 14d46c760

TPagedArray<TraceServices::FNetProfilerAggregatedStatsCounterStats,TraceServices::TPagedArrayPage<TraceServices::FNetProfilerAggregatedStatsCounterStats>_>
* __thiscall
TraceServices::TTable<TraceServices::FNetProfilerAggregatedStatsCounterStats,2097152>::GetRows
          (TTable<TraceServices::FNetProfilerAggregatedStatsCounterStats,2097152> *this)

{
  return &this->Rows;
}

// GetRows @ 14d46c770

TPagedArray<TraceServices::FPackagesTableRow,TraceServices::TPagedArrayPage<TraceServices::FPackagesTableRow>_>
* __thiscall
TraceServices::TTable<TraceServices::FPackagesTableRow,2097152>::GetRows
          (TTable<TraceServices::FPackagesTableRow,2097152> *this)

{
  return &this->Rows;
}

// GetRows @ 14d46c780

TPagedArray<TraceServices::FRequestsTableRow,TraceServices::TPagedArrayPage<TraceServices::FRequestsTableRow>_>
* __thiscall
TraceServices::TTable<TraceServices::FRequestsTableRow,2097152>::GetRows
          (TTable<TraceServices::FRequestsTableRow,2097152> *this)

{
  return &this->Rows;
}

// GetRows @ 14d46c790

/* WARNING: Enum "ETimingProfilerTimerType": Some values do not have unique names */

TPagedArray<TraceServices::FTimingProfilerAggregatedStats,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerAggregatedStats>_>
* __thiscall
TraceServices::TTable<TraceServices::FTimingProfilerAggregatedStats,2097152>::GetRows
          (TTable<TraceServices::FTimingProfilerAggregatedStats,2097152> *this)

{
  return &this->Rows;
}

// GetRows @ 14d46c7a0

TPagedArray<TraceServices::FImportTableRow,TraceServices::TPagedArrayPage<TraceServices::FImportTableRow>_>
* __thiscall
TraceServices::TTable<TraceServices::FImportTableRow,33554432>::GetRows
          (TTable<TraceServices::FImportTableRow,33554432> *this)

{
  return &this->Rows;
}

