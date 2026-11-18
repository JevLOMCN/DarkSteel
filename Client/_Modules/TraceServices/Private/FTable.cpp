// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 3

// CreateReader @ 14d44d210

IUntypedTableReader * __thiscall
TraceServices::FCsvProfilerProvider::FTable::CreateReader(FTable *this)

{
  IUntypedTableReader IVar1;
  IUntypedTableReader IVar2;
  IUntypedTableReader *pIVar3;
  
  pIVar3 = ::operator_new(0x20);
  if (pIVar3 != (IUntypedTableReader *)0x0) {
    IVar1 = (IUntypedTableReader)this->Events;
    IVar2 = (IUntypedTableReader)this->Capture;
    *pIVar3 = (IUntypedTableReader)&___7FTableReader_FCsvProfilerProvider_TraceServices__6B_;
    pIVar3[1] = IVar2;
    pIVar3[2] = IVar1;
    *(undefined4 *)(pIVar3 + 3) = 0;
    return pIVar3;
  }
  return (IUntypedTableReader *)0x0;
}

// GetLayout @ 14d468f30

ITableLayout * __thiscall TraceServices::FCsvProfilerProvider::FTable::GetLayout(FTable *this)

{
  return (ITableLayout *)&this->Layout;
}

// GetRowCount @ 14d46c710

ulong64 __thiscall TraceServices::FCsvProfilerProvider::FTable::GetRowCount(FTable *this)

{
  return (ulonglong)(this->Capture->EndFrame - this->Capture->StartFrame);
}

