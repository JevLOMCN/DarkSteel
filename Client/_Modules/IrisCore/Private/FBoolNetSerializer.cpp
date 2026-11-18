// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 4

// Deserialize @ 1442ff9b0

void __cdecl
UE::Net::FBoolNetSerializer::Deserialize
          (FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  uint uVar1;
  
  uVar1 = FNetBitStreamReader::ReadBits(param_1->BitStreamReader,1);
  *(char *)param_2->Target = (char)uVar1;
  return;
}

// IsEqual @ 1443087b0

bool __cdecl
UE::Net::FBoolNetSerializer::IsEqual(FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  return (*(char *)param_2->Source1 != '\0') != (*(char *)param_2->Source0 == '\0');
}

// Serialize @ 144310950

void __cdecl
UE::Net::FBoolNetSerializer::Serialize(FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  FNetBitStreamWriter::WriteBits
            (param_1->BitStreamWriter,(uint)(*(char *)param_2->Source != '\0'),1);
  return;
}

// Validate @ 1443181a0

bool __cdecl
UE::Net::FBoolNetSerializer::Validate(FNetSerializationContext *param_1,FNetValidateArgs *param_2)

{
  return *(byte *)param_2->Source < 2;
}

