// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 3

// GetRows @ 14d46c7b0

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

TPagedArray<TraceServices::FFileActivity,TraceServices::TPagedArrayPage<TraceServices::FFileActivity>_>
* __thiscall
TraceServices::TTableView<TraceServices::FFileActivity>::GetRows
          (TTableView<TraceServices::FFileActivity> *this)

{
  return this->Rows;
}

// GetRows @ 14d46c7c0

TPagedArray<TraceServices::FLoadRequest,TraceServices::TPagedArrayPage<TraceServices::FLoadRequest>_>
* __thiscall
TraceServices::TTableView<TraceServices::FLoadRequest>::GetRows
          (TTableView<TraceServices::FLoadRequest> *this)

{
  return this->Rows;
}

// GetRows @ 14d46c7d0

/* WARNING: Enum "Type": Some values do not have unique names */

TPagedArray<TraceServices::FLogMessageInternal,TraceServices::TPagedArrayPage<TraceServices::FLogMessageInternal>_>
* __thiscall
TraceServices::TTableView<TraceServices::FLogMessageInternal>::GetRows
          (TTableView<TraceServices::FLogMessageInternal> *this)

{
  return this->Rows;
}

