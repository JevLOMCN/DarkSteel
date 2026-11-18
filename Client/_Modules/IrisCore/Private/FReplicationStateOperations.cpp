// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 17

// ApplyStruct @ 1442b63e0

void __cdecl
UE::Net::FReplicationStateOperations::ApplyStruct
          (FNetSerializationContext *param_1,uchar *param_2,uchar *param_3,
          FReplicationStateDescriptor *param_4)

{
  Net::Private::InternalApplyStructProperty(param_4,param_2,param_3);
  return;
}

// Dequantize @ 1442bb760

void __cdecl
UE::Net::FReplicationStateOperations::Dequantize
          (FNetSerializationContext *param_1,uchar *param_2,uchar *param_3,
          FReplicationStateDescriptor *param_4)

{
  code *pcVar1;
  bool bVar2;
  FReplicationStateMemberDescriptor *pFVar3;
  ulonglong uVar4;
  FReplicationStateMemberSerializerDescriptor *pFVar5;
  FNetDequantizeArgs local_48;
  
  if ((((ulonglong)param_3 & (ulonglong)param_4->InternalAlignment - 1) != 0) ||
     (((ulonglong)param_2 & (ulonglong)param_4->ExternalAlignment - 1) != 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsAligned(SrcInternalBuffer, Descriptor->InternalAlignment) && IsAligned(DstExternalBuffer, Descriptor->ExternalAlignment)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationOperations.cpp"
                       ,0xbb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar3 = param_4->MemberDescriptors;
  pFVar5 = param_4->MemberSerializerDescriptors;
  if (param_4->MemberCount != 0) {
    uVar4 = (ulonglong)param_4->MemberCount;
    do {
      local_48._padding_ = (longlong)pFVar5->SerializerConfig;
      local_48.Target = (ulong64)(param_2 + pFVar3->ExternalMemberOffset);
      local_48._padding_ = 0;
      local_48.Source = (ulong64)(param_3 + pFVar3->InternalMemberOffset);
      local_48._padding_._0_4_ = 0;
      (*pFVar5->Serializer->Dequantize)(param_1,&local_48);
      pFVar3 = pFVar3 + 1;
      pFVar5 = pFVar5 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}

// DequantizeWithMask @ 1442bb900

void __cdecl
UE::Net::FReplicationStateOperations::DequantizeWithMask
          (FNetSerializationContext *param_1,FNetBitArrayView *param_2,uint param_3,uchar *param_4,
          uchar *param_5,FReplicationStateDescriptor *param_6)

{
  ushort uVar1;
  FReplicationStateMemberChangeMaskDescriptor *pFVar2;
  uint *puVar3;
  code *pcVar4;
  FReplicationStateDescriptor *pFVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  FReplicationStateMemberDescriptor *pFVar10;
  FReplicationStateMemberSerializerDescriptor *pFVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  FNetDequantizeArgs local_68;
  
  pFVar5 = param_6;
  if (((param_6->Traits & InitOnly) != None) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Descriptor->IsInitState()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationOperations.cpp"
                         ,0x93,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((param_1->ChangeMask == (FNetBitArrayView *)0x0) ||
      (param_1->ChangeMask->Storage != param_2->Storage)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context.GetChangeMask() && (Context.GetChangeMask()->GetData() == ChangeMask.GetData())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationOperations.cpp"
                         ,0x40,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((((ulonglong)param_5 & (ulonglong)param_6->InternalAlignment - 1) != 0) ||
      (((ulonglong)param_4 & (ulonglong)param_6->ExternalAlignment - 1) != 0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsAligned(SrcInternalBuffer, Descriptor->InternalAlignment) && IsAligned(DstExternalBuffer, Descriptor->ExternalAlignment)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationOperations.cpp"
                         ,0x97,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar10 = param_6->MemberDescriptors;
  pFVar11 = param_6->MemberSerializerDescriptors;
  if (param_6->MemberCount != 0) {
    lVar15 = 0;
    param_6 = (FReplicationStateDescriptor *)(ulonglong)param_6->MemberCount;
    do {
      pFVar2 = pFVar5->MemberChangeMaskDescriptors;
      uVar9 = *(ushort *)((longlong)&pFVar2->BitOffset + lVar15) + param_3;
      uVar1 = *(ushort *)((longlong)&pFVar2->BitCount + lVar15);
      if (uVar1 == 1) {
        puVar3 = param_2->Storage;
        if ((param_2->BitCount <= uVar9) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index < BitCount",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                               ,0x2c1,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        bVar6 = (puVar3[uVar9 >> 5] >> (uVar9 & 0x1f) & 1) != 0;
      }
      else {
        uVar13 = param_2->BitCount;
        if (uVar9 < uVar13 && uVar1 != 0) {
          if ((ulonglong)uVar9 + ((ulonglong)uVar1 - 1) < (ulonglong)uVar13 - 1) {
            uVar13 = uVar9 + uVar1;
          }
          uVar14 = -1 << ((byte)uVar9 & 0x1f);
          uVar12 = uVar13 - 1 >> 5;
          for (uVar7 = uVar9 >> 5; uVar7 <= uVar12; uVar7 = uVar7 + 1) {
            uVar8 = 0xffffffff;
            if (uVar7 == uVar12) {
              uVar8 = 0xffffffff >> (~(byte)(uVar13 - 1) & 0x1f);
            }
            uVar8 = uVar8 & uVar14;
            uVar14 = 0xffffffff;
            if ((param_2->Storage[uVar7] & uVar8) != 0) {
              bVar6 = true;
              goto LAB_1442bbb1a;
            }
          }
          bVar6 = false;
        }
        else {
          bVar6 = false;
        }
      }
LAB_1442bbb1a:
      if (bVar6) {
        local_68._padding_ = (longlong)pFVar11->SerializerConfig;
        local_68.Target = (ulong64)(param_4 + pFVar10->ExternalMemberOffset);
        local_68.Source = (ulong64)(param_5 + pFVar10->InternalMemberOffset);
        local_68._padding_ = 0;
        local_68._padding_._0_4_ = 0;
        if ((pFVar5->Traits & IsFastArrayReplicationState) != None) {
          local_68._padding_ =
               (longlong)CONCAT24(*(undefined2 *)((longlong)&pFVar2->BitCount + lVar15),uVar9);
        }
        (*pFVar11->Serializer->Dequantize)(param_1,&local_68);
      }
      pFVar10 = pFVar10 + 1;
      pFVar11 = pFVar11 + 1;
      lVar15 = lVar15 + 4;
      param_6 = (FReplicationStateDescriptor *)((longlong)&param_6[-1].DefaultStateBuffer + 7);
    } while (param_6 != (FReplicationStateDescriptor *)0x0);
  }
  return;
}

// Deserialize @ 1442bbe70

void __cdecl
UE::Net::FReplicationStateOperations::Deserialize
          (FNetSerializationContext *param_1,uchar *param_2,FReplicationStateDescriptor *param_3)

{
  FReplicationStateMemberSerializerDescriptor *pFVar1;
  ushort uVar2;
  FReplicationStateMemberDescriptor *pFVar3;
  FReplicationStateMemberSerializerDescriptor *pFVar4;
  FReplicationStateMemberDebugDescriptor *pFVar5;
  FNetBitStreamReader *pFVar6;
  ForElementType<FNetTracePacketContentEvent> FVar7;
  FNetBitStreamReader *pFVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ForElementType<FNetTracePacketContentEvent> FVar12;
  ulonglong uVar13;
  FNetTraceCollector *pFVar14;
  FNetTraceCollector *pFVar15;
  FNetDeserializeArgs local_58;
  
  pFVar3 = param_3->MemberDescriptors;
  uVar13 = 0;
  pFVar4 = param_3->MemberSerializerDescriptors;
  pFVar5 = param_3->MemberDebugDescriptors;
  uVar2 = param_3->MemberCount;
  if (uVar2 != 0) {
    do {
      pFVar6 = param_1->BitStreamReader;
      uVar9 = 0xffffffff;
      pFVar14 = (FNetTraceCollector *)0x0;
      if (GNetTraceRuntimeVerbosity != 0) {
        pFVar14 = param_1->TraceCollector;
      }
      if (pFVar14 != (FNetTraceCollector *)0x0) {
        uVar9 = FNetTrace::BeginPacketContentEvent(pFVar14,NameId,pFVar6->BufferBitPosition);
        uVar10 = FNetTrace::TraceName(pFVar5[uVar13].DebugName);
        FVar7 = (pFVar14->Events).AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<FNetTracePacketContentEvent>)&pFVar14->Events;
        if (FVar7 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
          FVar12 = FVar7;
        }
        *(uint *)((longlong)FVar12 + (ulonglong)uVar9 * 0x10) = uVar10;
      }
      FNetSerializationContext::AddReadJournalEntry(param_1,pFVar5[uVar13].DebugName);
      pFVar15 = (FNetTraceCollector *)0x0;
      if (2 < GNetTraceRuntimeVerbosity) {
        pFVar15 = param_1->TraceCollector;
      }
      pFVar1 = pFVar4 + uVar13;
      pFVar8 = param_1->BitStreamReader;
      uVar10 = 0xffffffff;
      if (pFVar15 != (FNetTraceCollector *)0x0) {
        uVar10 = FNetTrace::BeginPacketContentEvent(pFVar15,NameId,pFVar8->BufferBitPosition);
        uVar11 = FNetTrace::TraceName(pFVar1->Serializer->Name);
        FVar7 = (pFVar15->Events).AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<FNetTracePacketContentEvent>)&pFVar15->Events;
        if (FVar7 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
          FVar12 = FVar7;
        }
        *(uint *)((longlong)FVar12 + (ulonglong)uVar10 * 0x10) = uVar11;
      }
      local_58._padding_._0_4_ = 0;
      local_58._padding_ = 0;
      local_58._padding_ = (longlong)pFVar1->SerializerConfig;
      local_58.Target = (ulong64)(param_2 + pFVar3[uVar13].InternalMemberOffset);
      (*pFVar1->Serializer->Deserialize)(param_1,&local_58);
      if (uVar10 != 0xffffffff) {
        FNetTrace::EndPacketContentEvent(pFVar15,uVar10,pFVar8->BufferBitPosition);
      }
      if (uVar9 != 0xffffffff) {
        FNetTrace::EndPacketContentEvent(pFVar14,uVar9,pFVar6->BufferBitPosition);
      }
      uVar9 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar9;
    } while (uVar9 < uVar2);
  }
  return;
}

// DeserializeDelta @ 1442bc070

void __cdecl
UE::Net::FReplicationStateOperations::DeserializeDelta
          (FNetSerializationContext *param_1,uchar *param_2,uchar *param_3,
          FReplicationStateDescriptor *param_4)

{
  ushort uVar1;
  FReplicationStateMemberDescriptor *pFVar2;
  FReplicationStateMemberSerializerDescriptor *pFVar3;
  FReplicationStateMemberDebugDescriptor *pFVar4;
  FNetBitStreamReader *pFVar5;
  ForElementType<FNetTracePacketContentEvent> FVar6;
  FNetBitStreamReader *pFVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ForElementType<FNetTracePacketContentEvent> FVar11;
  ulonglong uVar12;
  FNetTraceCollector *pFVar13;
  FNetTraceCollector *pFVar14;
  FReplicationStateMemberSerializerDescriptor *pFVar15;
  FNetDeserializeDeltaArgs local_68;
  
  pFVar2 = param_4->MemberDescriptors;
  uVar12 = 0;
  pFVar3 = param_4->MemberSerializerDescriptors;
  pFVar4 = param_4->MemberDebugDescriptors;
  uVar1 = param_4->MemberCount;
  if (uVar1 != 0) {
    do {
      pFVar5 = param_1->BitStreamReader;
      uVar8 = 0xffffffff;
      pFVar13 = (FNetTraceCollector *)0x0;
      if (GNetTraceRuntimeVerbosity != 0) {
        pFVar13 = param_1->TraceCollector;
      }
      if (pFVar13 != (FNetTraceCollector *)0x0) {
        uVar8 = FNetTrace::BeginPacketContentEvent(pFVar13,NameId,pFVar5->BufferBitPosition);
        uVar9 = FNetTrace::TraceName(pFVar4[uVar12].DebugName);
        FVar6 = (pFVar13->Events).AllocatorInstance.SecondaryData;
        FVar11 = (ForElementType<FNetTracePacketContentEvent>)&pFVar13->Events;
        if (FVar6 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
          FVar11 = FVar6;
        }
        *(uint *)((longlong)FVar11 + (ulonglong)uVar8 * 0x10) = uVar9;
      }
      FNetSerializationContext::AddReadJournalEntry(param_1,pFVar4[uVar12].DebugName);
      uVar9 = 0xffffffff;
      pFVar15 = pFVar3 + uVar12;
      pFVar7 = param_1->BitStreamReader;
      local_68._padding_ = 0;
      local_68._padding_._0_4_ = 0;
      local_68._padding_ = (longlong)pFVar15->SerializerConfig;
      local_68._padding_ = (longlong)(param_2 + pFVar2[uVar12].InternalMemberOffset);
      local_68.Prev = (ulong64)(param_3 + pFVar2[uVar12].InternalMemberOffset);
      pFVar14 = (FNetTraceCollector *)0x0;
      if (2 < GNetTraceRuntimeVerbosity) {
        pFVar14 = param_1->TraceCollector;
      }
      if (pFVar14 != (FNetTraceCollector *)0x0) {
        uVar9 = FNetTrace::BeginPacketContentEvent(pFVar14,NameId,pFVar7->BufferBitPosition);
        uVar10 = FNetTrace::TraceName(pFVar15->Serializer->Name);
        FVar6 = (pFVar14->Events).AllocatorInstance.SecondaryData;
        FVar11 = (ForElementType<FNetTracePacketContentEvent>)&pFVar14->Events;
        if (FVar6 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
          FVar11 = FVar6;
        }
        *(uint *)((longlong)FVar11 + (ulonglong)uVar9 * 0x10) = uVar10;
      }
      (*pFVar15->Serializer->DeserializeDelta)(param_1,&local_68);
      if (uVar9 != 0xffffffff) {
        FNetTrace::EndPacketContentEvent(pFVar14,uVar9,pFVar7->BufferBitPosition);
      }
      if (uVar8 != 0xffffffff) {
        FNetTrace::EndPacketContentEvent(pFVar13,uVar8,pFVar5->BufferBitPosition);
      }
      uVar8 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar8;
    } while (uVar8 < uVar1);
  }
  return;
}

// DeserializeDeltaWithMask @ 1442bc280

void __cdecl
UE::Net::FReplicationStateOperations::DeserializeDeltaWithMask
          (FNetSerializationContext *param_1,FNetBitArrayView *param_2,uint param_3,uchar *param_4,
          uchar *param_5,FReplicationStateDescriptor *param_6)

{
  ushort uVar1;
  ushort uVar2;
  FReplicationStateMemberDebugDescriptor *pFVar3;
  FReplicationStateMemberDescriptor *pFVar4;
  FReplicationStateMemberSerializerDescriptor *pFVar5;
  FReplicationStateMemberLifetimeConditionDescriptor *pFVar6;
  FReplicationStateMemberChangeMaskDescriptor *pFVar7;
  uint *puVar8;
  FNetBitStreamReader *pFVar9;
  ForElementType<FNetTracePacketContentEvent> FVar10;
  FNetBitStreamReader *pFVar11;
  FNetBitStreamReader *pFVar12;
  code *pcVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  FReplicationStateMemberSerializerDescriptor *pFVar19;
  ulonglong uVar20;
  uint uVar21;
  ForElementType<FNetTracePacketContentEvent> FVar22;
  uint uVar23;
  char cVar24;
  ulonglong uVar25;
  FNetTraceCollector *pFVar26;
  FNetTraceCollector *pFVar27;
  FNetTraceCollector *pFVar28;
  uint local_c8;
  FNetDeserializeDeltaArgs local_70;
  
  if (((param_6->Traits & InitOnly) != None) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("!Descriptor->IsInitState()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationOperations.cpp"
                          ,0x26c,L""), bVar14)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  if (((param_1->ChangeMask == (FNetBitArrayView *)0x0) ||
      (param_1->ChangeMask->Storage != param_2->Storage)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Context.GetChangeMask() && (Context.GetChangeMask()->GetData() == ChangeMask.GetData())"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationOperations.cpp"
                          ,0x40,L""), bVar14)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pFVar3 = param_6->MemberDebugDescriptors;
  uVar25 = 0;
  pFVar4 = param_6->MemberDescriptors;
  pFVar5 = param_6->MemberSerializerDescriptors;
  pFVar6 = param_6->MemberLifetimeConditionDescriptors;
  uVar1 = param_6->MemberCount;
  local_c8 = 0;
  if (uVar1 != 0) {
    do {
      uVar20 = (ulonglong)local_c8;
      pFVar19 = pFVar5 + uVar20;
      pFVar7 = param_6->MemberChangeMaskDescriptors;
      uVar2 = pFVar7[uVar20].BitCount;
      uVar23 = pFVar7[uVar20].BitOffset + param_3;
      if (uVar2 == 1) {
        puVar8 = param_2->Storage;
        if ((param_2->BitCount <= uVar23) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index < BitCount",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                ,0x2c1,L""), bVar14)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        bVar14 = (puVar8[uVar23 >> 5] >> (uVar23 & 0x1f) & 1) != 0;
      }
      else {
        uVar15 = param_2->BitCount;
        if (uVar23 < uVar15 && uVar2 != 0) {
          if ((ulonglong)uVar23 + ((ulonglong)uVar2 - 1) < (ulonglong)uVar15 - 1) {
            uVar15 = uVar2 + uVar23;
          }
          uVar16 = -1 << ((byte)uVar23 & 0x1f);
          uVar18 = uVar15 - 1 >> 5;
          for (uVar17 = uVar23 >> 5; uVar17 <= uVar18; uVar17 = uVar17 + 1) {
            uVar21 = 0xffffffff;
            if (uVar17 == uVar18) {
              uVar21 = 0xffffffff >> (~(byte)(uVar15 - 1) & 0x1f);
            }
            uVar21 = uVar21 & uVar16;
            uVar16 = 0xffffffff;
            if ((param_2->Storage[uVar17] & uVar21) != 0) {
              bVar14 = true;
              goto LAB_1442bc4a9;
            }
          }
        }
        bVar14 = false;
      }
LAB_1442bc4a9:
      if (bVar14) {
        if (pFVar6 == (FReplicationStateMemberLifetimeConditionDescriptor *)0x0) {
          cVar24 = '\0';
        }
        else {
          cVar24 = pFVar6[uVar25].Condition;
        }
        uVar15 = 0xffffffff;
        pFVar9 = param_1->BitStreamReader;
        pFVar28 = (FNetTraceCollector *)0x0;
        if (1 < GNetTraceRuntimeVerbosity) {
          pFVar28 = param_1->TraceCollector;
        }
        puVar8 = &pFVar9->BufferBitPosition;
        if (pFVar28 != (FNetTraceCollector *)0x0) {
          uVar15 = FNetTrace::BeginPacketContentEvent(pFVar28,NameId,*puVar8);
          uVar16 = FNetTrace::TraceName(Net::Private::s_LifetimeConditionDebugNames + cVar24);
          FVar10 = (pFVar28->Events).AllocatorInstance.SecondaryData;
          FVar22 = (ForElementType<FNetTracePacketContentEvent>)&pFVar28->Events;
          if (FVar10 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
            FVar22 = FVar10;
          }
          *(uint *)((longlong)FVar22 + (ulonglong)uVar15 * 0x10) = uVar16;
        }
        if ((pFVar6 == (FReplicationStateMemberLifetimeConditionDescriptor *)0x0) &&
           (uVar15 != 0xffffffff)) {
          FNetTrace::EndPacketContentEvent(pFVar28,uVar15,*puVar8);
          uVar15 = 0xffffffff;
        }
        pFVar11 = param_1->BitStreamReader;
        uVar16 = 0xffffffff;
        pFVar27 = (FNetTraceCollector *)0x0;
        if (GNetTraceRuntimeVerbosity != 0) {
          pFVar27 = param_1->TraceCollector;
        }
        if (pFVar27 != (FNetTraceCollector *)0x0) {
          uVar16 = FNetTrace::BeginPacketContentEvent(pFVar27,NameId,pFVar11->BufferBitPosition);
          uVar17 = FNetTrace::TraceName(pFVar3[uVar25].DebugName);
          FVar10 = (pFVar27->Events).AllocatorInstance.SecondaryData;
          FVar22 = (ForElementType<FNetTracePacketContentEvent>)&pFVar27->Events;
          if (FVar10 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
            FVar22 = FVar10;
          }
          *(uint *)((longlong)FVar22 + (ulonglong)uVar16 * 0x10) = uVar17;
        }
        FNetSerializationContext::AddReadJournalEntry(param_1,pFVar3[uVar25].DebugName);
        uVar18 = 0xffffffff;
        local_70._padding_._0_4_ = 0;
        local_70._padding_ = (longlong)pFVar19->SerializerConfig;
        uVar17 = pFVar4[uVar20].InternalMemberOffset;
        local_70._padding_ = (longlong)(param_4 + uVar17);
        local_70.Prev = (ulong64)(param_5 + uVar17);
        pFVar26 = (FNetTraceCollector *)0x0;
        if (2 < GNetTraceRuntimeVerbosity) {
          pFVar26 = param_1->TraceCollector;
        }
        pFVar12 = param_1->BitStreamReader;
        local_70._padding_._4_4_ = (uint)pFVar7[uVar20].BitCount;
        local_70._padding_._0_4_ = uVar23;
        if (pFVar26 != (FNetTraceCollector *)0x0) {
          uVar18 = FNetTrace::BeginPacketContentEvent(pFVar26,NameId,pFVar12->BufferBitPosition);
          uVar23 = FNetTrace::TraceName(pFVar19->Serializer->Name);
          FVar10 = (pFVar26->Events).AllocatorInstance.SecondaryData;
          FVar22 = (ForElementType<FNetTracePacketContentEvent>)&pFVar26->Events;
          if (FVar10 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
            FVar22 = FVar10;
          }
          *(uint *)((longlong)FVar22 + (ulonglong)uVar18 * 0x10) = uVar23;
        }
        (*pFVar19->Serializer->DeserializeDelta)(param_1,&local_70);
        if (uVar18 != 0xffffffff) {
          FNetTrace::EndPacketContentEvent(pFVar26,uVar18,pFVar12->BufferBitPosition);
        }
        if (uVar16 != 0xffffffff) {
          FNetTrace::EndPacketContentEvent(pFVar27,uVar16,pFVar11->BufferBitPosition);
        }
        if (uVar15 != 0xffffffff) {
          FNetTrace::EndPacketContentEvent(pFVar28,uVar15,pFVar9->BufferBitPosition);
        }
        uVar25 = (ulonglong)local_c8;
      }
      local_c8 = (int)uVar25 + 1;
      uVar25 = (ulonglong)local_c8;
    } while (local_c8 < uVar1);
  }
  return;
}

// DeserializeWithMask @ 1442bd140

void __cdecl
UE::Net::FReplicationStateOperations::DeserializeWithMask
          (FNetSerializationContext *param_1,FNetBitArrayView *param_2,uint param_3,uchar *param_4,
          FReplicationStateDescriptor *param_5)

{
  ushort uVar1;
  ushort uVar2;
  FReplicationStateMemberDebugDescriptor *pFVar3;
  FReplicationStateMemberDescriptor *pFVar4;
  FReplicationStateMemberSerializerDescriptor *pFVar5;
  FReplicationStateMemberLifetimeConditionDescriptor *pFVar6;
  FReplicationStateMemberChangeMaskDescriptor *pFVar7;
  uint *puVar8;
  FNetBitStreamReader *pFVar9;
  ForElementType<FNetTracePacketContentEvent> FVar10;
  FNetBitStreamReader *pFVar11;
  FNetBitStreamReader *pFVar12;
  code *pcVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  FReplicationStateMemberSerializerDescriptor *pFVar19;
  ulonglong uVar20;
  uint uVar21;
  ForElementType<FNetTracePacketContentEvent> FVar22;
  char cVar23;
  FNetTraceCollector *pFVar24;
  FNetTraceCollector *pFVar25;
  FNetTraceCollector *pFVar26;
  uint uVar27;
  uint local_c8;
  FNetDeserializeArgs local_70;
  
  if (((param_5->Traits & InitOnly) != None) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("!Descriptor->IsInitState()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationOperations.cpp"
                          ,0x20c,L""), bVar14)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  if (((param_1->ChangeMask == (FNetBitArrayView *)0x0) ||
      (param_1->ChangeMask->Storage != param_2->Storage)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Context.GetChangeMask() && (Context.GetChangeMask()->GetData() == ChangeMask.GetData())"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationOperations.cpp"
                          ,0x40,L""), bVar14)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pFVar3 = param_5->MemberDebugDescriptors;
  pFVar4 = param_5->MemberDescriptors;
  pFVar5 = param_5->MemberSerializerDescriptors;
  pFVar6 = param_5->MemberLifetimeConditionDescriptors;
  uVar1 = param_5->MemberCount;
  local_c8 = 0;
  if (uVar1 != 0) {
    do {
      uVar20 = (ulonglong)local_c8;
      pFVar19 = pFVar5 + uVar20;
      pFVar7 = param_5->MemberChangeMaskDescriptors;
      uVar2 = pFVar7[uVar20].BitCount;
      uVar27 = pFVar7[uVar20].BitOffset + param_3;
      if (uVar2 == 1) {
        puVar8 = param_2->Storage;
        if ((param_2->BitCount <= uVar27) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index < BitCount",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                ,0x2c1,L""), bVar14)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        bVar14 = (puVar8[uVar27 >> 5] >> (uVar27 & 0x1f) & 1) != 0;
      }
      else {
        uVar15 = param_2->BitCount;
        if (uVar27 < uVar15 && uVar2 != 0) {
          if ((ulonglong)uVar27 + ((ulonglong)uVar2 - 1) < (ulonglong)uVar15 - 1) {
            uVar15 = uVar27 + uVar2;
          }
          uVar16 = -1 << ((byte)uVar27 & 0x1f);
          uVar18 = uVar15 - 1 >> 5;
          for (uVar17 = uVar27 >> 5; uVar17 <= uVar18; uVar17 = uVar17 + 1) {
            uVar21 = 0xffffffff;
            if (uVar17 == uVar18) {
              uVar21 = 0xffffffff >> (~(byte)(uVar15 - 1) & 0x1f);
            }
            uVar21 = uVar21 & uVar16;
            uVar16 = 0xffffffff;
            if ((param_2->Storage[uVar17] & uVar21) != 0) {
              bVar14 = true;
              goto LAB_1442bd378;
            }
          }
        }
        bVar14 = false;
      }
LAB_1442bd378:
      if (bVar14) {
        if (pFVar6 == (FReplicationStateMemberLifetimeConditionDescriptor *)0x0) {
          cVar23 = '\0';
        }
        else {
          cVar23 = pFVar6[local_c8].Condition;
        }
        pFVar9 = param_1->BitStreamReader;
        uVar15 = 0xffffffff;
        pFVar25 = (FNetTraceCollector *)0x0;
        if (1 < GNetTraceRuntimeVerbosity) {
          pFVar25 = param_1->TraceCollector;
        }
        puVar8 = &pFVar9->BufferBitPosition;
        if (pFVar25 != (FNetTraceCollector *)0x0) {
          uVar15 = FNetTrace::BeginPacketContentEvent(pFVar25,NameId,*puVar8);
          uVar16 = FNetTrace::TraceName(Net::Private::s_LifetimeConditionDebugNames + cVar23);
          FVar10 = (pFVar25->Events).AllocatorInstance.SecondaryData;
          FVar22 = (ForElementType<FNetTracePacketContentEvent>)&pFVar25->Events;
          if (FVar10 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
            FVar22 = FVar10;
          }
          *(uint *)((longlong)FVar22 + (ulonglong)uVar15 * 0x10) = uVar16;
        }
        if ((pFVar6 == (FReplicationStateMemberLifetimeConditionDescriptor *)0x0) &&
           (uVar15 != 0xffffffff)) {
          FNetTrace::EndPacketContentEvent(pFVar25,uVar15,*puVar8);
          uVar15 = 0xffffffff;
        }
        pFVar11 = param_1->BitStreamReader;
        uVar16 = 0xffffffff;
        pFVar26 = (FNetTraceCollector *)0x0;
        if (GNetTraceRuntimeVerbosity != 0) {
          pFVar26 = param_1->TraceCollector;
        }
        if (pFVar26 != (FNetTraceCollector *)0x0) {
          uVar16 = FNetTrace::BeginPacketContentEvent(pFVar26,NameId,pFVar11->BufferBitPosition);
          uVar17 = FNetTrace::TraceName(pFVar3[local_c8].DebugName);
          FVar10 = (pFVar26->Events).AllocatorInstance.SecondaryData;
          FVar22 = (ForElementType<FNetTracePacketContentEvent>)&pFVar26->Events;
          if (FVar10 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
            FVar22 = FVar10;
          }
          *(uint *)((longlong)FVar22 + (ulonglong)uVar16 * 0x10) = uVar17;
        }
        pFVar24 = (FNetTraceCollector *)0x0;
        if (2 < GNetTraceRuntimeVerbosity) {
          pFVar24 = param_1->TraceCollector;
        }
        pFVar12 = param_1->BitStreamReader;
        if (pFVar24 == (FNetTraceCollector *)0x0) {
          uVar17 = 0xffffffff;
        }
        else {
          uVar17 = FNetTrace::BeginPacketContentEvent(pFVar24,NameId,pFVar12->BufferBitPosition);
          uVar18 = FNetTrace::TraceName(pFVar19->Serializer->Name);
          FVar10 = (pFVar24->Events).AllocatorInstance.SecondaryData;
          FVar22 = (ForElementType<FNetTracePacketContentEvent>)&pFVar24->Events;
          if (FVar10 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
            FVar22 = FVar10;
          }
          *(uint *)((longlong)FVar22 + (ulonglong)uVar17 * 0x10) = uVar18;
        }
        FNetSerializationContext::AddReadJournalEntry(param_1,pFVar3[local_c8].DebugName);
        local_70._padding_._0_4_ = 0;
        local_70._padding_ = (longlong)pFVar19->SerializerConfig;
        local_70.Target = (ulong64)(param_4 + pFVar4[uVar20].InternalMemberOffset);
        local_70._padding_._4_4_ = (uint)pFVar7[uVar20].BitCount;
        local_70._padding_._0_4_ = uVar27;
        (*pFVar19->Serializer->Deserialize)(param_1,&local_70);
        if (uVar17 != 0xffffffff) {
          FNetTrace::EndPacketContentEvent(pFVar24,uVar17,pFVar12->BufferBitPosition);
        }
        if (uVar16 != 0xffffffff) {
          FNetTrace::EndPacketContentEvent(pFVar26,uVar16,pFVar11->BufferBitPosition);
        }
        if (uVar15 != 0xffffffff) {
          FNetTrace::EndPacketContentEvent(pFVar25,uVar15,pFVar9->BufferBitPosition);
        }
      }
      local_c8 = local_c8 + 1;
    } while (local_c8 < uVar1);
  }
  return;
}

// FreeDynamicState @ 1442c1e30

void __cdecl
UE::Net::FReplicationStateOperations::FreeDynamicState
          (FNetSerializationContext *param_1,uchar *param_2,FReplicationStateDescriptor *param_3)

{
  FReplicationStateMemberTraitsDescriptor *pFVar1;
  ulonglong uVar2;
  uint *puVar3;
  FReplicationStateMemberSerializerDescriptor *pFVar4;
  FNetFreeDynamicStateArgs FStack_38;
  
  pFVar4 = param_3->MemberSerializerDescriptors;
  pFVar1 = param_3->MemberTraitsDescriptors;
  if (param_3->MemberCount != 0) {
    puVar3 = &param_3->MemberDescriptors->InternalMemberOffset;
    uVar2 = (ulonglong)param_3->MemberCount;
    do {
      if ((pFVar1->Traits & HasDynamicState) != None) {
        FStack_38._padding_ = (longlong)pFVar4->SerializerConfig;
        FStack_38.Source = (ulong64)(param_2 + *puVar3);
        FStack_38._padding_ = 0;
        FStack_38._padding_._0_4_ = 0;
        (*pFVar4->Serializer->FreeDynamicState)(param_1,&FStack_38);
      }
      pFVar1 = pFVar1 + 1;
      puVar3 = puVar3 + 2;
      pFVar4 = pFVar4 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}

// IsEqualQuantizedState @ 1442c7260

bool __cdecl
UE::Net::FReplicationStateOperations::IsEqualQuantizedState
          (FNetSerializationContext *param_1,uchar *param_2,uchar *param_3,
          FReplicationStateDescriptor *param_4)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  FReplicationStateMemberSerializerDescriptor *pFVar5;
  FNetIsEqualArgs local_58;
  
  uVar1 = param_4->MemberCount;
  uVar3 = 0;
  pFVar5 = param_4->MemberSerializerDescriptors;
  if (uVar1 != 0) {
    puVar4 = &param_4->MemberDescriptors->InternalMemberOffset;
    do {
      local_58._padding_ = (longlong)pFVar5->SerializerConfig;
      local_58._padding_ = 0;
      local_58.Source0 = (ulong64)(param_2 + *puVar4);
      local_58._padding_._0_4_ = 0;
      local_58.Source1 = (ulong64)(param_3 + *puVar4);
      local_58.bStateIsQuantized = true;
      bVar2 = (*pFVar5->Serializer->IsEqual)(param_1,&local_58);
      if (!bVar2) {
        return false;
      }
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 2;
      pFVar5 = pFVar5 + 1;
    } while (uVar3 < uVar1);
  }
  return true;
}

// OutputDefaultStateMembersHashToString @ 1442c8ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Net::FReplicationStateOperations::OutputDefaultStateMembersHashToString
          (UReplicationSystem *param_1,TStringBuilderBase<wchar_t> *param_2,
          FReplicationStateDescriptor *param_3)

{
  FNetRefHandle_u_0 FVar1;
  uchar *puVar2;
  FNetRefHandle_u_0 FVar3;
  FNetRefHandle_u_0 FVar4;
  FNetRefHandle_u_0 FVar5;
  FNetRefHandle_u_0 FVar6;
  FNetRefHandle_u_0 *pFVar7;
  FNetSerializationContext *pFVar8;
  int iVar9;
  longlong lVar10;
  FNetRefHandle_u_0 *pFVar11;
  undefined8 *puVar12;
  FNetSerializationContext *pFVar13;
  undefined1 auStackY_7b8 [32];
  ForAnyElementType local_788;
  int local_780 [2];
  FNetBitStreamWriter local_778;
  FInternalNetSerializationContext local_758;
  FNetSerializationContext local_718;
  FNetRefHandle_u_0 local_3a8;
  undefined8 uStack_3a0;
  undefined8 auStack_390 [95];
  undefined4 local_98;
  undefined8 local_90;
  FNetBitStreamWriter *local_88;
  undefined8 local_80;
  FInternalNetSerializationContext *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  uint local_48;
  ulonglong local_38;
  
  if (((param_1 != (UReplicationSystem *)0x0) &&
      (local_38 = __security_cookie.value ^ (ulonglong)auStackY_7b8,
      param_3 != (FReplicationStateDescriptor *)0x0)) &&
     (param_3->DefaultStateBuffer != (uchar *)0x0)) {
    local_788.Data = (FScriptContainerElement *)0x0;
    local_780[0] = 0;
    local_780[1] = 0;
    iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,0x400,&local_788,local_780,local_780 + 1);
    memset(local_788.Data + (longlong)iVar9 * 4,0,0x1000);
    FNetBitStreamWriter::FNetBitStreamWriter(&local_778);
    FNetBitStreamWriter::InitBytes(&local_778,local_788.Data,0x1000);
    lVar10 = 0x20;
    local_3a8.Value = 0;
    puVar12 = auStack_390;
    uStack_3a0 = 0;
    do {
      *puVar12 = 0;
      puVar12 = puVar12 + 3;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    local_48 = local_48 & 0xfffffffc;
    local_88 = &local_778;
    local_78 = (FInternalNetSerializationContext *)0x0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_98 = 0;
    local_90 = 0;
    local_80 = 0;
    local_58 = 0;
    local_50 = 0;
    local_4c = 0xffffffff;
    Net::Private::FInternalNetSerializationContext::FInternalNetSerializationContext
              (&local_758,param_1);
    local_48 = local_48 | 2;
    local_78 = &local_758;
    lVar10 = 6;
    pFVar7 = &local_3a8;
    pFVar8 = &local_718;
    do {
      pFVar13 = pFVar8;
      pFVar11 = pFVar7;
      pFVar8 = (FNetSerializationContext *)&(pFVar13->ReadJournal).Entries[4].BitOffset;
      FVar1 = pFVar11[1];
      FVar3 = pFVar11[2];
      FVar4 = pFVar11[3];
      (pFVar13->ErrorContext).ObjectHandle.field0_0x0 = *pFVar11;
      (pFVar13->ErrorContext).Error = (FName)FVar1;
      FVar1 = pFVar11[4];
      FVar5 = pFVar11[5];
      (pFVar13->ReadJournal).Entries[0].Name = (wchar_t *)FVar3;
      (pFVar13->ReadJournal).Entries[0].NetRefHandle.field0_0x0 = FVar4;
      FVar3 = pFVar11[6];
      FVar4 = pFVar11[7];
      *(FNetRefHandle_u_0 *)&(pFVar13->ReadJournal).Entries[0].BitOffset = FVar1;
      (pFVar13->ReadJournal).Entries[1].Name = (wchar_t *)FVar5;
      FVar1 = pFVar11[8];
      FVar5 = pFVar11[9];
      (pFVar13->ReadJournal).Entries[1].NetRefHandle.field0_0x0 = FVar3;
      *(FNetRefHandle_u_0 *)&(pFVar13->ReadJournal).Entries[1].BitOffset = FVar4;
      FVar3 = pFVar11[10];
      FVar4 = pFVar11[0xb];
      (pFVar13->ReadJournal).Entries[2].Name = (wchar_t *)FVar1;
      (pFVar13->ReadJournal).Entries[2].NetRefHandle.field0_0x0 = FVar5;
      FVar1 = pFVar11[0xc];
      FVar5 = pFVar11[0xd];
      *(FNetRefHandle_u_0 *)&(pFVar13->ReadJournal).Entries[2].BitOffset = FVar3;
      (pFVar13->ReadJournal).Entries[3].Name = (wchar_t *)FVar4;
      FVar3 = pFVar11[0xe];
      FVar4 = pFVar11[0xf];
      (pFVar13->ReadJournal).Entries[3].NetRefHandle.field0_0x0 = FVar1;
      *(FNetRefHandle_u_0 *)&(pFVar13->ReadJournal).Entries[3].BitOffset = FVar5;
      (pFVar13->ReadJournal).Entries[4].Name = (wchar_t *)FVar3;
      (pFVar13->ReadJournal).Entries[4].NetRefHandle.field0_0x0 = FVar4;
      lVar10 = lVar10 + -1;
      pFVar7 = pFVar11 + 0x10;
    } while (lVar10 != 0);
    FVar3 = pFVar11[0x11];
    FVar1 = pFVar11[0x1c];
    FVar4 = pFVar11[0x12];
    FVar5 = pFVar11[0x13];
    *(FNetRefHandle_u_0 *)pFVar8 = pFVar11[0x10];
    (pFVar13->ReadJournal).Entries[5].Name = (wchar_t *)FVar3;
    FVar3 = pFVar11[0x14];
    FVar6 = pFVar11[0x15];
    (pFVar13->ReadJournal).Entries[5].NetRefHandle.field0_0x0 = FVar4;
    *(FNetRefHandle_u_0 *)&(pFVar13->ReadJournal).Entries[5].BitOffset = FVar5;
    FVar4 = pFVar11[0x16];
    FVar5 = pFVar11[0x17];
    (pFVar13->ReadJournal).Entries[6].Name = (wchar_t *)FVar3;
    (pFVar13->ReadJournal).Entries[6].NetRefHandle.field0_0x0 = FVar6;
    FVar3 = pFVar11[0x18];
    FVar6 = pFVar11[0x19];
    *(FNetRefHandle_u_0 *)&(pFVar13->ReadJournal).Entries[6].BitOffset = FVar4;
    (pFVar13->ReadJournal).Entries[7].Name = (wchar_t *)FVar5;
    FVar4 = pFVar11[0x1a];
    FVar5 = pFVar11[0x1b];
    puVar2 = param_3->DefaultStateBuffer;
    (pFVar13->ReadJournal).Entries[7].NetRefHandle.field0_0x0 = FVar3;
    *(FNetRefHandle_u_0 *)&(pFVar13->ReadJournal).Entries[7].BitOffset = FVar6;
    (pFVar13->ReadJournal).Entries[8].Name = (wchar_t *)FVar4;
    (pFVar13->ReadJournal).Entries[8].NetRefHandle.field0_0x0 = FVar5;
    *(FNetRefHandle_u_0 *)&(pFVar13->ReadJournal).Entries[8].BitOffset = FVar1;
    OutputDescriptorMemberHashToString(&local_718,(uint *)local_788.Data,0,param_2,puVar2,param_3);
    FNetBitStreamWriter::~FNetBitStreamWriter(&local_778);
    if (local_788.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_788.Data);
    }
  }
  return;
}

// Quantize @ 1442d6f90

void __cdecl
UE::Net::FReplicationStateOperations::Quantize
          (FNetSerializationContext *param_1,uchar *param_2,uchar *param_3,
          FReplicationStateDescriptor *param_4)

{
  code *pcVar1;
  bool bVar2;
  FReplicationStateMemberDescriptor *pFVar3;
  ulonglong uVar4;
  FReplicationStateMemberSerializerDescriptor *pFVar5;
  FNetQuantizeArgs local_48;
  
  if ((((ulonglong)param_2 & (ulonglong)param_4->InternalAlignment - 1) != 0) ||
     (((ulonglong)param_3 & (ulonglong)param_4->ExternalAlignment - 1) != 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsAligned(DstInternalBuffer, Descriptor->InternalAlignment) && IsAligned(SrcExternalBuffer, Descriptor->ExternalAlignment)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationOperations.cpp"
                       ,0x57,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar3 = param_4->MemberDescriptors;
  pFVar5 = param_4->MemberSerializerDescriptors;
  if (param_4->MemberCount != 0) {
    uVar4 = (ulonglong)param_4->MemberCount;
    do {
      local_48._padding_ = (longlong)pFVar5->SerializerConfig;
      local_48.Source = (ulong64)(param_3 + pFVar3->ExternalMemberOffset);
      local_48._padding_ = 0;
      local_48.Target = (ulong64)(param_2 + pFVar3->InternalMemberOffset);
      local_48._padding_._0_4_ = 0;
      (*pFVar5->Serializer->Quantize)(param_1,&local_48);
      pFVar3 = pFVar3 + 1;
      pFVar5 = pFVar5 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}

// QuantizeWithMask @ 1442d7970

void __cdecl
UE::Net::FReplicationStateOperations::QuantizeWithMask
          (FNetSerializationContext *param_1,FNetBitArrayView *param_2,uint param_3,uchar *param_4,
          uchar *param_5,FReplicationStateDescriptor *param_6)

{
  ushort uVar1;
  FReplicationStateMemberChangeMaskDescriptor *pFVar2;
  uint *puVar3;
  code *pcVar4;
  FReplicationStateDescriptor *pFVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FReplicationStateMemberDescriptor *pFVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  FReplicationStateMemberSerializerDescriptor *pFVar15;
  FNetQuantizeArgs local_68;
  
  pFVar5 = param_6;
  if (((param_6->Traits & InitOnly) != None) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Descriptor->IsInitState()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationOperations.cpp"
                         ,0x6f,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((param_1->ChangeMask == (FNetBitArrayView *)0x0) ||
      (param_1->ChangeMask->Storage != param_2->Storage)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context.GetChangeMask() && (Context.GetChangeMask()->GetData() == ChangeMask.GetData())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationOperations.cpp"
                         ,0x40,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((((ulonglong)param_4 & (ulonglong)param_6->InternalAlignment - 1) != 0) ||
      (((ulonglong)param_5 & (ulonglong)param_6->ExternalAlignment - 1) != 0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsAligned(DstInternalBuffer, Descriptor->InternalAlignment) && IsAligned(SrcExternalBuffer, Descriptor->ExternalAlignment)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationOperations.cpp"
                         ,0x73,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar11 = param_6->MemberDescriptors;
  pFVar15 = param_6->MemberSerializerDescriptors;
  if (param_6->MemberCount != 0) {
    lVar10 = 0;
    param_6 = (FReplicationStateDescriptor *)(ulonglong)param_6->MemberCount;
    do {
      pFVar2 = pFVar5->MemberChangeMaskDescriptors;
      uVar9 = *(ushort *)((longlong)&pFVar2->BitOffset + lVar10) + param_3;
      uVar1 = *(ushort *)((longlong)&pFVar2->BitCount + lVar10);
      if (uVar1 == 1) {
        puVar3 = param_2->Storage;
        if ((param_2->BitCount <= uVar9) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index < BitCount",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                               ,0x2c1,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        bVar6 = (puVar3[uVar9 >> 5] >> (uVar9 & 0x1f) & 1) != 0;
      }
      else {
        uVar13 = param_2->BitCount;
        if (uVar9 < uVar13 && uVar1 != 0) {
          if ((ulonglong)uVar9 + ((ulonglong)uVar1 - 1) < (ulonglong)uVar13 - 1) {
            uVar13 = uVar9 + uVar1;
          }
          uVar14 = -1 << ((byte)uVar9 & 0x1f);
          uVar12 = uVar13 - 1 >> 5;
          for (uVar7 = uVar9 >> 5; uVar7 <= uVar12; uVar7 = uVar7 + 1) {
            uVar8 = 0xffffffff;
            if (uVar7 == uVar12) {
              uVar8 = 0xffffffff >> (~(byte)(uVar13 - 1) & 0x1f);
            }
            uVar8 = uVar8 & uVar14;
            uVar14 = 0xffffffff;
            if ((param_2->Storage[uVar7] & uVar8) != 0) {
              bVar6 = true;
              goto LAB_1442d7b8a;
            }
          }
          bVar6 = false;
        }
        else {
          bVar6 = false;
        }
      }
LAB_1442d7b8a:
      if (bVar6) {
        local_68._padding_ = (longlong)pFVar15->SerializerConfig;
        local_68.Source = (ulong64)(param_5 + pFVar11->ExternalMemberOffset);
        local_68.Target = (ulong64)(param_4 + pFVar11->InternalMemberOffset);
        local_68._padding_._4_4_ = (uint)*(ushort *)((longlong)&pFVar2->BitCount + lVar10);
        local_68._padding_._0_4_ = 0;
        local_68._padding_._0_4_ = uVar9;
        (*pFVar15->Serializer->Quantize)(param_1,&local_68);
      }
      pFVar11 = pFVar11 + 1;
      pFVar15 = pFVar15 + 1;
      lVar10 = lVar10 + 4;
      param_6 = (FReplicationStateDescriptor *)((longlong)&param_6[-1].DefaultStateBuffer + 7);
    } while (param_6 != (FReplicationStateDescriptor *)0x0);
  }
  return;
}

// Serialize @ 1442e2a80

void __cdecl
UE::Net::FReplicationStateOperations::Serialize
          (FNetSerializationContext *param_1,uchar *param_2,FReplicationStateDescriptor *param_3)

{
  uint *puVar1;
  uint *puVar2;
  ushort uVar3;
  FReplicationStateMemberDescriptor *pFVar4;
  FReplicationStateMemberSerializerDescriptor *pFVar5;
  FReplicationStateMemberDebugDescriptor *pFVar6;
  FNetBitStreamWriter *pFVar7;
  ForElementType<FNetTracePacketContentEvent> FVar8;
  uint uVar9;
  uint uVar10;
  FReplicationStateMemberSerializerDescriptor *pFVar11;
  ForElementType<FNetTracePacketContentEvent> FVar12;
  FNetTraceCollector *pFVar13;
  FNetTraceCollector *pFVar14;
  ulonglong uVar15;
  uint local_res18;
  FNetSerializeArgs local_60;
  
  pFVar4 = param_3->MemberDescriptors;
  uVar15 = 0;
  pFVar5 = param_3->MemberSerializerDescriptors;
  pFVar6 = param_3->MemberDebugDescriptors;
  uVar3 = param_3->MemberCount;
  if (uVar3 != 0) {
    do {
      pFVar7 = param_1->BitStreamWriter;
      uVar9 = 0xffffffff;
      pFVar13 = (FNetTraceCollector *)0x0;
      if (GNetTraceRuntimeVerbosity != 0) {
        pFVar13 = param_1->TraceCollector;
      }
      if (pFVar13 != (FNetTraceCollector *)0x0) {
        uVar9 = pFVar7->BufferBitPosition;
        if (pFVar7->OverflowBitCount != 0) {
          uVar9 = 0;
        }
        uVar9 = FNetTrace::BeginPacketContentEvent(pFVar13,NameId,uVar9);
        uVar10 = FNetTrace::TraceName(pFVar6[uVar15].DebugName);
        FVar8 = (pFVar13->Events).AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<FNetTracePacketContentEvent>)&pFVar13->Events;
        if (FVar8 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
          FVar12 = FVar8;
        }
        *(uint *)((longlong)FVar12 + (ulonglong)uVar9 * 0x10) = uVar10;
      }
      pFVar11 = pFVar5 + uVar15;
      puVar1 = &param_1->BitStreamWriter->OverflowBitCount;
      pFVar14 = (FNetTraceCollector *)0x0;
      if (2 < GNetTraceRuntimeVerbosity) {
        pFVar14 = param_1->TraceCollector;
      }
      puVar2 = &param_1->BitStreamWriter->BufferBitPosition;
      local_res18 = 0xffffffff;
      if (pFVar14 != (FNetTraceCollector *)0x0) {
        uVar10 = *puVar2;
        if (*puVar1 != 0) {
          uVar10 = 0;
        }
        local_res18 = FNetTrace::BeginPacketContentEvent(pFVar14,NameId,uVar10);
        uVar10 = FNetTrace::TraceName(pFVar11->Serializer->Name);
        FVar8 = (pFVar14->Events).AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<FNetTracePacketContentEvent>)&pFVar14->Events;
        if (FVar8 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
          FVar12 = FVar8;
        }
        *(uint *)((longlong)FVar12 + (ulonglong)local_res18 * 0x10) = uVar10;
      }
      local_60._padding_ = 0;
      local_60._padding_._0_4_ = 0;
      local_60._padding_ = (longlong)pFVar11->SerializerConfig;
      local_60.Source = (ulong64)(param_2 + pFVar4[uVar15].InternalMemberOffset);
      (*pFVar11->Serializer->Serialize)(param_1,&local_60);
      if (local_res18 != 0xffffffff) {
        uVar10 = *puVar2;
        if (*puVar1 != 0) {
          uVar10 = 0;
        }
        FNetTrace::EndPacketContentEvent(pFVar14,local_res18,uVar10);
      }
      if (uVar9 != 0xffffffff) {
        uVar10 = pFVar7->BufferBitPosition;
        if (pFVar7->OverflowBitCount != 0) {
          uVar10 = 0;
        }
        FNetTrace::EndPacketContentEvent(pFVar13,uVar9,uVar10);
      }
      uVar9 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar9;
    } while (uVar9 < uVar3);
  }
  return;
}

// SerializeDelta @ 1442e2cd0

void __cdecl
UE::Net::FReplicationStateOperations::SerializeDelta
          (FNetSerializationContext *param_1,uchar *param_2,uchar *param_3,
          FReplicationStateDescriptor *param_4)

{
  uint *puVar1;
  uint *puVar2;
  ushort uVar3;
  FReplicationStateMemberSerializerDescriptor *pFVar4;
  FReplicationStateMemberDescriptor *pFVar5;
  FReplicationStateMemberDebugDescriptor *pFVar6;
  FNetBitStreamWriter *pFVar7;
  ForElementType<FNetTracePacketContentEvent> FVar8;
  uint uVar9;
  uint uVar10;
  FReplicationStateMemberSerializerDescriptor *pFVar11;
  ForElementType<FNetTracePacketContentEvent> FVar12;
  FNetTraceCollector *pFVar13;
  ulonglong uVar14;
  FNetTraceCollector *pFVar15;
  uint local_res20;
  FNetSerializeDeltaArgs local_60;
  
  pFVar4 = param_4->MemberSerializerDescriptors;
  pFVar5 = param_4->MemberDescriptors;
  pFVar6 = param_4->MemberDebugDescriptors;
  uVar3 = param_4->MemberCount;
  uVar14 = 0;
  if (uVar3 != 0) {
    do {
      pFVar7 = param_1->BitStreamWriter;
      uVar9 = 0xffffffff;
      pFVar13 = (FNetTraceCollector *)0x0;
      if (GNetTraceRuntimeVerbosity != 0) {
        pFVar13 = param_1->TraceCollector;
      }
      if (pFVar13 != (FNetTraceCollector *)0x0) {
        uVar9 = pFVar7->BufferBitPosition;
        if (pFVar7->OverflowBitCount != 0) {
          uVar9 = 0;
        }
        uVar9 = FNetTrace::BeginPacketContentEvent(pFVar13,NameId,uVar9);
        uVar10 = FNetTrace::TraceName(pFVar6[uVar14].DebugName);
        FVar8 = (pFVar13->Events).AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<FNetTracePacketContentEvent>)&pFVar13->Events;
        if (FVar8 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
          FVar12 = FVar8;
        }
        *(uint *)((longlong)FVar12 + (ulonglong)uVar9 * 0x10) = uVar10;
      }
      pFVar11 = pFVar4 + uVar14;
      local_60._padding_ = 0;
      local_60._padding_._0_4_ = 0;
      local_60._padding_ = (longlong)pFVar11->SerializerConfig;
      local_60._padding_ = (longlong)(param_2 + pFVar5[uVar14].InternalMemberOffset);
      local_60.Prev = (ulong64)(param_3 + pFVar5[uVar14].InternalMemberOffset);
      pFVar15 = (FNetTraceCollector *)0x0;
      if (2 < GNetTraceRuntimeVerbosity) {
        pFVar15 = param_1->TraceCollector;
      }
      local_res20 = 0xffffffff;
      puVar1 = &param_1->BitStreamWriter->OverflowBitCount;
      puVar2 = &param_1->BitStreamWriter->BufferBitPosition;
      if (pFVar15 != (FNetTraceCollector *)0x0) {
        uVar10 = *puVar2;
        if (*puVar1 != 0) {
          uVar10 = 0;
        }
        local_res20 = FNetTrace::BeginPacketContentEvent(pFVar15,NameId,uVar10);
        uVar10 = FNetTrace::TraceName(pFVar11->Serializer->Name);
        FVar8 = (pFVar15->Events).AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<FNetTracePacketContentEvent>)&pFVar15->Events;
        if (FVar8 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
          FVar12 = FVar8;
        }
        *(uint *)((longlong)FVar12 + (ulonglong)local_res20 * 0x10) = uVar10;
      }
      (*pFVar11->Serializer->SerializeDelta)(param_1,&local_60);
      if (local_res20 != 0xffffffff) {
        uVar10 = *puVar2;
        if (*puVar1 != 0) {
          uVar10 = 0;
        }
        FNetTrace::EndPacketContentEvent(pFVar15,local_res20,uVar10);
      }
      if (uVar9 != 0xffffffff) {
        uVar10 = pFVar7->BufferBitPosition;
        if (pFVar7->OverflowBitCount != 0) {
          uVar10 = 0;
        }
        FNetTrace::EndPacketContentEvent(pFVar13,uVar9,uVar10);
      }
      uVar9 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar9;
    } while (uVar9 < uVar3);
  }
  return;
}

// SerializeDeltaWithMask @ 1442e2f30

void __cdecl
UE::Net::FReplicationStateOperations::SerializeDeltaWithMask
          (FNetSerializationContext *param_1,FNetBitArrayView *param_2,uint param_3,uchar *param_4,
          uchar *param_5,FReplicationStateDescriptor *param_6)

{
  uint *puVar1;
  ushort uVar2;
  ushort uVar3;
  FReplicationStateMemberDebugDescriptor *pFVar4;
  FReplicationStateMemberDescriptor *pFVar5;
  FReplicationStateMemberSerializerDescriptor *pFVar6;
  FReplicationStateMemberLifetimeConditionDescriptor *pFVar7;
  FReplicationStateMemberChangeMaskDescriptor *pFVar8;
  uint *puVar9;
  FNetBitStreamWriter *pFVar10;
  ForElementType<FNetTracePacketContentEvent> FVar11;
  FNetBitStreamWriter *pFVar12;
  FNetBitStreamWriter *pFVar13;
  code *pcVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  FReplicationStateMemberSerializerDescriptor *pFVar20;
  uint uVar21;
  ulonglong uVar22;
  ForElementType<FNetTracePacketContentEvent> FVar23;
  ulonglong uVar24;
  uint uVar25;
  FNetTraceCollector *pFVar26;
  FNetTraceCollector *pFVar27;
  char cVar28;
  FNetTraceCollector *pFVar29;
  FNetTraceCollector *pFVar30;
  uint local_c8;
  FNetSerializeDeltaArgs local_78;
  
  if (((param_6->Traits & InitOnly) != None) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("!Descriptor->IsInitState()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationOperations.cpp"
                          ,0x23c,L""), bVar15)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  if (((param_1->ChangeMask == (FNetBitArrayView *)0x0) ||
      (param_1->ChangeMask->Storage != param_2->Storage)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Context.GetChangeMask() && (Context.GetChangeMask()->GetData() == ChangeMask.GetData())"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationOperations.cpp"
                          ,0x40,L""), bVar15)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pFVar4 = param_6->MemberDebugDescriptors;
  uVar24 = 0;
  pFVar5 = param_6->MemberDescriptors;
  pFVar6 = param_6->MemberSerializerDescriptors;
  pFVar7 = param_6->MemberLifetimeConditionDescriptors;
  uVar2 = param_6->MemberCount;
  local_c8 = 0;
  if (uVar2 != 0) {
    do {
      pFVar20 = pFVar6 + uVar24;
      pFVar8 = param_6->MemberChangeMaskDescriptors;
      uVar3 = pFVar8[uVar24].BitCount;
      uVar25 = pFVar8[uVar24].BitOffset + param_3;
      uVar22 = uVar24;
      if (uVar3 == 1) {
        puVar9 = param_2->Storage;
        if (param_2->BitCount <= uVar25) {
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index < BitCount",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                              ,0x2c1,L"");
          if (bVar15) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          uVar22 = (ulonglong)local_c8;
        }
        bVar15 = (puVar9[uVar25 >> 5] >> (uVar25 & 0x1f) & 1) != 0;
      }
      else {
        uVar17 = param_2->BitCount;
        if (uVar25 < uVar17 && uVar3 != 0) {
          if ((ulonglong)uVar25 + ((ulonglong)uVar3 - 1) < (ulonglong)uVar17 - 1) {
            uVar17 = uVar25 + uVar3;
          }
          uVar16 = -1 << ((byte)uVar25 & 0x1f);
          uVar19 = uVar17 - 1 >> 5;
          for (uVar18 = uVar25 >> 5; uVar18 <= uVar19; uVar18 = uVar18 + 1) {
            uVar21 = 0xffffffff;
            if (uVar18 == uVar19) {
              uVar21 = 0xffffffff >> (~(byte)(uVar17 - 1) & 0x1f);
            }
            uVar21 = uVar21 & uVar16;
            uVar16 = 0xffffffff;
            if ((param_2->Storage[uVar18] & uVar21) != 0) {
              uVar22 = (ulonglong)local_c8;
              bVar15 = true;
              goto LAB_1442e3158;
            }
          }
          uVar22 = (ulonglong)local_c8;
        }
        bVar15 = false;
      }
LAB_1442e3158:
      uVar17 = (uint)uVar22;
      if (bVar15) {
        if (pFVar7 == (FReplicationStateMemberLifetimeConditionDescriptor *)0x0) {
          cVar28 = '\0';
        }
        else {
          cVar28 = pFVar7[uVar22].Condition;
        }
        uVar16 = 0xffffffff;
        pFVar10 = param_1->BitStreamWriter;
        pFVar29 = (FNetTraceCollector *)0x0;
        if (1 < GNetTraceRuntimeVerbosity) {
          pFVar29 = param_1->TraceCollector;
        }
        if (pFVar29 != (FNetTraceCollector *)0x0) {
          uVar17 = pFVar10->BufferBitPosition;
          if (pFVar10->OverflowBitCount != 0) {
            uVar17 = 0;
          }
          uVar16 = FNetTrace::BeginPacketContentEvent(pFVar29,NameId,uVar17);
          uVar17 = FNetTrace::TraceName(Net::Private::s_LifetimeConditionDebugNames + cVar28);
          FVar11 = (pFVar29->Events).AllocatorInstance.SecondaryData;
          FVar23 = (ForElementType<FNetTracePacketContentEvent>)&pFVar29->Events;
          if (FVar11 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
            FVar23 = FVar11;
          }
          *(uint *)((longlong)FVar23 + (ulonglong)uVar16 * 0x10) = uVar17;
        }
        if ((pFVar7 == (FReplicationStateMemberLifetimeConditionDescriptor *)0x0) &&
           (uVar16 != 0xffffffff)) {
          uVar17 = pFVar10->BufferBitPosition;
          if (pFVar10->OverflowBitCount != 0) {
            uVar17 = 0;
          }
          FNetTrace::EndPacketContentEvent(pFVar29,uVar16,uVar17);
          uVar16 = 0xffffffff;
        }
        pFVar12 = param_1->BitStreamWriter;
        uVar17 = 0xffffffff;
        pFVar30 = (FNetTraceCollector *)0x0;
        if (GNetTraceRuntimeVerbosity != 0) {
          pFVar30 = param_1->TraceCollector;
        }
        if (pFVar30 != (FNetTraceCollector *)0x0) {
          uVar17 = pFVar12->BufferBitPosition;
          if (pFVar12->OverflowBitCount != 0) {
            uVar17 = 0;
          }
          uVar17 = FNetTrace::BeginPacketContentEvent(pFVar30,NameId,uVar17);
          uVar18 = FNetTrace::TraceName(pFVar4[local_c8].DebugName);
          FVar11 = (pFVar30->Events).AllocatorInstance.SecondaryData;
          FVar23 = (ForElementType<FNetTracePacketContentEvent>)&pFVar30->Events;
          if (FVar11 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
            FVar23 = FVar11;
          }
          *(uint *)((longlong)FVar23 + (ulonglong)uVar17 * 0x10) = uVar18;
        }
        uVar19 = 0xffffffff;
        local_78._padding_._0_4_ = 0;
        local_78._padding_ = (longlong)pFVar20->SerializerConfig;
        uVar18 = pFVar5[uVar24].InternalMemberOffset;
        local_78._padding_ = (longlong)(param_4 + uVar18);
        local_78.Prev = (ulong64)(param_5 + uVar18);
        local_78._padding_._4_4_ = (uint)pFVar8[uVar24].BitCount;
        pFVar13 = param_1->BitStreamWriter;
        pFVar26 = (FNetTraceCollector *)0x0;
        if (2 < GNetTraceRuntimeVerbosity) {
          pFVar26 = param_1->TraceCollector;
        }
        puVar9 = &pFVar13->OverflowBitCount;
        puVar1 = &pFVar13->BufferBitPosition;
        local_78._padding_._0_4_ = uVar25;
        if (pFVar26 != (FNetTraceCollector *)0x0) {
          pFVar27 = (FNetTraceCollector *)(ulonglong)*puVar1;
          if (*puVar9 != 0) {
            pFVar27 = (FNetTraceCollector *)0x0;
          }
          uVar19 = FNetTrace::BeginPacketContentEvent(pFVar26,NameId,(uint)pFVar27);
          uVar25 = FNetTrace::TraceName(pFVar20->Serializer->Name);
          FVar11 = (pFVar26->Events).AllocatorInstance.SecondaryData;
          FVar23 = (ForElementType<FNetTracePacketContentEvent>)&pFVar26->Events;
          if (FVar11 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
            FVar23 = FVar11;
          }
          *(uint *)((longlong)FVar23 + (ulonglong)uVar19 * 0x10) = uVar25;
        }
        (*pFVar20->Serializer->SerializeDelta)(param_1,&local_78);
        if (uVar19 != 0xffffffff) {
          uVar25 = *puVar1;
          if (*puVar9 != 0) {
            uVar25 = 0;
          }
          FNetTrace::EndPacketContentEvent(pFVar26,uVar19,uVar25);
        }
        if (uVar17 != 0xffffffff) {
          uVar25 = pFVar12->BufferBitPosition;
          if (pFVar12->OverflowBitCount != 0) {
            uVar25 = 0;
          }
          FNetTrace::EndPacketContentEvent(pFVar30,uVar17,uVar25);
        }
        uVar17 = local_c8;
        if (uVar16 != 0xffffffff) {
          uVar25 = pFVar10->BufferBitPosition;
          if (pFVar10->OverflowBitCount != 0) {
            uVar25 = 0;
          }
          FNetTrace::EndPacketContentEvent(pFVar29,uVar16,uVar25);
        }
      }
      local_c8 = uVar17 + 1;
      uVar24 = (ulonglong)local_c8;
    } while (local_c8 < uVar2);
  }
  return;
}

// SerializeWithMask @ 1442e3b30

void __cdecl
UE::Net::FReplicationStateOperations::SerializeWithMask
          (FNetSerializationContext *param_1,FNetBitArrayView *param_2,uint param_3,uchar *param_4,
          FReplicationStateDescriptor *param_5)

{
  uint *puVar1;
  ushort uVar2;
  ushort uVar3;
  FReplicationStateMemberDebugDescriptor *pFVar4;
  FReplicationStateMemberDescriptor *pFVar5;
  FReplicationStateMemberSerializerDescriptor *pFVar6;
  FReplicationStateMemberLifetimeConditionDescriptor *pFVar7;
  FReplicationStateMemberChangeMaskDescriptor *pFVar8;
  uint *puVar9;
  FNetBitStreamWriter *pFVar10;
  ForElementType<FNetTracePacketContentEvent> FVar11;
  FNetBitStreamWriter *pFVar12;
  FNetBitStreamWriter *pFVar13;
  code *pcVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  FReplicationStateMemberSerializerDescriptor *pFVar19;
  uint uVar20;
  ulonglong uVar21;
  ForElementType<FNetTracePacketContentEvent> FVar22;
  ulonglong uVar23;
  uint uVar24;
  FNetTraceCollector *pFVar25;
  uint uVar26;
  FNetTraceCollector *pFVar27;
  char cVar28;
  FNetTraceCollector *pFVar29;
  FNetTraceCollector *pFVar30;
  uint local_c8;
  uint local_c4;
  FNetSerializeArgs local_70;
  
  if (((param_5->Traits & InitOnly) != None) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("!Descriptor->IsInitState()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationOperations.cpp"
                          ,0x1dd,L""), bVar15)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  if (((param_1->ChangeMask == (FNetBitArrayView *)0x0) ||
      (param_1->ChangeMask->Storage != param_2->Storage)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Context.GetChangeMask() && (Context.GetChangeMask()->GetData() == ChangeMask.GetData())"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationOperations.cpp"
                          ,0x40,L""), bVar15)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pFVar4 = param_5->MemberDebugDescriptors;
  uVar23 = 0;
  pFVar5 = param_5->MemberDescriptors;
  pFVar6 = param_5->MemberSerializerDescriptors;
  pFVar7 = param_5->MemberLifetimeConditionDescriptors;
  uVar2 = param_5->MemberCount;
  local_c8 = 0;
  if (uVar2 != 0) {
    do {
      pFVar19 = pFVar6 + uVar23;
      pFVar8 = param_5->MemberChangeMaskDescriptors;
      uVar3 = pFVar8[uVar23].BitCount;
      uVar24 = pFVar8[uVar23].BitOffset + param_3;
      uVar21 = uVar23;
      if (uVar3 == 1) {
        puVar9 = param_2->Storage;
        if (param_2->BitCount <= uVar24) {
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index < BitCount",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                              ,0x2c1,L"");
          if (bVar15) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          uVar21 = (ulonglong)local_c8;
        }
        bVar15 = (puVar9[uVar24 >> 5] >> (uVar24 & 0x1f) & 1) != 0;
      }
      else {
        uVar17 = param_2->BitCount;
        if (uVar24 < uVar17 && uVar3 != 0) {
          if ((ulonglong)uVar24 + ((ulonglong)uVar3 - 1) < (ulonglong)uVar17 - 1) {
            uVar17 = uVar24 + uVar3;
          }
          uVar16 = -1 << ((byte)uVar24 & 0x1f);
          uVar26 = uVar17 - 1 >> 5;
          for (uVar18 = uVar24 >> 5; uVar18 <= uVar26; uVar18 = uVar18 + 1) {
            uVar20 = 0xffffffff;
            if (uVar18 == uVar26) {
              uVar20 = 0xffffffff >> (~(byte)(uVar17 - 1) & 0x1f);
            }
            uVar20 = uVar20 & uVar16;
            uVar16 = 0xffffffff;
            if ((param_2->Storage[uVar18] & uVar20) != 0) {
              uVar21 = (ulonglong)local_c8;
              bVar15 = true;
              goto LAB_1442e3d58;
            }
          }
          uVar21 = (ulonglong)local_c8;
        }
        bVar15 = false;
      }
LAB_1442e3d58:
      uVar17 = (uint)uVar21;
      if (bVar15) {
        if (pFVar7 == (FReplicationStateMemberLifetimeConditionDescriptor *)0x0) {
          cVar28 = '\0';
        }
        else {
          cVar28 = pFVar7[uVar21].Condition;
        }
        uVar16 = 0xffffffff;
        pFVar10 = param_1->BitStreamWriter;
        pFVar29 = (FNetTraceCollector *)0x0;
        if (1 < GNetTraceRuntimeVerbosity) {
          pFVar29 = param_1->TraceCollector;
        }
        if (pFVar29 != (FNetTraceCollector *)0x0) {
          uVar17 = pFVar10->BufferBitPosition;
          if (pFVar10->OverflowBitCount != 0) {
            uVar17 = 0;
          }
          uVar16 = FNetTrace::BeginPacketContentEvent(pFVar29,NameId,uVar17);
          uVar17 = FNetTrace::TraceName(Net::Private::s_LifetimeConditionDebugNames + cVar28);
          FVar11 = (pFVar29->Events).AllocatorInstance.SecondaryData;
          FVar22 = (ForElementType<FNetTracePacketContentEvent>)&pFVar29->Events;
          if (FVar11 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
            FVar22 = FVar11;
          }
          *(uint *)((longlong)FVar22 + (ulonglong)uVar16 * 0x10) = uVar17;
        }
        if ((pFVar7 == (FReplicationStateMemberLifetimeConditionDescriptor *)0x0) &&
           (uVar16 != 0xffffffff)) {
          uVar17 = pFVar10->BufferBitPosition;
          if (pFVar10->OverflowBitCount != 0) {
            uVar17 = 0;
          }
          FNetTrace::EndPacketContentEvent(pFVar29,uVar16,uVar17);
          uVar16 = 0xffffffff;
        }
        pFVar12 = param_1->BitStreamWriter;
        uVar17 = 0xffffffff;
        pFVar30 = (FNetTraceCollector *)0x0;
        if (GNetTraceRuntimeVerbosity != 0) {
          pFVar30 = param_1->TraceCollector;
        }
        if (pFVar30 != (FNetTraceCollector *)0x0) {
          uVar17 = pFVar12->BufferBitPosition;
          if (pFVar12->OverflowBitCount != 0) {
            uVar17 = 0;
          }
          uVar17 = FNetTrace::BeginPacketContentEvent(pFVar30,NameId,uVar17);
          uVar18 = FNetTrace::TraceName(pFVar4[local_c8].DebugName);
          FVar11 = (pFVar30->Events).AllocatorInstance.SecondaryData;
          FVar22 = (ForElementType<FNetTracePacketContentEvent>)&pFVar30->Events;
          if (FVar11 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
            FVar22 = FVar11;
          }
          *(uint *)((longlong)FVar22 + (ulonglong)uVar17 * 0x10) = uVar18;
        }
        pFVar13 = param_1->BitStreamWriter;
        local_c4 = 0xffffffff;
        pFVar25 = (FNetTraceCollector *)0x0;
        if (2 < GNetTraceRuntimeVerbosity) {
          pFVar25 = param_1->TraceCollector;
        }
        puVar9 = &pFVar13->OverflowBitCount;
        puVar1 = &pFVar13->BufferBitPosition;
        if (pFVar25 != (FNetTraceCollector *)0x0) {
          pFVar27 = (FNetTraceCollector *)(ulonglong)*puVar1;
          if (*puVar9 != 0) {
            pFVar27 = (FNetTraceCollector *)0x0;
          }
          local_c4 = FNetTrace::BeginPacketContentEvent(pFVar25,NameId,(uint)pFVar27);
          uVar18 = FNetTrace::TraceName(pFVar19->Serializer->Name);
          FVar11 = (pFVar25->Events).AllocatorInstance.SecondaryData;
          FVar22 = (ForElementType<FNetTracePacketContentEvent>)&pFVar25->Events;
          if (FVar11 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
            FVar22 = FVar11;
          }
          *(uint *)((longlong)FVar22 + (ulonglong)local_c4 * 0x10) = uVar18;
        }
        local_70._padding_._0_4_ = 0;
        local_70._padding_ = (longlong)pFVar19->SerializerConfig;
        local_70.Source = (ulong64)(param_4 + pFVar5[uVar23].InternalMemberOffset);
        local_70._padding_._4_4_ = (uint)pFVar8[uVar23].BitCount;
        local_70._padding_._0_4_ = uVar24;
        (*pFVar19->Serializer->Serialize)(param_1,&local_70);
        if (local_c4 != 0xffffffff) {
          uVar24 = *puVar1;
          if (*puVar9 != 0) {
            uVar24 = 0;
          }
          FNetTrace::EndPacketContentEvent(pFVar25,local_c4,uVar24);
        }
        if (uVar17 != 0xffffffff) {
          uVar24 = pFVar12->BufferBitPosition;
          if (pFVar12->OverflowBitCount != 0) {
            uVar24 = 0;
          }
          FNetTrace::EndPacketContentEvent(pFVar30,uVar17,uVar24);
        }
        uVar17 = local_c8;
        if (uVar16 != 0xffffffff) {
          uVar24 = pFVar10->BufferBitPosition;
          if (pFVar10->OverflowBitCount != 0) {
            uVar24 = 0;
          }
          FNetTrace::EndPacketContentEvent(pFVar29,uVar16,uVar24);
        }
      }
      local_c8 = uVar17 + 1;
      uVar23 = (ulonglong)local_c8;
    } while (local_c8 < uVar2);
  }
  return;
}

// Validate @ 1442ec6e0

bool __cdecl
UE::Net::FReplicationStateOperations::Validate
          (FNetSerializationContext *param_1,uchar *param_2,FReplicationStateDescriptor *param_3)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  FReplicationStateMemberDescriptor *pFVar4;
  FReplicationStateMemberSerializerDescriptor *pFVar5;
  FNetValidateArgs local_38;
  
  if (param_3 == (FReplicationStateDescriptor *)0x0) {
LAB_1442ec765:
    bVar2 = false;
  }
  else {
    uVar1 = param_3->MemberCount;
    uVar3 = 0;
    pFVar4 = param_3->MemberDescriptors;
    pFVar5 = param_3->MemberSerializerDescriptors;
    if (uVar1 != 0) {
      do {
        local_38._padding_ = (longlong)pFVar5->SerializerConfig;
        local_38.Source = (ulong64)(param_2 + pFVar4->ExternalMemberOffset);
        local_38._padding_ = 0;
        local_38._padding_._0_4_ = 0;
        bVar2 = (*pFVar5->Serializer->Validate)(param_1,&local_38);
        if (!bVar2) goto LAB_1442ec765;
        uVar3 = uVar3 + 1;
        pFVar4 = pFVar4 + 1;
        pFVar5 = pFVar5 + 1;
      } while (uVar3 < uVar1);
    }
    bVar2 = true;
  }
  return bVar2;
}

