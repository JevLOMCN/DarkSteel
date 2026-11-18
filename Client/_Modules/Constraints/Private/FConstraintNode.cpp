// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Constraints
// Functions: 2

// FConstraintNode @ 14649e020

FConstraintNode * __thiscall
FConstraintNode::FConstraintNode(FConstraintNode *this,FConstraintNode *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (param_1->ConstraintID).B;
  uVar2 = (param_1->ConstraintID).C;
  uVar3 = (param_1->ConstraintID).D;
  (this->ConstraintID).A = (param_1->ConstraintID).A;
  (this->ConstraintID).B = uVar1;
  (this->ConstraintID).C = uVar2;
  (this->ConstraintID).D = uVar3;
  this->ConstraintTick = param_1->ConstraintTick;
  this->NodeIndex = param_1->NodeIndex;
  this->ConstraintIndex = param_1->ConstraintIndex;
  *(undefined8 *)&(this->Parents).Elements = 0;
  *(undefined8 *)&(this->Parents).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Parents).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->Parents).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Parents).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Parents).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Parents).Elements.field_0x34 = 0;
  (this->Parents).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Parents).HashSize = 0;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
  Move<TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>_>
            (&this->Parents,&param_1->Parents);
  *(undefined8 *)&(this->Children).Elements = 0;
  *(undefined8 *)&(this->Children).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Children).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->Children).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Children).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Children).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Children).Elements.field_0x34 = 0;
  (this->Children).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Children).HashSize = 0;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
  Move<TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>_>
            (&this->Children,&param_1->Children);
  this->bMarkedForEvaluation = param_1->bMarkedForEvaluation;
  this->bEvaluating = param_1->bEvaluating;
  return this;
}

// FConstraintNode @ 14649e0f0

FConstraintNode * __thiscall
FConstraintNode::FConstraintNode(FConstraintNode *this,FConstraintNode *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (param_1->ConstraintID).B;
  uVar2 = (param_1->ConstraintID).C;
  uVar3 = (param_1->ConstraintID).D;
  (this->ConstraintID).A = (param_1->ConstraintID).A;
  (this->ConstraintID).B = uVar1;
  (this->ConstraintID).C = uVar2;
  (this->ConstraintID).D = uVar3;
  this->ConstraintTick = param_1->ConstraintTick;
  this->NodeIndex = param_1->NodeIndex;
  this->ConstraintIndex = param_1->ConstraintIndex;
  *(undefined8 *)&(this->Parents).Elements = 0;
  *(undefined8 *)&(this->Parents).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Parents).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->Parents).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Parents).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Parents).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Parents).Elements.field_0x34 = 0;
  (this->Parents).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Parents).HashSize = 0;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::operator=
            (&this->Parents,&param_1->Parents);
  *(undefined8 *)&(this->Children).Elements = 0;
  *(undefined8 *)&(this->Children).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Children).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->Children).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Children).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Children).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Children).Elements.field_0x34 = 0;
  (this->Children).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Children).HashSize = 0;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::operator=
            (&this->Children,&param_1->Children);
  this->bMarkedForEvaluation = param_1->bMarkedForEvaluation;
  this->bEvaluating = param_1->bEvaluating;
  return this;
}

