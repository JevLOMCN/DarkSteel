// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 6

// Dequantize @ 1442fedd0

void __cdecl
UE::Net::FBitfieldNetSerializer::Dequantize
          (FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *(byte *)(param_2->_padding_ + 0x10);
  bVar2 = 0;
  if (*(char *)param_2->Source != '\0') {
    bVar2 = bVar1;
  }
  *(byte *)param_2->Target = bVar2 | ~bVar1 & *(byte *)param_2->Target;
  return;
}

// Deserialize @ 1442ff980

void __cdecl
UE::Net::FBitfieldNetSerializer::Deserialize
          (FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  uint uVar1;
  
  uVar1 = FNetBitStreamReader::ReadBits(param_1->BitStreamReader,1);
  *(char *)param_2->Target = (char)uVar1;
  return;
}

// IsEqual @ 144308780

bool __cdecl
UE::Net::FBitfieldNetSerializer::IsEqual(FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  if (param_2->bStateIsQuantized != false) {
    return *(byte *)param_2->Source0 == *(byte *)param_2->Source1;
  }
  return (*(byte *)(param_2->_padding_ + 0x10) &
         (*(byte *)param_2->Source1 ^ *(byte *)param_2->Source0)) == 0;
}

// Quantize @ 14430cac0

void __cdecl
UE::Net::FBitfieldNetSerializer::Quantize
          (FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  *(bool *)param_2->Target = (*(byte *)(param_2->_padding_ + 0x10) & *(byte *)param_2->Source) != 0;
  return;
}

// Serialize @ 144310930

void __cdecl
UE::Net::FBitfieldNetSerializer::Serialize
          (FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  FNetBitStreamWriter::WriteBits(param_1->BitStreamWriter,(uint)*(byte *)param_2->Source,1);
  return;
}

// Validate @ 144318180

bool __cdecl
UE::Net::FBitfieldNetSerializer::Validate
          (FNetSerializationContext *param_1,FNetValidateArgs *param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2->_padding_ + 0x10);
  return (bVar1 & bVar1 - 1) == 0;
}

