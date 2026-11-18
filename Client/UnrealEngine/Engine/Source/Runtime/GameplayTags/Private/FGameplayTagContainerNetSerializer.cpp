// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTags
// Functions: 12

// CloneDynamicState @ 146ad2d00

void __cdecl
UE::Net::FGameplayTagContainerNetSerializer::CloneDynamicState
          (FNetSerializationContext *param_1,FNetCloneDynamicStateArgs *param_2)

{
  FNetCloneDynamicStateArgs local_38;
  
  local_38._padding_ = param_2->_padding_;
  local_38._padding_ = param_2->_padding_;
  local_38.Source = param_2->Source;
  local_38._padding_ = (longlong)&StructNetSerializerConfig;
  local_38.Target = param_2->Target;
  (*StructNetSerializer->CloneDynamicState)(param_1,&local_38);
  return;
}

// CollectNetReferences @ 146ad2d50

void __cdecl
UE::Net::FGameplayTagContainerNetSerializer::CollectNetReferences
          (FNetSerializationContext *param_1,FNetCollectReferencesArgs *param_2)

{
  return;
}

// Dequantize @ 146ad59d0

void __cdecl
UE::Net::FGameplayTagContainerNetSerializer::Dequantize
          (FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  FGameplayTagContainer *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *pTVar4;
  longlong lVar5;
  void *local_68;
  undefined8 local_60;
  FGameplayTagContainer local_58;
  FNetDequantizeArgs local_38;
  
  local_38._padding_ = param_2->_padding_;
  local_38.Target = (ulong64)&local_68;
  local_38._padding_ = param_2->_padding_;
  local_38.Source = param_2->Source;
  local_68 = (void *)0x0;
  local_38._padding_ = (longlong)&StructNetSerializerConfig;
  local_60 = 0;
  (*StructNetSerializer->Dequantize)(param_1,&local_38);
  lVar5 = (longlong)(int)local_60;
  pFVar1 = (FGameplayTagContainer *)param_2->Target;
  local_58.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.GameplayTags.ArrayNum = 0;
  local_58.GameplayTags.ArrayMax = 0;
  local_58.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ParentTags.ArrayNum = 0;
  local_58.ParentTags.ArrayMax = 0;
  if ((int)local_60 != 0) {
    iVar3 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,(int)local_60,(ForAnyElementType *)&local_58,
                       &local_58.GameplayTags.ArrayNum,&local_58.GameplayTags.ArrayMax);
    memcpy(local_58.GameplayTags.AllocatorInstance.Data + (longlong)iVar3 * 8,local_68,lVar5 << 3);
  }
  FGameplayTagContainer::FillParentTags(&local_58);
  if (pFVar1 != &local_58) {
    pFVar2 = (pFVar1->GameplayTags).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->GameplayTags).AllocatorInstance.Data = local_58.GameplayTags.AllocatorInstance.Data;
    (pFVar1->GameplayTags).ArrayNum = local_58.GameplayTags.ArrayNum;
    (pFVar1->GameplayTags).ArrayMax = local_58.GameplayTags.ArrayMax;
    local_58.GameplayTags.ArrayNum = 0;
    local_58.GameplayTags.ArrayMax = 0;
    local_58.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  pTVar4 = &pFVar1->ParentTags;
  if (pTVar4 != &local_58.ParentTags) {
    pFVar2 = (pTVar4->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar4->AllocatorInstance).Data = local_58.ParentTags.AllocatorInstance.Data;
    (pFVar1->ParentTags).ArrayNum = local_58.ParentTags.ArrayNum;
    (pFVar1->ParentTags).ArrayMax = local_58.ParentTags.ArrayMax;
    local_58.ParentTags.ArrayNum = 0;
    local_58.ParentTags.ArrayMax = 0;
    local_58.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_58.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.ParentTags.AllocatorInstance.Data);
  }
  if (local_58.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.GameplayTags.AllocatorInstance.Data);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  return;
}

// Deserialize @ 146ad5cb0

void __cdecl
UE::Net::FGameplayTagContainerNetSerializer::Deserialize
          (FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  FNetDeserializeArgs local_28;
  
  local_28._padding_ = param_2->_padding_;
  local_28._padding_ = param_2->_padding_;
  local_28.Target = param_2->Target;
  local_28._padding_ = (longlong)&StructNetSerializerConfig;
  (*StructNetSerializer->Deserialize)(param_1,&local_28);
  return;
}

// DeserializeDelta @ 146ad5e20

void __cdecl
UE::Net::FGameplayTagContainerNetSerializer::DeserializeDelta
          (FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  FNetDeserializeDeltaArgs local_38;
  
  local_38._padding_ = param_2->_padding_;
  local_38._padding_ = param_2->_padding_;
  local_38._padding_ = param_2->_padding_;
  local_38._padding_ = (longlong)&StructNetSerializerConfig;
  local_38.Prev = param_2->Prev;
  (*StructNetSerializer->DeserializeDelta)(param_1,&local_38);
  return;
}

// FreeDynamicState @ 146ada690

void __cdecl
UE::Net::FGameplayTagContainerNetSerializer::FreeDynamicState
          (FNetSerializationContext *param_1,FNetFreeDynamicStateArgs *param_2)

{
  FNetFreeDynamicStateArgs local_28;
  
  local_28._padding_ = param_2->_padding_;
  local_28._padding_ = param_2->_padding_;
  local_28.Source = param_2->Source;
  local_28._padding_ = (longlong)&StructNetSerializerConfig;
  (*StructNetSerializer->FreeDynamicState)(param_1,&local_28);
  return;
}

// GameplayTagContainerToSerializationHelper @ 146adab70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Net::FGameplayTagContainerNetSerializer::GameplayTagContainerToSerializationHelper
          (FGameplayTagContainerAccessorForNetSerializer *param_1,
          FGameplayTagContainerNetSerializerSerializationHelper *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  UGameplayTagsManager *this;
  uint uVar9;
  ulonglong uVar10;
  ForAnyElementType FVar11;
  ulonglong uVar12;
  FPair *pFVar13;
  FScriptContainerElement *pFVar14;
  FIdentityFunctor local_res8;
  undefined1 local_res18 [16];
  ForAnyElementType local_48;
  undefined8 local_40;
  
  this = UGameplayTagsManager::Get();
  iVar1 = *(int *)&param_1->field_0x8;
  if (0 < iVar1) {
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40 = 0;
    iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar1,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4));
    memset(local_48.Data + (longlong)iVar7 * 0x10,0,(longlong)iVar1 << 4);
    uVar2 = *(uint *)&param_1->field_0x8;
    uVar10 = 0;
    uVar12 = uVar10;
    FVar11.Data = local_48.Data;
    while (uVar9 = (uint)uVar10, uVar9 != uVar2) {
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&param_1->field_0x8) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      lVar3 = *(longlong *)param_1;
      ((FPair *)FVar11.Data)->ArrayIndex = uVar12;
      uVar6 = UGameplayTagsManager::GetNetIndexFromTag
                        (this,(FGameplayTag *)(lVar3 + (longlong)(int)uVar9 * 8));
      ((FPair *)FVar11.Data)->TagIndex = uVar6;
      uVar12 = uVar12 + 1;
      FVar11.Data = FVar11.Data + 0x10;
      uVar10 = (ulonglong)(uVar9 + 1);
    }
    AlgoImpl::
    IntroSortInternal<_UE::Net::FGameplayTagContainerNetSerializer::GameplayTagContainerToSerializationHelper_::__l2::FPair,int,FIdentityFunctor,_UE::Net::FGameplayTagContainerNetSerializer::GameplayTagContainerToSerializationHelper_::__l6::<lambda_1>_>
              ((FPair *)local_48.Data,(int)local_40,local_res8,(<lambda_1>)local_res8);
    TArray<FGameplayTag,TSizedDefaultAllocator<32>_>::SetNum(&param_2->GameplayTags,iVar1,Default);
    lVar3 = *(longlong *)param_1;
    iVar1 = (int)local_40;
    uVar12 = (ulonglong)(int)local_40;
    pFVar14 = (param_2->GameplayTags).AllocatorInstance.Data;
    pFVar13 = (FPair *)(local_48.Data + uVar12 * 0x10);
    FVar11.Data = local_48.Data;
    while( true ) {
      if ((int)uVar12 != iVar1) {
        `TCheckedPointerIterator<`UE::Net::FGameplayTagContainerNetSerializer::GameplayTagContainerToSerializationHelper'::__l2::FPair,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if ((FPair *)FVar11.Data == pFVar13) break;
      *(undefined8 *)pFVar14 = *(undefined8 *)(lVar3 + ((FPair *)FVar11.Data)->ArrayIndex * 8);
      pFVar14 = pFVar14 + 8;
      uVar12 = local_40 & 0xffffffff;
      FVar11.Data = FVar11.Data + 0x10;
    }
    if ((FPair *)local_48.Data != (FPair *)0x0) {
      FMemory::Free(local_48.Data);
    }
  }
  return;
}

// IsEqual @ 146ae2880

bool __cdecl
UE::Net::FGameplayTagContainerNetSerializer::IsEqual
          (FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  longlong *plVar1;
  FGameplayTagContainer *this;
  FGameplayTagContainer *this_00;
  bool bVar2;
  UGameplayTagsManager *pUVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 local_res10 [8];
  longlong *local_78;
  ulonglong local_70;
  void *local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  void *local_48;
  undefined8 local_40;
  FNetIsEqualArgs local_38;
  
  if (param_2->bStateIsQuantized == false) {
    this = (FGameplayTagContainer *)param_2->Source1;
    this_00 = (FGameplayTagContainer *)param_2->Source0;
    if (((this_00->GameplayTags).ArrayNum == (this->GameplayTags).ArrayNum) &&
       (bVar2 = FGameplayTagContainer::HasAllExact(this_00,this), bVar2)) {
      bVar2 = FGameplayTagContainer::HasAllExact(this,this_00);
      return bVar2;
    }
    return false;
  }
  pUVar3 = UGameplayTagsManager::Get();
  if (pUVar3->bUseFastReplication != false) {
    local_38._padding_ = param_2->_padding_;
    local_38._padding_._0_4_ = (undefined4)param_2->_padding_;
    local_38._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
    local_38.Source0 = param_2->Source0;
    local_38._padding_ = (longlong)&StructNetSerializerConfig;
    local_38.Source1 = param_2->Source1;
    local_38.bStateIsQuantized = param_2->bStateIsQuantized;
    local_38._41_3_ = *(undefined3 *)&param_2->field_0x29;
    local_38._44_4_ = *(undefined4 *)&param_2->field_0x2c;
    bVar2 = (*StructNetSerializer->IsEqual)(param_1,&local_38);
    return bVar2;
  }
  local_58 = (longlong *)0x0;
  local_50 = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_78 = (longlong *)0x0;
  local_70 = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_38._padding_ = 0;
  local_38._padding_._0_4_ = 0;
  local_38._padding_ = param_2->_padding_;
  local_38.Source0 = param_2->Source0;
  local_38.Source1 = (ulong64)&local_58;
  Dequantize(param_1,(FNetDequantizeArgs *)&local_38);
  local_38.Source0 = param_2->Source1;
  local_38.Source1 = (ulong64)&local_78;
  Dequantize(param_1,(FNetDequantizeArgs *)&local_38);
  iVar7 = (int)local_70;
  uVar8 = (ulonglong)(int)local_70;
  if ((int)local_50 == (int)local_70) {
    iVar6 = (int)local_50;
    if ((int)local_70 == 0) {
LAB_146ae2a15:
      if (iVar6 == 0) {
LAB_146ae2a70:
        bVar2 = true;
        goto LAB_146ae29c4;
      }
      plVar1 = local_58 + iVar6;
      plVar5 = local_58;
      iVar7 = iVar6;
      while( true ) {
        if (iVar7 != iVar6) {
          `TCheckedPointerIterator<FGameplayTag_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res10);
          uVar8 = local_70 & 0xffffffff;
          iVar7 = (int)local_50;
        }
        if (plVar5 == plVar1) goto LAB_146ae2a70;
        if (local_78 == local_78 + (int)uVar8) break;
        plVar4 = local_78;
        while (*plVar4 != *plVar5) {
          plVar4 = plVar4 + 1;
          if (plVar4 == local_78 + (int)uVar8) goto LAB_146ae29c2;
        }
        plVar5 = plVar5 + 1;
      }
    }
    else {
      plVar1 = local_78 + uVar8;
      plVar5 = local_78;
      while( true ) {
        if ((int)uVar8 != iVar7) {
          `TCheckedPointerIterator<FGameplayTag_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res10);
          uVar8 = local_70 & 0xffffffff;
          iVar6 = (int)local_50;
        }
        if (plVar5 == plVar1) goto LAB_146ae2a15;
        if (local_58 == local_58 + iVar6) break;
        plVar4 = local_58;
        while (*plVar4 != *plVar5) {
          plVar4 = plVar4 + 1;
          if (plVar4 == local_58 + iVar6) goto LAB_146ae29c2;
        }
        plVar5 = plVar5 + 1;
      }
    }
  }
LAB_146ae29c2:
  bVar2 = false;
LAB_146ae29c4:
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if (local_78 != (longlong *)0x0) {
    FMemory::Free(local_78);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free(local_58);
  }
  return bVar2;
}

// Quantize @ 146ae9490

void __cdecl
UE::Net::FGameplayTagContainerNetSerializer::Quantize
          (FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  UGameplayTagsManager *pUVar1;
  FGameplayTagContainerNetSerializerSerializationHelper local_48;
  FNetQuantizeArgs local_38;
  
  pUVar1 = UGameplayTagsManager::Get();
  if (pUVar1->bUseFastReplication == false) {
    local_38._padding_ = param_2->_padding_;
    local_38.Source = param_2->Source;
    local_38._padding_._0_4_ = (undefined4)param_2->_padding_;
    local_38._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
    local_38.Target = param_2->Target;
    local_38._padding_ = (longlong)&StructNetSerializerConfig;
    (*StructNetSerializer->Quantize)(param_1,&local_38);
  }
  else {
    local_48.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.GameplayTags.ArrayNum = 0;
    local_48.GameplayTags.ArrayMax = 0;
    if (param_1->bIsInitializingDefaultState == 0) {
      GameplayTagContainerToSerializationHelper
                ((FGameplayTagContainerAccessorForNetSerializer *)param_2->Source,&local_48);
    }
    local_38._padding_ = param_2->_padding_;
    local_38.Source = (ulong64)&local_48;
    local_38._padding_._0_4_ = (undefined4)param_2->_padding_;
    local_38._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
    local_38.Target = param_2->Target;
    local_38._padding_ = (longlong)&StructNetSerializerConfig;
    (*StructNetSerializer->Quantize)(param_1,&local_38);
    if (local_48.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.GameplayTags.AllocatorInstance.Data);
      return;
    }
  }
  return;
}

// Serialize @ 146aece80

void __cdecl
UE::Net::FGameplayTagContainerNetSerializer::Serialize
          (FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  FNetSerializeArgs local_28;
  
  local_28._padding_ = param_2->_padding_;
  local_28._padding_ = param_2->_padding_;
  local_28.Source = param_2->Source;
  local_28._padding_ = (longlong)&StructNetSerializerConfig;
  (*StructNetSerializer->Serialize)(param_1,&local_28);
  return;
}

// SerializeDelta @ 146aed150

void __cdecl
UE::Net::FGameplayTagContainerNetSerializer::SerializeDelta
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  FNetSerializeDeltaArgs local_38;
  
  local_38._padding_ = param_2->_padding_;
  local_38._padding_ = param_2->_padding_;
  local_38._padding_ = param_2->_padding_;
  local_38._padding_ = (longlong)&StructNetSerializerConfig;
  local_38.Prev = param_2->Prev;
  (*StructNetSerializer->SerializeDelta)(param_1,&local_38);
  return;
}

// Validate @ 146aeff20

bool __cdecl
UE::Net::FGameplayTagContainerNetSerializer::Validate
          (FNetSerializationContext *param_1,FNetValidateArgs *param_2)

{
  int iVar1;
  FGameplayTagContainerAccessorForNetSerializer *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UGameplayTagsManager *pUVar6;
  FGameplayTagContainerNetSerializerSerializationHelper local_38;
  FNetValidateArgs local_28;
  
  pFVar2 = (FGameplayTagContainerAccessorForNetSerializer *)param_2->Source;
  pUVar6 = UGameplayTagsManager::Get();
  iVar1 = pUVar6->NumBitsForContainerSize;
  if (iVar1 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumBitsForContainerSize > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Private\\GameplayTagContainerNetSerializer.cpp"
                       ,0xf3,
                       L"Incorrectly configured GameplayTagsManager with %d bits for container size."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  else if ((iVar1 < 0x20) && (*(uint *)&pFVar2->field_0x8 <= (1 << ((byte)iVar1 & 0x1f)) - 1U)) {
    local_38.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.GameplayTags.ArrayNum = 0;
    local_38.GameplayTags.ArrayMax = 0;
    GameplayTagContainerToSerializationHelper(pFVar2,&local_38);
    local_28._padding_._0_4_ = (undefined4)param_2->_padding_;
    local_28._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
    local_28._padding_._0_4_ = (undefined4)param_2->_padding_;
    local_28._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
    local_28._padding_ = (longlong)&StructNetSerializerConfig;
    local_28.Source = (ulong64)pFVar2;
    bVar4 = (*StructNetSerializer->Validate)(param_1,&local_28);
    if (local_38.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.GameplayTags.AllocatorInstance.Data);
    }
    return bVar4;
  }
  return false;
}

