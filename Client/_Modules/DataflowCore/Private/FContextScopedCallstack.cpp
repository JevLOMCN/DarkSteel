// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 2

// FContextScopedCallstack @ 144429fa0

FContextScopedCallstack * __thiscall
UE::Dataflow::FContextScopedCallstack::FContextScopedCallstack
          (FContextScopedCallstack *this,FContext *param_1,FDataflowConnection *param_2)

{
  FDataflowNode *pFVar1;
  
  this->Context = param_1;
  this->Connection = param_2;
  this->bLoopDetected = false;
  pFVar1 = param_2->OwningNode;
  TSet<FDataflowNode_const_*,DefaultKeyFuncs<FDataflowNode_const_*,0>,FDefaultSetAllocator>::Remove
            (&param_1->NodesWithInfo,pFVar1);
  TSet<FDataflowNode_const_*,DefaultKeyFuncs<FDataflowNode_const_*,0>,FDefaultSetAllocator>::Remove
            (&param_1->NodesWithWarning,pFVar1);
  TSet<FDataflowNode_const_*,DefaultKeyFuncs<FDataflowNode_const_*,0>,FDefaultSetAllocator>::Remove
            (&param_1->NodesWithError,pFVar1);
  TSet<FDataflowNode_const_*,DefaultKeyFuncs<FDataflowNode_const_*,0>,FDefaultSetAllocator>::Remove
            (&param_1->NodesFailed,pFVar1);
  return this;
}

// ~FContextScopedCallstack @ 1444336f0

void __thiscall
UE::Dataflow::FContextScopedCallstack::~FContextScopedCallstack(FContextScopedCallstack *this)

{
  return;
}

