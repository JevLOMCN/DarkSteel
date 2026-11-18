// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 16

// CloneDynamicState @ 147bcc780

void __cdecl
UE::Net::FRootMotionSourceGroupNetSerializer::CloneDynamicState
          (FNetSerializationContext *param_1,FNetCloneDynamicStateArgs *param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  FReplicationStateDescriptor *pFVar5;
  longlong lVar6;
  void *pvVar7;
  uchar *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined8 *puVar13;
  ulonglong uVar12;
  
  plVar3 = (longlong *)param_2->Source;
  lVar6 = param_2->_padding_;
  plVar4 = (longlong *)param_2->Target;
  uVar1 = *(uint *)(plVar3 + 1);
  if (uVar1 == 0) {
    *plVar4 = 0;
    *(undefined4 *)(plVar4 + 1) = 0;
  }
  else {
    pvVar7 = Net::Private::FPolymorphicStructNetSerializerInternal::Alloc
                       (param_1,(ulonglong)uVar1 << 4,8);
    *plVar4 = (longlong)pvVar7;
    *(uint *)(plVar4 + 1) = uVar1;
    memset(pvVar7,0,(ulonglong)uVar1 << 4);
  }
  uVar12 = 0;
  uVar1 = *(uint *)(plVar3 + 1);
  if (uVar1 != 0) {
    do {
      puVar13 = (undefined8 *)(*plVar3 + uVar12 * 0x10);
      puVar10 = (undefined8 *)(*plVar4 + uVar12 * 0x10);
      iVar2 = *(int *)(puVar13 + 1);
      if (iVar2 - 1U < *(uint *)(lVar6 + 0x18)) {
        lVar9 = (ulonglong)(iVar2 - 1U) * 0x10 + *(longlong *)(lVar6 + 0x10);
        *(int *)(puVar10 + 1) = iVar2;
        if (lVar9 == 0) goto LAB_147bcc832;
        pFVar5 = *(FReplicationStateDescriptor **)(lVar9 + 8);
        puVar8 = Net::Private::FPolymorphicStructNetSerializerInternal::Alloc
                           (param_1,(ulonglong)pFVar5->InternalSize,
                            (ulonglong)pFVar5->InternalAlignment);
        *puVar10 = puVar8;
        Net::Private::FPolymorphicStructNetSerializerInternal::CloneQuantizedState
                  (param_1,puVar8,(uchar *)*puVar13,pFVar5);
      }
      else {
        *(int *)(puVar10 + 1) = iVar2;
LAB_147bcc832:
        *puVar10 = 0;
      }
      uVar11 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
    } while (uVar11 != uVar1);
  }
  lVar6 = param_2->_padding_;
  uVar1 = *(uint *)(plVar3 + 3);
  if (uVar1 == 0) {
    plVar4[2] = 0;
    *(undefined4 *)(plVar4 + 3) = 0;
  }
  else {
    pvVar7 = Net::Private::FPolymorphicStructNetSerializerInternal::Alloc
                       (param_1,(ulonglong)uVar1 << 4,8);
    plVar4[2] = (longlong)pvVar7;
    *(uint *)(plVar4 + 3) = uVar1;
    memset(pvVar7,0,(ulonglong)uVar1 << 4);
  }
  uVar1 = *(uint *)(plVar3 + 3);
  uVar12 = 0;
  if (uVar1 != 0) {
    do {
      puVar13 = (undefined8 *)(plVar3[2] + uVar12 * 0x10);
      puVar10 = (undefined8 *)(plVar4[2] + uVar12 * 0x10);
      iVar2 = *(int *)(puVar13 + 1);
      if (iVar2 - 1U < *(uint *)(lVar6 + 0x18)) {
        lVar9 = (ulonglong)(iVar2 - 1U) * 0x10 + *(longlong *)(lVar6 + 0x10);
        *(int *)(puVar10 + 1) = iVar2;
        if (lVar9 == 0) goto LAB_147bcc914;
        pFVar5 = *(FReplicationStateDescriptor **)(lVar9 + 8);
        puVar8 = Net::Private::FPolymorphicStructNetSerializerInternal::Alloc
                           (param_1,(ulonglong)pFVar5->InternalSize,
                            (ulonglong)pFVar5->InternalAlignment);
        *puVar10 = puVar8;
        Net::Private::FPolymorphicStructNetSerializerInternal::CloneQuantizedState
                  (param_1,puVar8,(uchar *)*puVar13,pFVar5);
      }
      else {
        *(int *)(puVar10 + 1) = iVar2;
LAB_147bcc914:
        *puVar10 = 0;
      }
      uVar11 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
    } while (uVar11 != uVar1);
  }
  return;
}

// CollectNetReferences @ 147bccca0

void __cdecl
UE::Net::FRootMotionSourceGroupNetSerializer::CollectNetReferences
          (FNetSerializationContext *param_1,FNetCollectReferencesArgs *param_2)

{
  FNetReferenceCollector *pFVar1;
  uint uVar2;
  longlong *plVar3;
  FReplicationStateDescriptor *pFVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  FNetSerializerChangeMaskParam FStack_50;
  longlong local_48;
  longlong *plStack_40;
  FNetReferenceCollector *local_38;
  
  plVar3 = (longlong *)param_2->Source;
  uVar9 = 0;
  lVar5 = param_2->_padding_;
  FStack_50 = (FNetSerializerChangeMaskParam)param_2->_padding_;
  local_48 = param_2->_padding_;
  pFVar1 = (FNetReferenceCollector *)param_2->Collector;
  uVar2 = *(uint *)(plVar3 + 1);
  if ((uVar2 != 0) && ((*(byte *)(lVar5 + 0x20) & 4) != 0)) {
    uVar8 = 0;
    plStack_40 = plVar3;
    local_38 = pFVar1;
    do {
      puVar10 = (undefined8 *)((ulonglong)uVar8 * 0x10 + *plVar3);
      uVar6 = *(int *)(puVar10 + 1) - 1;
      if ((((uVar6 < *(uint *)(lVar5 + 0x18)) &&
           (lVar7 = *(longlong *)(lVar5 + 0x10) + (ulonglong)uVar6 * 0x10, lVar7 != 0)) &&
          (pFVar4 = *(FReplicationStateDescriptor **)(lVar7 + 8),
          pFVar4 != (FReplicationStateDescriptor *)0x0)) &&
         ((pFVar4->Traits & HasObjectReference) != None)) {
        Net::Private::FPolymorphicStructNetSerializerInternal::CollectReferences
                  (param_1,pFVar1,&FStack_50,(uchar *)*puVar10,pFVar4);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar2);
  }
  lVar5 = param_2->_padding_;
  FStack_50 = (FNetSerializerChangeMaskParam)param_2->_padding_;
  local_48 = param_2->_padding_;
  pFVar1 = (FNetReferenceCollector *)param_2->Collector;
  uVar2 = *(uint *)(plVar3 + 3);
  if ((uVar2 != 0) &&
     (plStack_40 = plVar3 + 2, local_38 = pFVar1, (*(byte *)(lVar5 + 0x20) & 4) != 0)) {
    do {
      puVar10 = (undefined8 *)((ulonglong)uVar9 * 0x10 + plVar3[2]);
      uVar8 = *(int *)(puVar10 + 1) - 1;
      if (((uVar8 < *(uint *)(lVar5 + 0x18)) &&
          ((lVar7 = *(longlong *)(lVar5 + 0x10) + (ulonglong)uVar8 * 0x10, lVar7 != 0 &&
           (pFVar4 = *(FReplicationStateDescriptor **)(lVar7 + 8),
           pFVar4 != (FReplicationStateDescriptor *)0x0)))) &&
         ((pFVar4->Traits & HasObjectReference) != None)) {
        Net::Private::FPolymorphicStructNetSerializerInternal::CollectReferences
                  (param_1,pFVar1,&FStack_50,(uchar *)*puVar10,pFVar4);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar2);
  }
  return;
}

// Dequantize @ 147bd5420

void __cdecl
UE::Net::FRootMotionSourceGroupNetSerializer::Dequantize
          (FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  ulong64 uVar1;
  byte bVar2;
  FNetDequantizeArgs local_38;
  
  uVar1 = param_2->Source;
  local_38.Target = param_2->Target;
  *(undefined1 *)(local_38.Target + 0x29) = *(undefined1 *)(uVar1 + 0x40);
  bVar2 = (*(byte *)(local_38.Target + 0x28) ^ *(byte *)(uVar1 + 0x44)) & 1 ^
          *(byte *)(local_38.Target + 0x28);
  *(byte *)(local_38.Target + 0x28) = bVar2;
  bVar2 = ((char)(*(uint *)(uVar1 + 0x44) >> 1) * '\x02' ^ bVar2) & 2 ^ bVar2;
  *(byte *)(local_38.Target + 0x28) = bVar2;
  bVar2 = ((byte)*(undefined4 *)(uVar1 + 0x44) & 0xfc ^ bVar2) & 4 ^ bVar2;
  *(byte *)(local_38.Target + 0x28) = bVar2;
  *(byte *)(local_38.Target + 0x28) =
       ((byte)*(undefined4 *)(uVar1 + 0x44) & 0xf8 ^ bVar2) & 8 ^ bVar2;
  local_38.Source = uVar1 + 0x20;
  local_38._padding_ = param_2->_padding_;
  local_38._padding_ = param_2->_padding_;
  local_38.Target = local_38.Target + 0x30;
  local_38._padding_ = (longlong)QuantizedVectorNetSerializer->DefaultConfig;
  (*QuantizedVectorNetSerializer->Dequantize)(param_1,&local_38);
  local_38._padding_ = param_2->_padding_;
  local_38._padding_ = param_2->_padding_;
  local_38._padding_ = param_2->_padding_;
  local_38.Target = param_2->Target;
  local_38.Source = uVar1;
  TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources,&UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum>
  ::Dequantize(param_1,&local_38);
  local_38._padding_ = param_2->_padding_;
  local_38._padding_ = param_2->_padding_;
  local_38.Source = uVar1 + 0x10;
  local_38._padding_ = param_2->_padding_;
  local_38.Target = param_2->Target;
  TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources,&UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum>
  ::Dequantize(param_1,&local_38);
  return;
}

// Deserialize @ 147bd6130

void __cdecl
UE::Net::FRootMotionSourceGroupNetSerializer::Deserialize
          (FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  FNetBitStreamReader *this;
  ulong64 uVar1;
  bool bVar2;
  uint uVar3;
  FNetDeserializeArgs local_28;
  
  this = param_1->BitStreamReader;
  uVar1 = param_2->Target;
  uVar3 = FNetBitStreamReader::ReadBits(this,8);
  *(uint *)(uVar1 + 0x40) = uVar3;
  uVar3 = FNetBitStreamReader::ReadBits(this,4);
  *(uint *)(uVar1 + 0x44) = uVar3;
  if ((param_1->ErrorContext).Error == (FName)0x0) {
    bVar2 = FNetSerializationContext::IsBitStreamOverflown(param_1);
    if (!bVar2) {
      local_28.Target = uVar1 + 0x20;
      local_28._padding_ = param_2->_padding_;
      local_28._padding_ = param_2->_padding_;
      local_28._padding_ = (longlong)QuantizedVectorNetSerializer->DefaultConfig;
      (*QuantizedVectorNetSerializer->Deserialize)(param_1,&local_28);
      if ((param_1->ErrorContext).Error == (FName)0x0) {
        bVar2 = FNetSerializationContext::IsBitStreamOverflown(param_1);
        if (!bVar2) {
          local_28._padding_ = param_2->_padding_;
          local_28._padding_ = param_2->_padding_;
          local_28._padding_ = param_2->_padding_;
          local_28.Target = uVar1;
          TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources,&UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum>
          ::Deserialize(param_1,&local_28);
          if ((param_1->ErrorContext).Error == (FName)0x0) {
            bVar2 = FNetSerializationContext::IsBitStreamOverflown(param_1);
            if (!bVar2) {
              local_28._padding_ = param_2->_padding_;
              local_28.Target = uVar1 + 0x10;
              local_28._padding_ = param_2->_padding_;
              local_28._padding_ = param_2->_padding_;
              TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources,&UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum>
              ::Deserialize(param_1,&local_28);
              if ((param_1->ErrorContext).Error == (FName)0x0) {
                FNetSerializationContext::IsBitStreamOverflown(param_1);
              }
            }
          }
        }
      }
    }
  }
  return;
}

// DeserializeDelta @ 147bd6f40

void __cdecl
UE::Net::FRootMotionSourceGroupNetSerializer::DeserializeDelta
          (FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  ulong64 uVar1;
  longlong lVar2;
  FNetBitStreamReader *this;
  bool bVar3;
  uint uVar4;
  FNetDeserializeDeltaArgs local_48;
  
  uVar1 = param_2->Prev;
  lVar2 = param_2->_padding_;
  this = param_1->BitStreamReader;
  *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)(uVar1 + 0x40);
  uVar4 = FNetBitStreamReader::ReadBits(this,1);
  if ((uVar4 & 1) != 0) {
    uVar4 = FNetBitStreamReader::ReadBits(this,8);
    *(uint *)(lVar2 + 0x40) = uVar4;
    uVar4 = FNetBitStreamReader::ReadBits(this,4);
    *(uint *)(lVar2 + 0x44) = uVar4;
    if ((param_1->ErrorContext).Error != (FName)0x0) {
      return;
    }
    bVar3 = FNetSerializationContext::IsBitStreamOverflown(param_1);
    if (bVar3) {
      return;
    }
  }
  local_48._padding_ = lVar2 + 0x20;
  local_48._padding_ = param_2->_padding_;
  local_48._padding_ = param_2->_padding_;
  local_48.Prev = uVar1 + 0x20;
  local_48._padding_ = (longlong)QuantizedVectorNetSerializer->DefaultConfig;
  (*QuantizedVectorNetSerializer->DeserializeDelta)(param_1,&local_48);
  if (((param_1->ErrorContext).Error == (FName)0x0) &&
     (bVar3 = FNetSerializationContext::IsBitStreamOverflown(param_1), !bVar3)) {
    local_48._padding_ = param_2->_padding_;
    local_48._padding_ = param_2->_padding_;
    local_48._padding_ = param_2->_padding_;
    local_48._padding_ = lVar2;
    local_48.Prev = uVar1;
    TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources,&UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum>
    ::DeserializeDelta(param_1,&local_48);
    if (((param_1->ErrorContext).Error == (FName)0x0) &&
       (bVar3 = FNetSerializationContext::IsBitStreamOverflown(param_1), !bVar3)) {
      local_48._padding_ = param_2->_padding_;
      local_48._padding_ = lVar2 + 0x10;
      local_48._padding_ = param_2->_padding_;
      local_48._padding_ = param_2->_padding_;
      local_48.Prev = uVar1 + 0x10;
      TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources,&UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum>
      ::DeserializeDelta(param_1,&local_48);
      if ((param_1->ErrorContext).Error == (FName)0x0) {
        FNetSerializationContext::IsBitStreamOverflown(param_1);
      }
    }
  }
  return;
}

// FreeDynamicState @ 147bdd7e0

void __cdecl
UE::Net::FRootMotionSourceGroupNetSerializer::FreeDynamicState
          (FNetSerializationContext *param_1,FNetFreeDynamicStateArgs *param_2)

{
  FQuantizedArray *pFVar1;
  
  pFVar1 = (FQuantizedArray *)param_2->Source;
  TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources,&UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum>
  ::InternalFreeItemArray
            (param_1,pFVar1,(FPolymorphicArrayStructNetSerializerConfig *)param_2->_padding_);
  TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources,&UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum>
  ::InternalFreeItemArray
            (param_1,(FQuantizedArray *)(pFVar1 + 1),
             (FPolymorphicArrayStructNetSerializerConfig *)param_2->_padding_);
  return;
}

// GetPendingRootMotionSources @ 147be4370

TArrayView<TSharedPtr<FRootMotionSource,1>,int> * __cdecl
UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources
          (TArrayView<TSharedPtr<FRootMotionSource,1>,int> *__return_storage_ptr__,
          FRootMotionSourceGroup *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<TSharedPtr<FRootMotionSource,1>,int> *pTVar4;
  
  iVar1 = (param_1->PendingAddRootMotionSources).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (TSharedPtr<FRootMotionSource,1> *)
       (param_1->PendingAddRootMotionSources).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<TSharedPtr<FRootMotionSource,1>,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetRootMotionSources @ 147be7040

TArrayView<TSharedPtr<FRootMotionSource,1>,int> * __cdecl
UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources
          (TArrayView<TSharedPtr<FRootMotionSource,1>,int> *__return_storage_ptr__,
          FRootMotionSourceGroup *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<TSharedPtr<FRootMotionSource,1>,int> *pTVar4;
  
  iVar1 = (param_1->RootMotionSources).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (TSharedPtr<FRootMotionSource,1> *)(param_1->RootMotionSources).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<TSharedPtr<FRootMotionSource,1>,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// InitTypeCache @ 147befd60

void __cdecl UE::Net::FRootMotionSourceGroupNetSerializer::InitTypeCache(void)

{
  UPackage *pUVar1;
  
  if (bIsPostFreezeCalled) {
    if (Z_Registration_Info_UScriptStruct_FRootMotionSource.OuterSingleton == (UScriptStruct *)0x0)
    {
      pUVar1 = Z_Construct_UPackage__Script_Engine();
      Z_Registration_Info_UScriptStruct_FRootMotionSource.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionSource,(UObject *)pUVar1,
                           L"RootMotionSource");
    }
    FPolymorphicNetSerializerScriptStructCache::InitForType
              ((FPolymorphicNetSerializerScriptStructCache *)&DefaultConfig.field_0x10,
               Z_Registration_Info_UScriptStruct_FRootMotionSource.OuterSingleton);
    return;
  }
  return;
}

// IsEqual @ 147bf0c90

bool __cdecl
UE::Net::FRootMotionSourceGroupNetSerializer::IsEqual
          (FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  int *this;
  uint uVar1;
  FRootMotionSourceGroup *this_00;
  FRootMotionSourceGroup *pFVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  char cStack_30;
  
  this_00 = (FRootMotionSourceGroup *)param_2->Source0;
  pFVar2 = (FRootMotionSourceGroup *)param_2->Source1;
  if (param_2->bStateIsQuantized == false) {
    bVar5 = FRootMotionSourceGroup::operator==(this_00,pFVar2);
    return bVar5;
  }
  if ((*(int *)&(this_00->LastPreAdditiveVelocity).field_0x14 ==
       *(int *)&(pFVar2->LastPreAdditiveVelocity).field_0x14 &&
       *(int *)&(this_00->LastPreAdditiveVelocity).field_0x10 ==
       *(int *)&(pFVar2->LastPreAdditiveVelocity).field_0x10) &&
     (iVar6 = memcmp(&(this_00->PendingAddRootMotionSources).ArrayNum,
                     &(pFVar2->PendingAddRootMotionSources).ArrayNum,0x20), iVar6 == 0)) {
    lVar4 = param_2->_padding_;
    uVar9 = 0;
    if (param_2->bStateIsQuantized == false) {
      bVar5 = FRootMotionSourceGroup::operator==(this_00,pFVar2);
      if (!bVar5) {
        return false;
      }
    }
    else {
      uVar1 = *(uint *)&(this_00->RootMotionSources).AllocatorInstance.Data;
      if (uVar1 != *(uint *)&(pFVar2->RootMotionSources).AllocatorInstance.Data) {
        return false;
      }
      uVar10 = 0;
      if (uVar1 != 0) {
        do {
          uVar8 = (ulonglong)uVar10;
          iVar6 = *(int *)(this_00->_padding_ + 8 + uVar8 * 0x10);
          if (iVar6 != *(int *)(pFVar2->_padding_ + 8 + uVar8 * 0x10)) {
            return false;
          }
          uVar7 = iVar6 - 1;
          if (((uVar7 < *(uint *)(lVar4 + 0x18)) &&
              (lVar11 = (ulonglong)uVar7 * 0x10 + *(longlong *)(lVar4 + 0x10), lVar11 != 0)) &&
             (bVar5 = FReplicationStateOperations::IsEqualQuantizedState
                                (param_1,*(uchar **)(this_00->_padding_ + uVar8 * 0x10),
                                 *(uchar **)(pFVar2->_padding_ + uVar8 * 0x10),
                                 *(FReplicationStateDescriptor **)(lVar11 + 8)), !bVar5)) {
            return false;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 != uVar1);
      }
    }
    lVar4 = param_2->_padding_;
    this = &(this_00->RootMotionSources).ArrayNum;
    cStack_30 = (char)*(undefined8 *)&param_2->bStateIsQuantized;
    if (cStack_30 == '\0') {
      bVar5 = FRootMotionSourceGroup::operator==
                        ((FRootMotionSourceGroup *)this,
                         (FRootMotionSourceGroup *)&(pFVar2->RootMotionSources).ArrayNum);
      return bVar5;
    }
    uVar1 = *(uint *)&(this_00->PendingAddRootMotionSources).AllocatorInstance.Data;
    if (uVar1 == *(uint *)&(pFVar2->PendingAddRootMotionSources).AllocatorInstance.Data) {
      if (uVar1 != 0) {
        do {
          lVar11 = *(longlong *)this;
          lVar3 = *(longlong *)&(pFVar2->RootMotionSources).ArrayNum;
          uVar8 = (ulonglong)uVar9;
          iVar6 = *(int *)(lVar11 + 8 + uVar8 * 0x10);
          if (iVar6 != *(int *)(lVar3 + 8 + uVar8 * 0x10)) {
            return false;
          }
          uVar10 = iVar6 - 1;
          if (((uVar10 < *(uint *)(lVar4 + 0x18)) &&
              (lVar12 = (ulonglong)uVar10 * 0x10 + *(longlong *)(lVar4 + 0x10), lVar12 != 0)) &&
             (bVar5 = FReplicationStateOperations::IsEqualQuantizedState
                                (param_1,*(uchar **)(lVar11 + uVar8 * 0x10),
                                 *(uchar **)(lVar3 + uVar8 * 0x10),
                                 *(FReplicationStateDescriptor **)(lVar12 + 8)), !bVar5)) {
            return false;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 != uVar1);
      }
      return true;
    }
  }
  return false;
}

// Quantize @ 147bf9390

void __cdecl
UE::Net::FRootMotionSourceGroupNetSerializer::Quantize
          (FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  ulong64 uVar1;
  uint uVar2;
  FNetQuantizeArgs local_38;
  
  local_38.Source = param_2->Source;
  uVar1 = param_2->Target;
  *(uint *)(uVar1 + 0x40) = (uint)*(byte *)(local_38.Source + 0x29);
  *(undefined4 *)(uVar1 + 0x44) = 0;
  uVar2 = *(byte *)(local_38.Source + 0x28) & 1;
  *(uint *)(uVar1 + 0x44) = uVar2;
  uVar2 = *(byte *)(local_38.Source + 0x28) & 2 | uVar2;
  *(uint *)(uVar1 + 0x44) = uVar2;
  uVar2 = *(byte *)(local_38.Source + 0x28) & 4 | uVar2;
  *(uint *)(uVar1 + 0x44) = uVar2;
  *(uint *)(uVar1 + 0x44) = *(byte *)(local_38.Source + 0x28) & 8 | uVar2;
  local_38.Source = local_38.Source + 0x30;
  local_38._padding_ = param_2->_padding_;
  local_38._padding_ = param_2->_padding_;
  local_38.Target = uVar1 + 0x20;
  local_38._padding_ = (longlong)QuantizedVectorNetSerializer->DefaultConfig;
  (*QuantizedVectorNetSerializer->Quantize)(param_1,&local_38);
  local_38._padding_ = param_2->_padding_;
  local_38._padding_ = param_2->_padding_;
  local_38._padding_ = param_2->_padding_;
  local_38.Source = param_2->Source;
  local_38.Target = uVar1;
  TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources,&UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum>
  ::Quantize(param_1,&local_38);
  if ((param_1->ErrorContext).Error == (FName)0x0) {
    local_38._padding_ = param_2->_padding_;
    local_38._padding_ = param_2->_padding_;
    local_38.Target = uVar1 + 0x10;
    local_38._padding_ = param_2->_padding_;
    local_38.Source = param_2->Source;
    TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources,&UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum>
    ::Quantize(param_1,&local_38);
  }
  return;
}

// Serialize @ 147bff300

void __cdecl
UE::Net::FRootMotionSourceGroupNetSerializer::Serialize
          (FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  ulong64 uVar1;
  FNetBitStreamWriter *this;
  FNetSerializeArgs local_28;
  
  uVar1 = param_2->Source;
  this = param_1->BitStreamWriter;
  FNetBitStreamWriter::WriteBits(this,*(uint *)(uVar1 + 0x40),8);
  FNetBitStreamWriter::WriteBits(this,*(uint *)(uVar1 + 0x44),4);
  local_28.Source = uVar1 + 0x20;
  local_28._padding_ = param_2->_padding_;
  local_28._padding_ = param_2->_padding_;
  local_28._padding_ = (longlong)QuantizedVectorNetSerializer->DefaultConfig;
  (*QuantizedVectorNetSerializer->Serialize)(param_1,&local_28);
  local_28._padding_ = param_2->_padding_;
  local_28._padding_ = param_2->_padding_;
  local_28._padding_ = param_2->_padding_;
  local_28.Source = uVar1;
  TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources,&UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum>
  ::Serialize(param_1,&local_28);
  local_28._padding_ = param_2->_padding_;
  local_28.Source = uVar1 + 0x10;
  local_28._padding_ = param_2->_padding_;
  local_28._padding_ = param_2->_padding_;
  TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources,&UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum>
  ::Serialize(param_1,&local_28);
  return;
}

// SerializeDelta @ 147c00360

void __cdecl
UE::Net::FRootMotionSourceGroupNetSerializer::SerializeDelta
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  ulong64 uVar1;
  longlong lVar2;
  FNetBitStreamWriter *this;
  bool bVar3;
  FNetSerializeDeltaArgs local_48;
  
  uVar1 = param_2->Prev;
  lVar2 = param_2->_padding_;
  this = param_1->BitStreamWriter;
  if ((*(int *)(lVar2 + 0x40) == *(int *)(uVar1 + 0x40)) &&
     (*(int *)(lVar2 + 0x44) == *(int *)(uVar1 + 0x44))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  FNetBitStreamWriter::WriteBits(this,(uint)bVar3,1);
  if (bVar3) {
    FNetBitStreamWriter::WriteBits(this,*(uint *)(lVar2 + 0x40),8);
    FNetBitStreamWriter::WriteBits(this,*(uint *)(lVar2 + 0x44),4);
  }
  local_48._padding_ = lVar2 + 0x20;
  local_48._padding_ = param_2->_padding_;
  local_48._padding_ = param_2->_padding_;
  local_48.Prev = uVar1 + 0x20;
  local_48._padding_ = (longlong)QuantizedVectorNetSerializer->DefaultConfig;
  (*QuantizedVectorNetSerializer->SerializeDelta)(param_1,&local_48);
  local_48._padding_ = param_2->_padding_;
  local_48._padding_ = param_2->_padding_;
  local_48._padding_ = param_2->_padding_;
  local_48._padding_ = lVar2;
  local_48.Prev = uVar1;
  TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources,&UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum>
  ::SerializeDelta(param_1,&local_48);
  local_48._padding_ = param_2->_padding_;
  local_48._padding_ = lVar2 + 0x10;
  local_48._padding_ = param_2->_padding_;
  local_48._padding_ = param_2->_padding_;
  local_48.Prev = uVar1 + 0x10;
  TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources,&UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum>
  ::SerializeDelta(param_1,&local_48);
  return;
}

// SetPendingRootMotionSourcesNum @ 147c01720

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum
          (FRootMotionSourceGroup *param_1,ulong64 param_2)

{
  TArray<TSharedPtr<FRootMotionSource,1>,TSizedDefaultAllocator<32>_>::SetNum
            (&param_1->PendingAddRootMotionSources,(int)param_2,Default);
  return;
}

// SetRootMotionSourcesNum @ 147c01c50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum
          (FRootMotionSourceGroup *param_1,ulong64 param_2)

{
  TArray<TSharedPtr<FRootMotionSource,1>,TSizedDefaultAllocator<32>_>::SetNum
            (&param_1->RootMotionSources,(int)param_2,Default);
  return;
}

// Validate @ 147c0be00

bool __cdecl
UE::Net::FRootMotionSourceGroupNetSerializer::Validate
          (FNetSerializationContext *param_1,FNetValidateArgs *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  int iVar12;
  FNetValidateArgs local_38;
  
  local_38._padding_ = param_2->_padding_;
  local_38._padding_ = param_2->_padding_;
  local_38.Source = param_2->Source + 0x30;
  local_38._padding_ = (longlong)QuantizedVectorNetSerializer->DefaultConfig;
  bVar5 = (*QuantizedVectorNetSerializer->Validate)(param_1,&local_38);
  if (bVar5) {
    lVar2 = param_2->_padding_;
    uVar1 = *(uint *)(param_2->Source + 0x10);
    plVar10 = *(longlong **)(param_2->Source + 8);
    if (((int)uVar1 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    if (uVar1 < 0x100) {
      plVar11 = plVar10 + (longlong)(int)uVar1 * 2;
      iVar12 = 0;
      for (; plVar10 != plVar11; plVar10 = plVar10 + 2) {
        if ((longlong *)*plVar10 == (longlong *)0x0) {
          lVar7 = 0;
        }
        else {
          lVar7 = (**(code **)(*(longlong *)*plVar10 + 0x58))();
          if (lVar7 != 0) {
            plVar3 = *(longlong **)(lVar2 + 0x10);
            for (plVar9 = plVar3; plVar9 != plVar3 + (longlong)*(int *)(lVar2 + 0x18) * 2;
                plVar9 = plVar9 + 2) {
              if (*plVar9 == lVar7) {
                iVar8 = (int)((longlong)plVar9 - (longlong)plVar3 >> 4);
                if (iVar8 != -1) {
                  iVar8 = iVar8 + 1;
                  goto LAB_147c0bf0f;
                }
                break;
              }
            }
          }
        }
        iVar8 = iVar12;
        if (lVar7 != 0) {
LAB_147c0bf0f:
          if (iVar8 == 0) {
            return false;
          }
        }
        if (((iVar8 - 1U < *(uint *)(lVar2 + 0x18)) &&
            (lVar7 = (ulonglong)(iVar8 - 1U) * 0x10 + *(longlong *)(lVar2 + 0x10), lVar7 != 0)) &&
           (bVar5 = FReplicationStateOperations::Validate
                              (param_1,(uchar *)*plVar10,
                               *(FReplicationStateDescriptor **)(lVar7 + 8)), !bVar5)) {
          return false;
        }
      }
      lVar2 = param_2->_padding_;
      uVar1 = *(uint *)(param_2->Source + 0x20);
      plVar10 = *(longlong **)(param_2->Source + 0x18);
      if (((int)uVar1 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      if (uVar1 < 0x100) {
        plVar11 = plVar10 + (longlong)(int)uVar1 * 2;
        do {
          if (plVar10 == plVar11) {
            return true;
          }
          if ((longlong *)*plVar10 == (longlong *)0x0) {
            lVar7 = 0;
          }
          else {
            lVar7 = (**(code **)(*(longlong *)*plVar10 + 0x58))();
            if (lVar7 != 0) {
              plVar3 = *(longlong **)(lVar2 + 0x10);
              for (plVar9 = plVar3; plVar9 != plVar3 + (longlong)*(int *)(lVar2 + 0x18) * 2;
                  plVar9 = plVar9 + 2) {
                if (*plVar9 == lVar7) {
                  iVar8 = (int)((longlong)plVar9 - (longlong)plVar3 >> 4);
                  if (iVar8 != -1) {
                    iVar8 = iVar8 + 1;
                    goto LAB_147c0bffc;
                  }
                  break;
                }
              }
            }
          }
          iVar8 = iVar12;
          if (lVar7 != 0) {
LAB_147c0bffc:
            if (iVar8 == 0) {
              return false;
            }
          }
          if (((iVar8 - 1U < *(uint *)(lVar2 + 0x18)) &&
              (lVar7 = (ulonglong)(iVar8 - 1U) * 0x10 + *(longlong *)(lVar2 + 0x10), lVar7 != 0)) &&
             (bVar5 = FReplicationStateOperations::Validate
                                (param_1,(uchar *)*plVar10,
                                 *(FReplicationStateDescriptor **)(lVar7 + 8)), !bVar5)) {
            return false;
          }
          plVar10 = plVar10 + 2;
        } while( true );
      }
    }
  }
  return false;
}

