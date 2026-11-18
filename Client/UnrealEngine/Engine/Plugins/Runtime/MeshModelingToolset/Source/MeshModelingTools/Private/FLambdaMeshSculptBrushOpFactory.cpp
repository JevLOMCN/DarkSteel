// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 1

// Build @ 14cce7c90

TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_> __thiscall
FLambdaMeshSculptBrushOpFactory::Build(FLambdaMeshSculptBrushOpFactory *this)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  FMeshSculptBrushOp *in_RDX;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->BuildFunc);
  plVar1 = *(longlong **)&(this->BuildFunc).field_0x28;
  pcVar2 = *(code **)&this->BuildFunc;
  plVar3 = (longlong *)&(this->BuildFunc).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar3 = plVar1;
  }
  (**(code **)(*plVar3 + 8))();
  (*pcVar2)();
  return (TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_>)in_RDX;
}

