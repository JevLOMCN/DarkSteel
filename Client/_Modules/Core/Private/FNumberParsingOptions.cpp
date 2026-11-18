// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// FNumberParsingOptions @ 141734c00

FNumberParsingOptions * __thiscall
FNumberParsingOptions::FNumberParsingOptions(FNumberParsingOptions *this)

{
  this->UseGrouping = true;
  this->InsideLimits = false;
  this->UseClamping = false;
  return this;
}

// DefaultNoGrouping @ 141750230

FNumberParsingOptions * __cdecl FNumberParsingOptions::DefaultNoGrouping(void)

{
  return &Options;
}

// DefaultWithGrouping @ 1417502e0

FNumberParsingOptions * __cdecl FNumberParsingOptions::DefaultWithGrouping(void)

{
  return &Options;
}

// IsIdentical @ 141766db0

bool __thiscall
FNumberParsingOptions::IsIdentical(FNumberParsingOptions *this,FNumberParsingOptions *param_1)

{
  if (((this->UseGrouping == param_1->UseGrouping) && (this->InsideLimits == param_1->InsideLimits))
     && (this->UseClamping == param_1->UseClamping)) {
    return true;
  }
  return false;
}

