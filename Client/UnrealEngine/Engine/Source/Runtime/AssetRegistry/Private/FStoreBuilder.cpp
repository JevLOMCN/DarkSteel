// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 1

// FStoreBuilder @ 142ad7690

FStoreBuilder * __thiscall
FixedTagPrivate::FStoreBuilder::FStoreBuilder(FStoreBuilder *this,FOptions *param_1)

{
  FOptions::FOptions(&this->Options,param_1);
  (this->AnsiStrings).NumCharacters = 0;
  *(undefined8 *)&(this->AnsiStrings).StringIndices = 0;
  *(undefined8 *)&(this->AnsiStrings).StringIndices.field_0x8 = 0;
  *(undefined8 *)&(this->AnsiStrings).StringIndices.field_0x20 = 0;
  *(undefined4 *)&(this->AnsiStrings).StringIndices.field_0x28 = 0;
  *(undefined4 *)&(this->AnsiStrings).StringIndices.field_0x2c = 0x80;
  *(undefined4 *)&(this->AnsiStrings).StringIndices.field_0x34 = 0;
  *(undefined4 *)&(this->AnsiStrings).StringIndices.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AnsiStrings).StringIndices.field_0x40 = 0;
  *(undefined4 *)&(this->AnsiStrings).StringIndices.field_0x48 = 0;
  (this->AnsiStrings).Offsets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnsiStrings).Offsets.ArrayNum = 0;
  (this->AnsiStrings).Offsets.ArrayMax = 0;
  (this->WideStrings).NumCharacters = 0;
  *(undefined8 *)&(this->WideStrings).StringIndices = 0;
  *(undefined8 *)&(this->WideStrings).StringIndices.field_0x8 = 0;
  *(undefined8 *)&(this->WideStrings).StringIndices.field_0x20 = 0;
  *(undefined4 *)&(this->WideStrings).StringIndices.field_0x28 = 0;
  *(undefined4 *)&(this->WideStrings).StringIndices.field_0x2c = 0x80;
  *(undefined4 *)&(this->WideStrings).StringIndices.field_0x34 = 0;
  *(undefined4 *)&(this->WideStrings).StringIndices.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->WideStrings).StringIndices.field_0x40 = 0;
  *(undefined4 *)&(this->WideStrings).StringIndices.field_0x48 = 0;
  (this->WideStrings).Offsets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WideStrings).Offsets.ArrayNum = 0;
  (this->WideStrings).Offsets.ArrayMax = 0;
  *(undefined8 *)&this->NumberlessNameIndices = 0;
  *(undefined8 *)&(this->NumberlessNameIndices).field_0x8 = 0;
  *(undefined8 *)&(this->NumberlessNameIndices).field_0x20 = 0;
  *(undefined4 *)&(this->NumberlessNameIndices).field_0x28 = 0;
  *(undefined4 *)&(this->NumberlessNameIndices).field_0x2c = 0x80;
  *(undefined4 *)&(this->NumberlessNameIndices).field_0x34 = 0;
  *(undefined4 *)&(this->NumberlessNameIndices).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NumberlessNameIndices).field_0x40 = 0;
  *(undefined4 *)&(this->NumberlessNameIndices).field_0x48 = 0;
  *(undefined8 *)&this->NameIndices = 0;
  *(undefined8 *)&(this->NameIndices).field_0x8 = 0;
  *(undefined8 *)&(this->NameIndices).field_0x20 = 0;
  *(undefined4 *)&(this->NameIndices).field_0x28 = 0;
  *(undefined4 *)&(this->NameIndices).field_0x2c = 0x80;
  *(undefined4 *)&(this->NameIndices).field_0x34 = 0;
  *(undefined4 *)&(this->NameIndices).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NameIndices).field_0x40 = 0;
  *(undefined4 *)&(this->NameIndices).field_0x48 = 0;
  *(undefined8 *)&this->NumberlessExportPathIndices = 0;
  *(undefined8 *)&(this->NumberlessExportPathIndices).field_0x8 = 0;
  *(undefined8 *)&(this->NumberlessExportPathIndices).field_0x20 = 0;
  *(undefined4 *)&(this->NumberlessExportPathIndices).field_0x28 = 0;
  *(undefined4 *)&(this->NumberlessExportPathIndices).field_0x2c = 0x80;
  *(undefined4 *)&(this->NumberlessExportPathIndices).field_0x34 = 0;
  *(undefined4 *)&(this->NumberlessExportPathIndices).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NumberlessExportPathIndices).field_0x40 = 0;
  *(undefined4 *)&(this->NumberlessExportPathIndices).field_0x48 = 0;
  *(undefined8 *)&this->ExportPathIndices = 0;
  *(undefined8 *)&(this->ExportPathIndices).field_0x8 = 0;
  *(undefined8 *)&(this->ExportPathIndices).field_0x20 = 0;
  *(undefined4 *)&(this->ExportPathIndices).field_0x28 = 0;
  *(undefined4 *)&(this->ExportPathIndices).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExportPathIndices).field_0x34 = 0;
  *(undefined4 *)&(this->ExportPathIndices).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ExportPathIndices).field_0x40 = 0;
  *(undefined4 *)&(this->ExportPathIndices).field_0x48 = 0;
  *(undefined8 *)&this->TextIndices = 0;
  *(undefined8 *)&(this->TextIndices).field_0x8 = 0;
  *(undefined8 *)&(this->TextIndices).field_0x20 = 0;
  *(undefined4 *)&(this->TextIndices).field_0x28 = 0;
  *(undefined4 *)&(this->TextIndices).field_0x2c = 0x80;
  *(undefined4 *)&(this->TextIndices).field_0x34 = 0;
  *(undefined4 *)&(this->TextIndices).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TextIndices).field_0x40 = 0;
  *(undefined4 *)&(this->TextIndices).field_0x48 = 0;
  (this->NumberedPairs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NumberedPairs).ArrayNum = 0;
  (this->NumberedPairs).ArrayMax = 0;
  (this->NumberlessPairs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NumberlessPairs).ArrayNum = 0;
  (this->NumberlessPairs).ArrayMax = 0;
  this->bFinalized = false;
  return this;
}

