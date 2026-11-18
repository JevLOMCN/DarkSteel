// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicModule
// Functions: 2

// IDNAReader @ 14a6606d0

IDNAReader * __thiscall IDNAReader::IDNAReader(IDNAReader *this)

{
  *(undefined ***)this = &___7IRBFBehaviorReader__6B_;
  *(undefined ***)(&this->field_0x8 + *(int *)(*(longlong *)&this->field_0x8 + 4)) =
       &IRBFBehaviorReader::_vftable__for__IDefinitionReader__;
  *(undefined ***)(&this->field_0x8 + *(int *)(*(longlong *)&this->field_0x8 + 8)) =
       &IRBFBehaviorReader::_vftable__for__IBehaviorReader__;
  *(undefined ***)&this->field_0x10 = &IGeometryReader::_vftable__for__IGeometryReader__;
  *(undefined ***)(&this->field_0x18 + *(int *)(*(longlong *)&this->field_0x18 + 4)) =
       &IGeometryReader::_vftable__for__IDefinitionReader__;
  *(undefined ***)&this->field_0x20 =
       &IMachineLearnedBehaviorReader::_vftable__for__IMachineLearnedBehaviorReader__;
  *(undefined ***)(&this->field_0x28 + *(int *)(*(longlong *)&this->field_0x28 + 4)) =
       &IMachineLearnedBehaviorReader::_vftable__for__IDefinitionReader__;
  *(undefined ***)&this->field_0x30 =
       &IJointBehaviorMetadataReader::_vftable__for__IJointBehaviorMetadataReader__;
  *(undefined ***)(&this->field_0x38 + *(int *)(*(longlong *)&this->field_0x38 + 4)) =
       &IJointBehaviorMetadataReader::_vftable__for__IDefinitionReader__;
  *(undefined ***)&this->field_0x40 =
       &ITwistSwingBehaviorReader::_vftable__for__ITwistSwingBehaviorReader__;
  *(undefined ***)(&this->field_0x48 + *(int *)(*(longlong *)&this->field_0x48 + 4)) =
       &ITwistSwingBehaviorReader::_vftable__for__IDefinitionReader__;
  *(undefined ***)this = &___7IDNAReader__6B_;
  *(undefined ***)&this->field_0x10 = &_vftable__for__IGeometryReader__;
  *(undefined ***)&this->field_0x20 = &_vftable__for__IMachineLearnedBehaviorReader__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IJointBehaviorMetadataReader__;
  *(undefined ***)&this->field_0x40 = &_vftable__for__ITwistSwingBehaviorReader__;
  *(undefined ***)(&this->field_0x8 + *(int *)(*(longlong *)&this->field_0x8 + 4)) =
       &_vftable__for__IDefinitionReader__;
  *(undefined ***)(&this->field_0x8 + *(int *)(*(longlong *)&this->field_0x8 + 8)) =
       &_vftable__for__IBehaviorReader__;
  return this;
}

// ~IDNAReader @ 14a6612a0

void __thiscall IDNAReader::~IDNAReader(IDNAReader *this)

{
  return;
}

