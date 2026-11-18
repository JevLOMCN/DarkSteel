// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NamingTokensUI
// Functions: 6

// FTextLocation @ 14d0ee3d0

FTextLocation * __thiscall FTextLocation::FTextLocation(FTextLocation *this,int param_1,int param_2)

{
  this->LineIndex = param_1;
  this->Offset = param_2;
  return this;
}

// operator== @ 14d0f1310

bool __thiscall FTextLocation::operator==(FTextLocation *this,FTextLocation *param_1)

{
  if ((this->LineIndex == param_1->LineIndex) && (this->Offset == param_1->Offset)) {
    return true;
  }
  return false;
}

// operator< @ 14d0f15a0

bool __thiscall FTextLocation::operator<(FTextLocation *this,FTextLocation *param_1)

{
  if ((param_1->LineIndex <= this->LineIndex) &&
     ((this->LineIndex != param_1->LineIndex || (param_1->Offset <= this->Offset)))) {
    return false;
  }
  return true;
}

// GetLineIndex @ 14d108e30

int __thiscall FTextLocation::GetLineIndex(FTextLocation *this)

{
  return this->LineIndex;
}

// GetOffset @ 14d1096e0

int __thiscall FTextLocation::GetOffset(FTextLocation *this)

{
  return this->Offset;
}

// IsValid @ 14d10bd00

bool __thiscall FTextLocation::IsValid(FTextLocation *this)

{
  if ((this->LineIndex != -1) && (this->Offset != -1)) {
    return true;
  }
  return false;
}

