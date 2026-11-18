// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 5

// Dequantize @ 1442fee00

void __cdecl
UE::Net::FDateTimeNetSerializer::Dequantize
          (FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  *(undefined8 *)param_2->Target = *(undefined8 *)param_2->Source;
  return;
}

// Deserialize @ 1442ff9e0

void __cdecl
UE::Net::FDateTimeNetSerializer::Deserialize
          (FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  FNetBitStreamReader *this;
  uint uVar1;
  uint uVar2;
  
  this = param_1->BitStreamReader;
  uVar1 = FNetBitStreamReader::ReadBits(this,0x20);
  uVar2 = FNetBitStreamReader::ReadBits(this,0x20);
  *(ulonglong *)param_2->Target = CONCAT44(uVar2,uVar1);
  return;
}

// IsEqual @ 1443087d0

bool __cdecl
UE::Net::FDateTimeNetSerializer::IsEqual(FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  return *(longlong *)param_2->Source0 == *(longlong *)param_2->Source1;
}

// Quantize @ 14430cae0

void __cdecl
UE::Net::FDateTimeNetSerializer::Quantize
          (FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  *(undefined8 *)param_2->Target = *(undefined8 *)param_2->Source;
  return;
}

// Serialize @ 144310980

void __cdecl
UE::Net::FDateTimeNetSerializer::Serialize
          (FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  FNetBitStreamWriter *this;
  undefined8 uVar1;
  
  this = param_1->BitStreamWriter;
  uVar1 = *(undefined8 *)param_2->Source;
  FNetBitStreamWriter::WriteBits(this,(uint)uVar1,0x20);
  FNetBitStreamWriter::WriteBits(this,(uint)((ulonglong)uVar1 >> 0x20),0x20);
  return;
}

