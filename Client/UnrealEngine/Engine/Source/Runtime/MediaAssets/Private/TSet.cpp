// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaAssets
// Functions: 14

// Emplace<TKeyInitializer<TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>_&>_> @ 146c185f0

FSetElementId __thiscall
TSet<TTuple<TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>,TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>,TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Emplace<TKeyInitializer<TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>_&>_>
          (TSet<TTuple<TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>,TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>,TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,TKeyInitializer<TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>_&> *param_1,
          bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  uint uVar9;
  int iVar10;
  bool *in_R9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x20 + 4 + lVar3);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar5);
  if (local_38.Pointer ==
      (TSparseSetElement<TTuple<TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>,TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_>_>_>
       *)0x0) {
    local_38.Pointer =
         (TSparseSetElement<TTuple<TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>,TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_>_>_>
          *)0x0;
  }
  else {
    *(undefined8 *)local_38.Pointer = **(undefined8 **)param_2;
    *(undefined8 *)((longlong)local_38.Pointer + 8) = 0;
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = 0;
    DestructItems<TWeakPtr<FMediaTextureTrackerObject,1>,int>
              ((TWeakPtr<FMediaTextureTrackerObject,1> *)0x0,0);
    *(undefined4 *)((longlong)local_38.Pointer + 0x18) = 0xffffffff;
  }
  local_res8[0] = local_38.Index;
  uVar9 = (uint)((ulonglong)*(undefined8 *)local_38.Pointer >> 0x20) ^
          (uint)*(undefined8 *)local_38.Pointer;
  bVar4 = TryReplaceExisting(this,uVar9,local_38.Pointer,local_res8,in_R9);
  if (!bVar4) {
    uVar7 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar10 <= this->HashSize)) {
      uVar9 = this->HashSize - 1U & uVar9;
      *(uint *)&((TSparseSetElement<TTuple<TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>,TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_>_>_>
                  *)local_38.Pointer)->field_0x1c = uVar9;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar9;
      *(undefined4 *)
       &((TSparseSetElement<TTuple<TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>,TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_>_>_>
          *)local_38.Pointer)->field_0x18 = *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
      *(int *)((longlong)FVar8 + uVar6 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FName_const_&,FVariant_&>_> @ 146c187b0

FSetElementId __thiscall
TSet<TTuple<FName,FVariant>,TDefaultMapHashableKeyFuncs<FName,FVariant,0>,FDefaultSetAllocator>::
Emplace<TPairInitializer<FName_const_&,FVariant_&>_>
          (TSet<TTuple<FName,FVariant>,TDefaultMapHashableKeyFuncs<FName,FVariant,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FName_const_&,FVariant_&> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  FVariant *pFVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  int iVar11;
  char *in_R9;
  bool bVar12;
  FSparseArrayAllocationInfo local_48;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar10 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar10 = iVar10 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x28);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar5);
  if (local_48.Pointer != (longlong *)0x0) {
    pFVar3 = *(FVariant **)(param_2 + 8);
    *(longlong *)local_48.Pointer = **(longlong **)param_2;
    FVariant::FVariant((FVariant *)((longlong)local_48.Pointer + 8),pFVar3);
    *(undefined4 *)((longlong)local_48.Pointer + 0x20) = 0xffffffff;
  }
  lVar2 = *(longlong *)local_48.Pointer;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)lVar2);
  iVar10 = *(int *)&(this->Elements).field_0x8;
  bVar12 = false;
  iVar5 = *(int *)&(this->Elements).field_0x34;
  uVar6 = uVar6 + (int)((ulonglong)lVar2 >> 0x20);
  if ((iVar10 - iVar5 != 1) && (iVar10 != iVar5)) {
    FVar9 = (this->Hash).SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar10 = *(int *)((longlong)FVar9 + (ulonglong)(this->HashSize - 1U & uVar6) * 4);
    if (iVar10 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)(lVar2 + (longlong)iVar10 * 0x28) == *(longlong *)local_48.Pointer) {
          bVar12 = iVar10 != -1;
          if (bVar12) {
            pvVar4 = *(void **)(lVar2 + 0x10 + (longlong)iVar10 * 0x28);
            if (pvVar4 != (void *)0x0) {
              FMemory::Free(pvVar4);
            }
            memmove((void *)(lVar2 + (longlong)iVar10 * 0x28),local_48.Pointer,0x20);
            TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar10;
          }
          break;
        }
        iVar10 = *(int *)(lVar2 + 0x20 + (longlong)iVar10 * 0x28);
      } while (iVar10 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar12;
  }
  if (bVar12 == false) {
    uVar8 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar8) {
      uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar11 <= this->HashSize)) {
      uVar6 = this->HashSize - 1U & uVar6;
      *(uint *)((longlong)local_48.Pointer + 0x24) = uVar6;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      *(undefined4 *)((longlong)local_48.Pointer + 0x20) =
           *(undefined4 *)((longlong)FVar9 + uVar7 * 4);
      *(int *)((longlong)FVar9 + uVar7 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar11;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FString_const_&,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>_&>_> @ 146c189f0

FSetElementId __thiscall
TSet<TTuple<FString,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<FString_const_&,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>_&>_>
          (TSet<TTuple<FString,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FString_const_&,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>_&>
                 *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy> *pTVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  wchar_t *pwVar9;
  ForElementType<FSetElementId> FVar10;
  int iVar11;
  FString *_Src;
  char *in_R9;
  undefined8 *_Dst;
  bool bVar12;
  FSparseArrayAllocationInfo local_48;
  
  iVar6 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar6 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar6 = iVar6 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x30);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x30) = 0xffffffff;
    }
  }
  TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  _Src = (FString *)0x0;
  iVar6 = 0;
  if (local_48.Pointer != (FString *)0x0) {
    pTVar3 = *(TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>
               **)(param_2 + 8);
    ::FString::FString(local_48.Pointer,*(FString **)param_2);
    TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>::
    TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>
              ((TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>
                *)((longlong)local_48.Pointer + 0x10),pTVar3);
    (((FString *)((longlong)local_48.Pointer + 0x20))->Data).ArrayNum = -1;
    _Src = local_48.Pointer;
  }
  iVar4 = (_Src->Data).ArrayNum;
  if (iVar4 == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(_Src->Data).AllocatorInstance.Data;
    iVar6 = iVar4 + -1;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar9);
  bVar12 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar6 = FindIndexByHash<FString>(this,uVar5,_Src);
    bVar12 = iVar6 != -1;
    if (bVar12) {
      _Dst = (undefined8 *)((longlong)iVar6 * 0x30 + *(longlong *)&this->Elements);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(_Dst + 2));
      if ((void *)_Dst[3] != (void *)0x0) {
        FMemory::Free((void *)_Dst[3]);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)(_Dst + 2));
      if ((void *)*_Dst != (void *)0x0) {
        FMemory::Free((void *)*_Dst);
      }
      memmove(_Dst,_Src,0x28);
      TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      local_48.Index = iVar6;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar12;
  }
  if (bVar12 == false) {
    uVar8 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar8) {
      uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar11 <= this->HashSize)) {
      uVar5 = this->HashSize - 1U & uVar5;
      _Src[2].Data.ArrayMax = uVar5;
      FVar10 = (this->Hash).SecondaryData;
      if (FVar10 == (ForElementType<FSetElementId>)0x0) {
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      _Src[2].Data.ArrayNum = *(int *)((longlong)FVar10 + uVar7 * 4);
      *(int *)((longlong)FVar10 + uVar7 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar11;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FString_const_&,FMediaMetadataItemsBPT_const_&>_> @ 146c18c40

FSetElementId __thiscall
TSet<TTuple<FString,FMediaMetadataItemsBPT>,TDefaultMapHashableKeyFuncs<FString,FMediaMetadataItemsBPT,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FString_const_&,FMediaMetadataItemsBPT_const_&>_>
          (TSet<TTuple<FString,FMediaMetadataItemsBPT>,TDefaultMapHashableKeyFuncs<FString,FMediaMetadataItemsBPT,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FString_const_&,FMediaMetadataItemsBPT_const_&> *param_1,
          bool *param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  wchar_t *pwVar8;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  int iVar12;
  bool *in_R9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  TSparseSetElement<TTuple<FString,FMediaMetadataItemsBPT>_> *pTVar11;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  iVar12 = 1;
  if (iVar10 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar10 = iVar10 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x28);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  pTVar11 = (TSparseSetElement<TTuple<FString,FMediaMetadataItemsBPT>_> *)0x0;
  iVar10 = 0;
  if (local_38.Pointer != (TSparseSetElement<TTuple<FString,FMediaMetadataItemsBPT>_> *)0x0) {
    TPairInitializer<FString_const_&,FMediaMetadataItemsBPT_const_&>::
    operator<FString,FMediaMetadataItemsBPT>_TTuple<FString,FMediaMetadataItemsBPT>
              ((TPairInitializer<FString_const_&,FMediaMetadataItemsBPT_const_&> *)param_2,
               local_38.Pointer);
    *(undefined4 *)((longlong)local_38.Pointer + 0x20) = 0xffffffff;
    pTVar11 = local_38.Pointer;
  }
  local_res8[0] = local_38.Index;
  if (*(int *)&pTVar11->field_0x8 == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = *(wchar_t **)pTVar11;
    iVar10 = *(int *)&pTVar11->field_0x8 + -1;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar8);
  bVar3 = TryReplaceExisting(this,uVar5,pTVar11,local_res8,in_R9);
  if (!bVar3) {
    uVar7 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar12 <= this->HashSize)) {
      uVar5 = this->HashSize - 1U & uVar5;
      *(uint *)&pTVar11->field_0x24 = uVar5;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)&pTVar11->field_0x20 = *(undefined4 *)((longlong)FVar9 + uVar6 * 4);
      *(int *)((longlong)FVar9 + uVar6 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar12;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// FindIndexByHash<TWeakObjectPtr<UMediaTexture_const_,FWeakObjectPtr>_> @ 146c19700

int __thiscall
TSet<TTuple<TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>,TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>,TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::FindIndexByHash<TWeakObjectPtr<UMediaTexture_const_,FWeakObjectPtr>_>
          (TSet<TTuple<TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>,TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>,TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,TWeakObjectPtr<UMediaTexture_const_,FWeakObjectPtr> *param_2)

{
  int iVar1;
  bool bVar2;
  ForElementType<FSetElementId> FVar3;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar3 = (this->Hash).SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar1 = *(int *)((longlong)FVar3 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
        iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x20 + 0x18 + *(longlong *)&this->Elements))
    {
      local_res8 = param_2->WeakPtr;
      local_res20 = *(FWeakObjectPtr *)((longlong)iVar1 * 0x20 + *(longlong *)&this->Elements);
      bVar2 = TWeakObjectPtr<UMediaTexture_const_,FWeakObjectPtr>::
              UEOpEquals<UMediaTexture_const_,bool>
                        ((TWeakObjectPtr<UMediaTexture_const_,FWeakObjectPtr> *)&local_res20,
                         (TWeakObjectPtr<UMediaTexture_const_,FWeakObjectPtr> *)&local_res8);
      if (bVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}

// FindIndexByHash<FString> @ 146c197b0

int __thiscall
TSet<TTuple<FString,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
::FindIndexByHash<FString>
          (TSet<TTuple<FString,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ForElementType<FSetElementId> FVar5;
  bool bVar6;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar5 = (this->Hash).SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar1 = *(int *)((longlong)FVar5 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    while (iVar1 != -1) {
      iVar3 = (param_2->Data).ArrayNum;
      lVar4 = (longlong)iVar1;
      iVar2 = *(int *)(*(longlong *)&this->Elements + 8 + lVar4 * 0x30);
      if (iVar2 == iVar3) {
        if (iVar2 < 2) {
          return iVar1;
        }
        iVar3 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)(*(longlong *)&this->Elements + lVar4 * 0x30),
                           (wchar_t *)(param_2->Data).AllocatorInstance.Data);
        bVar6 = iVar3 == 0;
      }
      else {
        bVar6 = iVar2 + iVar3 == 1;
      }
      if (bVar6) {
        return iVar1;
      }
      iVar1 = *(int *)(*(longlong *)&this->Elements + 0x28 + lVar4 * 0x30);
    }
  }
  return -1;
}

// Move<TSet<TTuple<FString,FMediaMetadataItemsBPT>,TDefaultMapHashableKeyFuncs<FString,FMediaMetadataItemsBPT,0>,FDefaultSetAllocator>_> @ 146c1ad90

void __cdecl
TSet<TTuple<FString,FMediaMetadataItemsBPT>,TDefaultMapHashableKeyFuncs<FString,FMediaMetadataItemsBPT,0>,FDefaultSetAllocator>
::
Move<TSet<TTuple<FString,FMediaMetadataItemsBPT>,TDefaultMapHashableKeyFuncs<FString,FMediaMetadataItemsBPT,0>,FDefaultSetAllocator>_>
          (TSet<TTuple<FString,FMediaMetadataItemsBPT>,TDefaultMapHashableKeyFuncs<FString,FMediaMetadataItemsBPT,0>,FDefaultSetAllocator>
           *param_1,
          TSet<TTuple<FString,FMediaMetadataItemsBPT>,TDefaultMapHashableKeyFuncs<FString,FMediaMetadataItemsBPT,0>,FDefaultSetAllocator>
          *param_2)

{
  undefined1 *_Src;
  undefined1 *_Dst;
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  
  if (param_1 != param_2) {
    TSparseArray<TSparseSetElement<TTuple<FString,FMediaMetadataItemsBPT>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&param_1->Elements,0,*(int *)&(param_1->Elements).field_0x8);
    if (*(void **)&param_1->Elements != (void *)0x0) {
      FMemory::Free(*(void **)&param_1->Elements);
    }
    _Src = &(param_2->Elements).field_0x10;
    *(undefined8 *)&param_1->Elements = *(undefined8 *)&param_2->Elements;
    _Dst = &(param_1->Elements).field_0x10;
    *(undefined8 *)&param_2->Elements = 0;
    *(undefined4 *)&(param_1->Elements).field_0x8 = *(undefined4 *)&(param_2->Elements).field_0x8;
    *(undefined4 *)&(param_1->Elements).field_0xc = *(undefined4 *)&(param_2->Elements).field_0xc;
    *(undefined8 *)&(param_2->Elements).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_2->Elements).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar1 = *(void **)&(param_1->Elements).field_0x20;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      *(undefined8 *)&(param_1->Elements).field_0x20 =
           *(undefined8 *)&(param_2->Elements).field_0x20;
      *(undefined8 *)&(param_2->Elements).field_0x20 = 0;
      *(undefined4 *)&(param_1->Elements).field_0x28 =
           *(undefined4 *)&(param_2->Elements).field_0x28;
      *(undefined4 *)&(param_1->Elements).field_0x2c =
           *(undefined4 *)&(param_2->Elements).field_0x2c;
      *(undefined8 *)&(param_2->Elements).field_0x28 = 0;
    }
    *(undefined4 *)&(param_1->Elements).field_0x30 = *(undefined4 *)&(param_2->Elements).field_0x30;
    *(undefined4 *)&(param_1->Elements).field_0x34 = *(undefined4 *)&(param_2->Elements).field_0x34;
    *(undefined4 *)&(param_2->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_2->Elements).field_0x34 = 0;
  }
  if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) {
    *(undefined4 *)(param_1->Hash).InlineData = *(undefined4 *)(param_2->Hash).InlineData;
  }
  FVar2 = (param_1->Hash).SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  (param_1->Hash).SecondaryData = (param_2->Hash).SecondaryData;
  (param_2->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  param_1->HashSize = param_2->HashSize;
  param_2->HashSize = 0;
  return;
}

// RemoveImpl<FString> @ 146c1b5f0

int __thiscall
TSet<TTuple<FString,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
::RemoveImpl<FString>
          (TSet<TTuple<FString,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  longlong lVar8;
  uint *puVar9;
  undefined1 *puVar10;
  bool bVar11;
  
  FVar6 = (this->Hash).SecondaryData;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar7 = *(uint *)((longlong)FVar6 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar7 == 0xffffffff) {
    return 0;
  }
  while( true ) {
    lVar3 = *(longlong *)&this->Elements;
    iVar5 = (param_2->Data).ArrayNum;
    lVar8 = (longlong)(int)uVar7 * 0x30;
    iVar1 = *(int *)(lVar3 + 8 + lVar8);
    if (iVar1 == iVar5) break;
    bVar11 = iVar1 + iVar5 == 1;
LAB_146c1b674:
    if (bVar11) goto LAB_146c1b69a;
    uVar7 = *(uint *)(lVar3 + 0x28 + lVar8);
    if (uVar7 == 0xffffffff) {
      return 0;
    }
  }
  if (1 < iVar1) {
    iVar5 = FGenericPlatformStricmp::Stricmp
                      (*(wchar_t **)(lVar3 + lVar8),
                       (wchar_t *)(param_2->Data).AllocatorInstance.Data);
    bVar11 = iVar5 == 0;
    goto LAB_146c1b674;
  }
LAB_146c1b69a:
  if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)&(this->Elements).field_0x28)) {
    puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar10 + (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar7 & 0x1f) & 1) != 0) goto LAB_146c1b6fa;
  }
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("Elements.IsValidIndex(ElementIndex)",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                      ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar11) {
    pcVar4 = (code *)swi(3);
    iVar5 = (*pcVar4)();
    return iVar5;
  }
LAB_146c1b6fa:
  FVar6 = (this->Hash).SecondaryData;
  lVar8 = *(longlong *)&this->Elements + lVar8;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar9 = (uint *)((longlong)FVar6 + (longlong)*(int *)(lVar8 + 0x2c) * 4);
  while( true ) {
    uVar2 = *puVar9;
    if ((uVar2 == 0xffffffff) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("NextElementIndex != INDEX_NONE",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                            ,0x2b5,L"Corrupt hash"), bVar11)) break;
    if (uVar2 == uVar7) {
      *puVar9 = *(uint *)(lVar8 + 0x28);
      TSparseArray<TSparseSetElement<TTuple<FString,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar7,1);
      TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar7,1);
      return 1;
    }
    puVar9 = (uint *)(*(longlong *)&this->Elements + 0x28 + (longlong)(int)uVar2 * 0x30);
  }
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}

// Rehash @ 146c31960

void __thiscall
TSet<TTuple<TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>,TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>,TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>,TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>,TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  undefined8 *puVar8;
  uint *puVar9;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar7 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar7 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar4 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_146c31a3c;
        uVar7 = puVar9[lVar4 + 1];
      }
      uStack_54 = -uVar7 & uVar7;
      uVar5 = (ulonglong)uStack_54 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iStack_44 = (int)lVar4 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_146c31a3c:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        puVar8 = (undefined8 *)
                 ((longlong)local_30.CurrentBitIndex * 0x20 + *(longlong *)&this->Elements);
        uVar7 = ((uint)((ulonglong)*puVar8 >> 0x20) ^ (uint)*puVar8) & *piVar1 - 1U;
        *(uint *)((longlong)puVar8 + 0x1c) = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(puVar8 + 3) = *(undefined4 *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 146c31b00

void __thiscall
TSet<TTuple<FName,FVariant>,TDefaultMapHashableKeyFuncs<FName,FVariant,0>,FDefaultSetAllocator>::
Rehash(TSet<TTuple<FName,FVariant>,TDefaultMapHashableKeyFuncs<FName,FVariant,0>,FDefaultSetAllocator>
       *this)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  uint *puVar9;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_40.Array;
      }
      uVar5 = *puVar9;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar6 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_146c31bd7;
        uVar5 = puVar9[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_64 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_54 = (int)lVar6 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_146c31bd7:
        iStack_54 = iVar2;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar2) {
      do {
        iVar2 = local_40.CurrentBitIndex;
        uVar3 = *(undefined8 *)
                 (*(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x28);
        lVar6 = *(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x28;
        uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar5 = *piVar1 - 1U & uVar5 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)(lVar6 + 0x24) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(lVar6 + 0x20) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 146c31cb0

void __thiscall
TSet<TTuple<FString,FMediaMetadataItemsBPT>,TDefaultMapHashableKeyFuncs<FString,FMediaMetadataItemsBPT,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FString,FMediaMetadataItemsBPT>,TDefaultMapHashableKeyFuncs<FString,FMediaMetadataItemsBPT,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  ForElementType<FSetElementId> FVar11;
  uint *puVar12;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar7 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar7 != 0) {
      puVar12 = *(uint **)&(this->Elements).field_0x20;
      if (puVar12 == (uint *)0x0) {
        puVar12 = (uint *)local_40.Array;
      }
      uVar6 = *puVar12;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar6 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar9 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_146c31d87;
        uVar6 = puVar12[lVar9 + 1];
      }
      uStack_64 = -uVar6 & uVar6;
      uVar8 = (ulonglong)uStack_64 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iStack_54 = (int)lVar9 + -1 + iStack_50;
      if (iVar7 < iStack_54) {
LAB_146c31d87:
        iStack_54 = iVar7;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar7) {
      do {
        iVar5 = local_40.CurrentBitIndex;
        puVar2 = (undefined8 *)
                 (*(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x28);
        iVar3 = *(int *)(*(longlong *)&this->Elements + 8 +
                        (longlong)local_40.CurrentBitIndex * 0x28);
        iVar7 = iVar3 + -1;
        if (iVar3 == 0) {
          pwVar10 = L"";
          iVar7 = 0;
        }
        else {
          pwVar10 = (wchar_t *)*puVar2;
        }
        uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar10);
        uVar6 = *piVar1 - 1U & uVar6;
        *(uint *)((longlong)puVar2 + 0x24) = uVar6;
        FVar4 = (this->Hash).SecondaryData;
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar11 = FVar4;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar6;
        *(undefined4 *)(puVar2 + 4) = *(undefined4 *)((longlong)FVar11 + uVar8 * 4);
        *(int *)((longlong)FVar11 + uVar8 * 4) = iVar5;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 146c31e60

void __thiscall
TSet<TTuple<FString,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FString,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  ForElementType<FSetElementId> FVar9;
  undefined8 *puVar10;
  uint *puVar11;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar5 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar5 != 0) {
      puVar11 = *(uint **)&(this->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_40.Array;
      }
      uVar4 = *puVar11;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar4 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar7 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_146c31f37;
        uVar4 = puVar11[lVar7 + 1];
      }
      uStack_64 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_64 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_54 = (int)lVar7 + -1 + iStack_50;
      if (iVar5 < iStack_54) {
LAB_146c31f37:
        iStack_54 = iVar5;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar5) {
      do {
        iVar3 = local_40.CurrentBitIndex;
        puVar10 = (undefined8 *)
                  (*(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x30);
        iVar5 = *(int *)(puVar10 + 1) + -1;
        if (*(int *)(puVar10 + 1) == 0) {
          pwVar8 = L"";
          iVar5 = 0;
        }
        else {
          pwVar8 = (wchar_t *)*puVar10;
        }
        uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar8);
        uVar4 = *piVar1 - 1U & uVar4;
        *(uint *)((longlong)puVar10 + 0x2c) = uVar4;
        FVar2 = (this->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar2;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar10 + 5) = *(undefined4 *)((longlong)FVar9 + uVar6 * 4);
        *(int *)((longlong)FVar9 + uVar6 * 4) = iVar3;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// TryReplaceExisting @ 146c38e50

bool __thiscall
TSet<TTuple<TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>,TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>,TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>,TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>,TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>,TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_>_>_>
          *param_2,int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  void *_Dst;
  uint uVar12;
  bool bVar13;
  FWeakObjectPtr local_res8;
  
  bVar13 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    local_res8.ObjectIndex = *(int *)&param_2->field_0x0;
    local_res8.ObjectSerialNumber = *(int *)&param_2->field_0x4;
    iVar9 = FindIndexByHash<TWeakObjectPtr<UMediaTexture_const_,FWeakObjectPtr>_>
                      (this,param_1,
                       (TWeakObjectPtr<UMediaTexture_const_,FWeakObjectPtr> *)&local_res8);
    bVar13 = iVar9 != -1;
    if (bVar13) {
      _Dst = (void *)((longlong)iVar9 * 0x20 + *(longlong *)&this->Elements);
      DestructItems<TWeakPtr<FMediaTextureTrackerObject,1>,int>
                (*(TWeakPtr<FMediaTextureTrackerObject,1> **)((longlong)_Dst + 8),
                 *(int *)((longlong)_Dst + 0x10));
      if (*(void **)((longlong)_Dst + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)_Dst + 8));
      }
      memmove(_Dst,param_2,0x18);
      iVar3 = *param_3;
      lVar4 = *(longlong *)&this->Elements;
      puVar1 = &(this->Elements).field_0x10;
      bVar6 = (byte)iVar3 & 0x1f;
      uVar12 = 1 << bVar6 | 1U >> 0x20 - bVar6;
      if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
      lVar2 = (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = puVar1;
      }
      if (((*(uint *)(puVar11 + lVar2) & uVar12) == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      if (*(int *)&(this->Elements).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(this->Elements).field_0x30 * 0x20 + lVar4) = iVar3;
      }
      uVar10 = 0xffffffff;
      *(undefined4 *)((longlong)iVar3 * 0x20 + lVar4) = 0xffffffff;
      if (0 < *(int *)&(this->Elements).field_0x34) {
        uVar10 = *(undefined4 *)&(this->Elements).field_0x30;
      }
      *(undefined4 *)((longlong)iVar3 * 0x20 + 4 + lVar4) = uVar10;
      puVar11 = &(this->Elements).field_0x34;
      *(int *)puVar11 = *(int *)puVar11 + 1;
      *(int *)&(this->Elements).field_0x30 = iVar3;
      if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = puVar1;
      }
      *(uint *)(puVar11 + lVar2) = *(uint *)(puVar11 + lVar2) & ~uVar12;
      *param_3 = iVar9;
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar13;
  }
  return bVar13;
}

// TryReplaceExisting @ 146c39050

bool __thiscall
TSet<TTuple<FString,FMediaMetadataItemsBPT>,TDefaultMapHashableKeyFuncs<FString,FMediaMetadataItemsBPT,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FString,FMediaMetadataItemsBPT>,TDefaultMapHashableKeyFuncs<FString,FMediaMetadataItemsBPT,0>,FDefaultSetAllocator>
           *this,uint param_1,TSparseSetElement<TTuple<FString,FMediaMetadataItemsBPT>_> *param_2,
          int *param_3,bool *param_4)

{
  undefined8 *_Dst;
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ForElementType<FSetElementId> FVar5;
  bool bVar6;
  
  iVar2 = *(int *)&(this->Elements).field_0x8;
  bVar6 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  if ((iVar2 - iVar3 != 1) && (iVar2 != iVar3)) {
    FVar5 = (this->Hash).SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar2 = *(int *)((longlong)FVar5 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    while (iVar2 != -1) {
      iVar3 = *(int *)(*(longlong *)&this->Elements + 8 + (longlong)iVar2 * 0x28);
      lVar1 = (longlong)iVar2 * 0x28;
      if (iVar3 == *(int *)&param_2->field_0x8) {
        if (1 < iVar3) {
          iVar3 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(*(longlong *)&this->Elements + lVar1),
                             *(wchar_t **)param_2);
          bVar6 = iVar3 == 0;
          goto LAB_146c390e9;
        }
LAB_146c3912a:
        lVar4 = (longlong)iVar2;
        bVar6 = true;
        lVar1 = *(longlong *)&this->Elements;
        _Dst = (undefined8 *)(lVar1 + lVar4 * 0x28);
        DestructItems<FMediaMetadataItemBPT,int>
                  (*(FMediaMetadataItemBPT **)(lVar1 + 0x10 + lVar4 * 0x28),
                   *(int *)(lVar1 + 0x18 + lVar4 * 0x28));
        if ((void *)_Dst[2] != (void *)0x0) {
          FMemory::Free((void *)_Dst[2]);
        }
        if ((void *)*_Dst != (void *)0x0) {
          FMemory::Free((void *)*_Dst);
        }
        memmove(_Dst,param_2,0x20);
        TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::RemoveAtUninitialized
                  ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)this,*param_3,1);
        *param_3 = iVar2;
        goto LAB_146c39104;
      }
      bVar6 = iVar3 + *(int *)&param_2->field_0x8 == 1;
LAB_146c390e9:
      if (bVar6) goto LAB_146c3912a;
      iVar2 = *(int *)(*(longlong *)&this->Elements + 0x20 + lVar1);
    }
    bVar6 = false;
  }
LAB_146c39104:
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar6;
  }
  return bVar6;
}

