// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// DeserializeDelta @ 147bd6d80

void __cdecl
UE::Net::TPolymorphicStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,0>::
DeserializeDelta(FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  FNetBitStreamReader *this;
  undefined8 *puVar3;
  FName FVar4;
  uint uVar5;
  FReplicationStateDescriptor *pFVar6;
  longlong lVar7;
  longlong lVar8;
  uchar *local_28;
  ulonglong uStack_20;
  
  puVar2 = (undefined8 *)param_2->_padding_;
  pFVar6 = (FReplicationStateDescriptor *)0x0;
  lVar7 = param_2->_padding_;
  this = param_1->BitStreamReader;
  puVar3 = (undefined8 *)param_2->Prev;
  if ((*(int *)(puVar2 + 1) - 1U < *(uint *)(lVar7 + 0x18)) &&
     (lVar8 = (ulonglong)(*(int *)(puVar2 + 1) - 1U) * 0x10 + *(longlong *)(lVar7 + 0x10),
     lVar8 != 0)) {
    pFVar6 = *(FReplicationStateDescriptor **)(lVar8 + 8);
  }
  if ((uchar *)*puVar2 != (uchar *)0x0) {
    if ((pFVar6 != (FReplicationStateDescriptor *)0x0) &&
       ((pFVar6->Traits & HasDynamicState) != None)) {
      FReplicationStateOperations::FreeDynamicState(param_1,(uchar *)*puVar2,pFVar6);
    }
    Net::Private::FPolymorphicStructNetSerializerInternal::Free(param_1,(void *)*puVar2);
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 0;
  }
  local_28 = (uchar *)0x0;
  uStack_20 = 0;
  uVar5 = FNetBitStreamReader::ReadBits(this,1);
  if ((uVar5 & 1) == 0) {
    uVar5 = FNetBitStreamReader::ReadBits(this,1);
    if ((uVar5 & 1) != 0) {
      uVar5 = FNetBitStreamReader::ReadBits(this,5);
      FVar4 = NetError_PolymorphicStructNetSerializer_InvalidStructType;
      if ((uVar5 - 1 < *(uint *)(lVar7 + 0x18)) &&
         (lVar7 = (ulonglong)(uVar5 - 1) * 0x10 + *(longlong *)(lVar7 + 0x10), lVar7 != 0)) {
        pFVar6 = *(FReplicationStateDescriptor **)(lVar7 + 8);
        local_28 = Net::Private::FPolymorphicStructNetSerializerInternal::Alloc
                             (param_1,(ulonglong)pFVar6->InternalSize,
                              (ulonglong)pFVar6->InternalAlignment);
        uStack_20 = (ulonglong)uVar5;
        memset(local_28,0,(ulonglong)pFVar6->InternalSize);
        FReplicationStateOperations::Deserialize(param_1,local_28,pFVar6);
      }
      else {
        FNetSerializationContext::SetBitStreamOverflow(param_1);
        FNetErrorContext::SetError(&param_1->ErrorContext,FVar4);
      }
    }
  }
  else {
    uVar1 = *(uint *)(puVar3 + 1);
    uVar5 = uVar1 - 1;
    if ((uVar5 < *(uint *)(lVar7 + 0x18)) &&
       (lVar7 = (ulonglong)uVar5 * 0x10 + *(longlong *)(lVar7 + 0x10), lVar7 != 0)) {
      pFVar6 = *(FReplicationStateDescriptor **)(lVar7 + 8);
      local_28 = Net::Private::FPolymorphicStructNetSerializerInternal::Alloc
                           (param_1,(ulonglong)pFVar6->InternalSize,
                            (ulonglong)pFVar6->InternalAlignment);
      uStack_20 = (ulonglong)uVar1;
      memset(local_28,0,(ulonglong)pFVar6->InternalSize);
      FReplicationStateOperations::DeserializeDelta(param_1,local_28,(uchar *)*puVar3,pFVar6);
    }
  }
  *puVar2 = local_28;
  puVar2[1] = uStack_20;
  return;
}

// InternalFreeItem @ 147bf02e0

void __cdecl
UE::Net::TPolymorphicStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,0>::
InternalFreeItem(FNetSerializationContext *param_1,FPolymorphicStructNetSerializerConfig *param_2,
                FQuantizedData *param_3)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  FReplicationStateDescriptor *pFVar3;
  
  uVar1 = param_3->TypeIndex - 1;
  if ((uVar1 < (uint)(param_2->RegisteredTypes).RegisteredTypes.ArrayNum) &&
     (pFVar2 = (param_2->RegisteredTypes).RegisteredTypes.AllocatorInstance.Data +
               (ulonglong)uVar1 * 0x10, pFVar2 != (FScriptContainerElement *)0x0)) {
    pFVar3 = *(FReplicationStateDescriptor **)(pFVar2 + 8);
  }
  else {
    pFVar3 = (FReplicationStateDescriptor *)0x0;
  }
  if (param_3->StructData != (uchar *)0x0) {
    if ((pFVar3 != (FReplicationStateDescriptor *)0x0) &&
       ((pFVar3->Traits & HasDynamicState) != None)) {
      FReplicationStateOperations::FreeDynamicState(param_1,param_3->StructData,pFVar3);
    }
    Net::Private::FPolymorphicStructNetSerializerInternal::Free(param_1,param_3->StructData);
    param_3->StructData = (void *)0x0;
    param_3->TypeIndex = 0;
  }
  return;
}

// SerializeDelta @ 147c00240

void __cdecl
UE::Net::TPolymorphicStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,0>::
SerializeDelta(FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  FNetBitStreamWriter *this;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  puVar1 = (undefined8 *)param_2->Prev;
  puVar2 = (undefined8 *)param_2->_padding_;
  lVar5 = param_2->_padding_;
  this = param_1->BitStreamWriter;
  bVar6 = *(int *)(puVar2 + 1) == *(int *)(puVar1 + 1);
  lVar4 = 0;
  FNetBitStreamWriter::WriteBits(this,(uint)bVar6,1);
  uVar3 = *(int *)(puVar2 + 1) - 1;
  if (bVar6) {
    if ((uVar3 < *(uint *)(lVar5 + 0x18)) &&
       (lVar5 = (ulonglong)uVar3 * 0x10 + *(longlong *)(lVar5 + 0x10), lVar5 != 0)) {
      FReplicationStateOperations::SerializeDelta
                (param_1,(uchar *)*puVar2,(uchar *)*puVar1,
                 *(FReplicationStateDescriptor **)(lVar5 + 8));
    }
  }
  else {
    if (uVar3 < *(uint *)(lVar5 + 0x18)) {
      lVar4 = (ulonglong)uVar3 * 0x10 + *(longlong *)(lVar5 + 0x10);
    }
    FNetBitStreamWriter::WriteBits(this,(uint)(lVar4 != 0),1);
    if (lVar4 != 0) {
      FNetBitStreamWriter::WriteBits(this,*(uint *)(puVar2 + 1),5);
      FReplicationStateOperations::Serialize
                (param_1,(uchar *)*puVar2,*(FReplicationStateDescriptor **)(lVar4 + 8));
    }
  }
  return;
}

