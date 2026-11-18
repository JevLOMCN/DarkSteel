// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeNodes
// Functions: 25

// Emplace<TPairInitializer<FString_&&,unsigned_char_&&>_> @ 14e47f240

FSetElementId __thiscall
TSet<TTuple<FString,unsigned_char>,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FString_&&,unsigned_char_&&>_>
          (TSet<TTuple<FString,unsigned_char>,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FString_&&,unsigned_char_&&> *param_1,bool *param_2)

{
  undefined1 *puVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  wchar_t *pwVar8;
  ForElementType<FSetElementId> FVar9;
  char cVar10;
  longlong lVar11;
  undefined8 *puVar12;
  char *in_R9;
  int iVar13;
  int iVar14;
  undefined8 *_Dst;
  bool bVar15;
  FSparseArrayAllocationInfo local_48;
  
  iVar5 = *(int *)&(this->Elements).field_0x34;
  iVar14 = 1;
  if (iVar5 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    lVar11 = *(longlong *)&this->Elements;
    iVar13 = *(int *)((longlong)iVar3 * 0x20 + 4 + lVar11);
    iVar5 = iVar5 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar13;
    *(int *)&(this->Elements).field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar13 * 0x20 + lVar11) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar3);
  puVar12 = (undefined8 *)0x0;
  iVar5 = 0;
  if (local_48.Pointer != (undefined8 *)0x0) {
    puVar12 = *(undefined8 **)param_2;
    puVar1 = *(undefined1 **)(param_2 + 8);
    *(undefined8 *)local_48.Pointer = 0;
    *(undefined8 *)local_48.Pointer = *puVar12;
    *puVar12 = 0;
    *(undefined4 *)((longlong)local_48.Pointer + 8) = *(undefined4 *)(puVar12 + 1);
    *(undefined4 *)((longlong)local_48.Pointer + 0xc) = *(undefined4 *)((longlong)puVar12 + 0xc);
    puVar12[1] = 0;
    *(undefined1 *)((longlong)local_48.Pointer + 0x10) = *puVar1;
    *(undefined4 *)((longlong)local_48.Pointer + 0x18) = 0xffffffff;
    puVar12 = local_48.Pointer;
  }
  if (*(int *)(puVar12 + 1) == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)*puVar12;
    iVar5 = *(int *)(puVar12 + 1) + -1;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar8);
  iVar5 = *(int *)&(this->Elements).field_0x8;
  cVar10 = '\0';
  iVar3 = *(int *)&(this->Elements).field_0x34;
  iVar13 = local_48.Index;
  if ((iVar5 - iVar3 != 1) && (iVar5 != iVar3)) {
    FVar9 = (this->Hash).SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar13 = *(int *)((longlong)FVar9 + (ulonglong)(this->HashSize - 1U & uVar4) * 4);
    while (iVar13 != -1) {
      lVar11 = (longlong)iVar13 * 0x20;
      iVar5 = *(int *)(*(longlong *)&this->Elements + 8 + lVar11);
      if (iVar5 == *(int *)(puVar12 + 1)) {
        if (1 < iVar5) {
          iVar5 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(*(longlong *)&this->Elements + lVar11),
                             (wchar_t *)*puVar12);
          bVar15 = iVar5 == 0;
          goto LAB_14e47f3c0;
        }
LAB_14e47f427:
        cVar10 = '\x01';
        _Dst = (undefined8 *)((longlong)iVar13 * 0x20 + *(longlong *)&this->Elements);
        pvVar2 = (void *)*_Dst;
        if (pvVar2 != (void *)0x0) {
          FMemory::Free(pvVar2);
        }
        memmove(_Dst,puVar12,0x18);
        TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::RemoveAtUninitialized
                  ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)this,local_48.Index,1);
        goto LAB_14e47f3dd;
      }
      bVar15 = iVar5 + *(int *)(puVar12 + 1) == 1;
LAB_14e47f3c0:
      if (bVar15) goto LAB_14e47f427;
      iVar13 = *(int *)(*(longlong *)&this->Elements + 0x18 + lVar11);
    }
    cVar10 = '\0';
    iVar13 = local_48.Index;
  }
LAB_14e47f3dd:
  if (in_R9 != (char *)0x0) {
    *in_R9 = cVar10;
  }
  if (cVar10 == '\0') {
    uVar7 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar14 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar14 <= this->HashSize)) {
      uVar4 = this->HashSize - 1U & uVar4;
      *(uint *)((longlong)puVar12 + 0x1c) = uVar4;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar4;
      *(undefined4 *)(puVar12 + 3) = *(undefined4 *)((longlong)FVar9 + uVar6 * 4);
      *(int *)((longlong)FVar9 + uVar6 * 4) = iVar13;
    }
    else {
      this->HashSize = iVar14;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = iVar13;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_&&>_> @ 14e47f4d0

FSetElementId __thiscall
TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_&&>_>
          (TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_&&>
                 *param_1,bool *param_2)

{
  undefined8 *_Dst;
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  wchar_t *pwVar7;
  TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_>_>
  *_Src;
  char *in_R9;
  bool bVar8;
  FSparseArrayAllocationInfo local_38;
  
  iVar6 = *(int *)&(this->Elements).field_0x34;
  if (iVar6 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x48,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar6 = iVar6 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x48);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x48) = 0xffffffff;
    }
  }
  TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  _Src = (TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_>_>
          *)0x0;
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_>_>
       *)0x0) {
    TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_&&>
    ::
    operator<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_>_TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_>
              ((TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_&&>
                *)param_2,local_38.Pointer);
    *(undefined4 *)((longlong)local_38.Pointer + 0x40) = 0xffffffff;
    _Src = local_38.Pointer;
  }
  iVar6 = *(int *)&_Src->field_0x8 + -1;
  if (*(int *)&_Src->field_0x8 == 0) {
    pwVar7 = L"";
    iVar6 = 0;
  }
  else {
    pwVar7 = *(wchar_t **)_Src;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
  bVar8 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar6 = FindIndexByHash<FString>(this,uVar5,(FString *)_Src);
    bVar8 = iVar6 != -1;
    if (bVar8) {
      _Dst = (undefined8 *)(*(longlong *)&this->Elements + (longlong)iVar6 * 0x48);
      pvVar3 = *(void **)(*(longlong *)&this->Elements + 0x30 + (longlong)iVar6 * 0x48);
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      if ((void *)_Dst[3] != (void *)0x0) {
        FMemory::Free((void *)_Dst[3]);
      }
      if ((void *)*_Dst != (void *)0x0) {
        FMemory::Free((void *)*_Dst);
      }
      memmove(_Dst,_Src,0x40);
      TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_38.Index,1);
      local_38.Index = iVar6;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar8;
  }
  if (bVar8 == false) {
    RehashOrLink(this,uVar5,_Src,local_38.Index);
  }
  *(int *)&param_1->Key = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_&&>_> @ 14e47f6a0

FSetElementId __thiscall
TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_&&>_>
          (TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_&&>
                 *param_1,bool *param_2)

{
  undefined8 *_Dst;
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  wchar_t *pwVar7;
  TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_>_>
  *_Src;
  char *in_R9;
  bool bVar8;
  FSparseArrayAllocationInfo local_38;
  
  iVar6 = *(int *)&(this->Elements).field_0x34;
  if (iVar6 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x48,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar6 = iVar6 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x48);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x48) = 0xffffffff;
    }
  }
  TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  _Src = (TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_>_>
          *)0x0;
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_>_>
       *)0x0) {
    TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_&&>
    ::
    operator<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_>_TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_>
              ((TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_&&>
                *)param_2,local_38.Pointer);
    *(undefined4 *)((longlong)local_38.Pointer + 0x40) = 0xffffffff;
    _Src = local_38.Pointer;
  }
  iVar6 = *(int *)&_Src->field_0x8 + -1;
  if (*(int *)&_Src->field_0x8 == 0) {
    pwVar7 = L"";
    iVar6 = 0;
  }
  else {
    pwVar7 = *(wchar_t **)_Src;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
  bVar8 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar6 = FindIndexByHash<FString>(this,uVar5,(FString *)_Src);
    bVar8 = iVar6 != -1;
    if (bVar8) {
      _Dst = (undefined8 *)(*(longlong *)&this->Elements + (longlong)iVar6 * 0x48);
      pvVar3 = *(void **)(*(longlong *)&this->Elements + 0x30 + (longlong)iVar6 * 0x48);
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      if ((void *)_Dst[3] != (void *)0x0) {
        FMemory::Free((void *)_Dst[3]);
      }
      if ((void *)*_Dst != (void *)0x0) {
        FMemory::Free((void *)*_Dst);
      }
      memmove(_Dst,_Src,0x40);
      TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_38.Index,1);
      local_38.Index = iVar6;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar8;
  }
  if (bVar8 == false) {
    RehashOrLink(this,uVar5,_Src,local_38.Index);
  }
  *(int *)&param_1->Key = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<enum_EInterchangeAnimationPayLoadType,void>_>_&&>_> @ 14e47f870

FSetElementId __thiscall
TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<enum_EInterchangeAnimationPayLoadType,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<enum_EInterchangeAnimationPayLoadType,void>_>,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<enum_EInterchangeAnimationPayLoadType,void>_>_&&>_>
          (void *this,
          TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<EInterchangeAnimationPayLoadType,void>_>_&&>
          *param_1,bool *param_2)

{
  int iVar1;
  undefined8 *_Dst;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  wchar_t *pwVar6;
  TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<EInterchangeAnimationPayLoadType,void>_>_>_>
  *_Src;
  char *in_R9;
  bool bVar7;
  FSparseArrayAllocationInfo local_38;
  
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x48,8,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),false);
  }
  else {
    iVar5 = *(int *)((longlong)this + 0x30);
    iVar1 = *(int *)((longlong)this + 0x34) + -1;
    iVar2 = *(int *)(*(longlong *)this + 4 + (longlong)iVar5 * 0x48);
    *(int *)((longlong)this + 0x30) = iVar2;
    *(int *)((longlong)this + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(*(longlong *)this + (longlong)iVar2 * 0x48) = 0xffffffff;
    }
  }
  TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&local_38,iVar5);
  _Src = (TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<EInterchangeAnimationPayLoadType,void>_>_>_>
          *)0x0;
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<EInterchangeAnimationPayLoadType,void>_>_>_>
       *)0x0) {
    TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<enum_EInterchangeAnimationPayLoadType,void>_>_&&>
    ::
    operator<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<enum_EInterchangeAnimationPayLoadType,void>_>_>_TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<enum_EInterchangeAnimationPayLoadType,void>_>_>
              (param_2,local_38.Pointer);
    *(undefined4 *)((longlong)local_38.Pointer + 0x40) = 0xffffffff;
    _Src = local_38.Pointer;
  }
  iVar5 = *(int *)&_Src->field_0x8 + -1;
  if (*(int *)&_Src->field_0x8 == 0) {
    pwVar6 = L"";
    iVar5 = 0;
  }
  else {
    pwVar6 = *(wchar_t **)_Src;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar6);
  bVar7 = false;
  if (*(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34) != 1) {
    iVar5 = FindIndexByHash<FString>(this,uVar4,(FString *)_Src);
    bVar7 = iVar5 != -1;
    if (bVar7) {
      _Dst = (undefined8 *)(*(longlong *)this + (longlong)iVar5 * 0x48);
      pvVar3 = *(void **)(*(longlong *)this + 0x30 + (longlong)iVar5 * 0x48);
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      if ((void *)_Dst[3] != (void *)0x0) {
        FMemory::Free((void *)_Dst[3]);
      }
      if ((void *)*_Dst != (void *)0x0) {
        FMemory::Free((void *)*_Dst);
      }
      memmove(_Dst,_Src,0x40);
      TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(this,local_38.Index,1);
      local_38.Index = iVar5;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar7;
  }
  if (bVar7 == false) {
    RehashOrLink(this,uVar4,_Src,local_38.Index);
  }
  *(int *)&param_1->Key = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// EmplaceByHash<TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_&&>_> @ 14e47fa40

FSetElementId __thiscall
TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>,0>,FDefaultSetAllocator>
::
EmplaceByHash<TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_&&>_>
          (TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_&&>
          *param_2,bool *param_3)

{
  undefined8 *_Dst;
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  undefined4 in_register_00000014;
  bool bVar6;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar5 = *(int *)&(this->Elements).field_0x34;
  if (iVar5 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x48,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar5 = iVar5 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x48);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x48) = 0xffffffff;
    }
  }
  TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_>_>
       *)0x0) {
    TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_&&>
    ::
    operator<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_>_TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_>
              ((TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_&&>
                *)param_3,local_38.Pointer);
    *(undefined4 *)((longlong)local_38.Pointer + 0x40) = 0xffffffff;
  }
  bVar6 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar5 = FindIndexByHash<FString>(this,(uint)param_2,local_38.Pointer);
    bVar6 = iVar5 != -1;
    if (bVar6) {
      _Dst = (undefined8 *)(*(longlong *)&this->Elements + (longlong)iVar5 * 0x48);
      pvVar3 = *(void **)(*(longlong *)&this->Elements + 0x30 + (longlong)iVar5 * 0x48);
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      if ((void *)_Dst[3] != (void *)0x0) {
        FMemory::Free((void *)_Dst[3]);
      }
      if ((void *)*_Dst != (void *)0x0) {
        FMemory::Free((void *)*_Dst);
      }
      memmove(_Dst,local_38.Pointer,0x40);
      TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_38.Index,1);
      local_38.Index = iVar5;
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar6;
  }
  if (bVar6 == false) {
    RehashOrLink(this,(uint)param_2,local_38.Pointer,local_38.Index);
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_38.Index;
  return (FSetElementId)param_1;
}

// EmplaceByHash<TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_&&>_> @ 14e47fbe0

FSetElementId __thiscall
TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>,0>,FDefaultSetAllocator>
::
EmplaceByHash<TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_&&>_>
          (TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_&&>
          *param_2,bool *param_3)

{
  undefined8 *_Dst;
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  undefined4 in_register_00000014;
  bool bVar6;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar5 = *(int *)&(this->Elements).field_0x34;
  if (iVar5 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x48,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar5 = iVar5 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x48);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x48) = 0xffffffff;
    }
  }
  TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_>_>
       *)0x0) {
    TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_&&>
    ::
    operator<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_>_TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_>
              ((TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_&&>
                *)param_3,local_38.Pointer);
    *(undefined4 *)((longlong)local_38.Pointer + 0x40) = 0xffffffff;
  }
  bVar6 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar5 = FindIndexByHash<FString>(this,(uint)param_2,local_38.Pointer);
    bVar6 = iVar5 != -1;
    if (bVar6) {
      _Dst = (undefined8 *)(*(longlong *)&this->Elements + (longlong)iVar5 * 0x48);
      pvVar3 = *(void **)(*(longlong *)&this->Elements + 0x30 + (longlong)iVar5 * 0x48);
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      if ((void *)_Dst[3] != (void *)0x0) {
        FMemory::Free((void *)_Dst[3]);
      }
      if ((void *)*_Dst != (void *)0x0) {
        FMemory::Free((void *)*_Dst);
      }
      memmove(_Dst,local_38.Pointer,0x40);
      TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_38.Index,1);
      local_38.Index = iVar5;
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar6;
  }
  if (bVar6 == false) {
    RehashOrLink(this,(uint)param_2,local_38.Pointer,local_38.Index);
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_38.Index;
  return (FSetElementId)param_1;
}

// EmplaceByHash<TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<enum_EInterchangeAnimationPayLoadType,void>_>_&&>_> @ 14e47fd80

FSetElementId __thiscall
TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<enum_EInterchangeAnimationPayLoadType,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<enum_EInterchangeAnimationPayLoadType,void>_>,0>,FDefaultSetAllocator>
::
EmplaceByHash<TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<enum_EInterchangeAnimationPayLoadType,void>_>_&&>_>
          (void *this,uint param_1,
          TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<EInterchangeAnimationPayLoadType,void>_>_&&>
          *param_2,bool *param_3)

{
  int iVar1;
  undefined8 *_Dst;
  int iVar2;
  void *pvVar3;
  int iVar4;
  undefined4 in_register_00000014;
  bool bVar5;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x48,8,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),false);
  }
  else {
    iVar4 = *(int *)((longlong)this + 0x30);
    iVar1 = *(int *)((longlong)this + 0x34) + -1;
    iVar2 = *(int *)(*(longlong *)this + 4 + (longlong)iVar4 * 0x48);
    *(int *)((longlong)this + 0x30) = iVar2;
    *(int *)((longlong)this + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(*(longlong *)this + (longlong)iVar2 * 0x48) = 0xffffffff;
    }
  }
  TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&local_38,iVar4);
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<EInterchangeAnimationPayLoadType,void>_>_>_>
       *)0x0) {
    TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<enum_EInterchangeAnimationPayLoadType,void>_>_&&>
    ::
    operator<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<enum_EInterchangeAnimationPayLoadType,void>_>_>_TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<enum_EInterchangeAnimationPayLoadType,void>_>_>
              (param_3,local_38.Pointer);
    *(undefined4 *)((longlong)local_38.Pointer + 0x40) = 0xffffffff;
  }
  bVar5 = false;
  if (*(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34) != 1) {
    iVar4 = FindIndexByHash<FString>(this,(uint)param_2,local_38.Pointer);
    bVar5 = iVar4 != -1;
    if (bVar5) {
      _Dst = (undefined8 *)(*(longlong *)this + (longlong)iVar4 * 0x48);
      pvVar3 = *(void **)(*(longlong *)this + 0x30 + (longlong)iVar4 * 0x48);
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      if ((void *)_Dst[3] != (void *)0x0) {
        FMemory::Free((void *)_Dst[3]);
      }
      if ((void *)*_Dst != (void *)0x0) {
        FMemory::Free((void *)*_Dst);
      }
      memmove(_Dst,local_38.Pointer,0x40);
      TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(this,local_38.Index,1);
      local_38.Index = iVar4;
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar5;
  }
  if (bVar5 == false) {
    RehashOrLink(this,(uint)param_2,local_38.Pointer,local_38.Index);
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_38.Index;
  return (FSetElementId)param_1;
}

// FindIndexByHash<FString> @ 14e47ff20

int __thiscall
TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>,0>,FDefaultSetAllocator>
::FindIndexByHash<FString>
          (TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,FString *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  bool bVar6;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar5 = (this->Hash).SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar2 = *(int *)((longlong)FVar5 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    while (iVar2 != -1) {
      iVar4 = *(int *)(*(longlong *)&this->Elements + 8 + (longlong)iVar2 * 0x48);
      lVar1 = (longlong)iVar2 * 0x48;
      iVar3 = (param_2->Data).ArrayNum;
      if (iVar4 == iVar3) {
        if (iVar4 < 2) {
          return iVar2;
        }
        iVar4 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)(*(longlong *)&this->Elements + lVar1),
                           (wchar_t *)(param_2->Data).AllocatorInstance.Data);
        bVar6 = iVar4 == 0;
      }
      else {
        bVar6 = iVar4 + iVar3 == 1;
      }
      if (bVar6) {
        return iVar2;
      }
      iVar2 = *(int *)(lVar1 + 0x40 + *(longlong *)&this->Elements);
    }
  }
  return -1;
}

// FindIndexByHash<FString> @ 14e47fff0

int __thiscall
TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>,0>,FDefaultSetAllocator>
::FindIndexByHash<FString>
          (TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,FString *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  bool bVar6;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar5 = (this->Hash).SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar2 = *(int *)((longlong)FVar5 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    while (iVar2 != -1) {
      iVar4 = *(int *)(*(longlong *)&this->Elements + 8 + (longlong)iVar2 * 0x48);
      lVar1 = (longlong)iVar2 * 0x48;
      iVar3 = (param_2->Data).ArrayNum;
      if (iVar4 == iVar3) {
        if (iVar4 < 2) {
          return iVar2;
        }
        iVar4 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)(*(longlong *)&this->Elements + lVar1),
                           (wchar_t *)(param_2->Data).AllocatorInstance.Data);
        bVar6 = iVar4 == 0;
      }
      else {
        bVar6 = iVar4 + iVar3 == 1;
      }
      if (bVar6) {
        return iVar2;
      }
      iVar2 = *(int *)(lVar1 + 0x40 + *(longlong *)&this->Elements);
    }
  }
  return -1;
}

// FindIndexByHash<FString> @ 14e4800c0

int __thiscall
TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<enum_EInterchangeAnimationPayLoadType,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<enum_EInterchangeAnimationPayLoadType,void>_>,0>,FDefaultSetAllocator>
::FindIndexByHash<FString>(void *this,uint param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar4 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar4 = (longlong)this + 0x38;
    }
    iVar1 = *(int *)(lVar4 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    while (iVar1 != -1) {
      iVar3 = *(int *)(*(longlong *)this + 8 + (longlong)iVar1 * 0x48);
      lVar4 = (longlong)iVar1 * 0x48;
      iVar2 = (param_2->Data).ArrayNum;
      if (iVar3 == iVar2) {
        if (iVar3 < 2) {
          return iVar1;
        }
        iVar3 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)(*(longlong *)this + lVar4),
                           (wchar_t *)(param_2->Data).AllocatorInstance.Data);
        bVar5 = iVar3 == 0;
      }
      else {
        bVar5 = iVar3 + iVar2 == 1;
      }
      if (bVar5) {
        return iVar1;
      }
      iVar1 = *(int *)(lVar4 + 0x40 + *(longlong *)this);
    }
  }
  return -1;
}

// Move<TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>_> @ 14e4845f0

void __cdecl
TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
Move<TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>_>
          (TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
           *param_1,
          TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
          *param_2)

{
  undefined1 *_Src;
  undefined1 *_Dst;
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  
  if (param_1 != param_2) {
    TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// Move<TSet<TTuple<FString,unsigned_char>,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>,FDefaultSetAllocator>_> @ 14e484700

void __cdecl
TSet<TTuple<FString,unsigned_char>,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>,FDefaultSetAllocator>
::
Move<TSet<TTuple<FString,unsigned_char>,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>,FDefaultSetAllocator>_>
          (TSet<TTuple<FString,unsigned_char>,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>,FDefaultSetAllocator>
           *param_1,
          TSet<TTuple<FString,unsigned_char>,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>,FDefaultSetAllocator>
          *param_2)

{
  undefined1 *_Src;
  undefined1 *_Dst;
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  
  if (param_1 != param_2) {
    TSparseArray<TSparseSetElement<TTuple<FString,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// Move<TSet<TTuple<FString,float>,TDefaultMapHashableKeyFuncs<FString,float,0>,FDefaultSetAllocator>_> @ 14e484810

void __cdecl
TSet<TTuple<FString,float>,TDefaultMapHashableKeyFuncs<FString,float,0>,FDefaultSetAllocator>::
Move<TSet<TTuple<FString,float>,TDefaultMapHashableKeyFuncs<FString,float,0>,FDefaultSetAllocator>_>
          (TSet<TTuple<FString,float>,TDefaultMapHashableKeyFuncs<FString,float,0>,FDefaultSetAllocator>
           *param_1,
          TSet<TTuple<FString,float>,TDefaultMapHashableKeyFuncs<FString,float,0>,FDefaultSetAllocator>
          *param_2)

{
  undefined1 *_Src;
  undefined1 *_Dst;
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  
  if (param_1 != param_2) {
    TSparseArray<TSparseSetElement<TTuple<FString,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// Empty @ 14e48f940

void __thiscall
TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>,0>,FDefaultSetAllocator>
::Empty(TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>,0>,FDefaultSetAllocator>
        *this,int param_1)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 1;
  if (3 < (uint)param_1) {
    uVar2 = (ulonglong)(((uint)param_1 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar4 = 1 << ((byte)lVar3 & 0x1f);
  }
  piVar1 = &this->HashSize;
  if (((param_1 < 1) || (iVar4 <= *piVar1)) && (*piVar1 <= iVar4)) {
    UnhashElements(this);
    TSparseArray<TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this->Elements,param_1);
  }
  else {
    TSparseArray<TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this->Elements,param_1);
    *piVar1 = iVar4;
    Rehash(this);
  }
  return;
}

// Empty @ 14e48f9d0

void __thiscall
TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>,0>,FDefaultSetAllocator>
::Empty(TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>,0>,FDefaultSetAllocator>
        *this,int param_1)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 1;
  if (3 < (uint)param_1) {
    uVar2 = (ulonglong)(((uint)param_1 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar4 = 1 << ((byte)lVar3 & 0x1f);
  }
  piVar1 = &this->HashSize;
  if (((param_1 < 1) || (iVar4 <= *piVar1)) && (*piVar1 <= iVar4)) {
    UnhashElements(this);
    TSparseArray<TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this->Elements,param_1);
  }
  else {
    TSparseArray<TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this->Elements,param_1);
    *piVar1 = iVar4;
    Rehash(this);
  }
  return;
}

// Empty @ 14e48fa60

void __thiscall
TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<enum_EInterchangeAnimationPayLoadType,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<enum_EInterchangeAnimationPayLoadType,void>_>,0>,FDefaultSetAllocator>
::Empty(void *this,int param_1)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 1;
  if (3 < (uint)param_1) {
    uVar2 = (ulonglong)(((uint)param_1 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar4 = 1 << ((byte)lVar3 & 0x1f);
  }
  piVar1 = (int *)((longlong)this + 0x48);
  if (((param_1 < 1) || (iVar4 <= *piVar1)) && (*piVar1 <= iVar4)) {
    UnhashElements(this);
    TSparseArray<TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<enum_EInterchangeAnimationPayLoadType,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(this,param_1);
  }
  else {
    TSparseArray<TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<enum_EInterchangeAnimationPayLoadType,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(this,param_1);
    *piVar1 = iVar4;
    Rehash(this);
  }
  return;
}

// Rehash @ 14e49e690

void __thiscall
TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>,0>,FDefaultSetAllocator>
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
        if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14e49e767;
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
LAB_14e49e767:
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
                 (*(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x48);
        iVar3 = *(int *)(*(longlong *)&this->Elements + 8 +
                        (longlong)local_40.CurrentBitIndex * 0x48);
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
        *(uint *)((longlong)puVar2 + 0x44) = uVar6;
        FVar4 = (this->Hash).SecondaryData;
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar11 = FVar4;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar6;
        *(undefined4 *)(puVar2 + 8) = *(undefined4 *)((longlong)FVar11 + uVar8 * 4);
        *(int *)((longlong)FVar11 + uVar8 * 4) = iVar5;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e49e840

void __thiscall
TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>,0>,FDefaultSetAllocator>
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
        if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14e49e917;
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
LAB_14e49e917:
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
                 (*(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x48);
        iVar3 = *(int *)(*(longlong *)&this->Elements + 8 +
                        (longlong)local_40.CurrentBitIndex * 0x48);
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
        *(uint *)((longlong)puVar2 + 0x44) = uVar6;
        FVar4 = (this->Hash).SecondaryData;
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar11 = FVar4;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar6;
        *(undefined4 *)(puVar2 + 8) = *(undefined4 *)((longlong)FVar11 + uVar8 * 4);
        *(int *)((longlong)FVar11 + uVar8 * 4) = iVar5;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e49e9f0

void __thiscall
TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<enum_EInterchangeAnimationPayLoadType,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<enum_EInterchangeAnimationPayLoadType,void>_>,0>,FDefaultSetAllocator>
::Rehash(void *this)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  ForElementType<FSetElementId> *pFVar10;
  TBitArray<FDefaultBitArrayAllocator> *pTVar11;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = (int *)((longlong)this + 0x48);
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            ((ForElementType<FSetElementId> *)((longlong)this + 0x38),
             *(int *)((longlong)this + 0x48));
  if (*piVar1 != 0) {
    iVar6 = *(int *)((longlong)this + 0x28);
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar6 != 0) {
      pTVar11 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar11 = local_40.Array;
      }
      uVar5 = *(uint *)(pTVar11->AllocatorInstance).InlineData;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar8 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14e49eac7;
        uVar5 = *(uint *)((pTVar11->AllocatorInstance).InlineData + lVar8 * 4 + 4);
      }
      uStack_64 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_64 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iStack_54 = (int)lVar8 + -1 + iStack_50;
      if (iVar6 < iStack_54) {
LAB_14e49eac7:
        iStack_54 = iVar6;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar6) {
      do {
        iVar4 = local_40.CurrentBitIndex;
        puVar2 = (undefined8 *)(*(longlong *)this + (longlong)local_40.CurrentBitIndex * 0x48);
        iVar3 = *(int *)(*(longlong *)this + 8 + (longlong)local_40.CurrentBitIndex * 0x48);
        iVar6 = iVar3 + -1;
        if (iVar3 == 0) {
          pwVar9 = L"";
          iVar6 = 0;
        }
        else {
          pwVar9 = (wchar_t *)*puVar2;
        }
        uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar9);
        uVar5 = *piVar1 - 1U & uVar5;
        *(uint *)((longlong)puVar2 + 0x44) = uVar5;
        pFVar10 = (ForElementType<FSetElementId> *)((longlong)this + 0x38);
        if (*(ForElementType<FSetElementId> **)((longlong)this + 0x40) !=
            (ForElementType<FSetElementId> *)0x0) {
          pFVar10 = *(ForElementType<FSetElementId> **)((longlong)this + 0x40);
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(puVar2 + 8) = *(undefined4 *)(pFVar10->InlineData + uVar7 * 4);
        *(int *)(pFVar10->InlineData + uVar7 * 4) = iVar4;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// RehashOrLink @ 14e49eba0

void __thiscall
TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>,0>,FDefaultSetAllocator>
::RehashOrLink(TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>,0>,FDefaultSetAllocator>
               *this,uint param_1,
              TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_>_>
              *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  
  uVar5 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if (uVar5 < 4) {
    iVar2 = 1;
  }
  else {
    uVar3 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
    lVar1 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar2 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((0 < (int)uVar5) && (this->HashSize < iVar2)) {
    this->HashSize = iVar2;
    Rehash(this);
    return;
  }
  uVar5 = this->HashSize - 1U & param_1;
  *(uint *)&param_2->field_0x44 = uVar5;
  FVar4 = (this->Hash).SecondaryData;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar3 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
  *(undefined4 *)&param_2->field_0x40 = *(undefined4 *)((longlong)FVar4 + uVar3 * 4);
  *(int *)((longlong)FVar4 + uVar3 * 4) = param_3;
  return;
}

// RehashOrLink @ 14e49ec30

void __thiscall
TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>,0>,FDefaultSetAllocator>
::RehashOrLink(TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>,0>,FDefaultSetAllocator>
               *this,uint param_1,
              TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_>_>
              *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  
  uVar5 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if (uVar5 < 4) {
    iVar2 = 1;
  }
  else {
    uVar3 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
    lVar1 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar2 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((0 < (int)uVar5) && (this->HashSize < iVar2)) {
    this->HashSize = iVar2;
    Rehash(this);
    return;
  }
  uVar5 = this->HashSize - 1U & param_1;
  *(uint *)&param_2->field_0x44 = uVar5;
  FVar4 = (this->Hash).SecondaryData;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar3 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
  *(undefined4 *)&param_2->field_0x40 = *(undefined4 *)((longlong)FVar4 + uVar3 * 4);
  *(int *)((longlong)FVar4 + uVar3 * 4) = param_3;
  return;
}

// RehashOrLink @ 14e49ecc0

void __thiscall
TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<enum_EInterchangeAnimationPayLoadType,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<enum_EInterchangeAnimationPayLoadType,void>_>,0>,FDefaultSetAllocator>
::RehashOrLink(void *this,uint param_1,
              TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<EInterchangeAnimationPayLoadType,void>_>_>_>
              *param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  
  uVar4 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
  if (uVar4 < 4) {
    iVar1 = 1;
  }
  else {
    uVar2 = (ulonglong)((uVar4 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar1 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((0 < (int)uVar4) && (*(int *)((longlong)this + 0x48) < iVar1)) {
    *(int *)((longlong)this + 0x48) = iVar1;
    Rehash(this);
    return;
  }
  uVar4 = *(int *)((longlong)this + 0x48) - 1U & param_1;
  *(uint *)&param_2->field_0x44 = uVar4;
  lVar3 = *(longlong *)((longlong)this + 0x40);
  if (*(longlong *)((longlong)this + 0x40) == 0) {
    lVar3 = (longlong)this + 0x38;
  }
  uVar2 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (longlong)(int)uVar4;
  *(undefined4 *)&param_2->field_0x40 = *(undefined4 *)(lVar3 + uVar2 * 4);
  *(int *)(lVar3 + uVar2 * 4) = param_3;
  return;
}

// UnhashElements @ 14e4a91c0

void __thiscall
TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>,0>,FDefaultSetAllocator>
                 *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  ForElementType<FSetElementId> FVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  int local_res10;
  ForElementType<FSetElementId> local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  local_res18 = (this->Hash).SecondaryData;
  iVar3 = this->HashSize;
  if (local_res18 == (ForElementType<FSetElementId>)0x0) {
    local_res18 = (ForElementType<FSetElementId>)&this->Hash;
  }
  local_40 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2 <= local_40) {
    memset((void *)local_res18,0xff,(longlong)iVar3 << 2);
    return;
  }
  iVar3 = *(int *)&(this->Elements).field_0x28;
  puVar1 = &(this->Elements).field_0x10;
  local_88 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(this->Elements).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar9 = *puVar12;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar9 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar8 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14e4a92bb;
      uVar9 = puVar12[lVar8 + 1];
    }
    uStack_84 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_14e4a92bb:
      iStack_74 = iVar3;
    }
  }
  uVar9 = *(uint *)&(this->Elements).field_0x28;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  iVar10 = (int)uVar9 >> 5;
  uVar13 = uVar9 & 0xffffffe0;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar6 = local_res18;
  uVar4 = *(uint *)&(this->Elements).field_0x28;
  if (uVar9 != uVar4) {
    puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar13 = uVar13 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14e4a93b0;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_14e4a93b0:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)(*(longlong *)&this->Elements + 0x44 + (longlong)local_60.CurrentBitIndex * 0x48) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// UnhashElements @ 14e4a9450

void __thiscall
TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>,0>,FDefaultSetAllocator>
                 *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  ForElementType<FSetElementId> FVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  int local_res10;
  ForElementType<FSetElementId> local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  local_res18 = (this->Hash).SecondaryData;
  iVar3 = this->HashSize;
  if (local_res18 == (ForElementType<FSetElementId>)0x0) {
    local_res18 = (ForElementType<FSetElementId>)&this->Hash;
  }
  local_40 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2 <= local_40) {
    memset((void *)local_res18,0xff,(longlong)iVar3 << 2);
    return;
  }
  iVar3 = *(int *)&(this->Elements).field_0x28;
  puVar1 = &(this->Elements).field_0x10;
  local_88 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(this->Elements).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar9 = *puVar12;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar9 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar8 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14e4a954b;
      uVar9 = puVar12[lVar8 + 1];
    }
    uStack_84 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_14e4a954b:
      iStack_74 = iVar3;
    }
  }
  uVar9 = *(uint *)&(this->Elements).field_0x28;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  iVar10 = (int)uVar9 >> 5;
  uVar13 = uVar9 & 0xffffffe0;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar6 = local_res18;
  uVar4 = *(uint *)&(this->Elements).field_0x28;
  if (uVar9 != uVar4) {
    puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar13 = uVar13 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14e4a9640;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_14e4a9640:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)(*(longlong *)&this->Elements + 0x44 + (longlong)local_60.CurrentBitIndex * 0x48) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// UnhashElements @ 14e4a96e0

void __thiscall
TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<enum_EInterchangeAnimationPayLoadType,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<enum_EInterchangeAnimationPayLoadType,void>_>,0>,FDefaultSetAllocator>
::UnhashElements(void *this)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  void *pvVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  TBitArray<FDefaultBitArrayAllocator> *pTVar11;
  uint uVar12;
  undefined1 local_res8 [8];
  int local_res10;
  void *local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  iVar3 = *(int *)((longlong)this + 0x48);
  local_res18 = *(void **)((longlong)this + 0x40);
  if (*(void **)((longlong)this + 0x40) == (void *)0x0) {
    local_res18 = (void *)((longlong)this + 0x38);
  }
  local_40 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
  if ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2 <= local_40) {
    memset(local_res18,0xff,(longlong)iVar3 << 2);
    return;
  }
  iVar3 = *(int *)((longlong)this + 0x28);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
  local_88 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    pTVar11 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar11 = pTVar1;
    }
    uVar9 = *(uint *)(pTVar11->AllocatorInstance).InlineData;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar9 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar8 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14e4a97db;
      uVar9 = *(uint *)((pTVar11->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uStack_84 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_14e4a97db:
      iStack_74 = iVar3;
    }
  }
  uVar9 = *(uint *)((longlong)this + 0x28);
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  iVar10 = (int)uVar9 >> 5;
  uVar12 = uVar9 & 0xffffffe0;
  local_60.Array = pTVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pvVar6 = local_res18;
  uVar4 = *(uint *)((longlong)this + 0x28);
  if (uVar9 != uVar4) {
    pTVar11 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar11 = pTVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) &
            *(uint *)((pTVar11->AllocatorInstance).InlineData + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar12 = uVar12 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14e4a98d0;
      uVar9 = *(uint *)((pTVar11->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar12;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_14e4a98d0:
  while( true ) {
    if (*(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34) != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<enum_EInterchangeAnimationPayLoadType,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) && (local_60.Array == pTVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)pvVar6 +
     (longlong)*(int *)(*(longlong *)this + 0x44 + (longlong)local_60.CurrentBitIndex * 0x48) * 4) =
         0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

