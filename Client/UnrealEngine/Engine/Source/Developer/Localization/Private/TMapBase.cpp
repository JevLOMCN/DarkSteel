// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Localization
// Functions: 6

// Emplace<FString,FConfigSection_const_&> @ 146b3b500

FConfigSection * __thiscall
TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
::Emplace<FString,FConfigSection_const_&>
          (TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
           *this,FString *param_1,FConfigSection *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  wchar_t *pwVar6;
  TSparseSetElement<TTuple<FString,FConfigSection>_> *pTVar7;
  longlong lVar8;
  int local_res8 [2];
  TPairInitializer<FString_&&,FConfigSection_const_&> local_28;
  FSparseArrayAllocationInfo local_18;
  
  iVar5 = *(int *)&(this->Pairs).Elements.field_0x34;
  local_28.Key = param_1;
  local_28.Value = param_2;
  if (iVar5 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x110,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar5 = iVar5 + -1;
    lVar8 = *(longlong *)&(this->Pairs).Elements;
    iVar1 = *(int *)((longlong)iVar3 * 0x110 + 4 + lVar8);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar1;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x110 + lVar8) = 0xffffffff;
    }
  }
  TSparseArrayBase<272,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<272,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar3);
  pTVar7 = (TSparseSetElement<TTuple<FString,FConfigSection>_> *)0x0;
  if (local_18.Pointer != (TSparseSetElement<TTuple<FString,FConfigSection>_> *)0x0) {
    TPairInitializer<FString_&&,FConfigSection_const_&>::
    operator<FString,FConfigSection>_TTuple<FString,FConfigSection>(&local_28,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x108) = 0xffffffff;
    pTVar7 = local_18.Pointer;
  }
  local_res8[0] = local_18.Index;
  iVar5 = *(int *)&pTVar7->field_0x8 + -1;
  if (*(int *)&pTVar7->field_0x8 == 0) {
    pwVar6 = L"";
    iVar5 = 0;
  }
  else {
    pwVar6 = *(wchar_t **)pTVar7;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar6);
  bVar2 = TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar4,pTVar7,local_res8,(bool *)0x0);
  lVar8 = (longlong)local_res8[0];
  if (!bVar2) {
    TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar4,pTVar7,local_res8[0]);
  }
  return (FConfigSection *)(*(longlong *)&(this->Pairs).Elements + lVar8 * 0x110 + 0x10);
}

// Emplace<FString,FConfigSection> @ 146b3b660

FConfigSection * __thiscall
TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
::Emplace<FString,FConfigSection>
          (TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
           *this,FString *param_1,FConfigSection *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  wchar_t *pwVar6;
  TSparseSetElement<TTuple<FString,FConfigSection>_> *pTVar7;
  longlong lVar8;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar5 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar5 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x110,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar5 = iVar5 + -1;
    lVar8 = *(longlong *)&(this->Pairs).Elements;
    iVar1 = *(int *)((longlong)iVar3 * 0x110 + 4 + lVar8);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar1;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x110 + lVar8) = 0xffffffff;
    }
  }
  TSparseArrayBase<272,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<272,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar3);
  pTVar7 = (TSparseSetElement<TTuple<FString,FConfigSection>_> *)0x0;
  if (local_28.Pointer != (TSparseSetElement<TTuple<FString,FConfigSection>_> *)0x0) {
    *(undefined8 *)local_28.Pointer = 0;
    *(FScriptContainerElement **)local_28.Pointer = (param_1->Data).AllocatorInstance.Data;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)local_28.Pointer + 8) = (param_1->Data).ArrayNum;
    *(int *)((longlong)local_28.Pointer + 0xc) = (param_1->Data).ArrayMax;
    (param_1->Data).ArrayNum = 0;
    (param_1->Data).ArrayMax = 0;
    FConfigSection::FConfigSection((FConfigSection *)((longlong)local_28.Pointer + 0x10),param_2);
    *(undefined4 *)((longlong)local_28.Pointer + 0x108) = 0xffffffff;
    pTVar7 = local_28.Pointer;
  }
  local_res8[0] = local_28.Index;
  iVar5 = *(int *)&pTVar7->field_0x8 + -1;
  if (*(int *)&pTVar7->field_0x8 == 0) {
    pwVar6 = L"";
    iVar5 = 0;
  }
  else {
    pwVar6 = *(wchar_t **)pTVar7;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar6);
  bVar2 = TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar4,pTVar7,local_res8,(bool *)0x0);
  lVar8 = (longlong)local_res8[0];
  if (!bVar2) {
    TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar4,pTVar7,local_res8[0]);
  }
  return (FConfigSection *)(*(longlong *)&(this->Pairs).Elements + lVar8 * 0x110 + 0x10);
}

// FindOrAddImpl<FString_const_&> @ 146b3c280

TMap<FString,FXxHash64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FXxHash64,0>_> *
__thiscall
TMapBase<FString,TMap<FString,FXxHash64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FXxHash64,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FXxHash64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FXxHash64,0>_>,0>_>
::FindOrAddImpl<FString_const_&>
          (TMapBase<FString,TMap<FString,FXxHash64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FXxHash64,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FXxHash64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FXxHash64,0>_>,0>_>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FString *local_res20;
  
  iVar1 = TSet<TTuple<FString,TMap<FString,FXxHash64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FXxHash64,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FXxHash64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FXxHash64,0>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x68 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (TMap<FString,FXxHash64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FXxHash64,0>_>
            *)(lVar2 + 0x10);
  }
  local_res20 = param_2;
  TSet<TTuple<FString,TMap<FString,FXxHash64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FXxHash64,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FXxHash64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FXxHash64,0>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FString_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TMap<FString,FXxHash64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FXxHash64,0>_>
          *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x68 + 0x10);
}

// GenerateValueArray<TSizedDefaultAllocator<32>_> @ 146b3c490

void __thiscall
TMapBase<FString,FLocItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FLocItem,1>_>::
GenerateValueArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FString,FLocItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FLocItem,1>_>
           *this,TArray<FLocItem,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FLocItem *pFVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  FLocItem *pFVar11;
  int iVar12;
  uint *puVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar9 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  DestructItems<FLocItem,int>((FLocItem *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  iVar10 = 0;
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar9,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar3 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar9 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar4 = *puVar13;
    while (uVar4 == 0) {
      lVar8 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      TStack_40.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_146b3c570;
      uVar4 = puVar13[lVar8 + 1];
    }
    uVar9 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar9 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar8 + -1 + iVar12;
    if (iVar3 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar3;
    }
  }
LAB_146b3c570:
  TStack_40._padding_ = CONCAT44(uVar9,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < iVar3) {
    do {
      pFVar5 = (FLocItem *)(param_1->AllocatorInstance).Data;
      pFVar11 = (FLocItem *)
                (*(longlong *)&(this->Pairs).Elements + 0x10 +
                (longlong)TStack_40.CurrentBitIndex * 0x38);
      if (((pFVar5 <= pFVar11) && (pFVar11 < pFVar5 + *piVar1)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar10 = param_1->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar10 + 1;
      FLocItem::FLocItem((FLocItem *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 0x20),
                         pFVar11);
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// Find @ 146b5ea20

FXxHash64 * __thiscall
TMapBase<FString,FXxHash64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FXxHash64,0>_>::
Find(TMapBase<FString,FXxHash64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FXxHash64,0>_>
     *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  FXxHash64 *pFVar6;
  
  iVar2 = (param_1->Data).ArrayNum;
  if (iVar2 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar5);
  iVar2 = TSet<TTuple<FString,FXxHash64>,TDefaultMapHashableKeyFuncs<FString,FXxHash64,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x20 + *(longlong *)&(this->Pairs).Elements;
    pFVar6 = (FXxHash64 *)0x0;
    if (lVar4 != 0) {
      pFVar6 = (FXxHash64 *)(lVar4 + 0x10);
    }
    return pFVar6;
  }
  return (FXxHash64 *)0x0;
}

// Remove @ 146b841e0

int __thiscall
TMapBase<FString,TSharedPtr<FLocMetadataValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>_>
::Remove(TMapBase<FString,TSharedPtr<FLocMetadataValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>_>
         *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  wchar_t *pwVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    iVar2 = (param_1->Data).ArrayNum;
    if (iVar2 == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    iVar3 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
    iVar2 = TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
            ::RemoveImpl<FString>(&this->Pairs,uVar1,param_1);
    return iVar2;
  }
  return 0;
}

