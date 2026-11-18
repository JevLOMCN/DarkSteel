// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Serialization
// Functions: 36

// Emplace<FStructSerializerBuiltinTestStruct_const_&> @ 148b88a20

FSetElementId __thiscall
TSet<FStructSerializerBuiltinTestStruct,DefaultKeyFuncs<FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
::Emplace<FStructSerializerBuiltinTestStruct_const_&>
          (TSet<FStructSerializerBuiltinTestStruct,DefaultKeyFuncs<FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
           *this,FStructSerializerBuiltinTestStruct *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  wchar_t *pwVar8;
  TSparseSetElement<FStructSerializerBuiltinTestStruct> *pTVar9;
  bool *in_R9;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar7 = *(int *)&(this->Elements).field_0x34;
  if (iVar7 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xe0,0x10,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar7 = iVar7 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar5 * 0xe0 + 4 + lVar2);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0xe0 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<224,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<224,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  pTVar9 = (TSparseSetElement<FStructSerializerBuiltinTestStruct> *)0x0;
  if (local_28.Pointer != (TSparseSetElement<FStructSerializerBuiltinTestStruct> *)0x0) {
    FStructSerializerBuiltinTestStruct::FStructSerializerBuiltinTestStruct
              (local_28.Pointer,(FStructSerializerBuiltinTestStruct *)param_2);
    *(undefined4 *)((longlong)local_28.Pointer + 0xd0) = 0xffffffff;
    pTVar9 = local_28.Pointer;
  }
  local_res8[0] = local_28.Index;
  iVar7 = *(int *)&pTVar9->field_0x20 + -1;
  if (*(int *)&pTVar9->field_0x20 == 0) {
    pwVar8 = L"";
    iVar7 = 0;
  }
  else {
    pwVar8 = *(wchar_t **)&pTVar9->field_0x18;
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar8);
  bVar4 = TryReplaceExisting(this,uVar6,pTVar9,(int *)local_res8,in_R9);
  uVar3 = local_res8[0];
  if (bVar4) {
    (param_1->Guid).A = local_res8[0];
  }
  else {
    RehashOrLink(this,uVar6,pTVar9,local_res8[0]);
    (param_1->Guid).A = uVar3;
  }
  return (FSetElementId)(int)param_1;
}

// Emplace<UE::Math::TVector<float>_> @ 148b88e40

FSetElementId __thiscall
TSet<UE::Math::TVector<float>,DefaultKeyFuncs<UE::Math::TVector<float>,0>,FDefaultSetAllocator>::
Emplace<UE::Math::TVector<float>_>
          (TSet<UE::Math::TVector<float>,DefaultKeyFuncs<UE::Math::TVector<float>,0>,FDefaultSetAllocator>
           *this,TVector<float> *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  bool *in_R9;
  float local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x14,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar5 * 0x14);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x14) = 0xffffffff;
    }
  }
  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar5);
  if (local_38.Pointer != (TSparseSetElement<UE::Math::TVector<float>_> *)0x0) {
    *(undefined8 *)local_38.Pointer = *(undefined8 *)param_2;
    *(undefined4 *)((longlong)local_38.Pointer + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)((longlong)local_38.Pointer + 0xc) = 0xffffffff;
  }
  local_res8[0] = (float)local_38.Index;
  uVar6 = FCrc::MemCrc_DEPRECATED(local_38.Pointer,0xc,0);
  bVar4 = TryReplaceExisting(this,uVar6,local_38.Pointer,(int *)local_res8,in_R9);
  if (!bVar4) {
    uVar8 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar8) {
      uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= this->HashSize)) {
      uVar6 = this->HashSize - 1U & uVar6;
      *(uint *)((longlong)local_38.Pointer + 0x10) = uVar6;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      *(undefined4 *)((longlong)local_38.Pointer + 0xc) =
           *(undefined4 *)((longlong)FVar9 + uVar7 * 4);
      *(float *)((longlong)FVar9 + uVar7 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  (param_1->field0_0x0)._s_0.X = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// Emplace<FStructSerializerBuiltinTestStruct> @ 148b88fe0

FSetElementId __thiscall
TSet<FStructSerializerBuiltinTestStruct,DefaultKeyFuncs<FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
::Emplace<FStructSerializerBuiltinTestStruct>
          (TSet<FStructSerializerBuiltinTestStruct,DefaultKeyFuncs<FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
           *this,FStructSerializerBuiltinTestStruct *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  wchar_t *pwVar8;
  TSparseSetElement<FStructSerializerBuiltinTestStruct> *pTVar9;
  bool *in_R9;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar7 = *(int *)&(this->Elements).field_0x34;
  if (iVar7 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xe0,0x10,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar7 = iVar7 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar5 * 0xe0 + 4 + lVar2);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0xe0 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<224,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<224,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  pTVar9 = (TSparseSetElement<FStructSerializerBuiltinTestStruct> *)0x0;
  if (local_28.Pointer != (TSparseSetElement<FStructSerializerBuiltinTestStruct> *)0x0) {
    FStructSerializerBuiltinTestStruct::FStructSerializerBuiltinTestStruct
              (local_28.Pointer,(FStructSerializerBuiltinTestStruct *)param_2);
    *(undefined4 *)((longlong)local_28.Pointer + 0xd0) = 0xffffffff;
    pTVar9 = local_28.Pointer;
  }
  local_res8[0] = local_28.Index;
  iVar7 = *(int *)&pTVar9->field_0x20 + -1;
  if (*(int *)&pTVar9->field_0x20 == 0) {
    pwVar8 = L"";
    iVar7 = 0;
  }
  else {
    pwVar8 = *(wchar_t **)&pTVar9->field_0x18;
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar8);
  bVar4 = TryReplaceExisting(this,uVar6,pTVar9,(int *)local_res8,in_R9);
  uVar3 = local_res8[0];
  if (bVar4) {
    (param_1->Guid).A = local_res8[0];
  }
  else {
    RehashOrLink(this,uVar6,pTVar9,local_res8[0]);
    (param_1->Guid).A = uVar3;
  }
  return (FSetElementId)(int)param_1;
}

// Emplace<TKeyInitializer<int_const_&>_> @ 148b89140

FSetElementId __thiscall
TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
Emplace<TKeyInitializer<int_const_&>_>
          (TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
           *this,TKeyInitializer<int_const_&> *param_1,bool *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  void *pvVar5;
  int iVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  char *in_R9;
  void *_Dst;
  TSparseSetElement<TTuple<int,FString>_> *_Src;
  bool bVar9;
  FSparseArrayAllocationInfo local_38;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  if (iVar8 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    lVar4 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar6 * 0x20 + 4 + lVar4);
    iVar8 = iVar8 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar4) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar6);
  if (local_38.Pointer == (TSparseSetElement<TTuple<int,FString>_> *)0x0) {
    _Src = (TSparseSetElement<TTuple<int,FString>_> *)0x0;
  }
  else {
    uVar2 = **(undefined4 **)param_2;
    *(undefined8 *)((longlong)local_38.Pointer + 8) = 0;
    *(undefined4 *)local_38.Pointer = uVar2;
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 0x18) = 0xffffffff;
    _Src = local_38.Pointer;
  }
  iVar8 = *(int *)&(this->Elements).field_0x8;
  bVar9 = false;
  iVar6 = *(int *)&(this->Elements).field_0x34;
  uVar3 = *(uint *)_Src;
  if ((iVar8 - iVar6 != 1) && (iVar8 != iVar6)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar8 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar3) * 4);
    if (iVar8 != -1) {
      lVar4 = *(longlong *)&this->Elements;
      do {
        if (*(uint *)((longlong)iVar8 * 0x20 + lVar4) == uVar3) {
          bVar9 = iVar8 != -1;
          if (bVar9) {
            _Dst = (void *)((longlong)iVar8 * 0x20 + lVar4);
            pvVar5 = *(void **)((longlong)_Dst + 8);
            if (pvVar5 != (void *)0x0) {
              FMemory::Free(pvVar5);
            }
            memmove(_Dst,_Src,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar8;
          }
          break;
        }
        iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + lVar4);
      } while (iVar8 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar9;
  }
  if (bVar9 == false) {
    RehashOrLink(this,uVar3,_Src,local_38.Index);
  }
  *(int *)&param_1->Key = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TKeyInitializer<FString_const_&>_> @ 148b89310

FSetElementId __thiscall
TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>::
Emplace<TKeyInitializer<FString_const_&>_>
          (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
           *this,TKeyInitializer<FString_const_&> *param_1,bool *param_2)

{
  undefined8 *_Dst;
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  TSparseSetElement<TTuple<FString,FString>_> *_Src;
  wchar_t *pwVar7;
  char *in_R9;
  bool bVar8;
  FSparseArrayAllocationInfo local_38;
  
  iVar6 = *(int *)&(this->Elements).field_0x34;
  if (iVar6 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar6 = iVar6 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x28);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  if (local_38.Pointer == (TSparseSetElement<TTuple<FString,FString>_> *)0x0) {
    _Src = (TSparseSetElement<TTuple<FString,FString>_> *)0x0;
  }
  else {
    ::FString::FString(local_38.Pointer,*(FString **)param_2);
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = 0;
    *(undefined8 *)((longlong)local_38.Pointer + 0x18) = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 0x20) = 0xffffffff;
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
      _Dst = (undefined8 *)(*(longlong *)&this->Elements + (longlong)iVar6 * 0x28);
      pvVar3 = *(void **)(*(longlong *)&this->Elements + 0x10 + (longlong)iVar6 * 0x28);
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      pvVar3 = (void *)*_Dst;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      memmove(_Dst,_Src,0x20);
      TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// Emplace<TPairInitializer<FString_&&,UE::Math::TVector<float>_&&>_> @ 148b894e0

FSetElementId __thiscall
TSet<TTuple<FString,UE::Math::TVector<float>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<float>,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FString_&&,UE::Math::TVector<float>_&&>_>
          (TSet<TTuple<FString,UE::Math::TVector<float>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<float>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FString_&&,UE::Math::TVector<float>_&&> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  wchar_t *pwVar11;
  ForElementType<FSetElementId> FVar12;
  int iVar13;
  FString *_Src;
  char *in_R9;
  bool bVar14;
  FSparseArrayAllocationInfo local_48;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  iVar13 = 1;
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
                   *)this,&local_48,iVar6);
  _Src = (FString *)0x0;
  iVar8 = 0;
  if (local_48.Pointer != (FString *)0x0) {
    puVar3 = *(undefined8 **)param_2;
    puVar4 = *(undefined8 **)(param_2 + 8);
    ((local_48.Pointer)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    ((local_48.Pointer)->AllocatorInstance).Data = (FScriptContainerElement *)*puVar3;
    *puVar3 = 0;
    (local_48.Pointer)->ArrayNum = *(int *)(puVar3 + 1);
    (local_48.Pointer)->ArrayMax = *(int *)((longlong)puVar3 + 0xc);
    puVar3[1] = 0;
    (((FString *)((longlong)local_48.Pointer + 0x10))->Data).AllocatorInstance.Data =
         (FScriptContainerElement *)*puVar4;
    (((FString *)((longlong)local_48.Pointer + 0x10))->Data).ArrayNum = *(int *)(puVar4 + 1);
    *(undefined4 *)&(((FString *)((longlong)local_48.Pointer + 0x20))->Data).AllocatorInstance.Data
         = 0xffffffff;
    _Src = local_48.Pointer;
  }
  iVar6 = (_Src->Data).ArrayNum;
  if (iVar6 == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(_Src->Data).AllocatorInstance.Data;
    iVar8 = iVar6 + -1;
  }
  uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar11);
  bVar14 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar8 = FindIndexByHash<FString>(this,uVar7,_Src);
    bVar14 = iVar8 != -1;
    if (bVar14) {
      lVar2 = *(longlong *)&this->Elements;
      pvVar5 = *(void **)(lVar2 + (longlong)iVar8 * 0x28);
      if (pvVar5 != (void *)0x0) {
        FMemory::Free(pvVar5);
      }
      memmove((void *)(lVar2 + (longlong)iVar8 * 0x28),_Src,0x20);
      TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      local_48.Index = iVar8;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar14;
  }
  if (bVar14 == false) {
    uVar10 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar10) {
      uVar9 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar13 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar10 < 1) || (iVar13 <= this->HashSize)) {
      uVar7 = this->HashSize - 1U & uVar7;
      *(uint *)((longlong)&_Src[2].Data.AllocatorInstance.Data + 4) = uVar7;
      FVar12 = (this->Hash).SecondaryData;
      if (FVar12 == (ForElementType<FSetElementId>)0x0) {
        FVar12 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar9 = (longlong)this->HashSize - 1U & (longlong)(int)uVar7;
      *(undefined4 *)&_Src[2].Data.AllocatorInstance.Data =
           *(undefined4 *)((longlong)FVar12 + uVar9 * 4);
      *(int *)((longlong)FVar12 + uVar9 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar13;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// FindIndexByHash<UE::Math::TVector<double>_> @ 148b89c70

int __thiscall
TSet<UE::Math::TVector<double>,DefaultKeyFuncs<UE::Math::TVector<double>,0>,FDefaultSetAllocator>::
FindIndexByHash<UE::Math::TVector<double>_>
          (TSet<UE::Math::TVector<double>,DefaultKeyFuncs<UE::Math::TVector<double>,0>,FDefaultSetAllocator>
           *this,uint param_1,TVector<double> *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar4 = (this->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        lVar2 = (longlong)iVar3 * 0x20;
        if ((((param_2->field0_0x0)._s_0.X == *(double *)(lVar2 + lVar1)) &&
            ((param_2->field0_0x0)._s_0.Y == *(double *)(lVar2 + 8 + lVar1))) &&
           ((param_2->field0_0x0)._s_0.Z == *(double *)(lVar2 + 0x10 + lVar1))) {
          return iVar3;
        }
        iVar3 = *(int *)(lVar2 + 0x18 + lVar1);
      } while (iVar3 != -1);
    }
  }
  return -1;
}

// FindIndexByHash<FStructSerializerBuiltinTestStruct> @ 148b89d00

int __thiscall
TSet<FStructSerializerBuiltinTestStruct,DefaultKeyFuncs<FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
::FindIndexByHash<FStructSerializerBuiltinTestStruct>
          (TSet<FStructSerializerBuiltinTestStruct,DefaultKeyFuncs<FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
           *this,uint param_1,FStructSerializerBuiltinTestStruct *param_2)

{
  int iVar1;
  bool bVar2;
  ForElementType<FSetElementId> FVar3;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar3 = (this->Hash).SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar1 = *(int *)((longlong)FVar3 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
        iVar1 != -1; iVar1 = *(int *)(*(longlong *)&this->Elements + 0xd0 + (longlong)iVar1 * 0xe0))
    {
      bVar2 = FStructSerializerBuiltinTestStruct::operator==
                        ((FStructSerializerBuiltinTestStruct *)
                         (*(longlong *)&this->Elements + (longlong)iVar1 * 0xe0),param_2);
      if (bVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}

// FindIndexByHash<FString> @ 148b89da0

int __thiscall
TSet<TTuple<FString,UE::Math::TVector<float>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<float>,0>,FDefaultSetAllocator>
::FindIndexByHash<FString>
          (TSet<TTuple<FString,UE::Math::TVector<float>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<float>,0>,FDefaultSetAllocator>
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

// FindIndexByHash<FString> @ 148b89e70

int __thiscall
TSet<TTuple<FString,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
::FindIndexByHash<FString>
          (TSet<TTuple<FString,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
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

// operator= @ 148ba0c10

TSet<TTuple<FString,UE::Math::TVector<float>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<float>,0>,FDefaultSetAllocator>
* __thiscall
TSet<TTuple<FString,UE::Math::TVector<float>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<float>,0>,FDefaultSetAllocator>
::operator=(TSet<TTuple<FString,UE::Math::TVector<float>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<float>,0>,FDefaultSetAllocator>
            *this,TSet<TTuple<FString,UE::Math::TVector<float>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<float>,0>,FDefaultSetAllocator>
                  *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TSet<TTuple<FString,UE::Math::TVector<float>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<float>,0>,FDefaultSetAllocator>
  *pTVar6;
  FString *pFVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  longlong lVar13;
  
  if (this == param_1) {
    return this;
  }
  UE::Core::Private::
  CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,&this->HashSize,&param_1->Hash,param_1->HashSize);
  iVar5 = *(int *)&(param_1->Elements).field_0x8;
  lVar10 = (longlong)iVar5;
  TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TVector<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty(&this->Elements,iVar5);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x28,8,iVar5,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
             (int *)&(this->Elements).field_0xc);
  puVar2 = &(this->Elements).field_0x10;
  puVar1 = &(param_1->Elements).field_0x10;
  *(undefined4 *)&(this->Elements).field_0x30 = *(undefined4 *)&(param_1->Elements).field_0x30;
  *(undefined4 *)&(this->Elements).field_0x34 = *(undefined4 *)&(param_1->Elements).field_0x34;
  if (puVar2 != puVar1) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)puVar2,
               (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
  }
  iVar8 = 0;
  if (0 < iVar5) {
    puVar11 = (undefined8 *)(*(longlong *)&this->Elements + 0x10);
    uVar9 = 1;
    lVar13 = *(longlong *)&param_1->Elements - *(longlong *)&this->Elements;
    do {
      if (((iVar8 < 0) || (*(int *)&(param_1->Elements).field_0x28 <= iVar8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSet<TTuple<FString,UE::Math::TVector<float>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<float>,0>,FDefaultSetAllocator>
                  *)(*pcVar3)();
        return pTVar6;
      }
      puVar2 = *(undefined1 **)&(param_1->Elements).field_0x20;
      puVar12 = puVar1;
      if (puVar2 != (undefined1 *)0x0) {
        puVar12 = puVar2;
      }
      pFVar7 = (FString *)(lVar13 + -0x10 + (longlong)puVar11);
      iVar5 = iVar8;
      if (iVar8 < 0) {
        iVar5 = iVar8 + 0x1f;
      }
      if ((*(uint *)(puVar12 + (longlong)(iVar5 >> 5) * 4) & uVar9) == 0) {
        *(undefined4 *)&(((FString *)(puVar11 + -2))->Data).AllocatorInstance.Data =
             *(undefined4 *)&(pFVar7->Data).AllocatorInstance.Data;
        *(undefined4 *)((longlong)puVar11 + -0xc) =
             *(undefined4 *)((longlong)puVar11 + lVar13 + -0xc);
      }
      else {
        ::FString::FString((FString *)(puVar11 + -2),pFVar7);
        *puVar11 = *(undefined8 *)((longlong)puVar11 + lVar13);
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)((longlong)puVar11 + lVar13 + 8);
        *(undefined4 *)(puVar11 + 2) = *(undefined4 *)((longlong)puVar11 + lVar13 + 0x10);
        *(undefined4 *)((longlong)puVar11 + 0x14) =
             *(undefined4 *)((longlong)puVar11 + lVar13 + 0x14);
      }
      iVar8 = iVar8 + 1;
      uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      puVar11 = puVar11 + 5;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return this;
}

// operator= @ 148ba0db0

TSet<TTuple<FString,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
* __thiscall
TSet<TTuple<FString,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
::operator=(TSet<TTuple<FString,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
            *this,TSet<TTuple<FString,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
                  *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  TSet<TTuple<FString,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
  *pTVar7;
  FString *pFVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  longlong lVar14;
  
  if (this == param_1) {
    return this;
  }
  UE::Core::Private::
  CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,&this->HashSize,&param_1->Hash,param_1->HashSize);
  iVar6 = *(int *)&(param_1->Elements).field_0x8;
  lVar11 = (longlong)iVar6;
  TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty(&this->Elements,iVar6);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,iVar6,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
             (int *)&(this->Elements).field_0xc);
  puVar2 = &(this->Elements).field_0x10;
  puVar1 = &(param_1->Elements).field_0x10;
  *(undefined4 *)&(this->Elements).field_0x30 = *(undefined4 *)&(param_1->Elements).field_0x30;
  *(undefined4 *)&(this->Elements).field_0x34 = *(undefined4 *)&(param_1->Elements).field_0x34;
  if (puVar2 != puVar1) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)puVar2,
               (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
  }
  iVar9 = 0;
  if (0 < iVar6) {
    puVar12 = (undefined8 *)(*(longlong *)&this->Elements + 0x10);
    uVar10 = 1;
    lVar14 = *(longlong *)&param_1->Elements - *(longlong *)&this->Elements;
    do {
      if (((iVar9 < 0) || (*(int *)&(param_1->Elements).field_0x28 <= iVar9)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TSet<TTuple<FString,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
                  *)(*pcVar3)();
        return pTVar7;
      }
      puVar2 = *(undefined1 **)&(param_1->Elements).field_0x20;
      puVar13 = puVar1;
      if (puVar2 != (undefined1 *)0x0) {
        puVar13 = puVar2;
      }
      pFVar8 = (FString *)(lVar14 + -0x10 + (longlong)puVar12);
      iVar6 = iVar9;
      if (iVar9 < 0) {
        iVar6 = iVar9 + 0x1f;
      }
      if ((*(uint *)(puVar13 + (longlong)(iVar6 >> 5) * 4) & uVar10) == 0) {
        *(undefined4 *)&(((FString *)(puVar12 + -2))->Data).AllocatorInstance.Data =
             *(undefined4 *)&(pFVar8->Data).AllocatorInstance.Data;
        *(undefined4 *)((longlong)puVar12 + -0xc) =
             *(undefined4 *)((longlong)puVar12 + lVar14 + -0xc);
      }
      else {
        ::FString::FString((FString *)(puVar12 + -2),pFVar8);
        uVar4 = ((undefined8 *)((longlong)puVar12 + lVar14))[1];
        *puVar12 = *(undefined8 *)((longlong)puVar12 + lVar14);
        puVar12[1] = uVar4;
        puVar12[2] = *(undefined8 *)((longlong)puVar12 + lVar14 + 0x10);
        *(undefined4 *)(puVar12 + 3) = *(undefined4 *)((longlong)puVar12 + lVar14 + 0x18);
        *(undefined4 *)((longlong)puVar12 + 0x1c) =
             *(undefined4 *)((longlong)puVar12 + lVar14 + 0x1c);
      }
      iVar9 = iVar9 + 1;
      uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
      puVar12 = puVar12 + 6;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return this;
}

// operator= @ 148ba0f50

TSet<TTuple<FString,FStructSerializerBuiltinTestStruct>,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
* __thiscall
TSet<TTuple<FString,FStructSerializerBuiltinTestStruct>,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
::operator=(TSet<TTuple<FString,FStructSerializerBuiltinTestStruct>,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
            *this,TSet<TTuple<FString,FStructSerializerBuiltinTestStruct>,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
                  *param_1)

{
  undefined1 *puVar1;
  FStructSerializerBuiltinTestStruct *pFVar2;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TSet<TTuple<FString,FStructSerializerBuiltinTestStruct>,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
  *pTVar7;
  FColor_u_0_s_0 *pFVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  FStructSerializerBuiltinTestStruct *this_00;
  undefined1 *puVar12;
  longlong lVar13;
  
  if (this == param_1) {
    return this;
  }
  UE::Core::Private::
  CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,&this->HashSize,&param_1->Hash,param_1->HashSize);
  iVar6 = *(int *)&(param_1->Elements).field_0x8;
  lVar11 = (longlong)iVar6;
  TSparseArray<TSparseSetElement<TTuple<FString,FStructSerializerBuiltinTestStruct>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty(&this->Elements,iVar6);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xf0,0x10,iVar6,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
             (int *)&(this->Elements).field_0xc);
  puVar3 = &(this->Elements).field_0x10;
  puVar1 = &(param_1->Elements).field_0x10;
  *(undefined4 *)&(this->Elements).field_0x30 = *(undefined4 *)&(param_1->Elements).field_0x30;
  *(undefined4 *)&(this->Elements).field_0x34 = *(undefined4 *)&(param_1->Elements).field_0x34;
  if (puVar3 != puVar1) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)puVar3,
               (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
  }
  iVar9 = 0;
  if (0 < iVar6) {
    this_00 = (FStructSerializerBuiltinTestStruct *)(*(longlong *)&this->Elements + 0x10);
    lVar13 = *(longlong *)&param_1->Elements - *(longlong *)&this->Elements;
    uVar10 = 1;
    do {
      if (((iVar9 < 0) || (*(int *)&(param_1->Elements).field_0x28 <= iVar9)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSet<TTuple<FString,FStructSerializerBuiltinTestStruct>,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
                  *)(*pcVar4)();
        return pTVar7;
      }
      puVar3 = *(undefined1 **)&(param_1->Elements).field_0x20;
      pFVar2 = (FStructSerializerBuiltinTestStruct *)(lVar13 + (longlong)this_00);
      puVar12 = puVar1;
      if (puVar3 != (undefined1 *)0x0) {
        puVar12 = puVar3;
      }
      pFVar8 = (FColor_u_0_s_0 *)(lVar13 + -0x10 + (longlong)this_00);
      iVar6 = iVar9;
      if (iVar9 < 0) {
        iVar6 = iVar9 + 0x1f;
      }
      if ((*(uint *)(puVar12 + (longlong)(iVar6 >> 5) * 4) & uVar10) == 0) {
        this_00[-1].Color.field0_0x0._s_0 = *pFVar8;
        *(undefined4 *)&this_00[-1].field_0xc4 = *(undefined4 *)&pFVar2[-1].field_0xc4;
      }
      else {
        ::FString::FString((FString *)&this_00[-1].Color,(FString *)pFVar8);
        FStructSerializerBuiltinTestStruct::FStructSerializerBuiltinTestStruct(this_00,pFVar2);
        this_00[1].Guid.A = pFVar2[1].Guid.A;
        this_00[1].Guid.B = pFVar2[1].Guid.B;
      }
      iVar9 = iVar9 + 1;
      uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
      this_00 = (FStructSerializerBuiltinTestStruct *)&this_00[1].String.Data.ArrayNum;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return this;
}

// operator= @ 148ba1100

TSet<UE::Math::TVector<double>,DefaultKeyFuncs<UE::Math::TVector<double>,0>,FDefaultSetAllocator> *
__thiscall
TSet<UE::Math::TVector<double>,DefaultKeyFuncs<UE::Math::TVector<double>,0>,FDefaultSetAllocator>::
operator=(TSet<UE::Math::TVector<double>,DefaultKeyFuncs<UE::Math::TVector<double>,0>,FDefaultSetAllocator>
          *this,TSet<UE::Math::TVector<double>,DefaultKeyFuncs<UE::Math::TVector<double>,0>,FDefaultSetAllocator>
                *param_1)

{
  undefined1 *puVar1;
  undefined1 *this_00;
  int iVar2;
  
  if (this != param_1) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              (&this->Hash,&this->HashSize,&param_1->Hash,param_1->HashSize);
    iVar2 = *(int *)&(param_1->Elements).field_0x8;
    TSparseArray<TSparseSetElement<UE::Math::TVector<double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this->Elements,iVar2);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar2,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
               (int *)&(this->Elements).field_0xc);
    puVar1 = &(param_1->Elements).field_0x10;
    this_00 = &(this->Elements).field_0x10;
    *(undefined4 *)&(this->Elements).field_0x30 = *(undefined4 *)&(param_1->Elements).field_0x30;
    *(undefined4 *)&(this->Elements).field_0x34 = *(undefined4 *)&(param_1->Elements).field_0x34;
    if (this_00 != puVar1) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)this_00,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
    }
    if (iVar2 != 0) {
      memcpy(*(void **)&this->Elements,*(void **)&param_1->Elements,(longlong)iVar2 << 5);
    }
    return this;
  }
  return this;
}

// operator= @ 148ba11d0

TSet<FStructSerializerBuiltinTestStruct,DefaultKeyFuncs<FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
* __thiscall
TSet<FStructSerializerBuiltinTestStruct,DefaultKeyFuncs<FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
::operator=(TSet<FStructSerializerBuiltinTestStruct,DefaultKeyFuncs<FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
            *this,TSet<FStructSerializerBuiltinTestStruct,DefaultKeyFuncs<FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
                  *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TSet<FStructSerializerBuiltinTestStruct,DefaultKeyFuncs<FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
  *pTVar6;
  FStructSerializerBuiltinTestStruct *pFVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  longlong lVar13;
  
  if (this == param_1) {
    return this;
  }
  UE::Core::Private::
  CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,&this->HashSize,&param_1->Hash,param_1->HashSize);
  iVar5 = *(int *)&(param_1->Elements).field_0x8;
  lVar10 = (longlong)iVar5;
  TSparseArray<TSparseSetElement<FStructSerializerBuiltinTestStruct>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty(&this->Elements,iVar5);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xe0,0x10,iVar5,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
             (int *)&(this->Elements).field_0xc);
  puVar2 = &(this->Elements).field_0x10;
  puVar1 = &(param_1->Elements).field_0x10;
  *(undefined4 *)&(this->Elements).field_0x30 = *(undefined4 *)&(param_1->Elements).field_0x30;
  *(undefined4 *)&(this->Elements).field_0x34 = *(undefined4 *)&(param_1->Elements).field_0x34;
  if (puVar2 != puVar1) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)puVar2,
               (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
  }
  iVar8 = 0;
  if (0 < iVar5) {
    puVar11 = (undefined4 *)(*(longlong *)&this->Elements + 0xd0);
    uVar9 = 1;
    lVar13 = *(longlong *)&param_1->Elements - *(longlong *)&this->Elements;
    do {
      if (((iVar8 < 0) || (*(int *)&(param_1->Elements).field_0x28 <= iVar8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSet<FStructSerializerBuiltinTestStruct,DefaultKeyFuncs<FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
                  *)(*pcVar3)();
        return pTVar6;
      }
      puVar2 = *(undefined1 **)&(param_1->Elements).field_0x20;
      puVar12 = puVar1;
      if (puVar2 != (undefined1 *)0x0) {
        puVar12 = puVar2;
      }
      pFVar7 = (FStructSerializerBuiltinTestStruct *)(lVar13 + -0xd0 + (longlong)puVar11);
      iVar5 = iVar8;
      if (iVar8 < 0) {
        iVar5 = iVar8 + 0x1f;
      }
      if ((*(uint *)(puVar12 + (longlong)(iVar5 >> 5) * 4) & uVar9) == 0) {
        (((FStructSerializerBuiltinTestStruct *)(puVar11 + -0x34))->Guid).A = (pFVar7->Guid).A;
        puVar11[-0x33] = *(undefined4 *)(lVar13 + -0xcc + (longlong)puVar11);
      }
      else {
        FStructSerializerBuiltinTestStruct::FStructSerializerBuiltinTestStruct
                  ((FStructSerializerBuiltinTestStruct *)(puVar11 + -0x34),pFVar7);
        *puVar11 = *(undefined4 *)(lVar13 + (longlong)puVar11);
        puVar11[1] = *(undefined4 *)(lVar13 + 4 + (longlong)puVar11);
      }
      iVar8 = iVar8 + 1;
      uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      puVar11 = puVar11 + 0x38;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return this;
}

// Difference @ 148ba6b80

TSet<UE::Math::TVector<double>,DefaultKeyFuncs<UE::Math::TVector<double>,0>,FDefaultSetAllocator> *
__thiscall
TSet<UE::Math::TVector<double>,DefaultKeyFuncs<UE::Math::TVector<double>,0>,FDefaultSetAllocator>::
Difference(TSet<UE::Math::TVector<double>,DefaultKeyFuncs<UE::Math::TVector<double>,0>,FDefaultSetAllocator>
           *this,TSet<UE::Math::TVector<double>,DefaultKeyFuncs<UE::Math::TVector<double>,0>,FDefaultSetAllocator>
                 *__return_storage_ptr__,
          TSet<UE::Math::TVector<double>,DefaultKeyFuncs<UE::Math::TVector<double>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  double *pdVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  longlong lVar5;
  undefined1 *puVar6;
  double dVar7;
  TBitArray<FDefaultBitArrayAllocator> *pTVar8;
  TSet<UE::Math::TVector<double>,DefaultKeyFuncs<UE::Math::TVector<double>,0>,FDefaultSetAllocator>
  *pTVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  byte bVar14;
  ForElementType<FSetElementId> FVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar19;
  void *pvVar20;
  TVector<double> *pTVar21;
  undefined1 *this_00;
  uint uVar22;
  ulonglong uVar23;
  uint *puVar24;
  uint *puVar25;
  int local_c8;
  uint uStack_c4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  FSparseArrayAllocationInfo local_a0;
  undefined4 local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  TSet<UE::Math::TVector<double>,DefaultKeyFuncs<UE::Math::TVector<double>,0>,FDefaultSetAllocator>
  *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  TSet<UE::Math::TVector<double>,DefaultKeyFuncs<UE::Math::TVector<double>,0>,FDefaultSetAllocator>
  *local_50;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_48;
  
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  puVar1 = &(__return_storage_ptr__->Elements).field_0x8;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0xc = 0;
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  uVar19 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  TStack_c0.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)CONCAT44(TStack_c0.Array._4_4_,TStack_c0.Array._0_4_)
  ;
  if (uVar19 == 0) goto LAB_148ba6e13;
  if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar19);
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)__return_storage_ptr__,uVar19);
  if (uVar19 < 4) {
    uVar19 = 1;
  }
  else {
    uVar17 = (ulonglong)((uVar19 >> 1) + 7) * 2 + 1;
    lVar18 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    uVar19 = 1 << ((byte)lVar18 & 0x1f);
  }
  if ((__return_storage_ptr__->HashSize != 0) &&
     (TStack_c0.Array =
           (TBitArray<FDefaultBitArrayAllocator> *)
           CONCAT44(TStack_c0.Array._4_4_,TStack_c0.Array._0_4_),
     (int)uVar19 <= __return_storage_ptr__->HashSize)) goto LAB_148ba6e13;
  __return_storage_ptr__->HashSize = uVar19;
  if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,0,4);
  }
  if (uVar19 != 0) {
    uVar16 = uVar19;
    if (uVar19 < 2) {
      if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
        uVar16 = 0;
        goto LAB_148ba6c86;
      }
    }
    else {
LAB_148ba6c86:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,uVar16,4);
    }
    if (0 < (int)uVar19) {
      uVar17 = 0;
      uVar23 = (ulonglong)uVar19;
      do {
        FVar4 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar15 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar15 = FVar4;
        }
        uVar12 = (longlong)(int)uVar19 - 1U & uVar17;
        uVar17 = uVar17 + 1;
        *(undefined4 *)((longlong)FVar15 + uVar12 * 4) = 0xffffffff;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
    }
  }
  TStack_c0.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)CONCAT44(TStack_c0.Array._4_4_,TStack_c0.Array._0_4_)
  ;
  if (__return_storage_ptr__->HashSize != 0) {
    iVar10 = *(int *)&(__return_storage_ptr__->Elements).field_0x28;
    local_a0.Pointer = &(__return_storage_ptr__->Elements).field_0x10;
    local_a0._4_4_ = 1;
    local_a0.Index = 0;
    iStack_8c = 0;
    iStack_88 = 0;
    if (iVar10 != 0) {
      puVar24 = *(uint **)&(__return_storage_ptr__->Elements).field_0x20;
      if (puVar24 == (uint *)0x0) {
        puVar24 = local_a0.Pointer;
      }
      uVar19 = *puVar24;
      iStack_88 = 0;
      local_a0.Index = 0;
      while (uVar19 == 0) {
        iStack_88 = iStack_88 + 0x20;
        lVar18 = (longlong)local_a0.Index;
        local_a0.Index = local_a0.Index + 1;
        if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < local_a0.Index)
        goto LAB_148ba6d79;
        uVar19 = puVar24[lVar18 + 1];
      }
      local_a0._4_4_ = -uVar19 & uVar19;
      uVar17 = (ulonglong)(uint)local_a0._4_4_ * 2 + 1;
      lVar18 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      iStack_8c = (int)lVar18 + -1 + iStack_88;
      if (iVar10 < iStack_8c) {
LAB_148ba6d79:
        iStack_8c = iVar10;
      }
    }
    local_90 = 0xffffffff;
    TStack_c0._padding_ = CONCAT44(local_a0._4_4_,local_a0.Index);
    TStack_c0._28_4_ = uStack_84;
    TStack_c0.BaseBitIndex = iStack_88;
    TStack_c0.UnvisitedBitMask = 0xffffffff;
    TStack_c0.CurrentBitIndex = iStack_8c;
    TStack_c0.Array = local_a0.Pointer;
    if (iStack_8c < iVar10) {
      do {
        iVar10 = TStack_c0.CurrentBitIndex;
        pvVar20 = (void *)((longlong)TStack_c0.CurrentBitIndex * 0x20 +
                          *(longlong *)&__return_storage_ptr__->Elements);
        uVar19 = FCrc::MemCrc_DEPRECATED(pvVar20,0x18,0);
        uVar19 = __return_storage_ptr__->HashSize - 1U & uVar19;
        *(uint *)((longlong)pvVar20 + 0x1c) = uVar19;
        FVar4 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar15 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar15 = FVar4;
        }
        uVar17 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar19;
        *(undefined4 *)((longlong)pvVar20 + 0x18) = *(undefined4 *)((longlong)FVar15 + uVar17 * 4);
        *(int *)((longlong)FVar15 + uVar17 * 4) = iVar10;
        TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
      } while (TStack_c0.CurrentBitIndex < (TStack_c0.Array)->NumBits);
    }
  }
LAB_148ba6e13:
  iVar10 = *(int *)&(this->Elements).field_0x28;
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
  TStack_78._padding_._0_4_ = 0;
  TStack_78.BaseBitIndex = 0;
  TStack_78._padding_._4_4_ = 1;
  TStack_78.CurrentBitIndex = 0;
  if (iVar10 != 0) {
    puVar24 = *(uint **)&(this->Elements).field_0x20;
    if (puVar24 == (uint *)0x0) {
      puVar24 = (uint *)TStack_78.Array;
    }
    uVar19 = *puVar24;
    while (uVar19 == 0) {
      lVar18 = (longlong)(int)TStack_78._padding_;
      TStack_78.BaseBitIndex = TStack_78.BaseBitIndex + 0x20;
      TStack_78._padding_._0_4_ = (int)TStack_78._padding_ + 1;
      TStack_78.CurrentBitIndex = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)TStack_78._padding_)
      goto LAB_148ba6e8b;
      uVar19 = puVar24[lVar18 + 1];
    }
    TStack_78._padding_._4_4_ = -uVar19 & uVar19;
    uVar17 = (ulonglong)TStack_78._padding_._4_4_ * 2 + 1;
    lVar18 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    TStack_78.CurrentBitIndex = TStack_78.BaseBitIndex + -1 + (int)lVar18;
    if (iVar10 < TStack_78.CurrentBitIndex) {
      TStack_78.CurrentBitIndex = iVar10;
    }
  }
LAB_148ba6e8b:
  TStack_78.UnvisitedBitMask = 0xffffffff;
  TStack_78._28_4_ = TStack_c0.CurrentBitIndex;
  TStack_48.BaseBitIndex = TStack_78.BaseBitIndex;
  TStack_48._28_4_ = TStack_c0.CurrentBitIndex;
  TStack_48.UnvisitedBitMask = 0xffffffff;
  local_80 = this;
  local_50 = this;
  TStack_48.Array = TStack_78.Array;
  TStack_48.CurrentBitIndex = TStack_78.CurrentBitIndex;
  TStack_48._padding_._0_4_ = (int)TStack_78._padding_;
  TStack_48._padding_._4_4_ = TStack_78._padding_._4_4_;
  if (TStack_78.CurrentBitIndex < iVar10) {
    do {
      pTVar9 = local_50;
      lVar18 = (longlong)TStack_48.CurrentBitIndex * 0x20;
      pTVar21 = (TVector<double> *)(*(longlong *)&local_50->Elements + lVar18);
      uVar19 = FCrc::MemCrc_DEPRECATED(pTVar21,0x18,0);
      iVar10 = FindIndexByHash<UE::Math::TVector<double>_>(param_1,uVar19,pTVar21);
      pTVar8 = TStack_c0.Array;
      if (iVar10 == -1) {
        iVar10 = *(int *)&(__return_storage_ptr__->Elements).field_0x34;
        lVar13 = *(longlong *)&pTVar9->Elements;
        if (iVar10 == 0) {
          iVar11 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x20,8,1,(ForAnyElementType *)__return_storage_ptr__,(int *)puVar1,
                              (int *)&(__return_storage_ptr__->Elements).field_0xc);
          this_00 = &(__return_storage_ptr__->Elements).field_0x10;
          iVar10 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                             ((TBitArray<FDefaultBitArrayAllocator> *)this_00,1);
          puVar6 = *(undefined1 **)&(__return_storage_ptr__->Elements).field_0x20;
          if (puVar6 != (undefined1 *)0x0) {
            this_00 = puVar6;
          }
          bVar14 = (byte)iVar10 & 0x1f;
          if (iVar10 < 0) {
            iVar10 = iVar10 + 0x1f;
            bVar14 = bVar14 - 0x20;
          }
          *(uint *)(this_00 + (longlong)(iVar10 >> 5) * 4) =
               *(uint *)(this_00 + (longlong)(iVar10 >> 5) * 4) & ~(1 << (bVar14 & 0x1f));
        }
        else {
          iVar11 = *(int *)&(__return_storage_ptr__->Elements).field_0x30;
          lVar5 = *(longlong *)&__return_storage_ptr__->Elements;
          iVar3 = *(int *)((longlong)iVar11 * 0x20 + 4 + lVar5);
          iVar10 = iVar10 + -1;
          *(int *)&(__return_storage_ptr__->Elements).field_0x30 = iVar3;
          *(int *)&(__return_storage_ptr__->Elements).field_0x34 = iVar10;
          if (iVar10 != 0) {
            *(undefined4 *)((longlong)iVar3 * 0x20 + lVar5) = 0xffffffff;
          }
        }
        TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)__return_storage_ptr__,&local_a0,iVar11);
        pvVar20 = local_a0.Pointer;
        iVar10 = local_a0.Index;
        if (local_a0.Pointer != (double *)0x0) {
          pdVar2 = (double *)(lVar13 + lVar18);
          dVar7 = pdVar2[1];
          *(double *)local_a0.Pointer = *pdVar2;
          *(double *)((longlong)local_a0.Pointer + 8) = dVar7;
          *(double *)((longlong)local_a0.Pointer + 0x10) = *(double *)(lVar13 + 0x10 + lVar18);
          *(undefined4 *)((longlong)local_a0.Pointer + 0x18) = 0xffffffff;
        }
        uVar19 = FCrc::MemCrc_DEPRECATED(local_a0.Pointer,0x18,0);
        iVar11 = *(int *)&(__return_storage_ptr__->Elements).field_0x34;
        if ((*(int *)puVar1 - iVar11 != 1) && (*(int *)puVar1 != iVar11)) {
          FVar4 = (__return_storage_ptr__->Hash).SecondaryData;
          FVar15 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
          if (FVar4 != (ForElementType<FSetElementId>)0x0) {
            FVar15 = FVar4;
          }
          iVar11 = *(int *)((longlong)FVar15 +
                           (ulonglong)(__return_storage_ptr__->HashSize - 1U & uVar19) * 4);
          if (iVar11 != -1) {
            lVar18 = *(longlong *)&__return_storage_ptr__->Elements;
            do {
              lVar13 = (longlong)iVar11 * 0x20;
              if (((*(double *)pvVar20 == *(double *)(lVar13 + lVar18)) &&
                  (*(double *)((longlong)pvVar20 + 8) == *(double *)(lVar13 + 8 + lVar18))) &&
                 (*(double *)((longlong)pvVar20 + 0x10) == *(double *)(lVar13 + 0x10 + lVar18))) {
                if (iVar11 != -1) {
                  memmove((void *)((longlong)iVar11 * 0x20 +
                                  *(longlong *)&__return_storage_ptr__->Elements),pvVar20,0x18);
                  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::RemoveAtUninitialized
                            ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                              *)__return_storage_ptr__,iVar10,1);
                  pTVar8 = TStack_c0.Array;
                  goto LAB_148ba72d8;
                }
                break;
              }
              iVar11 = *(int *)(lVar13 + 0x18 + lVar18);
            } while (iVar11 != -1);
          }
        }
        uVar22 = 1;
        uVar16 = *(int *)puVar1 - *(int *)&(__return_storage_ptr__->Elements).field_0x34;
        if (3 < uVar16) {
          uVar17 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
          lVar18 = 0x3f;
          if (uVar17 != 0) {
            for (; uVar17 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          uVar22 = 1 << ((byte)lVar18 & 0x1f);
        }
        if (((int)uVar16 < 1) || ((int)uVar22 <= __return_storage_ptr__->HashSize)) {
          uVar19 = __return_storage_ptr__->HashSize - 1U & uVar19;
          *(uint *)((longlong)pvVar20 + 0x1c) = uVar19;
          FVar4 = (__return_storage_ptr__->Hash).SecondaryData;
          FVar15 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
          if (FVar4 != (ForElementType<FSetElementId>)0x0) {
            FVar15 = FVar4;
          }
          uVar17 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar19;
          *(undefined4 *)((longlong)pvVar20 + 0x18) = *(undefined4 *)((longlong)FVar15 + uVar17 * 4)
          ;
          *(int *)((longlong)FVar15 + uVar17 * 4) = iVar10;
          pTVar8 = TStack_c0.Array;
        }
        else {
          __return_storage_ptr__->HashSize = uVar22;
          if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,0,4);
          }
          if (uVar22 != 0) {
            uVar19 = uVar22;
            if (uVar22 < 2) {
              if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0
                 ) {
                uVar19 = 0;
                goto LAB_148ba711e;
              }
            }
            else {
LAB_148ba711e:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,uVar19
                         ,4);
            }
            if (0 < (int)uVar22) {
              uVar23 = (ulonglong)uVar22;
              uVar17 = 0;
              do {
                FVar4 = (__return_storage_ptr__->Hash).SecondaryData;
                FVar15 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
                if (FVar4 != (ForElementType<FSetElementId>)0x0) {
                  FVar15 = FVar4;
                }
                uVar12 = uVar17 & (longlong)(int)uVar22 - 1U;
                uVar17 = uVar17 + 1;
                *(undefined4 *)((longlong)FVar15 + uVar12 * 4) = 0xffffffff;
                uVar23 = uVar23 - 1;
              } while (uVar23 != 0);
            }
          }
          pTVar8 = TStack_c0.Array;
          if (__return_storage_ptr__->HashSize != 0) {
            iVar10 = *(int *)&(__return_storage_ptr__->Elements).field_0x28;
            TStack_c0._padding_ = (longlong)&(__return_storage_ptr__->Elements).field_0x10;
            local_c8 = 0;
            uStack_c4 = 1;
            TStack_c0.Array._4_4_ = 0;
            TStack_c0.UnvisitedBitMask = 0;
            if (iVar10 != 0) {
              puVar24 = *(uint **)&(__return_storage_ptr__->Elements).field_0x20;
              puVar25 = (uint *)TStack_c0._padding_;
              if (puVar24 != (uint *)0x0) {
                puVar25 = puVar24;
              }
              uVar19 = *puVar25;
              TStack_c0.UnvisitedBitMask = 0;
              while (uVar19 == 0) {
                TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask + 0x20;
                lVar18 = (longlong)local_c8;
                local_c8 = local_c8 + 1;
                if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < local_c8)
                goto LAB_148ba7207;
                uVar19 = puVar25[lVar18 + 1];
              }
              uStack_c4 = -uVar19 & uVar19;
              uVar17 = (ulonglong)uStack_c4 * 2 + 1;
              lVar18 = 0x3f;
              if (uVar17 != 0) {
                for (; uVar17 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                }
              }
              TStack_c0.Array._4_4_ = (int)lVar18 + -1 + TStack_c0.UnvisitedBitMask;
              if (iVar10 < TStack_c0.Array._4_4_) {
LAB_148ba7207:
                TStack_c0.Array._4_4_ = iVar10;
              }
            }
            TStack_c0.Array._0_4_ = 0xffffffff;
            TStack_78.UnvisitedBitMask = 0xffffffff;
            TStack_78.CurrentBitIndex = TStack_c0.Array._4_4_;
            TStack_78._28_4_ = TStack_c0.CurrentBitIndex;
            TStack_78.BaseBitIndex = TStack_c0.UnvisitedBitMask;
            TStack_78._padding_._0_4_ = local_c8;
            TStack_78._padding_._4_4_ = uStack_c4;
            local_80 = __return_storage_ptr__;
            TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)TStack_c0._padding_;
            pTVar8 = (TBitArray<FDefaultBitArrayAllocator> *)
                     CONCAT44(TStack_c0.Array._4_4_,0xffffffff);
            if (TStack_c0.Array._4_4_ < iVar10) {
              do {
                iVar10 = TStack_78.CurrentBitIndex;
                pvVar20 = (void *)((longlong)TStack_78.CurrentBitIndex * 0x20 +
                                  *(longlong *)&local_80->Elements);
                uVar19 = FCrc::MemCrc_DEPRECATED(pvVar20,0x18,0);
                uVar19 = __return_storage_ptr__->HashSize - 1U & uVar19;
                *(uint *)((longlong)pvVar20 + 0x1c) = uVar19;
                FVar4 = (__return_storage_ptr__->Hash).SecondaryData;
                FVar15 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
                if (FVar4 != (ForElementType<FSetElementId>)0x0) {
                  FVar15 = FVar4;
                }
                uVar17 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar19;
                *(undefined4 *)((longlong)pvVar20 + 0x18) =
                     *(undefined4 *)((longlong)FVar15 + uVar17 * 4);
                *(int *)((longlong)FVar15 + uVar17 * 4) = iVar10;
                TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_
                ;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
                pTVar8 = (TBitArray<FDefaultBitArrayAllocator> *)
                         CONCAT44(TStack_c0.Array._4_4_,TStack_c0.Array._0_4_);
              } while (TStack_78.CurrentBitIndex < (TStack_78.Array)->NumBits);
            }
          }
        }
      }
LAB_148ba72d8:
      TStack_48.UnvisitedBitMask = TStack_48.UnvisitedBitMask & ~TStack_48._padding_._4_4_;
      TStack_c0.Array = pTVar8;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_48);
    } while (TStack_48.CurrentBitIndex < (TStack_48.Array)->NumBits);
  }
  return __return_storage_ptr__;
}

// Difference @ 148ba7330

TSet<FStructSerializerBuiltinTestStruct,DefaultKeyFuncs<FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
* __thiscall
TSet<FStructSerializerBuiltinTestStruct,DefaultKeyFuncs<FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
::Difference(TSet<FStructSerializerBuiltinTestStruct,DefaultKeyFuncs<FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
             *this,TSet<FStructSerializerBuiltinTestStruct,DefaultKeyFuncs<FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
                   *__return_storage_ptr__,
            TSet<FStructSerializerBuiltinTestStruct,DefaultKeyFuncs<FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
            *param_1)

{
  ForElementType<FSetElementId> FVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> FVar5;
  ulonglong uVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  uint uVar9;
  uint uVar10;
  FStructSerializerBuiltinTestStruct *pFVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  int local_98;
  uint uStack_94;
  undefined8 uStack_90;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  uVar2 = 1;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  uVar9 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if (uVar9 == 0) goto LAB_148ba75c5;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar9);
  }
  TSparseArrayBase<224,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<224,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)__return_storage_ptr__,uVar9);
  uVar10 = 1;
  if (3 < uVar9) {
    uVar6 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar10 = 1 << ((byte)lVar7 & 0x1f);
  }
  if ((__return_storage_ptr__->HashSize != 0) && ((int)uVar10 <= __return_storage_ptr__->HashSize))
  goto LAB_148ba75c5;
  __return_storage_ptr__->HashSize = uVar10;
  if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,0,4);
  }
  if (uVar10 != 0) {
    uVar9 = uVar10;
    if (uVar10 < 2) {
      if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
        uVar9 = 0;
        goto LAB_148ba740d;
      }
    }
    else {
LAB_148ba740d:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,uVar9,4);
    }
    if (0 < (int)uVar10) {
      uVar12 = (ulonglong)uVar10;
      uVar6 = 0;
      do {
        FVar1 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar5 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar1 != (ForElementType<FSetElementId>)0x0) {
          FVar5 = FVar1;
        }
        uVar4 = uVar6 & (longlong)(int)uVar10 - 1U;
        uVar6 = uVar6 + 1;
        *(undefined4 *)((longlong)FVar5 + uVar4 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
  }
  if (__return_storage_ptr__->HashSize != 0) {
    iVar3 = *(int *)&(__return_storage_ptr__->Elements).field_0x28;
    TStack_60.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)&(__return_storage_ptr__->Elements).field_0x10;
    local_98 = 0;
    uStack_94 = 1;
    iStack_84 = 0;
    iStack_80 = 0;
    if (iVar3 != 0) {
      puVar15 = *(uint **)&(__return_storage_ptr__->Elements).field_0x20;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)TStack_60.Array;
      }
      uVar9 = *puVar15;
      iStack_80 = 0;
      local_98 = 0;
      while (uVar9 == 0) {
        iStack_80 = iStack_80 + 0x20;
        lVar7 = (longlong)local_98;
        local_98 = local_98 + 1;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_98) goto LAB_148ba74f9;
        uVar9 = puVar15[lVar7 + 1];
      }
      uStack_94 = -uVar9 & uVar9;
      uVar6 = (ulonglong)uStack_94 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_84 = (int)lVar7 + -1 + iStack_80;
      if (iVar3 < iStack_84) {
LAB_148ba74f9:
        iStack_84 = iVar3;
      }
    }
    TStack_60.UnvisitedBitMask = 0xffffffff;
    TStack_60.CurrentBitIndex = iStack_84;
    TStack_60._28_4_ = uStack_7c;
    TStack_60.BaseBitIndex = iStack_80;
    TStack_60._padding_._0_4_ = local_98;
    TStack_60._padding_._4_4_ = uStack_94;
    if (iStack_84 < iVar3) {
      do {
        iVar14 = TStack_60.CurrentBitIndex;
        lVar7 = (longlong)TStack_60.CurrentBitIndex * 0xe0 +
                *(longlong *)&__return_storage_ptr__->Elements;
        iVar3 = *(int *)(lVar7 + 0x20) + -1;
        if (*(int *)(lVar7 + 0x20) == 0) {
          pwVar8 = L"";
          iVar3 = 0;
        }
        else {
          pwVar8 = *(wchar_t **)(lVar7 + 0x18);
        }
        uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar8);
        uVar9 = __return_storage_ptr__->HashSize - 1U & uVar9;
        *(uint *)(lVar7 + 0xd4) = uVar9;
        FVar1 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar5 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar1 != (ForElementType<FSetElementId>)0x0) {
          FVar5 = FVar1;
        }
        uVar6 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar9;
        *(undefined4 *)(lVar7 + 0xd0) = *(undefined4 *)((longlong)FVar5 + uVar6 * 4);
        *(int *)((longlong)FVar5 + uVar6 * 4) = iVar14;
        TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
    }
  }
LAB_148ba75c5:
  iVar3 = *(int *)&(this->Elements).field_0x28;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
  iVar13 = 0;
  iVar14 = iVar13;
  TStack_60.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->Elements).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)TStack_60.Array;
    }
    uVar9 = *puVar15;
    iVar14 = 0;
    iVar13 = 0;
    while (uVar9 == 0) {
      lVar7 = (longlong)iVar13;
      iVar14 = iVar14 + 0x20;
      iVar13 = iVar13 + 1;
      TStack_60.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_148ba763e;
      uVar9 = puVar15[lVar7 + 1];
    }
    uVar2 = -uVar9 & uVar9;
    uVar6 = (ulonglong)uVar2 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    TStack_60.CurrentBitIndex = iVar14 + -1 + (int)lVar7;
    if (iVar3 < TStack_60.CurrentBitIndex) {
      TStack_60.CurrentBitIndex = iVar3;
    }
  }
LAB_148ba763e:
  uStack_90 = CONCAT44(uVar2,iVar13);
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._padding_ = uStack_90;
  TStack_60._28_4_ = TStack_60.CurrentBitIndex;
  TStack_60.BaseBitIndex = iVar14;
  if (TStack_60.CurrentBitIndex < iVar3) {
    do {
      lVar7 = (longlong)TStack_60.CurrentBitIndex;
      pFVar11 = (FStructSerializerBuiltinTestStruct *)(*(longlong *)&this->Elements + lVar7 * 0xe0);
      iVar14 = (pFVar11->String).Data.ArrayNum;
      iVar3 = iVar14 + -1;
      if (iVar14 == 0) {
        pwVar8 = L"";
        iVar3 = 0;
      }
      else {
        pwVar8 = (wchar_t *)(pFVar11->String).Data.AllocatorInstance.Data;
      }
      uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar8);
      iVar3 = FindIndexByHash<FStructSerializerBuiltinTestStruct>(param_1,uVar2,pFVar11);
      if (iVar3 == -1) {
        Emplace<FStructSerializerBuiltinTestStruct_const_&>
                  (__return_storage_ptr__,(FStructSerializerBuiltinTestStruct *)&stack0x00000008,
                   (bool *)(*(longlong *)&this->Elements + lVar7 * 0xe0));
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  return __return_storage_ptr__;
}

// Empty @ 148ba7750

void __thiscall
TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::Empty
          (TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
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
    TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this->Elements,param_1);
  }
  else {
    TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this->Elements,param_1);
    *piVar1 = iVar4;
    Rehash(this);
  }
  return;
}

// Empty @ 148ba77e0

void __thiscall
TSet<TTuple<FString,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
::Empty(TSet<TTuple<FString,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
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
    TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this->Elements,param_1);
  }
  else {
    TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this->Elements,param_1);
    *piVar1 = iVar4;
    Rehash(this);
  }
  return;
}

// Empty @ 148ba7870

void __thiscall
TSet<TTuple<FString,FStructSerializerBuiltinTestStruct>,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
::Empty(TSet<TTuple<FString,FStructSerializerBuiltinTestStruct>,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
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
    TSparseArray<TSparseSetElement<TTuple<FString,FStructSerializerBuiltinTestStruct>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this->Elements,param_1);
  }
  else {
    TSparseArray<TSparseSetElement<TTuple<FString,FStructSerializerBuiltinTestStruct>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this->Elements,param_1);
    *piVar1 = iVar4;
    Rehash(this);
  }
  return;
}

// Find @ 148ba7e60

TTuple<FString,UE::Math::TVector<double>_> * __thiscall
TSet<TTuple<FString,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
::Find(TSet<TTuple<FString,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
       *this,FString *param_1)

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
    return (TTuple<FString,UE::Math::TVector<double>_> *)0x0;
  }
  return (TTuple<FString,UE::Math::TVector<double>_> *)
         ((longlong)iVar3 * 0x30 + *(longlong *)&this->Elements);
}

// Rehash @ 148bac120

void __thiscall
TSet<TTuple<FString,UE::Math::TVector<float>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<float>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FString,UE::Math::TVector<float>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<float>,0>,FDefaultSetAllocator>
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
        if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_148bac1f7;
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
LAB_148bac1f7:
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

// Rehash @ 148bac2d0

void __thiscall
TSet<TTuple<FString,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FString,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
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
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_148bac3a7;
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
LAB_148bac3a7:
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

// Rehash @ 148bac480

void __thiscall
TSet<TTuple<FString,FStructSerializerBuiltinTestStruct>,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FString,FStructSerializerBuiltinTestStruct>,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
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
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_148bac557;
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
LAB_148bac557:
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
                  (*(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0xf0);
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
        *(uint *)((longlong)puVar10 + 0xe4) = uVar4;
        FVar2 = (this->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar2;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar10 + 0x1c) = *(undefined4 *)((longlong)FVar9 + uVar6 * 4);
        *(int *)((longlong)FVar9 + uVar6 * 4) = iVar3;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 148bac640

void __thiscall
TSet<UE::Math::TVector<float>,DefaultKeyFuncs<UE::Math::TVector<float>,0>,FDefaultSetAllocator>::
Rehash(TSet<UE::Math::TVector<float>,DefaultKeyFuncs<UE::Math::TVector<float>,0>,FDefaultSetAllocator>
       *this)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
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
    iVar3 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar5 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar6 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_148bac717;
        uVar5 = puVar9[lVar6 + 1];
      }
      uStack_54 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_54 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_44 = (int)lVar6 + -1 + iStack_40;
      if (iVar3 < iStack_44) {
LAB_148bac717:
        iStack_44 = iVar3;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar3) {
      do {
        iVar3 = local_30.CurrentBitIndex;
        pvVar2 = (void *)(*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x14);
        uVar5 = FCrc::MemCrc_DEPRECATED(pvVar2,0xc,0);
        uVar5 = *piVar1 - 1U & uVar5;
        *(uint *)((longlong)pvVar2 + 0x10) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)((longlong)pvVar2 + 0xc) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar3;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 148bac7e0

void __thiscall
TSet<FStructSerializerBuiltinTestStruct,DefaultKeyFuncs<FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
::Rehash(TSet<FStructSerializerBuiltinTestStruct,DefaultKeyFuncs<FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
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
  uint *puVar10;
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
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_40.Array;
      }
      uVar4 = *puVar10;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar4 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar7 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_148bac8b7;
        uVar4 = puVar10[lVar7 + 1];
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
LAB_148bac8b7:
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
        lVar7 = *(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0xe0;
        iVar5 = *(int *)(lVar7 + 0x20) + -1;
        if (*(int *)(lVar7 + 0x20) == 0) {
          pwVar8 = L"";
          iVar5 = 0;
        }
        else {
          pwVar8 = *(wchar_t **)(lVar7 + 0x18);
        }
        uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar8);
        uVar4 = *piVar1 - 1U & uVar4;
        *(uint *)(lVar7 + 0xd4) = uVar4;
        FVar2 = (this->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar2;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(lVar7 + 0xd0) = *(undefined4 *)((longlong)FVar9 + uVar6 * 4);
        *(int *)((longlong)FVar9 + uVar6 * 4) = iVar3;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// RehashOrLink @ 148bac9a0

void __thiscall
TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
RehashOrLink(TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
             *this,uint param_1,TSparseSetElement<TTuple<int,FString>_> *param_2,int param_3)

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
  *(uint *)&param_2->field_0x1c = uVar5;
  FVar4 = (this->Hash).SecondaryData;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar3 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
  *(undefined4 *)&param_2->field_0x18 = *(undefined4 *)((longlong)FVar4 + uVar3 * 4);
  *(int *)((longlong)FVar4 + uVar3 * 4) = param_3;
  return;
}

// RehashOrLink @ 148baca30

void __thiscall
TSet<TTuple<FString,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
::RehashOrLink(TSet<TTuple<FString,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
               *this,uint param_1,
              TSparseSetElement<TTuple<FString,UE::Math::TVector<double>_>_> *param_2,int param_3)

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
  *(uint *)&param_2->field_0x2c = uVar5;
  FVar4 = (this->Hash).SecondaryData;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar3 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
  *(undefined4 *)&param_2->field_0x28 = *(undefined4 *)((longlong)FVar4 + uVar3 * 4);
  *(int *)((longlong)FVar4 + uVar3 * 4) = param_3;
  return;
}

// RehashOrLink @ 148bacac0

void __thiscall
TSet<TTuple<FString,FStructSerializerBuiltinTestStruct>,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
::RehashOrLink(TSet<TTuple<FString,FStructSerializerBuiltinTestStruct>,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
               *this,uint param_1,
              TSparseSetElement<TTuple<FString,FStructSerializerBuiltinTestStruct>_> *param_2,
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
  *(uint *)&param_2->field_0xe4 = uVar5;
  FVar4 = (this->Hash).SecondaryData;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar3 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
  *(undefined4 *)&param_2->field_0xe0 = *(undefined4 *)((longlong)FVar4 + uVar3 * 4);
  *(int *)((longlong)FVar4 + uVar3 * 4) = param_3;
  return;
}

// RehashOrLink @ 148bacb60

void __thiscall
TSet<FStructSerializerBuiltinTestStruct,DefaultKeyFuncs<FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
::RehashOrLink(TSet<FStructSerializerBuiltinTestStruct,DefaultKeyFuncs<FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
               *this,uint param_1,TSparseSetElement<FStructSerializerBuiltinTestStruct> *param_2,
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
  *(uint *)&param_2->field_0xd4 = uVar5;
  FVar4 = (this->Hash).SecondaryData;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar3 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
  *(undefined4 *)&param_2->field_0xd0 = *(undefined4 *)((longlong)FVar4 + uVar3 * 4);
  *(int *)((longlong)FVar4 + uVar3 * 4) = param_3;
  return;
}

// TryReplaceExisting @ 148bb1120

bool __thiscall
TSet<TTuple<FString,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FString,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<FString,UE::Math::TVector<double>_>_> *param_2,int *param_3,
          bool *param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  code *pcVar6;
  byte bVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  uint uVar14;
  undefined8 *_Dst;
  bool bVar15;
  
  bVar15 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar10 = FindIndexByHash<FString>(this,param_1,(FString *)param_2);
    bVar15 = iVar10 != -1;
    if (bVar15) {
      _Dst = (undefined8 *)((longlong)iVar10 * 0x30 + *(longlong *)&this->Elements);
      pvVar4 = (void *)*_Dst;
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
      memmove(_Dst,param_2,0x28);
      iVar3 = *param_3;
      lVar5 = *(longlong *)&this->Elements;
      puVar1 = &(this->Elements).field_0x10;
      bVar7 = (byte)iVar3 & 0x1f;
      uVar14 = 1 << bVar7 | 1U >> 0x20 - bVar7;
      if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      puVar13 = *(undefined1 **)&(this->Elements).field_0x20;
      lVar2 = (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = puVar1;
      }
      if (((*(uint *)(puVar13 + lVar2) & uVar14) == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      if (*(int *)&(this->Elements).field_0x34 != 0) {
        *(int *)(lVar5 + (longlong)*(int *)&(this->Elements).field_0x30 * 0x30) = iVar3;
      }
      uVar11 = 0xffffffff;
      puVar12 = (undefined4 *)((longlong)iVar3 * 0x30 + lVar5);
      *puVar12 = 0xffffffff;
      if (0 < *(int *)&(this->Elements).field_0x34) {
        uVar11 = *(undefined4 *)&(this->Elements).field_0x30;
      }
      puVar12[1] = uVar11;
      puVar13 = &(this->Elements).field_0x34;
      *(int *)puVar13 = *(int *)puVar13 + 1;
      *(int *)&(this->Elements).field_0x30 = iVar3;
      if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      puVar13 = *(undefined1 **)&(this->Elements).field_0x20;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = puVar1;
      }
      *(uint *)(puVar13 + lVar2) = *(uint *)(puVar13 + lVar2) & ~uVar14;
      *param_3 = iVar10;
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar15;
  }
  return bVar15;
}

// TryReplaceExisting @ 148bb1310

bool __thiscall
TSet<TTuple<FString,FStructSerializerBuiltinTestStruct>,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FString,FStructSerializerBuiltinTestStruct>,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<FString,FStructSerializerBuiltinTestStruct>_> *param_2,
          int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  ForElementType<FSetElementId> FVar10;
  longlong lVar11;
  undefined1 *puVar12;
  uint uVar13;
  undefined8 *_Dst;
  bool bVar14;
  
  iVar2 = *(int *)&(this->Elements).field_0x8;
  bVar14 = false;
  iVar7 = *(int *)&(this->Elements).field_0x34;
  if ((iVar2 - iVar7 != 1) && (iVar2 != iVar7)) {
    FVar10 = (this->Hash).SecondaryData;
    if (FVar10 == (ForElementType<FSetElementId>)0x0) {
      FVar10 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar2 = *(int *)((longlong)FVar10 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    while (iVar2 != -1) {
      lVar11 = (longlong)iVar2 * 0xf0;
      iVar7 = *(int *)(*(longlong *)&this->Elements + 8 + lVar11);
      if (iVar7 == *(int *)&param_2->field_0x8) {
        if (1 < iVar7) {
          iVar7 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(*(longlong *)&this->Elements + lVar11),
                             *(wchar_t **)param_2);
          bVar14 = iVar7 == 0;
          goto LAB_148bb13a4;
        }
LAB_148bb13e8:
        bVar14 = true;
        _Dst = (undefined8 *)((longlong)iVar2 * 0xf0 + *(longlong *)&this->Elements);
        if ((longlong *)_Dst[7] != (longlong *)0x0) {
          (**(code **)(*(longlong *)_Dst[7] + 0x10))();
        }
        if ((void *)_Dst[5] != (void *)0x0) {
          FMemory::Free((void *)_Dst[5]);
        }
        if ((void *)*_Dst != (void *)0x0) {
          FMemory::Free((void *)*_Dst);
        }
        memmove(_Dst,param_2,0xe0);
        iVar7 = *param_3;
        puVar1 = &(this->Elements).field_0x10;
        lVar11 = *(longlong *)&this->Elements;
        bVar4 = (byte)iVar7 & 0x1f;
        uVar13 = 1 << bVar4 | 1U >> 0x20 - bVar4;
        if (((iVar7 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar7)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
        if (puVar12 == (undefined1 *)0x0) {
          puVar12 = puVar1;
        }
        if (((*(uint *)(puVar12 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4) &
             uVar13) == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("AllocationFlags[Index]",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                               ,0xc5,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        if (*(int *)&(this->Elements).field_0x34 != 0) {
          *(int *)((longlong)*(int *)&(this->Elements).field_0x30 * 0xf0 + lVar11) = iVar7;
        }
        uVar8 = 0xffffffff;
        puVar9 = (undefined4 *)((longlong)iVar7 * 0xf0 + lVar11);
        *puVar9 = 0xffffffff;
        if (0 < *(int *)&(this->Elements).field_0x34) {
          uVar8 = *(undefined4 *)&(this->Elements).field_0x30;
        }
        puVar9[1] = uVar8;
        puVar12 = &(this->Elements).field_0x34;
        *(int *)puVar12 = *(int *)puVar12 + 1;
        *(int *)&(this->Elements).field_0x30 = iVar7;
        if (((iVar7 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar7)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
        if (puVar12 == (undefined1 *)0x0) {
          puVar12 = puVar1;
        }
        *(uint *)(puVar12 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4) =
             *(uint *)(puVar12 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4) &
             ~uVar13;
        *param_3 = iVar2;
        goto LAB_148bb13c2;
      }
      bVar14 = iVar7 + *(int *)&param_2->field_0x8 == 1;
LAB_148bb13a4:
      if (bVar14) goto LAB_148bb13e8;
      iVar2 = *(int *)(lVar11 + 0xe0 + *(longlong *)&this->Elements);
    }
    bVar14 = false;
  }
LAB_148bb13c2:
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar14;
  }
  return bVar14;
}

// TryReplaceExisting @ 148bb1580

bool __thiscall
TSet<UE::Math::TVector<float>,DefaultKeyFuncs<UE::Math::TVector<float>,0>,FDefaultSetAllocator>::
TryReplaceExisting(TSet<UE::Math::TVector<float>,DefaultKeyFuncs<UE::Math::TVector<float>,0>,FDefaultSetAllocator>
                   *this,uint param_1,TSparseSetElement<UE::Math::TVector<float>_> *param_2,
                  int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  byte bVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined1 *puVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  
  iVar12 = *(int *)&(this->Elements).field_0x8;
  bVar14 = false;
  iVar2 = *(int *)&(this->Elements).field_0x34;
  if ((iVar12 - iVar2 != 1) && (iVar12 != iVar2)) {
    FVar11 = (this->Hash).SecondaryData;
    if (FVar11 == (ForElementType<FSetElementId>)0x0) {
      FVar11 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar12 = *(int *)((longlong)FVar11 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar12 != -1) {
      lVar3 = *(longlong *)&this->Elements;
      do {
        lVar9 = (longlong)iVar12;
        if (((*(float *)param_2 == *(float *)(lVar3 + lVar9 * 0x14)) &&
            (*(float *)&param_2->field_0x4 == *(float *)(lVar3 + 4 + lVar9 * 0x14))) &&
           (*(float *)&param_2->field_0x8 == *(float *)(lVar3 + 8 + lVar9 * 0x14))) {
          bVar14 = iVar12 != -1;
          if (bVar14) {
            memmove((void *)(lVar3 + (longlong)iVar12 * 0x14),param_2,0xc);
            iVar2 = *param_3;
            lVar3 = *(longlong *)&this->Elements;
            puVar1 = &(this->Elements).field_0x10;
            bVar5 = (byte)iVar2 & 0x1f;
            uVar13 = 1 << bVar5 | 1U >> 0x20 - bVar5;
            if (((iVar2 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar2)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
            lVar9 = (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5);
            if (puVar10 == (undefined1 *)0x0) {
              puVar10 = puVar1;
            }
            if (((*(uint *)(puVar10 + lVar9 * 4) & uVar13) == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            if (*(int *)&(this->Elements).field_0x34 != 0) {
              *(int *)(lVar3 + (longlong)*(int *)&(this->Elements).field_0x30 * 0x14) = iVar2;
            }
            uVar8 = 0xffffffff;
            *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x14) = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0x34) {
              uVar8 = *(undefined4 *)&(this->Elements).field_0x30;
            }
            *(undefined4 *)(lVar3 + 4 + (longlong)iVar2 * 0x14) = uVar8;
            puVar10 = &(this->Elements).field_0x34;
            *(int *)puVar10 = *(int *)puVar10 + 1;
            *(int *)&(this->Elements).field_0x30 = iVar2;
            if (((iVar2 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar2)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
            if (puVar10 == (undefined1 *)0x0) {
              puVar10 = puVar1;
            }
            *(uint *)(puVar10 + lVar9 * 4) = *(uint *)(puVar10 + lVar9 * 4) & ~uVar13;
            *param_3 = iVar12;
          }
          break;
        }
        iVar12 = *(int *)(lVar3 + 0xc + lVar9 * 0x14);
      } while (iVar12 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar14;
  }
  return bVar14;
}

// TryReplaceExisting @ 148bb17b0

bool __thiscall
TSet<FStructSerializerBuiltinTestStruct,DefaultKeyFuncs<FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<FStructSerializerBuiltinTestStruct,DefaultKeyFuncs<FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
           *this,uint param_1,TSparseSetElement<FStructSerializerBuiltinTestStruct> *param_2,
          int *param_3,bool *param_4)

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
  undefined4 *puVar11;
  undefined1 *puVar12;
  void *_Dst;
  uint uVar13;
  bool bVar14;
  
  bVar14 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar9 = FindIndexByHash<FStructSerializerBuiltinTestStruct>
                      (this,param_1,(FStructSerializerBuiltinTestStruct *)param_2);
    bVar14 = iVar9 != -1;
    if (bVar14) {
      _Dst = (void *)((longlong)iVar9 * 0xe0 + *(longlong *)&this->Elements);
      if (*(longlong **)((longlong)_Dst + 0x28) != (longlong *)0x0) {
        (**(code **)(**(longlong **)((longlong)_Dst + 0x28) + 0x10))();
      }
      if (*(void **)((longlong)_Dst + 0x18) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)_Dst + 0x18));
      }
      memmove(_Dst,param_2,0xd0);
      iVar3 = *param_3;
      puVar1 = &(this->Elements).field_0x10;
      lVar4 = *(longlong *)&this->Elements;
      bVar6 = (byte)iVar3 & 0x1f;
      uVar13 = 1 << bVar6 | 1U >> 0x20 - bVar6;
      if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
      lVar2 = (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = puVar1;
      }
      if (((*(uint *)(puVar12 + lVar2) & uVar13) == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      if (*(int *)&(this->Elements).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(this->Elements).field_0x30 * 0xe0 + lVar4) = iVar3;
      }
      uVar10 = 0xffffffff;
      puVar11 = (undefined4 *)((longlong)iVar3 * 0xe0 + lVar4);
      *puVar11 = 0xffffffff;
      if (0 < *(int *)&(this->Elements).field_0x34) {
        uVar10 = *(undefined4 *)&(this->Elements).field_0x30;
      }
      puVar11[1] = uVar10;
      puVar12 = &(this->Elements).field_0x34;
      *(int *)puVar12 = *(int *)puVar12 + 1;
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
      puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = puVar1;
      }
      *(uint *)(puVar12 + lVar2) = *(uint *)(puVar12 + lVar2) & ~uVar13;
      *param_3 = iVar9;
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar14;
  }
  return bVar14;
}

// UnhashElements @ 148bb19a0

void __thiscall
TSet<TTuple<FString,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<FString,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_148bb1a9b;
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
LAB_148bb1a9b:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_148bb1b90;
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
LAB_148bb1b90:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)(*(longlong *)&this->Elements + 0x2c + (longlong)local_60.CurrentBitIndex * 0x30) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// UnhashElements @ 148bb1c30

void __thiscall
TSet<TTuple<FString,FStructSerializerBuiltinTestStruct>,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<FString,FStructSerializerBuiltinTestStruct>,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_148bb1d2b;
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
LAB_148bb1d2b:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_148bb1e20;
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
LAB_148bb1e20:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FStructSerializerBuiltinTestStruct>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)((longlong)local_60.CurrentBitIndex * 0xf0 + 0xe4 + *(longlong *)&this->Elements) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

