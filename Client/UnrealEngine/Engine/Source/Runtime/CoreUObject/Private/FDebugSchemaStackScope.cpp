// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// FDebugSchemaStackScope @ 142010e40

FDebugSchemaStackScope * __thiscall
UE::GC::FDebugSchemaStackScope::FDebugSchemaStackScope
          (FDebugSchemaStackScope *this,FWorkerContext *param_1,FSchemaView param_2)

{
  FDebugSchemaStackNode *pFVar1;
  FMemberId *pFVar2;
  
  this->Context = param_1;
  pFVar1 = param_1->SchemaStack;
  pFVar2 = &(this->Node).Member;
  (&this->Node)->Index = 0;
  (this->Node).MemberlessId = 0;
  (this->Node).Prev = pFVar1;
  (this->Node).Schema.Handle = param_2.Handle;
  param_1->SchemaStack = &this->Node;
  return this;
}

