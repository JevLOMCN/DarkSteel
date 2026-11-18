// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FHierarchyNode @ 148b1da80

FHierarchyNode * __thiscall
FHierarchyNode::FHierarchyNode(FHierarchyNode *this,FHierarchyNode *param_1)

{
  this->This = param_1->This;
  this->Parent = param_1->Parent;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>
            (&this->Children,&param_1->Children);
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>(&this->Items,&param_1->Items);
  this->Inc = param_1->Inc;
  this->Exc = param_1->Exc;
  this->IncCount = param_1->IncCount;
  this->ExcCount = param_1->ExcCount;
  return this;
}

// FHierarchyNode @ 148b1db00

FHierarchyNode * __thiscall
FHierarchyNode::FHierarchyNode(FHierarchyNode *this,FHierarchyNode *param_1)

{
  this->This = param_1->This;
  this->Parent = param_1->Parent;
  *(undefined8 *)&(this->Children).Elements = 0;
  *(undefined8 *)&(this->Children).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Children).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->Children).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Children).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Children).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Children).Elements.field_0x34 = 0;
  (this->Children).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Children).HashSize = 0;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::operator=
            (&this->Children,&param_1->Children);
  *(undefined8 *)&(this->Items).Elements = 0;
  *(undefined8 *)&(this->Items).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Items).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->Items).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Items).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Items).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Items).Elements.field_0x34 = 0;
  (this->Items).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Items).HashSize = 0;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::operator=
            (&this->Items,&param_1->Items);
  this->Inc = param_1->Inc;
  this->Exc = param_1->Exc;
  this->IncCount = param_1->IncCount;
  this->ExcCount = param_1->ExcCount;
  return this;
}

