// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GlobalConfigurationDataCore
// Functions: 13

// Emplace<TPairInitializer<FString_&&,TSharedRef<FJsonValue,1>_&&>_> @ 14e9b60a0

FSetElementId __thiscall
TSet<TTuple<FString,TSharedRef<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FString_&&,TSharedRef<FJsonValue,1>_&&>_>
          (TSet<TTuple<FString,TSharedRef<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FString_&&,TSharedRef<FJsonValue,1>_&&> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  wchar_t *pwVar9;
  TSparseSetElement<TTuple<FString,TSharedRef<FJsonValue,1>_>_> *_Src;
  char *in_R9;
  bool bVar10;
  FSparseArrayAllocationInfo local_38;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  if (iVar8 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    iVar8 = iVar8 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar6 * 0x28);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar6);
  _Src = (TSparseSetElement<TTuple<FString,TSharedRef<FJsonValue,1>_>_> *)0x0;
  if (local_38.Pointer != (TSparseSetElement<TTuple<FString,TSharedRef<FJsonValue,1>_>_> *)0x0) {
    puVar3 = *(undefined8 **)param_2;
    puVar4 = *(undefined8 **)(param_2 + 8);
    *(undefined8 *)local_38.Pointer = 0;
    *(undefined8 *)local_38.Pointer = *puVar3;
    *puVar3 = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 8) = *(undefined4 *)(puVar3 + 1);
    *(undefined4 *)((longlong)local_38.Pointer + 0xc) = *(undefined4 *)((longlong)puVar3 + 0xc);
    puVar3[1] = 0;
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = *puVar4;
    lVar2 = puVar4[1];
    *(longlong *)((longlong)local_38.Pointer + 0x18) = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)((longlong)local_38.Pointer + 0x20) = 0xffffffff;
    _Src = local_38.Pointer;
  }
  iVar8 = *(int *)&_Src->field_0x8 + -1;
  if (*(int *)&_Src->field_0x8 == 0) {
    pwVar9 = L"";
    iVar8 = 0;
  }
  else {
    pwVar9 = *(wchar_t **)_Src;
  }
  uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar9);
  bVar10 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar8 = FindIndexByHash<FString>(this,uVar7,(FString *)_Src);
    bVar10 = iVar8 != -1;
    if (bVar10) {
      puVar3 = (undefined8 *)(*(longlong *)&this->Elements + (longlong)iVar8 * 0x28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)
                  (*(longlong *)&this->Elements + 0x18 + (longlong)iVar8 * 0x28));
      pvVar5 = (void *)*puVar3;
      if (pvVar5 != (void *)0x0) {
        FMemory::Free(pvVar5);
      }
      memmove(puVar3,_Src,0x20);
      TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_38.Index,1);
      local_38.Index = iVar8;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar10;
  }
  if (bVar10 == false) {
    RehashOrLink(this,uVar7,_Src,local_38.Index);
  }
  *(int *)&param_1->Key = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FString_const_&,TSharedRef<FJsonValue,1>_&&>_> @ 14e9b6290

FSetElementId __thiscall
TSet<TTuple<FString,TSharedRef<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FString_const_&,TSharedRef<FJsonValue,1>_&&>_>
          (TSet<TTuple<FString,TSharedRef<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FString_const_&,TSharedRef<FJsonValue,1>_&&> *param_1,
          bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  wchar_t *pwVar8;
  TSparseSetElement<TTuple<FString,TSharedRef<FJsonValue,1>_>_> *_Src;
  char *in_R9;
  bool bVar9;
  FSparseArrayAllocationInfo local_38;
  
  iVar7 = *(int *)&(this->Elements).field_0x34;
  if (iVar7 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar7 = iVar7 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x28);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar5);
  _Src = (TSparseSetElement<TTuple<FString,TSharedRef<FJsonValue,1>_>_> *)0x0;
  if (local_38.Pointer != (TSparseSetElement<TTuple<FString,TSharedRef<FJsonValue,1>_>_> *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 8);
    ::FString::FString(local_38.Pointer,*(FString **)param_2);
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = *puVar3;
    lVar2 = puVar3[1];
    *(longlong *)((longlong)local_38.Pointer + 0x18) = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)((longlong)local_38.Pointer + 0x20) = 0xffffffff;
    _Src = local_38.Pointer;
  }
  iVar7 = *(int *)&_Src->field_0x8 + -1;
  if (*(int *)&_Src->field_0x8 == 0) {
    pwVar8 = L"";
    iVar7 = 0;
  }
  else {
    pwVar8 = *(wchar_t **)_Src;
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar8);
  bVar9 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar7 = FindIndexByHash<FString>(this,uVar6,(FString *)_Src);
    bVar9 = iVar7 != -1;
    if (bVar9) {
      puVar3 = (undefined8 *)(*(longlong *)&this->Elements + (longlong)iVar7 * 0x28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)
                  (*(longlong *)&this->Elements + 0x18 + (longlong)iVar7 * 0x28));
      pvVar4 = (void *)*puVar3;
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
      memmove(puVar3,_Src,0x20);
      TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_38.Index,1);
      local_38.Index = iVar7;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar9;
  }
  if (bVar9 == false) {
    RehashOrLink(this,uVar6,_Src,local_38.Index);
  }
  *(int *)&param_1->Key = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FString_const_&,TSharedRef<FJsonValue,1>_const_&>_> @ 14e9b6470

FSetElementId __thiscall
TSet<TTuple<FString,TSharedRef<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FString_const_&,TSharedRef<FJsonValue,1>_const_&>_>
          (TSet<TTuple<FString,TSharedRef<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FString_const_&,TSharedRef<FJsonValue,1>_const_&> *param_1,
          bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  wchar_t *pwVar8;
  TSparseSetElement<TTuple<FString,TSharedRef<FJsonValue,1>_>_> *_Src;
  char *in_R9;
  bool bVar9;
  FSparseArrayAllocationInfo local_38;
  
  iVar7 = *(int *)&(this->Elements).field_0x34;
  if (iVar7 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar7 = iVar7 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x28);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar5);
  _Src = (TSparseSetElement<TTuple<FString,TSharedRef<FJsonValue,1>_>_> *)0x0;
  if (local_38.Pointer != (TSparseSetElement<TTuple<FString,TSharedRef<FJsonValue,1>_>_> *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 8);
    ::FString::FString(local_38.Pointer,*(FString **)param_2);
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = *puVar3;
    lVar2 = puVar3[1];
    *(longlong *)((longlong)local_38.Pointer + 0x18) = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)((longlong)local_38.Pointer + 0x20) = 0xffffffff;
    _Src = local_38.Pointer;
  }
  iVar7 = *(int *)&_Src->field_0x8 + -1;
  if (*(int *)&_Src->field_0x8 == 0) {
    pwVar8 = L"";
    iVar7 = 0;
  }
  else {
    pwVar8 = *(wchar_t **)_Src;
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar8);
  bVar9 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar7 = FindIndexByHash<FString>(this,uVar6,(FString *)_Src);
    bVar9 = iVar7 != -1;
    if (bVar9) {
      puVar3 = (undefined8 *)(*(longlong *)&this->Elements + (longlong)iVar7 * 0x28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)
                  (*(longlong *)&this->Elements + 0x18 + (longlong)iVar7 * 0x28));
      pvVar4 = (void *)*puVar3;
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
      memmove(puVar3,_Src,0x20);
      TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_38.Index,1);
      local_38.Index = iVar7;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar9;
  }
  if (bVar9 == false) {
    RehashOrLink(this,uVar6,_Src,local_38.Index);
  }
  *(int *)&param_1->Key = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// EmplaceByHash<TKeyInitializer<FString_const_&>_> @ 14e9b6650

FSetElementId __thiscall
TSet<TTuple<FString,TMap<FString,TSharedRef<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,TSharedRef<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>_>,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<FString_const_&>_>
          (TSet<TTuple<FString,TMap<FString,TSharedRef<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,TSharedRef<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<FString_const_&> *param_2,bool *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  int local_res8 [2];
  bool *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x68,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x68 + 4 + lVar3);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x68 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar5);
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<FString,TMap<FString,TSharedRef<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>_>_>_>
       *)0x0) {
    TKeyInitializer<FString_const_&>::
    operator<FString,TMap<FString,TSharedRef<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>_>_>_TTuple<FString,TMap<FString,TSharedRef<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>_>_>
              ((TKeyInitializer<FString_const_&> *)param_3,local_38.Pointer);
    *(undefined4 *)((longlong)local_38.Pointer + 0x60) = 0xffffffff;
  }
  local_res8[0] = local_38.Index;
  bVar4 = TryReplaceExisting(this,(uint)param_2,local_38.Pointer,local_res8,in_stack_00000028);
  if (!bVar4) {
    uVar7 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= this->HashSize)) {
      uVar7 = this->HashSize - 1U & (uint)param_2;
      *(uint *)((longlong)local_38.Pointer + 100) = uVar7;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar7;
      *(undefined4 *)((longlong)local_38.Pointer + 0x60) =
           *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
      *(int *)((longlong)FVar8 + uVar6 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_res8[0];
  return (FSetElementId)param_1;
}

// FindIndexByHash<FString> @ 14e9b67d0

int __thiscall
TSet<TTuple<FString,TMap<FString,TSharedRef<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,TSharedRef<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>_>,0>,FDefaultSetAllocator>
::FindIndexByHash<FString>
          (TSet<TTuple<FString,TMap<FString,TSharedRef<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,TSharedRef<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>_>,0>,FDefaultSetAllocator>
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
      lVar4 = (longlong)iVar1 * 0x68;
      iVar2 = *(int *)(*(longlong *)&this->Elements + 8 + lVar4);
      if (iVar2 == iVar3) {
        if (iVar2 < 2) {
          return iVar1;
        }
        iVar3 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)(*(longlong *)&this->Elements + lVar4),
                           (wchar_t *)(param_2->Data).AllocatorInstance.Data);
        bVar6 = iVar3 == 0;
      }
      else {
        bVar6 = iVar2 + iVar3 == 1;
      }
      if (bVar6) {
        return iVar1;
      }
      iVar1 = *(int *)(lVar4 + 0x60 + *(longlong *)&this->Elements);
    }
  }
  return -1;
}

// FindIndexByHash<FString> @ 14e9b6890

int __thiscall
TSet<TTuple<FString,TSharedRef<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>,FDefaultSetAllocator>
::FindIndexByHash<FString>
          (TSet<TTuple<FString,TSharedRef<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>,FDefaultSetAllocator>
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
      iVar4 = *(int *)(*(longlong *)&this->Elements + 8 + (longlong)iVar2 * 0x28);
      lVar1 = (longlong)iVar2 * 0x28;
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
      iVar2 = *(int *)(lVar1 + 0x20 + *(longlong *)&this->Elements);
    }
  }
  return -1;
}

// RemoveImpl<FString> @ 14e9b6fa0

int __thiscall
TSet<TTuple<FString,TSharedRef<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>,FDefaultSetAllocator>
::RemoveImpl<FString>
          (TSet<TTuple<FString,TSharedRef<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>,FDefaultSetAllocator>
           *this,uint param_1,FString *param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  ForElementType<FSetElementId> FVar7;
  uint uVar8;
  uint *puVar9;
  undefined1 *puVar10;
  bool bVar11;
  
  FVar7 = (this->Hash).SecondaryData;
  if (FVar7 == (ForElementType<FSetElementId>)0x0) {
    FVar7 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar8 = *(uint *)((longlong)FVar7 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar8 == 0xffffffff) {
    return 0;
  }
  while( true ) {
    lVar4 = *(longlong *)&this->Elements;
    iVar6 = *(int *)(lVar4 + 8 + (longlong)(int)uVar8 * 0x28);
    lVar1 = (longlong)(int)uVar8 * 0x28;
    iVar2 = (param_2->Data).ArrayNum;
    if (iVar6 == iVar2) break;
    bVar11 = iVar6 + iVar2 == 1;
LAB_14e9b7019:
    if (bVar11) goto LAB_14e9b703f;
    uVar8 = *(uint *)(lVar4 + 0x20 + lVar1);
    if (uVar8 == 0xffffffff) {
      return 0;
    }
  }
  if (1 < iVar6) {
    iVar6 = FGenericPlatformStricmp::Stricmp
                      (*(wchar_t **)(lVar4 + lVar1),
                       (wchar_t *)(param_2->Data).AllocatorInstance.Data);
    bVar11 = iVar6 == 0;
    goto LAB_14e9b7019;
  }
LAB_14e9b703f:
  if ((-1 < (int)uVar8) && ((int)uVar8 < *(int *)&(this->Elements).field_0x28)) {
    puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar10 + (longlong)((int)(uVar8 + ((int)uVar8 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar8 & 0x1f) & 1) != 0) goto LAB_14e9b709f;
  }
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("Elements.IsValidIndex(ElementIndex)",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                      ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar11) {
    pcVar5 = (code *)swi(3);
    iVar6 = (*pcVar5)();
    return iVar6;
  }
LAB_14e9b709f:
  FVar7 = (this->Hash).SecondaryData;
  lVar4 = *(longlong *)&this->Elements;
  if (FVar7 == (ForElementType<FSetElementId>)0x0) {
    FVar7 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar9 = (uint *)((longlong)FVar7 + (longlong)*(int *)(lVar4 + 0x24 + lVar1) * 4);
  while( true ) {
    uVar3 = *puVar9;
    if ((uVar3 == 0xffffffff) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("NextElementIndex != INDEX_NONE",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                            ,0x2b5,L"Corrupt hash"), bVar11)) break;
    if (uVar3 == uVar8) {
      *puVar9 = *(uint *)(lVar4 + 0x20 + lVar1);
      TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar8,1);
      TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar8,1);
      return 1;
    }
    puVar9 = (uint *)(*(longlong *)&this->Elements + (longlong)(int)uVar3 * 0x28 + 0x20);
  }
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}

// TSet<TTuple<FString,TSharedRef<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>,FDefaultSetAllocator> @ 14e9b7150

TSet<TTuple<FString,TSharedRef<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>,FDefaultSetAllocator>
* __thiscall
TSet<TTuple<FString,TSharedRef<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>,FDefaultSetAllocator>
::
TSet<TTuple<FString,TSharedRef<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>,FDefaultSetAllocator>
          (TSet<TTuple<FString,TSharedRef<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>,FDefaultSetAllocator>
           *this,TSet<TTuple<FString,TSharedRef<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>,FDefaultSetAllocator>
                 *param_1)

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
    TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// Rehash @ 14e9b9150

void __thiscall
TSet<TTuple<FString,TMap<FString,TSharedRef<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,TSharedRef<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FString,TMap<FString,TSharedRef<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,TSharedRef<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>_>,0>,FDefaultSetAllocator>
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
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14e9b9227;
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
LAB_14e9b9227:
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
                  (*(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x68);
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
        *(uint *)((longlong)puVar10 + 100) = uVar4;
        FVar2 = (this->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar2;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar10 + 0xc) = *(undefined4 *)((longlong)FVar9 + uVar6 * 4);
        *(int *)((longlong)FVar9 + uVar6 * 4) = iVar3;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e9b9300

void __thiscall
TSet<TTuple<FString,TSharedRef<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FString,TSharedRef<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>,FDefaultSetAllocator>
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
        if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14e9b93d7;
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
LAB_14e9b93d7:
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

// RehashOrLink @ 14e9b94b0

void __thiscall
TSet<TTuple<FString,TSharedRef<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>,FDefaultSetAllocator>
::RehashOrLink(TSet<TTuple<FString,TSharedRef<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>,FDefaultSetAllocator>
               *this,uint param_1,
              TSparseSetElement<TTuple<FString,TSharedRef<FJsonValue,1>_>_> *param_2,int param_3)

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
  *(uint *)&param_2->field_0x24 = uVar5;
  FVar4 = (this->Hash).SecondaryData;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar3 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
  *(undefined4 *)&param_2->field_0x20 = *(undefined4 *)((longlong)FVar4 + uVar3 * 4);
  *(int *)((longlong)FVar4 + uVar3 * 4) = param_3;
  return;
}

// TryReplaceExisting @ 14e9ba750

bool __thiscall
TSet<TTuple<FString,TMap<FString,TSharedRef<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,TSharedRef<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>_>,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FString,TMap<FString,TSharedRef<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,TSharedRef<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<FString,TMap<FString,TSharedRef<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>_>_>_>
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
  uint uVar12;
  undefined8 *_Dst;
  bool bVar13;
  
  bVar13 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar9 = FindIndexByHash<FString>(this,param_1,(FString *)param_2);
    bVar13 = iVar9 != -1;
    if (bVar13) {
      _Dst = (undefined8 *)((longlong)iVar9 * 0x68 + *(longlong *)&this->Elements);
      *(undefined4 *)(_Dst + 0xb) = 0;
      if ((void *)_Dst[10] != (void *)0x0) {
        FMemory::Free((void *)_Dst[10]);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(_Dst + 2));
      if ((void *)*_Dst != (void *)0x0) {
        FMemory::Free((void *)*_Dst);
      }
      memmove(_Dst,param_2,0x60);
      iVar3 = *param_3;
      puVar1 = &(this->Elements).field_0x10;
      lVar4 = *(longlong *)&this->Elements;
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
        *(int *)((longlong)*(int *)&(this->Elements).field_0x30 * 0x68 + lVar4) = iVar3;
      }
      uVar10 = 0xffffffff;
      *(undefined4 *)((longlong)iVar3 * 0x68 + lVar4) = 0xffffffff;
      if (0 < *(int *)&(this->Elements).field_0x34) {
        uVar10 = *(undefined4 *)&(this->Elements).field_0x30;
      }
      *(undefined4 *)((longlong)iVar3 * 0x68 + 4 + lVar4) = uVar10;
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

// UnhashElements @ 14e9ba940

void __thiscall
TSet<TTuple<FString,TSharedRef<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<FString,TSharedRef<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14e9baa3b;
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
LAB_14e9baa3b:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14e9bab30;
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
LAB_14e9bab30:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)(*(longlong *)&this->Elements + 0x24 + (longlong)local_60.CurrentBitIndex * 0x28) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

