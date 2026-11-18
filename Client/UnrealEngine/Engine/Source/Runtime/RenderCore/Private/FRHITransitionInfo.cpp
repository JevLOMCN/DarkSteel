// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// FRHITransitionInfo @ 145d8e0b0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRHITransitionInfo * __thiscall FRHITransitionInfo::FRHITransitionInfo(FRHITransitionInfo *this)

{
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0xffff;
  (this->field1_0x8).Resource = (FRHIResource *)0x0;
  this->Type = Unknown;
  this->AccessBefore = None;
  this->AccessAfter = None;
  this->Flags = None;
  (this->CommitInfo).bIsSet = false;
  return this;
}

