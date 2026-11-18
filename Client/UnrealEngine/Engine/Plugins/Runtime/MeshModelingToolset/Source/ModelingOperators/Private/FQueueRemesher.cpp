// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 1

// FQueueRemesher @ 14c946bf0

FQueueRemesher * __thiscall
UE::Geometry::FQueueRemesher::FQueueRemesher(FQueueRemesher *this,FDynamicMesh3 *param_1)

{
  FRemesher::FRemesher((FRemesher *)this,param_1);
  this->MaxFastSplitIterations = 0x14;
  *(undefined ***)this = &___7FQueueRemesher_Geometry_UE__6B_;
  this->MinActiveEdgeFraction = 0.01;
  *(undefined8 *)&(this->ModifiedEdges).field0_0x0 = 0;
  *(undefined4 *)((longlong)&(this->ModifiedEdges).field0_0x0 + 8) = 0;
  *(undefined8 *)((longlong)&(this->ModifiedEdges).field0_0x0 + 0x20) = 0;
  this->MaxRemeshIterations = 0x14;
  *(undefined4 *)((longlong)&(this->ModifiedEdges).field0_0x0 + 0xc) = 0xffffffff;
  *(undefined4 *)((longlong)&(this->ModifiedEdges).field0_0x0 + 0x28) = 0;
  *(undefined4 *)((longlong)&(this->ModifiedEdges).field0_0x0 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)&(this->ModifiedEdges).field0_0x0 + 0x34) = 0;
  *(undefined4 *)((longlong)&(this->ModifiedEdges).field0_0x0 + 0x30) = 0xffffffff;
  *(undefined8 *)((longlong)&(this->ModifiedEdges).field0_0x0 + 0x40) = 0;
  (this->ModifiedEdges).field0_0x0.TypedValue.HashSize = 0;
  *(undefined8 *)&(this->EdgeBuffer).Elements = 0;
  *(undefined8 *)&(this->EdgeBuffer).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->EdgeBuffer).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->EdgeBuffer).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->EdgeBuffer).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->EdgeBuffer).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->EdgeBuffer).Elements.field_0x30 = 0xffffffff;
  (this->EdgeBuffer).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->EdgeBuffer).HashSize = 0;
  *(undefined8 *)&this->PostEdgeSplitFunction = 0;
  *(undefined8 *)&(this->PostEdgeSplitFunction).field_0x28 = 0;
  (this->EdgeShouldBeQueuedBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EdgeShouldBeQueuedBuffer).ArrayNum = 0;
  (this->EdgeShouldBeQueuedBuffer).ArrayMax = 0;
  return this;
}

