// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// FWorkerThreadData @ 145cd24b0

FWorkerThreadData * __thiscall
RHIValidation::FShaderBindingTable::FWorkerThreadData::FWorkerThreadData(FWorkerThreadData *this)

{
  *(undefined8 *)&(this->SRVs).Elements = 0;
  *(undefined8 *)&(this->SRVs).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SRVs).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->SRVs).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SRVs).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SRVs).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->SRVs).Elements.field_0x30 = 0xffffffff;
  (this->SRVs).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->SRVs).HashSize = 0;
  *(undefined8 *)&(this->UAVs).Elements = 0;
  *(undefined8 *)&(this->UAVs).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->UAVs).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->UAVs).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->UAVs).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->UAVs).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->UAVs).Elements.field_0x30 = 0xffffffff;
  (this->UAVs).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->UAVs).HashSize = 0;
  return this;
}

