// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 15

// AdjustArraySize @ 1442fb450

void __cdecl
UE::Net::FArrayPropertyNetSerializer::AdjustArraySize
          (FNetSerializationContext *param_1,FQuantizedType *param_2,
          FArrayPropertyNetSerializerConfig *param_3,ushort param_4)

{
  ushort uVar1;
  uint uVar2;
  FReplicationStateDescriptor *pFVar3;
  FNetSerializer *pFVar4;
  void *_Dst;
  ulonglong uVar5;
  ulong64 _Size;
  uint uVar6;
  FNetFreeDynamicStateArgs local_38;
  
  uVar1 = param_2->ElementCount;
  if (param_4 < uVar1) {
    if (param_4 == 0) {
      FreeDynamicStateInternal(param_1,param_2,param_3);
      return;
    }
    pFVar3 = (param_3->StateDescriptor).Reference;
    if ((pFVar3->Traits & HasDynamicState) != None) {
      uVar2 = pFVar3->InternalSize;
      pFVar4 = pFVar3->MemberSerializerDescriptors->Serializer;
      local_38._padding_ = 0;
      local_38._padding_._0_4_ = 0;
      uVar6 = (uint)param_4;
      local_38._padding_ = (longlong)pFVar3->MemberSerializerDescriptors->SerializerConfig;
      local_38.Source = (ulonglong)(uVar6 * uVar2) + (longlong)param_2->ElementStorage;
      if (uVar6 < uVar1) {
        uVar5 = (ulonglong)(uVar1 - uVar6);
        do {
          (*pFVar4->FreeDynamicState)(param_1,&local_38);
          local_38.Source = local_38.Source + uVar2;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
    }
  }
  else if (param_2->ElementCapacityCount < param_4) {
    pFVar3 = (param_3->StateDescriptor).Reference;
    uVar5 = (ulonglong)pFVar3->InternalSize;
    _Size = param_4 * uVar5;
    _Dst = Net::Private::FInternalNetSerializationContext::Alloc
                     (param_1->InternalContext,_Size,(ulonglong)pFVar3->InternalAlignment);
    memset(_Dst,0,_Size);
    memcpy(_Dst,param_2->ElementStorage,param_2->ElementCount * uVar5);
    Net::Private::FInternalNetSerializationContext::Free
              (param_1->InternalContext,param_2->ElementStorage);
    param_2->ElementCapacityCount = param_4;
    param_2->ElementStorage = _Dst;
  }
  else if (uVar1 < param_4) {
    uVar5 = (ulonglong)((param_3->StateDescriptor).Reference)->InternalSize;
    memset((void *)(uVar1 * uVar5 + (longlong)param_2->ElementStorage),0,
           ((ulonglong)param_4 - (ulonglong)uVar1) * uVar5);
  }
  param_2->ElementCount = param_4;
  return;
}

// CloneDynamicState @ 1442fc9c0

void __cdecl
UE::Net::FArrayPropertyNetSerializer::CloneDynamicState
          (FNetSerializationContext *param_1,FNetCloneDynamicStateArgs *param_2)

{
  ulong64 uVar1;
  undefined2 *puVar2;
  longlong lVar3;
  void *_Dst;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong local_58 [2];
  undefined4 local_48;
  longlong local_40;
  longlong local_38;
  
  _Dst = (void *)0x0;
  uVar1 = param_2->Source;
  puVar2 = (undefined2 *)param_2->Target;
  lVar3 = *(longlong *)(param_2->_padding_ + 0x38);
  uVar5 = (ulonglong)*(uint *)(lVar3 + 0x74);
  if (*(ushort *)(uVar1 + 2) != 0) {
    _Dst = Net::Private::FInternalNetSerializationContext::Alloc
                     (param_1->InternalContext,*(ushort *)(uVar1 + 2) * uVar5,
                      (ulonglong)*(ushort *)(lVar3 + 0x7a));
    memcpy(_Dst,*(void **)(uVar1 + 8),*(ushort *)(uVar1 + 2) * uVar5);
  }
  *puVar2 = *(undefined2 *)(uVar1 + 2);
  puVar2[1] = *(undefined2 *)(uVar1 + 2);
  *(void **)(puVar2 + 4) = _Dst;
  if (((*(byte *)(lVar3 + 0xb8) & 0x40) != 0) && (*(short *)(uVar1 + 2) != 0)) {
    local_58[1] = 0;
    local_48 = 0;
    local_58[0] = (*(longlong **)(lVar3 + 0x10))[1];
    local_40 = *(longlong *)(uVar1 + 8);
    local_38 = *(longlong *)(puVar2 + 4);
    lVar3 = **(longlong **)(lVar3 + 0x10);
    if (*(ushort *)(uVar1 + 2) != 0) {
      uVar4 = (ulonglong)*(ushort *)(uVar1 + 2);
      do {
        (**(code **)(lVar3 + 0x48))(param_1,local_58);
        local_40 = local_40 + uVar5;
        local_38 = local_38 + uVar5;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  return;
}

// CollectNetReferences @ 1442fd240

void __cdecl
UE::Net::FArrayPropertyNetSerializer::CollectNetReferences
          (FNetSerializationContext *param_1,FNetCollectReferencesArgs *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  FNetReferenceCollector *pFVar4;
  FReplicationStateDescriptor *pFVar5;
  FNetBitArrayView *pFVar6;
  uint *puVar7;
  code *pcVar8;
  longlong lVar9;
  bool bVar10;
  uchar *puVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  FNetSerializerChangeMaskParam local_res20;
  
  pFVar4 = (FNetReferenceCollector *)param_2->Collector;
  uVar1 = *(ushort *)(param_2->Source + 2);
  if (uVar1 != 0) {
    puVar11 = *(uchar **)(param_2->Source + 8);
    pFVar5 = *(FReplicationStateDescriptor **)(param_2->_padding_ + 0x38);
    uVar2 = *(uint *)((longlong)&param_2->_padding_ + 4);
    uVar3 = pFVar5->InternalSize;
    if ((uVar2 < 2) || (pFVar6 = param_1->ChangeMask, pFVar6 == (FNetBitArrayView *)0x0)) {
      if (uVar1 != 0) {
        uVar14 = (ulonglong)(uint)uVar1;
        do {
          Net::Private::FReplicationStateOperationsInternal::CollectReferences
                    (param_1,pFVar4,(FNetSerializerChangeMaskParam *)&param_2->_padding_,puVar11,
                     pFVar5);
          puVar11 = puVar11 + uVar3;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
    }
    else {
      lVar9 = param_2->_padding_;
      uVar13 = 0;
      if (uVar1 != 0) {
        do {
          puVar7 = pFVar6->Storage;
          uVar12 = uVar13 % (uVar2 - 1) + (int)lVar9 + 1;
          if ((pFVar6->BitCount <= uVar12) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index < BitCount",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                  ,0x2c1,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if ((puVar7[uVar12 >> 5] >> (uVar12 & 0x1f) & 1) != 0) {
            local_res20.BitCount = 1;
            local_res20.BitOffset = uVar12;
            Net::Private::FReplicationStateOperationsInternal::CollectReferences
                      (param_1,pFVar4,&local_res20,puVar11,pFVar5);
          }
          puVar11 = puVar11 + uVar3;
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar1);
      }
    }
  }
  return;
}

// Dequantize @ 1442feb10

void __cdecl
UE::Net::FArrayPropertyNetSerializer::Dequantize
          (FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  EArrayPropertyFlags EVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  ulong64 uVar5;
  longlong lVar6;
  FNetBitArrayView *pFVar7;
  uint *puVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  FFieldClass *pFVar12;
  FField *pFVar13;
  uint uVar14;
  uint uVar15;
  FScriptArrayHelper_u_8 FVar16;
  uint uVar17;
  uint uVar18;
  FScriptArrayHelper local_98;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  longlong local_60;
  undefined1 *local_58;
  
  lVar4 = param_2->_padding_;
  FVar16 = (FScriptArrayHelper_u_8)param_2->Target;
  pFVar12 = FArrayProperty::StaticClass();
  pFVar13 = FFieldPath::GetTyped((FFieldPath *)(lVar4 + 0x18),pFVar12,(UStruct *)0x0);
  EVar1 = *(EArrayPropertyFlags *)&pFVar13[2].Owner.Container;
  local_98.ElementAlignment = (**(code **)((pFVar13[2].Next)->_padding_ + 0x168))();
  local_98.InnerProperty = (FProperty *)pFVar13[2].Next;
  local_98.ElementSize = (local_98.InnerProperty)->ElementSize;
  local_98.field1_0x8 = FVar16;
  local_98.ArrayFlags = EVar1;
  if ((local_98.ElementSize < 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ElementSize > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                          ,0x1177,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((local_98.InnerProperty == (FProperty *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InnerProperty",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                          ,0x1178,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar5 = param_2->Source;
  iVar3 = (local_98.field1_0x8.FreezableArray)->ArrayNum;
  uVar2 = *(ushort *)(uVar5 + 2);
  uVar18 = (uint)uVar2;
  if (iVar3 < (int)(uint)uVar2) {
    FScriptArrayHelper::AddValues(&local_98,(uint)uVar2 - iVar3);
  }
  else if ((int)(uint)uVar2 < iVar3) {
    FScriptArrayHelper::RemoveValues(&local_98,uVar18,iVar3 - uVar18);
  }
  lVar4 = *(longlong *)(lVar4 + 0x38);
  uVar15 = *(uint *)((longlong)&param_2->_padding_ + 4);
  local_70 = 0;
  local_68 = 0;
  local_78 = (*(longlong **)(lVar4 + 0x10))[1];
  local_60 = *(longlong *)(uVar5 + 8);
  local_58 = (undefined1 *)0x0;
  lVar6 = **(longlong **)(lVar4 + 0x10);
  if (uVar15 < 2) {
    uVar11 = *(uint *)(lVar4 + 0x74);
  }
  else {
    pFVar7 = param_1->ChangeMask;
    uVar11 = *(uint *)(lVar4 + 0x74);
    if (pFVar7 != (FNetBitArrayView *)0x0) {
      lVar4 = param_2->_padding_;
      uVar14 = 0;
      FVar16 = local_98.field1_0x8;
      if (uVar2 == 0) {
        return;
      }
      do {
        puVar8 = pFVar7->Storage;
        uVar17 = uVar14 % (uVar15 - 1) + (int)lVar4 + 1;
        if ((pFVar7->BitCount <= uVar17) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index < BitCount",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                ,0x2c1,L""), FVar16 = local_98.field1_0x8, bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if ((puVar8[uVar17 >> 5] >> (uVar17 & 0x1f) & 1) != 0) {
          if ((FVar16.FreezableArray)->ArrayNum == 0) {
            local_58 = (undefined1 *)0x0;
          }
          else {
            local_58 = (undefined1 *)(FVar16.FreezableArray)->_padding_;
            if (((local_98.ArrayFlags & UsesMemoryImageAllocator) != None) &&
               (((ulonglong)local_58 & 1) != 0)) {
              local_58 = &(FVar16.HeapArray)->field_0x0 + ((longlong)local_58 >> 0x18);
            }
            local_58 = local_58 + (longlong)local_98.ElementSize * (longlong)(int)uVar14;
          }
          (**(code **)(lVar6 + 0x30))(param_1);
          FVar16 = local_98.field1_0x8;
        }
        uVar14 = uVar14 + 1;
        local_60 = local_60 + (ulonglong)uVar11;
      } while (uVar14 < uVar18);
      return;
    }
  }
  uVar15 = 0;
  if (uVar18 != 0) {
    do {
      if ((local_98.field1_0x8.FreezableArray)->ArrayNum == 0) {
        local_58 = (undefined1 *)0x0;
      }
      else {
        local_58 = (undefined1 *)(local_98.field1_0x8.FreezableArray)->_padding_;
        if (((local_98.ArrayFlags & UsesMemoryImageAllocator) != None) &&
           (((ulonglong)local_58 & 1) != 0)) {
          local_58 = &(local_98.field1_0x8.HeapArray)->field_0x0 + ((longlong)local_58 >> 0x18);
        }
        local_58 = local_58 + (longlong)local_98.ElementSize * (longlong)(int)uVar15;
      }
      (**(code **)(lVar6 + 0x30))(param_1);
      local_60 = local_60 + (ulonglong)uVar11;
      uVar15 = uVar15 + 1;
    } while (uVar15 < uVar18);
  }
  return;
}

// Deserialize @ 1442ff580

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Net::FArrayPropertyNetSerializer::Deserialize
          (FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  longlong *plVar1;
  ushort uVar2;
  FNetBitStreamReader *this;
  FArrayPropertyNetSerializerConfig *pFVar3;
  FQuantizedType *pFVar4;
  FReplicationStateDescriptor *pFVar5;
  FReplicationStateMemberSerializerDescriptor *pFVar6;
  FNetSerializer *pFVar7;
  FNetBitArrayView *pFVar8;
  uint *puVar9;
  ForElementType<FNetTracePacketContentEvent> FVar10;
  code *pcVar11;
  longlong lVar12;
  FName FVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  FNetTraceCollector *pFVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ForElementType<FNetTracePacketContentEvent> FVar20;
  uint local_res8 [2];
  uint local_res10;
  FNetSerializer *local_res18;
  ulonglong local_res20;
  FNetDeserializeArgs local_68;
  
  this = param_1->BitStreamReader;
  pFVar3 = (FArrayPropertyNetSerializerConfig *)param_2->_padding_;
  pFVar4 = (FQuantizedType *)param_2->Target;
  uVar15 = FNetBitStreamReader::ReadBits(this,1);
  if (uVar15 == 0) {
    local_res8[0] = FNetBitStreamReader::ReadBits(this,(uint)pFVar3->ElementCountBitCount);
  }
  else {
    local_res8[0] = 0;
  }
  if (local_res8[0] <= pFVar3->MaxElementCount) {
    pFVar5 = (pFVar3->StateDescriptor).Reference;
    pFVar6 = pFVar5->MemberSerializerDescriptors;
    AdjustArraySize(param_1,pFVar4,pFVar3,(ushort)local_res8[0]);
    uVar18 = 0;
    local_68._padding_ = 0;
    local_68._padding_._0_4_ = 0;
    local_68._padding_ = (longlong)pFVar6->SerializerConfig;
    local_68.Target = (ulong64)pFVar4->ElementStorage;
    pFVar7 = pFVar6->Serializer;
    local_res10 = *(uint *)((longlong)&param_2->_padding_ + 4);
    uVar19 = (ulonglong)pFVar5->InternalSize;
    local_res18 = pFVar7;
    if ((local_res10 < 2) || (pFVar8 = param_1->ChangeMask, pFVar8 == (FNetBitArrayView *)0x0)) {
      if (pFVar4->ElementCount != 0) {
        uVar18 = (ulonglong)pFVar4->ElementCount;
        plVar1 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        do {
          uVar15 = 0xffffffff;
          pFVar17 = (FNetTraceCollector *)0x0;
          if (2 < GNetTraceRuntimeVerbosity) {
            pFVar17 = param_1->TraceCollector;
          }
          if (pFVar17 != (FNetTraceCollector *)0x0) {
            uVar15 = FNetTrace::BeginPacketContentEvent(pFVar17,NameId,this->BufferBitPosition);
            if ((*(int *)(*plVar1 + 0x9d4c) < ::_TSS0) &&
               (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
              ::Element = CreatePersistentNetDebugName(L"Element",7);
              _Init_thread_footer(&::_TSS0);
            }
            uVar16 = FNetTrace::TraceName(::Element);
            FVar10 = (pFVar17->Events).AllocatorInstance.SecondaryData;
            FVar20 = (ForElementType<FNetTracePacketContentEvent>)&pFVar17->Events;
            if (FVar10 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
              FVar20 = FVar10;
            }
            *(uint *)((longlong)FVar20 + (ulonglong)uVar15 * 0x10) = uVar16;
          }
          (*pFVar7->Deserialize)(param_1,&local_68);
          local_68.Target = local_68.Target + uVar19;
          if (uVar15 != 0xffffffff) {
            FNetTrace::EndPacketContentEvent(pFVar17,uVar15,this->BufferBitPosition);
          }
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
      }
    }
    else {
      lVar12 = param_2->_padding_;
      local_res10 = local_res10 - 1;
      uVar2 = pFVar4->ElementCount;
      local_res20 = uVar19;
      if (uVar2 != 0) {
        do {
          puVar9 = pFVar8->Storage;
          uVar15 = (int)(uVar18 % (ulonglong)local_res10) + (int)lVar12 + 1;
          if ((pFVar8->BitCount <= uVar15) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index < BitCount",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                  ,0x2c1,L""), bVar14)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          if ((puVar9[uVar15 >> 5] >> (uVar15 & 0x1f) & 1) != 0) {
            uVar15 = 0xffffffff;
            pFVar17 = (FNetTraceCollector *)0x0;
            if (2 < GNetTraceRuntimeVerbosity) {
              pFVar17 = param_1->TraceCollector;
            }
            if (pFVar17 != (FNetTraceCollector *)0x0) {
              uVar15 = FNetTrace::BeginPacketContentEvent(pFVar17,NameId,this->BufferBitPosition);
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
                ::Element = CreatePersistentNetDebugName(L"Element",7);
                _Init_thread_footer(&::_TSS0);
              }
              uVar16 = FNetTrace::TraceName(::Element);
              FVar10 = (pFVar17->Events).AllocatorInstance.SecondaryData;
              FVar20 = (ForElementType<FNetTracePacketContentEvent>)&pFVar17->Events;
              if (FVar10 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
                FVar20 = FVar10;
              }
              *(uint *)((longlong)FVar20 + (ulonglong)uVar15 * 0x10) = uVar16;
            }
            (*local_res18->Deserialize)(param_1,&local_68);
            if (uVar15 != 0xffffffff) {
              FNetTrace::EndPacketContentEvent(pFVar17,uVar15,this->BufferBitPosition);
            }
          }
          uVar15 = (int)uVar18 + 1;
          uVar18 = (ulonglong)uVar15;
          local_68.Target = local_68.Target + local_res20;
        } while (uVar15 < uVar2);
      }
    }
    return;
  }
  if (1 < (byte)LogIris._0_1_) {
    Logging::Private::
    LogWithFields<UE::Logging::Private::FStaticLogRecord,unsigned_int_const_&,unsigned_short_const_&,unsigned_short_const_&>
              ((FLogCategoryBase *)&LogIris,&::LOG_Static,local_res8,&pFVar3->MaxElementCount,
               &pFVar3->ElementCountBitCount);
  }
  FVar13 = GNetError_ArraySizeTooLarge;
  FNetSerializationContext::SetBitStreamOverflow(param_1);
  FNetErrorContext::SetError(&param_1->ErrorContext,FVar13);
  return;
}

// DeserializeDelta @ 144300460

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Net::FArrayPropertyNetSerializer::DeserializeDelta
          (FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  longlong *plVar1;
  ushort uVar2;
  uint uVar3;
  ulong64 uVar4;
  FQuantizedType *pFVar5;
  FNetBitStreamReader *this;
  FArrayPropertyNetSerializerConfig *pFVar6;
  FReplicationStateDescriptor *pFVar7;
  FReplicationStateMemberSerializerDescriptor *pFVar8;
  FNetSerializer *pFVar9;
  ForElementType<FNetTracePacketContentEvent> FVar10;
  uint *puVar11;
  code *pcVar12;
  FName FVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  FNetTraceCollector *pFVar20;
  ForElementType<FNetTracePacketContentEvent> FVar21;
  bool local_res8 [8];
  uint local_res10 [2];
  uint local_res18;
  int local_res20;
  FNetBitArrayView *local_b8;
  FNetDeserializeDeltaArgs local_98;
  FNetDeserializeArgs local_70;
  
  uVar4 = param_2->Prev;
  pFVar5 = (FQuantizedType *)param_2->_padding_;
  this = param_1->BitStreamReader;
  pFVar6 = (FArrayPropertyNetSerializerConfig *)param_2->_padding_;
  uVar2 = *(ushort *)(uVar4 + 2);
  uVar16 = (uint)uVar2;
  uVar15 = FNetBitStreamReader::ReadBits(this,1);
  local_res8[0] = uVar15 != 0;
  if (uVar15 == 0) {
    uVar16 = FNetBitStreamReader::ReadBits(this,(uint)pFVar6->ElementCountBitCount);
  }
  local_res10[0] = uVar16;
  if (pFVar6->MaxElementCount < uVar16) {
    if (1 < (byte)LogIris._0_1_) {
      Logging::Private::
      LogWithFields<UE::Logging::Private::FStaticLogRecord,unsigned_int_const_&,unsigned_short_const_&,unsigned_short_const_&,bool_const_&>
                ((FLogCategoryBase *)&LogIris,&::LOG_Static,local_res10,&pFVar6->MaxElementCount,
                 &pFVar6->ElementCountBitCount,local_res8);
    }
    FVar13 = GNetError_ArraySizeTooLarge;
    FNetSerializationContext::SetBitStreamOverflow(param_1);
    FNetErrorContext::SetError(&param_1->ErrorContext,FVar13);
    return;
  }
  pFVar7 = (pFVar6->StateDescriptor).Reference;
  uVar15 = *(uint *)((longlong)&param_2->_padding_ + 4);
  pFVar8 = pFVar7->MemberSerializerDescriptors;
  if (uVar15 < 2) {
    local_b8 = (FNetBitArrayView *)0x0;
  }
  else {
    local_b8 = param_1->ChangeMask;
    if (local_b8 != (FNetBitArrayView *)0x0) {
      local_res20 = (int)param_2->_padding_ + 1;
      goto LAB_144300565;
    }
  }
  local_res20 = 0;
LAB_144300565:
  uVar3 = pFVar7->InternalSize;
  local_res18 = uVar15 - 1;
  if (local_b8 == (FNetBitArrayView *)0x0) {
    local_res18 = 0;
  }
  pFVar9 = pFVar8->Serializer;
  AdjustArraySize(param_1,pFVar5,pFVar6,(ushort)uVar16);
  uVar18 = 0;
  uVar15 = (uint)uVar2;
  if (uVar15 != 0) {
    local_98._padding_ = (longlong)pFVar8->SerializerConfig;
    local_98._padding_ = (longlong)pFVar5->ElementStorage;
    local_98.Prev = *(ulong64 *)(uVar4 + 8);
    local_98._padding_ = 0;
    local_98._padding_._0_4_ = 0;
    if (local_res18 == 0) {
      uVar15 = (uint)uVar2;
      if (local_res10[0] < uVar2) {
        uVar15 = local_res10[0];
      }
      uVar18 = (ulonglong)uVar15;
      if (uVar15 != 0) {
        plVar1 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        do {
          uVar15 = 0xffffffff;
          pFVar20 = (FNetTraceCollector *)0x0;
          if (2 < GNetTraceRuntimeVerbosity) {
            pFVar20 = param_1->TraceCollector;
          }
          if (pFVar20 != (FNetTraceCollector *)0x0) {
            uVar15 = FNetTrace::BeginPacketContentEvent(pFVar20,NameId,this->BufferBitPosition);
            if ((*(int *)(*plVar1 + 0x9d4c) < ::_TSS0) &&
               (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
              ::Element = CreatePersistentNetDebugName(L"Element",7);
              _Init_thread_footer(&::_TSS0);
            }
            uVar16 = FNetTrace::TraceName(::Element);
            FVar10 = (pFVar20->Events).AllocatorInstance.SecondaryData;
            FVar21 = (ForElementType<FNetTracePacketContentEvent>)&pFVar20->Events;
            if (FVar10 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
              FVar21 = FVar10;
            }
            *(uint *)((longlong)FVar21 + (ulonglong)uVar15 * 0x10) = uVar16;
          }
          (*pFVar9->DeserializeDelta)(param_1,&local_98);
          local_98._padding_ = local_98._padding_ + (ulonglong)uVar3;
          local_98.Prev = local_98.Prev + uVar3;
          if (uVar15 != 0xffffffff) {
            FNetTrace::EndPacketContentEvent(pFVar20,uVar15,this->BufferBitPosition);
          }
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
      }
    }
    else {
      if (local_res10[0] < uVar15) {
        uVar15 = local_res10[0];
      }
      if (uVar15 != 0) {
        do {
          uVar16 = local_res20 + (int)(uVar18 % (ulonglong)local_res18);
          puVar11 = local_b8->Storage;
          if ((local_b8->BitCount <= uVar16) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index < BitCount",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                  ,0x2c1,L""), bVar14)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          if ((puVar11[uVar16 >> 5] >> (uVar16 & 0x1f) & 1) != 0) {
            uVar16 = 0xffffffff;
            pFVar20 = (FNetTraceCollector *)0x0;
            if (2 < GNetTraceRuntimeVerbosity) {
              pFVar20 = param_1->TraceCollector;
            }
            if (pFVar20 != (FNetTraceCollector *)0x0) {
              uVar16 = FNetTrace::BeginPacketContentEvent(pFVar20,NameId,this->BufferBitPosition);
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
                ::Element = CreatePersistentNetDebugName(L"Element",7);
                _Init_thread_footer(&::_TSS0);
              }
              uVar19 = FNetTrace::TraceName(::Element);
              FVar10 = (pFVar20->Events).AllocatorInstance.SecondaryData;
              FVar21 = (ForElementType<FNetTracePacketContentEvent>)&pFVar20->Events;
              if (FVar10 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
                FVar21 = FVar10;
              }
              *(uint *)((longlong)FVar21 + (ulonglong)uVar16 * 0x10) = uVar19;
            }
            (*pFVar9->DeserializeDelta)(param_1,&local_98);
            if (uVar16 != 0xffffffff) {
              FNetTrace::EndPacketContentEvent(pFVar20,uVar16,this->BufferBitPosition);
            }
          }
          local_98._padding_ = local_98._padding_ + (ulonglong)uVar3;
          uVar16 = (int)uVar18 + 1;
          uVar18 = (ulonglong)uVar16;
          local_98.Prev = local_98.Prev + uVar3;
        } while (uVar16 < uVar15);
      }
    }
  }
  uVar16 = local_res10[0];
  uVar15 = (uint)uVar2;
  if (uVar15 < local_res10[0]) {
    local_70._padding_ = (longlong)pFVar8->SerializerConfig;
    local_70._padding_ = 0;
    local_70._padding_._0_4_ = 0;
    local_70.Target = (ulonglong)(uVar3 * uVar15) + (longlong)pFVar5->ElementStorage;
    if (local_res18 == 0) {
      if (uVar15 < local_res10[0]) {
        uVar18 = (ulonglong)(local_res10[0] - uVar15);
        plVar1 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        do {
          uVar15 = 0xffffffff;
          pFVar20 = (FNetTraceCollector *)0x0;
          if (2 < GNetTraceRuntimeVerbosity) {
            pFVar20 = param_1->TraceCollector;
          }
          if (pFVar20 != (FNetTraceCollector *)0x0) {
            uVar15 = FNetTrace::BeginPacketContentEvent(pFVar20,NameId,this->BufferBitPosition);
            if ((*(int *)(*plVar1 + 0x9d4c) < ::_TSS0) &&
               (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
              ::Element = CreatePersistentNetDebugName(L"Element",7);
              _Init_thread_footer(&::_TSS0);
            }
            uVar16 = FNetTrace::TraceName(::Element);
            FVar10 = (pFVar20->Events).AllocatorInstance.SecondaryData;
            FVar21 = (ForElementType<FNetTracePacketContentEvent>)&pFVar20->Events;
            if (FVar10 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
              FVar21 = FVar10;
            }
            *(uint *)((longlong)FVar21 + (ulonglong)uVar15 * 0x10) = uVar16;
          }
          (*pFVar9->Deserialize)(param_1,&local_70);
          local_70.Target = local_70.Target + uVar3;
          if (uVar15 != 0xffffffff) {
            FNetTrace::EndPacketContentEvent(pFVar20,uVar15,this->BufferBitPosition);
          }
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
      }
    }
    else {
      for (; uVar15 < uVar16; uVar15 = uVar15 + 1) {
        uVar19 = local_res20 + uVar15 % local_res18;
        puVar11 = local_b8->Storage;
        if ((local_b8->BitCount <= uVar19) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index < BitCount",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                ,0x2c1,L""), bVar14)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        if ((puVar11[uVar19 >> 5] >> (uVar19 & 0x1f) & 1) != 0) {
          uVar19 = 0xffffffff;
          pFVar20 = (FNetTraceCollector *)0x0;
          if (2 < GNetTraceRuntimeVerbosity) {
            pFVar20 = param_1->TraceCollector;
          }
          if (pFVar20 != (FNetTraceCollector *)0x0) {
            uVar19 = FNetTrace::BeginPacketContentEvent(pFVar20,NameId,this->BufferBitPosition);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                         0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
              ::Element = CreatePersistentNetDebugName(L"Element",7);
              _Init_thread_footer(&::_TSS0);
            }
            uVar17 = FNetTrace::TraceName(::Element);
            FVar10 = (pFVar20->Events).AllocatorInstance.SecondaryData;
            FVar21 = (ForElementType<FNetTracePacketContentEvent>)&pFVar20->Events;
            if (FVar10 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
              FVar21 = FVar10;
            }
            *(uint *)((longlong)FVar21 + (ulonglong)uVar19 * 0x10) = uVar17;
          }
          (*pFVar9->Deserialize)(param_1,&local_70);
          if (uVar19 != 0xffffffff) {
            FNetTrace::EndPacketContentEvent(pFVar20,uVar19,this->BufferBitPosition);
          }
        }
        local_70.Target = local_70.Target + uVar3;
      }
    }
  }
  return;
}

// FreeDynamicState @ 144302cc0

void __cdecl
UE::Net::FArrayPropertyNetSerializer::FreeDynamicState
          (FNetSerializationContext *param_1,FNetFreeDynamicStateArgs *param_2)

{
  FreeDynamicStateInternal
            (param_1,(FQuantizedType *)param_2->Source,
             (FArrayPropertyNetSerializerConfig *)param_2->_padding_);
  return;
}

// FreeDynamicStateInternal @ 144302d60

void __cdecl
UE::Net::FArrayPropertyNetSerializer::FreeDynamicStateInternal
          (FNetSerializationContext *param_1,FQuantizedType *param_2,
          FArrayPropertyNetSerializerConfig *param_3)

{
  uint uVar1;
  FReplicationStateDescriptor *pFVar2;
  FNetSerializer *pFVar3;
  ulonglong uVar4;
  FNetFreeDynamicStateArgs local_38;
  
  pFVar2 = (param_3->StateDescriptor).Reference;
  if ((pFVar2->Traits & HasDynamicState) != None) {
    pFVar3 = pFVar2->MemberSerializerDescriptors->Serializer;
    local_38._padding_ = 0;
    local_38._padding_._0_4_ = 0;
    local_38._padding_ = (longlong)pFVar2->MemberSerializerDescriptors->SerializerConfig;
    local_38.Source = (ulong64)param_2->ElementStorage;
    if (param_2->ElementCount != 0) {
      uVar4 = (ulonglong)param_2->ElementCount;
      uVar1 = pFVar2->InternalSize;
      do {
        (*pFVar3->FreeDynamicState)(param_1,&local_38);
        local_38.Source = local_38.Source + uVar1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  Net::Private::FInternalNetSerializationContext::Free
            (param_1->InternalContext,param_2->ElementStorage);
  param_2->ElementCapacityCount = 0;
  param_2->ElementCount = 0;
  param_2->ElementStorage = (void *)0x0;
  return;
}

// GrowDynamicStateInternal @ 144304b60

void __cdecl
UE::Net::FArrayPropertyNetSerializer::GrowDynamicStateInternal
          (FNetSerializationContext *param_1,FQuantizedType *param_2,
          FArrayPropertyNetSerializerConfig *param_3,ushort param_4)

{
  FReplicationStateDescriptor *pFVar1;
  void *_Dst;
  ulong64 _Size;
  ulonglong uVar2;
  
  pFVar1 = (param_3->StateDescriptor).Reference;
  uVar2 = (ulonglong)pFVar1->InternalSize;
  _Size = param_4 * uVar2;
  _Dst = Net::Private::FInternalNetSerializationContext::Alloc
                   (param_1->InternalContext,_Size,(ulonglong)pFVar1->InternalAlignment);
  memset(_Dst,0,_Size);
  memcpy(_Dst,param_2->ElementStorage,param_2->ElementCount * uVar2);
  Net::Private::FInternalNetSerializationContext::Free
            (param_1->InternalContext,param_2->ElementStorage);
  param_2->ElementStorage = _Dst;
  param_2->ElementCapacityCount = param_4;
  param_2->ElementCount = param_4;
  return;
}

// IsEqual @ 144308480

bool __cdecl
UE::Net::FArrayPropertyNetSerializer::IsEqual
          (FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  code *pcVar11;
  char cVar12;
  bool bVar13;
  undefined1 uVar14;
  FFieldClass *pFVar15;
  FField *pFVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  int iVar20;
  longlong local_98 [2];
  undefined4 local_88;
  longlong local_80;
  longlong local_78;
  undefined1 local_70;
  longlong local_68 [2];
  undefined4 local_58;
  ulonglong local_50;
  ulonglong local_48;
  undefined1 local_40;
  
  if (param_2->bStateIsQuantized == false) {
    lVar6 = param_2->_padding_;
    puVar9 = (ulonglong *)param_2->Source0;
    pFVar15 = FArrayProperty::StaticClass();
    pFVar16 = FFieldPath::GetTyped((FFieldPath *)(lVar6 + 0x18),pFVar15,(UStruct *)0x0);
    bVar1 = *(byte *)&pFVar16[2].Owner.Container;
    (**(code **)((pFVar16[2].Next)->_padding_ + 0x168))();
    pFVar16 = pFVar16[2].Next;
    iVar4 = *(int *)((longlong)&pFVar16[1]._padding_ + 4);
    if ((iVar4 < 1) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("ElementSize > 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x1177,L""), bVar13)) {
      pcVar11 = (code *)swi(3);
      uVar14 = (*pcVar11)();
      return (bool)uVar14;
    }
    if ((pFVar16 == (FField *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("InnerProperty",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x1178,L""), bVar13)) {
      pcVar11 = (code *)swi(3);
      uVar14 = (*pcVar11)();
      return (bool)uVar14;
    }
    puVar10 = (ulonglong *)param_2->Source1;
    pFVar15 = FArrayProperty::StaticClass();
    pFVar16 = FFieldPath::GetTyped((FFieldPath *)(lVar6 + 0x18),pFVar15,(UStruct *)0x0);
    bVar2 = *(byte *)&pFVar16[2].Owner.Container;
    (**(code **)((pFVar16[2].Next)->_padding_ + 0x168))();
    pFVar16 = pFVar16[2].Next;
    iVar5 = *(int *)((longlong)&pFVar16[1]._padding_ + 4);
    if ((iVar5 < 1) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("ElementSize > 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x1177,L""), bVar13)) {
      pcVar11 = (code *)swi(3);
      uVar14 = (*pcVar11)();
      return (bool)uVar14;
    }
    if ((pFVar16 == (FField *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("InnerProperty",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x1178,L""), bVar13)) {
      pcVar11 = (code *)swi(3);
      uVar14 = (*pcVar11)();
      return (bool)uVar14;
    }
    uVar18 = (uint)puVar9[1];
    if (uVar18 == (uint)puVar10[1]) {
      uVar19 = 0;
      plVar7 = *(longlong **)(*(longlong *)(lVar6 + 0x38) + 0x10);
      local_68[1] = 0;
      local_58 = 0;
      local_68[0] = plVar7[1];
      local_40 = 0;
      lVar6 = *plVar7;
      uVar17 = uVar19;
      if (uVar18 != 0) {
        do {
          iVar20 = (int)uVar17;
          local_50 = uVar19;
          if ((int)puVar9[1] != 0) {
            uVar17 = *puVar9;
            if (((bVar1 & 1) != 0) && ((uVar17 & 1) != 0)) {
              uVar17 = ((longlong)uVar17 >> 0x18) + (longlong)puVar9;
            }
            local_50 = (longlong)iVar4 * (longlong)iVar20 + uVar17;
          }
          local_48 = uVar19;
          if ((int)puVar10[1] != 0) {
            uVar17 = *puVar10;
            if (((bVar2 & 1) != 0) && ((uVar17 & 1) != 0)) {
              uVar17 = ((longlong)uVar17 >> 0x18) + (longlong)puVar10;
            }
            local_48 = (longlong)iVar5 * (longlong)iVar20 + uVar17;
          }
          cVar12 = (**(code **)(lVar6 + 0x38))(param_1,local_68);
          if (cVar12 == '\0') {
            return false;
          }
          uVar17 = (ulonglong)(iVar20 + 1U);
        } while (iVar20 + 1U < uVar18);
      }
      return true;
    }
  }
  else {
    uVar3 = *(ushort *)(param_2->Source0 + 2);
    if (uVar3 == *(ushort *)(param_2->Source1 + 2)) {
      uVar18 = 0;
      lVar6 = *(longlong *)(param_2->_padding_ + 0x38);
      plVar7 = *(longlong **)(lVar6 + 0x10);
      local_98[1] = 0;
      local_88 = 0;
      local_98[0] = plVar7[1];
      local_80 = *(longlong *)(param_2->Source0 + 8);
      local_78 = *(longlong *)(param_2->Source1 + 8);
      local_70 = 1;
      lVar8 = *plVar7;
      uVar17 = (ulonglong)*(uint *)(lVar6 + 0x74);
      if (uVar3 == 0) {
        return true;
      }
      while (cVar12 = (**(code **)(lVar8 + 0x38))(param_1,local_98), cVar12 != '\0') {
        uVar18 = uVar18 + 1;
        local_80 = local_80 + uVar17;
        local_78 = local_78 + uVar17;
        if (uVar3 <= uVar18) {
          return true;
        }
      }
    }
  }
  return false;
}

// Quantize @ 14430c7c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Net::FArrayPropertyNetSerializer::Quantize
          (FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  FArrayPropertyNetSerializerConfig *pFVar1;
  ulonglong *puVar2;
  FQuantizedType *pFVar3;
  FReplicationStateDescriptor *pFVar4;
  FNetSerializer *pFVar5;
  FNetBitArrayView *pFVar6;
  uint *puVar7;
  code *pcVar8;
  FName FVar9;
  uint uVar10;
  bool bVar11;
  uint uVar12;
  FFieldClass *pFVar13;
  FField *pFVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  byte bVar19;
  longlong lVar20;
  uint local_res10 [2];
  int local_res18;
  int local_res20;
  FNetQuantizeArgs local_60;
  
  pFVar1 = (FArrayPropertyNetSerializerConfig *)param_2->_padding_;
  puVar2 = (ulonglong *)param_2->Source;
  pFVar13 = FArrayProperty::StaticClass();
  pFVar14 = FFieldPath::GetTyped((FFieldPath *)&pFVar1->Property,pFVar13,(UStruct *)0x0);
  bVar19 = *(byte *)&pFVar14[2].Owner.Container;
  (**(code **)((pFVar14[2].Next)->_padding_ + 0x168))();
  pFVar14 = pFVar14[2].Next;
  local_res18 = *(int *)((longlong)&pFVar14[1]._padding_ + 4);
  lVar20 = (longlong)local_res18;
  if ((local_res18 < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ElementSize > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                          ,0x1177,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((pFVar14 == (FField *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InnerProperty",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                          ,0x1178,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_res10[0] = (uint)puVar2[1];
  bVar19 = bVar19 & 1;
  if (pFVar1->MaxElementCount < local_res10[0]) {
    if (1 < (byte)LogIris._0_1_) {
      Logging::Private::
      LogWithFields<UE::Logging::Private::FStaticLogRecord,unsigned_int_const_&,unsigned_short_const_&>
                ((FLogCategoryBase *)&LogIris,&::LOG_Static,local_res10,&pFVar1->MaxElementCount);
    }
    FVar9 = GNetError_ArraySizeTooLarge;
    FNetSerializationContext::SetBitStreamOverflow(param_1);
    FNetErrorContext::SetError(&param_1->ErrorContext,FVar9);
    return;
  }
  pFVar3 = (FQuantizedType *)param_2->Target;
  AdjustArraySize(param_1,pFVar3,pFVar1,(ushort)local_res10[0]);
  uVar10 = local_res10[0];
  pFVar4 = (pFVar1->StateDescriptor).Reference;
  uVar17 = *(uint *)((longlong)&param_2->_padding_ + 4);
  local_60._padding_ = 0;
  local_60._padding_._0_4_ = 0;
  local_60._padding_ = (longlong)pFVar4->MemberSerializerDescriptors->SerializerConfig;
  local_60.Source = 0;
  local_60.Target = (ulong64)pFVar3->ElementStorage;
  pFVar5 = pFVar4->MemberSerializerDescriptors->Serializer;
  if (uVar17 < 2) {
    uVar12 = pFVar4->InternalSize;
  }
  else {
    pFVar6 = param_1->ChangeMask;
    uVar12 = pFVar4->InternalSize;
    if (pFVar6 != (FNetBitArrayView *)0x0) {
      uVar16 = 0;
      local_res20 = (int)param_2->_padding_ + 1;
      if (local_res10[0] == 0) {
        return;
      }
      do {
        puVar7 = pFVar6->Storage;
        uVar18 = uVar16 % (uVar17 - 1) + local_res20;
        if ((pFVar6->BitCount <= uVar18) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index < BitCount",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                ,0x2c1,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((puVar7[uVar18 >> 5] >> (uVar18 & 0x1f) & 1) != 0) {
          if ((int)puVar2[1] == 0) {
            local_60.Source = 0;
          }
          else {
            uVar15 = *puVar2;
            if ((bVar19 != 0) && ((uVar15 & 1) != 0)) {
              uVar15 = ((longlong)uVar15 >> 0x18) + (longlong)puVar2;
            }
            local_60.Source = (longlong)local_res18 * (longlong)(int)uVar16 + uVar15;
          }
          (*pFVar5->Quantize)(param_1,&local_60);
        }
        uVar16 = uVar16 + 1;
        local_60.Target = local_60.Target + uVar12;
      } while (uVar16 < uVar10);
      return;
    }
  }
  uVar17 = 0;
  if (local_res10[0] != 0) {
    do {
      if ((int)puVar2[1] == 0) {
        local_60.Source = 0;
      }
      else {
        uVar15 = *puVar2;
        if ((bVar19 != 0) && ((uVar15 & 1) != 0)) {
          uVar15 = ((longlong)uVar15 >> 0x18) + (longlong)puVar2;
        }
        local_60.Source = lVar20 * (int)uVar17 + uVar15;
      }
      (*pFVar5->Quantize)(param_1,&local_60);
      local_60.Target = local_60.Target + uVar12;
      uVar17 = uVar17 + 1;
    } while (uVar17 < uVar10);
  }
  return;
}

// Serialize @ 144310580

void __cdecl
UE::Net::FArrayPropertyNetSerializer::Serialize
          (FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  ushort *puVar1;
  ushort uVar2;
  ulong64 uVar3;
  FNetBitStreamWriter *this;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  FNetBitArrayView *pFVar7;
  uint *puVar8;
  ForElementType<FNetTracePacketContentEvent> FVar9;
  code *pcVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  ForElementType<FNetTracePacketContentEvent> FVar14;
  uint uVar15;
  FNetTraceCollector *pFVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong local_58 [2];
  undefined4 local_48;
  longlong local_40;
  
  uVar3 = param_2->Source;
  puVar1 = (ushort *)(uVar3 + 2);
  this = param_1->BitStreamWriter;
  lVar4 = param_2->_padding_;
  if (*(short *)(uVar3 + 2) == 0) {
    FNetBitStreamWriter::WriteBits(this,1,1);
    return;
  }
  FNetBitStreamWriter::WriteBits(this,0,1);
  FNetBitStreamWriter::WriteBits(this,(uint)*puVar1,(uint)*(ushort *)(lVar4 + 0x12));
  lVar4 = *(longlong *)(lVar4 + 0x38);
  uVar17 = 0;
  plVar5 = *(longlong **)(lVar4 + 0x10);
  local_58[1] = 0;
  local_48 = 0;
  local_58[0] = plVar5[1];
  local_40 = *(longlong *)(uVar3 + 8);
  lVar6 = *plVar5;
  uVar13 = *(uint *)((longlong)&param_2->_padding_ + 4);
  uVar18 = (ulonglong)*(uint *)(lVar4 + 0x74);
  if ((uVar13 < 2) || (pFVar7 = param_1->ChangeMask, pFVar7 == (FNetBitArrayView *)0x0)) {
    if (*puVar1 != 0) {
      uVar17 = (ulonglong)*puVar1;
      plVar5 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      do {
        uVar13 = 0xffffffff;
        pFVar16 = (FNetTraceCollector *)0x0;
        if (2 < GNetTraceRuntimeVerbosity) {
          pFVar16 = param_1->TraceCollector;
        }
        if (pFVar16 != (FNetTraceCollector *)0x0) {
          uVar13 = this->BufferBitPosition;
          if (this->OverflowBitCount != 0) {
            uVar13 = 0;
          }
          uVar13 = FNetTrace::BeginPacketContentEvent(pFVar16,NameId,uVar13);
          if ((*(int *)(*plVar5 + 0x9d4c) < ::_TSS0) &&
             (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            ::Element = CreatePersistentNetDebugName(L"Element",7);
            _Init_thread_footer(&::_TSS0);
          }
          uVar15 = FNetTrace::TraceName(::Element);
          FVar9 = (pFVar16->Events).AllocatorInstance.SecondaryData;
          FVar14 = (ForElementType<FNetTracePacketContentEvent>)&pFVar16->Events;
          if (FVar9 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
            FVar14 = FVar9;
          }
          *(uint *)((longlong)FVar14 + (ulonglong)uVar13 * 0x10) = uVar15;
        }
        (**(code **)(lVar6 + 8))(param_1,local_58);
        local_40 = local_40 + uVar18;
        if (uVar13 != 0xffffffff) {
          uVar15 = this->BufferBitPosition;
          if (this->OverflowBitCount != 0) {
            uVar15 = 0;
          }
          FNetTrace::EndPacketContentEvent(pFVar16,uVar13,uVar15);
        }
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
  }
  else {
    lVar4 = param_2->_padding_;
    uVar2 = *puVar1;
    if (uVar2 != 0) {
      do {
        puVar8 = pFVar7->Storage;
        uVar15 = (int)(uVar17 % (ulonglong)(uVar13 - 1)) + (int)lVar4 + 1;
        if ((pFVar7->BitCount <= uVar15) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index < BitCount",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                ,0x2c1,L""), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if ((puVar8[uVar15 >> 5] >> (uVar15 & 0x1f) & 1) != 0) {
          uVar15 = 0xffffffff;
          pFVar16 = (FNetTraceCollector *)0x0;
          if (2 < GNetTraceRuntimeVerbosity) {
            pFVar16 = param_1->TraceCollector;
          }
          if (pFVar16 != (FNetTraceCollector *)0x0) {
            uVar15 = this->BufferBitPosition;
            if (this->OverflowBitCount != 0) {
              uVar15 = 0;
            }
            uVar15 = FNetTrace::BeginPacketContentEvent(pFVar16,NameId,uVar15);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                         0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
              ::Element = CreatePersistentNetDebugName(L"Element",7);
              _Init_thread_footer(&::_TSS0);
            }
            uVar12 = FNetTrace::TraceName(::Element);
            FVar9 = (pFVar16->Events).AllocatorInstance.SecondaryData;
            FVar14 = (ForElementType<FNetTracePacketContentEvent>)&pFVar16->Events;
            if (FVar9 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
              FVar14 = FVar9;
            }
            *(uint *)((longlong)FVar14 + (ulonglong)uVar15 * 0x10) = uVar12;
          }
          (**(code **)(lVar6 + 8))(param_1);
          if (uVar15 != 0xffffffff) {
            uVar12 = this->BufferBitPosition;
            if (this->OverflowBitCount != 0) {
              uVar12 = 0;
            }
            FNetTrace::EndPacketContentEvent(pFVar16,uVar15,uVar12);
          }
        }
        uVar15 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar15;
        local_40 = local_40 + uVar18;
      } while (uVar15 < uVar2);
    }
  }
  return;
}

// SerializeDelta @ 144311120

void __cdecl
UE::Net::FArrayPropertyNetSerializer::SerializeDelta
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  longlong *plVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  longlong lVar5;
  ulong64 uVar6;
  longlong lVar7;
  FNetBitStreamWriter *this;
  ForElementType<FNetTracePacketContentEvent> FVar8;
  uint *puVar9;
  code *pcVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  ForElementType<FNetTracePacketContentEvent> FVar16;
  FNetTraceCollector *pFVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  FNetBitArrayView *local_c0;
  longlong local_a0 [2];
  undefined4 local_90;
  longlong local_88;
  longlong local_80;
  longlong *local_78;
  longlong local_70 [2];
  undefined4 local_60;
  longlong local_58;
  
  lVar5 = param_2->_padding_;
  uVar6 = param_2->Prev;
  lVar7 = param_2->_padding_;
  this = param_1->BitStreamWriter;
  uVar2 = *(ushort *)(lVar5 + 2);
  uVar3 = *(ushort *)(uVar6 + 2);
  FNetBitStreamWriter::WriteBits(this,(uint)((uint)uVar2 == (uint)uVar3),1);
  uVar12 = (uint)uVar3;
  uVar13 = (uint)uVar2;
  if (uVar13 != uVar12) {
    FNetBitStreamWriter::WriteBits
              (this,(uint)*(ushort *)(lVar5 + 2),(uint)*(ushort *)(lVar7 + 0x12));
  }
  lVar7 = *(longlong *)(lVar7 + 0x38);
  local_78 = *(longlong **)(lVar7 + 0x10);
  uVar4 = *(uint *)(lVar7 + 0x74);
  uVar20 = (ulonglong)uVar4;
  uVar14 = *(uint *)((longlong)&param_2->_padding_ + 4);
  lVar7 = *local_78;
  if (uVar14 < 2) {
    local_c0 = (FNetBitArrayView *)0x0;
  }
  else {
    local_c0 = param_1->ChangeMask;
    if (local_c0 != (FNetBitArrayView *)0x0) {
      iVar15 = (int)param_2->_padding_ + 1;
      goto LAB_1443111e8;
    }
  }
  iVar15 = 0;
LAB_1443111e8:
  uVar18 = (ulonglong)(uVar14 - 1);
  if (local_c0 == (FNetBitArrayView *)0x0) {
    uVar18 = 0;
  }
  if (uVar12 != 0) {
    local_a0[0] = local_78[1];
    local_88 = *(longlong *)(lVar5 + 8);
    local_80 = *(longlong *)(uVar6 + 8);
    local_a0[1] = 0;
    local_90 = 0;
    uVar14 = (uint)uVar3;
    if ((int)uVar18 == 0) {
      if (uVar2 < uVar14) {
        uVar14 = uVar13;
      }
      if (uVar14 != 0) {
        uVar19 = (ulonglong)uVar14;
        plVar1 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        do {
          uVar12 = 0xffffffff;
          pFVar17 = (FNetTraceCollector *)0x0;
          if (2 < GNetTraceRuntimeVerbosity) {
            pFVar17 = param_1->TraceCollector;
          }
          if (pFVar17 != (FNetTraceCollector *)0x0) {
            uVar12 = this->BufferBitPosition;
            if (this->OverflowBitCount != 0) {
              uVar12 = 0;
            }
            uVar12 = FNetTrace::BeginPacketContentEvent(pFVar17,NameId,uVar12);
            if ((*(int *)(*plVar1 + 0x9d4c) < ::_TSS0) &&
               (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
              ::Element = CreatePersistentNetDebugName(L"Element",7);
              _Init_thread_footer(&::_TSS0);
            }
            uVar13 = FNetTrace::TraceName(::Element);
            FVar8 = (pFVar17->Events).AllocatorInstance.SecondaryData;
            FVar16 = (ForElementType<FNetTracePacketContentEvent>)&pFVar17->Events;
            if (FVar8 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
              FVar16 = FVar8;
            }
            *(uint *)((longlong)FVar16 + (ulonglong)uVar12 * 0x10) = uVar13;
          }
          (**(code **)(lVar7 + 0x18))(param_1,local_a0);
          local_88 = local_88 + uVar20;
          local_80 = local_80 + uVar20;
          if (uVar12 != 0xffffffff) {
            uVar13 = this->BufferBitPosition;
            if (this->OverflowBitCount != 0) {
              uVar13 = 0;
            }
            FNetTrace::EndPacketContentEvent(pFVar17,uVar12,uVar13);
          }
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
      }
    }
    else {
      uVar19 = 0;
      if (uVar13 < uVar12) {
        uVar14 = (uint)uVar2;
      }
      if (uVar14 != 0) {
        do {
          puVar9 = local_c0->Storage;
          uVar12 = (int)(uVar19 % uVar18) + iVar15;
          if ((local_c0->BitCount <= uVar12) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index < BitCount",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                  ,0x2c1,L""), bVar11)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          if ((puVar9[uVar12 >> 5] >> (uVar12 & 0x1f) & 1) != 0) {
            uVar12 = 0xffffffff;
            pFVar17 = (FNetTraceCollector *)0x0;
            if (2 < GNetTraceRuntimeVerbosity) {
              pFVar17 = param_1->TraceCollector;
            }
            if (pFVar17 != (FNetTraceCollector *)0x0) {
              uVar12 = this->BufferBitPosition;
              if (this->OverflowBitCount != 0) {
                uVar12 = 0;
              }
              uVar12 = FNetTrace::BeginPacketContentEvent(pFVar17,NameId,uVar12);
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
                ::Element = CreatePersistentNetDebugName(L"Element",7);
                _Init_thread_footer(&::_TSS0);
              }
              uVar13 = FNetTrace::TraceName(::Element);
              FVar8 = (pFVar17->Events).AllocatorInstance.SecondaryData;
              FVar16 = (ForElementType<FNetTracePacketContentEvent>)&pFVar17->Events;
              if (FVar8 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
                FVar16 = FVar8;
              }
              *(uint *)((longlong)FVar16 + (ulonglong)uVar12 * 0x10) = uVar13;
            }
            (**(code **)(lVar7 + 0x18))(param_1);
            if (uVar12 != 0xffffffff) {
              uVar13 = this->BufferBitPosition;
              if (this->OverflowBitCount != 0) {
                uVar13 = 0;
              }
              FNetTrace::EndPacketContentEvent(pFVar17,uVar12,uVar13);
            }
          }
          local_88 = local_88 + uVar20;
          uVar12 = (int)uVar19 + 1;
          uVar19 = (ulonglong)uVar12;
          local_80 = local_80 + uVar20;
        } while (uVar12 < uVar14);
      }
    }
  }
  uVar12 = (uint)uVar3;
  if (uVar12 < uVar2) {
    local_70[0] = local_78[1];
    local_70[1] = 0;
    local_60 = 0;
    local_58 = (ulonglong)(uVar4 * uVar12) + *(longlong *)(lVar5 + 8);
    if ((int)uVar18 == 0) {
      uVar20 = (ulonglong)(uVar2 - uVar12);
      plVar1 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      do {
        uVar12 = 0xffffffff;
        pFVar17 = (FNetTraceCollector *)0x0;
        if (2 < GNetTraceRuntimeVerbosity) {
          pFVar17 = param_1->TraceCollector;
        }
        if (pFVar17 != (FNetTraceCollector *)0x0) {
          uVar12 = this->BufferBitPosition;
          if (this->OverflowBitCount != 0) {
            uVar12 = 0;
          }
          uVar12 = FNetTrace::BeginPacketContentEvent(pFVar17,NameId,uVar12);
          if ((*(int *)(*plVar1 + 0x9d4c) < ::_TSS0) &&
             (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            ::Element = CreatePersistentNetDebugName(L"Element",7);
            _Init_thread_footer(&::_TSS0);
          }
          uVar13 = FNetTrace::TraceName(::Element);
          FVar8 = (pFVar17->Events).AllocatorInstance.SecondaryData;
          FVar16 = (ForElementType<FNetTracePacketContentEvent>)&pFVar17->Events;
          if (FVar8 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
            FVar16 = FVar8;
          }
          *(uint *)((longlong)FVar16 + (ulonglong)uVar12 * 0x10) = uVar13;
        }
        (**(code **)(lVar7 + 8))(param_1,local_70);
        local_58 = local_58 + (ulonglong)uVar4;
        if (uVar12 != 0xffffffff) {
          uVar13 = this->BufferBitPosition;
          if (this->OverflowBitCount != 0) {
            uVar13 = 0;
          }
          FNetTrace::EndPacketContentEvent(pFVar17,uVar12,uVar13);
        }
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
    else {
      do {
        puVar9 = local_c0->Storage;
        uVar13 = iVar15 + (int)((ulonglong)uVar12 % uVar18);
        if ((local_c0->BitCount <= uVar13) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index < BitCount",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                ,0x2c1,L""), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if ((puVar9[uVar13 >> 5] >> (uVar13 & 0x1f) & 1) != 0) {
          uVar13 = 0xffffffff;
          pFVar17 = (FNetTraceCollector *)0x0;
          if (2 < GNetTraceRuntimeVerbosity) {
            pFVar17 = param_1->TraceCollector;
          }
          if (pFVar17 != (FNetTraceCollector *)0x0) {
            uVar13 = this->BufferBitPosition;
            if (this->OverflowBitCount != 0) {
              uVar13 = 0;
            }
            uVar13 = FNetTrace::BeginPacketContentEvent(pFVar17,NameId,uVar13);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                         0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
              ::Element = CreatePersistentNetDebugName(L"Element",7);
              _Init_thread_footer(&::_TSS0);
            }
            uVar14 = FNetTrace::TraceName(::Element);
            FVar8 = (pFVar17->Events).AllocatorInstance.SecondaryData;
            FVar16 = (ForElementType<FNetTracePacketContentEvent>)&pFVar17->Events;
            if (FVar8 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
              FVar16 = FVar8;
            }
            *(uint *)((longlong)FVar16 + (ulonglong)uVar13 * 0x10) = uVar14;
          }
          (**(code **)(lVar7 + 8))(param_1);
          if (uVar13 != 0xffffffff) {
            uVar14 = this->BufferBitPosition;
            if (this->OverflowBitCount != 0) {
              uVar14 = 0;
            }
            FNetTrace::EndPacketContentEvent(pFVar17,uVar13,uVar14);
          }
        }
        local_58 = local_58 + (ulonglong)uVar4;
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar2);
    }
  }
  return;
}

// ShrinkDynamicStateInternal @ 144314fb0

void __cdecl
UE::Net::FArrayPropertyNetSerializer::ShrinkDynamicStateInternal
          (FNetSerializationContext *param_1,FQuantizedType *param_2,
          FArrayPropertyNetSerializerConfig *param_3,ushort param_4)

{
  uint uVar1;
  FReplicationStateDescriptor *pFVar2;
  FNetSerializer *pFVar3;
  ulonglong uVar4;
  FNetFreeDynamicStateArgs local_38;
  
  pFVar2 = (param_3->StateDescriptor).Reference;
  if ((pFVar2->Traits & HasDynamicState) == None) {
    param_2->ElementCount = param_4;
    return;
  }
  uVar1 = pFVar2->InternalSize;
  pFVar3 = pFVar2->MemberSerializerDescriptors->Serializer;
  local_38._padding_ = 0;
  local_38._padding_._0_4_ = 0;
  local_38._padding_ = (longlong)pFVar2->MemberSerializerDescriptors->SerializerConfig;
  local_38.Source = (ulonglong)(param_4 * uVar1) + (longlong)param_2->ElementStorage;
  if ((uint)param_4 < (uint)param_2->ElementCount) {
    uVar4 = (ulonglong)((uint)param_2->ElementCount - (uint)param_4);
    do {
      (*pFVar3->FreeDynamicState)(param_1,&local_38);
      local_38.Source = local_38.Source + uVar1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    param_2->ElementCount = param_4;
    return;
  }
  param_2->ElementCount = param_4;
  return;
}

// Validate @ 144318010

bool __cdecl
UE::Net::FArrayPropertyNetSerializer::Validate
          (FNetSerializationContext *param_1,FNetValidateArgs *param_2)

{
  uint uVar1;
  longlong lVar2;
  ulong64 uVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  FFieldClass *pFVar8;
  FField *pFVar9;
  uint uVar10;
  
  lVar2 = param_2->_padding_;
  uVar3 = param_2->Source;
  pFVar8 = FArrayProperty::StaticClass();
  pFVar9 = FFieldPath::GetTyped((FFieldPath *)(lVar2 + 0x18),pFVar8,(UStruct *)0x0);
  (**(code **)((pFVar9[2].Next)->_padding_ + 0x168))();
  pFVar9 = pFVar9[2].Next;
  if ((*(int *)((longlong)&pFVar9[1]._padding_ + 4) < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1177,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if ((pFVar9 == (FField *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InnerProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1178,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  uVar1 = *(uint *)(uVar3 + 8);
  if ((*(ushort *)(lVar2 + 0x10) < uVar1) || (*(short *)(*(longlong *)(lVar2 + 0x38) + 0x7c) != 1))
  {
LAB_14431814b:
    bVar5 = false;
  }
  else {
    uVar10 = 0;
    lVar2 = **(longlong **)(*(longlong *)(lVar2 + 0x38) + 0x10);
    if (uVar1 != 0) {
      do {
        cVar7 = (**(code **)(lVar2 + 0x40))(param_1);
        if (cVar7 == '\0') goto LAB_14431814b;
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar1);
    }
    bVar5 = true;
  }
  return bVar5;
}

