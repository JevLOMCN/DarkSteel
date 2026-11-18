// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// FProgramCounterSymbolInfo @ 14161e1a0

FProgramCounterSymbolInfo * __thiscall
FProgramCounterSymbolInfo::FProgramCounterSymbolInfo(FProgramCounterSymbolInfo *this)

{
  this->LineNumber = 0;
  this->SymbolDisplacement = 0;
  this->OffsetInModule = 0;
  this->ProgramCounter = 0;
  strncpy(this->ModuleName,"",0x400);
  this->ModuleName[0x3ff] = '\0';
  strncpy(this->FunctionName,"",0x400);
  this->FunctionName[0x3ff] = '\0';
  strncpy(this->Filename,"",0x400);
  this->Filename[0x3ff] = '\0';
  return this;
}

