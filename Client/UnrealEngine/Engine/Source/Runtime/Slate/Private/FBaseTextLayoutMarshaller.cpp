// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 5

// ~FBaseTextLayoutMarshaller @ 1428496a0

void __thiscall
FBaseTextLayoutMarshaller::~FBaseTextLayoutMarshaller(FBaseTextLayoutMarshaller *this)

{
  this->_padding_ = (longlong)&___7ITextLayoutMarshaller__6B_;
  return;
}

// ClearDirty @ 1428576b0

void __thiscall FBaseTextLayoutMarshaller::ClearDirty(FBaseTextLayoutMarshaller *this)

{
  this->bIsDirty = false;
  return;
}

// IsDirty @ 142881c30

bool __thiscall FBaseTextLayoutMarshaller::IsDirty(FBaseTextLayoutMarshaller *this)

{
  return this->bIsDirty;
}

// MakeDirty @ 142883590

void __thiscall FBaseTextLayoutMarshaller::MakeDirty(FBaseTextLayoutMarshaller *this)

{
  this->bIsDirty = true;
  return;
}

// RequiresLiveUpdate @ 142895270

bool __thiscall FBaseTextLayoutMarshaller::RequiresLiveUpdate(FBaseTextLayoutMarshaller *this)

{
  return false;
}

