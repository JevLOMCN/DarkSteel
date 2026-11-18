// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 37

// Emplace<int_const_&> @ 1415022f0

FSetElementId __thiscall
TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator>::Emplace<int_const_&>
          (TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator> *this,int *param_1,
          bool *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  ForElementType<FSetElementId> FVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  char *in_R9;
  bool bVar10;
  FSparseArrayAllocationInfo local_38;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  iVar7 = 1;
  if (iVar8 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    iVar8 = iVar8 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar3 * 0xc);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0xc) = 0xffffffff;
    }
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar3);
  if (local_38.Pointer != (uint *)0x0) {
    *(uint *)local_38.Pointer = *(uint *)param_2;
    *(uint *)((longlong)local_38.Pointer + 4) = 0xffffffff;
  }
  iVar8 = *(int *)&(this->Elements).field_0x8;
  bVar10 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  uVar9 = *(uint *)local_38.Pointer;
  if ((iVar8 - iVar3 != 1) && (iVar8 != iVar3)) {
    FVar6 = (this->Hash).SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar8 = *(int *)((longlong)FVar6 + (ulonglong)(this->HashSize - 1U & uVar9) * 4);
    if (iVar8 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(uint *)(lVar2 + (longlong)iVar8 * 0xc) == uVar9) {
          bVar10 = iVar8 != -1;
          if (bVar10) {
            *(uint *)(lVar2 + (longlong)iVar8 * 0xc) = uVar9;
            TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar8;
          }
          break;
        }
        iVar8 = *(int *)(lVar2 + 4 + (longlong)iVar8 * 0xc);
      } while (iVar8 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar10;
  }
  if (bVar10 == false) {
    uVar5 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar5) {
      uVar4 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= this->HashSize)) {
      uVar9 = this->HashSize - 1U & uVar9;
      *(uint *)((longlong)local_38.Pointer + 8) = uVar9;
      FVar6 = (this->Hash).SecondaryData;
      if (FVar6 == (ForElementType<FSetElementId>)0x0) {
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar4 = (longlong)this->HashSize - 1U & (longlong)(int)uVar9;
      *(uint *)((longlong)local_38.Pointer + 4) = *(uint *)((longlong)FVar6 + uVar4 * 4);
      *(int *)((longlong)FVar6 + uVar4 * 4) = local_38.Index;
    }
    else {
      this->HashSize = iVar7;
      Rehash(this);
    }
  }
  *param_1 = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<FString_const_&> @ 141503870

FSetElementId __thiscall
TSparseSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSparseSetAllocator>::Emplace<FString_const_&>
          (TSparseSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSparseSetAllocator> *this,
          FString *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  wchar_t *pwVar8;
  ForElementType<FSetElementId> FVar9;
  FString *_Src;
  int iVar10;
  char *in_R9;
  char cVar11;
  int iVar12;
  bool bVar13;
  FSparseArrayAllocationInfo local_48;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  iVar12 = 1;
  if (iVar10 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar10 = iVar10 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar5);
  _Src = (FString *)0x0;
  iVar10 = 0;
  if (local_48.Pointer != (FString *)0x0) {
    ::FString::FString(local_48.Pointer,(FString *)param_2);
    *(undefined4 *)&(((FString *)((longlong)local_48.Pointer + 0x10))->Data).AllocatorInstance.Data
         = 0xffffffff;
    _Src = local_48.Pointer;
  }
  iVar5 = (_Src->Data).ArrayNum;
  if (iVar5 == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(_Src->Data).AllocatorInstance.Data;
    iVar10 = iVar5 + -1;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar8);
  iVar10 = *(int *)&(this->Elements).field_0x8;
  cVar11 = '\0';
  iVar5 = *(int *)&(this->Elements).field_0x34;
  if ((iVar10 - iVar5 != 1) && (iVar10 != iVar5)) {
    FVar9 = (this->Hash).SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar10 = *(int *)((longlong)FVar9 + (ulonglong)(this->HashSize - 1U & uVar4) * 4);
    while (iVar10 != -1) {
      iVar5 = *(int *)(*(longlong *)&this->Elements + 8 + (longlong)iVar10 * 0x18);
      lVar2 = (longlong)iVar10 * 0x18;
      iVar1 = (_Src->Data).ArrayNum;
      if (iVar5 == iVar1) {
        if (1 < iVar5) {
          iVar5 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(*(longlong *)&this->Elements + lVar2),
                             (wchar_t *)(_Src->Data).AllocatorInstance.Data);
          bVar13 = iVar5 == 0;
          goto LAB_1415039e8;
        }
LAB_1415039fe:
        cVar11 = '\x01';
        lVar2 = *(longlong *)&this->Elements;
        pvVar3 = *(void **)(lVar2 + (longlong)iVar10 * 0x18);
        if (pvVar3 != (void *)0x0) {
          FMemory::Free(pvVar3);
        }
        memmove((void *)(lVar2 + (longlong)iVar10 * 0x18),_Src,0x10);
        TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::RemoveAtUninitialized
                  ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)this,local_48.Index,1);
        local_48.Index = iVar10;
        break;
      }
      bVar13 = iVar5 + iVar1 == 1;
LAB_1415039e8:
      if (bVar13) goto LAB_1415039fe;
      iVar10 = *(int *)(lVar2 + 0x10 + *(longlong *)&this->Elements);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = cVar11;
  }
  if (cVar11 == '\0') {
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
      uVar4 = this->HashSize - 1U & uVar4;
      *(uint *)((longlong)&_Src[1].Data.AllocatorInstance.Data + 4) = uVar4;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar4;
      *(undefined4 *)&_Src[1].Data.AllocatorInstance.Data =
           *(undefined4 *)((longlong)FVar9 + uVar6 * 4);
      *(int *)((longlong)FVar9 + uVar6 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar12;
      Rehash(this);
    }
  }
  *(int *)&(param_1->Data).AllocatorInstance.Data = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<TUniquePtr<FString,TDefaultDelete<FString>_>_&&,int_&&>_> @ 141506970

FSetElementId __thiscall
TSparseSet<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TDefaultMapHashableKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,int,0>,FDefaultSparseSetAllocator>
::Emplace<TPairInitializer<TUniquePtr<FString,TDefaultDelete<FString>_>_&&,int_&&>_>
          (TSparseSet<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TDefaultMapHashableKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,int,0>,FDefaultSparseSetAllocator>
           *this,TPairInitializer<TUniquePtr<FString,TDefaultDelete<FString>_>_&&,int_&&> *param_1,
          bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  int iVar11;
  char *in_R9;
  undefined1 *puVar12;
  bool bVar13;
  FSparseArrayAllocationInfo local_48;
  
  iVar11 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar11 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar11 = iVar11 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x18) = 0xffffffff;
    }
  }
  puVar12 = &(this->Elements).field_0x8;
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar5);
  if (local_48.Pointer != (TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int> *)0x0) {
    puVar3 = *(undefined8 **)param_2;
    puVar4 = *(undefined4 **)(param_2 + 8);
    *(undefined8 *)local_48.Pointer = *puVar3;
    *puVar3 = 0;
    *(undefined4 *)((longlong)local_48.Pointer + 8) = *puVar4;
    *(undefined4 *)((longlong)local_48.Pointer + 0x10) = 0xffffffff;
  }
  uVar7 = *(ulonglong *)local_48.Pointer;
  bVar13 = false;
  uVar6 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  iVar11 = *(int *)puVar12;
  iVar5 = *(int *)&(this->Elements).field_0x34;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  if ((iVar11 - iVar5 != 1) && (iVar11 != iVar5)) {
    FVar9 = (this->Hash).SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar11 = *(int *)((longlong)FVar9 + (ulonglong)(this->HashSize - 1U & uVar6) * 4);
    if (iVar11 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(ulonglong *)(lVar2 + (longlong)iVar11 * 0x18) == uVar7) {
          bVar13 = iVar11 != -1;
          if (bVar13) {
            MoveByRelocate<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>_>
                      ((TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int> *)
                       (lVar2 + (longlong)iVar11 * 0x18),local_48.Pointer);
            TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar11;
          }
          break;
        }
        iVar11 = *(int *)(lVar2 + 0x10 + (longlong)iVar11 * 0x18);
      } while (iVar11 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar13;
  }
  if (bVar13 == false) {
    uVar8 = *(int *)puVar12 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar8) {
      uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= this->HashSize)) {
      uVar6 = this->HashSize - 1U & uVar6;
      *(uint *)&((TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int> *)
                ((longlong)local_48.Pointer + 0x10))->field_0x4 = uVar6;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      *(undefined4 *)((longlong)local_48.Pointer + 0x10) =
           *(undefined4 *)((longlong)FVar9 + uVar7 * 4);
      *(int *)((longlong)FVar9 + uVar7 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FString_const_&,int_const_&>_> @ 141508780

FSetElementId __thiscall
TSparseSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSparseSetAllocator>
::Emplace<TPairInitializer<FString_const_&,int_const_&>_>
          (TSparseSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSparseSetAllocator>
           *this,TPairInitializer<FString_const_&,int_const_&> *param_1,bool *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  wchar_t *pwVar8;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  char *in_R9;
  longlong lVar11;
  undefined8 *_Dst;
  char cVar12;
  int iVar13;
  bool bVar14;
  FSparseArrayAllocationInfo local_48;
  FString *_Src;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  iVar13 = 1;
  if (iVar10 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    lVar11 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar5 * 0x20 + 4 + lVar11);
    iVar10 = iVar10 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar11) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar5);
  _Src = (FString *)0x0;
  iVar10 = 0;
  if (local_48.Pointer != (FString *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 8);
    ::FString::FString(local_48.Pointer,*(FString **)param_2);
    *(undefined4 *)&(((FString *)((longlong)local_48.Pointer + 0x10))->Data).AllocatorInstance.Data
         = *puVar2;
    (((FString *)((longlong)local_48.Pointer + 0x10))->Data).ArrayNum = -1;
    _Src = local_48.Pointer;
  }
  iVar5 = (_Src->Data).ArrayNum;
  if (iVar5 == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(_Src->Data).AllocatorInstance.Data;
    iVar10 = iVar5 + -1;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar8);
  iVar10 = *(int *)&(this->Elements).field_0x8;
  cVar12 = '\0';
  iVar5 = *(int *)&(this->Elements).field_0x34;
  if ((iVar10 - iVar5 != 1) && (iVar10 != iVar5)) {
    FVar9 = (this->Hash).SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar10 = *(int *)((longlong)FVar9 + (ulonglong)(this->HashSize - 1U & uVar4) * 4);
    while (iVar10 != -1) {
      iVar5 = (_Src->Data).ArrayNum;
      lVar11 = (longlong)iVar10 * 0x20;
      iVar1 = *(int *)(*(longlong *)&this->Elements + 8 + lVar11);
      if (iVar1 == iVar5) {
        if (1 < iVar1) {
          iVar5 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(*(longlong *)&this->Elements + lVar11),
                             (wchar_t *)(_Src->Data).AllocatorInstance.Data);
          bVar14 = iVar5 == 0;
          goto LAB_1415088f0;
        }
LAB_141508906:
        cVar12 = '\x01';
        _Dst = (undefined8 *)((longlong)iVar10 * 0x20 + *(longlong *)&this->Elements);
        pvVar3 = (void *)*_Dst;
        if (pvVar3 != (void *)0x0) {
          FMemory::Free(pvVar3);
        }
        memmove(_Dst,_Src,0x18);
        TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::RemoveAtUninitialized
                  ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)this,local_48.Index,1);
        local_48.Index = iVar10;
        break;
      }
      bVar14 = iVar1 + iVar5 == 1;
LAB_1415088f0:
      if (bVar14) goto LAB_141508906;
      iVar10 = *(int *)(lVar11 + 0x18 + *(longlong *)&this->Elements);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = cVar12;
  }
  if (cVar12 == '\0') {
    uVar7 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar13 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar13 <= this->HashSize)) {
      uVar4 = this->HashSize - 1U & uVar4;
      _Src[1].Data.ArrayMax = uVar4;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar4;
      _Src[1].Data.ArrayNum = *(int *)((longlong)FVar9 + uVar6 * 4);
      *(int *)((longlong)FVar9 + uVar6 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar13;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TUniquePtr<FString,TDefaultDelete<FString>_>_> @ 1415095f0

FSetElementId __thiscall
TSparseSet<TUniquePtr<FString,TDefaultDelete<FString>_>,DefaultKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,0>,FDefaultSparseSetAllocator>
::Emplace<TUniquePtr<FString,TDefaultDelete<FString>_>_>
          (TSparseSet<TUniquePtr<FString,TDefaultDelete<FString>_>,DefaultKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,0>,FDefaultSparseSetAllocator>
           *this,TUniquePtr<FString,TDefaultDelete<FString>_> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  FString *pFVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  int iVar10;
  char *in_R9;
  undefined1 *puVar11;
  bool bVar12;
  FSparseArrayAllocationInfo local_48;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar10 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x10);
    iVar10 = iVar10 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x10) = 0xffffffff;
    }
  }
  puVar11 = &(this->Elements).field_0x8;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer != (TUniquePtr<FString,TDefaultDelete<FString>_> *)0x0) {
    *(FString **)local_48.Pointer = *(FString **)param_2;
    param_2[0] = false;
    param_2[1] = false;
    param_2[2] = false;
    param_2[3] = false;
    param_2[4] = false;
    param_2[5] = false;
    param_2[6] = false;
    param_2[7] = false;
    *(undefined4 *)
     &((TUniquePtr<FString,TDefaultDelete<FString>_> *)((longlong)local_48.Pointer + 8))->Ptr =
         0xffffffff;
  }
  pFVar3 = *(FString **)local_48.Pointer;
  bVar12 = false;
  uVar5 = ((uint)((ulonglong)pFVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar3 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  iVar10 = *(int *)puVar11;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  if ((iVar10 - iVar4 != 1) && (iVar10 != iVar4)) {
    FVar8 = (this->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar10 = *(int *)((longlong)FVar8 + (ulonglong)(this->HashSize - 1U & uVar5) * 4);
    if (iVar10 != -1) {
      do {
        if (*(FString **)(*(longlong *)&this->Elements + (longlong)iVar10 * 0x10) == pFVar3) {
          bVar12 = iVar10 != -1;
          if (bVar12) {
            MoveByRelocate<TUniquePtr<FString,TDefaultDelete<FString>_>_>
                      ((TUniquePtr<FString,TDefaultDelete<FString>_> *)
                       ((longlong)iVar10 * 0x10 + *(longlong *)&this->Elements),local_48.Pointer);
            TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar10;
          }
          break;
        }
        iVar10 = *(int *)(*(longlong *)&this->Elements + 8 + (longlong)iVar10 * 0x10);
      } while (iVar10 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar12;
  }
  if (bVar12 == false) {
    uVar7 = *(int *)puVar11 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= this->HashSize)) {
      uVar5 = this->HashSize - 1U & uVar5;
      *(uint *)((longlong)
                &((TUniquePtr<FString,TDefaultDelete<FString>_> *)((longlong)local_48.Pointer + 8))
                 ->Ptr + 4) = uVar5;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)
       &((TUniquePtr<FString,TDefaultDelete<FString>_> *)((longlong)local_48.Pointer + 8))->Ptr =
           *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
      *(int *)((longlong)FVar8 + uVar6 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Ptr = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// RemoveImpl<int> @ 14151ed00

int __thiscall
TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator>::RemoveImpl<int>
          (TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator> *this,uint param_1,
          int *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  longlong lVar7;
  uint *puVar8;
  undefined1 *puVar9;
  
  FVar5 = (this->Hash).SecondaryData;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar6 = *(uint *)((longlong)FVar5 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar6 == 0xffffffff) {
    return 0;
  }
  while (lVar7 = (longlong)(int)uVar6 * 0xc,
        *(int *)(lVar7 + *(longlong *)&this->Elements) != *param_2) {
    uVar6 = *(uint *)(lVar7 + 4 + *(longlong *)&this->Elements);
    if (uVar6 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)&(this->Elements).field_0x28)) {
    puVar9 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar9 + (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar6 & 0x1f) & 1) != 0) goto LAB_14151ede7;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
LAB_14151ede7:
  FVar5 = (this->Hash).SecondaryData;
  lVar7 = *(longlong *)&this->Elements + lVar7;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar8 = (uint *)((longlong)FVar5 + (longlong)*(int *)(lVar7 + 8) * 4);
  while( true ) {
    uVar1 = *puVar8;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == uVar6) {
      *puVar8 = *(uint *)(lVar7 + 4);
      TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar6,1);
      return 1;
    }
    puVar8 = (uint *)(*(longlong *)&this->Elements + ((longlong)(int)uVar1 * 3 + 1) * 4);
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

// RemoveImpl<FString> @ 141520ad0

int __thiscall
TSparseSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSparseSetAllocator>
::RemoveImpl<FString>
          (TSparseSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSparseSetAllocator>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  undefined1 *puVar8;
  longlong lVar9;
  uint *puVar10;
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
    lVar9 = (longlong)(int)uVar7 * 0x20;
    iVar1 = *(int *)(lVar3 + 8 + lVar9);
    if (iVar1 == iVar5) break;
    bVar11 = iVar1 + iVar5 == 1;
LAB_141520b43:
    if (bVar11) goto LAB_141520b69;
    uVar7 = *(uint *)(lVar3 + 0x18 + lVar9);
    if (uVar7 == 0xffffffff) {
      return 0;
    }
  }
  if (1 < iVar1) {
    iVar5 = FGenericPlatformStricmp::Stricmp
                      (*(wchar_t **)(lVar3 + lVar9),
                       (wchar_t *)(param_2->Data).AllocatorInstance.Data);
    bVar11 = iVar5 == 0;
    goto LAB_141520b43;
  }
LAB_141520b69:
  if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)&(this->Elements).field_0x28)) {
    puVar8 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar8 + (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar7 & 0x1f) & 1) != 0) goto LAB_141520bc8;
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
LAB_141520bc8:
  FVar6 = (this->Hash).SecondaryData;
  lVar9 = *(longlong *)&this->Elements + lVar9;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar10 = (uint *)((longlong)FVar6 + (longlong)*(int *)(lVar9 + 0x1c) * 4);
  while( true ) {
    uVar2 = *puVar10;
    if ((uVar2 == 0xffffffff) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("NextElementIndex != INDEX_NONE",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                            ,0x2b5,L"Corrupt hash"), bVar11)) break;
    if (uVar2 == uVar7) {
      *puVar10 = *(uint *)(lVar9 + 0x18);
      TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar7,1);
      TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar7,1);
      return 1;
    }
    puVar10 = (uint *)(*(longlong *)&this->Elements + 0x18 + (longlong)(int)uVar2 * 0x20);
  }
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}

// TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator> @ 141582880

TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator> * __thiscall
TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator>::
TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator>
          (TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator> *this,
          initializer_list<int> *param_1)

{
  bool *pbVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> FVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  bool *pbVar9;
  uint uVar10;
  int local_res8 [2];
  longlong *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  pbVar1 = (bool *)param_1->_Last;
  uVar8 = 0;
  pbVar9 = (bool *)param_1->_First;
  *(undefined8 *)&this->Elements = 0;
  *(undefined8 *)&(this->Elements).field_0x8 = 0;
  *(undefined8 *)&(this->Elements).field_0x20 = 0;
  *(undefined4 *)&(this->Elements).field_0x28 = 0;
  *(undefined4 *)&(this->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Elements).field_0x34 = 0;
  (this->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->HashSize = 0;
  uVar7 = (uint)((longlong)pbVar1 - (longlong)pbVar9 >> 2);
  if (uVar7 == 0) goto joined_r0x000141582a38;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar7);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this,uVar7);
  if (uVar7 < 4) {
    uVar7 = 1;
  }
  else {
    uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar7 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((this->HashSize != 0) && ((int)uVar7 <= this->HashSize)) goto joined_r0x000141582a38;
  this->HashSize = uVar7;
  if ((this->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->Hash).SecondaryData,0,0,4);
  }
  if (uVar7 != 0) {
    uVar10 = uVar7;
    if (uVar7 < 2) {
      if ((this->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
        uVar10 = 0;
        goto LAB_141582950;
      }
    }
    else {
LAB_141582950:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(this->Hash).SecondaryData,0,uVar10,4);
    }
    if (0 < (int)uVar7) {
      uVar6 = (ulonglong)uVar7;
      do {
        FVar2 = (this->Hash).SecondaryData;
        FVar5 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar5 = FVar2;
        }
        uVar4 = uVar8 & (longlong)(int)uVar7 - 1U;
        uVar8 = uVar8 + 1;
        *(undefined4 *)((longlong)FVar5 + uVar4 * 4) = 0xffffffff;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  if ((this->HashSize != 0) &&
     (TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TConstIterator::TConstIterator((TConstIterator *)&local_58,&this->Elements),
     local_50.CurrentBitIndex < (local_50.Array)->NumBits)) {
    do {
      uVar7 = this->HashSize - 1U & *(uint *)(*local_58 + (longlong)local_50.CurrentBitIndex * 0xc);
      lVar3 = *local_58 + (longlong)local_50.CurrentBitIndex * 0xc;
      *(uint *)(lVar3 + 8) = uVar7;
      FVar2 = (this->Hash).SecondaryData;
      FVar5 = (ForElementType<FSetElementId>)&this->Hash;
      if (FVar2 != (ForElementType<FSetElementId>)0x0) {
        FVar5 = FVar2;
      }
      uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar7;
      *(undefined4 *)(lVar3 + 4) = *(undefined4 *)((longlong)FVar5 + uVar8 * 4);
      *(int *)((longlong)FVar5 + uVar8 * 4) = local_50.CurrentBitIndex;
      local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
    } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
  }
joined_r0x000141582a38:
  for (; pbVar9 != pbVar1; pbVar9 = pbVar9 + 4) {
    Emplace<int_const_&>(this,local_res8,pbVar9);
  }
  return this;
}

// TSparseSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSparseSetAllocator> @ 141582a90

TSparseSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSparseSetAllocator> * __thiscall
TSparseSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSparseSetAllocator>::
TSparseSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSparseSetAllocator>
          (TSparseSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSparseSetAllocator> *this,
          initializer_list<FString> *param_1)

{
  undefined8 *puVar1;
  FString *pFVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ForElementType<FSetElementId> FVar8;
  ulonglong uVar9;
  wchar_t *pwVar10;
  uint uVar11;
  FString *pFVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  pFVar2 = param_1->_Last;
  uVar9 = 0;
  pFVar12 = param_1->_First;
  *(undefined8 *)&this->Elements = 0;
  *(undefined8 *)&(this->Elements).field_0x8 = 0;
  *(undefined8 *)&(this->Elements).field_0x20 = 0;
  *(undefined4 *)&(this->Elements).field_0x28 = 0;
  *(undefined4 *)&(this->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Elements).field_0x34 = 0;
  (this->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->HashSize = 0;
  uVar11 = (uint)((longlong)pFVar2 - (longlong)pFVar12 >> 4);
  if (uVar11 == 0) goto joined_r0x000141582c7c;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar11);
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this,uVar11);
  if (uVar11 < 4) {
    uVar11 = 1;
  }
  else {
    uVar14 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((this->HashSize != 0) && ((int)uVar11 <= this->HashSize)) goto joined_r0x000141582c7c;
  this->HashSize = uVar11;
  if ((this->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->Hash).SecondaryData,0,0,4);
  }
  if (uVar11 != 0) {
    uVar13 = uVar11;
    if (uVar11 < 2) {
      if ((this->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
        uVar13 = 0;
        goto LAB_141582b65;
      }
    }
    else {
LAB_141582b65:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(this->Hash).SecondaryData,0,uVar13,4);
    }
    if (0 < (int)uVar11) {
      uVar14 = (ulonglong)uVar11;
      do {
        FVar3 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar3;
        }
        uVar6 = uVar9 & (longlong)(int)uVar11 - 1U;
        uVar9 = uVar9 + 1;
        *(undefined4 *)((longlong)FVar8 + uVar6 * 4) = 0xffffffff;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
  }
  if ((this->HashSize != 0) &&
     (TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TConstIterator::TConstIterator((TConstIterator *)&local_58,&this->Elements),
     local_50.CurrentBitIndex < (local_50.Array)->NumBits)) {
    do {
      iVar5 = local_50.CurrentBitIndex;
      iVar7 = *(int *)(*local_58 + 8 + (longlong)local_50.CurrentBitIndex * 0x18);
      puVar1 = (undefined8 *)(*local_58 + (longlong)local_50.CurrentBitIndex * 0x18);
      if (iVar7 == 0) {
        pwVar10 = L"";
        iVar7 = 0;
      }
      else {
        pwVar10 = (wchar_t *)*puVar1;
        iVar7 = iVar7 + -1;
      }
      uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar10);
      uVar11 = this->HashSize - 1U & uVar11;
      *(uint *)((longlong)puVar1 + 0x14) = uVar11;
      FVar3 = (this->Hash).SecondaryData;
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      if (FVar3 != (ForElementType<FSetElementId>)0x0) {
        FVar8 = FVar3;
      }
      uVar9 = (longlong)this->HashSize - 1U & (longlong)(int)uVar11;
      *(undefined4 *)(puVar1 + 2) = *(undefined4 *)((longlong)FVar8 + uVar9 * 4);
      *(int *)((longlong)FVar8 + uVar9 * 4) = iVar5;
      local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
    } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
  }
joined_r0x000141582c7c:
  for (; pFVar12 != pFVar2; pFVar12 = pFVar12 + 1) {
    Emplace<FString_const_&>(this,(FString *)&stack0x00000008,(bool *)pFVar12);
  }
  return this;
}

// Rehash @ 1415df750

void __thiscall
TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator>::Rehash
          (TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator> *this)

{
  longlong lVar1;
  ForElementType<FSetElementId> FVar2;
  ulonglong uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong *local_38;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (this->HashSize != 0) {
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TConstIterator::TConstIterator((TConstIterator *)&local_38,&this->Elements);
    if (local_30.CurrentBitIndex < (local_30.Array)->NumBits) {
      do {
        uVar5 = this->HashSize - 1U &
                *(uint *)(*local_38 + (longlong)local_30.CurrentBitIndex * 0xc);
        lVar1 = *local_38 + (longlong)local_30.CurrentBitIndex * 0xc;
        *(uint *)(lVar1 + 8) = uVar5;
        FVar2 = (this->Hash).SecondaryData;
        FVar4 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar4 = FVar2;
        }
        uVar3 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(lVar1 + 4) = *(undefined4 *)((longlong)FVar4 + uVar3 * 4);
        *(int *)((longlong)FVar4 + uVar3 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 1415df810

void __thiscall
TSparseSet<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TDefaultMapHashableKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,int,0>,FDefaultSparseSetAllocator>
::Rehash(TSparseSet<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TDefaultMapHashableKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,int,0>,FDefaultSparseSetAllocator>
         *this)

{
  longlong lVar1;
  ForElementType<FSetElementId> FVar2;
  uint uVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> FVar5;
  longlong *local_38;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if ((this->HashSize != 0) &&
     (TSparseArray<TSparseSetElement<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TConstIterator::TConstIterator((TConstIterator *)&local_38,&this->Elements),
     local_30.CurrentBitIndex < (local_30.Array)->NumBits)) {
    do {
      lVar1 = *local_38 + (longlong)local_30.CurrentBitIndex * 0x18;
      uVar4 = *(ulonglong *)(*local_38 + (longlong)local_30.CurrentBitIndex * 0x18);
      uVar3 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
      uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
      uVar3 = (uVar3 >> 0x10 ^ uVar3) & this->HashSize - 1U;
      *(uint *)(lVar1 + 0x14) = uVar3;
      FVar2 = (this->Hash).SecondaryData;
      FVar5 = (ForElementType<FSetElementId>)&this->Hash;
      if (FVar2 != (ForElementType<FSetElementId>)0x0) {
        FVar5 = FVar2;
      }
      uVar4 = (longlong)this->HashSize - 1U & (longlong)(int)uVar3;
      *(undefined4 *)(lVar1 + 0x10) = *(undefined4 *)((longlong)FVar5 + uVar4 * 4);
      *(int *)((longlong)FVar5 + uVar4 * 4) = local_30.CurrentBitIndex;
      local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
  }
  return;
}

// Rehash @ 1415df910

void __thiscall
TSparseSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSparseSetAllocator>
::Rehash(TSparseSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSparseSetAllocator>
         *this)

{
  int iVar1;
  longlong lVar2;
  ForElementType<FSetElementId> FVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  wchar_t *pwVar8;
  ForElementType<FSetElementId> FVar9;
  longlong lVar10;
  longlong *local_48;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if ((this->HashSize != 0) &&
     (TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TConstIterator::TConstIterator((TConstIterator *)&local_48,&this->Elements),
     local_40.CurrentBitIndex < (local_40.Array)->NumBits)) {
    do {
      iVar4 = local_40.CurrentBitIndex;
      lVar10 = (longlong)local_40.CurrentBitIndex * 0x20;
      lVar2 = *local_48;
      iVar1 = *(int *)(lVar10 + 8 + lVar2);
      iVar6 = iVar1 + -1;
      if (iVar1 == 0) {
        pwVar8 = L"";
        iVar6 = 0;
      }
      else {
        pwVar8 = *(wchar_t **)(lVar10 + lVar2);
      }
      uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar8);
      uVar5 = this->HashSize - 1U & uVar5;
      *(uint *)(lVar10 + 0x1c + lVar2) = uVar5;
      FVar3 = (this->Hash).SecondaryData;
      FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      if (FVar3 != (ForElementType<FSetElementId>)0x0) {
        FVar9 = FVar3;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)(lVar10 + 0x18 + lVar2) = *(undefined4 *)((longlong)FVar9 + uVar7 * 4);
      *(int *)((longlong)FVar9 + uVar7 * 4) = iVar4;
      local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
  }
  return;
}

// Rehash @ 1415dfa30

void __thiscall
TSparseSet<TUniquePtr<FString,TDefaultDelete<FString>_>,DefaultKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,0>,FDefaultSparseSetAllocator>
::Rehash(TSparseSet<TUniquePtr<FString,TDefaultDelete<FString>_>,DefaultKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,0>,FDefaultSparseSetAllocator>
         *this)

{
  ForElementType<FSetElementId> FVar1;
  uint uVar2;
  ulonglong uVar3;
  ForElementType<FSetElementId> FVar4;
  ulonglong *puVar5;
  longlong *local_38;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if ((this->HashSize != 0) &&
     (TSparseArray<TSparseSetElement<TUniquePtr<FString,TDefaultDelete<FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TConstIterator::TConstIterator((TConstIterator *)&local_38,&this->Elements),
     local_30.CurrentBitIndex < (local_30.Array)->NumBits)) {
    do {
      puVar5 = (ulonglong *)((longlong)local_30.CurrentBitIndex * 0x10 + *local_38);
      uVar2 = ((uint)(*puVar5 >> 0x14) & 0xffff ^ (uint)(*puVar5 >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      uVar2 = (uVar2 >> 0x10 ^ uVar2) & this->HashSize - 1U;
      *(uint *)((longlong)puVar5 + 0xc) = uVar2;
      FVar1 = (this->Hash).SecondaryData;
      FVar4 = (ForElementType<FSetElementId>)&this->Hash;
      if (FVar1 != (ForElementType<FSetElementId>)0x0) {
        FVar4 = FVar1;
      }
      uVar3 = (longlong)this->HashSize - 1U & (longlong)(int)uVar2;
      *(undefined4 *)(puVar5 + 1) = *(undefined4 *)((longlong)FVar4 + uVar3 * 4);
      *(int *)((longlong)FVar4 + uVar3 * 4) = local_30.CurrentBitIndex;
      local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
  }
  return;
}

// Rehash @ 1415dfb30

void __thiscall
TSparseSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSparseSetAllocator>::Rehash
          (TSparseSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSparseSetAllocator> *this)

{
  int iVar1;
  longlong lVar2;
  ForElementType<FSetElementId> FVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  wchar_t *pwVar9;
  ForElementType<FSetElementId> FVar10;
  longlong *local_48;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if ((this->HashSize != 0) &&
     (TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TConstIterator::TConstIterator((TConstIterator *)&local_48,&this->Elements),
     local_40.CurrentBitIndex < (local_40.Array)->NumBits)) {
    do {
      iVar4 = local_40.CurrentBitIndex;
      lVar6 = (longlong)local_40.CurrentBitIndex;
      lVar2 = *local_48;
      iVar1 = *(int *)(lVar2 + 8 + lVar6 * 0x18);
      iVar7 = iVar1 + -1;
      if (iVar1 == 0) {
        pwVar9 = L"";
        iVar7 = 0;
      }
      else {
        pwVar9 = *(wchar_t **)(lVar2 + lVar6 * 0x18);
      }
      uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar9);
      uVar5 = this->HashSize - 1U & uVar5;
      *(uint *)(lVar2 + 0x14 + lVar6 * 0x18) = uVar5;
      FVar3 = (this->Hash).SecondaryData;
      FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      if (FVar3 != (ForElementType<FSetElementId>)0x0) {
        FVar10 = FVar3;
      }
      uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)(lVar2 + 0x10 + lVar6 * 0x18) = *(undefined4 *)((longlong)FVar10 + uVar8 * 4);
      *(int *)((longlong)FVar10 + uVar8 * 4) = iVar4;
      local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
  }
  return;
}

// Emplace<unsigned_int_&> @ 141ae4330

FSetElementId __thiscall
TSparseSet<FSetTestNonCopyableTestData,DefaultKeyFuncs<FSetTestNonCopyableTestData,0>,FDefaultSparseSetAllocator>
::Emplace<unsigned_int_&>
          (TSparseSet<FSetTestNonCopyableTestData,DefaultKeyFuncs<FSetTestNonCopyableTestData,0>,FDefaultSparseSetAllocator>
           *this,uint *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  char *in_R9;
  bool bVar8;
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar4 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar4 + 4 + (longlong)iVar5 * 0xc);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar4 + (longlong)iVar2 * 0xc) = 0xffffffff;
    }
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar5);
  if (local_38.Pointer != (TSparseSetElement<FSetTestNonCopyableTestData> *)0x0) {
    *(undefined4 *)local_38.Pointer = *(undefined4 *)param_2;
    *(undefined4 *)((longlong)local_38.Pointer + 4) = 0xffffffff;
  }
  iVar1 = *(int *)&(this->Elements).field_0x8;
  bVar8 = false;
  iVar5 = *(int *)&(this->Elements).field_0x34;
  uVar3 = *(uint *)local_38.Pointer;
  if ((iVar1 - iVar5 != 1) && (iVar1 != iVar5)) {
    FVar6 = (this->Hash).SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&this->Hash;
    }
    uVar7 = *(uint *)((longlong)FVar6 + (ulonglong)(this->HashSize - 1U & uVar3) * 4);
    if (uVar7 != 0xffffffff) {
      lVar4 = *(longlong *)&this->Elements;
      do {
        if (*(uint *)(lVar4 + (longlong)(int)uVar7 * 0xc) == uVar3) {
          bVar8 = uVar7 != 0xffffffff;
          if (bVar8) {
            *(uint *)(lVar4 + (longlong)(int)uVar7 * 0xc) = uVar3;
            TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = uVar7;
          }
          break;
        }
        uVar7 = *(uint *)(lVar4 + 4 + (longlong)(int)uVar7 * 0xc);
      } while (uVar7 != 0xffffffff);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar8;
  }
  if (bVar8 == false) {
    RehashOrLink(this,uVar3,local_38.Pointer,local_38.Index);
  }
  *param_1 = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<int_const_&> @ 141ae44c0

FSetElementId __thiscall
TSparseSet<int,DefaultKeyFuncs<int,0>,TFixedSparseSetAllocator<64,2,4>_>::Emplace<int_const_&>
          (TSparseSet<int,DefaultKeyFuncs<int,0>,TFixedSparseSetAllocator<64,2,4>_> *this,
          int *param_1,bool *param_2)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  bool *in_R9;
  TTypeCompatibleBytes<FSetElementId> local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  TSparseArrayBase<12,4,TFixedSparseArrayAllocator<64>_>::AddUninitialized
            ((TSparseArrayBase<12,4,TFixedSparseArrayAllocator<64>_> *)this,&local_28);
  if (local_28.Pointer != (TSparseSetElement<int> *)0x0) {
    *(undefined4 *)local_28.Pointer = *(undefined4 *)param_2;
    *(undefined4 *)((longlong)local_28.Pointer + 4) = 0xffffffff;
  }
  uVar4 = *(uint *)local_28.Pointer;
  local_res8[0].Pad[0] = (undefined1)local_28.Index;
  local_res8[0].Pad[1] = local_28.Index._1_1_;
  local_res8[0].Pad[2] = local_28.Index._2_1_;
  local_res8[0].Pad[3] = local_28.Index._3_1_;
  bVar2 = TryReplaceExisting(this,uVar4,local_28.Pointer,(int *)local_res8,in_R9);
  if (!bVar2) {
    uVar7 = *(int *)&(this->Elements).field_0x300 - *(int *)&(this->Elements).field_0x31c;
    uVar3 = 1;
    if (uVar7 >> 1 != 0) {
      uVar3 = uVar7 >> 1;
    }
    uVar5 = (ulonglong)(uVar3 - 1) * 2 + 1;
    lVar1 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    uVar6 = 1 << ((byte)lVar1 & 0x1f);
    uVar3 = 0x20;
    if ((0x1f < uVar6) && (uVar3 = uVar6, uVar7 < 4)) {
      uVar3 = 0x20;
    }
    if (((int)uVar7 < 1) || ((int)uVar3 <= this->HashSize)) {
      uVar4 = this->HashSize - 1U & uVar4;
      *(uint *)((longlong)local_28.Pointer + 8) = uVar4;
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar4;
      *(undefined4 *)((longlong)local_28.Pointer + 4) =
           *(undefined4 *)(this->Hash).InlineData[uVar5].Pad;
      *&(this->Hash).InlineData[uVar5].Pad = local_res8[0].Pad;
    }
    else {
      this->HashSize = uVar3;
      Rehash(this);
    }
  }
  *param_1 = (int)local_res8[0].Pad;
  return (FSetElementId)(int)param_1;
}

// Emplace<FString_const_&> @ 141ae45e0

FSetElementId __thiscall
TSparseSet<FString,DefaultKeyFuncs<FString,1>,FDefaultSparseSetAllocator>::Emplace<FString_const_&>
          (TSparseSet<FString,DefaultKeyFuncs<FString,1>,FDefaultSparseSetAllocator> *this,
          FString *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  wchar_t *pwVar7;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  int iVar11;
  undefined1 *in_R9;
  FSparseArrayAllocationInfo local_28;
  FString *pFVar10;
  
  iVar9 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar9 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    iVar9 = iVar9 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar3 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar3);
  pFVar10 = (FString *)0x0;
  iVar9 = 0;
  if (local_28.Pointer != (FString *)0x0) {
    ::FString::FString(local_28.Pointer,(FString *)param_2);
    *(undefined4 *)&(((FString *)((longlong)local_28.Pointer + 0x10))->Data).AllocatorInstance.Data
         = 0xffffffff;
    pFVar10 = local_28.Pointer;
  }
  iVar3 = (pFVar10->Data).ArrayNum;
  if (iVar3 == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    iVar9 = iVar3 + -1;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar7);
  if (in_R9 != (undefined1 *)0x0) {
    *in_R9 = 0;
  }
  uVar6 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if (3 < uVar6) {
    uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    iVar11 = 1 << ((byte)lVar2 & 0x1f);
  }
  if (((int)uVar6 < 1) || (iVar11 <= this->HashSize)) {
    uVar4 = this->HashSize - 1U & uVar4;
    *(uint *)((longlong)&pFVar10[1].Data.AllocatorInstance.Data + 4) = uVar4;
    FVar8 = (this->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
    }
    uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar4;
    *(undefined4 *)&pFVar10[1].Data.AllocatorInstance.Data =
         *(undefined4 *)((longlong)FVar8 + uVar5 * 4);
    *(int *)((longlong)FVar8 + uVar5 * 4) = local_28.Index;
  }
  else {
    this->HashSize = iVar11;
    Rehash(this);
  }
  *(int *)&(param_1->Data).AllocatorInstance.Data = local_28.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<int> @ 141ae47d0

FSetElementId __thiscall
TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator>::Emplace<int>
          (TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator> *this,int *param_1,
          bool *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  int iVar6;
  char *in_R9;
  bool bVar7;
  FSparseArrayAllocationInfo local_38;
  
  iVar6 = *(int *)&(this->Elements).field_0x34;
  if (iVar6 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar6 = iVar6 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar3 + 4 + (longlong)iVar4 * 0xc);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar1 * 0xc) = 0xffffffff;
    }
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  if (local_38.Pointer != (TSparseSetElement<int> *)0x0) {
    *(undefined4 *)local_38.Pointer = *(undefined4 *)param_2;
    *(undefined4 *)((longlong)local_38.Pointer + 4) = 0xffffffff;
  }
  iVar6 = *(int *)&(this->Elements).field_0x8;
  bVar7 = false;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar2 = *(uint *)local_38.Pointer;
  if ((iVar6 - iVar4 != 1) && (iVar6 != iVar4)) {
    FVar5 = (this->Hash).SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar6 = *(int *)((longlong)FVar5 + (ulonglong)(this->HashSize - 1U & uVar2) * 4);
    if (iVar6 != -1) {
      lVar3 = *(longlong *)&this->Elements;
      do {
        if (*(uint *)(lVar3 + (longlong)iVar6 * 0xc) == uVar2) {
          bVar7 = iVar6 != -1;
          if (bVar7) {
            *(uint *)(lVar3 + (longlong)iVar6 * 0xc) = uVar2;
            TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar6;
          }
          break;
        }
        iVar6 = *(int *)(lVar3 + 4 + (longlong)iVar6 * 0xc);
      } while (iVar6 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar7;
  }
  if (bVar7 == false) {
    RehashOrLink(this,uVar2,local_38.Pointer,local_38.Index);
  }
  *param_1 = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<FSetTestNonCopyableTestData> @ 141ae4960

FSetElementId __thiscall
TSparseSet<FSetTestNonCopyableTestData,DefaultKeyFuncs<FSetTestNonCopyableTestData,0>,FDefaultSparseSetAllocator>
::Emplace<FSetTestNonCopyableTestData>
          (TSparseSet<FSetTestNonCopyableTestData,DefaultKeyFuncs<FSetTestNonCopyableTestData,0>,FDefaultSparseSetAllocator>
           *this,FSetTestNonCopyableTestData *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  char *in_R9;
  bool bVar8;
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar4 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar4 + 4 + (longlong)iVar5 * 0xc);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar4 + (longlong)iVar2 * 0xc) = 0xffffffff;
    }
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar5);
  if (local_38.Pointer != (TSparseSetElement<FSetTestNonCopyableTestData> *)0x0) {
    *(undefined4 *)local_38.Pointer = *(undefined4 *)param_2;
    *(undefined4 *)((longlong)local_38.Pointer + 4) = 0xffffffff;
  }
  iVar1 = *(int *)&(this->Elements).field_0x8;
  bVar8 = false;
  iVar5 = *(int *)&(this->Elements).field_0x34;
  uVar3 = *(uint *)local_38.Pointer;
  if ((iVar1 - iVar5 != 1) && (iVar1 != iVar5)) {
    FVar6 = (this->Hash).SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&this->Hash;
    }
    uVar7 = *(uint *)((longlong)FVar6 + (ulonglong)(this->HashSize - 1U & uVar3) * 4);
    if (uVar7 != 0xffffffff) {
      lVar4 = *(longlong *)&this->Elements;
      do {
        if (*(uint *)(lVar4 + (longlong)(int)uVar7 * 0xc) == uVar3) {
          bVar8 = uVar7 != 0xffffffff;
          if (bVar8) {
            *(uint *)(lVar4 + (longlong)(int)uVar7 * 0xc) = uVar3;
            TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = uVar7;
          }
          break;
        }
        uVar7 = *(uint *)(lVar4 + 4 + (longlong)(int)uVar7 * 0xc);
      } while (uVar7 != 0xffffffff);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar8;
  }
  if (bVar8 == false) {
    RehashOrLink(this,uVar3,local_38.Pointer,local_38.Index);
  }
  param_1->Value = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// FindIndexByHash<FString> @ 141ae5b10

int __thiscall
TSparseSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSparseSetAllocator>::FindIndexByHash<FString>
          (TSparseSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSparseSetAllocator> *this,
          uint param_1,FString *param_2)

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
      iVar4 = *(int *)(*(longlong *)&this->Elements + 8 + (longlong)iVar2 * 0x18);
      lVar1 = (longlong)iVar2 * 0x18;
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
      iVar2 = *(int *)(lVar1 + 0x10 + *(longlong *)&this->Elements);
    }
  }
  return -1;
}

// RemoveImpl<FString> @ 141afd9b0

int __thiscall
TSparseSet<FString,DefaultKeyFuncs<FString,1>,FDefaultSparseSetAllocator>::RemoveImpl<FString>
          (TSparseSet<FString,DefaultKeyFuncs<FString,1>,FDefaultSparseSetAllocator> *this,
          uint param_1,FString *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  undefined1 *puVar10;
  uint *puVar11;
  longlong lVar12;
  ForElementType<FSetElementId> FVar13;
  uint *puVar14;
  bool bVar15;
  
  iVar7 = 0;
  FVar13 = (this->Hash).SecondaryData;
  lVar12 = (longlong)(int)(this->HashSize - 1U & param_1);
  if (FVar13 == (ForElementType<FSetElementId>)0x0) {
    FVar13 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar1 = *(uint *)((longlong)FVar13 + lVar12 * 4);
  puVar14 = (uint *)((longlong)FVar13 + lVar12 * 4);
  do {
    if (uVar1 == 0xffffffff) {
      return iVar7;
    }
    lVar3 = *(longlong *)&this->Elements;
    iVar6 = *(int *)(lVar3 + 8 + (longlong)(int)uVar1 * 0x18);
    lVar12 = (longlong)(int)uVar1 * 0x18;
    iVar2 = (param_2->Data).ArrayNum;
    if (iVar6 == iVar2) {
      if (1 < iVar6) {
        iVar6 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)(lVar3 + lVar12),
                           (wchar_t *)(param_2->Data).AllocatorInstance.Data);
        bVar15 = iVar6 == 0;
        goto LAB_141afda49;
      }
LAB_141afda5c:
      if (((int)uVar1 < 0) || (*(int *)&(this->Elements).field_0x28 <= (int)uVar1)) {
LAB_141afdabc:
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Elements.IsValidIndex(ElementIndex)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                            ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
        if (bVar15) {
          pcVar5 = (code *)swi(3);
          iVar7 = (*pcVar5)();
          return iVar7;
        }
      }
      else {
        if ((*(int *)&(this->Elements).field_0x28 <= (int)uVar1) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5c6,L""), bVar15)) {
          pcVar5 = (code *)swi(3);
          iVar7 = (*pcVar5)();
          return iVar7;
        }
        puVar4 = *(undefined1 **)&(this->Elements).field_0x20;
        puVar10 = &(this->Elements).field_0x10;
        if (puVar4 != (undefined1 *)0x0) {
          puVar10 = puVar4;
        }
        uVar8 = uVar1;
        if ((int)uVar1 < 0) {
          uVar8 = uVar1 + 0x1f;
        }
        if ((*(uint *)(puVar10 + (longlong)((int)uVar8 >> 5) * 4) >> (uVar1 & 0x1f) & 1) == 0)
        goto LAB_141afdabc;
      }
      FVar13 = (this->Hash).SecondaryData;
      lVar12 = *(longlong *)&this->Elements + lVar12;
      FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      if (FVar13 != (ForElementType<FSetElementId>)0x0) {
        FVar9 = FVar13;
      }
      puVar11 = (uint *)((longlong)FVar9 + (longlong)*(int *)(lVar12 + 0x14) * 4);
      while( true ) {
        uVar8 = *puVar11;
        if ((uVar8 == 0xffffffff) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("NextElementIndex != INDEX_NONE",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                ,0x2b5,L"Corrupt hash"), bVar15)) {
          pcVar5 = (code *)swi(3);
          iVar7 = (*pcVar5)();
          return iVar7;
        }
        if (uVar8 == uVar1) break;
        puVar11 = (uint *)(*(longlong *)&this->Elements + (longlong)(int)uVar8 * 0x18 + 0x10);
      }
      *puVar11 = *(uint *)(lVar12 + 0x10);
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar1,1);
      TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar1,1);
      iVar7 = iVar7 + 1;
    }
    else {
      bVar15 = iVar6 + iVar2 == 1;
LAB_141afda49:
      if (bVar15) goto LAB_141afda5c;
      puVar14 = (uint *)(lVar3 + 0x10 + lVar12);
    }
    uVar1 = *puVar14;
  } while( true );
}

// TSparseSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSparseSetAllocator> @ 141b18d80

TSparseSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSparseSetAllocator> * __thiscall
TSparseSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSparseSetAllocator>::
TSparseSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSparseSetAllocator>
          (TSparseSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSparseSetAllocator> *this,
          TSparseSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSparseSetAllocator> *param_1)

{
  undefined1 *_Src;
  undefined1 *_Dst;
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  
  *(undefined8 *)&this->Elements = 0;
  *(undefined8 *)&(this->Elements).field_0x8 = 0;
  *(undefined8 *)&(this->Elements).field_0x20 = 0;
  *(undefined4 *)&(this->Elements).field_0x28 = 0;
  *(undefined4 *)&(this->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Elements).field_0x34 = 0;
  (this->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->HashSize = 0;
  if (this != param_1) {
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&this->Elements,0,0);
    if (*(void **)&this->Elements != (void *)0x0) {
      FMemory::Free(*(void **)&this->Elements);
    }
    _Src = &(param_1->Elements).field_0x10;
    *(undefined8 *)&this->Elements = *(undefined8 *)&param_1->Elements;
    _Dst = &(this->Elements).field_0x10;
    *(undefined8 *)&param_1->Elements = 0;
    *(undefined4 *)&(this->Elements).field_0x8 = *(undefined4 *)&(param_1->Elements).field_0x8;
    *(undefined4 *)&(this->Elements).field_0xc = *(undefined4 *)&(param_1->Elements).field_0xc;
    *(undefined8 *)&(param_1->Elements).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->Elements).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar1 = *(void **)&(this->Elements).field_0x20;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      *(undefined8 *)&(this->Elements).field_0x20 = *(undefined8 *)&(param_1->Elements).field_0x20;
      *(undefined8 *)&(param_1->Elements).field_0x20 = 0;
      *(undefined4 *)&(this->Elements).field_0x28 = *(undefined4 *)&(param_1->Elements).field_0x28;
      *(undefined4 *)&(this->Elements).field_0x2c = *(undefined4 *)&(param_1->Elements).field_0x2c;
      *(undefined8 *)&(param_1->Elements).field_0x28 = 0;
    }
    *(undefined4 *)&(this->Elements).field_0x30 = *(undefined4 *)&(param_1->Elements).field_0x30;
    *(undefined4 *)&(this->Elements).field_0x34 = *(undefined4 *)&(param_1->Elements).field_0x34;
    *(undefined4 *)&(param_1->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Elements).field_0x34 = 0;
  }
  if ((param_1->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) {
    *(undefined4 *)(this->Hash).InlineData = *(undefined4 *)(param_1->Hash).InlineData;
  }
  FVar2 = (this->Hash).SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  (this->Hash).SecondaryData = (param_1->Hash).SecondaryData;
  (param_1->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->HashSize = param_1->HashSize;
  param_1->HashSize = 0;
  return this;
}

// Append @ 141b38ae0

void __thiscall
TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator>::Append
          (TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator> *this,
          TArrayView<int_const_,int> *param_1)

{
  bool *pbVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool *pbVar8;
  int local_res8 [2];
  
  uVar5 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  iVar3 = param_1->ArrayNum;
  uVar7 = iVar3 + uVar5;
  if (uVar5 < uVar7) {
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar7);
    }
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this,uVar7);
    if (uVar7 < 4) {
      iVar6 = 1;
    }
    else {
      uVar2 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar4 & 0x1f);
    }
    if ((this->HashSize == 0) || (this->HashSize < iVar6)) {
      this->HashSize = iVar6;
      Rehash(this);
    }
  }
  pbVar8 = (bool *)param_1->DataPtr;
  pbVar1 = pbVar8 + (longlong)iVar3 * 4;
  for (; pbVar8 != pbVar1; pbVar8 = pbVar8 + 4) {
    Emplace<int_const_&>(this,local_res8,pbVar8);
  }
  return;
}

// Difference @ 141b3dbe0

TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator> * __thiscall
TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator>::Difference
          (TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator> *this,
          TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator> *__return_storage_ptr__,
          TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator> *param_1)

{
  ForElementType<FSetElementId> FVar1;
  longlong lVar2;
  undefined1 *puVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  ulong64 uVar10;
  undefined1 *puVar11;
  ForElementType<FSetElementId> FVar12;
  ulonglong uVar13;
  uint *puVar14;
  undefined1 *this_00;
  uint *puVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int iVar21;
  TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator> *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator> *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  FSparseArrayAllocationInfo local_60 [2];
  
  uVar20 = 0;
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  uVar18 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  uVar16 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if (uVar16 == 0) goto LAB_141b3dd97;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar16);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)__return_storage_ptr__,uVar16);
  if (uVar16 < 4) {
    uVar16 = 1;
  }
  else {
    uVar13 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar16 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((__return_storage_ptr__->HashSize != 0) && ((int)uVar16 <= __return_storage_ptr__->HashSize))
  goto LAB_141b3dd97;
  __return_storage_ptr__->HashSize = uVar16;
  if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,0,4);
  }
  if (uVar16 != 0) {
    uVar5 = uVar16;
    if (uVar16 < 2) {
      if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
        uVar5 = 0;
        goto LAB_141b3dcbb;
      }
    }
    else {
LAB_141b3dcbb:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,uVar5,4);
    }
    if (0 < (int)uVar16) {
      uVar19 = (ulonglong)uVar16;
      uVar13 = uVar20;
      do {
        FVar1 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar12 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar1 != (ForElementType<FSetElementId>)0x0) {
          FVar12 = FVar1;
        }
        uVar9 = (longlong)(int)uVar16 - 1U & uVar13;
        uVar13 = uVar13 + 1;
        *(undefined4 *)((longlong)FVar12 + uVar9 * 4) = 0xffffffff;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
  }
  if (__return_storage_ptr__->HashSize != 0) {
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TConstIterator::TConstIterator((TConstIterator *)&local_b8,&__return_storage_ptr__->Elements);
    if (TStack_b0.CurrentBitIndex < (TStack_b0.Array)->NumBits) {
      do {
        uVar16 = __return_storage_ptr__->HashSize - 1U &
                 *(uint *)(*(longlong *)local_b8 + (longlong)TStack_b0.CurrentBitIndex * 0xc);
        lVar4 = *(longlong *)local_b8 + (longlong)TStack_b0.CurrentBitIndex * 0xc;
        *(uint *)(lVar4 + 8) = uVar16;
        FVar1 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar12 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar1 != (ForElementType<FSetElementId>)0x0) {
          FVar12 = FVar1;
        }
        uVar13 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar16;
        *(undefined4 *)(lVar4 + 4) = *(undefined4 *)((longlong)FVar12 + uVar13 * 4);
        *(int *)((longlong)FVar12 + uVar13 * 4) = TStack_b0.CurrentBitIndex;
        TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
      } while (TStack_b0.CurrentBitIndex < (TStack_b0.Array)->NumBits);
    }
  }
LAB_141b3dd97:
  uVar16 = *(uint *)&(this->Elements).field_0x28;
  TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
  TStack_88._padding_._4_4_ = 1;
  TStack_88.BaseBitIndex = 0;
  uVar13 = uVar20;
  if (uVar16 != 0) {
    puVar15 = *(uint **)&(this->Elements).field_0x20;
    uVar13 = (ulonglong)uVar16;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)TStack_b0.Array;
    }
    uVar5 = *puVar15;
    uVar19 = uVar20;
    TStack_88.BaseBitIndex = 0;
    uVar18 = 0;
    while (uVar5 == 0) {
      iVar17 = (int)uVar20;
      TStack_88.BaseBitIndex = (int)uVar19 + 0x20;
      uVar19 = (ulonglong)(uint)TStack_88.BaseBitIndex;
      uVar18 = iVar17 + 1;
      uVar20 = (ulonglong)uVar18;
      if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar18)
      goto LAB_141b3de1b;
      uVar5 = puVar15[(longlong)iVar17 + 1];
    }
    TStack_88._padding_._4_4_ = -uVar5 & uVar5;
    uVar20 = (ulonglong)TStack_88._padding_._4_4_ * 2 + 1;
    lVar4 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar5 = (TStack_88.BaseBitIndex - 1U) + (int)lVar4;
    if ((int)uVar16 < (int)uVar5) {
      uVar5 = uVar16;
    }
    uVar13 = (ulonglong)uVar5;
  }
LAB_141b3de1b:
  TStack_88.UnvisitedBitMask = 0xffffffff;
  TStack_88.CurrentBitIndex = (int)uVar13;
  TStack_88._28_4_ = local_60[1].Pointer._4_4_;
  TStack_b0._padding_ = CONCAT44(TStack_88._padding_._4_4_,uVar18);
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  TStack_b0._28_4_ = local_60[1].Pointer._4_4_;
  TStack_b0.BaseBitIndex = TStack_88.BaseBitIndex;
  local_b8 = this;
  local_90 = this;
  TStack_88._padding_._0_4_ = uVar18;
  TStack_88.Array = TStack_b0.Array;
  TStack_b0.CurrentBitIndex = TStack_88.CurrentBitIndex;
  if (TStack_88.CurrentBitIndex < (int)uVar16) {
    do {
      iVar17 = TStack_b0.CurrentBitIndex;
      lVar4 = *(longlong *)&local_b8->Elements;
      uVar18 = *(uint *)(lVar4 + (longlong)(int)uVar13 * 0xc);
      if (*(int *)&(param_1->Elements).field_0x8 != *(int *)&(param_1->Elements).field_0x34) {
        FVar1 = (param_1->Hash).SecondaryData;
        FVar12 = (ForElementType<FSetElementId>)&param_1->Hash;
        if (FVar1 != (ForElementType<FSetElementId>)0x0) {
          FVar12 = FVar1;
        }
        iVar6 = *(int *)((longlong)FVar12 + (ulonglong)(param_1->HashSize - 1U & uVar18) * 4);
        if (iVar6 != -1) {
          do {
            if (*(uint *)(*(longlong *)&param_1->Elements + (longlong)iVar6 * 0xc) == uVar18)
            goto LAB_141b3e2b1;
            iVar6 = *(int *)(*(longlong *)&param_1->Elements + 4 + (longlong)iVar6 * 0xc);
          } while (iVar6 != -1);
        }
      }
      iVar6 = *(int *)&(__return_storage_ptr__->Elements).field_0x34;
      if (iVar6 == 0) {
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0xc,4,1,(ForAnyElementType *)__return_storage_ptr__,
                           (int *)&(__return_storage_ptr__->Elements).field_0x8,
                           (int *)&(__return_storage_ptr__->Elements).field_0xc);
        iVar6 = *(int *)&(__return_storage_ptr__->Elements).field_0x28;
        this_00 = &(__return_storage_ptr__->Elements).field_0x10;
        iVar21 = (int)((iVar6 >> 0x1f & 0x1fU) + iVar6) >> 5;
        if ((iVar6 == 0) || (iVar21 != (int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5)) {
          iVar8 = *(int *)&(__return_storage_ptr__->Elements).field_0x2c;
          if (iVar8 < iVar6 + 1) {
            uVar18 = iVar8 + 0x1fU >> 5;
            uVar16 = iVar6 + 0x20U >> 5;
            if (uVar16 < 5) {
              iVar8 = 4;
            }
            else {
              uVar20 = (ulonglong)uVar16;
              if (uVar18 < 5) {
                uVar18 = 0;
              }
              if (uVar18 == 0) {
                uVar13 = 4;
                if (4 < uVar20) {
                  uVar13 = uVar20;
                }
              }
              else {
                uVar13 = ((ulonglong)uVar16 * 3 >> 3) + 0x10 + uVar20;
              }
              uVar10 = FMemory::QuantizeSize(uVar13 * 4,0);
              iVar8 = (int)(uVar10 >> 2);
              if (iVar8 < (int)uVar16) {
                iVar8 = 0x7fffffff;
              }
            }
            *(int *)&(__return_storage_ptr__->Elements).field_0x2c = iVar8 << 5;
            TBitArray<FDefaultBitArrayAllocator>::Realloc
                      ((TBitArray<FDefaultBitArrayAllocator> *)this_00,
                       *(int *)&(__return_storage_ptr__->Elements).field_0x28);
          }
          puVar3 = &(__return_storage_ptr__->Elements).field_0x28;
          *(int *)puVar3 = *(int *)puVar3 + 1;
          iVar8 = *(int *)&(__return_storage_ptr__->Elements).field_0x28;
          uVar16 = iVar8 >> 0x1f & 0x1f;
          uVar18 = iVar8 + uVar16;
          iVar8 = (uVar18 & 0x1f) - uVar16;
          if (iVar8 != 0) {
            puVar3 = *(undefined1 **)&(__return_storage_ptr__->Elements).field_0x20;
            puVar11 = this_00;
            if (puVar3 != (undefined1 *)0x0) {
              puVar11 = puVar3;
            }
            *(uint *)(puVar11 + (longlong)((int)uVar18 >> 5) * 4) =
                 *(uint *)(puVar11 + (longlong)((int)uVar18 >> 5) * 4) &
                 0xffffffffU >> (0x20U - (char)iVar8 & 0x1f);
          }
        }
        else {
          *(int *)&(__return_storage_ptr__->Elements).field_0x28 = iVar6 + 1;
        }
        puVar3 = *(undefined1 **)&(__return_storage_ptr__->Elements).field_0x20;
        if (puVar3 != (undefined1 *)0x0) {
          this_00 = puVar3;
        }
        *(uint *)(this_00 + (longlong)iVar21 * 4) =
             *(uint *)(this_00 + (longlong)iVar21 * 4) & ~(1 << ((byte)iVar6 & 0x1f));
      }
      else {
        iVar7 = *(int *)&(__return_storage_ptr__->Elements).field_0x30;
        iVar6 = iVar6 + -1;
        lVar2 = *(longlong *)&__return_storage_ptr__->Elements;
        iVar21 = *(int *)(lVar2 + 4 + (longlong)iVar7 * 0xc);
        *(int *)&(__return_storage_ptr__->Elements).field_0x30 = iVar21;
        *(int *)&(__return_storage_ptr__->Elements).field_0x34 = iVar6;
        if (iVar6 != 0) {
          *(undefined4 *)(lVar2 + (longlong)iVar21 * 0xc) = 0xffffffff;
        }
      }
      TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)__return_storage_ptr__,local_60,iVar7);
      puVar14 = (uint *)0x0;
      puVar15 = puVar14;
      if (local_60[0].Pointer != (uint *)0x0) {
        *(uint *)local_60[0].Pointer = *(uint *)(lVar4 + (longlong)iVar17 * 0xc);
        *(uint *)((longlong)local_60[0].Pointer + 4) = 0xffffffff;
        puVar15 = local_60[0].Pointer;
      }
      iVar17 = *(int *)&(__return_storage_ptr__->Elements).field_0x8;
      iVar6 = *(int *)&(__return_storage_ptr__->Elements).field_0x34;
      uVar18 = *puVar15;
      if ((iVar17 - iVar6 != 1) && (iVar17 != iVar6)) {
        FVar1 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar12 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar1 != (ForElementType<FSetElementId>)0x0) {
          FVar12 = FVar1;
        }
        iVar17 = *(int *)((longlong)FVar12 +
                         (ulonglong)(__return_storage_ptr__->HashSize - 1U & uVar18) * 4);
        if (iVar17 != -1) {
          lVar4 = *(longlong *)&__return_storage_ptr__->Elements;
          do {
            if (*(uint *)(lVar4 + (longlong)iVar17 * 0xc) == uVar18) {
              if (iVar17 != -1) {
                *(uint *)(lVar4 + (longlong)iVar17 * 0xc) = uVar18;
                TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::RemoveAtUninitialized
                          ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)__return_storage_ptr__,local_60[0].Index,1);
                goto LAB_141b3e2b1;
              }
              break;
            }
            iVar17 = *(int *)(lVar4 + 4 + (longlong)iVar17 * 0xc);
          } while (iVar17 != -1);
        }
      }
      uVar5 = 1;
      uVar16 = *(int *)&(__return_storage_ptr__->Elements).field_0x8 -
               *(int *)&(__return_storage_ptr__->Elements).field_0x34;
      if (3 < uVar16) {
        uVar20 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
        lVar4 = 0x3f;
        if (uVar20 != 0) {
          for (; uVar20 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        uVar5 = 1 << ((byte)lVar4 & 0x1f);
      }
      if (((int)uVar16 < 1) || ((int)uVar5 <= __return_storage_ptr__->HashSize)) {
        uVar18 = __return_storage_ptr__->HashSize - 1U & uVar18;
        puVar15[2] = uVar18;
        FVar1 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar12 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar1 != (ForElementType<FSetElementId>)0x0) {
          FVar12 = FVar1;
        }
        uVar20 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar18;
        puVar15[1] = *(uint *)((longlong)FVar12 + uVar20 * 4);
        *(int *)((longlong)FVar12 + uVar20 * 4) = local_60[0].Index;
      }
      else {
        __return_storage_ptr__->HashSize = uVar5;
        if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,0,4);
        }
        if (uVar5 != 0) {
          uVar18 = uVar5;
          if (uVar5 < 2) {
            if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0)
            {
              uVar18 = 0;
              goto LAB_141b3e199;
            }
          }
          else {
LAB_141b3e199:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,uVar18,4
                      );
          }
          if (0 < (int)uVar5) {
            uVar20 = (ulonglong)uVar5;
            do {
              FVar1 = (__return_storage_ptr__->Hash).SecondaryData;
              FVar12 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
              if (FVar1 != (ForElementType<FSetElementId>)0x0) {
                FVar12 = FVar1;
              }
              uVar13 = (ulonglong)puVar14 & (longlong)(int)uVar5 - 1U;
              puVar14 = (uint *)((longlong)puVar14 + 1);
              *(undefined4 *)((longlong)FVar12 + uVar13 * 4) = 0xffffffff;
              uVar20 = uVar20 - 1;
            } while (uVar20 != 0);
          }
        }
        if ((__return_storage_ptr__->HashSize != 0) &&
           (TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TConstIterator::TConstIterator
                      ((TConstIterator *)&local_90,&__return_storage_ptr__->Elements),
           TStack_88.CurrentBitIndex < (TStack_88.Array)->NumBits)) {
          do {
            uVar18 = __return_storage_ptr__->HashSize - 1U &
                     *(uint *)(*(longlong *)&local_90->Elements +
                              (longlong)TStack_88.CurrentBitIndex * 0xc);
            lVar4 = *(longlong *)&local_90->Elements + (longlong)TStack_88.CurrentBitIndex * 0xc;
            *(uint *)(lVar4 + 8) = uVar18;
            FVar1 = (__return_storage_ptr__->Hash).SecondaryData;
            FVar12 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
            if (FVar1 != (ForElementType<FSetElementId>)0x0) {
              FVar12 = FVar1;
            }
            uVar20 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar18;
            *(undefined4 *)(lVar4 + 4) = *(undefined4 *)((longlong)FVar12 + uVar20 * 4);
            *(int *)((longlong)FVar12 + uVar20 * 4) = TStack_88.CurrentBitIndex;
            TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
          } while (TStack_88.CurrentBitIndex < (TStack_88.Array)->NumBits);
        }
      }
LAB_141b3e2b1:
      TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
      uVar13 = (ulonglong)(uint)TStack_b0.CurrentBitIndex;
    } while (TStack_b0.CurrentBitIndex < (TStack_b0.Array)->NumBits);
  }
  return __return_storage_ptr__;
}

// Difference @ 141b3e310

TSparseSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSparseSetAllocator> * __thiscall
TSparseSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSparseSetAllocator>::Difference
          (TSparseSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSparseSetAllocator> *this,
          TSparseSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSparseSetAllocator>
          *__return_storage_ptr__,
          TSparseSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSparseSetAllocator> *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  TSparseSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSparseSetAllocator> *pTVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ForElementType<FSetElementId> FVar8;
  longlong lVar9;
  ulonglong uVar10;
  wchar_t *pwVar11;
  uint uVar12;
  uint uVar13;
  FString *pFVar14;
  ulonglong uVar15;
  uint *puVar16;
  TSparseSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSparseSetAllocator> *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  TSparseSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSparseSetAllocator> *local_70;
  int iStack_68;
  uint uStack_64;
  undefined1 *local_60;
  undefined4 uStack_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  uVar12 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if (uVar12 == 0) goto LAB_141b3e502;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar12);
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)__return_storage_ptr__,uVar12);
  uVar13 = 1;
  if (3 < uVar12) {
    uVar10 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar13 = 1 << ((byte)lVar9 & 0x1f);
  }
  if ((__return_storage_ptr__->HashSize != 0) && ((int)uVar13 <= __return_storage_ptr__->HashSize))
  goto LAB_141b3e502;
  __return_storage_ptr__->HashSize = uVar13;
  if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,0,4);
  }
  if (uVar13 != 0) {
    uVar12 = uVar13;
    if (uVar13 < 2) {
      if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
        uVar12 = 0;
        goto LAB_141b3e3ed;
      }
    }
    else {
LAB_141b3e3ed:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,uVar12,4);
    }
    if (0 < (int)uVar13) {
      uVar15 = (ulonglong)uVar13;
      uVar10 = 0;
      do {
        FVar3 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar3;
        }
        uVar6 = uVar10 & (longlong)(int)uVar13 - 1U;
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)FVar8 + uVar6 * 4) = 0xffffffff;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
  }
  if (__return_storage_ptr__->HashSize != 0) {
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TConstIterator::TConstIterator((TConstIterator *)&local_98,&__return_storage_ptr__->Elements);
    iVar5 = TStack_90.CurrentBitIndex;
    if (TStack_90.CurrentBitIndex < (TStack_90.Array)->NumBits) {
      do {
        iVar2 = *(int *)(*(longlong *)local_98 + 8 + (longlong)iVar5 * 0x18);
        puVar1 = (undefined8 *)(*(longlong *)local_98 + (longlong)iVar5 * 0x18);
        iVar7 = iVar2 + -1;
        if (iVar2 == 0) {
          pwVar11 = L"";
          iVar7 = 0;
        }
        else {
          pwVar11 = (wchar_t *)*puVar1;
        }
        uVar12 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar11);
        uVar12 = __return_storage_ptr__->HashSize - 1U & uVar12;
        *(uint *)((longlong)puVar1 + 0x14) = uVar12;
        FVar3 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar3;
        }
        uVar10 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar12;
        *(undefined4 *)(puVar1 + 2) = *(undefined4 *)((longlong)FVar8 + uVar10 * 4);
        *(int *)((longlong)FVar8 + uVar10 * 4) = iVar5;
        TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
        iVar5 = TStack_90.CurrentBitIndex;
      } while (TStack_90.CurrentBitIndex < (TStack_90.Array)->NumBits);
    }
  }
LAB_141b3e502:
  iVar5 = *(int *)&(this->Elements).field_0x28;
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
  iStack_68 = 0;
  local_50 = iStack_68;
  iStack_54 = 0;
  uStack_64 = 1;
  if (iVar5 != 0) {
    puVar16 = *(uint **)&(this->Elements).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)TStack_90.Array;
    }
    uVar12 = *puVar16;
    local_50 = 0;
    iStack_68 = 0;
    while (uVar12 == 0) {
      lVar9 = (longlong)iStack_68;
      local_50 = local_50 + 0x20;
      iStack_68 = iStack_68 + 1;
      iStack_54 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_68) goto LAB_141b3e57e;
      uVar12 = puVar16[lVar9 + 1];
    }
    uStack_64 = -uVar12 & uVar12;
    uVar10 = (ulonglong)uStack_64 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iStack_54 = local_50 + -1 + (int)lVar9;
    if (iVar5 < iStack_54) {
      iStack_54 = iVar5;
    }
  }
LAB_141b3e57e:
  uStack_58 = 0xffffffff;
  iStack_4c = TStack_90.CurrentBitIndex;
  TStack_90._padding_ = CONCAT44(uStack_64,iStack_68);
  TStack_90.UnvisitedBitMask = 0xffffffff;
  TStack_90._28_4_ = TStack_90.CurrentBitIndex;
  TStack_90.BaseBitIndex = local_50;
  local_98 = this;
  local_70 = this;
  local_60 = (undefined1 *)TStack_90.Array;
  TStack_90.CurrentBitIndex = iStack_54;
  if (iStack_54 < iVar5) {
    do {
      pTVar4 = local_98;
      lVar9 = (longlong)TStack_90.CurrentBitIndex;
      pFVar14 = (FString *)(*(longlong *)&local_98->Elements + lVar9 * 0x18);
      iVar7 = (pFVar14->Data).ArrayNum;
      iVar5 = iVar7 + -1;
      if (iVar7 == 0) {
        pwVar11 = L"";
        iVar5 = 0;
      }
      else {
        pwVar11 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
      }
      uVar12 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar11);
      iVar5 = FindIndexByHash<FString>(param_1,uVar12,pFVar14);
      if (iVar5 == -1) {
        Emplace<FString_const_&>
                  (__return_storage_ptr__,(FString *)&stack0x00000008,
                   (bool *)(*(longlong *)&pTVar4->Elements + lVar9 * 0x18));
      }
      TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
    } while (TStack_90.CurrentBitIndex < (TStack_90.Array)->NumBits);
  }
  return __return_storage_ptr__;
}

// Find @ 141b40b00

FString * __thiscall
TSparseSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSparseSetAllocator>::Find
          (TSparseSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSparseSetAllocator> *this,
          FString *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  wchar_t *pwVar4;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar4 = L"";
    iVar3 = 0;
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
  iVar3 = FindIndexByHash<FString>(this,uVar2,param_1);
  if (iVar3 == -1) {
    return (FString *)0x0;
  }
  return (FString *)(*(longlong *)&this->Elements + (longlong)iVar3 * 0x18);
}

// Includes @ 141b447c0

bool __thiscall
TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator>::Includes
          (TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator> *this,
          TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator> *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  ForElementType<FSetElementId> FVar3;
  int iVar4;
  longlong lVar5;
  ForElementType<FSetElementId> FVar6;
  uint *puVar7;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator> *local_40;
  int iStack_38;
  uint uStack_34;
  undefined1 *local_30;
  undefined4 uStack_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 <
      *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34) {
    return false;
  }
  iStack_38 = 0;
  iVar4 = *(int *)&(param_1->Elements).field_0x28;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->Elements).field_0x10;
  uStack_34 = 1;
  local_20 = 0;
  iStack_24 = 0;
  if (iVar4 != 0) {
    puVar7 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar7 == (uint *)0x0) {
      puVar7 = (uint *)TStack_60.Array;
    }
    uVar2 = *puVar7;
    while (uVar2 == 0) {
      lVar5 = (longlong)iStack_38;
      local_20 = local_20 + 0x20;
      iStack_38 = iStack_38 + 1;
      iStack_24 = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_38) goto LAB_141b4487a;
      uVar2 = puVar7[lVar5 + 1];
    }
    uStack_34 = -uVar2 & uVar2;
    uVar1 = (ulonglong)uStack_34 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iStack_24 = (int)lVar5 + -1 + local_20;
    if (iVar4 < iStack_24) {
      iStack_24 = iVar4;
    }
  }
LAB_141b4487a:
  uStack_28 = 0xffffffff;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iStack_1c = TStack_60.CurrentBitIndex;
  TStack_60._28_4_ = TStack_60.CurrentBitIndex;
  TStack_60.BaseBitIndex = local_20;
  local_40 = param_1;
  local_30 = (undefined1 *)TStack_60.Array;
  TStack_60._padding_._0_4_ = iStack_38;
  TStack_60._padding_._4_4_ = uStack_34;
  TStack_60.CurrentBitIndex = iStack_24;
  if (iStack_24 < *(int *)&(param_1->Elements).field_0x28) {
    do {
      uVar2 = *(uint *)(*(longlong *)&param_1->Elements + (longlong)TStack_60.CurrentBitIndex * 0xc)
      ;
      if (*(int *)&(this->Elements).field_0x8 == *(int *)&(this->Elements).field_0x34) {
        return false;
      }
      FVar3 = (this->Hash).SecondaryData;
      FVar6 = (ForElementType<FSetElementId>)&this->Hash;
      if (FVar3 != (ForElementType<FSetElementId>)0x0) {
        FVar6 = FVar3;
      }
      iVar4 = *(int *)((longlong)FVar6 + (ulonglong)(this->HashSize - 1U & uVar2) * 4);
      if (iVar4 == -1) {
        return false;
      }
      while (*(uint *)(*(longlong *)&this->Elements + (longlong)iVar4 * 0xc) != uVar2) {
        iVar4 = *(int *)(*(longlong *)&this->Elements + 4 + (longlong)iVar4 * 0xc);
        if (iVar4 == -1) {
          return false;
        }
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  return true;
}

// Intersect @ 141b45ee0

TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator> * __thiscall
TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator>::Intersect
          (TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator> *this,
          TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator> *__return_storage_ptr__,
          TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator> *param_1)

{
  ForElementType<FSetElementId> FVar1;
  longlong lVar2;
  undefined1 *puVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  ulong64 uVar10;
  undefined1 *puVar11;
  ForElementType<FSetElementId> FVar12;
  ulonglong uVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 *this_00;
  uint *puVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator> *pTVar21;
  int iVar22;
  TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator> *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator> *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  FSparseArrayAllocationInfo local_60 [2];
  
  pTVar21 = param_1;
  if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 <
      *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34) {
    pTVar21 = this;
    this = param_1;
  }
  uVar20 = 0;
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  uVar18 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  uVar15 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if (uVar15 == 0) goto LAB_141b460b7;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar15);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)__return_storage_ptr__,uVar15);
  if (uVar15 < 4) {
    uVar15 = 1;
  }
  else {
    uVar13 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar15 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((__return_storage_ptr__->HashSize != 0) && ((int)uVar15 <= __return_storage_ptr__->HashSize))
  goto LAB_141b460b7;
  __return_storage_ptr__->HashSize = uVar15;
  if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,0,4);
  }
  if (uVar15 != 0) {
    uVar5 = uVar15;
    if (uVar15 < 2) {
      if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
        uVar5 = 0;
        goto LAB_141b45fd5;
      }
    }
    else {
LAB_141b45fd5:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,uVar5,4);
    }
    if (0 < (int)uVar15) {
      uVar19 = (ulonglong)uVar15;
      uVar13 = uVar20;
      do {
        FVar1 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar12 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar1 != (ForElementType<FSetElementId>)0x0) {
          FVar12 = FVar1;
        }
        uVar9 = (longlong)(int)uVar15 - 1U & uVar13;
        uVar13 = uVar13 + 1;
        *(undefined4 *)((longlong)FVar12 + uVar9 * 4) = 0xffffffff;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
  }
  if (__return_storage_ptr__->HashSize != 0) {
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TConstIterator::TConstIterator((TConstIterator *)&local_b8,&__return_storage_ptr__->Elements);
    if (TStack_b0.CurrentBitIndex < (TStack_b0.Array)->NumBits) {
      do {
        uVar15 = __return_storage_ptr__->HashSize - 1U &
                 *(uint *)(*(longlong *)local_b8 + (longlong)TStack_b0.CurrentBitIndex * 0xc);
        lVar4 = *(longlong *)local_b8 + (longlong)TStack_b0.CurrentBitIndex * 0xc;
        *(uint *)(lVar4 + 8) = uVar15;
        FVar1 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar12 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar1 != (ForElementType<FSetElementId>)0x0) {
          FVar12 = FVar1;
        }
        uVar13 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar15;
        *(undefined4 *)(lVar4 + 4) = *(undefined4 *)((longlong)FVar12 + uVar13 * 4);
        *(int *)((longlong)FVar12 + uVar13 * 4) = TStack_b0.CurrentBitIndex;
        TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
      } while (TStack_b0.CurrentBitIndex < (TStack_b0.Array)->NumBits);
    }
  }
LAB_141b460b7:
  uVar15 = *(uint *)&(this->Elements).field_0x28;
  TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
  TStack_88._padding_._4_4_ = 1;
  TStack_88.BaseBitIndex = 0;
  uVar13 = uVar20;
  if (uVar15 != 0) {
    puVar16 = *(uint **)&(this->Elements).field_0x20;
    uVar13 = (ulonglong)uVar15;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)TStack_b0.Array;
    }
    uVar5 = *puVar16;
    uVar19 = uVar20;
    TStack_88.BaseBitIndex = 0;
    uVar18 = 0;
    while (uVar5 == 0) {
      iVar17 = (int)uVar20;
      TStack_88.BaseBitIndex = (int)uVar19 + 0x20;
      uVar19 = (ulonglong)(uint)TStack_88.BaseBitIndex;
      uVar18 = iVar17 + 1;
      uVar20 = (ulonglong)uVar18;
      if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar18)
      goto LAB_141b4613b;
      uVar5 = puVar16[(longlong)iVar17 + 1];
    }
    TStack_88._padding_._4_4_ = -uVar5 & uVar5;
    uVar20 = (ulonglong)TStack_88._padding_._4_4_ * 2 + 1;
    lVar4 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar5 = (TStack_88.BaseBitIndex - 1U) + (int)lVar4;
    if ((int)uVar15 < (int)uVar5) {
      uVar5 = uVar15;
    }
    uVar13 = (ulonglong)uVar5;
  }
LAB_141b4613b:
  TStack_88.UnvisitedBitMask = 0xffffffff;
  TStack_88.CurrentBitIndex = (int)uVar13;
  TStack_88._28_4_ = local_60[1].Pointer._4_4_;
  TStack_b0._padding_ = CONCAT44(TStack_88._padding_._4_4_,uVar18);
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  TStack_b0._28_4_ = local_60[1].Pointer._4_4_;
  TStack_b0.BaseBitIndex = TStack_88.BaseBitIndex;
  local_b8 = this;
  local_90 = this;
  TStack_88._padding_._0_4_ = uVar18;
  TStack_88.Array = TStack_b0.Array;
  TStack_b0.CurrentBitIndex = TStack_88.CurrentBitIndex;
  if ((int)uVar15 <= TStack_88.CurrentBitIndex) {
    return __return_storage_ptr__;
  }
LAB_141b46190:
  iVar17 = TStack_b0.CurrentBitIndex;
  lVar4 = *(longlong *)&local_b8->Elements;
  uVar18 = *(uint *)(lVar4 + (longlong)(int)uVar13 * 0xc);
  if (*(int *)&(pTVar21->Elements).field_0x8 != *(int *)&(pTVar21->Elements).field_0x34) {
    FVar1 = (pTVar21->Hash).SecondaryData;
    FVar12 = (ForElementType<FSetElementId>)&pTVar21->Hash;
    if (FVar1 != (ForElementType<FSetElementId>)0x0) {
      FVar12 = FVar1;
    }
    iVar6 = *(int *)((longlong)FVar12 + (ulonglong)(pTVar21->HashSize - 1U & uVar18) * 4);
    if (iVar6 != -1) {
      do {
        if (*(uint *)(*(longlong *)&pTVar21->Elements + (longlong)iVar6 * 0xc) == uVar18) {
          iVar6 = *(int *)&(__return_storage_ptr__->Elements).field_0x34;
          if (iVar6 == 0) {
            iVar7 = UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0xc,4,1,(ForAnyElementType *)__return_storage_ptr__,
                               (int *)&(__return_storage_ptr__->Elements).field_0x8,
                               (int *)&(__return_storage_ptr__->Elements).field_0xc);
            iVar6 = *(int *)&(__return_storage_ptr__->Elements).field_0x28;
            this_00 = &(__return_storage_ptr__->Elements).field_0x10;
            iVar22 = (int)((iVar6 >> 0x1f & 0x1fU) + iVar6) >> 5;
            if ((iVar6 == 0) || (iVar22 != (int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5)) {
              iVar8 = *(int *)&(__return_storage_ptr__->Elements).field_0x2c;
              if (iVar8 < iVar6 + 1) {
                uVar18 = iVar8 + 0x1fU >> 5;
                uVar15 = iVar6 + 0x20U >> 5;
                if (uVar15 < 5) {
                  iVar8 = 4;
                }
                else {
                  uVar20 = (ulonglong)uVar15;
                  if (uVar18 < 5) {
                    uVar18 = 0;
                  }
                  if (uVar18 == 0) {
                    uVar13 = 4;
                    if (4 < uVar20) {
                      uVar13 = uVar20;
                    }
                  }
                  else {
                    uVar13 = ((ulonglong)uVar15 * 3 >> 3) + 0x10 + uVar20;
                  }
                  uVar10 = FMemory::QuantizeSize(uVar13 * 4,0);
                  iVar8 = (int)(uVar10 >> 2);
                  if (iVar8 < (int)uVar15) {
                    iVar8 = 0x7fffffff;
                  }
                }
                *(int *)&(__return_storage_ptr__->Elements).field_0x2c = iVar8 << 5;
                TBitArray<FDefaultBitArrayAllocator>::Realloc
                          ((TBitArray<FDefaultBitArrayAllocator> *)this_00,
                           *(int *)&(__return_storage_ptr__->Elements).field_0x28);
              }
              puVar3 = &(__return_storage_ptr__->Elements).field_0x28;
              *(int *)puVar3 = *(int *)puVar3 + 1;
              iVar8 = *(int *)&(__return_storage_ptr__->Elements).field_0x28;
              uVar15 = iVar8 >> 0x1f & 0x1f;
              uVar18 = iVar8 + uVar15;
              iVar8 = (uVar18 & 0x1f) - uVar15;
              if (iVar8 != 0) {
                puVar3 = *(undefined1 **)&(__return_storage_ptr__->Elements).field_0x20;
                puVar11 = this_00;
                if (puVar3 != (undefined1 *)0x0) {
                  puVar11 = puVar3;
                }
                *(uint *)(puVar11 + (longlong)((int)uVar18 >> 5) * 4) =
                     *(uint *)(puVar11 + (longlong)((int)uVar18 >> 5) * 4) &
                     0xffffffffU >> (0x20U - (char)iVar8 & 0x1f);
              }
            }
            else {
              *(int *)&(__return_storage_ptr__->Elements).field_0x28 = iVar6 + 1;
            }
            puVar3 = *(undefined1 **)&(__return_storage_ptr__->Elements).field_0x20;
            if (puVar3 != (undefined1 *)0x0) {
              this_00 = puVar3;
            }
            *(uint *)(this_00 + (longlong)iVar22 * 4) =
                 *(uint *)(this_00 + (longlong)iVar22 * 4) & ~(1 << ((byte)iVar6 & 0x1f));
          }
          else {
            iVar7 = *(int *)&(__return_storage_ptr__->Elements).field_0x30;
            iVar6 = iVar6 + -1;
            lVar2 = *(longlong *)&__return_storage_ptr__->Elements;
            iVar22 = *(int *)(lVar2 + 4 + (longlong)iVar7 * 0xc);
            *(int *)&(__return_storage_ptr__->Elements).field_0x30 = iVar22;
            *(int *)&(__return_storage_ptr__->Elements).field_0x34 = iVar6;
            if (iVar6 != 0) {
              *(undefined4 *)(lVar2 + (longlong)iVar22 * 0xc) = 0xffffffff;
            }
          }
          TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)__return_storage_ptr__,local_60,iVar7);
          puVar14 = (uint *)0x0;
          puVar16 = puVar14;
          if (local_60[0].Pointer != (uint *)0x0) {
            *(uint *)local_60[0].Pointer = *(uint *)(lVar4 + (longlong)iVar17 * 0xc);
            *(uint *)((longlong)local_60[0].Pointer + 4) = 0xffffffff;
            puVar16 = local_60[0].Pointer;
          }
          iVar17 = *(int *)&(__return_storage_ptr__->Elements).field_0x8;
          iVar6 = *(int *)&(__return_storage_ptr__->Elements).field_0x34;
          uVar18 = *puVar16;
          if ((iVar17 - iVar6 == 1) || (iVar17 == iVar6)) goto LAB_141b4644d;
          FVar1 = (__return_storage_ptr__->Hash).SecondaryData;
          FVar12 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
          if (FVar1 != (ForElementType<FSetElementId>)0x0) {
            FVar12 = FVar1;
          }
          iVar17 = *(int *)((longlong)FVar12 +
                           (ulonglong)(__return_storage_ptr__->HashSize - 1U & uVar18) * 4);
          if (iVar17 == -1) goto LAB_141b4644d;
          lVar4 = *(longlong *)&__return_storage_ptr__->Elements;
          goto LAB_141b46400;
        }
        iVar6 = *(int *)(*(longlong *)&pTVar21->Elements + 4 + (longlong)iVar6 * 0xc);
      } while (iVar6 != -1);
    }
  }
  goto LAB_141b465d1;
  while (iVar17 = *(int *)(lVar4 + 4 + (longlong)iVar17 * 0xc), iVar17 != -1) {
LAB_141b46400:
    if (*(uint *)(lVar4 + (longlong)iVar17 * 0xc) == uVar18) {
      if (iVar17 != -1) {
        *(uint *)(lVar4 + (longlong)iVar17 * 0xc) = uVar18;
        TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::RemoveAtUninitialized
                  ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)__return_storage_ptr__,local_60[0].Index,1);
        goto LAB_141b465d1;
      }
      break;
    }
  }
LAB_141b4644d:
  uVar5 = 1;
  uVar15 = *(int *)&(__return_storage_ptr__->Elements).field_0x8 -
           *(int *)&(__return_storage_ptr__->Elements).field_0x34;
  if (3 < uVar15) {
    uVar20 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar5 = 1 << ((byte)lVar4 & 0x1f);
  }
  if (((int)uVar15 < 1) || ((int)uVar5 <= __return_storage_ptr__->HashSize)) {
    uVar18 = __return_storage_ptr__->HashSize - 1U & uVar18;
    puVar16[2] = uVar18;
    FVar1 = (__return_storage_ptr__->Hash).SecondaryData;
    FVar12 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
    if (FVar1 != (ForElementType<FSetElementId>)0x0) {
      FVar12 = FVar1;
    }
    uVar20 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar18;
    puVar16[1] = *(uint *)((longlong)FVar12 + uVar20 * 4);
    *(int *)((longlong)FVar12 + uVar20 * 4) = local_60[0].Index;
    goto LAB_141b465d1;
  }
  __return_storage_ptr__->HashSize = uVar5;
  if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,0,4);
  }
  if (uVar5 != 0) {
    uVar18 = uVar5;
    if (uVar5 < 2) {
      if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
        uVar18 = 0;
        goto LAB_141b464b9;
      }
    }
    else {
LAB_141b464b9:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,uVar18,4);
    }
    if (0 < (int)uVar5) {
      uVar20 = (ulonglong)uVar5;
      do {
        FVar1 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar12 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar1 != (ForElementType<FSetElementId>)0x0) {
          FVar12 = FVar1;
        }
        uVar13 = (ulonglong)puVar14 & (longlong)(int)uVar5 - 1U;
        puVar14 = (uint *)((longlong)puVar14 + 1);
        *(undefined4 *)((longlong)FVar12 + uVar13 * 4) = 0xffffffff;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
  }
  if ((__return_storage_ptr__->HashSize != 0) &&
     (TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TConstIterator::TConstIterator
                ((TConstIterator *)&local_90,&__return_storage_ptr__->Elements),
     TStack_88.CurrentBitIndex < (TStack_88.Array)->NumBits)) {
    do {
      uVar18 = __return_storage_ptr__->HashSize - 1U &
               *(uint *)(*(longlong *)&local_90->Elements +
                        (longlong)TStack_88.CurrentBitIndex * 0xc);
      lVar4 = *(longlong *)&local_90->Elements + (longlong)TStack_88.CurrentBitIndex * 0xc;
      *(uint *)(lVar4 + 8) = uVar18;
      FVar1 = (__return_storage_ptr__->Hash).SecondaryData;
      FVar12 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
      if (FVar1 != (ForElementType<FSetElementId>)0x0) {
        FVar12 = FVar1;
      }
      uVar20 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar18;
      *(undefined4 *)(lVar4 + 4) = *(undefined4 *)((longlong)FVar12 + uVar20 * 4);
      *(int *)((longlong)FVar12 + uVar20 * 4) = TStack_88.CurrentBitIndex;
      TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
    } while (TStack_88.CurrentBitIndex < (TStack_88.Array)->NumBits);
  }
LAB_141b465d1:
  TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
  uVar13 = (ulonglong)(uint)TStack_b0.CurrentBitIndex;
  if ((TStack_b0.Array)->NumBits <= TStack_b0.CurrentBitIndex) {
    return __return_storage_ptr__;
  }
  goto LAB_141b46190;
}

// Rehash @ 141b4a4f0

void __thiscall
TSparseSet<int,DefaultKeyFuncs<int,0>,TFixedSparseSetAllocator<64,2,4>_>::Rehash
          (TSparseSet<int,DefaultKeyFuncs<int,0>,TFixedSparseSetAllocator<64,2,4>_> *this)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint local_58;
  uint uStack_54;
  uint uStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<TFixedAllocator<2>_> local_30;
  
  uVar6 = this->HashSize;
  uVar8 = (ulonglong)uVar6;
  uVar10 = 0;
  if (uVar6 != 0) {
    if ((((int)uVar6 < 0) || (0x20 < uVar6)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("NewMax >= 0 && NewMax <= NumInlineElements",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                           ,0x524,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (0 < (int)uVar6) {
      uVar7 = uVar10;
      do {
        *(undefined4 *)(this->Hash).InlineData[uVar7 & (longlong)(int)uVar6 - 1U].Pad = 0xffffffff;
        uVar8 = uVar8 - 1;
        uVar7 = uVar7 + 1;
      } while (uVar8 != 0);
    }
  }
  if (this->HashSize != 0) {
    local_30.Array = (TBitArray<TFixedAllocator<2>_> *)&(this->Elements).field_0x308;
    local_58 = 0;
    uVar6 = *(uint *)&(this->Elements).field_0x310;
    uStack_54 = 1;
    uStack_44 = 0;
    uStack_40 = 0;
    if (uVar6 != 0) {
      uVar2 = *(uint *)local_30.Array;
      uVar8 = uVar10;
      while (uVar2 == 0) {
        iVar9 = (int)uVar10;
        uStack_40 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_40;
        local_58 = iVar9 + 1;
        uVar10 = (ulonglong)local_58;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_58)
        goto LAB_141b4a60b;
        uVar2 = *(uint *)(this->Hash).InlineData[(longlong)iVar9 + -5].Pad;
      }
      uStack_54 = -uVar2 & uVar2;
      uVar10 = (ulonglong)uStack_54 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_44 = (int)lVar3 + -1 + uStack_40;
      uVar10 = (ulonglong)uStack_44;
      if ((int)uVar6 < (int)uStack_44) {
LAB_141b4a60b:
        uVar10 = (ulonglong)uVar6;
        uStack_44 = uVar6;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = uStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = uStack_40;
    if ((int)uVar10 < (int)uVar6) {
      do {
        puVar1 = (uint *)(&(this->Elements).field_0x0 + (longlong)(int)uVar10 * 0xc);
        uVar6 = this->HashSize - 1U & *puVar1;
        puVar1[2] = uVar6;
        uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
        puVar1[1] = *(uint *)(this->Hash).InlineData[uVar8].Pad;
        *(int *)(this->Hash).InlineData[uVar8].Pad = (int)uVar10;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<TFixedAllocator<2>_>::FindFirstSetBit(&local_30);
        uVar10 = (ulonglong)(uint)local_30.CurrentBitIndex;
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 141b4a6b0

void __thiscall
TSparseSet<FSetTestNonCopyableTestData,DefaultKeyFuncs<FSetTestNonCopyableTestData,0>,FDefaultSparseSetAllocator>
::Rehash(TSparseSet<FSetTestNonCopyableTestData,DefaultKeyFuncs<FSetTestNonCopyableTestData,0>,FDefaultSparseSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  uint *puVar8;
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
      puVar8 = *(uint **)&(this->Elements).field_0x20;
      if (puVar8 == (uint *)0x0) {
        puVar8 = (uint *)local_30.Array;
      }
      uVar7 = *puVar8;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar7 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar4 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_141b4a78c;
        uVar7 = puVar8[lVar4 + 1];
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
LAB_141b4a78c:
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
        uVar7 = *piVar1 - 1U &
                *(uint *)(*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0xc);
        lVar4 = *(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0xc;
        *(uint *)(lVar4 + 8) = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(lVar4 + 4) = *(undefined4 *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 141b4a850

void __thiscall
TSparseSet<FString,DefaultKeyFuncs<FString,1>,FDefaultSparseSetAllocator>::Rehash
          (TSparseSet<FString,DefaultKeyFuncs<FString,1>,FDefaultSparseSetAllocator> *this)

{
  int iVar1;
  longlong lVar2;
  ForElementType<FSetElementId> FVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  wchar_t *pwVar9;
  ForElementType<FSetElementId> FVar10;
  longlong *local_48;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if ((this->HashSize != 0) &&
     (TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TConstIterator::TConstIterator((TConstIterator *)&local_48,&this->Elements),
     local_40.CurrentBitIndex < (local_40.Array)->NumBits)) {
    do {
      iVar4 = local_40.CurrentBitIndex;
      lVar6 = (longlong)local_40.CurrentBitIndex;
      lVar2 = *local_48;
      iVar1 = *(int *)(lVar2 + 8 + lVar6 * 0x18);
      iVar7 = iVar1 + -1;
      if (iVar1 == 0) {
        pwVar9 = L"";
        iVar7 = 0;
      }
      else {
        pwVar9 = *(wchar_t **)(lVar2 + lVar6 * 0x18);
      }
      uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar9);
      uVar5 = this->HashSize - 1U & uVar5;
      *(uint *)(lVar2 + 0x14 + lVar6 * 0x18) = uVar5;
      FVar3 = (this->Hash).SecondaryData;
      FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      if (FVar3 != (ForElementType<FSetElementId>)0x0) {
        FVar10 = FVar3;
      }
      uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)(lVar2 + 0x10 + lVar6 * 0x18) = *(undefined4 *)((longlong)FVar10 + uVar8 * 4);
      *(int *)((longlong)FVar10 + uVar8 * 4) = iVar4;
      local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
  }
  return;
}

// RehashOrLink @ 141b4a970

void __thiscall
TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator>::RehashOrLink
          (TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator> *this,uint param_1,
          TSparseSetElement<int> *param_2,int param_3)

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
  *(uint *)&param_2->field_0x8 = uVar5;
  FVar4 = (this->Hash).SecondaryData;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar3 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
  *(undefined4 *)&param_2->field_0x4 = *(undefined4 *)((longlong)FVar4 + uVar3 * 4);
  *(int *)((longlong)FVar4 + uVar3 * 4) = param_3;
  return;
}

// RehashOrLink @ 141b4aa00

void __thiscall
TSparseSet<FSetTestNonCopyableTestData,DefaultKeyFuncs<FSetTestNonCopyableTestData,0>,FDefaultSparseSetAllocator>
::RehashOrLink(TSparseSet<FSetTestNonCopyableTestData,DefaultKeyFuncs<FSetTestNonCopyableTestData,0>,FDefaultSparseSetAllocator>
               *this,uint param_1,TSparseSetElement<FSetTestNonCopyableTestData> *param_2,
              int param_3)

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
  *(uint *)&param_2->field_0x8 = uVar5;
  FVar4 = (this->Hash).SecondaryData;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar3 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
  *(undefined4 *)&param_2->field_0x4 = *(undefined4 *)((longlong)FVar4 + uVar3 * 4);
  *(int *)((longlong)FVar4 + uVar3 * 4) = param_3;
  return;
}

// RemoveByIndex @ 141b4bcc0

void __thiscall
TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator>::RemoveByIndex
          (TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator> *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  ForElementType<FSetElementId> FVar5;
  undefined1 *puVar6;
  int *piVar7;
  
  if ((-1 < param_1) && (param_1 < *(int *)&(this->Elements).field_0x28)) {
    puVar6 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar6 + (ulonglong)((uint)param_1 >> 5) * 4) >> (param_1 & 0x1fU) & 1) != 0)
    goto LAB_141b4bd32;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_141b4bd32:
  lVar1 = *(longlong *)&this->Elements + (longlong)param_1 * 0xc;
  FVar5 = (this->Hash).SecondaryData;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  piVar7 = (int *)((longlong)FVar5 + (longlong)*(int *)(lVar1 + 8) * 4);
  while( true ) {
    iVar2 = *piVar7;
    if (iVar2 == -1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NextElementIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                         ,0x2b5,L"Corrupt hash");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (iVar2 == param_1) break;
    piVar7 = (int *)(*(longlong *)&this->Elements + ((longlong)iVar2 * 3 + 1) * 4);
  }
  *piVar7 = *(int *)(lVar1 + 4);
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized
            ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this,param_1,1);
  return;
}

// RemoveByIndex @ 141b4bdd0

void __thiscall
TSparseSet<FString,DefaultKeyFuncs<FString,1>,FDefaultSparseSetAllocator>::RemoveByIndex
          (TSparseSet<FString,DefaultKeyFuncs<FString,1>,FDefaultSparseSetAllocator> *this,
          int param_1)

{
  longlong lVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  ForElementType<FSetElementId> FVar5;
  undefined1 *puVar6;
  int *piVar7;
  
  if ((-1 < param_1) && (param_1 < *(int *)&(this->Elements).field_0x28)) {
    puVar6 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar6 + (ulonglong)((uint)param_1 >> 5) * 4) >> (param_1 & 0x1fU) & 1) != 0)
    goto LAB_141b4be42;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_141b4be42:
  lVar1 = *(longlong *)&this->Elements + (longlong)param_1 * 0x18;
  FVar5 = (this->Hash).SecondaryData;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  piVar7 = (int *)((longlong)FVar5 + (longlong)*(int *)(lVar1 + 0x14) * 4);
  while( true ) {
    iVar2 = *piVar7;
    if (iVar2 == -1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NextElementIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                         ,0x2b5,L"Corrupt hash");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (iVar2 == param_1) break;
    piVar7 = (int *)(*(longlong *)&this->Elements + (longlong)iVar2 * 0x18 + 0x10);
  }
  *piVar7 = *(int *)(lVar1 + 0x10);
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(&this->Elements,param_1,1);
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized
            ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this,param_1,1);
  return;
}

// TryReplaceExisting @ 141bbc920

bool __thiscall
TSparseSet<int,DefaultKeyFuncs<int,0>,TFixedSparseSetAllocator<64,2,4>_>::TryReplaceExisting
          (TSparseSet<int,DefaultKeyFuncs<int,0>,TFixedSparseSetAllocator<64,2,4>_> *this,
          uint param_1,TSparseSetElement<int> *param_2,int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  TTypeCompatibleBytes<FSetElementId> *pTVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  byte bVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  uint uVar11;
  bool bVar12;
  
  iVar4 = *(int *)&(this->Elements).field_0x300;
  bVar12 = false;
  iVar5 = *(int *)&(this->Elements).field_0x31c;
  if ((iVar4 - iVar5 != 1) && (iVar4 != iVar5)) {
    for (iVar4 = *(int *)(this->Hash).InlineData[this->HashSize - 1U & param_1].Pad; iVar4 != -1;
        iVar4 = *(int *)(&(this->Elements).field_0x4 + (longlong)iVar4 * 0xc)) {
      if (*(int *)(&(this->Elements).field_0x0 + (longlong)iVar4 * 0xc) == *(int *)param_2) {
        bVar12 = iVar4 != -1;
        if (bVar12) {
          *(int *)(&(this->Elements).field_0x0 + (longlong)iVar4 * 0xc) = *(int *)param_2;
          iVar5 = *param_3;
          bVar7 = (byte)iVar5 & 0x1f;
          uVar11 = 1 << bVar7 | 1U >> 0x20 - bVar7;
          if (((iVar5 < 0) || (*(int *)&(this->Elements).field_0x310 <= iVar5)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
          if (((*(uint *)(this->Hash).InlineData
                         [(longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) + -6].Pad & uVar11
               ) == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("AllocationFlags[Index]",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                 ,0xc5,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
          if (*(int *)&(this->Elements).field_0x31c != 0) {
            *(int *)(&(this->Elements).field_0x0 +
                    (longlong)*(int *)&(this->Elements).field_0x318 * 0xc) = iVar5;
          }
          puVar2 = (undefined4 *)(&(this->Elements).field_0x0 + (longlong)iVar5 * 0xc);
          uVar10 = 0xffffffff;
          *puVar2 = 0xffffffff;
          if (0 < *(int *)&(this->Elements).field_0x31c) {
            uVar10 = *(undefined4 *)&(this->Elements).field_0x318;
          }
          puVar2[1] = uVar10;
          puVar1 = &(this->Elements).field_0x31c;
          *(int *)puVar1 = *(int *)puVar1 + 1;
          *(int *)&(this->Elements).field_0x318 = iVar5;
          if (((iVar5 < 0) || (*(int *)&(this->Elements).field_0x310 <= iVar5)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
          pTVar3 = (this->Hash).InlineData +
                   (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) + -6;
          *(uint *)pTVar3->Pad = *(uint *)pTVar3->Pad & ~uVar11;
          *param_3 = iVar4;
        }
        break;
      }
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar12;
  }
  return bVar12;
}

// Union @ 141bbce60

TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator> * __thiscall
TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator>::Union
          (TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator> *this,
          TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator> *__return_storage_ptr__,
          TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator> *param_1)

{
  ForElementType<FSetElementId> FVar1;
  undefined1 *puVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  ulong64 uVar9;
  undefined1 *puVar10;
  ForElementType<FSetElementId> FVar11;
  uint uVar12;
  uint *puVar13;
  undefined1 *this_00;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  uint *puVar19;
  uint *puVar20;
  uint *puVar21;
  uint uVar22;
  int iVar23;
  TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator> *local_res18;
  longlong local_res20;
  TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator> *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator> *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined1 local_70 [12];
  uint uStack_64;
  longlong local_60;
  uint local_58;
  int local_54;
  
  puVar20 = (uint *)0x0;
  uVar7 = 0;
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  uVar22 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  uVar15 = ((*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34) -
           *(int *)&(this->Elements).field_0x34) + *(int *)&(this->Elements).field_0x8;
  local_res18 = param_1;
  if (uVar15 == 0) goto LAB_141bbd027;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar15);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)__return_storage_ptr__,uVar15);
  uVar16 = 1;
  if (3 < uVar15) {
    uVar18 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar16 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((__return_storage_ptr__->HashSize != 0) && ((int)uVar16 <= __return_storage_ptr__->HashSize))
  goto LAB_141bbd027;
  __return_storage_ptr__->HashSize = uVar16;
  if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,0,4);
  }
  if (uVar16 != 0) {
    uVar15 = uVar16;
    if (uVar16 < 2) {
      if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
        uVar15 = 0;
        goto LAB_141bbcf42;
      }
    }
    else {
LAB_141bbcf42:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,uVar15,4);
    }
    if (0 < (int)uVar16) {
      uVar18 = (ulonglong)uVar16;
      puVar13 = puVar20;
      do {
        FVar1 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar11 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar1 != (ForElementType<FSetElementId>)0x0) {
          FVar11 = FVar1;
        }
        uVar8 = (ulonglong)puVar13 & (longlong)(int)uVar16 - 1U;
        puVar13 = (uint *)((longlong)puVar13 + 1);
        *(undefined4 *)((longlong)FVar11 + uVar8 * 4) = 0xffffffff;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
  }
  if ((__return_storage_ptr__->HashSize != 0) &&
     (TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TConstIterator::TConstIterator((TConstIterator *)local_70,&__return_storage_ptr__->Elements)
     , local_54 < *(int *)(local_60 + 0x18))) {
    do {
      uVar15 = __return_storage_ptr__->HashSize - 1U &
               *(uint *)(*(longlong *)CONCAT44(local_70._4_4_,local_70._0_4_) +
                        (longlong)local_54 * 0xc);
      lVar3 = *(longlong *)CONCAT44(local_70._4_4_,local_70._0_4_) + (longlong)local_54 * 0xc;
      *(uint *)(lVar3 + 8) = uVar15;
      FVar1 = (__return_storage_ptr__->Hash).SecondaryData;
      FVar11 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
      if (FVar1 != (ForElementType<FSetElementId>)0x0) {
        FVar11 = FVar1;
      }
      uVar18 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar15;
      *(undefined4 *)(lVar3 + 4) = *(undefined4 *)((longlong)FVar11 + uVar18 * 4);
      *(int *)((longlong)FVar11 + uVar18 * 4) = local_54;
      local_58 = local_58 & ~uStack_64;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_70 + 8));
    } while (local_54 < *(int *)(local_60 + 0x18));
  }
LAB_141bbd027:
  uVar15 = *(uint *)&(this->Elements).field_0x28;
  TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
  TStack_c0._padding_._4_4_ = 1;
  uVar16 = 0;
  puVar13 = puVar20;
  TStack_c0._padding_._0_4_ = uVar22;
  TStack_c0.BaseBitIndex = uVar16;
  if (uVar15 != 0) {
    puVar21 = *(uint **)&(this->Elements).field_0x20;
    puVar13 = (uint *)(ulonglong)uVar15;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)TStack_c0.Array;
    }
    uVar4 = *puVar21;
    puVar14 = puVar20;
    puVar19 = puVar20;
    TStack_c0.BaseBitIndex = uVar7;
    TStack_c0._padding_._0_4_ = uVar7;
    while (uVar4 == 0) {
      iVar17 = (int)puVar14;
      TStack_c0.BaseBitIndex = (int)puVar19 + 0x20;
      puVar19 = (uint *)(ulonglong)(uint)TStack_c0.BaseBitIndex;
      TStack_c0._padding_._0_4_ = iVar17 + 1;
      puVar14 = (uint *)(ulonglong)(uint)TStack_c0._padding_;
      if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 <
          (int)(uint)TStack_c0._padding_) goto LAB_141bbd0aa;
      uVar4 = puVar21[(longlong)iVar17 + 1];
    }
    TStack_c0._padding_._4_4_ = -uVar4 & uVar4;
    uVar18 = (ulonglong)TStack_c0._padding_._4_4_ * 2 + 1;
    lVar3 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar4 = (TStack_c0.BaseBitIndex - 1U) + (int)lVar3;
    if ((int)uVar15 < (int)uVar4) {
      uVar4 = uVar15;
    }
    puVar13 = (uint *)(ulonglong)uVar4;
  }
LAB_141bbd0aa:
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  TStack_c0.CurrentBitIndex = (int)puVar13;
  TStack_c0._28_4_ = local_54;
  TStack_90._padding_ = CONCAT44(TStack_c0._padding_._4_4_,(uint)TStack_c0._padding_);
  TStack_90.UnvisitedBitMask = 0xffffffff;
  TStack_90._28_4_ = local_54;
  TStack_90.BaseBitIndex = TStack_c0.BaseBitIndex;
  local_c8 = this;
  local_98 = this;
  TStack_90.Array = TStack_c0.Array;
  TStack_90.CurrentBitIndex = TStack_c0.CurrentBitIndex;
  if (TStack_c0.CurrentBitIndex < (int)uVar15) {
    do {
      iVar17 = *(int *)&(__return_storage_ptr__->Elements).field_0x34;
      local_res20 = *(longlong *)&local_98->Elements;
      uVar15 = 1;
      if (iVar17 == 0) {
        iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0xc,4,1,(ForAnyElementType *)__return_storage_ptr__,
                           (int *)&(__return_storage_ptr__->Elements).field_0x8,
                           (int *)&(__return_storage_ptr__->Elements).field_0xc);
        iVar17 = *(int *)&(__return_storage_ptr__->Elements).field_0x28;
        this_00 = &(__return_storage_ptr__->Elements).field_0x10;
        iVar23 = (int)((iVar17 >> 0x1f & 0x1fU) + iVar17) >> 5;
        if ((iVar17 == 0) || (iVar23 != (int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5)) {
          iVar6 = *(int *)&(__return_storage_ptr__->Elements).field_0x2c;
          if (iVar6 < iVar17 + 1) {
            uVar4 = iVar6 + 0x1fU >> 5;
            uVar12 = iVar17 + 0x20U >> 5;
            if (uVar12 < 5) {
              iVar6 = 4;
            }
            else {
              uVar18 = (ulonglong)uVar12;
              if (uVar4 < 5) {
                uVar4 = uVar16;
              }
              if (uVar4 == 0) {
                uVar8 = 4;
                if (4 < uVar18) {
                  uVar8 = uVar18;
                }
              }
              else {
                uVar8 = ((ulonglong)uVar12 * 3 >> 3) + 0x10 + uVar18;
              }
              uVar9 = FMemory::QuantizeSize(uVar8 * 4,0);
              iVar6 = (int)(uVar9 >> 2);
              if (iVar6 < (int)uVar12) {
                iVar6 = 0x7fffffff;
              }
            }
            *(int *)&(__return_storage_ptr__->Elements).field_0x2c = iVar6 << 5;
            TBitArray<FDefaultBitArrayAllocator>::Realloc
                      ((TBitArray<FDefaultBitArrayAllocator> *)this_00,
                       *(int *)&(__return_storage_ptr__->Elements).field_0x28);
          }
          puVar2 = &(__return_storage_ptr__->Elements).field_0x28;
          *(int *)puVar2 = *(int *)puVar2 + 1;
          iVar6 = *(int *)&(__return_storage_ptr__->Elements).field_0x28;
          uVar12 = iVar6 >> 0x1f & 0x1f;
          uVar4 = iVar6 + uVar12;
          iVar6 = (uVar4 & 0x1f) - uVar12;
          if (iVar6 != 0) {
            puVar2 = *(undefined1 **)&(__return_storage_ptr__->Elements).field_0x20;
            puVar10 = this_00;
            if (puVar2 != (undefined1 *)0x0) {
              puVar10 = puVar2;
            }
            *(uint *)(puVar10 + (longlong)((int)uVar4 >> 5) * 4) =
                 *(uint *)(puVar10 + (longlong)((int)uVar4 >> 5) * 4) &
                 0xffffffffU >> (0x20U - (char)iVar6 & 0x1f);
          }
        }
        else {
          *(int *)&(__return_storage_ptr__->Elements).field_0x28 = iVar17 + 1;
        }
        puVar2 = *(undefined1 **)&(__return_storage_ptr__->Elements).field_0x20;
        if (puVar2 != (undefined1 *)0x0) {
          this_00 = puVar2;
        }
        *(uint *)(this_00 + (longlong)iVar23 * 4) =
             *(uint *)(this_00 + (longlong)iVar23 * 4) & ~(1 << ((byte)iVar17 & 0x1f));
      }
      else {
        iVar5 = *(int *)&(__return_storage_ptr__->Elements).field_0x30;
        iVar17 = iVar17 + -1;
        lVar3 = *(longlong *)&__return_storage_ptr__->Elements;
        iVar23 = *(int *)(lVar3 + 4 + (longlong)iVar5 * 0xc);
        *(int *)&(__return_storage_ptr__->Elements).field_0x30 = iVar23;
        *(int *)&(__return_storage_ptr__->Elements).field_0x34 = iVar17;
        if (iVar17 != 0) {
          *(undefined4 *)(lVar3 + (longlong)iVar23 * 0xc) = 0xffffffff;
        }
      }
      lVar3 = local_res20;
      TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)__return_storage_ptr__,(FSparseArrayAllocationInfo *)local_70,iVar5);
      puVar21 = (uint *)CONCAT44(uStack_64,local_70._8_4_);
      puVar14 = puVar20;
      if (puVar21 != (uint *)0x0) {
        *puVar21 = *(uint *)(lVar3 + (longlong)(int)puVar13 * 0xc);
        puVar21[1] = 0xffffffff;
        puVar14 = puVar21;
      }
      iVar17 = *(int *)&(__return_storage_ptr__->Elements).field_0x8;
      iVar5 = *(int *)&(__return_storage_ptr__->Elements).field_0x34;
      uVar4 = *puVar14;
      if ((iVar17 - iVar5 != 1) && (iVar17 != iVar5)) {
        FVar1 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar11 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar1 != (ForElementType<FSetElementId>)0x0) {
          FVar11 = FVar1;
        }
        iVar17 = *(int *)((longlong)FVar11 +
                         (ulonglong)(__return_storage_ptr__->HashSize - 1U & uVar4) * 4);
        if (iVar17 != -1) {
          lVar3 = *(longlong *)&__return_storage_ptr__->Elements;
          do {
            if (*(uint *)(lVar3 + (longlong)iVar17 * 0xc) == uVar4) {
              if (iVar17 != -1) {
                *(uint *)(lVar3 + (longlong)iVar17 * 0xc) = uVar4;
                TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::RemoveAtUninitialized
                          ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)__return_storage_ptr__,local_70._0_4_,1);
                goto LAB_141bbd4ed;
              }
              break;
            }
            iVar17 = *(int *)(lVar3 + 4 + (longlong)iVar17 * 0xc);
          } while (iVar17 != -1);
        }
      }
      uVar12 = *(int *)&(__return_storage_ptr__->Elements).field_0x8 -
               *(int *)&(__return_storage_ptr__->Elements).field_0x34;
      if (3 < uVar12) {
        uVar18 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
        lVar3 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        uVar15 = 1 << ((byte)lVar3 & 0x1f);
      }
      if (((int)uVar12 < 1) || ((int)uVar15 <= __return_storage_ptr__->HashSize)) {
        uVar4 = __return_storage_ptr__->HashSize - 1U & uVar4;
        puVar14[2] = uVar4;
        FVar1 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar11 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar1 != (ForElementType<FSetElementId>)0x0) {
          FVar11 = FVar1;
        }
        uVar18 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar4;
        puVar14[1] = *(uint *)((longlong)FVar11 + uVar18 * 4);
        *(undefined4 *)((longlong)FVar11 + uVar18 * 4) = local_70._0_4_;
      }
      else {
        __return_storage_ptr__->HashSize = uVar15;
        if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,0,4);
        }
        if (uVar15 != 0) {
          uVar4 = uVar15;
          if (uVar15 < 2) {
            if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0)
            {
              uVar4 = 0;
              goto LAB_141bbd3d1;
            }
          }
          else {
LAB_141bbd3d1:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,uVar4,4)
            ;
          }
          if (0 < (int)uVar15) {
            uVar18 = (ulonglong)uVar15;
            puVar13 = puVar20;
            do {
              FVar1 = (__return_storage_ptr__->Hash).SecondaryData;
              FVar11 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
              if (FVar1 != (ForElementType<FSetElementId>)0x0) {
                FVar11 = FVar1;
              }
              uVar8 = (ulonglong)puVar13 & (longlong)(int)uVar15 - 1U;
              puVar13 = (uint *)((longlong)puVar13 + 1);
              *(undefined4 *)((longlong)FVar11 + uVar8 * 4) = 0xffffffff;
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
        }
        if ((__return_storage_ptr__->HashSize != 0) &&
           (TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TConstIterator::TConstIterator
                      ((TConstIterator *)&local_c8,&__return_storage_ptr__->Elements),
           TStack_c0.CurrentBitIndex < (TStack_c0.Array)->NumBits)) {
          do {
            uVar15 = __return_storage_ptr__->HashSize - 1U &
                     *(uint *)(*(longlong *)&local_c8->Elements +
                              (longlong)TStack_c0.CurrentBitIndex * 0xc);
            lVar3 = *(longlong *)&local_c8->Elements + (longlong)TStack_c0.CurrentBitIndex * 0xc;
            *(uint *)(lVar3 + 8) = uVar15;
            FVar1 = (__return_storage_ptr__->Hash).SecondaryData;
            FVar11 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
            if (FVar1 != (ForElementType<FSetElementId>)0x0) {
              FVar11 = FVar1;
            }
            uVar18 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar15;
            *(undefined4 *)(lVar3 + 4) = *(undefined4 *)((longlong)FVar11 + uVar18 * 4);
            *(int *)((longlong)FVar11 + uVar18 * 4) = TStack_c0.CurrentBitIndex;
            TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
          } while (TStack_c0.CurrentBitIndex < (TStack_c0.Array)->NumBits);
        }
      }
LAB_141bbd4ed:
      TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
      puVar13 = (uint *)(ulonglong)(uint)TStack_90.CurrentBitIndex;
    } while (TStack_90.CurrentBitIndex < (TStack_90.Array)->NumBits);
  }
  TStack_c0._padding_._4_4_ = 1;
  uVar15 = *(uint *)&(local_res18->Elements).field_0x28;
  TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(local_res18->Elements).field_0x10;
  puVar13 = puVar20;
  if (uVar15 != 0) {
    puVar21 = *(uint **)&(local_res18->Elements).field_0x20;
    puVar13 = (uint *)(ulonglong)uVar15;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)TStack_c0.Array;
    }
    uVar4 = *puVar21;
    puVar14 = puVar20;
    uVar16 = uVar7;
    uVar22 = uVar7;
    while (uVar4 == 0) {
      iVar17 = (int)puVar14;
      uVar16 = (int)puVar20 + 0x20;
      puVar20 = (uint *)(ulonglong)uVar16;
      uVar22 = iVar17 + 1;
      puVar14 = (uint *)(ulonglong)uVar22;
      if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar22)
      goto LAB_141bbd58b;
      uVar4 = puVar21[(longlong)iVar17 + 1];
    }
    TStack_c0._padding_._4_4_ = -uVar4 & uVar4;
    uVar18 = (ulonglong)TStack_c0._padding_._4_4_ * 2 + 1;
    lVar3 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar7 = (uVar16 - 1) + (int)lVar3;
    if ((int)uVar15 < (int)uVar7) {
      uVar7 = uVar15;
    }
    puVar13 = (uint *)(ulonglong)uVar7;
  }
LAB_141bbd58b:
  local_c8 = local_res18;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  TStack_c0.CurrentBitIndex = (int)puVar13;
  TStack_c0._28_4_ = local_54;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  local_98 = local_res18;
  TStack_90._28_4_ = local_54;
  TStack_90.BaseBitIndex = uVar16;
  TStack_c0._padding_._0_4_ = uVar22;
  TStack_c0.BaseBitIndex = uVar16;
  TStack_90.Array = TStack_c0.Array;
  TStack_90._padding_._0_4_ = uVar22;
  TStack_90._padding_._4_4_ = TStack_c0._padding_._4_4_;
  TStack_90.CurrentBitIndex = TStack_c0.CurrentBitIndex;
  if (TStack_c0.CurrentBitIndex < (int)uVar15) {
    do {
      Emplace<int_const_&>
                (__return_storage_ptr__,(int *)&local_res18,
                 (bool *)(*(longlong *)&local_98->Elements + (longlong)(int)puVar13 * 0xc));
      TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
      puVar13 = (uint *)(ulonglong)(uint)TStack_90.CurrentBitIndex;
    } while (TStack_90.CurrentBitIndex < (TStack_90.Array)->NumBits);
  }
  return __return_storage_ptr__;
}

