// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// FRHITransitionInfo @ 148e54890

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRHITransitionInfo * __thiscall
FRHITransitionInfo::FRHITransitionInfo(FRHITransitionInfo *this,FRHITransitionInfo *param_1)

{
  EResourceTransitionFlags EVar1;
  bool bVar2;
  
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined2 *)((longlong)&this->_padding_ + 4) =
       *(undefined2 *)((longlong)&param_1->_padding_ + 4);
  this->field1_0x8 = param_1->field1_0x8;
  this->field1_0x8 = param_1->field1_0x8;
  this->field1_0x8 = param_1->field1_0x8;
  this->field1_0x8 = param_1->field1_0x8;
  this->field1_0x8 = param_1->field1_0x8;
  this->field1_0x8 = param_1->field1_0x8;
  this->Type = param_1->Type;
  this->AccessBefore = param_1->AccessBefore;
  this->AccessAfter = param_1->AccessAfter;
  EVar1 = param_1->Flags;
  (this->CommitInfo).bIsSet = false;
  this->Flags = EVar1;
  bVar2 = (param_1->CommitInfo).bIsSet;
  (this->CommitInfo).bIsSet = bVar2;
  if (bVar2 != false) {
    (this->CommitInfo).TypedValue.SizeInBytes = (param_1->CommitInfo).TypedValue.SizeInBytes;
  }
  return this;
}

