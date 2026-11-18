// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 11

// Deserialize @ 1442bbbd0

void __cdecl
UE::Net::FReplicationProtocolOperations::Deserialize
          (FNetSerializationContext *param_1,uchar *param_2,FReplicationProtocol *param_3)

{
  FReplicationStateMemberSerializerDescriptor *pFVar1;
  ushort uVar2;
  FReplicationStateDescriptor **ppFVar3;
  FReplicationStateDescriptor *pFVar4;
  FReplicationStateMemberSerializerDescriptor *pFVar5;
  FReplicationStateMemberDebugDescriptor *pFVar6;
  FReplicationStateMemberDescriptor *pFVar7;
  FNetBitStreamReader *pFVar8;
  ForElementType<FNetTracePacketContentEvent> FVar9;
  FNetBitStreamReader *pFVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ForElementType<FNetTracePacketContentEvent> FVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  FNetTraceCollector *pFVar17;
  FNetTraceCollector *pFVar18;
  uint local_res20;
  FNetDeserializeArgs local_58;
  
  uVar15 = 0;
  ppFVar3 = param_3->ReplicationStateDescriptors;
  local_res20 = 0;
  if (param_3->ReplicationStateCount != 0) {
    do {
      pFVar4 = ppFVar3[uVar15];
      FNetSerializationContext::AddReadJournalEntry(param_1,pFVar4->DebugName);
      pFVar5 = pFVar4->MemberSerializerDescriptors;
      pFVar6 = pFVar4->MemberDebugDescriptors;
      uVar15 = (ulonglong)(param_2 + ((ulonglong)pFVar4->InternalAlignment - 1)) &
               -(ulonglong)pFVar4->InternalAlignment;
      pFVar7 = pFVar4->MemberDescriptors;
      uVar16 = 0;
      uVar2 = pFVar4->MemberCount;
      if (uVar2 != 0) {
        do {
          pFVar8 = param_1->BitStreamReader;
          uVar11 = 0xffffffff;
          pFVar17 = (FNetTraceCollector *)0x0;
          if (GNetTraceRuntimeVerbosity != 0) {
            pFVar17 = param_1->TraceCollector;
          }
          if (pFVar17 != (FNetTraceCollector *)0x0) {
            uVar11 = FNetTrace::BeginPacketContentEvent(pFVar17,NameId,pFVar8->BufferBitPosition);
            uVar12 = FNetTrace::TraceName(pFVar6[uVar16].DebugName);
            FVar9 = (pFVar17->Events).AllocatorInstance.SecondaryData;
            FVar14 = (ForElementType<FNetTracePacketContentEvent>)&pFVar17->Events;
            if (FVar9 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
              FVar14 = FVar9;
            }
            *(uint *)((longlong)FVar14 + (ulonglong)uVar11 * 0x10) = uVar12;
          }
          FNetSerializationContext::AddReadJournalEntry(param_1,pFVar6[uVar16].DebugName);
          pFVar18 = (FNetTraceCollector *)0x0;
          if (2 < GNetTraceRuntimeVerbosity) {
            pFVar18 = param_1->TraceCollector;
          }
          pFVar1 = pFVar5 + uVar16;
          pFVar10 = param_1->BitStreamReader;
          uVar12 = 0xffffffff;
          if (pFVar18 != (FNetTraceCollector *)0x0) {
            uVar12 = FNetTrace::BeginPacketContentEvent(pFVar18,NameId,pFVar10->BufferBitPosition);
            uVar13 = FNetTrace::TraceName(pFVar1->Serializer->Name);
            FVar9 = (pFVar18->Events).AllocatorInstance.SecondaryData;
            FVar14 = (ForElementType<FNetTracePacketContentEvent>)&pFVar18->Events;
            if (FVar9 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
              FVar14 = FVar9;
            }
            *(uint *)((longlong)FVar14 + (ulonglong)uVar12 * 0x10) = uVar13;
          }
          local_58._padding_._0_4_ = 0;
          local_58._padding_ = 0;
          local_58._padding_ = (longlong)pFVar1->SerializerConfig;
          local_58.Target = pFVar7[uVar16].InternalMemberOffset + uVar15;
          (*pFVar1->Serializer->Deserialize)(param_1,&local_58);
          if (uVar12 != 0xffffffff) {
            FNetTrace::EndPacketContentEvent(pFVar18,uVar12,pFVar10->BufferBitPosition);
          }
          if (uVar11 != 0xffffffff) {
            FNetTrace::EndPacketContentEvent(pFVar17,uVar11,pFVar8->BufferBitPosition);
          }
          uVar11 = (int)uVar16 + 1;
          uVar16 = (ulonglong)uVar11;
        } while (uVar11 < uVar2);
      }
      param_2 = (uchar *)(uVar15 + pFVar4->InternalSize);
      local_res20 = local_res20 + 1;
      uVar15 = (ulonglong)local_res20;
    } while (local_res20 < param_3->ReplicationStateCount);
  }
  return;
}

// DeserializeInitialStateWithMask @ 1442bc7a0

void __cdecl
UE::Net::FReplicationProtocolOperations::DeserializeInitialStateWithMask
          (FNetSerializationContext *param_1,uint *param_2,uchar *param_3,
          FReplicationProtocol *param_4)

{
  FReplicationStateDescriptor **ppFVar1;
  FNetBitStreamReader *pFVar2;
  FReplicationStateDescriptor *pFVar3;
  uchar *_Src;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ForElementType<FNetTracePacketContentEvent> FVar9;
  uchar *_Dst;
  ForElementType<FNetTracePacketContentEvent> FVar10;
  FNetTraceCollector *pFVar11;
  ulonglong uVar12;
  FNetBitStreamReader **local_40;
  FNetBitArrayView local_38;
  
  if (!bDeltaCompressInitialState) {
    DeserializeWithMask(param_1,param_2,param_3,param_4);
    return;
  }
  if (param_4->InternalTotalSize != 0) {
    local_38.BitCount = param_4->ChangeMaskBitCount;
    ppFVar1 = param_4->ReplicationStateDescriptors;
    local_38.WordCount = local_38.BitCount + 0x1f >> 5;
    if (local_38.BitCount == 0) {
      local_38.Storage = &local_38.BitCount;
    }
    else {
      param_2[local_38.WordCount - 1] =
           param_2[local_38.WordCount - 1] & 0xffffffffU >> (-(char)local_38.BitCount & 0x1fU);
      local_38.Storage = param_2;
    }
    param_1->ChangeMask = &local_38;
    pFVar2 = param_1->BitStreamReader;
    pFVar11 = (FNetTraceCollector *)0x0;
    if (GNetTraceRuntimeVerbosity != 0) {
      pFVar11 = param_1->TraceCollector;
    }
    if (pFVar11 == (FNetTraceCollector *)0x0) {
      ReadSparseBitArray(pFVar2,param_2,param_4->ChangeMaskBitCount,ContainsMostlyOnes);
    }
    else {
      uVar6 = FNetTrace::BeginPacketContentEvent(pFVar11,NameId,pFVar2->BufferBitPosition);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ChangeMasks = CreatePersistentNetDebugName(L"ChangeMasks",0xb);
        _Init_thread_footer(&::_TSS0);
      }
      uVar7 = FNetTrace::TraceName(ChangeMasks);
      FVar10 = (pFVar11->Events).AllocatorInstance.SecondaryData;
      if (FVar10 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar10 = (ForElementType<FNetTracePacketContentEvent>)&pFVar11->Events;
      }
      *(uint *)((longlong)FVar10 + (ulonglong)uVar6 * 0x10) = uVar7;
      ReadSparseBitArray(param_1->BitStreamReader,param_2,param_4->ChangeMaskBitCount,
                         ContainsMostlyOnes);
      if (uVar6 != 0xffffffff) {
        FNetTrace::EndPacketContentEvent(pFVar11,uVar6,pFVar2->BufferBitPosition);
      }
    }
    local_40 = &param_1->BitStreamReader;
    if ((param_1->bIsInitState == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Context.IsInitState()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationOperations.cpp"
                           ,0x4bd,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar6 = 0;
    uVar12 = 0;
    if (param_4->ReplicationStateCount != 0) {
      do {
        pFVar3 = ppFVar1[uVar12];
        _Dst = (uchar *)((ulonglong)(param_3 + ((ulonglong)pFVar3->InternalAlignment - 1)) &
                        -(ulonglong)pFVar3->InternalAlignment);
        if (pFVar3->InternalSize != 0) {
          _Src = pFVar3->DefaultStateBuffer;
          memcpy(_Dst,_Src,(ulonglong)pFVar3->InternalSize);
          if ((pFVar3->Traits & HasDynamicState) != None) {
            Net::Private::FReplicationStateOperationsInternal::CloneDynamicState
                      (param_1,_Dst,_Src,pFVar3);
          }
        }
        uVar7 = 0xffffffff;
        pFVar11 = (FNetTraceCollector *)0x0;
        if (GNetTraceRuntimeVerbosity != 0) {
          pFVar11 = param_1->TraceCollector;
        }
        pFVar2 = *local_40;
        if (pFVar11 != (FNetTraceCollector *)0x0) {
          uVar7 = FNetTrace::BeginPacketContentEvent(pFVar11,NameId,pFVar2->BufferBitPosition);
          uVar8 = FNetTrace::TraceName(pFVar3->DebugName);
          FVar10 = (pFVar11->Events).AllocatorInstance.SecondaryData;
          FVar9 = (ForElementType<FNetTracePacketContentEvent>)&pFVar11->Events;
          if (FVar10 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
            FVar9 = FVar10;
          }
          *(uint *)((longlong)FVar9 + (ulonglong)uVar7 * 0x10) = uVar8;
        }
        if ((pFVar3->Traits & InitOnly) == None) {
          FReplicationStateOperations::DeserializeDeltaWithMask
                    (param_1,&local_38,uVar6,_Dst,pFVar3->DefaultStateBuffer,pFVar3);
        }
        else {
          FReplicationStateOperations::DeserializeDelta
                    (param_1,_Dst,pFVar3->DefaultStateBuffer,pFVar3);
        }
        param_3 = _Dst + pFVar3->InternalSize;
        uVar6 = uVar6 + pFVar3->ChangeMaskBitCount;
        if (uVar7 != 0xffffffff) {
          FNetTrace::EndPacketContentEvent(pFVar11,uVar7,pFVar2->BufferBitPosition);
        }
        uVar7 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar7;
      } while (uVar7 < param_4->ReplicationStateCount);
    }
    param_1->ChangeMask = (FNetBitArrayView *)0x0;
  }
  return;
}

// DeserializeWithMask @ 1442bcdf0

void __cdecl
UE::Net::FReplicationProtocolOperations::DeserializeWithMask
          (FNetSerializationContext *param_1,uint *param_2,uchar *param_3,
          FReplicationProtocol *param_4)

{
  undefined1 uVar1;
  FReplicationStateDescriptor **ppFVar2;
  FReplicationStateDescriptor *pFVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ForElementType<FNetTracePacketContentEvent> FVar7;
  ForElementType<FNetTracePacketContentEvent> FVar8;
  FNetTraceCollector *pFVar9;
  FNetBitStreamReader *pFVar10;
  uchar *puVar11;
  ulonglong uVar12;
  FNetBitStreamReader **local_50;
  FNetBitArrayView local_40;
  
  if (param_4->InternalTotalSize != 0) {
    local_40.BitCount = param_4->ChangeMaskBitCount;
    ppFVar2 = param_4->ReplicationStateDescriptors;
    local_40.WordCount = local_40.BitCount + 0x1f >> 5;
    if (local_40.BitCount == 0) {
      local_40.Storage = &local_40.BitCount;
    }
    else {
      param_2[local_40.WordCount - 1] =
           param_2[local_40.WordCount - 1] & 0xffffffffU >> (-(char)local_40.BitCount & 0x1fU);
      local_40.Storage = param_2;
    }
    param_1->ChangeMask = &local_40;
    uVar4 = 0xffffffff;
    pFVar10 = param_1->BitStreamReader;
    pFVar9 = (FNetTraceCollector *)0x0;
    if (GNetTraceRuntimeVerbosity != 0) {
      pFVar9 = param_1->TraceCollector;
    }
    if (pFVar9 != (FNetTraceCollector *)0x0) {
      uVar4 = FNetTrace::BeginPacketContentEvent(pFVar9,NameId,pFVar10->BufferBitPosition);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ChangeMasks = CreatePersistentNetDebugName(L"ChangeMasks",0xb);
        _Init_thread_footer(&::_TSS0);
      }
      uVar5 = FNetTrace::TraceName(ChangeMasks);
      FVar7 = (pFVar9->Events).AllocatorInstance.SecondaryData;
      if (FVar7 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar7 = (ForElementType<FNetTracePacketContentEvent>)&pFVar9->Events;
      }
      *(uint *)((longlong)FVar7 + (ulonglong)uVar4 * 0x10) = uVar5;
    }
    local_50 = &param_1->BitStreamReader;
    FNetSerializationContext::AddReadJournalEntry(param_1,L"ChangeMask");
    ReadSparseBitArray(param_1->BitStreamReader,param_2,param_4->ChangeMaskBitCount,None);
    if (uVar4 != 0xffffffff) {
      FNetTrace::EndPacketContentEvent(pFVar9,uVar4,pFVar10->BufferBitPosition);
    }
    uVar4 = 0;
    uVar12 = 0;
    if (param_4->ReplicationStateCount != 0) {
      do {
        pFVar3 = ppFVar2[uVar12];
        puVar11 = (uchar *)((ulonglong)(param_3 + ((ulonglong)pFVar3->InternalAlignment - 1)) &
                           -(ulonglong)pFVar3->InternalAlignment);
        FNetSerializationContext::AddReadJournalEntry(param_1,pFVar3->DebugName);
        if ((pFVar3->Traits & InitOnly) == None) {
          uVar5 = 0xffffffff;
          pFVar9 = (FNetTraceCollector *)0x0;
          if (GNetTraceRuntimeVerbosity != 0) {
            pFVar9 = param_1->TraceCollector;
          }
          pFVar10 = *local_50;
          if (pFVar9 != (FNetTraceCollector *)0x0) {
            uVar5 = FNetTrace::BeginPacketContentEvent(pFVar9,NameId,pFVar10->BufferBitPosition);
            uVar6 = FNetTrace::TraceName(pFVar3->DebugName);
            FVar7 = (pFVar9->Events).AllocatorInstance.SecondaryData;
            FVar8 = (ForElementType<FNetTracePacketContentEvent>)&pFVar9->Events;
            if (FVar7 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
              FVar8 = FVar7;
            }
            *(uint *)((longlong)FVar8 + (ulonglong)uVar5 * 0x10) = uVar6;
          }
          FReplicationStateOperations::DeserializeWithMask(param_1,&local_40,uVar4,puVar11,pFVar3);
LAB_1442bd089:
          if (uVar5 != 0xffffffff) {
            FNetTrace::EndPacketContentEvent(pFVar9,uVar5,pFVar10->BufferBitPosition);
          }
        }
        else if (param_1->bIsInitState != 0) {
          uVar5 = 0xffffffff;
          pFVar9 = (FNetTraceCollector *)0x0;
          if (GNetTraceRuntimeVerbosity != 0) {
            pFVar9 = param_1->TraceCollector;
          }
          pFVar10 = *local_50;
          if (pFVar9 != (FNetTraceCollector *)0x0) {
            uVar5 = FNetTrace::BeginPacketContentEvent(pFVar9,NameId,pFVar10->BufferBitPosition);
            uVar6 = FNetTrace::TraceName(pFVar3->DebugName);
            FVar7 = (pFVar9->Events).AllocatorInstance.SecondaryData;
            FVar8 = (ForElementType<FNetTracePacketContentEvent>)&pFVar9->Events;
            if (FVar7 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
              FVar8 = FVar7;
            }
            *(uint *)((longlong)FVar8 + (ulonglong)uVar5 * 0x10) = uVar6;
          }
          FReplicationStateOperations::Deserialize(param_1,puVar11,pFVar3);
          goto LAB_1442bd089;
        }
        uVar5 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar5;
        param_3 = puVar11 + pFVar3->InternalSize;
        uVar4 = uVar4 + pFVar3->ChangeMaskBitCount;
      } while (uVar5 < param_4->ReplicationStateCount);
    }
  }
  return;
}

// DeserializeWithMaskDelta @ 1442bd650

void __cdecl
UE::Net::FReplicationProtocolOperations::DeserializeWithMaskDelta
          (FNetSerializationContext *param_1,uint *param_2,uchar *param_3,uchar *param_4,
          FReplicationProtocol *param_5)

{
  undefined1 uVar1;
  FReplicationStateDescriptor **ppFVar2;
  FNetBitStreamReader *pFVar3;
  FReplicationStateDescriptor *pFVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ForElementType<FNetTracePacketContentEvent> FVar8;
  ForElementType<FNetTracePacketContentEvent> FVar9;
  uchar *puVar10;
  uchar *puVar11;
  FNetTraceCollector *pFVar12;
  ulonglong uVar13;
  uint local_54;
  FNetBitArrayView local_38;
  
  if (param_5->InternalTotalSize != 0) {
    local_38.BitCount = param_5->ChangeMaskBitCount;
    ppFVar2 = param_5->ReplicationStateDescriptors;
    local_38.WordCount = local_38.BitCount + 0x1f >> 5;
    if (local_38.BitCount == 0) {
      local_38.Storage = &local_38.BitCount;
    }
    else {
      param_2[local_38.WordCount - 1] =
           param_2[local_38.WordCount - 1] & 0xffffffffU >> (-(char)local_38.BitCount & 0x1fU);
      local_38.Storage = param_2;
    }
    param_1->ChangeMask = &local_38;
    uVar5 = 0xffffffff;
    pFVar3 = param_1->BitStreamReader;
    pFVar12 = (FNetTraceCollector *)0x0;
    if (GNetTraceRuntimeVerbosity != 0) {
      pFVar12 = param_1->TraceCollector;
    }
    if (pFVar12 != (FNetTraceCollector *)0x0) {
      uVar5 = FNetTrace::BeginPacketContentEvent(pFVar12,NameId,pFVar3->BufferBitPosition);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ChangeMasks = CreatePersistentNetDebugName(L"ChangeMasks",0xb);
        _Init_thread_footer(&::_TSS0);
      }
      uVar6 = FNetTrace::TraceName(ChangeMasks);
      FVar8 = (pFVar12->Events).AllocatorInstance.SecondaryData;
      if (FVar8 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar8 = (ForElementType<FNetTracePacketContentEvent>)&pFVar12->Events;
      }
      *(uint *)((longlong)FVar8 + (ulonglong)uVar5 * 0x10) = uVar6;
    }
    FNetSerializationContext::AddReadJournalEntry(param_1,L"ChangeMask");
    ReadSparseBitArray(param_1->BitStreamReader,param_2,param_5->ChangeMaskBitCount,None);
    if (uVar5 != 0xffffffff) {
      FNetTrace::EndPacketContentEvent(pFVar12,uVar5,pFVar3->BufferBitPosition);
    }
    uVar13 = 0;
    local_54 = 0;
    if (param_5->ReplicationStateCount != 0) {
      do {
        uVar5 = 0xffffffff;
        pFVar4 = ppFVar2[uVar13];
        uVar7 = (ulonglong)pFVar4->InternalAlignment;
        puVar10 = (uchar *)((ulonglong)(param_4 + (uVar7 - 1)) & ~(uVar7 - 1));
        puVar11 = (uchar *)((ulonglong)(param_3 + (uVar7 - 1)) & ~(uVar7 - 1));
        pFVar12 = (FNetTraceCollector *)0x0;
        if (GNetTraceRuntimeVerbosity != 0) {
          pFVar12 = param_1->TraceCollector;
        }
        pFVar3 = param_1->BitStreamReader;
        if (pFVar12 != (FNetTraceCollector *)0x0) {
          uVar5 = FNetTrace::BeginPacketContentEvent(pFVar12,NameId,pFVar3->BufferBitPosition);
          uVar6 = FNetTrace::TraceName(pFVar4->DebugName);
          FVar8 = (pFVar12->Events).AllocatorInstance.SecondaryData;
          FVar9 = (ForElementType<FNetTracePacketContentEvent>)&pFVar12->Events;
          if (FVar8 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
            FVar9 = FVar8;
          }
          *(uint *)((longlong)FVar9 + (ulonglong)uVar5 * 0x10) = uVar6;
        }
        FNetSerializationContext::AddReadJournalEntry(param_1,pFVar4->DebugName);
        if ((pFVar4->Traits & InitOnly) == None) {
          FReplicationStateOperations::DeserializeDeltaWithMask
                    (param_1,&local_38,local_54,puVar11,puVar10,pFVar4);
        }
        else if (param_1->bIsInitState != 0) {
          FReplicationStateOperations::DeserializeDelta(param_1,puVar11,puVar10,pFVar4);
        }
        param_3 = puVar11 + pFVar4->InternalSize;
        param_4 = puVar10 + pFVar4->InternalSize;
        local_54 = local_54 + pFVar4->ChangeMaskBitCount;
        if (uVar5 != 0xffffffff) {
          FNetTrace::EndPacketContentEvent(pFVar12,uVar5,pFVar3->BufferBitPosition);
        }
        uVar5 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar5;
      } while (uVar5 < param_5->ReplicationStateCount);
    }
  }
  return;
}

// FreeDynamicState @ 1442c1b90

void __cdecl
UE::Net::FReplicationProtocolOperations::FreeDynamicState
          (FNetSerializationContext *param_1,uchar *param_2,FReplicationProtocol *param_3)

{
  FReplicationStateDescriptor **ppFVar1;
  FReplicationStateDescriptor *pFVar2;
  ulonglong uVar3;
  FReplicationStateMemberTraitsDescriptor *pFVar4;
  ulonglong uVar5;
  uint *puVar6;
  FReplicationStateMemberSerializerDescriptor *pFVar7;
  uint uVar8;
  ulonglong uVar9;
  FNetFreeDynamicStateArgs local_60;
  
  if ((param_3->ProtocolTraits & HasDynamicState) != None) {
    ppFVar1 = param_3->ReplicationStateDescriptors;
    uVar3 = 0;
    if (param_3->ReplicationStateCount != 0) {
      do {
        pFVar2 = ppFVar1[uVar3];
        uVar9 = (ulonglong)(param_2 + ((ulonglong)pFVar2->InternalAlignment - 1)) &
                -(ulonglong)pFVar2->InternalAlignment;
        if ((pFVar2->Traits & HasDynamicState) != None) {
          pFVar7 = pFVar2->MemberSerializerDescriptors;
          pFVar4 = pFVar2->MemberTraitsDescriptors;
          if (pFVar2->MemberCount != 0) {
            puVar6 = &pFVar2->MemberDescriptors->InternalMemberOffset;
            uVar5 = (ulonglong)pFVar2->MemberCount;
            do {
              if ((pFVar4->Traits & HasDynamicState) != None) {
                local_60._padding_ = (longlong)pFVar7->SerializerConfig;
                local_60.Source = *puVar6 + uVar9;
                local_60._padding_ = 0;
                local_60._padding_._0_4_ = 0;
                (*pFVar7->Serializer->FreeDynamicState)(param_1,&local_60);
              }
              pFVar4 = pFVar4 + 1;
              puVar6 = puVar6 + 2;
              pFVar7 = pFVar7 + 1;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
        }
        uVar8 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar8;
        param_2 = (uchar *)(uVar9 + pFVar2->InternalSize);
      } while (uVar8 < param_3->ReplicationStateCount);
    }
  }
  return;
}

// InitializeFromDefaultState @ 1442c5560

void __cdecl
UE::Net::FReplicationProtocolOperations::InitializeFromDefaultState
          (FNetSerializationContext *param_1,uchar *param_2,FReplicationProtocol *param_3)

{
  FReplicationStateDescriptor **ppFVar1;
  FReplicationStateDescriptor *pFVar2;
  uchar *_Src;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  uchar *_Dst;
  
  if (param_3->InternalTotalSize != 0) {
    uVar6 = 0;
    ppFVar1 = param_3->ReplicationStateDescriptors;
    if (param_3->ReplicationStateCount != 0) {
      do {
        pFVar2 = ppFVar1[uVar6];
        _Dst = (uchar *)((ulonglong)(param_2 + ((ulonglong)pFVar2->InternalAlignment - 1)) &
                        -(ulonglong)pFVar2->InternalAlignment);
        if (pFVar2->InternalSize != 0) {
          if ((pFVar2->DefaultStateBuffer == (uchar *)0x0) &&
             (bVar4 = Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<2075218293509064030>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationOperations.cpp"
                                 ,0x55e,"CurrentDescriptor->DefaultStateBuffer != nullptr"), bVar4))
          {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          _Src = pFVar2->DefaultStateBuffer;
          memcpy(_Dst,_Src,(ulonglong)pFVar2->InternalSize);
          if ((pFVar2->Traits & HasDynamicState) != None) {
            Net::Private::FReplicationStateOperationsInternal::CloneDynamicState
                      (param_1,_Dst,_Src,pFVar2);
          }
        }
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
        param_2 = _Dst + pFVar2->InternalSize;
      } while (uVar5 < param_3->ReplicationStateCount);
    }
  }
  return;
}

// IsEqualQuantizedState @ 1442c7030

bool __cdecl
UE::Net::FReplicationProtocolOperations::IsEqualQuantizedState
          (FNetSerializationContext *param_1,uchar *param_2,uchar *param_3,
          FReplicationProtocol *param_4)

{
  ushort uVar1;
  FReplicationStateDescriptor **ppFVar2;
  FReplicationStateDescriptor *pFVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  uint *puVar7;
  FReplicationStateMemberSerializerDescriptor *pFVar8;
  uint uVar9;
  ulonglong uVar10;
  FNetIsEqualArgs local_68;
  
  uVar9 = 0;
  ppFVar2 = param_4->ReplicationStateDescriptors;
  if (param_4->ReplicationStateCount != 0) {
    do {
      uVar5 = 0;
      pFVar3 = ppFVar2[uVar9];
      uVar10 = (ulonglong)pFVar3->InternalAlignment;
      uVar1 = pFVar3->MemberCount;
      pFVar8 = pFVar3->MemberSerializerDescriptors;
      uVar6 = (ulonglong)(param_2 + (uVar10 - 1)) & ~(uVar10 - 1);
      uVar10 = (ulonglong)(param_3 + (uVar10 - 1)) & ~(uVar10 - 1);
      if (uVar1 != 0) {
        puVar7 = &pFVar3->MemberDescriptors->InternalMemberOffset;
        do {
          local_68._padding_ = (longlong)pFVar8->SerializerConfig;
          local_68._padding_._0_4_ = 0;
          local_68.Source0 = *puVar7 + uVar6;
          local_68._padding_ = 0;
          local_68.Source1 = *puVar7 + uVar10;
          local_68.bStateIsQuantized = true;
          bVar4 = (*pFVar8->Serializer->IsEqual)(param_1,&local_68);
          if (!bVar4) {
            return false;
          }
          uVar5 = uVar5 + 1;
          puVar7 = puVar7 + 2;
          pFVar8 = pFVar8 + 1;
        } while (uVar5 < uVar1);
      }
      uVar9 = uVar9 + 1;
      param_2 = (uchar *)(uVar6 + pFVar3->InternalSize);
      param_3 = (uchar *)(uVar10 + pFVar3->InternalSize);
    } while (uVar9 < param_4->ReplicationStateCount);
  }
  return true;
}

// Serialize @ 1442e27b0

void __cdecl
UE::Net::FReplicationProtocolOperations::Serialize
          (FNetSerializationContext *param_1,uchar *param_2,FReplicationProtocol *param_3)

{
  uint *puVar1;
  uint *puVar2;
  ushort uVar3;
  FReplicationStateDescriptor **ppFVar4;
  FReplicationStateDescriptor *pFVar5;
  FReplicationStateMemberSerializerDescriptor *pFVar6;
  FReplicationStateMemberDebugDescriptor *pFVar7;
  FReplicationStateMemberDescriptor *pFVar8;
  FNetBitStreamWriter *pFVar9;
  ForElementType<FNetTracePacketContentEvent> FVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  FReplicationStateMemberSerializerDescriptor *pFVar14;
  ForElementType<FNetTracePacketContentEvent> FVar15;
  FNetTraceCollector *pFVar16;
  FNetTraceCollector *pFVar17;
  ulonglong uVar18;
  uint local_res20;
  uint local_98;
  FNetSerializeArgs local_58;
  
  uVar13 = 0;
  ppFVar4 = param_3->ReplicationStateDescriptors;
  local_98 = 0;
  if (param_3->ReplicationStateCount != 0) {
    do {
      uVar18 = 0;
      pFVar5 = ppFVar4[uVar13];
      pFVar6 = pFVar5->MemberSerializerDescriptors;
      pFVar7 = pFVar5->MemberDebugDescriptors;
      uVar13 = (ulonglong)(param_2 + ((ulonglong)pFVar5->InternalAlignment - 1)) &
               -(ulonglong)pFVar5->InternalAlignment;
      pFVar8 = pFVar5->MemberDescriptors;
      uVar3 = pFVar5->MemberCount;
      if (uVar3 != 0) {
        do {
          pFVar9 = param_1->BitStreamWriter;
          uVar11 = 0xffffffff;
          pFVar16 = (FNetTraceCollector *)0x0;
          if (GNetTraceRuntimeVerbosity != 0) {
            pFVar16 = param_1->TraceCollector;
          }
          if (pFVar16 != (FNetTraceCollector *)0x0) {
            uVar11 = pFVar9->BufferBitPosition;
            if (pFVar9->OverflowBitCount != 0) {
              uVar11 = 0;
            }
            uVar11 = FNetTrace::BeginPacketContentEvent(pFVar16,NameId,uVar11);
            uVar12 = FNetTrace::TraceName(pFVar7[uVar18].DebugName);
            FVar10 = (pFVar16->Events).AllocatorInstance.SecondaryData;
            FVar15 = (ForElementType<FNetTracePacketContentEvent>)&pFVar16->Events;
            if (FVar10 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
              FVar15 = FVar10;
            }
            *(uint *)((longlong)FVar15 + (ulonglong)uVar11 * 0x10) = uVar12;
          }
          pFVar14 = pFVar6 + uVar18;
          puVar1 = &param_1->BitStreamWriter->OverflowBitCount;
          pFVar17 = (FNetTraceCollector *)0x0;
          if (2 < GNetTraceRuntimeVerbosity) {
            pFVar17 = param_1->TraceCollector;
          }
          puVar2 = &param_1->BitStreamWriter->BufferBitPosition;
          local_res20 = 0xffffffff;
          if (pFVar17 != (FNetTraceCollector *)0x0) {
            uVar12 = *puVar2;
            if (*puVar1 != 0) {
              uVar12 = 0;
            }
            local_res20 = FNetTrace::BeginPacketContentEvent(pFVar17,NameId,uVar12);
            uVar12 = FNetTrace::TraceName(pFVar14->Serializer->Name);
            FVar10 = (pFVar17->Events).AllocatorInstance.SecondaryData;
            FVar15 = (ForElementType<FNetTracePacketContentEvent>)&pFVar17->Events;
            if (FVar10 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
              FVar15 = FVar10;
            }
            *(uint *)((longlong)FVar15 + (ulonglong)local_res20 * 0x10) = uVar12;
          }
          local_58._padding_ = 0;
          local_58._padding_._0_4_ = 0;
          local_58._padding_ = (longlong)pFVar14->SerializerConfig;
          local_58.Source = pFVar8[uVar18].InternalMemberOffset + uVar13;
          (*pFVar14->Serializer->Serialize)(param_1,&local_58);
          if (local_res20 != 0xffffffff) {
            uVar12 = *puVar2;
            if (*puVar1 != 0) {
              uVar12 = 0;
            }
            FNetTrace::EndPacketContentEvent(pFVar17,local_res20,uVar12);
          }
          if (uVar11 != 0xffffffff) {
            uVar12 = pFVar9->BufferBitPosition;
            if (pFVar9->OverflowBitCount != 0) {
              uVar12 = 0;
            }
            FNetTrace::EndPacketContentEvent(pFVar16,uVar11,uVar12);
          }
          uVar11 = (int)uVar18 + 1;
          uVar18 = (ulonglong)uVar11;
        } while (uVar11 < uVar3);
      }
      param_2 = (uchar *)(uVar13 + pFVar5->InternalSize);
      local_98 = local_98 + 1;
      uVar13 = (ulonglong)local_98;
    } while (local_98 < param_3->ReplicationStateCount);
  }
  return;
}

// SerializeInitialStateWithMask @ 1442e3490

void __cdecl
UE::Net::FReplicationProtocolOperations::SerializeInitialStateWithMask
          (FNetSerializationContext *param_1,uint *param_2,uchar *param_3,
          FReplicationProtocol *param_4)

{
  FNetBitStreamWriter *pFVar1;
  FReplicationStateDescriptor **ppFVar2;
  FNetBitStreamWriter *pFVar3;
  FReplicationStateDescriptor *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ForElementType<FNetTracePacketContentEvent> FVar10;
  FNetTraceCollector *pFVar11;
  uchar *puVar12;
  ForElementType<FNetTracePacketContentEvent> FVar13;
  FNetTraceCollector *pFVar14;
  uint local_58;
  FNetBitArrayView local_40;
  
  if (!bDeltaCompressInitialState) {
    SerializeWithMask(param_1,param_2,param_3,param_4);
    return;
  }
  if (param_4->InternalTotalSize != 0) {
    pFVar1 = param_1->BitStreamWriter;
    ppFVar2 = param_4->ReplicationStateDescriptors;
    FNetBitArrayView::FNetBitArrayView(&local_40,param_2,param_4->ChangeMaskBitCount);
    pFVar3 = param_1->BitStreamWriter;
    param_1->ChangeMask = &local_40;
    local_58 = 0;
    pFVar11 = (FNetTraceCollector *)0x0;
    if (GNetTraceRuntimeVerbosity != 0) {
      pFVar11 = param_1->TraceCollector;
    }
    if (pFVar11 == (FNetTraceCollector *)0x0) {
      WriteSparseBitArray(pFVar1,param_2,param_4->ChangeMaskBitCount,ContainsMostlyOnes);
    }
    else {
      uVar7 = pFVar3->BufferBitPosition;
      if (pFVar3->OverflowBitCount != 0) {
        uVar7 = 0;
      }
      uVar7 = FNetTrace::BeginPacketContentEvent(pFVar11,NameId,uVar7);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ChangeMasks = CreatePersistentNetDebugName(L"ChangeMasks",0xb);
        _Init_thread_footer(&::_TSS0);
      }
      uVar8 = FNetTrace::TraceName(ChangeMasks);
      FVar13 = (pFVar11->Events).AllocatorInstance.SecondaryData;
      if (FVar13 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar13 = (ForElementType<FNetTracePacketContentEvent>)&pFVar11->Events;
      }
      *(uint *)((longlong)FVar13 + (ulonglong)uVar7 * 0x10) = uVar8;
      WriteSparseBitArray(pFVar1,param_2,param_4->ChangeMaskBitCount,ContainsMostlyOnes);
      if (uVar7 != 0xffffffff) {
        uVar8 = pFVar3->BufferBitPosition;
        if (pFVar3->OverflowBitCount != 0) {
          uVar8 = 0;
        }
        FNetTrace::EndPacketContentEvent(pFVar11,uVar7,uVar8);
      }
    }
    if ((param_1->bIsInitState == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Context.IsInitState()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationOperations.cpp"
                           ,0x487,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar9 = 0;
    if (param_4->ReplicationStateCount != 0) {
      do {
        uVar7 = 0xffffffff;
        pFVar4 = ppFVar2[uVar9];
        puVar12 = (uchar *)((ulonglong)(param_3 + ((ulonglong)pFVar4->InternalAlignment - 1)) &
                           -(ulonglong)pFVar4->InternalAlignment);
        pFVar1 = param_1->BitStreamWriter;
        pFVar11 = (FNetTraceCollector *)0x0;
        if (GNetTraceRuntimeVerbosity != 0) {
          pFVar11 = param_1->TraceCollector;
        }
        if (pFVar11 != (FNetTraceCollector *)0x0) {
          pFVar14 = (FNetTraceCollector *)(ulonglong)pFVar1->BufferBitPosition;
          if (pFVar1->OverflowBitCount != 0) {
            pFVar14 = (FNetTraceCollector *)0x0;
          }
          uVar7 = FNetTrace::BeginPacketContentEvent(pFVar11,NameId,(uint)pFVar14);
          uVar8 = FNetTrace::TraceName(pFVar4->DebugName);
          FVar13 = (pFVar11->Events).AllocatorInstance.SecondaryData;
          FVar10 = (ForElementType<FNetTracePacketContentEvent>)&pFVar11->Events;
          if (FVar13 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
            FVar10 = FVar13;
          }
          *(uint *)((longlong)FVar10 + (ulonglong)uVar7 * 0x10) = uVar8;
        }
        if ((pFVar4->Traits & InitOnly) == None) {
          FReplicationStateOperations::SerializeDeltaWithMask
                    (param_1,&local_40,local_58,puVar12,pFVar4->DefaultStateBuffer,pFVar4);
        }
        else {
          FReplicationStateOperations::SerializeDelta
                    (param_1,puVar12,pFVar4->DefaultStateBuffer,pFVar4);
        }
        param_3 = puVar12 + pFVar4->InternalSize;
        local_58 = local_58 + pFVar4->ChangeMaskBitCount;
        if (uVar7 != 0xffffffff) {
          uVar8 = pFVar1->BufferBitPosition;
          if (pFVar1->OverflowBitCount != 0) {
            uVar8 = 0;
          }
          FNetTrace::EndPacketContentEvent(pFVar11,uVar7,uVar8);
        }
        uVar7 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar7;
      } while (uVar7 < param_4->ReplicationStateCount);
    }
    param_1->ChangeMask = (FNetBitArrayView *)0x0;
  }
  return;
}

// SerializeWithMask @ 1442e37c0

void __cdecl
UE::Net::FReplicationProtocolOperations::SerializeWithMask
          (FNetSerializationContext *param_1,uint *param_2,uchar *param_3,
          FReplicationProtocol *param_4)

{
  undefined1 uVar1;
  FReplicationStateDescriptor **ppFVar2;
  FNetBitStreamWriter *pFVar3;
  FNetBitStreamWriter *pFVar4;
  FReplicationStateDescriptor *pFVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ForElementType<FNetTracePacketContentEvent> FVar10;
  uchar *puVar11;
  FNetTraceCollector *pFVar12;
  ForElementType<FNetTracePacketContentEvent> FVar13;
  ulonglong uVar14;
  uint *puVar15;
  uint *puVar16;
  uint local_44;
  FNetBitArrayView local_38;
  
  if (param_4->InternalTotalSize != 0) {
    ppFVar2 = param_4->ReplicationStateDescriptors;
    pFVar3 = param_1->BitStreamWriter;
    FNetBitArrayView::FNetBitArrayView(&local_38,param_2,param_4->ChangeMaskBitCount);
    pFVar4 = param_1->BitStreamWriter;
    param_1->ChangeMask = &local_38;
    local_44 = 0;
    pFVar12 = (FNetTraceCollector *)0x0;
    if (GNetTraceRuntimeVerbosity != 0) {
      pFVar12 = param_1->TraceCollector;
    }
    if (pFVar12 == (FNetTraceCollector *)0x0) {
      WriteSparseBitArray(pFVar3,param_2,param_4->ChangeMaskBitCount,None);
    }
    else {
      uVar7 = pFVar4->BufferBitPosition;
      if (pFVar4->OverflowBitCount != 0) {
        uVar7 = 0;
      }
      uVar7 = FNetTrace::BeginPacketContentEvent(pFVar12,NameId,uVar7);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ChangeMasks = CreatePersistentNetDebugName(L"ChangeMasks",0xb);
        _Init_thread_footer(&::_TSS0);
      }
      uVar8 = FNetTrace::TraceName(ChangeMasks);
      FVar13 = (pFVar12->Events).AllocatorInstance.SecondaryData;
      if (FVar13 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar13 = (ForElementType<FNetTracePacketContentEvent>)&pFVar12->Events;
      }
      *(uint *)((longlong)FVar13 + (ulonglong)uVar7 * 0x10) = uVar8;
      WriteSparseBitArray(pFVar3,param_2,param_4->ChangeMaskBitCount,None);
      if (uVar7 != 0xffffffff) {
        uVar8 = pFVar4->BufferBitPosition;
        if (pFVar4->OverflowBitCount != 0) {
          uVar8 = 0;
        }
        FNetTrace::EndPacketContentEvent(pFVar12,uVar7,uVar8);
      }
    }
    uVar9 = 0;
    uVar14 = uVar9;
    if (param_4->ReplicationStateCount != 0) {
      do {
        pFVar5 = ppFVar2[uVar14];
        puVar11 = (uchar *)((ulonglong)(param_3 + ((ulonglong)pFVar5->InternalAlignment - 1)) &
                           -(ulonglong)pFVar5->InternalAlignment);
        pFVar12 = (FNetTraceCollector *)0x0;
        if ((pFVar5->Traits & InitOnly) == None) {
          uVar7 = 0xffffffff;
          if (GNetTraceRuntimeVerbosity != 0) {
            pFVar12 = param_1->TraceCollector;
          }
          puVar15 = &param_1->BitStreamWriter->OverflowBitCount;
          puVar16 = &param_1->BitStreamWriter->BufferBitPosition;
          uVar8 = (uint)uVar9;
          if (pFVar12 != (FNetTraceCollector *)0x0) {
            uVar7 = *puVar16;
            if (*puVar15 != 0) {
              uVar7 = 0;
            }
            uVar7 = FNetTrace::BeginPacketContentEvent(pFVar12,NameId,uVar7);
            uVar8 = FNetTrace::TraceName(pFVar5->DebugName);
            FVar13 = (pFVar12->Events).AllocatorInstance.SecondaryData;
            FVar10 = (ForElementType<FNetTracePacketContentEvent>)&pFVar12->Events;
            if (FVar13 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
              FVar10 = FVar13;
            }
            *(uint *)((longlong)FVar10 + (ulonglong)uVar7 * 0x10) = uVar8;
            uVar8 = local_44;
          }
          FReplicationStateOperations::SerializeWithMask(param_1,&local_38,uVar8,puVar11,pFVar5);
LAB_1442e3a51:
          uVar8 = local_44;
          if (uVar7 != 0xffffffff) {
            uVar6 = *puVar16;
            if (*puVar15 != 0) {
              uVar6 = 0;
            }
            FNetTrace::EndPacketContentEvent(pFVar12,uVar7,uVar6);
          }
        }
        else {
          uVar8 = (uint)uVar9;
          if (param_1->bIsInitState != 0) {
            uVar7 = 0xffffffff;
            if (GNetTraceRuntimeVerbosity != 0) {
              pFVar12 = param_1->TraceCollector;
            }
            puVar15 = &param_1->BitStreamWriter->OverflowBitCount;
            puVar16 = &param_1->BitStreamWriter->BufferBitPosition;
            if (pFVar12 != (FNetTraceCollector *)0x0) {
              uVar7 = *puVar16;
              if (*puVar15 != 0) {
                uVar7 = 0;
              }
              uVar7 = FNetTrace::BeginPacketContentEvent(pFVar12,NameId,uVar7);
              uVar8 = FNetTrace::TraceName(pFVar5->DebugName);
              FVar13 = (pFVar12->Events).AllocatorInstance.SecondaryData;
              FVar10 = (ForElementType<FNetTracePacketContentEvent>)&pFVar12->Events;
              if (FVar13 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
                FVar10 = FVar13;
              }
              *(uint *)((longlong)FVar10 + (ulonglong)uVar7 * 0x10) = uVar8;
            }
            FReplicationStateOperations::Serialize(param_1,puVar11,pFVar5);
            goto LAB_1442e3a51;
          }
        }
        uVar7 = (int)uVar14 + 1;
        param_3 = puVar11 + pFVar5->InternalSize;
        local_44 = uVar8 + pFVar5->ChangeMaskBitCount;
        uVar9 = (ulonglong)local_44;
        uVar14 = (ulonglong)uVar7;
      } while (uVar7 < param_4->ReplicationStateCount);
    }
    param_1->ChangeMask = (FNetBitArrayView *)0x0;
  }
  return;
}

// SerializeWithMaskDelta @ 1442e4070

void __cdecl
UE::Net::FReplicationProtocolOperations::SerializeWithMaskDelta
          (FNetSerializationContext *param_1,uint *param_2,uchar *param_3,uchar *param_4,
          FReplicationProtocol *param_5)

{
  undefined1 uVar1;
  FReplicationStateDescriptor **ppFVar2;
  FNetBitStreamWriter *pFVar3;
  FNetBitStreamWriter *pFVar4;
  FReplicationStateDescriptor *pFVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ForElementType<FNetTracePacketContentEvent> FVar9;
  FNetTraceCollector *pFVar10;
  ulonglong uVar11;
  uchar *puVar12;
  uchar *puVar13;
  ForElementType<FNetTracePacketContentEvent> FVar14;
  uint local_54;
  FNetBitArrayView local_40;
  
  if (param_5->InternalTotalSize != 0) {
    ppFVar2 = param_5->ReplicationStateDescriptors;
    pFVar3 = param_1->BitStreamWriter;
    FNetBitArrayView::FNetBitArrayView(&local_40,param_2,param_5->ChangeMaskBitCount);
    pFVar4 = param_1->BitStreamWriter;
    param_1->ChangeMask = &local_40;
    local_54 = 0;
    pFVar10 = (FNetTraceCollector *)0x0;
    if (GNetTraceRuntimeVerbosity != 0) {
      pFVar10 = param_1->TraceCollector;
    }
    if (pFVar10 == (FNetTraceCollector *)0x0) {
      WriteSparseBitArray(pFVar3,param_2,param_5->ChangeMaskBitCount,None);
    }
    else {
      uVar6 = pFVar4->BufferBitPosition;
      if (pFVar4->OverflowBitCount != 0) {
        uVar6 = 0;
      }
      uVar6 = FNetTrace::BeginPacketContentEvent(pFVar10,NameId,uVar6);
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c) < ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          ChangeMasks = CreatePersistentNetDebugName(L"ChangeMasks",0xb);
          _Init_thread_footer(&::_TSS0);
        }
      }
      uVar7 = FNetTrace::TraceName(ChangeMasks);
      FVar14 = (pFVar10->Events).AllocatorInstance.SecondaryData;
      if (FVar14 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar14 = (ForElementType<FNetTracePacketContentEvent>)&pFVar10->Events;
      }
      *(uint *)((longlong)FVar14 + (ulonglong)uVar6 * 0x10) = uVar7;
      WriteSparseBitArray(pFVar3,param_2,param_5->ChangeMaskBitCount,None);
      if (uVar6 != 0xffffffff) {
        uVar7 = pFVar4->BufferBitPosition;
        if (pFVar4->OverflowBitCount != 0) {
          uVar7 = 0;
        }
        FNetTrace::EndPacketContentEvent(pFVar10,uVar6,uVar7);
      }
    }
    uVar11 = 0;
    if (param_5->ReplicationStateCount != 0) {
      do {
        pFVar3 = param_1->BitStreamWriter;
        uVar6 = 0xffffffff;
        pFVar5 = ppFVar2[uVar11];
        uVar8 = (ulonglong)pFVar5->InternalAlignment;
        puVar13 = (uchar *)((ulonglong)(param_3 + (uVar8 - 1)) & ~(uVar8 - 1));
        puVar12 = (uchar *)((ulonglong)(param_4 + (uVar8 - 1)) & ~(uVar8 - 1));
        pFVar10 = (FNetTraceCollector *)0x0;
        if (GNetTraceRuntimeVerbosity != 0) {
          pFVar10 = param_1->TraceCollector;
        }
        if (pFVar10 != (FNetTraceCollector *)0x0) {
          uVar6 = pFVar3->BufferBitPosition;
          if (pFVar3->OverflowBitCount != 0) {
            uVar6 = 0;
          }
          uVar6 = FNetTrace::BeginPacketContentEvent(pFVar10,NameId,uVar6);
          uVar7 = FNetTrace::TraceName(pFVar5->DebugName);
          FVar14 = (pFVar10->Events).AllocatorInstance.SecondaryData;
          FVar9 = (ForElementType<FNetTracePacketContentEvent>)&pFVar10->Events;
          if (FVar14 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
            FVar9 = FVar14;
          }
          *(uint *)((longlong)FVar9 + (ulonglong)uVar6 * 0x10) = uVar7;
        }
        if ((pFVar5->Traits & InitOnly) == None) {
          FReplicationStateOperations::SerializeDeltaWithMask
                    (param_1,&local_40,local_54,puVar13,puVar12,pFVar5);
        }
        else if (param_1->bIsInitState != 0) {
          FReplicationStateOperations::SerializeDelta(param_1,puVar13,puVar12,pFVar5);
        }
        param_3 = puVar13 + pFVar5->InternalSize;
        param_4 = puVar12 + pFVar5->InternalSize;
        local_54 = local_54 + pFVar5->ChangeMaskBitCount;
        if (uVar6 != 0xffffffff) {
          uVar7 = pFVar3->BufferBitPosition;
          if (pFVar3->OverflowBitCount != 0) {
            uVar7 = 0;
          }
          FNetTrace::EndPacketContentEvent(pFVar10,uVar6,uVar7);
        }
        uVar6 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar6;
      } while (uVar6 < param_5->ReplicationStateCount);
    }
    param_1->ChangeMask = (FNetBitArrayView *)0x0;
  }
  return;
}

