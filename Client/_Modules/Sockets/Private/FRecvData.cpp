// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Sockets
// Functions: 2

// FRecvData @ 14310adf0

FRecvData * __thiscall FRecvMulti::FRecvData::FRecvData(FRecvData *this)

{
  (this->Source).Object = (FInternetAddr *)0x0;
  (this->Source).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->Data = (uchar *)0x0;
  this->BytesReadPtr = (uint *)0x0;
  return this;
}

// ~FRecvData @ 14310b6e0

void __thiscall FRecvMulti::FRecvData::~FRecvData(FRecvData *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Source).SharedReferenceCount.ReferenceController);
  return;
}

