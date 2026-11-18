// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// FGraphNode @ 1421b1c10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FGraphNode * __thiscall FReferenceChainSearch::FGraphNode::FGraphNode(FGraphNode *this)

{
  *(undefined8 *)&(this->ReferencedObjects).Elements = 0;
  *(undefined8 *)&(this->ReferencedObjects).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ReferencedObjects).Elements.field_0x20 = 0;
  this->Object = (UObject *)0x0;
  this->ObjectInfo = (FGCObjectInfo *)0x0;
  *(undefined4 *)&(this->ReferencedObjects).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ReferencedObjects).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ReferencedObjects).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->ReferencedObjects).Elements.field_0x30 = 0xffffffff;
  (this->ReferencedObjects).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ReferencedObjects).HashSize = 0;
  *(undefined8 *)&(this->ReferencedByObjects).Elements = 0;
  *(undefined8 *)&(this->ReferencedByObjects).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ReferencedByObjects).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ReferencedByObjects).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ReferencedByObjects).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ReferencedByObjects).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->ReferencedByObjects).Elements.field_0x30 = 0xffffffff;
  (this->ReferencedByObjects).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ReferencedByObjects).HashSize = 0;
  this->Visited = 0;
  return this;
}

