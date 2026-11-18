// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 1

// FParameters @ 1441f8b70

FParameters * __thiscall
UE::Net::FReplicationStateDescriptorBuilder::FParameters::FParameters(FParameters *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  this->SinglePropertyIndex = -1;
  this->DescriptorRegistry = (FReplicationStateDescriptorRegistry *)0x0;
  this->ReplicationSystem = (UReplicationSystem *)0x0;
  this->DefaultStateSource = (UObject *)0x0;
  puVar2 = &this->field_0x18;
  this->IncludeSuper = true;
  this->SkipCheckForCustomNetSerializerForStruct = false;
  this->AllowFastArrayWithExtraReplicatedProperties = false;
  this->EnableFastArrayHandling = true;
  this->GetLifeTimeProperties = true;
  return this;
}

