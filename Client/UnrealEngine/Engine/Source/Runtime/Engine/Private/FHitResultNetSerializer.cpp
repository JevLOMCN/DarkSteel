// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// CloneDynamicState @ 147bcc720

void __cdecl
UE::Net::FHitResultNetSerializer::CloneDynamicState
          (FNetSerializationContext *param_1,FNetCloneDynamicStateArgs *param_2)

{
  FNetCloneDynamicStateArgs local_38;
  
  if (((undefined1)HitResultStateTraits & HasDynamicState) != None) {
    local_38._padding_ = 0;
    local_38._padding_._0_4_ = 0;
    local_38._padding_ = (longlong)&StructNetSerializerConfigForHitResult;
    local_38.Source = param_2->Source;
    local_38.Target = param_2->Target;
    (*StructNetSerializer->CloneDynamicState)(param_1,&local_38);
  }
  return;
}

// CollectNetReferences @ 147bccc40

void __cdecl
UE::Net::FHitResultNetSerializer::CollectNetReferences
          (FNetSerializationContext *param_1,FNetCollectReferencesArgs *param_2)

{
  FNetCollectReferencesArgs local_38;
  
  local_38._padding_ = param_2->_padding_;
  local_38._padding_ = param_2->_padding_;
  local_38._padding_ = (longlong)&StructNetSerializerConfigForHitResult;
  local_38.Source = param_2->Source;
  local_38.Collector = param_2->Collector;
  (*StructNetSerializer->CollectNetReferences)(param_1,&local_38);
  return;
}

// Dequantize @ 147bd52e0

void __cdecl
UE::Net::FHitResultNetSerializer::Dequantize
          (FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  FNetDequantizeArgs local_38;
  
  local_38.Source = param_2->Source;
  puVar2 = (undefined4 *)param_2->Target;
  uVar1 = *(uint *)(local_38.Source + 0x13c);
  local_38._padding_ = 0;
  local_38._padding_._0_4_ = 0;
  local_38._padding_ = (longlong)&StructNetSerializerConfigForHitResult;
  local_38.Target = (ulong64)puVar2;
  (*StructNetSerializer->Dequantize)(param_1,&local_38);
  if ((uVar1 & 4) != 0) {
    *(undefined8 *)(puVar2 + 10) = *(undefined8 *)(puVar2 + 4);
    *(undefined8 *)(puVar2 + 0xc) = *(undefined8 *)(puVar2 + 6);
    *(undefined8 *)(puVar2 + 0xe) = *(undefined8 *)(puVar2 + 8);
  }
  if ((uVar1 & 8) != 0) {
    *(undefined8 *)(puVar2 + 0x16) = *(undefined8 *)(puVar2 + 0x10);
    *(undefined8 *)(puVar2 + 0x18) = *(undefined8 *)(puVar2 + 0x12);
    *(undefined8 *)(puVar2 + 0x1a) = *(undefined8 *)(puVar2 + 0x14);
  }
  if ((uVar1 & 0x10) != 0) {
    puVar2[0x2a] = 0xffffffff;
  }
  if ((uVar1 & 0x20) != 0) {
    *puVar2 = 0xffffffff;
  }
  if ((uVar1 & 0x40) != 0) {
    puVar2[0x28] = 0;
  }
  if ((char)(byte)uVar1 < '\0') {
    *(undefined1 *)(puVar2 + 0x2b) = 0xff;
  }
  bVar3 = *(byte *)((longlong)puVar2 + 0xad) & 0xfe | (byte)uVar1 & 1;
  auVar4._0_8_ = (*(double *)(puVar2 + 0xe) - *(double *)(puVar2 + 0x20)) *
                 (*(double *)(puVar2 + 0xe) - *(double *)(puVar2 + 0x20));
  auVar4._8_8_ = 0;
  *(byte *)((longlong)puVar2 + 0xad) = ((char)(uVar1 >> 1) * '\x02' ^ bVar3) & 2 ^ bVar3;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (*(double *)(puVar2 + 0xc) - *(double *)(puVar2 + 0x1e)) *
                 (*(double *)(puVar2 + 0xc) - *(double *)(puVar2 + 0x1e)) +
                 (*(double *)(puVar2 + 10) - *(double *)(puVar2 + 0x1c)) *
                 (*(double *)(puVar2 + 10) - *(double *)(puVar2 + 0x1c)) + auVar4._0_8_;
  auVar5 = sqrtpd(auVar4,auVar5);
  puVar2[2] = (float)auVar5._0_8_;
  return;
}

// Deserialize @ 147bd5ea0

void __cdecl
UE::Net::FHitResultNetSerializer::Deserialize
          (FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  ushort uVar1;
  ulong64 uVar2;
  FReplicationStateMemberDescriptor *pFVar3;
  FReplicationStateMemberDebugDescriptor *pFVar4;
  FNetBitStreamReader *pFVar5;
  ForElementType<FNetTracePacketContentEvent> FVar6;
  FNetBitStreamReader *pFVar7;
  code *pcVar8;
  uint *puVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ForElementType<FNetTracePacketContentEvent> FVar14;
  FNetTraceCollector *pFVar15;
  FReplicationStateMemberSerializerDescriptor *pFVar16;
  FNetTraceCollector *pFVar17;
  ulonglong uVar18;
  uint local_res8 [2];
  uint local_res10;
  FReplicationStateMemberSerializerDescriptor *local_res18;
  FReplicationStateMemberSerializerDescriptor *local_res20;
  FNetBitArrayView local_78;
  FNetDeserializeArgs local_68;
  
  uVar2 = param_2->Target;
  uVar11 = FNetBitStreamReader::ReadBits(param_1->BitStreamReader,8);
  *(uint *)(uVar2 + 0x13c) = uVar11;
  pFVar3 = (StructNetSerializerConfigForHitResult.StateDescriptor.Reference)->MemberDescriptors;
  uVar1 = (StructNetSerializerConfigForHitResult.StateDescriptor.Reference)->MemberCount;
  pFVar16 = (StructNetSerializerConfigForHitResult.StateDescriptor.Reference)->
            MemberSerializerDescriptors;
  local_res10 = (uint)uVar1;
  pFVar4 = (StructNetSerializerConfigForHitResult.StateDescriptor.Reference)->MemberDebugDescriptors
  ;
  local_res8[0] = 0xffffffff;
  local_res20 = pFVar16;
  GetMemberChangeMask(&local_78,local_res8,local_res10,uVar11);
  uVar18 = 0;
  if (uVar1 != 0) {
    uVar11 = 0;
    do {
      puVar9 = local_78.Storage;
      if ((local_78.BitCount <= uVar11) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index < BitCount",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                              ,0x2c1,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((puVar9[uVar11 >> 5] >> (uVar11 & 0x1f) & 1) != 0) {
        pFVar5 = param_1->BitStreamReader;
        uVar11 = 0xffffffff;
        local_res18 = pFVar16 + uVar18;
        pFVar15 = (FNetTraceCollector *)0x0;
        if (1 < GNetTraceRuntimeVerbosity) {
          pFVar15 = param_1->TraceCollector;
        }
        if (pFVar15 != (FNetTraceCollector *)0x0) {
          uVar11 = FNetTrace::BeginPacketContentEvent(pFVar15,NameId,pFVar5->BufferBitPosition);
          uVar12 = FNetTrace::TraceName(pFVar4[uVar18].DebugName);
          FVar6 = (pFVar15->Events).AllocatorInstance.SecondaryData;
          FVar14 = (ForElementType<FNetTracePacketContentEvent>)&pFVar15->Events;
          if (FVar6 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
            FVar14 = FVar6;
          }
          *(uint *)((longlong)FVar14 + (ulonglong)uVar11 * 0x10) = uVar12;
        }
        pFVar7 = param_1->BitStreamReader;
        uVar12 = 0xffffffff;
        pFVar17 = (FNetTraceCollector *)0x0;
        if (2 < GNetTraceRuntimeVerbosity) {
          pFVar17 = param_1->TraceCollector;
        }
        if (pFVar17 != (FNetTraceCollector *)0x0) {
          uVar12 = FNetTrace::BeginPacketContentEvent(pFVar17,NameId,pFVar7->BufferBitPosition);
          uVar13 = FNetTrace::TraceName(local_res18->Serializer->Name);
          FVar6 = (pFVar17->Events).AllocatorInstance.SecondaryData;
          FVar14 = (ForElementType<FNetTracePacketContentEvent>)&pFVar17->Events;
          if (FVar6 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
            FVar14 = FVar6;
          }
          *(uint *)((longlong)FVar14 + (ulonglong)uVar12 * 0x10) = uVar13;
        }
        local_68._padding_ = 0;
        local_68._padding_._0_4_ = 0;
        local_68._padding_ = (longlong)local_res18->SerializerConfig;
        local_68.Target = pFVar3[uVar18].InternalMemberOffset + uVar2;
        (*local_res18->Serializer->Deserialize)(param_1,&local_68);
        if (uVar12 != 0xffffffff) {
          FNetTrace::EndPacketContentEvent(pFVar17,uVar12,pFVar7->BufferBitPosition);
        }
        pFVar16 = local_res20;
        if (uVar11 != 0xffffffff) {
          FNetTrace::EndPacketContentEvent(pFVar15,uVar11,pFVar5->BufferBitPosition);
          pFVar16 = local_res20;
        }
      }
      uVar11 = (int)uVar18 + 1;
      uVar18 = (ulonglong)uVar11;
    } while (uVar11 < local_res10);
  }
  return;
}

// DeserializeDelta @ 147bd6f30

void __cdecl
UE::Net::FHitResultNetSerializer::DeserializeDelta
          (FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  ushort uVar1;
  longlong lVar2;
  FReplicationStateMemberDescriptor *pFVar3;
  FReplicationStateMemberDebugDescriptor *pFVar4;
  FNetBitStreamReader *pFVar5;
  ForElementType<FNetTracePacketContentEvent> FVar6;
  FNetBitStreamReader *pFVar7;
  code *pcVar8;
  uint *puVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ForElementType<FNetTracePacketContentEvent> FVar14;
  FNetTraceCollector *pFVar15;
  FReplicationStateMemberSerializerDescriptor *pFVar16;
  FNetTraceCollector *pFVar17;
  ulonglong uVar18;
  uint auStackX_8 [2];
  uint uStackX_10;
  FReplicationStateMemberSerializerDescriptor *pFStackX_18;
  FReplicationStateMemberSerializerDescriptor *pFStackX_20;
  FNetBitArrayView FStack_78;
  FNetDeserializeArgs FStack_68;
  
  lVar2 = param_2->_padding_;
  uVar11 = FNetBitStreamReader::ReadBits(param_1->BitStreamReader,8);
  *(uint *)(lVar2 + 0x13c) = uVar11;
  pFVar3 = (StructNetSerializerConfigForHitResult.StateDescriptor.Reference)->MemberDescriptors;
  uVar1 = (StructNetSerializerConfigForHitResult.StateDescriptor.Reference)->MemberCount;
  pFVar16 = (StructNetSerializerConfigForHitResult.StateDescriptor.Reference)->
            MemberSerializerDescriptors;
  uStackX_10 = (uint)uVar1;
  pFVar4 = (StructNetSerializerConfigForHitResult.StateDescriptor.Reference)->MemberDebugDescriptors
  ;
  auStackX_8[0] = 0xffffffff;
  pFStackX_20 = pFVar16;
  GetMemberChangeMask(&FStack_78,auStackX_8,uStackX_10,uVar11);
  uVar18 = 0;
  if (uVar1 != 0) {
    uVar11 = 0;
    do {
      puVar9 = FStack_78.Storage;
      if ((FStack_78.BitCount <= uVar11) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index < BitCount",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                              ,0x2c1,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((puVar9[uVar11 >> 5] >> (uVar11 & 0x1f) & 1) != 0) {
        pFVar5 = param_1->BitStreamReader;
        uVar11 = 0xffffffff;
        pFStackX_18 = pFVar16 + uVar18;
        pFVar15 = (FNetTraceCollector *)0x0;
        if (1 < GNetTraceRuntimeVerbosity) {
          pFVar15 = param_1->TraceCollector;
        }
        if (pFVar15 != (FNetTraceCollector *)0x0) {
          uVar11 = FNetTrace::BeginPacketContentEvent(pFVar15,NameId,pFVar5->BufferBitPosition);
          uVar12 = FNetTrace::TraceName(pFVar4[uVar18].DebugName);
          FVar6 = (pFVar15->Events).AllocatorInstance.SecondaryData;
          FVar14 = (ForElementType<FNetTracePacketContentEvent>)&pFVar15->Events;
          if (FVar6 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
            FVar14 = FVar6;
          }
          *(uint *)((longlong)FVar14 + (ulonglong)uVar11 * 0x10) = uVar12;
        }
        pFVar7 = param_1->BitStreamReader;
        uVar12 = 0xffffffff;
        pFVar17 = (FNetTraceCollector *)0x0;
        if (2 < GNetTraceRuntimeVerbosity) {
          pFVar17 = param_1->TraceCollector;
        }
        if (pFVar17 != (FNetTraceCollector *)0x0) {
          uVar12 = FNetTrace::BeginPacketContentEvent(pFVar17,NameId,pFVar7->BufferBitPosition);
          uVar13 = FNetTrace::TraceName(pFStackX_18->Serializer->Name);
          FVar6 = (pFVar17->Events).AllocatorInstance.SecondaryData;
          FVar14 = (ForElementType<FNetTracePacketContentEvent>)&pFVar17->Events;
          if (FVar6 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
            FVar14 = FVar6;
          }
          *(uint *)((longlong)FVar14 + (ulonglong)uVar12 * 0x10) = uVar13;
        }
        FStack_68._padding_ = 0;
        FStack_68._padding_._0_4_ = 0;
        FStack_68._padding_ = (longlong)pFStackX_18->SerializerConfig;
        FStack_68.Target = (ulonglong)pFVar3[uVar18].InternalMemberOffset + lVar2;
        (*pFStackX_18->Serializer->Deserialize)(param_1,&FStack_68);
        if (uVar12 != 0xffffffff) {
          FNetTrace::EndPacketContentEvent(pFVar17,uVar12,pFVar7->BufferBitPosition);
        }
        pFVar16 = pFStackX_20;
        if (uVar11 != 0xffffffff) {
          FNetTrace::EndPacketContentEvent(pFVar15,uVar11,pFVar5->BufferBitPosition);
          pFVar16 = pFStackX_20;
        }
      }
      uVar11 = (int)uVar18 + 1;
      uVar18 = (ulonglong)uVar11;
    } while (uVar11 < uStackX_10);
  }
  return;
}

// FreeDynamicState @ 147bdd790

void __cdecl
UE::Net::FHitResultNetSerializer::FreeDynamicState
          (FNetSerializationContext *param_1,FNetFreeDynamicStateArgs *param_2)

{
  FNetFreeDynamicStateArgs local_28;
  
  if (((undefined1)HitResultStateTraits & HasDynamicState) != None) {
    local_28._padding_ = 0;
    local_28._padding_._0_4_ = 0;
    local_28._padding_ = (longlong)&StructNetSerializerConfigForHitResult;
    local_28.Source = param_2->Source;
    (*StructNetSerializer->FreeDynamicState)(param_1,&local_28);
  }
  return;
}

// GetMemberChangeMask @ 147be3190

FNetBitArrayView * __cdecl
UE::Net::FHitResultNetSerializer::GetMemberChangeMask
          (FNetBitArrayView *__return_storage_ptr__,uint *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  code *pcVar3;
  ushort uVar4;
  bool bVar5;
  FNetBitArrayView *pFVar6;
  uint uVar7;
  
  __return_storage_ptr__->Storage = param_1;
  puVar1 = &__return_storage_ptr__->BitCount;
  __return_storage_ptr__->WordCount = param_2 + 0x1f >> 5;
  *puVar1 = param_2;
  if (param_2 == 0) {
    __return_storage_ptr__->Storage = puVar1;
  }
  FNetBitArrayView::SetBitValue
            (__return_storage_ptr__,(uint)PropertyToMemberIndex[2],(bool)(~(byte)(param_3 >> 2) & 1)
            );
  FNetBitArrayView::SetBitValue
            (__return_storage_ptr__,(uint)PropertyToMemberIndex[3],(bool)(~(byte)(param_3 >> 3) & 1)
            );
  FNetBitArrayView::SetBitValue
            (__return_storage_ptr__,(uint)PropertyToMemberIndex[4],(bool)(~(byte)(param_3 >> 6) & 1)
            );
  FNetBitArrayView::SetBitValue
            (__return_storage_ptr__,(uint)PropertyToMemberIndex[5],(bool)(~(byte)(param_3 >> 4) & 1)
            );
  FNetBitArrayView::SetBitValue
            (__return_storage_ptr__,(uint)PropertyToMemberIndex[0],(bool)(~(byte)(param_3 >> 5) & 1)
            );
  FNetBitArrayView::SetBitValue
            (__return_storage_ptr__,(uint)PropertyToMemberIndex[6],(bool)(~(byte)(param_3 >> 7) & 1)
            );
  uVar4 = PropertyToMemberIndex[1];
  uVar7 = (uint)PropertyToMemberIndex[1];
  puVar2 = __return_storage_ptr__->Storage;
  if (*puVar1 <= uVar7) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2ac,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FNetBitArrayView *)(*pcVar3)();
      return pFVar6;
    }
  }
  puVar2[uVar4 >> 5] = puVar2[uVar4 >> 5] & ~(1 << (uVar7 & 0x1f));
  uVar4 = PropertyToMemberIndex[7];
  uVar7 = (uint)PropertyToMemberIndex[7];
  puVar2 = __return_storage_ptr__->Storage;
  if (*puVar1 <= uVar7) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2ac,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FNetBitArrayView *)(*pcVar3)();
      return pFVar6;
    }
  }
  puVar2[uVar4 >> 5] = puVar2[uVar4 >> 5] & ~(1 << (uVar7 & 0x1f));
  uVar4 = PropertyToMemberIndex[8];
  uVar7 = (uint)PropertyToMemberIndex[8];
  puVar2 = __return_storage_ptr__->Storage;
  if (*puVar1 <= uVar7) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2ac,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FNetBitArrayView *)(*pcVar3)();
      return pFVar6;
    }
  }
  puVar2[uVar4 >> 5] = puVar2[uVar4 >> 5] & ~(1 << (uVar7 & 0x1f));
  return __return_storage_ptr__;
}

// IsEqual @ 147bf0ab0

bool __cdecl
UE::Net::FHitResultNetSerializer::IsEqual
          (FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  ushort uVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  FReplicationStateMemberDescriptor *pFVar4;
  FReplicationStateMemberSerializerDescriptor *pFVar5;
  code *pcVar6;
  uint *puVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint local_res10 [2];
  FNetBitArrayView local_98;
  FNetIsEqualArgs local_88;
  FNetIsEqualArgs local_58;
  
  if (param_2->bStateIsQuantized == false) {
    local_58._padding_ = param_2->_padding_;
    local_58._padding_ = param_2->_padding_;
    local_58._padding_ = (longlong)&StructNetSerializerConfigForHitResult;
    local_58.Source0 = param_2->Source0;
    local_58.bStateIsQuantized = param_2->bStateIsQuantized;
    local_58._41_7_ = *(undefined7 *)&param_2->field_0x29;
    local_58.Source1 = param_2->Source1;
    bVar8 = (*StructNetSerializer->IsEqual)(param_1,&local_58);
    return bVar8;
  }
  uVar2 = param_2->Source0;
  uVar3 = param_2->Source1;
  if (*(int *)(uVar2 + 0x13c) == *(int *)(uVar3 + 0x13c)) {
    uVar1 = (StructNetSerializerConfigForHitResult.StateDescriptor.Reference)->MemberCount;
    pFVar4 = (StructNetSerializerConfigForHitResult.StateDescriptor.Reference)->MemberDescriptors;
    pFVar5 = (StructNetSerializerConfigForHitResult.StateDescriptor.Reference)->
             MemberSerializerDescriptors;
    local_res10[0] = 0xffffffff;
    GetMemberChangeMask(&local_98,local_res10,(uint)uVar1,*(uint *)(uVar2 + 0x13c));
    local_88.bStateIsQuantized = param_2->bStateIsQuantized;
    uVar11 = 0;
    local_88._padding_ = 0;
    local_88._padding_ = 0;
    local_88._padding_._0_4_ = 0;
    if (uVar1 != 0) {
      do {
        puVar7 = local_98.Storage;
        uVar10 = (uint)uVar11;
        if (local_98.BitCount <= uVar10) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < BitCount",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                             ,0x2c1,L"");
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
        }
        if ((puVar7[uVar11 >> 5] >> (uVar10 & 0x1f) & 1) != 0) {
          local_88._padding_ = (longlong)pFVar5[uVar11].SerializerConfig;
          local_88.Source0 = pFVar4[uVar11].InternalMemberOffset + uVar2;
          local_88.Source1 = pFVar4[uVar11].InternalMemberOffset + uVar3;
          bVar8 = (*(pFVar5[uVar11].Serializer)->IsEqual)(param_1,&local_88);
          if (!bVar8) goto LAB_147bf0c1f;
        }
        uVar11 = (ulonglong)(uVar10 + 1);
      } while (uVar10 + 1 < (uint)uVar1);
    }
    bVar8 = true;
  }
  else {
LAB_147bf0c1f:
    bVar8 = false;
  }
  return bVar8;
}

// Quantize @ 147bf9260

void __cdecl
UE::Net::FHitResultNetSerializer::Quantize
          (FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  FNetQuantizeArgs local_38;
  
  piVar1 = (int *)param_2->Source;
  local_38.Target = param_2->Target;
  if (((*(double *)(piVar1 + 4) == *(double *)(piVar1 + 10)) &&
      (*(double *)(piVar1 + 6) == *(double *)(piVar1 + 0xc))) &&
     (*(double *)(piVar1 + 8) == *(double *)(piVar1 + 0xe))) {
    uVar6 = 4;
  }
  else {
    uVar6 = 0;
  }
  if (((*(double *)(piVar1 + 0x10) == *(double *)(piVar1 + 0x16)) &&
      (*(double *)(piVar1 + 0x12) == *(double *)(piVar1 + 0x18))) &&
     (*(double *)(piVar1 + 0x14) == *(double *)(piVar1 + 0x1a))) {
    uVar4 = 8;
  }
  else {
    uVar4 = 0;
  }
  uVar5 = 0;
  if (piVar1[0x2a] == -1) {
    uVar5 = 0x10;
  }
  uVar3 = 0;
  if (*piVar1 == -1) {
    uVar3 = 0x20;
  }
  uVar2 = 0;
  if ((float)piVar1[0x28] == 0.0) {
    uVar2 = 0x40;
  }
  *(uint *)(local_38.Target + 0x13c) =
       *(byte *)((longlong)piVar1 + 0xad) & 3 | uVar2 | uVar5 | uVar3 | uVar4 | uVar6;
  local_38._padding_ = (longlong)&StructNetSerializerConfigForHitResult;
  local_38.Source = param_2->Source;
  local_38._padding_ = 0;
  local_38._padding_._0_4_ = 0;
  (*StructNetSerializer->Quantize)(param_1,&local_38);
  return;
}

// Serialize @ 147bff010

void __cdecl
UE::Net::FHitResultNetSerializer::Serialize
          (FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  uint *puVar1;
  uint *puVar2;
  ushort uVar3;
  ulong64 uVar4;
  FReplicationStateMemberDescriptor *pFVar5;
  FReplicationStateMemberSerializerDescriptor *pFVar6;
  FReplicationStateMemberDebugDescriptor *pFVar7;
  FNetBitStreamWriter *pFVar8;
  ForElementType<FNetTracePacketContentEvent> FVar9;
  code *pcVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  ForElementType<FNetTracePacketContentEvent> FVar14;
  uint uVar15;
  FNetTraceCollector *pFVar16;
  FNetTraceCollector *pFVar17;
  ulonglong uVar18;
  uint local_res8;
  uint local_res10 [2];
  uint local_res18;
  FReplicationStateMemberSerializerDescriptor *local_res20;
  FNetBitArrayView local_80;
  FNetSerializeArgs local_70;
  
  uVar4 = param_2->Source;
  uVar15 = *(uint *)(uVar4 + 0x13c);
  FNetBitStreamWriter::WriteBits(param_1->BitStreamWriter,uVar15,8);
  pFVar5 = (StructNetSerializerConfigForHitResult.StateDescriptor.Reference)->MemberDescriptors;
  uVar3 = (StructNetSerializerConfigForHitResult.StateDescriptor.Reference)->MemberCount;
  pFVar6 = (StructNetSerializerConfigForHitResult.StateDescriptor.Reference)->
           MemberSerializerDescriptors;
  local_res18 = (uint)uVar3;
  pFVar7 = (StructNetSerializerConfigForHitResult.StateDescriptor.Reference)->MemberDebugDescriptors
  ;
  local_res10[0] = 0xffffffff;
  GetMemberChangeMask(&local_80,local_res10,local_res18,uVar15);
  uVar18 = 0;
  if (uVar3 != 0) {
    do {
      puVar1 = local_80.Storage;
      uVar15 = (uint)uVar18;
      if ((local_80.BitCount <= uVar15) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index < BitCount",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                              ,0x2c1,L""), bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if ((puVar1[uVar18 >> 5] >> (uVar15 & 0x1f) & 1) != 0) {
        uVar12 = 0xffffffff;
        local_res20 = pFVar6 + uVar18;
        pFVar8 = param_1->BitStreamWriter;
        pFVar17 = (FNetTraceCollector *)0x0;
        if (1 < GNetTraceRuntimeVerbosity) {
          pFVar17 = param_1->TraceCollector;
        }
        if (pFVar17 != (FNetTraceCollector *)0x0) {
          uVar12 = pFVar8->BufferBitPosition;
          if (pFVar8->OverflowBitCount != 0) {
            uVar12 = 0;
          }
          uVar12 = FNetTrace::BeginPacketContentEvent(pFVar17,NameId,uVar12);
          uVar13 = FNetTrace::TraceName(pFVar7[uVar18].DebugName);
          FVar9 = (pFVar17->Events).AllocatorInstance.SecondaryData;
          FVar14 = (ForElementType<FNetTracePacketContentEvent>)&pFVar17->Events;
          if (FVar9 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
            FVar14 = FVar9;
          }
          *(uint *)((longlong)FVar14 + (ulonglong)uVar12 * 0x10) = uVar13;
        }
        pFVar16 = (FNetTraceCollector *)0x0;
        if (2 < GNetTraceRuntimeVerbosity) {
          pFVar16 = param_1->TraceCollector;
        }
        local_res8 = 0xffffffff;
        puVar1 = &param_1->BitStreamWriter->OverflowBitCount;
        puVar2 = &param_1->BitStreamWriter->BufferBitPosition;
        if (pFVar16 != (FNetTraceCollector *)0x0) {
          uVar13 = *puVar2;
          if (*puVar1 != 0) {
            uVar13 = 0;
          }
          local_res8 = FNetTrace::BeginPacketContentEvent(pFVar16,NameId,uVar13);
          uVar13 = FNetTrace::TraceName(local_res20->Serializer->Name);
          FVar9 = (pFVar16->Events).AllocatorInstance.SecondaryData;
          FVar14 = (ForElementType<FNetTracePacketContentEvent>)&pFVar16->Events;
          if (FVar9 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
            FVar14 = FVar9;
          }
          *(uint *)((longlong)FVar14 + (ulonglong)local_res8 * 0x10) = uVar13;
        }
        local_70._padding_ = 0;
        local_70._padding_._0_4_ = 0;
        local_70._padding_ = (longlong)local_res20->SerializerConfig;
        local_70.Source = pFVar5[uVar18].InternalMemberOffset + uVar4;
        (*local_res20->Serializer->Serialize)(param_1,&local_70);
        if (local_res8 != 0xffffffff) {
          uVar13 = *puVar2;
          if (*puVar1 != 0) {
            uVar13 = 0;
          }
          FNetTrace::EndPacketContentEvent(pFVar16,local_res8,uVar13);
        }
        if (uVar12 != 0xffffffff) {
          uVar13 = pFVar8->BufferBitPosition;
          if (pFVar8->OverflowBitCount != 0) {
            uVar13 = 0;
          }
          FNetTrace::EndPacketContentEvent(pFVar17,uVar12,uVar13);
        }
      }
      uVar18 = (ulonglong)(uVar15 + 1);
    } while (uVar15 + 1 < local_res18);
  }
  return;
}

// SerializeDelta @ 147c00350

void __cdecl
UE::Net::FHitResultNetSerializer::SerializeDelta
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  uint *puVar1;
  uint *puVar2;
  ushort uVar3;
  longlong lVar4;
  FReplicationStateMemberDescriptor *pFVar5;
  FReplicationStateMemberSerializerDescriptor *pFVar6;
  FReplicationStateMemberDebugDescriptor *pFVar7;
  FNetBitStreamWriter *pFVar8;
  ForElementType<FNetTracePacketContentEvent> FVar9;
  code *pcVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  ForElementType<FNetTracePacketContentEvent> FVar14;
  uint uVar15;
  FNetTraceCollector *pFVar16;
  FNetTraceCollector *pFVar17;
  ulonglong uVar18;
  uint uStackX_8;
  uint auStackX_10 [2];
  uint uStackX_18;
  FReplicationStateMemberSerializerDescriptor *pFStackX_20;
  FNetBitArrayView FStack_80;
  FNetSerializeArgs FStack_70;
  
  lVar4 = param_2->_padding_;
  uVar15 = *(uint *)(lVar4 + 0x13c);
  FNetBitStreamWriter::WriteBits(param_1->BitStreamWriter,uVar15,8);
  pFVar5 = (StructNetSerializerConfigForHitResult.StateDescriptor.Reference)->MemberDescriptors;
  uVar3 = (StructNetSerializerConfigForHitResult.StateDescriptor.Reference)->MemberCount;
  pFVar6 = (StructNetSerializerConfigForHitResult.StateDescriptor.Reference)->
           MemberSerializerDescriptors;
  uStackX_18 = (uint)uVar3;
  pFVar7 = (StructNetSerializerConfigForHitResult.StateDescriptor.Reference)->MemberDebugDescriptors
  ;
  auStackX_10[0] = 0xffffffff;
  GetMemberChangeMask(&FStack_80,auStackX_10,uStackX_18,uVar15);
  uVar18 = 0;
  if (uVar3 != 0) {
    do {
      puVar1 = FStack_80.Storage;
      uVar15 = (uint)uVar18;
      if ((FStack_80.BitCount <= uVar15) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index < BitCount",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                              ,0x2c1,L""), bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if ((puVar1[uVar18 >> 5] >> (uVar15 & 0x1f) & 1) != 0) {
        uVar12 = 0xffffffff;
        pFStackX_20 = pFVar6 + uVar18;
        pFVar8 = param_1->BitStreamWriter;
        pFVar17 = (FNetTraceCollector *)0x0;
        if (1 < GNetTraceRuntimeVerbosity) {
          pFVar17 = param_1->TraceCollector;
        }
        if (pFVar17 != (FNetTraceCollector *)0x0) {
          uVar12 = pFVar8->BufferBitPosition;
          if (pFVar8->OverflowBitCount != 0) {
            uVar12 = 0;
          }
          uVar12 = FNetTrace::BeginPacketContentEvent(pFVar17,NameId,uVar12);
          uVar13 = FNetTrace::TraceName(pFVar7[uVar18].DebugName);
          FVar9 = (pFVar17->Events).AllocatorInstance.SecondaryData;
          FVar14 = (ForElementType<FNetTracePacketContentEvent>)&pFVar17->Events;
          if (FVar9 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
            FVar14 = FVar9;
          }
          *(uint *)((longlong)FVar14 + (ulonglong)uVar12 * 0x10) = uVar13;
        }
        pFVar16 = (FNetTraceCollector *)0x0;
        if (2 < GNetTraceRuntimeVerbosity) {
          pFVar16 = param_1->TraceCollector;
        }
        uStackX_8 = 0xffffffff;
        puVar1 = &param_1->BitStreamWriter->OverflowBitCount;
        puVar2 = &param_1->BitStreamWriter->BufferBitPosition;
        if (pFVar16 != (FNetTraceCollector *)0x0) {
          uVar13 = *puVar2;
          if (*puVar1 != 0) {
            uVar13 = 0;
          }
          uStackX_8 = FNetTrace::BeginPacketContentEvent(pFVar16,NameId,uVar13);
          uVar13 = FNetTrace::TraceName(pFStackX_20->Serializer->Name);
          FVar9 = (pFVar16->Events).AllocatorInstance.SecondaryData;
          FVar14 = (ForElementType<FNetTracePacketContentEvent>)&pFVar16->Events;
          if (FVar9 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
            FVar14 = FVar9;
          }
          *(uint *)((longlong)FVar14 + (ulonglong)uStackX_8 * 0x10) = uVar13;
        }
        FStack_70._padding_ = 0;
        FStack_70._padding_._0_4_ = 0;
        FStack_70._padding_ = (longlong)pFStackX_20->SerializerConfig;
        FStack_70.Source = (ulonglong)pFVar5[uVar18].InternalMemberOffset + lVar4;
        (*pFStackX_20->Serializer->Serialize)(param_1,&FStack_70);
        if (uStackX_8 != 0xffffffff) {
          uVar13 = *puVar2;
          if (*puVar1 != 0) {
            uVar13 = 0;
          }
          FNetTrace::EndPacketContentEvent(pFVar16,uStackX_8,uVar13);
        }
        if (uVar12 != 0xffffffff) {
          uVar13 = pFVar8->BufferBitPosition;
          if (pFVar8->OverflowBitCount != 0) {
            uVar13 = 0;
          }
          FNetTrace::EndPacketContentEvent(pFVar17,uVar12,uVar13);
        }
      }
      uVar18 = (ulonglong)(uVar15 + 1);
    } while (uVar15 + 1 < uStackX_18);
  }
  return;
}

// Validate @ 147c0bdb0

bool __cdecl
UE::Net::FHitResultNetSerializer::Validate
          (FNetSerializationContext *param_1,FNetValidateArgs *param_2)

{
  bool bVar1;
  FNetValidateArgs local_28;
  
  local_28._padding_ = 0;
  local_28._padding_._0_4_ = 0;
  local_28._padding_ = (longlong)&StructNetSerializerConfigForHitResult;
  local_28.Source = param_2->Source;
  bVar1 = (*StructNetSerializer->Validate)(param_1,&local_28);
  return bVar1;
}

