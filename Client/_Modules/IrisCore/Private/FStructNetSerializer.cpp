// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 12

// CloneDynamicState @ 144328c70

void __cdecl
UE::Net::FStructNetSerializer::CloneDynamicState
          (FNetSerializationContext *param_1,FNetCloneDynamicStateArgs *param_2)

{
  longlong *plVar1;
  byte *pbVar2;
  ulonglong uVar3;
  uint *puVar4;
  longlong *plVar5;
  longlong local_48 [2];
  undefined4 local_38;
  longlong local_30;
  longlong lStack_28;
  
  plVar1 = *(longlong **)(param_2->_padding_ + 0x10);
  if ((*(byte *)(plVar1 + 0x17) & 0x40) != 0) {
    pbVar2 = (byte *)plVar1[3];
    plVar5 = (longlong *)plVar1[2];
    if (*(ushort *)((longlong)plVar1 + 0x7c) != 0) {
      puVar4 = (uint *)(*plVar1 + 4);
      uVar3 = (ulonglong)*(ushort *)((longlong)plVar1 + 0x7c);
      do {
        if ((*pbVar2 & 1) != 0) {
          local_48[0] = plVar5[1];
          local_48[1] = 0;
          local_38 = 0;
          local_30 = (ulonglong)*puVar4 + param_2->Source;
          lStack_28 = (ulonglong)*puVar4 + param_2->Target;
          (**(code **)(*plVar5 + 0x48))(param_1,local_48);
        }
        pbVar2 = pbVar2 + 2;
        puVar4 = puVar4 + 2;
        plVar5 = plVar5 + 2;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  return;
}

// CloneStructMember @ 144328d70

void __cdecl
UE::Net::FStructNetSerializer::CloneStructMember
          (FNetSerializationContext *param_1,FNetCloneDynamicStateArgs *param_2)

{
  longlong lVar1;
  uint uVar2;
  FNetFreeDynamicStateArgs local_28;
  
  lVar1 = *(longlong *)(param_2->_padding_ + 0x10);
  uVar2 = *(uint *)(lVar1 + 0xb8) & 0x40;
  if (uVar2 != 0) {
    local_28._padding_._0_4_ = (undefined4)param_2->_padding_;
    local_28._padding_ = 0;
    local_28.Source = param_2->Target;
    local_28._padding_ = param_2->_padding_;
    FreeDynamicState(param_1,&local_28);
  }
  memcpy((void *)param_2->Target,(void *)param_2->Source,(ulonglong)*(uint *)(lVar1 + 0x74));
  if (uVar2 != 0) {
    CloneDynamicState(param_1,param_2);
  }
  return;
}

// CollectNetReferences @ 144328fc0

void __cdecl
UE::Net::FStructNetSerializer::CollectNetReferences
          (FNetSerializationContext *param_1,FNetCollectReferencesArgs *param_2)

{
  Net::Private::FReplicationStateOperationsInternal::CollectReferences
            (param_1,(FNetReferenceCollector *)param_2->Collector,
             (FNetSerializerChangeMaskParam *)&param_2->_padding_,(uchar *)param_2->Source,
             *(FReplicationStateDescriptor **)(param_2->_padding_ + 0x10));
  return;
}

// Dequantize @ 14432b320

void __cdecl
UE::Net::FStructNetSerializer::Dequantize
          (FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  ushort uVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong *plVar4;
  uint *puVar5;
  longlong local_48 [2];
  undefined4 local_38;
  longlong local_30;
  longlong local_28;
  
  uVar3 = 0;
  puVar2 = *(undefined8 **)(param_2->_padding_ + 0x10);
  uVar1 = *(ushort *)((longlong)puVar2 + 0x7c);
  puVar5 = (uint *)*puVar2;
  plVar4 = (longlong *)puVar2[2];
  if (uVar1 != 0) {
    do {
      local_48[0] = plVar4[1];
      local_30 = (ulonglong)puVar5[1] + param_2->Source;
      local_28 = (ulonglong)*puVar5 + param_2->Target;
      local_48[1] = 0;
      local_38 = 0;
      (**(code **)(*plVar4 + 0x30))(param_1,local_48);
      if ((param_1->ErrorContext).Error != (FName)0x0) {
        return;
      }
      uVar3 = uVar3 + 1;
      puVar5 = puVar5 + 2;
      plVar4 = plVar4 + 2;
    } while (uVar3 < uVar1);
  }
  return;
}

// Deserialize @ 14432da40

void __cdecl
UE::Net::FStructNetSerializer::Deserialize
          (FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  ushort uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  FNetBitStreamReader *pFVar6;
  longlong lVar7;
  ForElementType<FNetTracePacketContentEvent> FVar8;
  FNetBitStreamReader *pFVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ForElementType<FNetTracePacketContentEvent> FVar13;
  ulonglong uVar14;
  FNetTraceCollector *pFVar15;
  FNetTraceCollector *pFVar16;
  undefined8 local_60;
  longlong local_58;
  undefined4 local_50;
  longlong local_48;
  
  uVar14 = 0;
  plVar2 = *(longlong **)(param_2->_padding_ + 0x10);
  uVar1 = *(ushort *)((longlong)plVar2 + 0x7c);
  lVar3 = *plVar2;
  lVar4 = plVar2[2];
  lVar5 = plVar2[0xd];
  if (uVar1 != 0) {
    do {
      pFVar6 = param_1->BitStreamReader;
      uVar10 = 0xffffffff;
      lVar7 = *(longlong *)(lVar4 + uVar14 * 0x10);
      local_50 = 0;
      local_60 = *(undefined8 *)(lVar4 + 8 + uVar14 * 0x10);
      local_48 = (ulonglong)*(uint *)(lVar3 + 4 + uVar14 * 8) + param_2->Target;
      local_58 = param_2->_padding_;
      pFVar16 = (FNetTraceCollector *)0x0;
      if (1 < GNetTraceRuntimeVerbosity) {
        pFVar16 = param_1->TraceCollector;
      }
      if (pFVar16 != (FNetTraceCollector *)0x0) {
        uVar10 = FNetTrace::BeginPacketContentEvent(pFVar16,NameId,pFVar6->BufferBitPosition);
        uVar11 = FNetTrace::TraceName(*(FNetDebugName **)(uVar14 * 8 + lVar5));
        FVar8 = (pFVar16->Events).AllocatorInstance.SecondaryData;
        FVar13 = (ForElementType<FNetTracePacketContentEvent>)&pFVar16->Events;
        if (FVar8 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
          FVar13 = FVar8;
        }
        *(uint *)((longlong)FVar13 + (ulonglong)uVar10 * 0x10) = uVar11;
      }
      pFVar9 = param_1->BitStreamReader;
      uVar11 = 0xffffffff;
      pFVar15 = (FNetTraceCollector *)0x0;
      if (2 < GNetTraceRuntimeVerbosity) {
        pFVar15 = param_1->TraceCollector;
      }
      if (pFVar15 != (FNetTraceCollector *)0x0) {
        uVar11 = FNetTrace::BeginPacketContentEvent(pFVar15,NameId,pFVar9->BufferBitPosition);
        uVar12 = FNetTrace::TraceName(*(wchar_t **)(lVar7 + 0x78));
        FVar8 = (pFVar15->Events).AllocatorInstance.SecondaryData;
        FVar13 = (ForElementType<FNetTracePacketContentEvent>)&pFVar15->Events;
        if (FVar8 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
          FVar13 = FVar8;
        }
        *(uint *)((longlong)FVar13 + (ulonglong)uVar11 * 0x10) = uVar12;
      }
      (**(code **)(lVar7 + 0x10))(param_1,&local_60);
      if ((((param_1->ErrorContext).Error != (FName)0x0) ||
          ((param_1->BitStreamReader != (FNetBitStreamReader *)0x0 &&
           (param_1->BitStreamReader->OverflowBitCount != 0)))) ||
         ((param_1->BitStreamWriter != (FNetBitStreamWriter *)0x0 &&
          (param_1->BitStreamWriter->OverflowBitCount != 0)))) {
        if (uVar11 != 0xffffffff) {
          FNetTrace::EndPacketContentEvent(pFVar15,uVar11,pFVar9->BufferBitPosition);
        }
        if (uVar10 == 0xffffffff) {
          return;
        }
        FNetTrace::EndPacketContentEvent(pFVar16,uVar10,pFVar6->BufferBitPosition);
        return;
      }
      if (uVar11 != 0xffffffff) {
        FNetTrace::EndPacketContentEvent(pFVar15,uVar11,pFVar9->BufferBitPosition);
      }
      if (uVar10 != 0xffffffff) {
        FNetTrace::EndPacketContentEvent(pFVar16,uVar10,pFVar6->BufferBitPosition);
      }
      uVar10 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar10;
    } while (uVar10 < uVar1);
  }
  return;
}

// DeserializeDelta @ 14432f0e0

void __cdecl
UE::Net::FStructNetSerializer::DeserializeDelta
          (FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  longlong lVar1;
  ushort uVar2;
  longlong *plVar3;
  FNetSerializer *pFVar4;
  FNetBitStreamReader *pFVar5;
  ForElementType<FNetTracePacketContentEvent> FVar6;
  FNetBitStreamReader *pFVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ForElementType<FNetTracePacketContentEvent> FVar13;
  FNetTraceCollector *pFVar14;
  FNetTraceCollector *pFVar15;
  longlong lVar16;
  void *_Dst;
  ulonglong uVar17;
  FNetCloneDynamicStateArgs local_b0;
  FNetBitStreamReader *local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  FNetFreeDynamicStateArgs local_68;
  
  uVar17 = 0;
  plVar3 = *(longlong **)(param_2->_padding_ + 0x10);
  local_88 = param_1->BitStreamReader;
  uVar2 = *(ushort *)((longlong)plVar3 + 0x7c);
  local_78 = *plVar3;
  local_80 = plVar3[2];
  local_70 = plVar3[0xd];
  if (uVar2 != 0) {
    uVar10 = 0;
    do {
      lVar8 = local_70;
      uVar9 = 0xffffffff;
      lVar1 = local_78 + (ulonglong)uVar10 * 8;
      lVar16 = (ulonglong)uVar10 * 0x10 + local_80;
      pFVar4 = *(FNetSerializer **)(local_80 + uVar17 * 0x10);
      pFVar5 = param_1->BitStreamReader;
      pFVar15 = (FNetTraceCollector *)0x0;
      if (1 < GNetTraceRuntimeVerbosity) {
        pFVar15 = param_1->TraceCollector;
      }
      if (pFVar15 != (FNetTraceCollector *)0x0) {
        uVar9 = FNetTrace::BeginPacketContentEvent(pFVar15,NameId,pFVar5->BufferBitPosition);
        uVar10 = FNetTrace::TraceName(*(FNetDebugName **)(lVar8 + uVar17 * 8));
        FVar6 = (pFVar15->Events).AllocatorInstance.SecondaryData;
        FVar13 = (ForElementType<FNetTracePacketContentEvent>)&pFVar15->Events;
        if (FVar6 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
          FVar13 = FVar6;
        }
        *(uint *)((longlong)FVar13 + (ulonglong)uVar9 * 0x10) = uVar10;
      }
      pFVar7 = param_1->BitStreamReader;
      uVar10 = 0xffffffff;
      pFVar14 = (FNetTraceCollector *)0x0;
      if (2 < GNetTraceRuntimeVerbosity) {
        pFVar14 = param_1->TraceCollector;
      }
      if (pFVar14 != (FNetTraceCollector *)0x0) {
        uVar10 = FNetTrace::BeginPacketContentEvent(pFVar14,NameId,pFVar7->BufferBitPosition);
        uVar11 = FNetTrace::TraceName(pFVar4->Name);
        FVar6 = (pFVar14->Events).AllocatorInstance.SecondaryData;
        FVar13 = (ForElementType<FNetTracePacketContentEvent>)&pFVar14->Events;
        if (FVar6 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
          FVar13 = FVar6;
        }
        *(uint *)((longlong)FVar13 + (ulonglong)uVar10 * 0x10) = uVar11;
      }
      if ((pFVar4 == &FStructNetSerializerNetSerializerInfo::Serializer) &&
         (uVar11 = FNetBitStreamReader::ReadBits(local_88,1), (uVar11 & 1) != 0)) {
        local_b0._padding_ = *(longlong *)(lVar16 + 8);
        local_b0._padding_ = 0;
        uVar12 = (ulonglong)*(uint *)(lVar1 + 4);
        local_b0.Source = param_2->Prev + uVar12;
        local_b0._padding_._0_4_ = (undefined4)param_2->_padding_;
        _Dst = (void *)(param_2->_padding_ + uVar12);
        lVar1 = *(longlong *)(local_b0._padding_ + 0x10);
        uVar11 = *(uint *)(lVar1 + 0xb8) & 0x40;
        local_b0.Target = (ulong64)_Dst;
        if (uVar11 != 0) {
          local_68._padding_ = 0;
          local_68._padding_ = local_b0._padding_;
          local_68._padding_._0_4_ = (undefined4)local_b0._padding_;
          local_68.Source = (ulong64)_Dst;
          FreeDynamicState(param_1,&local_68);
        }
        memcpy(_Dst,(void *)local_b0.Source,(ulonglong)*(uint *)(lVar1 + 0x74));
        if (uVar11 != 0) {
          CloneDynamicState(param_1,&local_b0);
        }
      }
      else {
        local_b0._padding_ = *(longlong *)(lVar16 + 8);
        local_b0._padding_._0_4_ = 0;
        uVar12 = (ulonglong)*(uint *)(lVar1 + 4);
        local_b0._padding_ = param_2->_padding_;
        local_b0.Source = uVar12 + param_2->_padding_;
        local_b0.Target = uVar12 + param_2->Prev;
        (*pFVar4->DeserializeDelta)(param_1,(FNetDeserializeDeltaArgs *)&local_b0);
        if ((((param_1->ErrorContext).Error != (FName)0x0) ||
            ((param_1->BitStreamReader != (FNetBitStreamReader *)0x0 &&
             (param_1->BitStreamReader->OverflowBitCount != 0)))) ||
           ((param_1->BitStreamWriter != (FNetBitStreamWriter *)0x0 &&
            (param_1->BitStreamWriter->OverflowBitCount != 0)))) {
          if (uVar10 != 0xffffffff) {
            FNetTrace::EndPacketContentEvent(pFVar14,uVar10,pFVar7->BufferBitPosition);
          }
          if (uVar9 == 0xffffffff) {
            return;
          }
          FNetTrace::EndPacketContentEvent(pFVar15,uVar9,pFVar5->BufferBitPosition);
          return;
        }
      }
      if (uVar10 != 0xffffffff) {
        FNetTrace::EndPacketContentEvent(pFVar14,uVar10,pFVar7->BufferBitPosition);
      }
      if (uVar9 != 0xffffffff) {
        FNetTrace::EndPacketContentEvent(pFVar15,uVar9,pFVar5->BufferBitPosition);
      }
      uVar10 = (int)uVar17 + 1;
      uVar17 = (ulonglong)uVar10;
    } while (uVar10 < uVar2);
  }
  return;
}

// FreeDynamicState @ 14432ffd0

void __cdecl
UE::Net::FStructNetSerializer::FreeDynamicState
          (FNetSerializationContext *param_1,FNetFreeDynamicStateArgs *param_2)

{
  longlong *plVar1;
  byte *pbVar2;
  ulonglong uVar3;
  uint *puVar4;
  longlong *plVar5;
  longlong local_38 [2];
  undefined4 local_28;
  longlong local_20;
  
  plVar1 = *(longlong **)(param_2->_padding_ + 0x10);
  if ((*(byte *)(plVar1 + 0x17) & 0x40) != 0) {
    pbVar2 = (byte *)plVar1[3];
    plVar5 = (longlong *)plVar1[2];
    if (*(ushort *)((longlong)plVar1 + 0x7c) != 0) {
      puVar4 = (uint *)(*plVar1 + 4);
      uVar3 = (ulonglong)*(ushort *)((longlong)plVar1 + 0x7c);
      do {
        if ((*pbVar2 & 1) != 0) {
          local_38[0] = plVar5[1];
          local_20 = (ulonglong)*puVar4 + param_2->Source;
          local_38[1] = 0;
          local_28 = 0;
          (**(code **)(*plVar5 + 0x50))(param_1,local_38);
        }
        pbVar2 = pbVar2 + 2;
        puVar4 = puVar4 + 2;
        plVar5 = plVar5 + 2;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  return;
}

// IsEqual @ 1443345d0

bool __cdecl
UE::Net::FStructNetSerializer::IsEqual(FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  bool bVar1;
  ushort uVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  longlong *plVar8;
  uint *puVar9;
  longlong local_48 [2];
  undefined4 local_38;
  longlong local_30;
  longlong lStack_28;
  char local_20;
  
  bVar1 = param_2->bStateIsQuantized;
  puVar3 = *(undefined8 **)(param_2->_padding_ + 0x10);
  if ((bVar1 != false) && ((*(byte *)(puVar3 + 0x17) & 0x40) == 0)) {
    iVar5 = memcmp((void *)param_2->Source0,(void *)param_2->Source1,
                   (ulonglong)*(uint *)((longlong)puVar3 + 0x74));
    return iVar5 == 0;
  }
  uVar7 = 0;
  uVar2 = *(ushort *)((longlong)puVar3 + 0x7c);
  plVar8 = (longlong *)puVar3[2];
  puVar9 = (uint *)*puVar3;
  local_48[1] = 0;
  local_38 = 0;
  local_20 = bVar1;
  if (uVar2 != 0) {
    do {
      local_48[0] = plVar8[1];
      puVar6 = puVar9 + 1;
      if (bVar1 == false) {
        puVar6 = puVar9;
      }
      local_30 = (ulonglong)*puVar6 + param_2->Source0;
      lStack_28 = (ulonglong)*puVar6 + param_2->Source1;
      cVar4 = (**(code **)(*plVar8 + 0x38))(param_1,local_48);
      if (cVar4 == '\0') {
        return false;
      }
      uVar7 = uVar7 + 1;
      puVar9 = puVar9 + 2;
      plVar8 = plVar8 + 2;
    } while (uVar7 < uVar2);
  }
  return true;
}

// Quantize @ 144337530

void __cdecl
UE::Net::FStructNetSerializer::Quantize(FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong local_48;
  longlong local_40;
  undefined4 local_38;
  longlong local_30;
  longlong local_28;
  
  puVar1 = *(undefined8 **)(param_2->_padding_ + 0x10);
  puVar2 = (uint *)*puVar1;
  plVar4 = (longlong *)puVar1[2];
  if (*(ushort *)((longlong)puVar1 + 0x7c) != 0) {
    uVar3 = (ulonglong)*(ushort *)((longlong)puVar1 + 0x7c);
    do {
      local_48 = plVar4[1];
      local_30 = (ulonglong)*puVar2 + param_2->Source;
      local_28 = (ulonglong)puVar2[1] + param_2->Target;
      local_40 = param_2->_padding_;
      local_38 = 0;
      (**(code **)(*plVar4 + 0x28))(param_1,&local_48);
      puVar2 = puVar2 + 2;
      plVar4 = plVar4 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}

// Serialize @ 14433cb50

void __cdecl
UE::Net::FStructNetSerializer::Serialize
          (FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  uint *puVar1;
  uint *puVar2;
  ushort uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  FNetBitStreamWriter *pFVar9;
  ForElementType<FNetTracePacketContentEvent> FVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ForElementType<FNetTracePacketContentEvent> FVar14;
  ulonglong uVar15;
  FNetTraceCollector *pFVar16;
  FNetTraceCollector *pFVar17;
  undefined8 local_58;
  longlong local_50;
  undefined4 local_48;
  longlong local_40;
  
  uVar15 = 0;
  plVar4 = *(longlong **)(param_2->_padding_ + 0x10);
  uVar3 = *(ushort *)((longlong)plVar4 + 0x7c);
  lVar5 = *plVar4;
  lVar6 = plVar4[2];
  lVar7 = plVar4[0xd];
  if (uVar3 != 0) {
    do {
      uVar11 = 0xffffffff;
      lVar8 = *(longlong *)(lVar6 + uVar15 * 0x10);
      local_48 = 0;
      local_58 = *(undefined8 *)(lVar6 + 8 + uVar15 * 0x10);
      local_40 = (ulonglong)*(uint *)(lVar5 + 4 + uVar15 * 8) + param_2->Source;
      local_50 = param_2->_padding_;
      pFVar16 = (FNetTraceCollector *)0x0;
      if (1 < GNetTraceRuntimeVerbosity) {
        pFVar16 = param_1->TraceCollector;
      }
      pFVar9 = param_1->BitStreamWriter;
      if (pFVar16 != (FNetTraceCollector *)0x0) {
        uVar11 = pFVar9->BufferBitPosition;
        if (pFVar9->OverflowBitCount != 0) {
          uVar11 = 0;
        }
        uVar11 = FNetTrace::BeginPacketContentEvent(pFVar16,NameId,uVar11);
        uVar12 = FNetTrace::TraceName(*(FNetDebugName **)(lVar7 + uVar15 * 8));
        FVar10 = (pFVar16->Events).AllocatorInstance.SecondaryData;
        FVar14 = (ForElementType<FNetTracePacketContentEvent>)&pFVar16->Events;
        if (FVar10 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
          FVar14 = FVar10;
        }
        *(uint *)((longlong)FVar14 + (ulonglong)uVar11 * 0x10) = uVar12;
      }
      uVar12 = 0xffffffff;
      pFVar17 = (FNetTraceCollector *)0x0;
      if (2 < GNetTraceRuntimeVerbosity) {
        pFVar17 = param_1->TraceCollector;
      }
      puVar1 = &param_1->BitStreamWriter->OverflowBitCount;
      puVar2 = &param_1->BitStreamWriter->BufferBitPosition;
      if (pFVar17 != (FNetTraceCollector *)0x0) {
        uVar12 = *puVar2;
        if (*puVar1 != 0) {
          uVar12 = 0;
        }
        uVar12 = FNetTrace::BeginPacketContentEvent(pFVar17,NameId,uVar12);
        uVar13 = FNetTrace::TraceName(*(wchar_t **)(lVar8 + 0x78));
        FVar10 = (pFVar17->Events).AllocatorInstance.SecondaryData;
        FVar14 = (ForElementType<FNetTracePacketContentEvent>)&pFVar17->Events;
        if (FVar10 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
          FVar14 = FVar10;
        }
        *(uint *)((longlong)FVar14 + (ulonglong)uVar12 * 0x10) = uVar13;
      }
      (**(code **)(lVar8 + 8))(param_1,&local_58);
      if (uVar12 != 0xffffffff) {
        uVar13 = *puVar2;
        if (*puVar1 != 0) {
          uVar13 = 0;
        }
        FNetTrace::EndPacketContentEvent(pFVar17,uVar12,uVar13);
      }
      if (uVar11 != 0xffffffff) {
        uVar12 = pFVar9->BufferBitPosition;
        if (pFVar9->OverflowBitCount != 0) {
          uVar12 = 0;
        }
        FNetTrace::EndPacketContentEvent(pFVar16,uVar11,uVar12);
      }
      uVar11 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar11;
    } while (uVar11 < uVar3);
  }
  return;
}

// SerializeDelta @ 14433e030

void __cdecl
UE::Net::FStructNetSerializer::SerializeDelta
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  longlong lVar1;
  ushort uVar2;
  longlong *plVar3;
  FNetBitStreamWriter *pFVar4;
  FNetSerializer *pFVar5;
  ForElementType<FNetTracePacketContentEvent> FVar6;
  FNetBitStreamWriter *pFVar7;
  longlong lVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ForElementType<FNetTracePacketContentEvent> FVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  FNetTraceCollector *pFVar17;
  FNetTraceCollector *pFVar18;
  FNetIsEqualArgs local_a0;
  FNetBitStreamWriter *local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  
  uVar16 = 0;
  plVar3 = *(longlong **)(param_2->_padding_ + 0x10);
  uVar2 = *(ushort *)((longlong)plVar3 + 0x7c);
  local_60 = *plVar3;
  local_68 = plVar3[2];
  local_58 = plVar3[0xd];
  local_70 = param_1->BitStreamWriter;
  if (uVar2 != 0) {
    do {
      lVar8 = local_58;
      pFVar4 = param_1->BitStreamWriter;
      uVar10 = 0xffffffff;
      lVar1 = local_60 + uVar16 * 8;
      lVar15 = uVar16 * 0x10 + local_68;
      pFVar18 = (FNetTraceCollector *)0x0;
      if (1 < GNetTraceRuntimeVerbosity) {
        pFVar18 = param_1->TraceCollector;
      }
      pFVar5 = *(FNetSerializer **)(local_68 + uVar16 * 0x10);
      if (pFVar18 != (FNetTraceCollector *)0x0) {
        uVar10 = pFVar4->BufferBitPosition;
        if (pFVar4->OverflowBitCount != 0) {
          uVar10 = 0;
        }
        uVar10 = FNetTrace::BeginPacketContentEvent(pFVar18,NameId,uVar10);
        uVar11 = FNetTrace::TraceName(*(FNetDebugName **)(lVar8 + uVar16 * 8));
        FVar6 = (pFVar18->Events).AllocatorInstance.SecondaryData;
        FVar13 = (ForElementType<FNetTracePacketContentEvent>)&pFVar18->Events;
        if (FVar6 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
          FVar13 = FVar6;
        }
        *(uint *)((longlong)FVar13 + (ulonglong)uVar10 * 0x10) = uVar11;
      }
      pFVar7 = param_1->BitStreamWriter;
      pFVar17 = (FNetTraceCollector *)0x0;
      if (2 < GNetTraceRuntimeVerbosity) {
        pFVar17 = param_1->TraceCollector;
      }
      uVar11 = 0xffffffff;
      if (pFVar17 != (FNetTraceCollector *)0x0) {
        uVar11 = pFVar7->BufferBitPosition;
        if (pFVar7->OverflowBitCount != 0) {
          uVar11 = 0;
        }
        uVar11 = FNetTrace::BeginPacketContentEvent(pFVar17,NameId,uVar11);
        uVar12 = FNetTrace::TraceName(pFVar5->Name);
        FVar6 = (pFVar17->Events).AllocatorInstance.SecondaryData;
        FVar13 = (ForElementType<FNetTracePacketContentEvent>)&pFVar17->Events;
        if (FVar6 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
          FVar13 = FVar6;
        }
        *(uint *)((longlong)FVar13 + (ulonglong)uVar11 * 0x10) = uVar12;
      }
      if (pFVar5 == &FStructNetSerializerNetSerializerInfo::Serializer) {
        local_a0._padding_ = *(longlong *)(lVar15 + 8);
        local_a0._padding_._0_4_ = 0;
        local_a0.bStateIsQuantized = true;
        uVar14 = (ulonglong)*(uint *)(lVar1 + 4);
        local_a0._padding_ = param_2->_padding_;
        local_a0.Source0 = param_2->_padding_ + uVar14;
        local_a0.Source1 = param_2->Prev + uVar14;
        bVar9 = IsEqual(param_1,&local_a0);
        FNetBitStreamWriter::WriteBits(local_70,(uint)bVar9,1);
        if (!bVar9) goto LAB_14433e257;
      }
      else {
LAB_14433e257:
        local_a0._padding_._0_4_ = 0;
        local_a0._padding_ = *(longlong *)(lVar15 + 8);
        uVar14 = (ulonglong)*(uint *)(lVar1 + 4);
        local_a0._padding_ = param_2->_padding_;
        local_a0.Source0 = param_2->_padding_ + uVar14;
        local_a0.Source1 = param_2->Prev + uVar14;
        (*pFVar5->SerializeDelta)(param_1,(FNetSerializeDeltaArgs *)&local_a0);
      }
      if (uVar11 != 0xffffffff) {
        uVar12 = pFVar7->BufferBitPosition;
        if (pFVar7->OverflowBitCount != 0) {
          uVar12 = 0;
        }
        FNetTrace::EndPacketContentEvent(pFVar17,uVar11,uVar12);
      }
      if (uVar10 != 0xffffffff) {
        uVar11 = pFVar4->BufferBitPosition;
        if (pFVar4->OverflowBitCount != 0) {
          uVar11 = 0;
        }
        FNetTrace::EndPacketContentEvent(pFVar18,uVar10,uVar11);
      }
      uVar10 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar10;
    } while (uVar10 < uVar2);
  }
  return;
}

// Validate @ 14433f990

bool __cdecl
UE::Net::FStructNetSerializer::Validate(FNetSerializationContext *param_1,FNetValidateArgs *param_2)

{
  ushort uVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  uint *puVar6;
  longlong *plVar7;
  longlong local_38 [2];
  undefined4 local_28;
  longlong local_20;
  
  puVar2 = *(undefined8 **)(param_2->_padding_ + 0x10);
  if (puVar2 == (undefined8 *)0x0) {
LAB_14433fa26:
    bVar4 = false;
  }
  else {
    uVar1 = *(ushort *)((longlong)puVar2 + 0x7c);
    uVar5 = 0;
    puVar6 = (uint *)*puVar2;
    plVar7 = (longlong *)puVar2[2];
    if (uVar1 != 0) {
      do {
        local_38[0] = plVar7[1];
        local_20 = (ulonglong)*puVar6 + param_2->Source;
        local_38[1] = 0;
        local_28 = 0;
        cVar3 = (**(code **)(*plVar7 + 0x40))(param_1,local_38);
        if (cVar3 == '\0') goto LAB_14433fa26;
        uVar5 = uVar5 + 1;
        puVar6 = puVar6 + 2;
        plVar7 = plVar7 + 2;
      } while (uVar5 < uVar1);
    }
    bVar4 = true;
  }
  return bVar4;
}

