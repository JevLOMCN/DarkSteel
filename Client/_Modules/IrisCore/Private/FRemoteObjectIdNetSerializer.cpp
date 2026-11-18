// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 6

// Dequantize @ 14432abc0

void __cdecl
UE::Net::FRemoteObjectIdNetSerializer::Dequantize
          (FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  
  puVar1 = (ulonglong *)param_2->Target;
  uVar2 = *(ulonglong *)param_2->Source;
  uVar6 = uVar2 >> 0x36;
  uVar5 = (uint)(uVar2 >> 0x36);
  if (uVar5 == 0x3fd) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("LocalizedId.GetServerId().Id != (uint32)ERemoteServerIdConstants::Local",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Serialization\\RemoteObjectIdNetSerializer.cpp"
                       ,0x4e,L"Local server id should never be serialized");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (uVar5 == FRemoteServerId::GlobalServerId.Id) {
    uVar6 = 0x3fd;
  }
  *puVar1 = uVar6 << 0x36 | uVar2 & 0x3ffffffffffffe;
  return;
}

// Deserialize @ 14432d6b0

void __cdecl
UE::Net::FRemoteObjectIdNetSerializer::Deserialize
          (FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  FNetBitStreamReader *this;
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  
  this = param_1->BitStreamReader;
  puVar1 = (undefined8 *)param_2->Target;
  uVar2 = FNetBitStreamReader::ReadBits(this,0x20);
  uVar3 = FNetBitStreamReader::ReadBits(this,0x20);
  *puVar1 = CONCAT44(uVar3,uVar2);
  return;
}

// IsEqual @ 144334110

bool __cdecl
UE::Net::FRemoteObjectIdNetSerializer::IsEqual
          (FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  long64 lVar1;
  
  if (param_2->bStateIsQuantized != false) {
    return ((FRemoteObjectId_u_0 *)param_2->Source0)->Id ==
           ((FRemoteObjectId_u_0 *)param_2->Source1)->Id;
  }
  lVar1 = FRemoteObjectId::Compare
                    ((FRemoteObjectId *)&((FRemoteObjectId_u_0 *)param_2->Source0)->_s_0,
                     (FRemoteObjectId)
                     *(FRemoteObjectId_u_0 *)&((FRemoteObjectId_u_0 *)param_2->Source1)->_s_0);
  return lVar1 == 0;
}

// Quantize @ 144336cc0

void __cdecl
UE::Net::FRemoteObjectIdNetSerializer::Quantize
          (FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 local_res10;
  
  puVar1 = (undefined8 *)param_2->Target;
  FRemoteObjectId::GetGlobalized((FRemoteObjectId *)param_2->Source);
  *puVar1 = local_res10;
  if ((uint)((ulonglong)local_res10 >> 0x36) == 0x3fd) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LocalizedId.GetServerId().Id != (uint32)ERemoteServerIdConstants::Local",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Serialization\\RemoteObjectIdNetSerializer.cpp"
                       ,0x44,L"Local server id should never be serialized");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// Serialize @ 14433c8a0

void __cdecl
UE::Net::FRemoteObjectIdNetSerializer::Serialize
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

// Validate @ 14433f6c0

bool __cdecl
UE::Net::FRemoteObjectIdNetSerializer::Validate
          (FNetSerializationContext *param_1,FNetValidateArgs *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FRemoteServerId FVar4;
  
  FVar4.Id = (uint)((ulonglong)*(undefined8 *)param_2->Source >> 0x36);
  if (((FVar4.Id == 0x3fd) &&
      (FVar4.Id = FRemoteServerId::GlobalServerId.Id, FRemoteServerId::GlobalServerId.Id == 0x3fd))
     && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                           ("GlobalServerId.Id != (uint32)ERemoteServerIdConstants::Local",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\RemoteObjectTypes.h"
                            ,0x9d,
                            L"Unable to convert Local server id to global. Global server id hasn\'t been initialized yet."
                           ), FVar4 = FRemoteServerId::GlobalServerId, bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return FVar4.Id < 0x400;
}

