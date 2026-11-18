// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 16

// GetPointer<unsigned_char> @ 14d387410

uchar * __thiscall UE::Trace::FStreamReader::GetPointer<unsigned_char>(FStreamReader *this)

{
  uint uVar1;
  
  if (this->End < this->Cursor + 1) {
    uVar1 = 1;
    if (1 < this->DemandHint) {
      uVar1 = this->DemandHint;
    }
    this->DemandHint = uVar1;
    return (uchar *)0x0;
  }
  return this->Buffer + this->Cursor;
}

// GetPointer<unsigned_short> @ 14d387450

ushort * __thiscall UE::Trace::FStreamReader::GetPointer<unsigned_short>(FStreamReader *this)

{
  uint uVar1;
  
  if (this->End < this->Cursor + 2) {
    uVar1 = 2;
    if (2 < this->DemandHint) {
      uVar1 = this->DemandHint;
    }
    this->DemandHint = uVar1;
    return (ushort *)0x0;
  }
  return (ushort *)(this->Buffer + this->Cursor);
}

// GetPointer<unsigned_int> @ 14d387480

uint * __thiscall UE::Trace::FStreamReader::GetPointer<unsigned_int>(FStreamReader *this)

{
  uint uVar1;
  
  if (this->End < this->Cursor + 4) {
    uVar1 = 4;
    if (4 < this->DemandHint) {
      uVar1 = this->DemandHint;
    }
    this->DemandHint = uVar1;
    return (uint *)0x0;
  }
  return (uint *)(this->Buffer + this->Cursor);
}

// GetPointer<UE::Trace::Protocol1::FAuxHeader> @ 14d3874b0

FAuxHeader * __thiscall
UE::Trace::FStreamReader::GetPointer<UE::Trace::Protocol1::FAuxHeader>(FStreamReader *this)

{
  uint uVar1;
  
  if (this->End < this->Cursor + 4) {
    uVar1 = 4;
    if (4 < this->DemandHint) {
      uVar1 = this->DemandHint;
    }
    this->DemandHint = uVar1;
    return (FAuxHeader *)0x0;
  }
  return (FAuxHeader *)(this->Buffer + this->Cursor);
}

// GetPointer<UE::Trace::Protocol2::FEventHeader> @ 14d387510

FEventHeader * __thiscall
UE::Trace::FStreamReader::GetPointer<UE::Trace::Protocol2::FEventHeader>(FStreamReader *this)

{
  uint uVar1;
  
  if (this->End < this->Cursor + 4) {
    uVar1 = 4;
    if (4 < this->DemandHint) {
      uVar1 = this->DemandHint;
    }
    this->DemandHint = uVar1;
    return (FEventHeader *)0x0;
  }
  return (FEventHeader *)(this->Buffer + this->Cursor);
}

// GetPointer<UE::Trace::Protocol2::FEventHeaderSync> @ 14d387540

FEventHeaderSync * __thiscall
UE::Trace::FStreamReader::GetPointer<UE::Trace::Protocol2::FEventHeaderSync>(FStreamReader *this)

{
  uint uVar1;
  
  if (this->End < this->Cursor + 7) {
    uVar1 = 7;
    if (7 < this->DemandHint) {
      uVar1 = this->DemandHint;
    }
    this->DemandHint = uVar1;
    return (FEventHeaderSync *)0x0;
  }
  return (FEventHeaderSync *)(this->Buffer + this->Cursor);
}

// GetPointerUnchecked<unsigned_char> @ 14d3875a0

uchar * __thiscall UE::Trace::FStreamReader::GetPointerUnchecked<unsigned_char>(FStreamReader *this)

{
  return this->Buffer + this->Cursor;
}

// GetPointerUnchecked<UE::Trace::Protocol5::FImportantEventHeader> @ 14d3875b0

FImportantEventHeader * __thiscall
UE::Trace::FStreamReader::GetPointerUnchecked<UE::Trace::Protocol5::FImportantEventHeader>
          (FStreamReader *this)

{
  return (FImportantEventHeader *)(this->Buffer + this->Cursor);
}

// Advance @ 14d397c30

void __thiscall UE::Trace::FStreamReader::Advance(FStreamReader *this,uint param_1)

{
  this->Cursor = this->Cursor + param_1;
  return;
}

// Backtrack @ 14d397e80

bool __thiscall UE::Trace::FStreamReader::Backtrack(FStreamReader *this,uchar *param_1)

{
  uint uVar1;
  
  uVar1 = (int)param_1 - *(int *)&this->Buffer;
  if (this->End < uVar1) {
    return false;
  }
  this->Cursor = uVar1;
  return true;
}

// CanMeetDemand @ 14d3982e0

bool __thiscall UE::Trace::FStreamReader::CanMeetDemand(FStreamReader *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (this->End < this->Cursor) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("End >= Cursor",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceAnalysis\\Private\\Analysis\\StreamReader.cpp"
                       ,0x1e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return this->DemandHint <= this->End - this->Cursor;
}

// GetPointer @ 14d39d090

uchar * __thiscall UE::Trace::FStreamReader::GetPointer(FStreamReader *this,uint param_1)

{
  if (this->End < this->Cursor + param_1) {
    if (param_1 < this->DemandHint) {
      param_1 = this->DemandHint;
    }
    this->DemandHint = param_1;
    return (uchar *)0x0;
  }
  return this->Buffer + this->Cursor;
}

// GetRemaining @ 14d39d290

uint __thiscall UE::Trace::FStreamReader::GetRemaining(FStreamReader *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (this->End < this->Cursor) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("End >= Cursor",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceAnalysis\\Private\\Analysis\\StreamReader.cpp"
                       ,0x1e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return this->End - this->Cursor;
}

// IsEmpty @ 14d3a0630

bool __thiscall UE::Trace::FStreamReader::IsEmpty(FStreamReader *this)

{
  return this->End <= this->Cursor;
}

// RestoreMark @ 14d3a6900

void __thiscall UE::Trace::FStreamReader::RestoreMark(FStreamReader *this,FMark *param_1)

{
  this->Cursor = (uint)param_1;
  if (this->End < (uint)param_1) {
    this->Cursor = this->End;
  }
  return;
}

// SaveMark @ 14d3a6f00

FMark * __thiscall UE::Trace::FStreamReader::SaveMark(FStreamReader *this)

{
  return (FMark *)(ulonglong)this->Cursor;
}

