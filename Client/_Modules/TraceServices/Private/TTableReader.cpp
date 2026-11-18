// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 99

// GetCurrentRow @ 14d464980

FExportsTableRow * __thiscall
TraceServices::TTableReader<TraceServices::FExportsTableRow>::GetCurrentRow
          (TTableReader<TraceServices::FExportsTableRow> *this)

{
  return this->CurrentRow;
}

// GetCurrentRow @ 14d464990

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

FFileActivity * __thiscall
TraceServices::TTableReader<TraceServices::FFileActivity>::GetCurrentRow
          (TTableReader<TraceServices::FFileActivity> *this)

{
  return this->CurrentRow;
}

// GetCurrentRow @ 14d4649a0

FLoadRequest * __thiscall
TraceServices::TTableReader<TraceServices::FLoadRequest>::GetCurrentRow
          (TTableReader<TraceServices::FLoadRequest> *this)

{
  return this->CurrentRow;
}

// GetCurrentRow @ 14d4649b0

FLoadTimeProfilerAggregatedStats * __thiscall
TraceServices::TTableReader<TraceServices::FLoadTimeProfilerAggregatedStats>::GetCurrentRow
          (TTableReader<TraceServices::FLoadTimeProfilerAggregatedStats> *this)

{
  return this->CurrentRow;
}

// GetCurrentRow @ 14d4649c0

/* WARNING: Enum "Type": Some values do not have unique names */

FLogMessageInternal * __thiscall
TraceServices::TTableReader<TraceServices::FLogMessageInternal>::GetCurrentRow
          (TTableReader<TraceServices::FLogMessageInternal> *this)

{
  return this->CurrentRow;
}

// GetCurrentRow @ 14d4649d0

FNetProfilerAggregatedStats * __thiscall
TraceServices::TTableReader<TraceServices::FNetProfilerAggregatedStats>::GetCurrentRow
          (TTableReader<TraceServices::FNetProfilerAggregatedStats> *this)

{
  return this->CurrentRow;
}

// GetCurrentRow @ 14d4649e0

FNetProfilerAggregatedStatsCounterStats * __thiscall
TraceServices::TTableReader<TraceServices::FNetProfilerAggregatedStatsCounterStats>::GetCurrentRow
          (TTableReader<TraceServices::FNetProfilerAggregatedStatsCounterStats> *this)

{
  return this->CurrentRow;
}

// GetCurrentRow @ 14d4649f0

FPackagesTableRow * __thiscall
TraceServices::TTableReader<TraceServices::FPackagesTableRow>::GetCurrentRow
          (TTableReader<TraceServices::FPackagesTableRow> *this)

{
  return this->CurrentRow;
}

// GetCurrentRow @ 14d464a00

FRequestsTableRow * __thiscall
TraceServices::TTableReader<TraceServices::FRequestsTableRow>::GetCurrentRow
          (TTableReader<TraceServices::FRequestsTableRow> *this)

{
  return this->CurrentRow;
}

// GetCurrentRow @ 14d464a10

/* WARNING: Enum "ETimingProfilerTimerType": Some values do not have unique names */

FTimingProfilerAggregatedStats * __thiscall
TraceServices::TTableReader<TraceServices::FTimingProfilerAggregatedStats>::GetCurrentRow
          (TTableReader<TraceServices::FTimingProfilerAggregatedStats> *this)

{
  return this->CurrentRow;
}

// GetCurrentRow @ 14d464a20

FImportTableRow * __thiscall
TraceServices::TTableReader<TraceServices::FImportTableRow>::GetCurrentRow
          (TTableReader<TraceServices::FImportTableRow> *this)

{
  return this->CurrentRow;
}

// GetValueBool @ 14d46e9c0

bool __thiscall
TraceServices::TTableReader<TraceServices::FExportsTableRow>::GetValueBool
          (TTableReader<TraceServices::FExportsTableRow> *this,ulong64 param_1)

{
  int iVar1;
  FColumnValueContainer FVar2;
  
  if (this->CurrentRow == (FExportsTableRow *)0x0) {
    return false;
  }
  iVar1 = (**(code **)(this->Layout->_padding_ + 0x18))();
  if (iVar1 == 1) {
    FVar2 = TTableLayout<TraceServices::FExportsTableRow>::GetColumnValue
                      (this->Layout,(FExportsTableRow *)&stack0x00000008,(ulong64)this->CurrentRow);
    return (bool)*(undefined1 *)FVar2.field0_0x0;
  }
  if (iVar1 == 2) {
    FVar2 = TTableLayout<TraceServices::FExportsTableRow>::GetColumnValue
                      (this->Layout,(FExportsTableRow *)&stack0x00000008,(ulong64)this->CurrentRow);
    return *(longlong *)FVar2.field0_0x0 != 0;
  }
  if (iVar1 == 3) {
    FVar2 = TTableLayout<TraceServices::FExportsTableRow>::GetColumnValue
                      (this->Layout,(FExportsTableRow *)&stack0x00000008,(ulong64)this->CurrentRow);
    if (*(float *)FVar2.field0_0x0 != 0.0) {
      return true;
    }
  }
  else {
    if (iVar1 != 4) {
      return false;
    }
    FVar2 = TTableLayout<TraceServices::FExportsTableRow>::GetColumnValue
                      (this->Layout,(FExportsTableRow *)&stack0x00000008,(ulong64)this->CurrentRow);
    if (*(double *)FVar2.field0_0x0 != 0.0) {
      return true;
    }
  }
  return false;
}

// GetValueBool @ 14d46eac0

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

bool __thiscall
TraceServices::TTableReader<TraceServices::FFileActivity>::GetValueBool
          (TTableReader<TraceServices::FFileActivity> *this,ulong64 param_1)

{
  int iVar1;
  FColumnValueContainer FVar2;
  
  if (this->CurrentRow == (FFileActivity *)0x0) {
    return false;
  }
  iVar1 = (**(code **)(this->Layout->_padding_ + 0x18))();
  if (iVar1 == 1) {
    FVar2 = TTableLayout<TraceServices::FFileActivity>::GetColumnValue
                      (this->Layout,(FFileActivity *)&stack0x00000008,(ulong64)this->CurrentRow);
    return (bool)*(undefined1 *)FVar2.field0_0x0;
  }
  if (iVar1 == 2) {
    FVar2 = TTableLayout<TraceServices::FFileActivity>::GetColumnValue
                      (this->Layout,(FFileActivity *)&stack0x00000008,(ulong64)this->CurrentRow);
    return *(longlong *)FVar2.field0_0x0 != 0;
  }
  if (iVar1 == 3) {
    FVar2 = TTableLayout<TraceServices::FFileActivity>::GetColumnValue
                      (this->Layout,(FFileActivity *)&stack0x00000008,(ulong64)this->CurrentRow);
    if (*(float *)FVar2.field0_0x0 != 0.0) {
      return true;
    }
  }
  else {
    if (iVar1 != 4) {
      return false;
    }
    FVar2 = TTableLayout<TraceServices::FFileActivity>::GetColumnValue
                      (this->Layout,(FFileActivity *)&stack0x00000008,(ulong64)this->CurrentRow);
    if (*(double *)FVar2.field0_0x0 != 0.0) {
      return true;
    }
  }
  return false;
}

// GetValueBool @ 14d46ebc0

bool __thiscall
TraceServices::TTableReader<TraceServices::FLoadRequest>::GetValueBool
          (TTableReader<TraceServices::FLoadRequest> *this,ulong64 param_1)

{
  int iVar1;
  FColumnValueContainer FVar2;
  
  if (this->CurrentRow == (FLoadRequest *)0x0) {
    return false;
  }
  iVar1 = (**(code **)(this->Layout->_padding_ + 0x18))();
  if (iVar1 == 1) {
    FVar2 = TTableLayout<TraceServices::FLoadRequest>::GetColumnValue
                      (this->Layout,(FLoadRequest *)&stack0x00000008,(ulong64)this->CurrentRow);
    return (bool)*(undefined1 *)FVar2.field0_0x0;
  }
  if (iVar1 == 2) {
    FVar2 = TTableLayout<TraceServices::FLoadRequest>::GetColumnValue
                      (this->Layout,(FLoadRequest *)&stack0x00000008,(ulong64)this->CurrentRow);
    return *(longlong *)FVar2.field0_0x0 != 0;
  }
  if (iVar1 == 3) {
    FVar2 = TTableLayout<TraceServices::FLoadRequest>::GetColumnValue
                      (this->Layout,(FLoadRequest *)&stack0x00000008,(ulong64)this->CurrentRow);
    if (*(float *)FVar2.field0_0x0 != 0.0) {
      return true;
    }
  }
  else {
    if (iVar1 != 4) {
      return false;
    }
    FVar2 = TTableLayout<TraceServices::FLoadRequest>::GetColumnValue
                      (this->Layout,(FLoadRequest *)&stack0x00000008,(ulong64)this->CurrentRow);
    if (*(double *)FVar2.field0_0x0 != 0.0) {
      return true;
    }
  }
  return false;
}

// GetValueBool @ 14d46ecc0

bool __thiscall
TraceServices::TTableReader<TraceServices::FLoadTimeProfilerAggregatedStats>::GetValueBool
          (TTableReader<TraceServices::FLoadTimeProfilerAggregatedStats> *this,ulong64 param_1)

{
  int iVar1;
  FColumnValueContainer FVar2;
  
  if (this->CurrentRow == (FLoadTimeProfilerAggregatedStats *)0x0) {
    return false;
  }
  iVar1 = (**(code **)(this->Layout->_padding_ + 0x18))();
  if (iVar1 == 1) {
    FVar2 = TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::GetColumnValue
                      (this->Layout,(FLoadTimeProfilerAggregatedStats *)&stack0x00000008,
                       (ulong64)this->CurrentRow);
    return (bool)*(undefined1 *)FVar2.field0_0x0;
  }
  if (iVar1 == 2) {
    FVar2 = TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::GetColumnValue
                      (this->Layout,(FLoadTimeProfilerAggregatedStats *)&stack0x00000008,
                       (ulong64)this->CurrentRow);
    return *(longlong *)FVar2.field0_0x0 != 0;
  }
  if (iVar1 == 3) {
    FVar2 = TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::GetColumnValue
                      (this->Layout,(FLoadTimeProfilerAggregatedStats *)&stack0x00000008,
                       (ulong64)this->CurrentRow);
    if (*(float *)FVar2.field0_0x0 != 0.0) {
      return true;
    }
  }
  else {
    if (iVar1 != 4) {
      return false;
    }
    FVar2 = TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::GetColumnValue
                      (this->Layout,(FLoadTimeProfilerAggregatedStats *)&stack0x00000008,
                       (ulong64)this->CurrentRow);
    if (*(double *)FVar2.field0_0x0 != 0.0) {
      return true;
    }
  }
  return false;
}

// GetValueBool @ 14d46edc0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TraceServices::TTableReader<TraceServices::FLogMessageInternal>::GetValueBool
          (TTableReader<TraceServices::FLogMessageInternal> *this,ulong64 param_1)

{
  int iVar1;
  FColumnValueContainer FVar2;
  
  if (this->CurrentRow == (FLogMessageInternal *)0x0) {
    return false;
  }
  iVar1 = (**(code **)(this->Layout->_padding_ + 0x18))();
  if (iVar1 == 1) {
    FVar2 = TTableLayout<TraceServices::FLogMessageInternal>::GetColumnValue
                      (this->Layout,(FLogMessageInternal *)&stack0x00000008,
                       (ulong64)this->CurrentRow);
    return (bool)*(undefined1 *)FVar2.field0_0x0;
  }
  if (iVar1 == 2) {
    FVar2 = TTableLayout<TraceServices::FLogMessageInternal>::GetColumnValue
                      (this->Layout,(FLogMessageInternal *)&stack0x00000008,
                       (ulong64)this->CurrentRow);
    return *(longlong *)FVar2.field0_0x0 != 0;
  }
  if (iVar1 == 3) {
    FVar2 = TTableLayout<TraceServices::FLogMessageInternal>::GetColumnValue
                      (this->Layout,(FLogMessageInternal *)&stack0x00000008,
                       (ulong64)this->CurrentRow);
    if (*(float *)FVar2.field0_0x0 != 0.0) {
      return true;
    }
  }
  else {
    if (iVar1 != 4) {
      return false;
    }
    FVar2 = TTableLayout<TraceServices::FLogMessageInternal>::GetColumnValue
                      (this->Layout,(FLogMessageInternal *)&stack0x00000008,
                       (ulong64)this->CurrentRow);
    if (*(double *)FVar2.field0_0x0 != 0.0) {
      return true;
    }
  }
  return false;
}

// GetValueBool @ 14d46eec0

bool __thiscall
TraceServices::TTableReader<TraceServices::FNetProfilerAggregatedStats>::GetValueBool
          (TTableReader<TraceServices::FNetProfilerAggregatedStats> *this,ulong64 param_1)

{
  int iVar1;
  FColumnValueContainer FVar2;
  
  if (this->CurrentRow == (FNetProfilerAggregatedStats *)0x0) {
    return false;
  }
  iVar1 = (**(code **)(this->Layout->_padding_ + 0x18))();
  if (iVar1 == 1) {
    FVar2 = TTableLayout<TraceServices::FNetProfilerAggregatedStats>::GetColumnValue
                      (this->Layout,(FNetProfilerAggregatedStats *)&stack0x00000008,
                       (ulong64)this->CurrentRow);
    return (bool)*(undefined1 *)FVar2.field0_0x0;
  }
  if (iVar1 == 2) {
    FVar2 = TTableLayout<TraceServices::FNetProfilerAggregatedStats>::GetColumnValue
                      (this->Layout,(FNetProfilerAggregatedStats *)&stack0x00000008,
                       (ulong64)this->CurrentRow);
    return *(longlong *)FVar2.field0_0x0 != 0;
  }
  if (iVar1 == 3) {
    FVar2 = TTableLayout<TraceServices::FNetProfilerAggregatedStats>::GetColumnValue
                      (this->Layout,(FNetProfilerAggregatedStats *)&stack0x00000008,
                       (ulong64)this->CurrentRow);
    if (*(float *)FVar2.field0_0x0 != 0.0) {
      return true;
    }
  }
  else {
    if (iVar1 != 4) {
      return false;
    }
    FVar2 = TTableLayout<TraceServices::FNetProfilerAggregatedStats>::GetColumnValue
                      (this->Layout,(FNetProfilerAggregatedStats *)&stack0x00000008,
                       (ulong64)this->CurrentRow);
    if (*(double *)FVar2.field0_0x0 != 0.0) {
      return true;
    }
  }
  return false;
}

// GetValueBool @ 14d46efc0

bool __thiscall
TraceServices::TTableReader<TraceServices::FNetProfilerAggregatedStatsCounterStats>::GetValueBool
          (TTableReader<TraceServices::FNetProfilerAggregatedStatsCounterStats> *this,
          ulong64 param_1)

{
  int iVar1;
  FColumnValueContainer FVar2;
  
  if (this->CurrentRow == (FNetProfilerAggregatedStatsCounterStats *)0x0) {
    return false;
  }
  iVar1 = (**(code **)(this->Layout->_padding_ + 0x18))();
  if (iVar1 == 1) {
    FVar2 = TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats>::GetColumnValue
                      (this->Layout,(FNetProfilerAggregatedStatsCounterStats *)&stack0x00000008,
                       (ulong64)this->CurrentRow);
    return (bool)*(undefined1 *)FVar2.field0_0x0;
  }
  if (iVar1 == 2) {
    FVar2 = TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats>::GetColumnValue
                      (this->Layout,(FNetProfilerAggregatedStatsCounterStats *)&stack0x00000008,
                       (ulong64)this->CurrentRow);
    return *(longlong *)FVar2.field0_0x0 != 0;
  }
  if (iVar1 == 3) {
    FVar2 = TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats>::GetColumnValue
                      (this->Layout,(FNetProfilerAggregatedStatsCounterStats *)&stack0x00000008,
                       (ulong64)this->CurrentRow);
    if (*(float *)FVar2.field0_0x0 != 0.0) {
      return true;
    }
  }
  else {
    if (iVar1 != 4) {
      return false;
    }
    FVar2 = TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats>::GetColumnValue
                      (this->Layout,(FNetProfilerAggregatedStatsCounterStats *)&stack0x00000008,
                       (ulong64)this->CurrentRow);
    if (*(double *)FVar2.field0_0x0 != 0.0) {
      return true;
    }
  }
  return false;
}

// GetValueBool @ 14d46f0c0

bool __thiscall
TraceServices::TTableReader<TraceServices::FPackagesTableRow>::GetValueBool
          (TTableReader<TraceServices::FPackagesTableRow> *this,ulong64 param_1)

{
  int iVar1;
  FColumnValueContainer FVar2;
  
  if (this->CurrentRow == (FPackagesTableRow *)0x0) {
    return false;
  }
  iVar1 = (**(code **)(this->Layout->_padding_ + 0x18))();
  if (iVar1 == 1) {
    FVar2 = TTableLayout<TraceServices::FPackagesTableRow>::GetColumnValue
                      (this->Layout,(FPackagesTableRow *)&stack0x00000008,(ulong64)this->CurrentRow)
    ;
    return (bool)*(undefined1 *)FVar2.field0_0x0;
  }
  if (iVar1 == 2) {
    FVar2 = TTableLayout<TraceServices::FPackagesTableRow>::GetColumnValue
                      (this->Layout,(FPackagesTableRow *)&stack0x00000008,(ulong64)this->CurrentRow)
    ;
    return *(longlong *)FVar2.field0_0x0 != 0;
  }
  if (iVar1 == 3) {
    FVar2 = TTableLayout<TraceServices::FPackagesTableRow>::GetColumnValue
                      (this->Layout,(FPackagesTableRow *)&stack0x00000008,(ulong64)this->CurrentRow)
    ;
    if (*(float *)FVar2.field0_0x0 != 0.0) {
      return true;
    }
  }
  else {
    if (iVar1 != 4) {
      return false;
    }
    FVar2 = TTableLayout<TraceServices::FPackagesTableRow>::GetColumnValue
                      (this->Layout,(FPackagesTableRow *)&stack0x00000008,(ulong64)this->CurrentRow)
    ;
    if (*(double *)FVar2.field0_0x0 != 0.0) {
      return true;
    }
  }
  return false;
}

// GetValueBool @ 14d46f1c0

bool __thiscall
TraceServices::TTableReader<TraceServices::FRequestsTableRow>::GetValueBool
          (TTableReader<TraceServices::FRequestsTableRow> *this,ulong64 param_1)

{
  int iVar1;
  FColumnValueContainer FVar2;
  
  if (this->CurrentRow == (FRequestsTableRow *)0x0) {
    return false;
  }
  iVar1 = (**(code **)(this->Layout->_padding_ + 0x18))();
  if (iVar1 == 1) {
    FVar2 = TTableLayout<TraceServices::FRequestsTableRow>::GetColumnValue
                      (this->Layout,(FRequestsTableRow *)&stack0x00000008,(ulong64)this->CurrentRow)
    ;
    return (bool)*(undefined1 *)FVar2.field0_0x0;
  }
  if (iVar1 == 2) {
    FVar2 = TTableLayout<TraceServices::FRequestsTableRow>::GetColumnValue
                      (this->Layout,(FRequestsTableRow *)&stack0x00000008,(ulong64)this->CurrentRow)
    ;
    return *(longlong *)FVar2.field0_0x0 != 0;
  }
  if (iVar1 == 3) {
    FVar2 = TTableLayout<TraceServices::FRequestsTableRow>::GetColumnValue
                      (this->Layout,(FRequestsTableRow *)&stack0x00000008,(ulong64)this->CurrentRow)
    ;
    if (*(float *)FVar2.field0_0x0 != 0.0) {
      return true;
    }
  }
  else {
    if (iVar1 != 4) {
      return false;
    }
    FVar2 = TTableLayout<TraceServices::FRequestsTableRow>::GetColumnValue
                      (this->Layout,(FRequestsTableRow *)&stack0x00000008,(ulong64)this->CurrentRow)
    ;
    if (*(double *)FVar2.field0_0x0 != 0.0) {
      return true;
    }
  }
  return false;
}

// GetValueBool @ 14d46f2c0

/* WARNING: Enum "ETimingProfilerTimerType": Some values do not have unique names */

bool __thiscall
TraceServices::TTableReader<TraceServices::FTimingProfilerAggregatedStats>::GetValueBool
          (TTableReader<TraceServices::FTimingProfilerAggregatedStats> *this,ulong64 param_1)

{
  int iVar1;
  FColumnValueContainer FVar2;
  
  if (this->CurrentRow == (FTimingProfilerAggregatedStats *)0x0) {
    return false;
  }
  iVar1 = (**(code **)(this->Layout->_padding_ + 0x18))();
  if (iVar1 == 1) {
    FVar2 = TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::GetColumnValue
                      (this->Layout,(FTimingProfilerAggregatedStats *)&stack0x00000008,
                       (ulong64)this->CurrentRow);
    return (bool)*(undefined1 *)FVar2.field0_0x0;
  }
  if (iVar1 == 2) {
    FVar2 = TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::GetColumnValue
                      (this->Layout,(FTimingProfilerAggregatedStats *)&stack0x00000008,
                       (ulong64)this->CurrentRow);
    return *(longlong *)FVar2.field0_0x0 != 0;
  }
  if (iVar1 == 3) {
    FVar2 = TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::GetColumnValue
                      (this->Layout,(FTimingProfilerAggregatedStats *)&stack0x00000008,
                       (ulong64)this->CurrentRow);
    if (*(float *)FVar2.field0_0x0 != 0.0) {
      return true;
    }
  }
  else {
    if (iVar1 != 4) {
      return false;
    }
    FVar2 = TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::GetColumnValue
                      (this->Layout,(FTimingProfilerAggregatedStats *)&stack0x00000008,
                       (ulong64)this->CurrentRow);
    if (*(double *)FVar2.field0_0x0 != 0.0) {
      return true;
    }
  }
  return false;
}

// GetValueBool @ 14d46f3c0

bool __thiscall
TraceServices::TTableReader<TraceServices::FImportTableRow>::GetValueBool
          (TTableReader<TraceServices::FImportTableRow> *this,ulong64 param_1)

{
  int iVar1;
  FColumnValueContainer FVar2;
  
  if (this->CurrentRow == (FImportTableRow *)0x0) {
    return false;
  }
  iVar1 = (**(code **)(this->Layout->_padding_ + 0x18))();
  if (iVar1 == 1) {
    FVar2 = TTableLayout<TraceServices::FImportTableRow>::GetColumnValue
                      (this->Layout,(FImportTableRow *)&stack0x00000008,(ulong64)this->CurrentRow);
    return (bool)*(undefined1 *)FVar2.field0_0x0;
  }
  if (iVar1 == 2) {
    FVar2 = TTableLayout<TraceServices::FImportTableRow>::GetColumnValue
                      (this->Layout,(FImportTableRow *)&stack0x00000008,(ulong64)this->CurrentRow);
    return *(longlong *)FVar2.field0_0x0 != 0;
  }
  if (iVar1 == 3) {
    FVar2 = TTableLayout<TraceServices::FImportTableRow>::GetColumnValue
                      (this->Layout,(FImportTableRow *)&stack0x00000008,(ulong64)this->CurrentRow);
    if (*(float *)FVar2.field0_0x0 != 0.0) {
      return true;
    }
  }
  else {
    if (iVar1 != 4) {
      return false;
    }
    FVar2 = TTableLayout<TraceServices::FImportTableRow>::GetColumnValue
                      (this->Layout,(FImportTableRow *)&stack0x00000008,(ulong64)this->CurrentRow);
    if (*(double *)FVar2.field0_0x0 != 0.0) {
      return true;
    }
  }
  return false;
}

// GetValueCString @ 14d46f4d0

wchar_t * __thiscall
TraceServices::TTableReader<TraceServices::FExportsTableRow>::GetValueCString
          (TTableReader<TraceServices::FExportsTableRow> *this,ulong64 param_1)

{
  int iVar1;
  FColumnValueContainer FVar2;
  wchar_t *pwVar3;
  
  if (this->CurrentRow != (FExportsTableRow *)0x0) {
    iVar1 = (**(code **)(this->Layout->_padding_ + 0x18))();
    if (iVar1 == 5) {
      FVar2 = TTableLayout<TraceServices::FExportsTableRow>::GetColumnValue
                        (this->Layout,(FExportsTableRow *)&stack0x00000008,(ulong64)this->CurrentRow
                        );
      pwVar3 = L"";
      if (*(wchar_t **)FVar2.field0_0x0 != (wchar_t *)0x0) {
        pwVar3 = *(wchar_t **)FVar2.field0_0x0;
      }
      return pwVar3;
    }
  }
  return L"";
}

// GetValueCString @ 14d46f540

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

wchar_t * __thiscall
TraceServices::TTableReader<TraceServices::FFileActivity>::GetValueCString
          (TTableReader<TraceServices::FFileActivity> *this,ulong64 param_1)

{
  int iVar1;
  FColumnValueContainer FVar2;
  wchar_t *pwVar3;
  
  if (this->CurrentRow != (FFileActivity *)0x0) {
    iVar1 = (**(code **)(this->Layout->_padding_ + 0x18))();
    if (iVar1 == 5) {
      FVar2 = TTableLayout<TraceServices::FFileActivity>::GetColumnValue
                        (this->Layout,(FFileActivity *)&stack0x00000008,(ulong64)this->CurrentRow);
      pwVar3 = L"";
      if (*(wchar_t **)FVar2.field0_0x0 != (wchar_t *)0x0) {
        pwVar3 = *(wchar_t **)FVar2.field0_0x0;
      }
      return pwVar3;
    }
  }
  return L"";
}

// GetValueCString @ 14d46f5b0

wchar_t * __thiscall
TraceServices::TTableReader<TraceServices::FLoadRequest>::GetValueCString
          (TTableReader<TraceServices::FLoadRequest> *this,ulong64 param_1)

{
  int iVar1;
  FColumnValueContainer FVar2;
  wchar_t *pwVar3;
  
  if (this->CurrentRow != (FLoadRequest *)0x0) {
    iVar1 = (**(code **)(this->Layout->_padding_ + 0x18))();
    if (iVar1 == 5) {
      FVar2 = TTableLayout<TraceServices::FLoadRequest>::GetColumnValue
                        (this->Layout,(FLoadRequest *)&stack0x00000008,(ulong64)this->CurrentRow);
      pwVar3 = L"";
      if (*(wchar_t **)FVar2.field0_0x0 != (wchar_t *)0x0) {
        pwVar3 = *(wchar_t **)FVar2.field0_0x0;
      }
      return pwVar3;
    }
  }
  return L"";
}

// GetValueCString @ 14d46f620

wchar_t * __thiscall
TraceServices::TTableReader<TraceServices::FLoadTimeProfilerAggregatedStats>::GetValueCString
          (TTableReader<TraceServices::FLoadTimeProfilerAggregatedStats> *this,ulong64 param_1)

{
  int iVar1;
  FColumnValueContainer FVar2;
  wchar_t *pwVar3;
  
  if (this->CurrentRow != (FLoadTimeProfilerAggregatedStats *)0x0) {
    iVar1 = (**(code **)(this->Layout->_padding_ + 0x18))();
    if (iVar1 == 5) {
      FVar2 = TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::GetColumnValue
                        (this->Layout,(FLoadTimeProfilerAggregatedStats *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      pwVar3 = L"";
      if (*(wchar_t **)FVar2.field0_0x0 != (wchar_t *)0x0) {
        pwVar3 = *(wchar_t **)FVar2.field0_0x0;
      }
      return pwVar3;
    }
  }
  return L"";
}

// GetValueCString @ 14d46f690

/* WARNING: Enum "Type": Some values do not have unique names */

wchar_t * __thiscall
TraceServices::TTableReader<TraceServices::FLogMessageInternal>::GetValueCString
          (TTableReader<TraceServices::FLogMessageInternal> *this,ulong64 param_1)

{
  int iVar1;
  FColumnValueContainer FVar2;
  wchar_t *pwVar3;
  
  if (this->CurrentRow != (FLogMessageInternal *)0x0) {
    iVar1 = (**(code **)(this->Layout->_padding_ + 0x18))();
    if (iVar1 == 5) {
      FVar2 = TTableLayout<TraceServices::FLogMessageInternal>::GetColumnValue
                        (this->Layout,(FLogMessageInternal *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      pwVar3 = L"";
      if (*(wchar_t **)FVar2.field0_0x0 != (wchar_t *)0x0) {
        pwVar3 = *(wchar_t **)FVar2.field0_0x0;
      }
      return pwVar3;
    }
  }
  return L"";
}

// GetValueCString @ 14d46f700

wchar_t * __thiscall
TraceServices::TTableReader<TraceServices::FNetProfilerAggregatedStats>::GetValueCString
          (TTableReader<TraceServices::FNetProfilerAggregatedStats> *this,ulong64 param_1)

{
  int iVar1;
  FColumnValueContainer FVar2;
  wchar_t *pwVar3;
  
  if (this->CurrentRow != (FNetProfilerAggregatedStats *)0x0) {
    iVar1 = (**(code **)(this->Layout->_padding_ + 0x18))();
    if (iVar1 == 5) {
      FVar2 = TTableLayout<TraceServices::FNetProfilerAggregatedStats>::GetColumnValue
                        (this->Layout,(FNetProfilerAggregatedStats *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      pwVar3 = L"";
      if (*(wchar_t **)FVar2.field0_0x0 != (wchar_t *)0x0) {
        pwVar3 = *(wchar_t **)FVar2.field0_0x0;
      }
      return pwVar3;
    }
  }
  return L"";
}

// GetValueCString @ 14d46f770

wchar_t * __thiscall
TraceServices::TTableReader<TraceServices::FNetProfilerAggregatedStatsCounterStats>::GetValueCString
          (TTableReader<TraceServices::FNetProfilerAggregatedStatsCounterStats> *this,
          ulong64 param_1)

{
  int iVar1;
  FColumnValueContainer FVar2;
  wchar_t *pwVar3;
  
  if (this->CurrentRow != (FNetProfilerAggregatedStatsCounterStats *)0x0) {
    iVar1 = (**(code **)(this->Layout->_padding_ + 0x18))();
    if (iVar1 == 5) {
      FVar2 = TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats>::GetColumnValue
                        (this->Layout,(FNetProfilerAggregatedStatsCounterStats *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      pwVar3 = L"";
      if (*(wchar_t **)FVar2.field0_0x0 != (wchar_t *)0x0) {
        pwVar3 = *(wchar_t **)FVar2.field0_0x0;
      }
      return pwVar3;
    }
  }
  return L"";
}

// GetValueCString @ 14d46f7e0

wchar_t * __thiscall
TraceServices::TTableReader<TraceServices::FPackagesTableRow>::GetValueCString
          (TTableReader<TraceServices::FPackagesTableRow> *this,ulong64 param_1)

{
  int iVar1;
  FColumnValueContainer FVar2;
  wchar_t *pwVar3;
  
  if (this->CurrentRow != (FPackagesTableRow *)0x0) {
    iVar1 = (**(code **)(this->Layout->_padding_ + 0x18))();
    if (iVar1 == 5) {
      FVar2 = TTableLayout<TraceServices::FPackagesTableRow>::GetColumnValue
                        (this->Layout,(FPackagesTableRow *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      pwVar3 = L"";
      if (*(wchar_t **)FVar2.field0_0x0 != (wchar_t *)0x0) {
        pwVar3 = *(wchar_t **)FVar2.field0_0x0;
      }
      return pwVar3;
    }
  }
  return L"";
}

// GetValueCString @ 14d46f850

wchar_t * __thiscall
TraceServices::TTableReader<TraceServices::FRequestsTableRow>::GetValueCString
          (TTableReader<TraceServices::FRequestsTableRow> *this,ulong64 param_1)

{
  int iVar1;
  FColumnValueContainer FVar2;
  wchar_t *pwVar3;
  
  if (this->CurrentRow != (FRequestsTableRow *)0x0) {
    iVar1 = (**(code **)(this->Layout->_padding_ + 0x18))();
    if (iVar1 == 5) {
      FVar2 = TTableLayout<TraceServices::FRequestsTableRow>::GetColumnValue
                        (this->Layout,(FRequestsTableRow *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      pwVar3 = L"";
      if (*(wchar_t **)FVar2.field0_0x0 != (wchar_t *)0x0) {
        pwVar3 = *(wchar_t **)FVar2.field0_0x0;
      }
      return pwVar3;
    }
  }
  return L"";
}

// GetValueCString @ 14d46f8c0

/* WARNING: Enum "ETimingProfilerTimerType": Some values do not have unique names */

wchar_t * __thiscall
TraceServices::TTableReader<TraceServices::FTimingProfilerAggregatedStats>::GetValueCString
          (TTableReader<TraceServices::FTimingProfilerAggregatedStats> *this,ulong64 param_1)

{
  int iVar1;
  FColumnValueContainer FVar2;
  wchar_t *pwVar3;
  
  if (this->CurrentRow != (FTimingProfilerAggregatedStats *)0x0) {
    iVar1 = (**(code **)(this->Layout->_padding_ + 0x18))();
    if (iVar1 == 5) {
      FVar2 = TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::GetColumnValue
                        (this->Layout,(FTimingProfilerAggregatedStats *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      pwVar3 = L"";
      if (*(wchar_t **)FVar2.field0_0x0 != (wchar_t *)0x0) {
        pwVar3 = *(wchar_t **)FVar2.field0_0x0;
      }
      return pwVar3;
    }
  }
  return L"";
}

// GetValueCString @ 14d46f930

wchar_t * __thiscall
TraceServices::TTableReader<TraceServices::FImportTableRow>::GetValueCString
          (TTableReader<TraceServices::FImportTableRow> *this,ulong64 param_1)

{
  int iVar1;
  FColumnValueContainer FVar2;
  wchar_t *pwVar3;
  
  if (this->CurrentRow != (FImportTableRow *)0x0) {
    iVar1 = (**(code **)(this->Layout->_padding_ + 0x18))();
    if (iVar1 == 5) {
      FVar2 = TTableLayout<TraceServices::FImportTableRow>::GetColumnValue
                        (this->Layout,(FImportTableRow *)&stack0x00000008,(ulong64)this->CurrentRow)
      ;
      pwVar3 = L"";
      if (*(wchar_t **)FVar2.field0_0x0 != (wchar_t *)0x0) {
        pwVar3 = *(wchar_t **)FVar2.field0_0x0;
      }
      return pwVar3;
    }
  }
  return L"";
}

// GetValueDouble @ 14d46fa30

double __thiscall
TraceServices::TTableReader<TraceServices::FExportsTableRow>::GetValueDouble
          (TTableReader<TraceServices::FExportsTableRow> *this,ulong64 param_1)

{
  int iVar1;
  FColumnValueContainer FVar2;
  
  if (this->CurrentRow != (FExportsTableRow *)0x0) {
    iVar1 = (**(code **)(this->Layout->_padding_ + 0x18))();
    if (iVar1 == 1) {
      FVar2 = TTableLayout<TraceServices::FExportsTableRow>::GetColumnValue
                        (this->Layout,(FExportsTableRow *)&stack0x00000008,(ulong64)this->CurrentRow
                        );
      return (double)*(byte *)FVar2.field0_0x0;
    }
    if (iVar1 == 2) {
      FVar2 = TTableLayout<TraceServices::FExportsTableRow>::GetColumnValue
                        (this->Layout,(FExportsTableRow *)&stack0x00000008,(ulong64)this->CurrentRow
                        );
      return (double)*(longlong *)FVar2.field0_0x0;
    }
    if (iVar1 == 3) {
      FVar2 = TTableLayout<TraceServices::FExportsTableRow>::GetColumnValue
                        (this->Layout,(FExportsTableRow *)&stack0x00000008,(ulong64)this->CurrentRow
                        );
      return (double)*(float *)FVar2.field0_0x0;
    }
    if (iVar1 == 4) {
      FVar2 = TTableLayout<TraceServices::FExportsTableRow>::GetColumnValue
                        (this->Layout,(FExportsTableRow *)&stack0x00000008,(ulong64)this->CurrentRow
                        );
      return *(double *)FVar2.field0_0x0;
    }
  }
  return 0.0;
}

// GetValueDouble @ 14d46fb20

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

double __thiscall
TraceServices::TTableReader<TraceServices::FFileActivity>::GetValueDouble
          (TTableReader<TraceServices::FFileActivity> *this,ulong64 param_1)

{
  int iVar1;
  FColumnValueContainer FVar2;
  
  if (this->CurrentRow != (FFileActivity *)0x0) {
    iVar1 = (**(code **)(this->Layout->_padding_ + 0x18))();
    if (iVar1 == 1) {
      FVar2 = TTableLayout<TraceServices::FFileActivity>::GetColumnValue
                        (this->Layout,(FFileActivity *)&stack0x00000008,(ulong64)this->CurrentRow);
      return (double)*(byte *)FVar2.field0_0x0;
    }
    if (iVar1 == 2) {
      FVar2 = TTableLayout<TraceServices::FFileActivity>::GetColumnValue
                        (this->Layout,(FFileActivity *)&stack0x00000008,(ulong64)this->CurrentRow);
      return (double)*(longlong *)FVar2.field0_0x0;
    }
    if (iVar1 == 3) {
      FVar2 = TTableLayout<TraceServices::FFileActivity>::GetColumnValue
                        (this->Layout,(FFileActivity *)&stack0x00000008,(ulong64)this->CurrentRow);
      return (double)*(float *)FVar2.field0_0x0;
    }
    if (iVar1 == 4) {
      FVar2 = TTableLayout<TraceServices::FFileActivity>::GetColumnValue
                        (this->Layout,(FFileActivity *)&stack0x00000008,(ulong64)this->CurrentRow);
      return *(double *)FVar2.field0_0x0;
    }
  }
  return 0.0;
}

// GetValueDouble @ 14d46fc10

double __thiscall
TraceServices::TTableReader<TraceServices::FLoadRequest>::GetValueDouble
          (TTableReader<TraceServices::FLoadRequest> *this,ulong64 param_1)

{
  int iVar1;
  FColumnValueContainer FVar2;
  
  if (this->CurrentRow != (FLoadRequest *)0x0) {
    iVar1 = (**(code **)(this->Layout->_padding_ + 0x18))();
    if (iVar1 == 1) {
      FVar2 = TTableLayout<TraceServices::FLoadRequest>::GetColumnValue
                        (this->Layout,(FLoadRequest *)&stack0x00000008,(ulong64)this->CurrentRow);
      return (double)*(byte *)FVar2.field0_0x0;
    }
    if (iVar1 == 2) {
      FVar2 = TTableLayout<TraceServices::FLoadRequest>::GetColumnValue
                        (this->Layout,(FLoadRequest *)&stack0x00000008,(ulong64)this->CurrentRow);
      return (double)*(longlong *)FVar2.field0_0x0;
    }
    if (iVar1 == 3) {
      FVar2 = TTableLayout<TraceServices::FLoadRequest>::GetColumnValue
                        (this->Layout,(FLoadRequest *)&stack0x00000008,(ulong64)this->CurrentRow);
      return (double)*(float *)FVar2.field0_0x0;
    }
    if (iVar1 == 4) {
      FVar2 = TTableLayout<TraceServices::FLoadRequest>::GetColumnValue
                        (this->Layout,(FLoadRequest *)&stack0x00000008,(ulong64)this->CurrentRow);
      return *(double *)FVar2.field0_0x0;
    }
  }
  return 0.0;
}

// GetValueDouble @ 14d46fd00

double __thiscall
TraceServices::TTableReader<TraceServices::FLoadTimeProfilerAggregatedStats>::GetValueDouble
          (TTableReader<TraceServices::FLoadTimeProfilerAggregatedStats> *this,ulong64 param_1)

{
  int iVar1;
  FColumnValueContainer FVar2;
  
  if (this->CurrentRow != (FLoadTimeProfilerAggregatedStats *)0x0) {
    iVar1 = (**(code **)(this->Layout->_padding_ + 0x18))();
    if (iVar1 == 1) {
      FVar2 = TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::GetColumnValue
                        (this->Layout,(FLoadTimeProfilerAggregatedStats *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (double)*(byte *)FVar2.field0_0x0;
    }
    if (iVar1 == 2) {
      FVar2 = TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::GetColumnValue
                        (this->Layout,(FLoadTimeProfilerAggregatedStats *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (double)*(longlong *)FVar2.field0_0x0;
    }
    if (iVar1 == 3) {
      FVar2 = TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::GetColumnValue
                        (this->Layout,(FLoadTimeProfilerAggregatedStats *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (double)*(float *)FVar2.field0_0x0;
    }
    if (iVar1 == 4) {
      FVar2 = TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::GetColumnValue
                        (this->Layout,(FLoadTimeProfilerAggregatedStats *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return *(double *)FVar2.field0_0x0;
    }
  }
  return 0.0;
}

// GetValueDouble @ 14d46fdf0

/* WARNING: Enum "Type": Some values do not have unique names */

double __thiscall
TraceServices::TTableReader<TraceServices::FLogMessageInternal>::GetValueDouble
          (TTableReader<TraceServices::FLogMessageInternal> *this,ulong64 param_1)

{
  int iVar1;
  FColumnValueContainer FVar2;
  
  if (this->CurrentRow != (FLogMessageInternal *)0x0) {
    iVar1 = (**(code **)(this->Layout->_padding_ + 0x18))();
    if (iVar1 == 1) {
      FVar2 = TTableLayout<TraceServices::FLogMessageInternal>::GetColumnValue
                        (this->Layout,(FLogMessageInternal *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (double)*(byte *)FVar2.field0_0x0;
    }
    if (iVar1 == 2) {
      FVar2 = TTableLayout<TraceServices::FLogMessageInternal>::GetColumnValue
                        (this->Layout,(FLogMessageInternal *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (double)*(longlong *)FVar2.field0_0x0;
    }
    if (iVar1 == 3) {
      FVar2 = TTableLayout<TraceServices::FLogMessageInternal>::GetColumnValue
                        (this->Layout,(FLogMessageInternal *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (double)*(float *)FVar2.field0_0x0;
    }
    if (iVar1 == 4) {
      FVar2 = TTableLayout<TraceServices::FLogMessageInternal>::GetColumnValue
                        (this->Layout,(FLogMessageInternal *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return *(double *)FVar2.field0_0x0;
    }
  }
  return 0.0;
}

// GetValueDouble @ 14d46fee0

double __thiscall
TraceServices::TTableReader<TraceServices::FNetProfilerAggregatedStats>::GetValueDouble
          (TTableReader<TraceServices::FNetProfilerAggregatedStats> *this,ulong64 param_1)

{
  int iVar1;
  FColumnValueContainer FVar2;
  
  if (this->CurrentRow != (FNetProfilerAggregatedStats *)0x0) {
    iVar1 = (**(code **)(this->Layout->_padding_ + 0x18))();
    if (iVar1 == 1) {
      FVar2 = TTableLayout<TraceServices::FNetProfilerAggregatedStats>::GetColumnValue
                        (this->Layout,(FNetProfilerAggregatedStats *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (double)*(byte *)FVar2.field0_0x0;
    }
    if (iVar1 == 2) {
      FVar2 = TTableLayout<TraceServices::FNetProfilerAggregatedStats>::GetColumnValue
                        (this->Layout,(FNetProfilerAggregatedStats *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (double)*(longlong *)FVar2.field0_0x0;
    }
    if (iVar1 == 3) {
      FVar2 = TTableLayout<TraceServices::FNetProfilerAggregatedStats>::GetColumnValue
                        (this->Layout,(FNetProfilerAggregatedStats *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (double)*(float *)FVar2.field0_0x0;
    }
    if (iVar1 == 4) {
      FVar2 = TTableLayout<TraceServices::FNetProfilerAggregatedStats>::GetColumnValue
                        (this->Layout,(FNetProfilerAggregatedStats *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return *(double *)FVar2.field0_0x0;
    }
  }
  return 0.0;
}

// GetValueDouble @ 14d46ffd0

double __thiscall
TraceServices::TTableReader<TraceServices::FNetProfilerAggregatedStatsCounterStats>::GetValueDouble
          (TTableReader<TraceServices::FNetProfilerAggregatedStatsCounterStats> *this,
          ulong64 param_1)

{
  int iVar1;
  FColumnValueContainer FVar2;
  
  if (this->CurrentRow != (FNetProfilerAggregatedStatsCounterStats *)0x0) {
    iVar1 = (**(code **)(this->Layout->_padding_ + 0x18))();
    if (iVar1 == 1) {
      FVar2 = TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats>::GetColumnValue
                        (this->Layout,(FNetProfilerAggregatedStatsCounterStats *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (double)*(byte *)FVar2.field0_0x0;
    }
    if (iVar1 == 2) {
      FVar2 = TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats>::GetColumnValue
                        (this->Layout,(FNetProfilerAggregatedStatsCounterStats *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (double)*(longlong *)FVar2.field0_0x0;
    }
    if (iVar1 == 3) {
      FVar2 = TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats>::GetColumnValue
                        (this->Layout,(FNetProfilerAggregatedStatsCounterStats *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (double)*(float *)FVar2.field0_0x0;
    }
    if (iVar1 == 4) {
      FVar2 = TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats>::GetColumnValue
                        (this->Layout,(FNetProfilerAggregatedStatsCounterStats *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return *(double *)FVar2.field0_0x0;
    }
  }
  return 0.0;
}

// GetValueDouble @ 14d4700c0

double __thiscall
TraceServices::TTableReader<TraceServices::FPackagesTableRow>::GetValueDouble
          (TTableReader<TraceServices::FPackagesTableRow> *this,ulong64 param_1)

{
  int iVar1;
  FColumnValueContainer FVar2;
  
  if (this->CurrentRow != (FPackagesTableRow *)0x0) {
    iVar1 = (**(code **)(this->Layout->_padding_ + 0x18))();
    if (iVar1 == 1) {
      FVar2 = TTableLayout<TraceServices::FPackagesTableRow>::GetColumnValue
                        (this->Layout,(FPackagesTableRow *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (double)*(byte *)FVar2.field0_0x0;
    }
    if (iVar1 == 2) {
      FVar2 = TTableLayout<TraceServices::FPackagesTableRow>::GetColumnValue
                        (this->Layout,(FPackagesTableRow *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (double)*(longlong *)FVar2.field0_0x0;
    }
    if (iVar1 == 3) {
      FVar2 = TTableLayout<TraceServices::FPackagesTableRow>::GetColumnValue
                        (this->Layout,(FPackagesTableRow *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (double)*(float *)FVar2.field0_0x0;
    }
    if (iVar1 == 4) {
      FVar2 = TTableLayout<TraceServices::FPackagesTableRow>::GetColumnValue
                        (this->Layout,(FPackagesTableRow *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return *(double *)FVar2.field0_0x0;
    }
  }
  return 0.0;
}

// GetValueDouble @ 14d4701b0

double __thiscall
TraceServices::TTableReader<TraceServices::FRequestsTableRow>::GetValueDouble
          (TTableReader<TraceServices::FRequestsTableRow> *this,ulong64 param_1)

{
  int iVar1;
  FColumnValueContainer FVar2;
  
  if (this->CurrentRow != (FRequestsTableRow *)0x0) {
    iVar1 = (**(code **)(this->Layout->_padding_ + 0x18))();
    if (iVar1 == 1) {
      FVar2 = TTableLayout<TraceServices::FRequestsTableRow>::GetColumnValue
                        (this->Layout,(FRequestsTableRow *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (double)*(byte *)FVar2.field0_0x0;
    }
    if (iVar1 == 2) {
      FVar2 = TTableLayout<TraceServices::FRequestsTableRow>::GetColumnValue
                        (this->Layout,(FRequestsTableRow *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (double)*(longlong *)FVar2.field0_0x0;
    }
    if (iVar1 == 3) {
      FVar2 = TTableLayout<TraceServices::FRequestsTableRow>::GetColumnValue
                        (this->Layout,(FRequestsTableRow *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (double)*(float *)FVar2.field0_0x0;
    }
    if (iVar1 == 4) {
      FVar2 = TTableLayout<TraceServices::FRequestsTableRow>::GetColumnValue
                        (this->Layout,(FRequestsTableRow *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return *(double *)FVar2.field0_0x0;
    }
  }
  return 0.0;
}

// GetValueDouble @ 14d4702a0

/* WARNING: Enum "ETimingProfilerTimerType": Some values do not have unique names */

double __thiscall
TraceServices::TTableReader<TraceServices::FTimingProfilerAggregatedStats>::GetValueDouble
          (TTableReader<TraceServices::FTimingProfilerAggregatedStats> *this,ulong64 param_1)

{
  int iVar1;
  FColumnValueContainer FVar2;
  
  if (this->CurrentRow != (FTimingProfilerAggregatedStats *)0x0) {
    iVar1 = (**(code **)(this->Layout->_padding_ + 0x18))();
    if (iVar1 == 1) {
      FVar2 = TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::GetColumnValue
                        (this->Layout,(FTimingProfilerAggregatedStats *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (double)*(byte *)FVar2.field0_0x0;
    }
    if (iVar1 == 2) {
      FVar2 = TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::GetColumnValue
                        (this->Layout,(FTimingProfilerAggregatedStats *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (double)*(longlong *)FVar2.field0_0x0;
    }
    if (iVar1 == 3) {
      FVar2 = TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::GetColumnValue
                        (this->Layout,(FTimingProfilerAggregatedStats *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (double)*(float *)FVar2.field0_0x0;
    }
    if (iVar1 == 4) {
      FVar2 = TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::GetColumnValue
                        (this->Layout,(FTimingProfilerAggregatedStats *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return *(double *)FVar2.field0_0x0;
    }
  }
  return 0.0;
}

// GetValueDouble @ 14d470390

double __thiscall
TraceServices::TTableReader<TraceServices::FImportTableRow>::GetValueDouble
          (TTableReader<TraceServices::FImportTableRow> *this,ulong64 param_1)

{
  int iVar1;
  FColumnValueContainer FVar2;
  
  if (this->CurrentRow != (FImportTableRow *)0x0) {
    iVar1 = (**(code **)(this->Layout->_padding_ + 0x18))();
    if (iVar1 == 1) {
      FVar2 = TTableLayout<TraceServices::FImportTableRow>::GetColumnValue
                        (this->Layout,(FImportTableRow *)&stack0x00000008,(ulong64)this->CurrentRow)
      ;
      return (double)*(byte *)FVar2.field0_0x0;
    }
    if (iVar1 == 2) {
      FVar2 = TTableLayout<TraceServices::FImportTableRow>::GetColumnValue
                        (this->Layout,(FImportTableRow *)&stack0x00000008,(ulong64)this->CurrentRow)
      ;
      return (double)*(longlong *)FVar2.field0_0x0;
    }
    if (iVar1 == 3) {
      FVar2 = TTableLayout<TraceServices::FImportTableRow>::GetColumnValue
                        (this->Layout,(FImportTableRow *)&stack0x00000008,(ulong64)this->CurrentRow)
      ;
      return (double)*(float *)FVar2.field0_0x0;
    }
    if (iVar1 == 4) {
      FVar2 = TTableLayout<TraceServices::FImportTableRow>::GetColumnValue
                        (this->Layout,(FImportTableRow *)&stack0x00000008,(ulong64)this->CurrentRow)
      ;
      return *(double *)FVar2.field0_0x0;
    }
  }
  return 0.0;
}

// GetValueFloat @ 14d4704b0

float __thiscall
TraceServices::TTableReader<TraceServices::FExportsTableRow>::GetValueFloat
          (TTableReader<TraceServices::FExportsTableRow> *this,ulong64 param_1)

{
  int iVar1;
  FColumnValueContainer FVar2;
  
  if (this->CurrentRow != (FExportsTableRow *)0x0) {
    iVar1 = (**(code **)(this->Layout->_padding_ + 0x18))();
    if (iVar1 == 1) {
      FVar2 = TTableLayout<TraceServices::FExportsTableRow>::GetColumnValue
                        (this->Layout,(FExportsTableRow *)&stack0x00000008,(ulong64)this->CurrentRow
                        );
      return (float)*(byte *)FVar2.field0_0x0;
    }
    if (iVar1 == 2) {
      FVar2 = TTableLayout<TraceServices::FExportsTableRow>::GetColumnValue
                        (this->Layout,(FExportsTableRow *)&stack0x00000008,(ulong64)this->CurrentRow
                        );
      return (float)*(longlong *)FVar2.field0_0x0;
    }
    if (iVar1 == 3) {
      FVar2 = TTableLayout<TraceServices::FExportsTableRow>::GetColumnValue
                        (this->Layout,(FExportsTableRow *)&stack0x00000008,(ulong64)this->CurrentRow
                        );
      return *(float *)FVar2.field0_0x0;
    }
    if (iVar1 == 4) {
      FVar2 = TTableLayout<TraceServices::FExportsTableRow>::GetColumnValue
                        (this->Layout,(FExportsTableRow *)&stack0x00000008,(ulong64)this->CurrentRow
                        );
      return (float)*(double *)FVar2.field0_0x0;
    }
  }
  return 0.0;
}

// GetValueFloat @ 14d4705a0

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

float __thiscall
TraceServices::TTableReader<TraceServices::FFileActivity>::GetValueFloat
          (TTableReader<TraceServices::FFileActivity> *this,ulong64 param_1)

{
  int iVar1;
  FColumnValueContainer FVar2;
  
  if (this->CurrentRow != (FFileActivity *)0x0) {
    iVar1 = (**(code **)(this->Layout->_padding_ + 0x18))();
    if (iVar1 == 1) {
      FVar2 = TTableLayout<TraceServices::FFileActivity>::GetColumnValue
                        (this->Layout,(FFileActivity *)&stack0x00000008,(ulong64)this->CurrentRow);
      return (float)*(byte *)FVar2.field0_0x0;
    }
    if (iVar1 == 2) {
      FVar2 = TTableLayout<TraceServices::FFileActivity>::GetColumnValue
                        (this->Layout,(FFileActivity *)&stack0x00000008,(ulong64)this->CurrentRow);
      return (float)*(longlong *)FVar2.field0_0x0;
    }
    if (iVar1 == 3) {
      FVar2 = TTableLayout<TraceServices::FFileActivity>::GetColumnValue
                        (this->Layout,(FFileActivity *)&stack0x00000008,(ulong64)this->CurrentRow);
      return *(float *)FVar2.field0_0x0;
    }
    if (iVar1 == 4) {
      FVar2 = TTableLayout<TraceServices::FFileActivity>::GetColumnValue
                        (this->Layout,(FFileActivity *)&stack0x00000008,(ulong64)this->CurrentRow);
      return (float)*(double *)FVar2.field0_0x0;
    }
  }
  return 0.0;
}

// GetValueFloat @ 14d470690

float __thiscall
TraceServices::TTableReader<TraceServices::FLoadRequest>::GetValueFloat
          (TTableReader<TraceServices::FLoadRequest> *this,ulong64 param_1)

{
  int iVar1;
  FColumnValueContainer FVar2;
  
  if (this->CurrentRow != (FLoadRequest *)0x0) {
    iVar1 = (**(code **)(this->Layout->_padding_ + 0x18))();
    if (iVar1 == 1) {
      FVar2 = TTableLayout<TraceServices::FLoadRequest>::GetColumnValue
                        (this->Layout,(FLoadRequest *)&stack0x00000008,(ulong64)this->CurrentRow);
      return (float)*(byte *)FVar2.field0_0x0;
    }
    if (iVar1 == 2) {
      FVar2 = TTableLayout<TraceServices::FLoadRequest>::GetColumnValue
                        (this->Layout,(FLoadRequest *)&stack0x00000008,(ulong64)this->CurrentRow);
      return (float)*(longlong *)FVar2.field0_0x0;
    }
    if (iVar1 == 3) {
      FVar2 = TTableLayout<TraceServices::FLoadRequest>::GetColumnValue
                        (this->Layout,(FLoadRequest *)&stack0x00000008,(ulong64)this->CurrentRow);
      return *(float *)FVar2.field0_0x0;
    }
    if (iVar1 == 4) {
      FVar2 = TTableLayout<TraceServices::FLoadRequest>::GetColumnValue
                        (this->Layout,(FLoadRequest *)&stack0x00000008,(ulong64)this->CurrentRow);
      return (float)*(double *)FVar2.field0_0x0;
    }
  }
  return 0.0;
}

// GetValueFloat @ 14d470780

float __thiscall
TraceServices::TTableReader<TraceServices::FLoadTimeProfilerAggregatedStats>::GetValueFloat
          (TTableReader<TraceServices::FLoadTimeProfilerAggregatedStats> *this,ulong64 param_1)

{
  int iVar1;
  FColumnValueContainer FVar2;
  
  if (this->CurrentRow != (FLoadTimeProfilerAggregatedStats *)0x0) {
    iVar1 = (**(code **)(this->Layout->_padding_ + 0x18))();
    if (iVar1 == 1) {
      FVar2 = TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::GetColumnValue
                        (this->Layout,(FLoadTimeProfilerAggregatedStats *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (float)*(byte *)FVar2.field0_0x0;
    }
    if (iVar1 == 2) {
      FVar2 = TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::GetColumnValue
                        (this->Layout,(FLoadTimeProfilerAggregatedStats *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (float)*(longlong *)FVar2.field0_0x0;
    }
    if (iVar1 == 3) {
      FVar2 = TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::GetColumnValue
                        (this->Layout,(FLoadTimeProfilerAggregatedStats *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return *(float *)FVar2.field0_0x0;
    }
    if (iVar1 == 4) {
      FVar2 = TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::GetColumnValue
                        (this->Layout,(FLoadTimeProfilerAggregatedStats *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (float)*(double *)FVar2.field0_0x0;
    }
  }
  return 0.0;
}

// GetValueFloat @ 14d470870

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
TraceServices::TTableReader<TraceServices::FLogMessageInternal>::GetValueFloat
          (TTableReader<TraceServices::FLogMessageInternal> *this,ulong64 param_1)

{
  int iVar1;
  FColumnValueContainer FVar2;
  
  if (this->CurrentRow != (FLogMessageInternal *)0x0) {
    iVar1 = (**(code **)(this->Layout->_padding_ + 0x18))();
    if (iVar1 == 1) {
      FVar2 = TTableLayout<TraceServices::FLogMessageInternal>::GetColumnValue
                        (this->Layout,(FLogMessageInternal *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (float)*(byte *)FVar2.field0_0x0;
    }
    if (iVar1 == 2) {
      FVar2 = TTableLayout<TraceServices::FLogMessageInternal>::GetColumnValue
                        (this->Layout,(FLogMessageInternal *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (float)*(longlong *)FVar2.field0_0x0;
    }
    if (iVar1 == 3) {
      FVar2 = TTableLayout<TraceServices::FLogMessageInternal>::GetColumnValue
                        (this->Layout,(FLogMessageInternal *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return *(float *)FVar2.field0_0x0;
    }
    if (iVar1 == 4) {
      FVar2 = TTableLayout<TraceServices::FLogMessageInternal>::GetColumnValue
                        (this->Layout,(FLogMessageInternal *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (float)*(double *)FVar2.field0_0x0;
    }
  }
  return 0.0;
}

// GetValueFloat @ 14d470960

float __thiscall
TraceServices::TTableReader<TraceServices::FNetProfilerAggregatedStats>::GetValueFloat
          (TTableReader<TraceServices::FNetProfilerAggregatedStats> *this,ulong64 param_1)

{
  int iVar1;
  FColumnValueContainer FVar2;
  
  if (this->CurrentRow != (FNetProfilerAggregatedStats *)0x0) {
    iVar1 = (**(code **)(this->Layout->_padding_ + 0x18))();
    if (iVar1 == 1) {
      FVar2 = TTableLayout<TraceServices::FNetProfilerAggregatedStats>::GetColumnValue
                        (this->Layout,(FNetProfilerAggregatedStats *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (float)*(byte *)FVar2.field0_0x0;
    }
    if (iVar1 == 2) {
      FVar2 = TTableLayout<TraceServices::FNetProfilerAggregatedStats>::GetColumnValue
                        (this->Layout,(FNetProfilerAggregatedStats *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (float)*(longlong *)FVar2.field0_0x0;
    }
    if (iVar1 == 3) {
      FVar2 = TTableLayout<TraceServices::FNetProfilerAggregatedStats>::GetColumnValue
                        (this->Layout,(FNetProfilerAggregatedStats *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return *(float *)FVar2.field0_0x0;
    }
    if (iVar1 == 4) {
      FVar2 = TTableLayout<TraceServices::FNetProfilerAggregatedStats>::GetColumnValue
                        (this->Layout,(FNetProfilerAggregatedStats *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (float)*(double *)FVar2.field0_0x0;
    }
  }
  return 0.0;
}

// GetValueFloat @ 14d470a50

float __thiscall
TraceServices::TTableReader<TraceServices::FNetProfilerAggregatedStatsCounterStats>::GetValueFloat
          (TTableReader<TraceServices::FNetProfilerAggregatedStatsCounterStats> *this,
          ulong64 param_1)

{
  int iVar1;
  FColumnValueContainer FVar2;
  
  if (this->CurrentRow != (FNetProfilerAggregatedStatsCounterStats *)0x0) {
    iVar1 = (**(code **)(this->Layout->_padding_ + 0x18))();
    if (iVar1 == 1) {
      FVar2 = TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats>::GetColumnValue
                        (this->Layout,(FNetProfilerAggregatedStatsCounterStats *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (float)*(byte *)FVar2.field0_0x0;
    }
    if (iVar1 == 2) {
      FVar2 = TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats>::GetColumnValue
                        (this->Layout,(FNetProfilerAggregatedStatsCounterStats *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (float)*(longlong *)FVar2.field0_0x0;
    }
    if (iVar1 == 3) {
      FVar2 = TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats>::GetColumnValue
                        (this->Layout,(FNetProfilerAggregatedStatsCounterStats *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return *(float *)FVar2.field0_0x0;
    }
    if (iVar1 == 4) {
      FVar2 = TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats>::GetColumnValue
                        (this->Layout,(FNetProfilerAggregatedStatsCounterStats *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (float)*(double *)FVar2.field0_0x0;
    }
  }
  return 0.0;
}

// GetValueFloat @ 14d470b40

float __thiscall
TraceServices::TTableReader<TraceServices::FPackagesTableRow>::GetValueFloat
          (TTableReader<TraceServices::FPackagesTableRow> *this,ulong64 param_1)

{
  int iVar1;
  FColumnValueContainer FVar2;
  
  if (this->CurrentRow != (FPackagesTableRow *)0x0) {
    iVar1 = (**(code **)(this->Layout->_padding_ + 0x18))();
    if (iVar1 == 1) {
      FVar2 = TTableLayout<TraceServices::FPackagesTableRow>::GetColumnValue
                        (this->Layout,(FPackagesTableRow *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (float)*(byte *)FVar2.field0_0x0;
    }
    if (iVar1 == 2) {
      FVar2 = TTableLayout<TraceServices::FPackagesTableRow>::GetColumnValue
                        (this->Layout,(FPackagesTableRow *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (float)*(longlong *)FVar2.field0_0x0;
    }
    if (iVar1 == 3) {
      FVar2 = TTableLayout<TraceServices::FPackagesTableRow>::GetColumnValue
                        (this->Layout,(FPackagesTableRow *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return *(float *)FVar2.field0_0x0;
    }
    if (iVar1 == 4) {
      FVar2 = TTableLayout<TraceServices::FPackagesTableRow>::GetColumnValue
                        (this->Layout,(FPackagesTableRow *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (float)*(double *)FVar2.field0_0x0;
    }
  }
  return 0.0;
}

// GetValueFloat @ 14d470c30

float __thiscall
TraceServices::TTableReader<TraceServices::FRequestsTableRow>::GetValueFloat
          (TTableReader<TraceServices::FRequestsTableRow> *this,ulong64 param_1)

{
  int iVar1;
  FColumnValueContainer FVar2;
  
  if (this->CurrentRow != (FRequestsTableRow *)0x0) {
    iVar1 = (**(code **)(this->Layout->_padding_ + 0x18))();
    if (iVar1 == 1) {
      FVar2 = TTableLayout<TraceServices::FRequestsTableRow>::GetColumnValue
                        (this->Layout,(FRequestsTableRow *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (float)*(byte *)FVar2.field0_0x0;
    }
    if (iVar1 == 2) {
      FVar2 = TTableLayout<TraceServices::FRequestsTableRow>::GetColumnValue
                        (this->Layout,(FRequestsTableRow *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (float)*(longlong *)FVar2.field0_0x0;
    }
    if (iVar1 == 3) {
      FVar2 = TTableLayout<TraceServices::FRequestsTableRow>::GetColumnValue
                        (this->Layout,(FRequestsTableRow *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return *(float *)FVar2.field0_0x0;
    }
    if (iVar1 == 4) {
      FVar2 = TTableLayout<TraceServices::FRequestsTableRow>::GetColumnValue
                        (this->Layout,(FRequestsTableRow *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (float)*(double *)FVar2.field0_0x0;
    }
  }
  return 0.0;
}

// GetValueFloat @ 14d470d20

/* WARNING: Enum "ETimingProfilerTimerType": Some values do not have unique names */

float __thiscall
TraceServices::TTableReader<TraceServices::FTimingProfilerAggregatedStats>::GetValueFloat
          (TTableReader<TraceServices::FTimingProfilerAggregatedStats> *this,ulong64 param_1)

{
  int iVar1;
  FColumnValueContainer FVar2;
  
  if (this->CurrentRow != (FTimingProfilerAggregatedStats *)0x0) {
    iVar1 = (**(code **)(this->Layout->_padding_ + 0x18))();
    if (iVar1 == 1) {
      FVar2 = TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::GetColumnValue
                        (this->Layout,(FTimingProfilerAggregatedStats *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (float)*(byte *)FVar2.field0_0x0;
    }
    if (iVar1 == 2) {
      FVar2 = TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::GetColumnValue
                        (this->Layout,(FTimingProfilerAggregatedStats *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (float)*(longlong *)FVar2.field0_0x0;
    }
    if (iVar1 == 3) {
      FVar2 = TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::GetColumnValue
                        (this->Layout,(FTimingProfilerAggregatedStats *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return *(float *)FVar2.field0_0x0;
    }
    if (iVar1 == 4) {
      FVar2 = TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::GetColumnValue
                        (this->Layout,(FTimingProfilerAggregatedStats *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (float)*(double *)FVar2.field0_0x0;
    }
  }
  return 0.0;
}

// GetValueFloat @ 14d470e10

float __thiscall
TraceServices::TTableReader<TraceServices::FImportTableRow>::GetValueFloat
          (TTableReader<TraceServices::FImportTableRow> *this,ulong64 param_1)

{
  int iVar1;
  FColumnValueContainer FVar2;
  
  if (this->CurrentRow != (FImportTableRow *)0x0) {
    iVar1 = (**(code **)(this->Layout->_padding_ + 0x18))();
    if (iVar1 == 1) {
      FVar2 = TTableLayout<TraceServices::FImportTableRow>::GetColumnValue
                        (this->Layout,(FImportTableRow *)&stack0x00000008,(ulong64)this->CurrentRow)
      ;
      return (float)*(byte *)FVar2.field0_0x0;
    }
    if (iVar1 == 2) {
      FVar2 = TTableLayout<TraceServices::FImportTableRow>::GetColumnValue
                        (this->Layout,(FImportTableRow *)&stack0x00000008,(ulong64)this->CurrentRow)
      ;
      return (float)*(longlong *)FVar2.field0_0x0;
    }
    if (iVar1 == 3) {
      FVar2 = TTableLayout<TraceServices::FImportTableRow>::GetColumnValue
                        (this->Layout,(FImportTableRow *)&stack0x00000008,(ulong64)this->CurrentRow)
      ;
      return *(float *)FVar2.field0_0x0;
    }
    if (iVar1 == 4) {
      FVar2 = TTableLayout<TraceServices::FImportTableRow>::GetColumnValue
                        (this->Layout,(FImportTableRow *)&stack0x00000008,(ulong64)this->CurrentRow)
      ;
      return (float)*(double *)FVar2.field0_0x0;
    }
  }
  return 0.0;
}

// GetValueInt @ 14d470f20

long64 __thiscall
TraceServices::TTableReader<TraceServices::FExportsTableRow>::GetValueInt
          (TTableReader<TraceServices::FExportsTableRow> *this,ulong64 param_1)

{
  int iVar1;
  FColumnValueContainer FVar2;
  
  if (this->CurrentRow != (FExportsTableRow *)0x0) {
    iVar1 = (**(code **)(this->Layout->_padding_ + 0x18))();
    if (iVar1 == 1) {
      FVar2 = TTableLayout<TraceServices::FExportsTableRow>::GetColumnValue
                        (this->Layout,(FExportsTableRow *)&stack0x00000008,(ulong64)this->CurrentRow
                        );
      return (ulonglong)*(byte *)FVar2.field0_0x0;
    }
    if (iVar1 == 2) {
      FVar2 = TTableLayout<TraceServices::FExportsTableRow>::GetColumnValue
                        (this->Layout,(FExportsTableRow *)&stack0x00000008,(ulong64)this->CurrentRow
                        );
      return *(long64 *)FVar2.field0_0x0;
    }
    if (iVar1 == 3) {
      FVar2 = TTableLayout<TraceServices::FExportsTableRow>::GetColumnValue
                        (this->Layout,(FExportsTableRow *)&stack0x00000008,(ulong64)this->CurrentRow
                        );
      return (longlong)*(float *)FVar2.field0_0x0;
    }
    if (iVar1 == 4) {
      FVar2 = TTableLayout<TraceServices::FExportsTableRow>::GetColumnValue
                        (this->Layout,(FExportsTableRow *)&stack0x00000008,(ulong64)this->CurrentRow
                        );
      return (longlong)*(double *)FVar2.field0_0x0;
    }
  }
  return 0;
}

// GetValueInt @ 14d471000

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

long64 __thiscall
TraceServices::TTableReader<TraceServices::FFileActivity>::GetValueInt
          (TTableReader<TraceServices::FFileActivity> *this,ulong64 param_1)

{
  int iVar1;
  FColumnValueContainer FVar2;
  
  if (this->CurrentRow != (FFileActivity *)0x0) {
    iVar1 = (**(code **)(this->Layout->_padding_ + 0x18))();
    if (iVar1 == 1) {
      FVar2 = TTableLayout<TraceServices::FFileActivity>::GetColumnValue
                        (this->Layout,(FFileActivity *)&stack0x00000008,(ulong64)this->CurrentRow);
      return (ulonglong)*(byte *)FVar2.field0_0x0;
    }
    if (iVar1 == 2) {
      FVar2 = TTableLayout<TraceServices::FFileActivity>::GetColumnValue
                        (this->Layout,(FFileActivity *)&stack0x00000008,(ulong64)this->CurrentRow);
      return *(long64 *)FVar2.field0_0x0;
    }
    if (iVar1 == 3) {
      FVar2 = TTableLayout<TraceServices::FFileActivity>::GetColumnValue
                        (this->Layout,(FFileActivity *)&stack0x00000008,(ulong64)this->CurrentRow);
      return (longlong)*(float *)FVar2.field0_0x0;
    }
    if (iVar1 == 4) {
      FVar2 = TTableLayout<TraceServices::FFileActivity>::GetColumnValue
                        (this->Layout,(FFileActivity *)&stack0x00000008,(ulong64)this->CurrentRow);
      return (longlong)*(double *)FVar2.field0_0x0;
    }
  }
  return 0;
}

// GetValueInt @ 14d4710e0

long64 __thiscall
TraceServices::TTableReader<TraceServices::FLoadRequest>::GetValueInt
          (TTableReader<TraceServices::FLoadRequest> *this,ulong64 param_1)

{
  int iVar1;
  FColumnValueContainer FVar2;
  
  if (this->CurrentRow != (FLoadRequest *)0x0) {
    iVar1 = (**(code **)(this->Layout->_padding_ + 0x18))();
    if (iVar1 == 1) {
      FVar2 = TTableLayout<TraceServices::FLoadRequest>::GetColumnValue
                        (this->Layout,(FLoadRequest *)&stack0x00000008,(ulong64)this->CurrentRow);
      return (ulonglong)*(byte *)FVar2.field0_0x0;
    }
    if (iVar1 == 2) {
      FVar2 = TTableLayout<TraceServices::FLoadRequest>::GetColumnValue
                        (this->Layout,(FLoadRequest *)&stack0x00000008,(ulong64)this->CurrentRow);
      return *(long64 *)FVar2.field0_0x0;
    }
    if (iVar1 == 3) {
      FVar2 = TTableLayout<TraceServices::FLoadRequest>::GetColumnValue
                        (this->Layout,(FLoadRequest *)&stack0x00000008,(ulong64)this->CurrentRow);
      return (longlong)*(float *)FVar2.field0_0x0;
    }
    if (iVar1 == 4) {
      FVar2 = TTableLayout<TraceServices::FLoadRequest>::GetColumnValue
                        (this->Layout,(FLoadRequest *)&stack0x00000008,(ulong64)this->CurrentRow);
      return (longlong)*(double *)FVar2.field0_0x0;
    }
  }
  return 0;
}

// GetValueInt @ 14d4711c0

long64 __thiscall
TraceServices::TTableReader<TraceServices::FLoadTimeProfilerAggregatedStats>::GetValueInt
          (TTableReader<TraceServices::FLoadTimeProfilerAggregatedStats> *this,ulong64 param_1)

{
  int iVar1;
  FColumnValueContainer FVar2;
  
  if (this->CurrentRow != (FLoadTimeProfilerAggregatedStats *)0x0) {
    iVar1 = (**(code **)(this->Layout->_padding_ + 0x18))();
    if (iVar1 == 1) {
      FVar2 = TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::GetColumnValue
                        (this->Layout,(FLoadTimeProfilerAggregatedStats *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (ulonglong)*(byte *)FVar2.field0_0x0;
    }
    if (iVar1 == 2) {
      FVar2 = TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::GetColumnValue
                        (this->Layout,(FLoadTimeProfilerAggregatedStats *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return *(long64 *)FVar2.field0_0x0;
    }
    if (iVar1 == 3) {
      FVar2 = TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::GetColumnValue
                        (this->Layout,(FLoadTimeProfilerAggregatedStats *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (longlong)*(float *)FVar2.field0_0x0;
    }
    if (iVar1 == 4) {
      FVar2 = TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::GetColumnValue
                        (this->Layout,(FLoadTimeProfilerAggregatedStats *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (longlong)*(double *)FVar2.field0_0x0;
    }
  }
  return 0;
}

// GetValueInt @ 14d4712a0

/* WARNING: Enum "Type": Some values do not have unique names */

long64 __thiscall
TraceServices::TTableReader<TraceServices::FLogMessageInternal>::GetValueInt
          (TTableReader<TraceServices::FLogMessageInternal> *this,ulong64 param_1)

{
  int iVar1;
  FColumnValueContainer FVar2;
  
  if (this->CurrentRow != (FLogMessageInternal *)0x0) {
    iVar1 = (**(code **)(this->Layout->_padding_ + 0x18))();
    if (iVar1 == 1) {
      FVar2 = TTableLayout<TraceServices::FLogMessageInternal>::GetColumnValue
                        (this->Layout,(FLogMessageInternal *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (ulonglong)*(byte *)FVar2.field0_0x0;
    }
    if (iVar1 == 2) {
      FVar2 = TTableLayout<TraceServices::FLogMessageInternal>::GetColumnValue
                        (this->Layout,(FLogMessageInternal *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return *(long64 *)FVar2.field0_0x0;
    }
    if (iVar1 == 3) {
      FVar2 = TTableLayout<TraceServices::FLogMessageInternal>::GetColumnValue
                        (this->Layout,(FLogMessageInternal *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (longlong)*(float *)FVar2.field0_0x0;
    }
    if (iVar1 == 4) {
      FVar2 = TTableLayout<TraceServices::FLogMessageInternal>::GetColumnValue
                        (this->Layout,(FLogMessageInternal *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (longlong)*(double *)FVar2.field0_0x0;
    }
  }
  return 0;
}

// GetValueInt @ 14d471380

long64 __thiscall
TraceServices::TTableReader<TraceServices::FNetProfilerAggregatedStats>::GetValueInt
          (TTableReader<TraceServices::FNetProfilerAggregatedStats> *this,ulong64 param_1)

{
  int iVar1;
  FColumnValueContainer FVar2;
  
  if (this->CurrentRow != (FNetProfilerAggregatedStats *)0x0) {
    iVar1 = (**(code **)(this->Layout->_padding_ + 0x18))();
    if (iVar1 == 1) {
      FVar2 = TTableLayout<TraceServices::FNetProfilerAggregatedStats>::GetColumnValue
                        (this->Layout,(FNetProfilerAggregatedStats *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (ulonglong)*(byte *)FVar2.field0_0x0;
    }
    if (iVar1 == 2) {
      FVar2 = TTableLayout<TraceServices::FNetProfilerAggregatedStats>::GetColumnValue
                        (this->Layout,(FNetProfilerAggregatedStats *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return *(long64 *)FVar2.field0_0x0;
    }
    if (iVar1 == 3) {
      FVar2 = TTableLayout<TraceServices::FNetProfilerAggregatedStats>::GetColumnValue
                        (this->Layout,(FNetProfilerAggregatedStats *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (longlong)*(float *)FVar2.field0_0x0;
    }
    if (iVar1 == 4) {
      FVar2 = TTableLayout<TraceServices::FNetProfilerAggregatedStats>::GetColumnValue
                        (this->Layout,(FNetProfilerAggregatedStats *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (longlong)*(double *)FVar2.field0_0x0;
    }
  }
  return 0;
}

// GetValueInt @ 14d471460

long64 __thiscall
TraceServices::TTableReader<TraceServices::FNetProfilerAggregatedStatsCounterStats>::GetValueInt
          (TTableReader<TraceServices::FNetProfilerAggregatedStatsCounterStats> *this,
          ulong64 param_1)

{
  int iVar1;
  FColumnValueContainer FVar2;
  
  if (this->CurrentRow != (FNetProfilerAggregatedStatsCounterStats *)0x0) {
    iVar1 = (**(code **)(this->Layout->_padding_ + 0x18))();
    if (iVar1 == 1) {
      FVar2 = TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats>::GetColumnValue
                        (this->Layout,(FNetProfilerAggregatedStatsCounterStats *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (ulonglong)*(byte *)FVar2.field0_0x0;
    }
    if (iVar1 == 2) {
      FVar2 = TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats>::GetColumnValue
                        (this->Layout,(FNetProfilerAggregatedStatsCounterStats *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return *(long64 *)FVar2.field0_0x0;
    }
    if (iVar1 == 3) {
      FVar2 = TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats>::GetColumnValue
                        (this->Layout,(FNetProfilerAggregatedStatsCounterStats *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (longlong)*(float *)FVar2.field0_0x0;
    }
    if (iVar1 == 4) {
      FVar2 = TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats>::GetColumnValue
                        (this->Layout,(FNetProfilerAggregatedStatsCounterStats *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (longlong)*(double *)FVar2.field0_0x0;
    }
  }
  return 0;
}

// GetValueInt @ 14d471540

long64 __thiscall
TraceServices::TTableReader<TraceServices::FPackagesTableRow>::GetValueInt
          (TTableReader<TraceServices::FPackagesTableRow> *this,ulong64 param_1)

{
  int iVar1;
  FColumnValueContainer FVar2;
  
  if (this->CurrentRow != (FPackagesTableRow *)0x0) {
    iVar1 = (**(code **)(this->Layout->_padding_ + 0x18))();
    if (iVar1 == 1) {
      FVar2 = TTableLayout<TraceServices::FPackagesTableRow>::GetColumnValue
                        (this->Layout,(FPackagesTableRow *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (ulonglong)*(byte *)FVar2.field0_0x0;
    }
    if (iVar1 == 2) {
      FVar2 = TTableLayout<TraceServices::FPackagesTableRow>::GetColumnValue
                        (this->Layout,(FPackagesTableRow *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return *(long64 *)FVar2.field0_0x0;
    }
    if (iVar1 == 3) {
      FVar2 = TTableLayout<TraceServices::FPackagesTableRow>::GetColumnValue
                        (this->Layout,(FPackagesTableRow *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (longlong)*(float *)FVar2.field0_0x0;
    }
    if (iVar1 == 4) {
      FVar2 = TTableLayout<TraceServices::FPackagesTableRow>::GetColumnValue
                        (this->Layout,(FPackagesTableRow *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (longlong)*(double *)FVar2.field0_0x0;
    }
  }
  return 0;
}

// GetValueInt @ 14d471620

long64 __thiscall
TraceServices::TTableReader<TraceServices::FRequestsTableRow>::GetValueInt
          (TTableReader<TraceServices::FRequestsTableRow> *this,ulong64 param_1)

{
  int iVar1;
  FColumnValueContainer FVar2;
  
  if (this->CurrentRow != (FRequestsTableRow *)0x0) {
    iVar1 = (**(code **)(this->Layout->_padding_ + 0x18))();
    if (iVar1 == 1) {
      FVar2 = TTableLayout<TraceServices::FRequestsTableRow>::GetColumnValue
                        (this->Layout,(FRequestsTableRow *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (ulonglong)*(byte *)FVar2.field0_0x0;
    }
    if (iVar1 == 2) {
      FVar2 = TTableLayout<TraceServices::FRequestsTableRow>::GetColumnValue
                        (this->Layout,(FRequestsTableRow *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return *(long64 *)FVar2.field0_0x0;
    }
    if (iVar1 == 3) {
      FVar2 = TTableLayout<TraceServices::FRequestsTableRow>::GetColumnValue
                        (this->Layout,(FRequestsTableRow *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (longlong)*(float *)FVar2.field0_0x0;
    }
    if (iVar1 == 4) {
      FVar2 = TTableLayout<TraceServices::FRequestsTableRow>::GetColumnValue
                        (this->Layout,(FRequestsTableRow *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (longlong)*(double *)FVar2.field0_0x0;
    }
  }
  return 0;
}

// GetValueInt @ 14d471700

/* WARNING: Enum "ETimingProfilerTimerType": Some values do not have unique names */

long64 __thiscall
TraceServices::TTableReader<TraceServices::FTimingProfilerAggregatedStats>::GetValueInt
          (TTableReader<TraceServices::FTimingProfilerAggregatedStats> *this,ulong64 param_1)

{
  int iVar1;
  FColumnValueContainer FVar2;
  
  if (this->CurrentRow != (FTimingProfilerAggregatedStats *)0x0) {
    iVar1 = (**(code **)(this->Layout->_padding_ + 0x18))();
    if (iVar1 == 1) {
      FVar2 = TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::GetColumnValue
                        (this->Layout,(FTimingProfilerAggregatedStats *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (ulonglong)*(byte *)FVar2.field0_0x0;
    }
    if (iVar1 == 2) {
      FVar2 = TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::GetColumnValue
                        (this->Layout,(FTimingProfilerAggregatedStats *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return *(long64 *)FVar2.field0_0x0;
    }
    if (iVar1 == 3) {
      FVar2 = TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::GetColumnValue
                        (this->Layout,(FTimingProfilerAggregatedStats *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (longlong)*(float *)FVar2.field0_0x0;
    }
    if (iVar1 == 4) {
      FVar2 = TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::GetColumnValue
                        (this->Layout,(FTimingProfilerAggregatedStats *)&stack0x00000008,
                         (ulong64)this->CurrentRow);
      return (longlong)*(double *)FVar2.field0_0x0;
    }
  }
  return 0;
}

// GetValueInt @ 14d4717e0

long64 __thiscall
TraceServices::TTableReader<TraceServices::FImportTableRow>::GetValueInt
          (TTableReader<TraceServices::FImportTableRow> *this,ulong64 param_1)

{
  int iVar1;
  FColumnValueContainer FVar2;
  
  if (this->CurrentRow != (FImportTableRow *)0x0) {
    iVar1 = (**(code **)(this->Layout->_padding_ + 0x18))();
    if (iVar1 == 1) {
      FVar2 = TTableLayout<TraceServices::FImportTableRow>::GetColumnValue
                        (this->Layout,(FImportTableRow *)&stack0x00000008,(ulong64)this->CurrentRow)
      ;
      return (ulonglong)*(byte *)FVar2.field0_0x0;
    }
    if (iVar1 == 2) {
      FVar2 = TTableLayout<TraceServices::FImportTableRow>::GetColumnValue
                        (this->Layout,(FImportTableRow *)&stack0x00000008,(ulong64)this->CurrentRow)
      ;
      return *(long64 *)FVar2.field0_0x0;
    }
    if (iVar1 == 3) {
      FVar2 = TTableLayout<TraceServices::FImportTableRow>::GetColumnValue
                        (this->Layout,(FImportTableRow *)&stack0x00000008,(ulong64)this->CurrentRow)
      ;
      return (longlong)*(float *)FVar2.field0_0x0;
    }
    if (iVar1 == 4) {
      FVar2 = TTableLayout<TraceServices::FImportTableRow>::GetColumnValue
                        (this->Layout,(FImportTableRow *)&stack0x00000008,(ulong64)this->CurrentRow)
      ;
      return (longlong)*(double *)FVar2.field0_0x0;
    }
  }
  return 0;
}

// IsValid @ 14d474d00

bool __thiscall
TraceServices::TTableReader<TraceServices::FExportsTableRow>::IsValid
          (TTableReader<TraceServices::FExportsTableRow> *this)

{
  return this->CurrentRow != (FExportsTableRow *)0x0;
}

// IsValid @ 14d474d10

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

bool __thiscall
TraceServices::TTableReader<TraceServices::FFileActivity>::IsValid
          (TTableReader<TraceServices::FFileActivity> *this)

{
  return this->CurrentRow != (FFileActivity *)0x0;
}

// IsValid @ 14d474d20

bool __thiscall
TraceServices::TTableReader<TraceServices::FLoadRequest>::IsValid
          (TTableReader<TraceServices::FLoadRequest> *this)

{
  return this->CurrentRow != (FLoadRequest *)0x0;
}

// IsValid @ 14d474d30

bool __thiscall
TraceServices::TTableReader<TraceServices::FLoadTimeProfilerAggregatedStats>::IsValid
          (TTableReader<TraceServices::FLoadTimeProfilerAggregatedStats> *this)

{
  return this->CurrentRow != (FLoadTimeProfilerAggregatedStats *)0x0;
}

// IsValid @ 14d474d40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TraceServices::TTableReader<TraceServices::FLogMessageInternal>::IsValid
          (TTableReader<TraceServices::FLogMessageInternal> *this)

{
  return this->CurrentRow != (FLogMessageInternal *)0x0;
}

// IsValid @ 14d474d50

bool __thiscall
TraceServices::TTableReader<TraceServices::FNetProfilerAggregatedStats>::IsValid
          (TTableReader<TraceServices::FNetProfilerAggregatedStats> *this)

{
  return this->CurrentRow != (FNetProfilerAggregatedStats *)0x0;
}

// IsValid @ 14d474d60

bool __thiscall
TraceServices::TTableReader<TraceServices::FNetProfilerAggregatedStatsCounterStats>::IsValid
          (TTableReader<TraceServices::FNetProfilerAggregatedStatsCounterStats> *this)

{
  return this->CurrentRow != (FNetProfilerAggregatedStatsCounterStats *)0x0;
}

// IsValid @ 14d474d70

bool __thiscall
TraceServices::TTableReader<TraceServices::FPackagesTableRow>::IsValid
          (TTableReader<TraceServices::FPackagesTableRow> *this)

{
  return this->CurrentRow != (FPackagesTableRow *)0x0;
}

// IsValid @ 14d474d80

bool __thiscall
TraceServices::TTableReader<TraceServices::FRequestsTableRow>::IsValid
          (TTableReader<TraceServices::FRequestsTableRow> *this)

{
  return this->CurrentRow != (FRequestsTableRow *)0x0;
}

// IsValid @ 14d474d90

/* WARNING: Enum "ETimingProfilerTimerType": Some values do not have unique names */

bool __thiscall
TraceServices::TTableReader<TraceServices::FTimingProfilerAggregatedStats>::IsValid
          (TTableReader<TraceServices::FTimingProfilerAggregatedStats> *this)

{
  return this->CurrentRow != (FTimingProfilerAggregatedStats *)0x0;
}

// IsValid @ 14d474da0

bool __thiscall
TraceServices::TTableReader<TraceServices::FImportTableRow>::IsValid
          (TTableReader<TraceServices::FImportTableRow> *this)

{
  return this->CurrentRow != (FImportTableRow *)0x0;
}

// NextRow @ 14d479ce0

void __thiscall
TraceServices::TTableReader<TraceServices::FExportsTableRow>::NextRow
          (TTableReader<TraceServices::FExportsTableRow> *this)

{
  ulong64 uVar1;
  ulong64 *puVar2;
  TPagedArray<TraceServices::FExportsTableRow,TraceServices::TPagedArrayPage<TraceServices::FExportsTableRow>_>
  *pTVar3;
  ulong64 uVar4;
  TPagedArrayPage<TraceServices::FExportsTableRow> *pTVar5;
  FExportsTableRow *pFVar6;
  FExportsTableRow *pFVar7;
  longlong lVar8;
  
  pFVar7 = (this->Iterator).CurrentItem;
  if (pFVar7 != (this->Iterator).CurrentPageLastItem) {
    puVar2 = &(this->Iterator).CurrentItemIndex;
    *puVar2 = *puVar2 + 1;
    pFVar7 = pFVar7 + 1;
    (this->Iterator).CurrentItem = pFVar7;
    this->CurrentRow = pFVar7;
    return;
  }
  pTVar3 = (this->Iterator).Outer;
  pFVar7 = (FExportsTableRow *)0x0;
  uVar4 = (this->Iterator).CurrentPageIndex;
  if (uVar4 != (longlong)((pTVar3->PagesArray).ArrayNum + -1)) {
    uVar1 = uVar4 + 1;
    (this->Iterator).CurrentPageIndex = uVar1;
    lVar8 = uVar4 + 1;
    pTVar5 = pTVar3->FirstPage;
    pFVar6 = pTVar5[lVar8].Items;
    (this->Iterator).CurrentPageFirstItem = pFVar6;
    if (pTVar5[lVar8].Items != (FExportsTableRow *)0x0) {
      pFVar7 = pTVar5[lVar8].Items + (pTVar5[lVar8].Count - 1);
    }
    (this->Iterator).CurrentPageLastItem = pFVar7;
    (this->Iterator).CurrentItemIndex = uVar1 * pTVar3->PageSize;
    (this->Iterator).CurrentItem = pFVar6;
    if (pTVar3->FirstPage + uVar1 != (TPagedArrayPage<TraceServices::FExportsTableRow> *)0x0) {
      this->CurrentRow = pFVar6;
      return;
    }
    this->CurrentRow = (FExportsTableRow *)0x0;
    return;
  }
  (this->Iterator).CurrentItem = (FExportsTableRow *)0x0;
  (this->Iterator).CurrentPageFirstItem = (FExportsTableRow *)0x0;
  (this->Iterator).CurrentPageLastItem = (FExportsTableRow *)0x0;
  (this->Iterator).CurrentItemIndex = pTVar3->TotalItemCount;
  this->CurrentRow = (FExportsTableRow *)0x0;
  return;
}

// NextRow @ 14d479dc0

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

void __thiscall
TraceServices::TTableReader<TraceServices::FFileActivity>::NextRow
          (TTableReader<TraceServices::FFileActivity> *this)

{
  ulong64 uVar1;
  ulong64 *puVar2;
  TPagedArray<TraceServices::FFileActivity,TraceServices::TPagedArrayPage<TraceServices::FFileActivity>_>
  *pTVar3;
  ulong64 uVar4;
  TPagedArrayPage<TraceServices::FFileActivity> *pTVar5;
  FFileActivity *pFVar6;
  FFileActivity *pFVar7;
  longlong lVar8;
  
  pFVar7 = (this->Iterator).CurrentItem;
  if (pFVar7 != (this->Iterator).CurrentPageLastItem) {
    puVar2 = &(this->Iterator).CurrentItemIndex;
    *puVar2 = *puVar2 + 1;
    pFVar7 = pFVar7 + 1;
    (this->Iterator).CurrentItem = pFVar7;
    this->CurrentRow = pFVar7;
    return;
  }
  pTVar3 = (this->Iterator).Outer;
  pFVar7 = (FFileActivity *)0x0;
  uVar4 = (this->Iterator).CurrentPageIndex;
  if (uVar4 != (longlong)((pTVar3->PagesArray).ArrayNum + -1)) {
    uVar1 = uVar4 + 1;
    (this->Iterator).CurrentPageIndex = uVar1;
    lVar8 = uVar4 + 1;
    pTVar5 = pTVar3->FirstPage;
    pFVar6 = pTVar5[lVar8].Items;
    (this->Iterator).CurrentPageFirstItem = pFVar6;
    if (pTVar5[lVar8].Items != (FFileActivity *)0x0) {
      pFVar7 = pTVar5[lVar8].Items + (pTVar5[lVar8].Count - 1);
    }
    (this->Iterator).CurrentPageLastItem = pFVar7;
    (this->Iterator).CurrentItemIndex = uVar1 * pTVar3->PageSize;
    (this->Iterator).CurrentItem = pFVar6;
    if (pTVar3->FirstPage + uVar1 != (TPagedArrayPage<TraceServices::FFileActivity> *)0x0) {
      this->CurrentRow = pFVar6;
      return;
    }
    this->CurrentRow = (FFileActivity *)0x0;
    return;
  }
  (this->Iterator).CurrentItem = (FFileActivity *)0x0;
  (this->Iterator).CurrentPageFirstItem = (FFileActivity *)0x0;
  (this->Iterator).CurrentPageLastItem = (FFileActivity *)0x0;
  (this->Iterator).CurrentItemIndex = pTVar3->TotalItemCount;
  this->CurrentRow = (FFileActivity *)0x0;
  return;
}

// NextRow @ 14d479ea0

void __thiscall
TraceServices::TTableReader<TraceServices::FLoadRequest>::NextRow
          (TTableReader<TraceServices::FLoadRequest> *this)

{
  FLoadRequest *pFVar1;
  
  pFVar1 = TPagedArrayIterator<TraceServices::FLoadRequest,TraceServices::TPagedArrayPage<TraceServices::FLoadRequest>_>
           ::NextItem(&this->Iterator);
  this->CurrentRow = pFVar1;
  return;
}

// NextRow @ 14d479ed0

void __thiscall
TraceServices::TTableReader<TraceServices::FLoadTimeProfilerAggregatedStats>::NextRow
          (TTableReader<TraceServices::FLoadTimeProfilerAggregatedStats> *this)

{
  ulong64 uVar1;
  longlong lVar2;
  ulong64 *puVar3;
  TPagedArray<TraceServices::FLoadTimeProfilerAggregatedStats,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerAggregatedStats>_>
  *pTVar4;
  ulong64 uVar5;
  TPagedArrayPage<TraceServices::FLoadTimeProfilerAggregatedStats> *pTVar6;
  FLoadTimeProfilerAggregatedStats *pFVar7;
  FLoadTimeProfilerAggregatedStats *pFVar8;
  
  pFVar7 = (this->Iterator).CurrentItem;
  if (pFVar7 != (this->Iterator).CurrentPageLastItem) {
    puVar3 = &(this->Iterator).CurrentItemIndex;
    *puVar3 = *puVar3 + 1;
    pFVar7 = pFVar7 + 1;
    (this->Iterator).CurrentItem = pFVar7;
    this->CurrentRow = pFVar7;
    return;
  }
  pTVar4 = (this->Iterator).Outer;
  uVar5 = (this->Iterator).CurrentPageIndex;
  if (uVar5 != (longlong)((pTVar4->PagesArray).ArrayNum + -1)) {
    uVar1 = uVar5 + 1;
    (this->Iterator).CurrentPageIndex = uVar1;
    lVar2 = uVar5 + 1;
    pTVar6 = pTVar4->FirstPage;
    pFVar8 = (FLoadTimeProfilerAggregatedStats *)0x0;
    pFVar7 = pTVar6[lVar2].Items;
    (this->Iterator).CurrentPageFirstItem = pFVar7;
    if (pTVar6[lVar2].Items != (FLoadTimeProfilerAggregatedStats *)0x0) {
      pFVar8 = pTVar6[lVar2].Items + (pTVar6[lVar2].Count - 1);
    }
    (this->Iterator).CurrentPageLastItem = pFVar8;
    (this->Iterator).CurrentItemIndex = uVar1 * pTVar4->PageSize;
    (this->Iterator).CurrentItem = pFVar7;
    if (pTVar4->FirstPage + uVar1 !=
        (TPagedArrayPage<TraceServices::FLoadTimeProfilerAggregatedStats> *)0x0) {
      this->CurrentRow = pFVar7;
      return;
    }
    this->CurrentRow = (FLoadTimeProfilerAggregatedStats *)0x0;
    return;
  }
  (this->Iterator).CurrentItem = (FLoadTimeProfilerAggregatedStats *)0x0;
  (this->Iterator).CurrentPageFirstItem = (FLoadTimeProfilerAggregatedStats *)0x0;
  (this->Iterator).CurrentPageLastItem = (FLoadTimeProfilerAggregatedStats *)0x0;
  (this->Iterator).CurrentItemIndex = pTVar4->TotalItemCount;
  this->CurrentRow = (FLoadTimeProfilerAggregatedStats *)0x0;
  return;
}

// NextRow @ 14d479fb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::TTableReader<TraceServices::FLogMessageInternal>::NextRow
          (TTableReader<TraceServices::FLogMessageInternal> *this)

{
  FLogMessageInternal *pFVar1;
  
  pFVar1 = TPagedArrayIterator<TraceServices::FLogMessageInternal,TraceServices::TPagedArrayPage<TraceServices::FLogMessageInternal>_>
           ::NextItem(&this->Iterator);
  this->CurrentRow = pFVar1;
  return;
}

// NextRow @ 14d479fe0

void __thiscall
TraceServices::TTableReader<TraceServices::FNetProfilerAggregatedStats>::NextRow
          (TTableReader<TraceServices::FNetProfilerAggregatedStats> *this)

{
  ulong64 uVar1;
  longlong lVar2;
  ulong64 *puVar3;
  TPagedArray<TraceServices::FNetProfilerAggregatedStats,TraceServices::TPagedArrayPage<TraceServices::FNetProfilerAggregatedStats>_>
  *pTVar4;
  ulong64 uVar5;
  TPagedArrayPage<TraceServices::FNetProfilerAggregatedStats> *pTVar6;
  FNetProfilerAggregatedStats *pFVar7;
  FNetProfilerAggregatedStats *pFVar8;
  
  pFVar7 = (this->Iterator).CurrentItem;
  if (pFVar7 != (this->Iterator).CurrentPageLastItem) {
    puVar3 = &(this->Iterator).CurrentItemIndex;
    *puVar3 = *puVar3 + 1;
    pFVar7 = pFVar7 + 1;
    (this->Iterator).CurrentItem = pFVar7;
    this->CurrentRow = pFVar7;
    return;
  }
  pTVar4 = (this->Iterator).Outer;
  uVar5 = (this->Iterator).CurrentPageIndex;
  if (uVar5 != (longlong)((pTVar4->PagesArray).ArrayNum + -1)) {
    uVar1 = uVar5 + 1;
    (this->Iterator).CurrentPageIndex = uVar1;
    lVar2 = uVar5 + 1;
    pTVar6 = pTVar4->FirstPage;
    pFVar8 = (FNetProfilerAggregatedStats *)0x0;
    pFVar7 = pTVar6[lVar2].Items;
    (this->Iterator).CurrentPageFirstItem = pFVar7;
    if (pTVar6[lVar2].Items != (FNetProfilerAggregatedStats *)0x0) {
      pFVar8 = pTVar6[lVar2].Items + (pTVar6[lVar2].Count - 1);
    }
    (this->Iterator).CurrentPageLastItem = pFVar8;
    (this->Iterator).CurrentItemIndex = uVar1 * pTVar4->PageSize;
    (this->Iterator).CurrentItem = pFVar7;
    if (pTVar4->FirstPage + uVar1 !=
        (TPagedArrayPage<TraceServices::FNetProfilerAggregatedStats> *)0x0) {
      this->CurrentRow = pFVar7;
      return;
    }
    this->CurrentRow = (FNetProfilerAggregatedStats *)0x0;
    return;
  }
  (this->Iterator).CurrentItem = (FNetProfilerAggregatedStats *)0x0;
  (this->Iterator).CurrentPageFirstItem = (FNetProfilerAggregatedStats *)0x0;
  (this->Iterator).CurrentPageLastItem = (FNetProfilerAggregatedStats *)0x0;
  (this->Iterator).CurrentItemIndex = pTVar4->TotalItemCount;
  this->CurrentRow = (FNetProfilerAggregatedStats *)0x0;
  return;
}

// NextRow @ 14d47a0c0

void __thiscall
TraceServices::TTableReader<TraceServices::FNetProfilerAggregatedStatsCounterStats>::NextRow
          (TTableReader<TraceServices::FNetProfilerAggregatedStatsCounterStats> *this)

{
  ulong64 uVar1;
  ulong64 *puVar2;
  TPagedArray<TraceServices::FNetProfilerAggregatedStatsCounterStats,TraceServices::TPagedArrayPage<TraceServices::FNetProfilerAggregatedStatsCounterStats>_>
  *pTVar3;
  ulong64 uVar4;
  TPagedArrayPage<TraceServices::FNetProfilerAggregatedStatsCounterStats> *pTVar5;
  FNetProfilerAggregatedStatsCounterStats *pFVar6;
  FNetProfilerAggregatedStatsCounterStats *pFVar7;
  longlong lVar8;
  
  pFVar7 = (this->Iterator).CurrentItem;
  if (pFVar7 != (this->Iterator).CurrentPageLastItem) {
    puVar2 = &(this->Iterator).CurrentItemIndex;
    *puVar2 = *puVar2 + 1;
    pFVar7 = pFVar7 + 1;
    (this->Iterator).CurrentItem = pFVar7;
    this->CurrentRow = pFVar7;
    return;
  }
  pTVar3 = (this->Iterator).Outer;
  pFVar7 = (FNetProfilerAggregatedStatsCounterStats *)0x0;
  uVar4 = (this->Iterator).CurrentPageIndex;
  if (uVar4 != (longlong)((pTVar3->PagesArray).ArrayNum + -1)) {
    uVar1 = uVar4 + 1;
    (this->Iterator).CurrentPageIndex = uVar1;
    lVar8 = uVar4 + 1;
    pTVar5 = pTVar3->FirstPage;
    pFVar6 = pTVar5[lVar8].Items;
    (this->Iterator).CurrentPageFirstItem = pFVar6;
    if (pTVar5[lVar8].Items != (FNetProfilerAggregatedStatsCounterStats *)0x0) {
      pFVar7 = pTVar5[lVar8].Items + (pTVar5[lVar8].Count - 1);
    }
    (this->Iterator).CurrentPageLastItem = pFVar7;
    (this->Iterator).CurrentItemIndex = uVar1 * pTVar3->PageSize;
    (this->Iterator).CurrentItem = pFVar6;
    if (pTVar3->FirstPage + uVar1 !=
        (TPagedArrayPage<TraceServices::FNetProfilerAggregatedStatsCounterStats> *)0x0) {
      this->CurrentRow = pFVar6;
      return;
    }
    this->CurrentRow = (FNetProfilerAggregatedStatsCounterStats *)0x0;
    return;
  }
  (this->Iterator).CurrentItem = (FNetProfilerAggregatedStatsCounterStats *)0x0;
  (this->Iterator).CurrentPageFirstItem = (FNetProfilerAggregatedStatsCounterStats *)0x0;
  (this->Iterator).CurrentPageLastItem = (FNetProfilerAggregatedStatsCounterStats *)0x0;
  (this->Iterator).CurrentItemIndex = pTVar3->TotalItemCount;
  this->CurrentRow = (FNetProfilerAggregatedStatsCounterStats *)0x0;
  return;
}

// NextRow @ 14d47a1a0

void __thiscall
TraceServices::TTableReader<TraceServices::FPackagesTableRow>::NextRow
          (TTableReader<TraceServices::FPackagesTableRow> *this)

{
  ulong64 uVar1;
  longlong lVar2;
  ulong64 *puVar3;
  TPagedArray<TraceServices::FPackagesTableRow,TraceServices::TPagedArrayPage<TraceServices::FPackagesTableRow>_>
  *pTVar4;
  ulong64 uVar5;
  TPagedArrayPage<TraceServices::FPackagesTableRow> *pTVar6;
  FPackagesTableRow *pFVar7;
  FPackagesTableRow *pFVar8;
  
  pFVar7 = (this->Iterator).CurrentItem;
  if (pFVar7 != (this->Iterator).CurrentPageLastItem) {
    puVar3 = &(this->Iterator).CurrentItemIndex;
    *puVar3 = *puVar3 + 1;
    pFVar7 = pFVar7 + 1;
    (this->Iterator).CurrentItem = pFVar7;
    this->CurrentRow = pFVar7;
    return;
  }
  pTVar4 = (this->Iterator).Outer;
  uVar5 = (this->Iterator).CurrentPageIndex;
  if (uVar5 != (longlong)((pTVar4->PagesArray).ArrayNum + -1)) {
    uVar1 = uVar5 + 1;
    (this->Iterator).CurrentPageIndex = uVar1;
    lVar2 = uVar5 + 1;
    pTVar6 = pTVar4->FirstPage;
    pFVar8 = (FPackagesTableRow *)0x0;
    pFVar7 = pTVar6[lVar2].Items;
    (this->Iterator).CurrentPageFirstItem = pFVar7;
    if (pTVar6[lVar2].Items != (FPackagesTableRow *)0x0) {
      pFVar8 = pTVar6[lVar2].Items + (pTVar6[lVar2].Count - 1);
    }
    (this->Iterator).CurrentPageLastItem = pFVar8;
    (this->Iterator).CurrentItemIndex = uVar1 * pTVar4->PageSize;
    (this->Iterator).CurrentItem = pFVar7;
    if (pTVar4->FirstPage + uVar1 != (TPagedArrayPage<TraceServices::FPackagesTableRow> *)0x0) {
      this->CurrentRow = pFVar7;
      return;
    }
    this->CurrentRow = (FPackagesTableRow *)0x0;
    return;
  }
  (this->Iterator).CurrentItem = (FPackagesTableRow *)0x0;
  (this->Iterator).CurrentPageFirstItem = (FPackagesTableRow *)0x0;
  (this->Iterator).CurrentPageLastItem = (FPackagesTableRow *)0x0;
  (this->Iterator).CurrentItemIndex = pTVar4->TotalItemCount;
  this->CurrentRow = (FPackagesTableRow *)0x0;
  return;
}

// NextRow @ 14d47a280

void __thiscall
TraceServices::TTableReader<TraceServices::FRequestsTableRow>::NextRow
          (TTableReader<TraceServices::FRequestsTableRow> *this)

{
  ulong64 uVar1;
  ulong64 *puVar2;
  TPagedArray<TraceServices::FRequestsTableRow,TraceServices::TPagedArrayPage<TraceServices::FRequestsTableRow>_>
  *pTVar3;
  ulong64 uVar4;
  TPagedArrayPage<TraceServices::FRequestsTableRow> *pTVar5;
  FRequestsTableRow *pFVar6;
  FRequestsTableRow *pFVar7;
  longlong lVar8;
  
  pFVar7 = (this->Iterator).CurrentItem;
  if (pFVar7 != (this->Iterator).CurrentPageLastItem) {
    puVar2 = &(this->Iterator).CurrentItemIndex;
    *puVar2 = *puVar2 + 1;
    pFVar7 = pFVar7 + 1;
    (this->Iterator).CurrentItem = pFVar7;
    this->CurrentRow = pFVar7;
    return;
  }
  pTVar3 = (this->Iterator).Outer;
  pFVar7 = (FRequestsTableRow *)0x0;
  uVar4 = (this->Iterator).CurrentPageIndex;
  if (uVar4 != (longlong)((pTVar3->PagesArray).ArrayNum + -1)) {
    uVar1 = uVar4 + 1;
    (this->Iterator).CurrentPageIndex = uVar1;
    lVar8 = uVar4 + 1;
    pTVar5 = pTVar3->FirstPage;
    pFVar6 = pTVar5[lVar8].Items;
    (this->Iterator).CurrentPageFirstItem = pFVar6;
    if (pTVar5[lVar8].Items != (FRequestsTableRow *)0x0) {
      pFVar7 = pTVar5[lVar8].Items + (pTVar5[lVar8].Count - 1);
    }
    (this->Iterator).CurrentPageLastItem = pFVar7;
    (this->Iterator).CurrentItemIndex = uVar1 * pTVar3->PageSize;
    (this->Iterator).CurrentItem = pFVar6;
    if (pTVar3->FirstPage + uVar1 != (TPagedArrayPage<TraceServices::FRequestsTableRow> *)0x0) {
      this->CurrentRow = pFVar6;
      return;
    }
    this->CurrentRow = (FRequestsTableRow *)0x0;
    return;
  }
  (this->Iterator).CurrentItem = (FRequestsTableRow *)0x0;
  (this->Iterator).CurrentPageFirstItem = (FRequestsTableRow *)0x0;
  (this->Iterator).CurrentPageLastItem = (FRequestsTableRow *)0x0;
  (this->Iterator).CurrentItemIndex = pTVar3->TotalItemCount;
  this->CurrentRow = (FRequestsTableRow *)0x0;
  return;
}

// NextRow @ 14d47a360

/* WARNING: Enum "ETimingProfilerTimerType": Some values do not have unique names */

void __thiscall
TraceServices::TTableReader<TraceServices::FTimingProfilerAggregatedStats>::NextRow
          (TTableReader<TraceServices::FTimingProfilerAggregatedStats> *this)

{
  ulong64 uVar1;
  longlong lVar2;
  ulong64 *puVar3;
  TPagedArray<TraceServices::FTimingProfilerAggregatedStats,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerAggregatedStats>_>
  *pTVar4;
  ulong64 uVar5;
  TPagedArrayPage<TraceServices::FTimingProfilerAggregatedStats> *pTVar6;
  FTimingProfilerAggregatedStats *pFVar7;
  FTimingProfilerAggregatedStats *pFVar8;
  
  pFVar7 = (this->Iterator).CurrentItem;
  if (pFVar7 != (this->Iterator).CurrentPageLastItem) {
    puVar3 = &(this->Iterator).CurrentItemIndex;
    *puVar3 = *puVar3 + 1;
    pFVar7 = pFVar7 + 1;
    (this->Iterator).CurrentItem = pFVar7;
    this->CurrentRow = pFVar7;
    return;
  }
  pTVar4 = (this->Iterator).Outer;
  uVar5 = (this->Iterator).CurrentPageIndex;
  if (uVar5 != (longlong)((pTVar4->PagesArray).ArrayNum + -1)) {
    uVar1 = uVar5 + 1;
    (this->Iterator).CurrentPageIndex = uVar1;
    lVar2 = uVar5 + 1;
    pTVar6 = pTVar4->FirstPage;
    pFVar8 = (FTimingProfilerAggregatedStats *)0x0;
    pFVar7 = pTVar6[lVar2].Items;
    (this->Iterator).CurrentPageFirstItem = pFVar7;
    if (pTVar6[lVar2].Items != (FTimingProfilerAggregatedStats *)0x0) {
      pFVar8 = pTVar6[lVar2].Items + (pTVar6[lVar2].Count - 1);
    }
    (this->Iterator).CurrentPageLastItem = pFVar8;
    (this->Iterator).CurrentItemIndex = uVar1 * pTVar4->PageSize;
    (this->Iterator).CurrentItem = pFVar7;
    if (pTVar4->FirstPage + uVar1 !=
        (TPagedArrayPage<TraceServices::FTimingProfilerAggregatedStats> *)0x0) {
      this->CurrentRow = pFVar7;
      return;
    }
    this->CurrentRow = (FTimingProfilerAggregatedStats *)0x0;
    return;
  }
  (this->Iterator).CurrentItem = (FTimingProfilerAggregatedStats *)0x0;
  (this->Iterator).CurrentPageFirstItem = (FTimingProfilerAggregatedStats *)0x0;
  (this->Iterator).CurrentPageLastItem = (FTimingProfilerAggregatedStats *)0x0;
  (this->Iterator).CurrentItemIndex = pTVar4->TotalItemCount;
  this->CurrentRow = (FTimingProfilerAggregatedStats *)0x0;
  return;
}

// NextRow @ 14d47a440

void __thiscall
TraceServices::TTableReader<TraceServices::FImportTableRow>::NextRow
          (TTableReader<TraceServices::FImportTableRow> *this)

{
  ulong64 uVar1;
  ulong64 *puVar2;
  TPagedArray<TraceServices::FImportTableRow,TraceServices::TPagedArrayPage<TraceServices::FImportTableRow>_>
  *pTVar3;
  ulong64 uVar4;
  TPagedArrayPage<TraceServices::FImportTableRow> *pTVar5;
  FImportTableRow *pFVar6;
  FImportTableRow *pFVar7;
  
  pFVar6 = (this->Iterator).CurrentItem;
  if (pFVar6 != (this->Iterator).CurrentPageLastItem) {
    puVar2 = &(this->Iterator).CurrentItemIndex;
    *puVar2 = *puVar2 + 1;
    pFVar6 = pFVar6 + 1;
    (this->Iterator).CurrentItem = pFVar6;
    this->CurrentRow = pFVar6;
    return;
  }
  pTVar3 = (this->Iterator).Outer;
  uVar4 = (this->Iterator).CurrentPageIndex;
  if (uVar4 != (longlong)((pTVar3->PagesArray).ArrayNum + -1)) {
    uVar1 = uVar4 + 1;
    (this->Iterator).CurrentPageIndex = uVar1;
    pTVar5 = pTVar3->FirstPage + uVar4 + 1;
    pFVar7 = (FImportTableRow *)0x0;
    pFVar6 = pTVar5->Items;
    (this->Iterator).CurrentPageFirstItem = pFVar6;
    if (pTVar5->Items != (FImportTableRow *)0x0) {
      pFVar7 = pTVar5->Items + (pTVar5->Count - 1);
    }
    (this->Iterator).CurrentPageLastItem = pFVar7;
    (this->Iterator).CurrentItemIndex = uVar1 * pTVar3->PageSize;
    (this->Iterator).CurrentItem = pFVar6;
    if (pTVar3->FirstPage + uVar1 != (TPagedArrayPage<TraceServices::FImportTableRow> *)0x0) {
      this->CurrentRow = pFVar6;
      return;
    }
    this->CurrentRow = (FImportTableRow *)0x0;
    return;
  }
  (this->Iterator).CurrentItem = (FImportTableRow *)0x0;
  (this->Iterator).CurrentPageFirstItem = (FImportTableRow *)0x0;
  (this->Iterator).CurrentPageLastItem = (FImportTableRow *)0x0;
  (this->Iterator).CurrentItemIndex = pTVar3->TotalItemCount;
  this->CurrentRow = (FImportTableRow *)0x0;
  return;
}

// SetRowIndex @ 14d48b080

void __thiscall
TraceServices::TTableReader<TraceServices::FExportsTableRow>::SetRowIndex
          (TTableReader<TraceServices::FExportsTableRow> *this,ulong64 param_1)

{
  TPagedArrayIterator<TraceServices::FExportsTableRow,TraceServices::TPagedArrayPage<TraceServices::FExportsTableRow>_>
  ::SetPositionInternal(&this->Iterator,param_1);
  this->CurrentRow = (this->Iterator).CurrentItem;
  return;
}

// SetRowIndex @ 14d48b0b0

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

void __thiscall
TraceServices::TTableReader<TraceServices::FFileActivity>::SetRowIndex
          (TTableReader<TraceServices::FFileActivity> *this,ulong64 param_1)

{
  TPagedArrayIterator<TraceServices::FFileActivity,TraceServices::TPagedArrayPage<TraceServices::FFileActivity>_>
  ::SetPositionInternal(&this->Iterator,param_1);
  this->CurrentRow = (this->Iterator).CurrentItem;
  return;
}

// SetRowIndex @ 14d48b0e0

void __thiscall
TraceServices::TTableReader<TraceServices::FLoadRequest>::SetRowIndex
          (TTableReader<TraceServices::FLoadRequest> *this,ulong64 param_1)

{
  TPagedArrayIterator<TraceServices::FLoadRequest,TraceServices::TPagedArrayPage<TraceServices::FLoadRequest>_>
  ::SetPositionInternal(&this->Iterator,param_1);
  this->CurrentRow = (this->Iterator).CurrentItem;
  return;
}

// SetRowIndex @ 14d48b110

void __thiscall
TraceServices::TTableReader<TraceServices::FLoadTimeProfilerAggregatedStats>::SetRowIndex
          (TTableReader<TraceServices::FLoadTimeProfilerAggregatedStats> *this,ulong64 param_1)

{
  TPagedArrayIterator<TraceServices::FLoadTimeProfilerAggregatedStats,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerAggregatedStats>_>
  ::SetPositionInternal(&this->Iterator,param_1);
  this->CurrentRow = (this->Iterator).CurrentItem;
  return;
}

// SetRowIndex @ 14d48b140

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::TTableReader<TraceServices::FLogMessageInternal>::SetRowIndex
          (TTableReader<TraceServices::FLogMessageInternal> *this,ulong64 param_1)

{
  TPagedArrayIterator<TraceServices::FLogMessageInternal,TraceServices::TPagedArrayPage<TraceServices::FLogMessageInternal>_>
  ::SetPositionInternal(&this->Iterator,param_1);
  this->CurrentRow = (this->Iterator).CurrentItem;
  return;
}

// SetRowIndex @ 14d48b170

void __thiscall
TraceServices::TTableReader<TraceServices::FNetProfilerAggregatedStats>::SetRowIndex
          (TTableReader<TraceServices::FNetProfilerAggregatedStats> *this,ulong64 param_1)

{
  TPagedArrayIterator<TraceServices::FNetProfilerAggregatedStats,TraceServices::TPagedArrayPage<TraceServices::FNetProfilerAggregatedStats>_>
  ::SetPositionInternal(&this->Iterator,param_1);
  this->CurrentRow = (this->Iterator).CurrentItem;
  return;
}

// SetRowIndex @ 14d48b1a0

void __thiscall
TraceServices::TTableReader<TraceServices::FNetProfilerAggregatedStatsCounterStats>::SetRowIndex
          (TTableReader<TraceServices::FNetProfilerAggregatedStatsCounterStats> *this,
          ulong64 param_1)

{
  TPagedArrayIterator<TraceServices::FNetProfilerAggregatedStatsCounterStats,TraceServices::TPagedArrayPage<TraceServices::FNetProfilerAggregatedStatsCounterStats>_>
  ::SetPositionInternal(&this->Iterator,param_1);
  this->CurrentRow = (this->Iterator).CurrentItem;
  return;
}

// SetRowIndex @ 14d48b1d0

void __thiscall
TraceServices::TTableReader<TraceServices::FPackagesTableRow>::SetRowIndex
          (TTableReader<TraceServices::FPackagesTableRow> *this,ulong64 param_1)

{
  TPagedArrayIterator<TraceServices::FPackagesTableRow,TraceServices::TPagedArrayPage<TraceServices::FPackagesTableRow>_>
  ::SetPositionInternal(&this->Iterator,param_1);
  this->CurrentRow = (this->Iterator).CurrentItem;
  return;
}

// SetRowIndex @ 14d48b200

void __thiscall
TraceServices::TTableReader<TraceServices::FRequestsTableRow>::SetRowIndex
          (TTableReader<TraceServices::FRequestsTableRow> *this,ulong64 param_1)

{
  TPagedArrayIterator<TraceServices::FRequestsTableRow,TraceServices::TPagedArrayPage<TraceServices::FRequestsTableRow>_>
  ::SetPositionInternal(&this->Iterator,param_1);
  this->CurrentRow = (this->Iterator).CurrentItem;
  return;
}

// SetRowIndex @ 14d48b230

/* WARNING: Enum "ETimingProfilerTimerType": Some values do not have unique names */

void __thiscall
TraceServices::TTableReader<TraceServices::FTimingProfilerAggregatedStats>::SetRowIndex
          (TTableReader<TraceServices::FTimingProfilerAggregatedStats> *this,ulong64 param_1)

{
  TPagedArrayIterator<TraceServices::FTimingProfilerAggregatedStats,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerAggregatedStats>_>
  ::SetPositionInternal(&this->Iterator,param_1);
  this->CurrentRow = (this->Iterator).CurrentItem;
  return;
}

// SetRowIndex @ 14d48b260

void __thiscall
TraceServices::TTableReader<TraceServices::FImportTableRow>::SetRowIndex
          (TTableReader<TraceServices::FImportTableRow> *this,ulong64 param_1)

{
  TPagedArrayIterator<TraceServices::FImportTableRow,TraceServices::TPagedArrayPage<TraceServices::FImportTableRow>_>
  ::SetPositionInternal(&this->Iterator,param_1);
  this->CurrentRow = (this->Iterator).CurrentItem;
  return;
}

