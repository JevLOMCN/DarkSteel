// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// FNetObjectBlob @ 144266ad0

FNetObjectBlob * __thiscall
UE::Net::Private::FNetObjectBlob::FNetObjectBlob(FNetObjectBlob *this,FNetBlobCreationInfo *param_1)

{
  FNetBlobCreationInfo local_res8 [4];
  
  local_res8[0].Type = param_1->Type;
  local_res8[0].Flags = param_1->Flags | RawDataNetBlob;
  FNetBlob::FNetBlob((FNetBlob *)this,local_res8);
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined ***)this = &___7FNetObjectBlob_Private_Net_UE__6B_;
  return this;
}

// DeserializeHeader @ 1442756e0

void __cdecl
UE::Net::Private::FNetObjectBlob::DeserializeHeader
          (FNetSerializationContext *param_1,FHeader *param_2)

{
  uint uVar1;
  
  uVar1 = FNetBitStreamReader::ReadBits(param_1->BitStreamReader,0x10);
  param_2->ObjectCount = uVar1;
  return;
}

// SerializeHeader @ 144292a40

void __cdecl
UE::Net::Private::FNetObjectBlob::SerializeHeader
          (FNetSerializationContext *param_1,FHeader *param_2)

{
  FNetBitStreamWriter::WriteBits(param_1->BitStreamWriter,param_2->ObjectCount,0x10);
  return;
}

