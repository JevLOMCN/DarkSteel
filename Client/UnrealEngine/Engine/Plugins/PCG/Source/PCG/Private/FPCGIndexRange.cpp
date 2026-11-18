// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// operator== @ 149d35910

bool __thiscall
PCGIndexing::FPCGIndexRange::operator==(FPCGIndexRange *this,FPCGIndexRange *param_1)

{
  if ((this->StartIndex == param_1->StartIndex) && (this->EndIndex == param_1->EndIndex)) {
    return true;
  }
  return false;
}

// operator!= @ 149d35930

bool __thiscall
PCGIndexing::FPCGIndexRange::operator!=(FPCGIndexRange *this,FPCGIndexRange *param_1)

{
  if ((this->StartIndex == param_1->StartIndex) && (this->EndIndex == param_1->EndIndex)) {
    return false;
  }
  return true;
}

// operator< @ 149d35a50

bool __thiscall PCGIndexing::FPCGIndexRange::operator<(FPCGIndexRange *this,FPCGIndexRange *param_1)

{
  return this->StartIndex < param_1->StartIndex;
}

// ContainsIndex @ 149d42150

bool __thiscall PCGIndexing::FPCGIndexRange::ContainsIndex(FPCGIndexRange *this,int param_1)

{
  if ((this->StartIndex <= param_1) && (param_1 < this->EndIndex)) {
    return true;
  }
  return false;
}

// GetIndexCount @ 149d50540

int __thiscall PCGIndexing::FPCGIndexRange::GetIndexCount(FPCGIndexRange *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = this->EndIndex - this->StartIndex;
  iVar1 = 0;
  if (0 < iVar2) {
    iVar1 = iVar2;
  }
  return iVar1;
}

