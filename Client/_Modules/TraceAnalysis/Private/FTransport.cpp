// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 11

// GetPointer<unsigned_char> @ 14d387440

uchar * __thiscall UE::Trace::FTransport::GetPointer<unsigned_char>(FTransport *this,uint param_1)

{
  uchar *puVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014d387443. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar1 = (uchar *)(**(code **)(this->_padding_ + 0x28))();
  return puVar1;
}

// GetPointer<UE::Trace::Protocol0::FEventHeader> @ 14d3874e0

FEventHeader * __thiscall
UE::Trace::FTransport::GetPointer<UE::Trace::Protocol0::FEventHeader>(FTransport *this,uint param_1)

{
  FEventHeader *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014d3874e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FEventHeader *)(**(code **)(this->_padding_ + 0x28))();
  return pFVar1;
}

// GetPointer<UE::Trace::Protocol0::FEventHeader> @ 14d3874f0

FEventHeader * __thiscall
UE::Trace::FTransport::GetPointer<UE::Trace::Protocol0::FEventHeader>(FTransport *this)

{
  FEventHeader *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014d3874f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FEventHeader *)(**(code **)(this->_padding_ + 0x28))(this,4);
  return pFVar1;
}

// GetPointer<UE::Trace::Private::FTidPacketBase> @ 14d387570

FTidPacketBase * __thiscall
UE::Trace::FTransport::GetPointer<UE::Trace::Private::FTidPacketBase>(FTransport *this,uint param_1)

{
  FTidPacketBase *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014d387573. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FTidPacketBase *)(**(code **)(this->_padding_ + 0x28))();
  return pFVar1;
}

// GetPointer<UE::Trace::Private::FTidPacketBase> @ 14d387580

FTidPacketBase * __thiscall
UE::Trace::FTransport::GetPointer<UE::Trace::Private::FTidPacketBase>(FTransport *this)

{
  FTidPacketBase *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014d387588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FTidPacketBase *)(**(code **)(this->_padding_ + 0x28))(this,4);
  return pFVar1;
}

// ~FTransport @ 14d3929a0

void __thiscall UE::Trace::FTransport::~FTransport(FTransport *this)

{
  this->_padding_ = (longlong)&___7FTransport_Trace_UE__6B_;
  return;
}

// Advance @ 14d397c40

void __thiscall UE::Trace::FTransport::Advance(FTransport *this,uint param_1)

{
  uint *puVar1;
  
  puVar1 = &this->Reader->Cursor;
  *puVar1 = *puVar1 + param_1;
  return;
}

// DebugBegin @ 14d39a2a0

void __thiscall UE::Trace::FTransport::DebugBegin(FTransport *this)

{
  return;
}

// DebugEnd @ 14d39a2d0

void __thiscall UE::Trace::FTransport::DebugEnd(FTransport *this)

{
  return;
}

// GetPointerImpl @ 14d39d140

uchar * __thiscall UE::Trace::FTransport::GetPointerImpl(FTransport *this,uint param_1)

{
  FStreamReader *pFVar1;
  
  pFVar1 = this->Reader;
  if (pFVar1->End < pFVar1->Cursor + param_1) {
    if (param_1 < pFVar1->DemandHint) {
      param_1 = pFVar1->DemandHint;
    }
    pFVar1->DemandHint = param_1;
    return (uchar *)0x0;
  }
  return pFVar1->Buffer + pFVar1->Cursor;
}

// IsEmpty @ 14d3a06c0

bool __thiscall UE::Trace::FTransport::IsEmpty(FTransport *this)

{
  return true;
}

