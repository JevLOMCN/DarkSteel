// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 4

// Deserialize @ 14432b460

void __cdecl
UE::Net::Private::FFloatTripletNetSerializer<float>::Deserialize
          (FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  FNetBitStreamReader *this;
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  this = param_1->BitStreamReader;
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar2 = FNetBitStreamReader::ReadBits(this,1);
  if ((uVar2 & 1) != 0) {
    uVar3 = FNetBitStreamReader::ReadBits(this,0x20);
  }
  uVar2 = FNetBitStreamReader::ReadBits(this,1);
  if ((uVar2 & 1) != 0) {
    uVar4 = FNetBitStreamReader::ReadBits(this,0x20);
  }
  uVar2 = FNetBitStreamReader::ReadBits(this,1);
  if ((uVar2 & 1) != 0) {
    uVar5 = FNetBitStreamReader::ReadBits(this,0x20);
  }
  puVar1 = (uint *)param_2->Target;
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  return;
}

// Deserialize @ 14432b520

void __cdecl
UE::Net::Private::FFloatTripletNetSerializer<double>::Deserialize
          (FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  FNetBitStreamReader *this;
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  this = param_1->BitStreamReader;
  uVar4 = 0;
  uVar2 = FNetBitStreamReader::ReadBits(this,1);
  uVar5 = uVar4;
  if ((uVar2 & 1) != 0) {
    uVar2 = FNetBitStreamReader::ReadBits(this,0x20);
    uVar3 = FNetBitStreamReader::ReadBits(this,0x20);
    uVar5 = CONCAT44(uVar3,uVar2);
  }
  uVar2 = FNetBitStreamReader::ReadBits(this,1);
  uVar6 = uVar4;
  if ((uVar2 & 1) != 0) {
    uVar2 = FNetBitStreamReader::ReadBits(this,0x20);
    uVar3 = FNetBitStreamReader::ReadBits(this,0x20);
    uVar6 = CONCAT44(uVar3,uVar2);
  }
  uVar2 = FNetBitStreamReader::ReadBits(this,1);
  if ((uVar2 & 1) != 0) {
    uVar2 = FNetBitStreamReader::ReadBits(this,0x20);
    uVar3 = FNetBitStreamReader::ReadBits(this,0x20);
    uVar4 = CONCAT44(uVar3,uVar2);
  }
  puVar1 = (undefined8 *)param_2->Target;
  *puVar1 = uVar5;
  puVar1[2] = uVar4;
  puVar1[1] = uVar6;
  return;
}

// Serialize @ 14433a890

void __cdecl
UE::Net::Private::FFloatTripletNetSerializer<float>::Serialize
          (FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  FNetBitStreamWriter *this;
  
  puVar4 = (uint *)param_2->Source;
  this = param_1->BitStreamWriter;
  uVar1 = *puVar4;
  uVar2 = puVar4[1];
  uVar3 = puVar4[2];
  FNetBitStreamWriter::WriteBits(this,(uint)(uVar1 != 0),1);
  if (uVar1 != 0) {
    FNetBitStreamWriter::WriteBits(this,uVar1,0x20);
  }
  FNetBitStreamWriter::WriteBits(this,(uint)(uVar2 != 0),1);
  if (uVar2 != 0) {
    FNetBitStreamWriter::WriteBits(this,uVar2,0x20);
  }
  FNetBitStreamWriter::WriteBits(this,(uint)(uVar3 != 0),1);
  if (uVar3 != 0) {
    FNetBitStreamWriter::WriteBits(this,uVar3,0x20);
  }
  return;
}

// Serialize @ 14433a990

void __cdecl
UE::Net::Private::FFloatTripletNetSerializer<double>::Serialize
          (FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  longlong *plVar1;
  FNetBitStreamWriter *this;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)param_2->Source;
  this = param_1->BitStreamWriter;
  lVar2 = *plVar1;
  lVar3 = plVar1[1];
  lVar4 = plVar1[2];
  FNetBitStreamWriter::WriteBits(this,(uint)(lVar2 != 0),1);
  if (lVar2 != 0) {
    FNetBitStreamWriter::WriteBits(this,(uint)lVar2,0x20);
    FNetBitStreamWriter::WriteBits(this,(uint)((ulonglong)lVar2 >> 0x20),0x20);
  }
  FNetBitStreamWriter::WriteBits(this,(uint)(lVar3 != 0),1);
  if (lVar3 != 0) {
    FNetBitStreamWriter::WriteBits(this,(uint)lVar3,0x20);
    FNetBitStreamWriter::WriteBits(this,(uint)((ulonglong)lVar3 >> 0x20),0x20);
  }
  FNetBitStreamWriter::WriteBits(this,(uint)(lVar4 != 0),1);
  if (lVar4 != 0) {
    FNetBitStreamWriter::WriteBits(this,(uint)lVar4,0x20);
    FNetBitStreamWriter::WriteBits(this,(uint)((ulonglong)lVar4 >> 0x20),0x20);
  }
  return;
}

