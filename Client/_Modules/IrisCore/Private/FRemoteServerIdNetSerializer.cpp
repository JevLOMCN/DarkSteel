// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 6

// Dequantize @ 14432ad60

void __cdecl
UE::Net::FRemoteServerIdNetSerializer::Dequantize
          (FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  ushort *puVar1;
  uint *puVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  puVar1 = (ushort *)param_2->Source;
  puVar2 = (uint *)param_2->Target;
  if (*puVar1 == 0x3fd) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("QuantizedValue != static_cast<QuantizedType>(ERemoteServerIdConstants::Local)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Serialization\\RemoteServerIdNetSerializer.cpp"
                       ,0x49,L"Local server id should never be serialized");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = (uint)*puVar1;
  if (uVar5 == FRemoteServerId::GlobalServerId.Id) {
    uVar5 = 0x3fd;
  }
  *puVar2 = uVar5;
  return;
}

// Deserialize @ 14432d7d0

void __cdecl
UE::Net::FRemoteServerIdNetSerializer::Deserialize
          (FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  
  puVar1 = (undefined2 *)param_2->Target;
  uVar2 = FNetBitStreamReader::ReadBits(param_1->BitStreamReader,10);
  *puVar1 = (short)uVar2;
  return;
}

// IsEqual @ 144334190

bool __cdecl
UE::Net::FRemoteServerIdNetSerializer::IsEqual
          (FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  uint *puVar1;
  FRemoteServerId FVar2;
  FRemoteServerId FVar3;
  
  puVar1 = (uint *)param_2->Source0;
  if (param_2->bStateIsQuantized != false) {
    return (short)*puVar1 == (short)*(uint *)param_2->Source1;
  }
  FVar3.Id = *(uint *)param_2->Source1;
  FRemoteServerId::VerifyComparableServerIds(*puVar1,FVar3.Id);
  FVar2.Id = *puVar1;
  if (*puVar1 == 0x3fd) {
    FVar2 = FRemoteServerId::GlobalServerId;
  }
  if (FVar3.Id == 0x3fd) {
    FVar3 = FRemoteServerId::GlobalServerId;
  }
  return FVar2.Id == FVar3.Id;
}

// Quantize @ 144336fb0

void __cdecl
UE::Net::FRemoteServerIdNetSerializer::Quantize
          (FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  short *psVar1;
  code *pcVar2;
  bool bVar3;
  FRemoteServerId FVar4;
  
  psVar1 = (short *)param_2->Target;
  FVar4.Id = *(uint *)param_2->Source;
  if (((*(uint *)param_2->Source == 0x3fd) &&
      (FVar4.Id = FRemoteServerId::GlobalServerId.Id, FRemoteServerId::GlobalServerId.Id == 0x3fd))
     && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("GlobalServerId.Id != (uint32)ERemoteServerIdConstants::Local",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\RemoteObjectTypes.h"
                            ,0x9d,
                            L"Unable to convert Local server id to global. Global server id hasn\'t been initialized yet."
                           ), FVar4 = FRemoteServerId::GlobalServerId, bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *psVar1 = (short)FVar4.Id;
  if (((short)FVar4.Id == 0x3fd) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TargetValue != static_cast<QuantizedType>(ERemoteServerIdConstants::Local)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Serialization\\RemoteServerIdNetSerializer.cpp"
                         ,0x41,L"Local server id should never be serialized"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// Serialize @ 14433c9b0

void __cdecl
UE::Net::FRemoteServerIdNetSerializer::Serialize
          (FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  FNetBitStreamWriter::WriteBits(param_1->BitStreamWriter,(uint)*(ushort *)param_2->Source,10);
  return;
}

// Validate @ 14433f790

bool __cdecl
UE::Net::FRemoteServerIdNetSerializer::Validate
          (FNetSerializationContext *param_1,FNetValidateArgs *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FRemoteServerId FVar4;
  
  FVar4.Id = *(uint *)param_2->Source;
  if (((*(uint *)param_2->Source == 0x3fd) &&
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

