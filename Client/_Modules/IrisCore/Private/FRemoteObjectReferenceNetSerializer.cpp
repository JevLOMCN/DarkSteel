// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 11

// CloneDynamicState @ 144328ae0

void __cdecl
UE::Net::FRemoteObjectReferenceNetSerializer::CloneDynamicState
          (FNetSerializationContext *param_1,FNetCloneDynamicStateArgs *param_2)

{
  FNetCloneDynamicStateArgs local_38;
  
  local_38.Source = param_2->Source;
  local_38.Target = param_2->Target;
  *(undefined8 *)local_38.Target = *(undefined8 *)local_38.Source;
  *(undefined2 *)(local_38.Target + 8) = *(undefined2 *)(local_38.Source + 8);
  local_38._padding_ = param_2->_padding_;
  local_38._padding_ = param_2->_padding_;
  local_38._padding_ = (longlong)&RemoteObjectPathNameNetSerializerConfig;
  local_38.Source = local_38.Source + 0x10;
  local_38.Target = local_38.Target + 0x10;
  (*RemoteObjectPathNameNetSerializer->CloneDynamicState)(param_1,&local_38);
  return;
}

// CollectNetReferences @ 144328f70

void __cdecl
UE::Net::FRemoteObjectReferenceNetSerializer::CollectNetReferences
          (FNetSerializationContext *param_1,FNetCollectReferencesArgs *param_2)

{
  return;
}

// Dequantize @ 14432ac60

void __cdecl
UE::Net::FRemoteObjectReferenceNetSerializer::Dequantize
          (FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  FRemoteObjectReference *this;
  ulonglong uVar1;
  FRemoteServerId FVar2;
  FRemoteServerId FVar3;
  undefined4 extraout_var;
  ulonglong uVar4;
  undefined1 local_res10 [8];
  undefined1 local_58 [16];
  void *local_48;
  undefined8 local_40;
  FNetDequantizeArgs local_38;
  
  local_38._padding_ = param_2->_padding_;
  this = (FRemoteObjectReference *)param_2->Target;
  local_38._padding_ = param_2->_padding_;
  uVar1 = *(ulonglong *)param_2->Source;
  local_58._0_8_ = (void *)0x0;
  local_58._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_38.Source = (ulong64)((ulonglong *)param_2->Source + 2);
  local_38.Target = (ulong64)local_58;
  local_38._padding_ = (longlong)&RemoteObjectPathNameNetSerializerConfig;
  (*RemoteObjectPathNameNetSerializer->Dequantize)(param_1,&local_38);
  FVar3 = FRemoteServerId::FromIdNumber((uint)local_res10);
  FVar2.Id = *(uint *)CONCAT44(extraout_var,FVar3.Id);
  if (*(uint *)CONCAT44(extraout_var,FVar3.Id) == FRemoteServerId::GlobalServerId.Id) {
    FVar2.Id = 0x3fd;
  }
  uVar4 = uVar1 >> 0x36;
  if ((uint)(uVar1 >> 0x36) == FRemoteServerId::GlobalServerId.Id) {
    uVar4 = 0x3fd;
  }
  FRemoteObjectReference::NetDequantize
            (this,(FRemoteObjectId)(uVar4 << 0x36 | uVar1 & 0x3ffffffffffffe),FVar2,
             (FRemoteObjectPathName *)local_58);
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((void *)local_58._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_58._0_8_);
  }
  return;
}

// Deserialize @ 14432d710

void __cdecl
UE::Net::FRemoteObjectReferenceNetSerializer::Deserialize
          (FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  FNetBitStreamReader *this;
  ulonglong *puVar1;
  uint uVar2;
  FNetDeserializeArgs local_28;
  
  this = param_1->BitStreamReader;
  puVar1 = (ulonglong *)param_2->Target;
  uVar2 = FNetBitStreamReader::ReadBits(this,0x20);
  *puVar1 = (ulonglong)uVar2;
  uVar2 = FNetBitStreamReader::ReadBits(this,0x20);
  *puVar1 = *puVar1 | (ulonglong)uVar2 << 0x20;
  uVar2 = FNetBitStreamReader::ReadBits(this,10);
  *(short *)(puVar1 + 1) = (short)uVar2;
  local_28._padding_._0_4_ = (undefined4)param_2->_padding_;
  local_28._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  local_28._padding_._0_4_ = (undefined4)param_2->_padding_;
  local_28._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  local_28._padding_ = (longlong)&RemoteObjectPathNameNetSerializerConfig;
  local_28.Target = (ulong64)(puVar1 + 2);
  (*RemoteObjectPathNameNetSerializer->Deserialize)(param_1,&local_28);
  return;
}

// DeserializeDelta @ 14432ef20

void __cdecl
UE::Net::FRemoteObjectReferenceNetSerializer::DeserializeDelta
          (FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  FNetBitStreamReader *this;
  ulonglong *puVar1;
  uint uVar2;
  FNetDeserializeDeltaArgs local_38;
  
  this = param_1->BitStreamReader;
  puVar1 = (ulonglong *)param_2->_padding_;
  uVar2 = FNetBitStreamReader::ReadBits(this,0x20);
  *puVar1 = (ulonglong)uVar2;
  uVar2 = FNetBitStreamReader::ReadBits(this,0x20);
  *puVar1 = *puVar1 | (ulonglong)uVar2 << 0x20;
  uVar2 = FNetBitStreamReader::ReadBits(this,10);
  *(short *)(puVar1 + 1) = (short)uVar2;
  local_38._padding_ = param_2->_padding_;
  local_38._padding_._0_4_ = (undefined4)param_2->_padding_;
  local_38._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  local_38._padding_ = (longlong)&RemoteObjectPathNameNetSerializerConfig;
  local_38._padding_ = (longlong)(puVar1 + 2);
  local_38.Prev = param_2->Prev;
  (*RemoteObjectPathNameNetSerializer->DeserializeDelta)(param_1,&local_38);
  return;
}

// FreeDynamicState @ 14432ff20

void __cdecl
UE::Net::FRemoteObjectReferenceNetSerializer::FreeDynamicState
          (FNetSerializationContext *param_1,FNetFreeDynamicStateArgs *param_2)

{
  FNetFreeDynamicStateArgs local_28;
  
  local_28._padding_ = param_2->_padding_;
  local_28._padding_ = param_2->_padding_;
  local_28._padding_ = (longlong)&RemoteObjectPathNameNetSerializerConfig;
  local_28.Source = param_2->Source + 0x10;
  (*RemoteObjectPathNameNetSerializer->FreeDynamicState)(param_1,&local_28);
  return;
}

// IsEqual @ 144334150

bool __cdecl
UE::Net::FRemoteObjectReferenceNetSerializer::IsEqual
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

// Quantize @ 144336d20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UE::Net::FRemoteObjectReferenceNetSerializer::Quantize
          (FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  FRemoteObjectId_u_0 *pFVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  FRemoteServerId FVar6;
  UObject *pUVar7;
  FRemoteObjectPathName *pFVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  undefined1 local_98 [16];
  void *local_88;
  undefined8 local_80;
  void *local_78 [2];
  void *local_68;
  FNetQuantizeArgs local_58;
  
  pFVar1 = (FRemoteObjectId_u_0 *)param_2->Source;
  puVar2 = (ulonglong *)param_2->Target;
  uVar3 = pFVar1->Id;
  FVar6.Id = (uint)(uVar3 >> 0x36);
  if (((FVar6.Id == 0x3fd) &&
      (FVar6.Id = FRemoteServerId::GlobalServerId.Id, FRemoteServerId::GlobalServerId.Id == 0x3fd))
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("GlobalServerId.Id != (uint32)ERemoteServerIdConstants::Local",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\RemoteObjectTypes.h"
                            ,0x9d,
                            L"Unable to convert Local server id to global. Global server id hasn\'t been initialized yet."
                           ), FVar6 = FRemoteServerId::GlobalServerId, bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((0x3ff < FVar6.Id) &&
     (bVar5 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2664264158983225613>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\RemoteObjectTypes.h"
                         ,0x10d,"(uint64_t)InServerId.Id <= MAX_REMOTE_OBJECT_SERVER_ID"), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *puVar2 = (ulonglong)FVar6.Id << 0x36 | uVar3 & 0x3ffffffffffffe;
  FVar6.Id = *(uint *)(pFVar1 + 1);
  if (((*(uint *)(pFVar1 + 1) == 0x3fd) &&
      (FVar6 = FRemoteServerId::GlobalServerId, FRemoteServerId::GlobalServerId.Id == 0x3fd)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("GlobalServerId.Id != (uint32)ERemoteServerIdConstants::Local",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\RemoteObjectTypes.h"
                         ,0x9d,
                         L"Unable to convert Local server id to global. Global server id hasn\'t been initialized yet."
                        ), FVar6 = FRemoteServerId::GlobalServerId, bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(short *)(puVar2 + 1) = (short)FVar6.Id;
  local_98._0_8_ = (void *)0x0;
  local_98._8_8_ = 0;
  local_88 = (void *)0x0;
  local_80 = 0;
  uVar3 = pFVar1->Id;
  uVar10 = uVar3 >> 0x36;
  uVar9 = (uint)(uVar3 >> 0x36);
  FRemoteServerId::VerifyComparableServerIds(uVar9,0);
  if (uVar9 == 0x3fd) {
    uVar10 = (ulonglong)FRemoteServerId::GlobalServerId.Id;
  }
  if (((uVar10 & 0x7ff) != 0 || (uVar3 >> 1 & 0x1fffffffffffff) != 0) &&
     (pUVar7 = StaticFindObjectFastInternal
                         ((FRemoteObjectId)*(FRemoteObjectId_u_0 *)&pFVar1->_s_0,RF_NoFlags,Borrowed
                         ), pUVar7 != (UObject *)0x0)) {
    RemoteObject::Transfer::RegisterSharedObject(pUVar7);
    pFVar8 = FRemoteObjectPathName::FRemoteObjectPathName((FRemoteObjectPathName *)local_78,pUVar7);
    if ((FRemoteObjectPathName *)local_98 != pFVar8) {
      if ((void *)local_98._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_98._0_8_);
      }
      local_98._0_8_ = *(undefined8 *)pFVar8;
      *(undefined8 *)pFVar8 = 0;
      local_98._8_8_ = *(undefined8 *)&pFVar8->field_0x8;
      *(undefined8 *)&pFVar8->field_0x8 = 0;
    }
    puVar11 = &pFVar8->field_0x10;
    if (&local_88 != (void **)puVar11) {
      if (local_88 != (void *)0x0) {
        FMemory::Free(local_88);
      }
      local_88 = *(void **)puVar11;
      *(undefined8 *)puVar11 = 0;
      local_80 = *(undefined8 *)&pFVar8->field_0x18;
      *(undefined8 *)&pFVar8->field_0x18 = 0;
    }
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
    if (local_78[0] != (void *)0x0) {
      FMemory::Free(local_78[0]);
    }
  }
  local_58._padding_._0_4_ = (undefined4)param_2->_padding_;
  local_58._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  local_58.Source = (ulong64)local_98;
  local_58._padding_._0_4_ = (undefined4)param_2->_padding_;
  local_58._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  local_58.Target = (ulong64)(puVar2 + 2);
  local_58._padding_ = (longlong)&RemoteObjectPathNameNetSerializerConfig;
  (*RemoteObjectPathNameNetSerializer->Quantize)(param_1,&local_58);
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  if ((void *)local_98._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  return;
}

// Serialize @ 14433c8f0

void __cdecl
UE::Net::FRemoteObjectReferenceNetSerializer::Serialize
          (FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  uint *puVar1;
  FNetBitStreamWriter *this;
  FNetSerializeArgs local_28;
  
  puVar1 = (uint *)param_2->Source;
  this = param_1->BitStreamWriter;
  FNetBitStreamWriter::WriteBits(this,*puVar1,0x20);
  FNetBitStreamWriter::WriteBits(this,(uint)((ulonglong)*(undefined8 *)puVar1 >> 0x20),0x20);
  FNetBitStreamWriter::WriteBits(this,(uint)(ushort)puVar1[2],10);
  local_28._padding_._0_4_ = (undefined4)param_2->_padding_;
  local_28._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  local_28._padding_._0_4_ = (undefined4)param_2->_padding_;
  local_28._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  local_28._padding_ = (longlong)&RemoteObjectPathNameNetSerializerConfig;
  local_28.Source = (ulong64)(puVar1 + 4);
  (*RemoteObjectPathNameNetSerializer->Serialize)(param_1,&local_28);
  return;
}

// SerializeDelta @ 14433de30

void __cdecl
UE::Net::FRemoteObjectReferenceNetSerializer::SerializeDelta
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  uint *puVar1;
  FNetBitStreamWriter *this;
  FNetSerializeDeltaArgs local_38;
  
  puVar1 = (uint *)param_2->_padding_;
  this = param_1->BitStreamWriter;
  FNetBitStreamWriter::WriteBits(this,*puVar1,0x20);
  FNetBitStreamWriter::WriteBits(this,(uint)((ulonglong)*(undefined8 *)puVar1 >> 0x20),0x20);
  FNetBitStreamWriter::WriteBits(this,(uint)(ushort)puVar1[2],10);
  local_38._padding_ = param_2->_padding_;
  local_38._padding_._0_4_ = (undefined4)param_2->_padding_;
  local_38._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  local_38._padding_ = (longlong)&RemoteObjectPathNameNetSerializerConfig;
  local_38._padding_ = (longlong)(puVar1 + 4);
  local_38.Prev = param_2->Prev;
  (*RemoteObjectPathNameNetSerializer->SerializeDelta)(param_1,&local_38);
  return;
}

// Validate @ 14433f720

bool __cdecl
UE::Net::FRemoteObjectReferenceNetSerializer::Validate
          (FNetSerializationContext *param_1,FNetValidateArgs *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  puVar1 = (ulonglong *)param_2->Source;
  uVar2 = *puVar1;
  uVar4 = uVar2 >> 0x36;
  uVar3 = (uint)(uVar2 >> 0x36);
  FRemoteServerId::VerifyComparableServerIds(uVar3,0);
  if (uVar3 == 0x3fd) {
    uVar4 = (ulonglong)FRemoteServerId::GlobalServerId.Id;
  }
  return ((int)puVar1[1] == 0) != ((uVar4 & 0x7ff) != 0 || (uVar2 >> 1 & 0x1fffffffffffff) != 0);
}

