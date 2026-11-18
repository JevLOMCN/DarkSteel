// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFCore
// Functions: 21

// Emplace<TKeyInitializer<int_const_&>_> @ 14e625cf0

FSetElementId __thiscall
TSet<TTuple<int,unsigned_int>,TDefaultMapHashableKeyFuncs<int,unsigned_int,0>,FDefaultSetAllocator>
::Emplace<TKeyInitializer<int_const_&>_>
          (TSet<TTuple<int,unsigned_int>,TDefaultMapHashableKeyFuncs<int,unsigned_int,0>,FDefaultSetAllocator>
           *this,TKeyInitializer<int_const_&> *param_1,bool *param_2)

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
                      (0x10,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar3 * 0x10);
    iVar8 = iVar8 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x10) = 0xffffffff;
    }
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar3);
  if (local_38.Pointer != (uint *)0x0) {
    *(uint *)local_38.Pointer = **(uint **)param_2;
    *(uint *)((longlong)local_38.Pointer + 4) = 0;
    *(uint *)((longlong)local_38.Pointer + 8) = 0xffffffff;
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
        if (*(uint *)(lVar2 + (longlong)iVar8 * 0x10) == uVar9) {
          bVar10 = iVar8 != -1;
          if (bVar10) {
            *(undefined8 *)(lVar2 + (longlong)iVar8 * 0x10) = *(undefined8 *)local_38.Pointer;
            TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar8;
          }
          break;
        }
        iVar8 = *(int *)(lVar2 + 8 + (longlong)iVar8 * 0x10);
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
      *(uint *)((longlong)local_38.Pointer + 0xc) = uVar9;
      FVar6 = (this->Hash).SecondaryData;
      if (FVar6 == (ForElementType<FSetElementId>)0x0) {
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar4 = (longlong)this->HashSize - 1U & (longlong)(int)uVar9;
      *(uint *)((longlong)local_38.Pointer + 8) = *(uint *)((longlong)FVar6 + uVar4 * 4);
      *(int *)((longlong)FVar6 + uVar4 * 4) = local_38.Index;
    }
    else {
      this->HashSize = iVar7;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TKeyInitializer<int_const_&>_> @ 14e625ef0

FSetElementId __thiscall
TSet<TTuple<int,`GLTF::FFileReader::BuildRootJoints'::__l3::FRootJoints>,TDefaultMapHashableKeyFuncs<int,`GLTF::FFileReader::BuildRootJoints'::__l3::FRootJoints,0>,FDefaultSetAllocator>
::Emplace<TKeyInitializer<int_const_&>_>
          (void *this,TKeyInitializer<int_const_&> *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  char *in_R9;
  uint *_Src;
  bool bVar10;
  FSparseArrayAllocationInfo local_68 [3];
  
  iVar8 = 1;
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),false);
  }
  else {
    iVar4 = *(int *)((longlong)this + 0x30);
    iVar1 = *(int *)((longlong)this + 0x34) + -1;
    iVar2 = *(int *)(*(longlong *)this + 4 + (longlong)iVar4 * 0x28);
    *(int *)((longlong)this + 0x30) = iVar2;
    *(int *)((longlong)this + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(*(longlong *)this + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,local_68,iVar4);
  if (local_68[0].Pointer == (uint *)0x0) {
    _Src = (uint *)0x0;
  }
  else {
    uVar9 = **(uint **)param_2;
    ((uint *)((longlong)local_68[0].Pointer + 8))[0] = 0;
    ((uint *)((longlong)local_68[0].Pointer + 8))[1] = 0;
    *(uint *)local_68[0].Pointer = uVar9;
    ((uint *)((longlong)local_68[0].Pointer + 0x10))[0] = 0;
    ((uint *)((longlong)local_68[0].Pointer + 0x10))[1] = 0;
    *(uint *)((longlong)local_68[0].Pointer + 0x18) = 0;
    *(uint *)((longlong)local_68[0].Pointer + 0x20) = 0xffffffff;
    _Src = local_68[0].Pointer;
  }
  bVar10 = false;
  uVar9 = *_Src;
  if ((*(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34) != 1) &&
     (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34))) {
    lVar7 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar7 = (longlong)this + 0x38;
    }
    iVar4 = *(int *)(lVar7 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & uVar9) * 4);
    if (iVar4 != -1) {
      lVar7 = *(longlong *)this;
      do {
        if (*(uint *)(lVar7 + (longlong)iVar4 * 0x28) == uVar9) {
          bVar10 = iVar4 != -1;
          if (bVar10) {
            pvVar3 = *(void **)(lVar7 + 8 + (longlong)iVar4 * 0x28);
            if (pvVar3 != (void *)0x0) {
              FMemory::Free(pvVar3);
            }
            memmove((void *)(lVar7 + (longlong)iVar4 * 0x28),_Src,0x20);
            TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized(this,local_68[0].Index,1);
            local_68[0].Index = iVar4;
          }
          break;
        }
        iVar4 = *(int *)(lVar7 + 0x20 + (longlong)iVar4 * 0x28);
      } while (iVar4 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar10;
  }
  if (bVar10 == false) {
    uVar6 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
    if (3 < uVar6) {
      uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)((longlong)this + 0x48))) {
      uVar9 = *(int *)((longlong)this + 0x48) - 1U & uVar9;
      _Src[9] = uVar9;
      lVar7 = *(longlong *)((longlong)this + 0x40);
      if (*(longlong *)((longlong)this + 0x40) == 0) {
        lVar7 = (longlong)this + 0x38;
      }
      uVar5 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (longlong)(int)uVar9;
      _Src[8] = *(uint *)(lVar7 + uVar5 * 4);
      *(int *)(lVar7 + uVar5 * 4) = local_68[0].Index;
    }
    else {
      *(int *)((longlong)this + 0x48) = iVar8;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_68[0].Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<int_&&,UE::Math::TMatrix<double>_const_&>_> @ 14e626120

FSetElementId __thiscall
TSet<TTuple<int,UE::Math::TMatrix<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TMatrix<double>,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<int_&&,UE::Math::TMatrix<double>_const_&>_>
          (TSet<TTuple<int,UE::Math::TMatrix<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TMatrix<double>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<int_&&,UE::Math::TMatrix<double>_const_&> *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  ForElementType<FSetElementId> FVar10;
  int iVar11;
  uint uVar12;
  bool *in_R9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar1 == 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xa0,0x10,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar7 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)((longlong)iVar7 * 0xa0 + 4 + lVar3);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0xa0 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<160,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<160,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar7);
  if (local_38.Pointer != (TSparseSetElement<TTuple<int,UE::Math::TMatrix<double>_>_> *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 8);
    *(undefined4 *)local_38.Pointer = **(undefined4 **)param_2;
    uVar5 = puVar4[1];
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = *puVar4;
    *(undefined8 *)((longlong)local_38.Pointer + 0x18) = uVar5;
    uVar5 = puVar4[3];
    *(undefined8 *)((longlong)local_38.Pointer + 0x20) = puVar4[2];
    *(undefined8 *)((longlong)local_38.Pointer + 0x28) = uVar5;
    uVar5 = puVar4[5];
    *(undefined8 *)((longlong)local_38.Pointer + 0x30) = puVar4[4];
    *(undefined8 *)((longlong)local_38.Pointer + 0x38) = uVar5;
    uVar5 = puVar4[7];
    *(undefined8 *)((longlong)local_38.Pointer + 0x40) = puVar4[6];
    *(undefined8 *)((longlong)local_38.Pointer + 0x48) = uVar5;
    uVar5 = puVar4[9];
    *(undefined8 *)((longlong)local_38.Pointer + 0x50) = puVar4[8];
    *(undefined8 *)((longlong)local_38.Pointer + 0x58) = uVar5;
    uVar5 = puVar4[0xb];
    *(undefined8 *)((longlong)local_38.Pointer + 0x60) = puVar4[10];
    *(undefined8 *)((longlong)local_38.Pointer + 0x68) = uVar5;
    uVar5 = puVar4[0xd];
    *(undefined8 *)((longlong)local_38.Pointer + 0x70) = puVar4[0xc];
    *(undefined8 *)((longlong)local_38.Pointer + 0x78) = uVar5;
    uVar5 = puVar4[0xf];
    *(undefined8 *)((longlong)local_38.Pointer + 0x80) = puVar4[0xe];
    *(undefined8 *)((longlong)local_38.Pointer + 0x88) = uVar5;
    *(undefined4 *)((longlong)local_38.Pointer + 0x90) = 0xffffffff;
  }
  uVar12 = *(uint *)local_38.Pointer;
  local_res8[0] = local_38.Index;
  bVar6 = TryReplaceExisting(this,uVar12,local_38.Pointer,local_res8,in_R9);
  if (!bVar6) {
    uVar9 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar9) {
      uVar8 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar11 <= this->HashSize)) {
      uVar12 = this->HashSize - 1U & uVar12;
      *(uint *)((longlong)local_38.Pointer + 0x94) = uVar12;
      FVar10 = (this->Hash).SecondaryData;
      if (FVar10 == (ForElementType<FSetElementId>)0x0) {
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar12;
      *(undefined4 *)((longlong)local_38.Pointer + 0x90) =
           *(undefined4 *)((longlong)FVar10 + uVar8 * 4);
      *(int *)((longlong)FVar10 + uVar8 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar11;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FString_&&,float_const_&>_> @ 14e6262f0

FSetElementId __thiscall
TSet<TTuple<FString,float>,TDefaultMapHashableKeyFuncs<FString,float,0>,FDefaultSetAllocator>::
Emplace<TPairInitializer<FString_&&,float_const_&>_>
          (TSet<TTuple<FString,float>,TDefaultMapHashableKeyFuncs<FString,float,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FString_&&,float_const_&> *param_1,bool *param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  wchar_t *pwVar8;
  ForElementType<FSetElementId> FVar9;
  undefined8 *puVar10;
  char cVar11;
  longlong lVar12;
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
    lVar12 = *(longlong *)&this->Elements;
    iVar13 = *(int *)((longlong)iVar3 * 0x20 + 4 + lVar12);
    iVar5 = iVar5 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar13;
    *(int *)&(this->Elements).field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar13 * 0x20 + lVar12) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar3);
  puVar10 = (undefined8 *)0x0;
  iVar5 = 0;
  if (local_48.Pointer != (undefined8 *)0x0) {
    puVar10 = *(undefined8 **)param_2;
    puVar1 = *(undefined4 **)(param_2 + 8);
    *(undefined8 *)local_48.Pointer = 0;
    *(undefined8 *)local_48.Pointer = *puVar10;
    *puVar10 = 0;
    *(undefined4 *)((longlong)local_48.Pointer + 8) = *(undefined4 *)(puVar10 + 1);
    *(undefined4 *)((longlong)local_48.Pointer + 0xc) = *(undefined4 *)((longlong)puVar10 + 0xc);
    puVar10[1] = 0;
    *(undefined4 *)((longlong)local_48.Pointer + 0x10) = *puVar1;
    *(undefined4 *)((longlong)local_48.Pointer + 0x18) = 0xffffffff;
    puVar10 = local_48.Pointer;
  }
  if (*(int *)(puVar10 + 1) == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)*puVar10;
    iVar5 = *(int *)(puVar10 + 1) + -1;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar8);
  iVar5 = *(int *)&(this->Elements).field_0x8;
  cVar11 = '\0';
  iVar3 = *(int *)&(this->Elements).field_0x34;
  iVar13 = local_48.Index;
  if ((iVar5 - iVar3 != 1) && (iVar5 != iVar3)) {
    FVar9 = (this->Hash).SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar13 = *(int *)((longlong)FVar9 + (ulonglong)(this->HashSize - 1U & uVar4) * 4);
    while (iVar13 != -1) {
      lVar12 = (longlong)iVar13 * 0x20;
      iVar5 = *(int *)(*(longlong *)&this->Elements + 8 + lVar12);
      if (iVar5 == *(int *)(puVar10 + 1)) {
        if (1 < iVar5) {
          iVar5 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(*(longlong *)&this->Elements + lVar12),
                             (wchar_t *)*puVar10);
          bVar15 = iVar5 == 0;
          goto LAB_14e626463;
        }
LAB_14e6264d2:
        cVar11 = '\x01';
        _Dst = (undefined8 *)((longlong)iVar13 * 0x20 + *(longlong *)&this->Elements);
        pvVar2 = (void *)*_Dst;
        if (pvVar2 != (void *)0x0) {
          FMemory::Free(pvVar2);
        }
        memmove(_Dst,puVar10,0x18);
        TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::RemoveAtUninitialized
                  ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)this,local_48.Index,1);
        goto LAB_14e626480;
      }
      bVar15 = iVar5 + *(int *)(puVar10 + 1) == 1;
LAB_14e626463:
      if (bVar15) goto LAB_14e6264d2;
      iVar13 = *(int *)(lVar12 + 0x18 + *(longlong *)&this->Elements);
    }
    cVar11 = '\0';
    iVar13 = local_48.Index;
  }
LAB_14e626480:
  if (in_R9 != (char *)0x0) {
    *in_R9 = cVar11;
  }
  if (cVar11 == '\0') {
    uVar7 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar14 = 1 << ((byte)lVar12 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar14 <= this->HashSize)) {
      uVar4 = this->HashSize - 1U & uVar4;
      *(uint *)((longlong)puVar10 + 0x1c) = uVar4;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar4;
      *(undefined4 *)(puVar10 + 3) = *(undefined4 *)((longlong)FVar9 + uVar6 * 4);
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

// Emplace<TPairInitializer<FString_&&,bool_const_&>_> @ 14e626570

FSetElementId __thiscall
TSet<TTuple<FString,bool>,TDefaultMapHashableKeyFuncs<FString,bool,0>,FDefaultSetAllocator>::
Emplace<TPairInitializer<FString_&&,bool_const_&>_>
          (TSet<TTuple<FString,bool>,TDefaultMapHashableKeyFuncs<FString,bool,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FString_&&,bool_const_&> *param_1,bool *param_2)

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
          goto LAB_14e6266f0;
        }
LAB_14e626757:
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
        goto LAB_14e62670d;
      }
      bVar15 = iVar5 + *(int *)(puVar12 + 1) == 1;
LAB_14e6266f0:
      if (bVar15) goto LAB_14e626757;
      iVar13 = *(int *)(*(longlong *)&this->Elements + 0x18 + lVar11);
    }
    cVar10 = '\0';
    iVar13 = local_48.Index;
  }
LAB_14e62670d:
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

// Emplace<TPairInitializer<int_&,GLTF::FTextureMap_*_&>_> @ 14e626800

FSetElementId __thiscall
TSet<TTuple<int,GLTF::FTextureMap_*>,TDefaultMapHashableKeyFuncs<int,GLTF::FTextureMap_*,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<int_&,GLTF::FTextureMap_*_&>_>
          (TSet<TTuple<int,GLTF::FTextureMap_*>,TDefaultMapHashableKeyFuncs<int,GLTF::FTextureMap_*,0>,FDefaultSetAllocator>
           *this,TPairInitializer<int_&,GLTF::FTextureMap_*_&> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  char *in_R9;
  bool bVar11;
  FSparseArrayAllocationInfo local_38;
  
  iVar9 = *(int *)&(this->Elements).field_0x34;
  iVar8 = 1;
  if (iVar9 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar9 = iVar9 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  if (local_38.Pointer != (uint *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 8);
    *(uint *)local_38.Pointer = **(uint **)param_2;
    *(undefined8 *)((longlong)local_38.Pointer + 8) = *puVar3;
    *(uint *)((longlong)local_38.Pointer + 0x10) = 0xffffffff;
  }
  iVar9 = *(int *)&(this->Elements).field_0x8;
  bVar11 = false;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar10 = *(uint *)local_38.Pointer;
  if ((iVar9 - iVar4 != 1) && (iVar9 != iVar4)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar9 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar10) * 4);
    if (iVar9 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(uint *)(lVar2 + (longlong)iVar9 * 0x18) == uVar10) {
          bVar11 = iVar9 != -1;
          if (bVar11) {
            memmove((void *)(lVar2 + (longlong)iVar9 * 0x18),local_38.Pointer,0x10);
            TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar9;
          }
          break;
        }
        iVar9 = *(int *)(lVar2 + 0x10 + (longlong)iVar9 * 0x18);
      } while (iVar9 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar11;
  }
  if (bVar11 == false) {
    uVar6 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar6) {
      uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= this->HashSize)) {
      uVar10 = this->HashSize - 1U & uVar10;
      *(uint *)((longlong)local_38.Pointer + 0x14) = uVar10;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar10;
      *(uint *)((longlong)local_38.Pointer + 0x10) = *(uint *)((longlong)FVar7 + uVar5 * 4);
      *(int *)((longlong)FVar7 + uVar5 * 4) = local_38.Index;
    }
    else {
      this->HashSize = iVar8;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<enum_GLTF::EExtension> @ 14e626c60

FSetElementId __thiscall
TSet<enum_GLTF::EExtension,DefaultKeyFuncs<enum_GLTF::EExtension,0>,FDefaultSetAllocator>::
Emplace<enum_GLTF::EExtension>(void *this,EExtension *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  EExtension EVar6;
  char *in_R9;
  bool bVar7;
  FSparseArrayAllocationInfo local_38;
  
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),false);
  }
  else {
    iVar4 = *(int *)((longlong)this + 0x30);
    iVar1 = *(int *)((longlong)this + 0x34) + -1;
    iVar2 = *(int *)(*(longlong *)this + 4 + (longlong)iVar4 * 0xc);
    *(int *)((longlong)this + 0x30) = iVar2;
    *(int *)((longlong)this + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(*(longlong *)this + (longlong)iVar2 * 0xc) = 0xffffffff;
    }
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&local_38,iVar4);
  if (local_38.Pointer != (TSparseSetElement<GLTF::EExtension> *)0x0) {
    *(undefined4 *)local_38.Pointer = *(undefined4 *)param_2;
    *(undefined4 *)((longlong)local_38.Pointer + 4) = 0xffffffff;
  }
  bVar7 = false;
  uVar3 = *(uint *)local_38.Pointer;
  if ((*(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34) != 1) &&
     (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34))) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    EVar6 = *(EExtension *)(lVar5 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & uVar3) * 4);
    if (EVar6 != ~KHR_MaterialsPbrSpecularGlossiness) {
      lVar5 = *(longlong *)this;
      do {
        if (*(uint *)(lVar5 + (longlong)(int)EVar6 * 0xc) == uVar3) {
          bVar7 = EVar6 != ~KHR_MaterialsPbrSpecularGlossiness;
          if (bVar7) {
            *(uint *)(lVar5 + (longlong)(int)EVar6 * 0xc) = uVar3;
            TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized(this,local_38.Index,1);
            local_38.Index = EVar6;
          }
          break;
        }
        EVar6 = *(EExtension *)(lVar5 + 4 + (longlong)(int)EVar6 * 0xc);
      } while (EVar6 != ~KHR_MaterialsPbrSpecularGlossiness);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar7;
  }
  if (bVar7 == false) {
    RehashOrLink(this,uVar3,local_38.Pointer,local_38.Index);
  }
  *param_1 = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// TSet<enum_GLTF::EExtension,DefaultKeyFuncs<enum_GLTF::EExtension,0>,FDefaultSetAllocator> @ 14e629480

TSet<GLTF::EExtension,DefaultKeyFuncs<GLTF::EExtension,0>,FDefaultSetAllocator> * __thiscall
TSet<enum_GLTF::EExtension,DefaultKeyFuncs<enum_GLTF::EExtension,0>,FDefaultSetAllocator>::
TSet<enum_GLTF::EExtension,DefaultKeyFuncs<enum_GLTF::EExtension,0>,FDefaultSetAllocator>
          (void *this,initializer_list<GLTF::EExtension> *param_1)

{
  int *piVar1;
  uchar *puVar2;
  int iVar3;
  EExtension *pEVar4;
  ForElementType<unsigned_int> *pFVar5;
  int iVar6;
  ulonglong uVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  TBitArray<FDefaultBitArrayAllocator> *pTVar16;
  ulonglong uVar17;
  EExtension *pEVar18;
  FSparseArrayAllocationInfo local_98;
  undefined4 local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  longlong *local_50;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_48;
  
  pEVar4 = param_1->_Last;
  piVar1 = (int *)((longlong)this + 8);
  pEVar18 = param_1->_First;
  *(undefined8 *)this = 0;
  *piVar1 = 0;
  *(undefined4 *)((longlong)this + 0xc) = 0;
  *(undefined8 *)((longlong)this + 0x20) = 0;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  *(undefined4 *)((longlong)this + 0x2c) = 0x80;
  *(undefined4 *)((longlong)this + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x34) = 0;
  *(undefined8 *)((longlong)this + 0x40) = 0;
  *(undefined4 *)((longlong)this + 0x48) = 0;
  uVar14 = (uint)((longlong)pEVar4 - (longlong)pEVar18 >> 2);
  if (uVar14 == 0) goto joined_r0x00014e6296f0;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar14);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve(this,uVar14);
  if (uVar14 < 4) {
    uVar14 = 1;
  }
  else {
    uVar11 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar14 = 1 << ((byte)lVar12 & 0x1f);
  }
  if ((*(int *)((longlong)this + 0x48) != 0) && ((int)uVar14 <= *(int *)((longlong)this + 0x48)))
  goto joined_r0x00014e6296f0;
  *(uint *)((longlong)this + 0x48) = uVar14;
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 0x40),0,0,4);
  }
  if (uVar14 != 0) {
    uVar10 = uVar14;
    if (uVar14 < 2) {
      if (*(longlong *)((longlong)this + 0x40) != 0) {
        uVar10 = 0;
        goto LAB_14e62956a;
      }
    }
    else {
LAB_14e62956a:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)((longlong)this + 0x40),0,uVar10,4);
    }
    if (0 < (int)uVar14) {
      uVar17 = (ulonglong)uVar14;
      uVar11 = 0;
      do {
        lVar12 = (longlong)this + 0x38;
        if (*(longlong *)((longlong)this + 0x40) != 0) {
          lVar12 = *(longlong *)((longlong)this + 0x40);
        }
        uVar7 = uVar11 & (longlong)(int)uVar14 - 1U;
        uVar11 = uVar11 + 1;
        *(undefined4 *)(lVar12 + uVar7 * 4) = 0xffffffff;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
  }
  if (*(int *)((longlong)this + 0x48) != 0) {
    iVar6 = *(int *)((longlong)this + 0x28);
    local_98.Pointer = (void *)((longlong)this + 0x10);
    local_98._4_4_ = 1;
    local_98.Index = 0;
    iStack_84 = 0;
    iStack_80 = 0;
    if (iVar6 != 0) {
      pTVar16 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar16 = local_98.Pointer;
      }
      uVar14 = *(uint *)(pTVar16->AllocatorInstance).InlineData;
      iStack_80 = 0;
      local_98.Index = 0;
      while (uVar14 == 0) {
        iStack_80 = iStack_80 + 0x20;
        lVar12 = (longlong)local_98.Index;
        local_98.Index = local_98.Index + 1;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_98.Index)
        goto LAB_14e629659;
        uVar14 = *(uint *)((pTVar16->AllocatorInstance).InlineData + lVar12 * 4 + 4);
      }
      local_98._4_4_ = -uVar14 & uVar14;
      uVar11 = (ulonglong)(uint)local_98._4_4_ * 2 + 1;
      lVar12 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iStack_84 = (int)lVar12 + -1 + iStack_80;
      if (iVar6 < iStack_84) {
LAB_14e629659:
        iStack_84 = iVar6;
      }
    }
    local_88 = 0xffffffff;
    TStack_70._padding_ = CONCAT44(local_98._4_4_,local_98.Index);
    TStack_70._28_4_ = uStack_7c;
    TStack_70.BaseBitIndex = iStack_80;
    TStack_70.UnvisitedBitMask = 0xffffffff;
    TStack_70.CurrentBitIndex = iStack_84;
    local_78 = this;
    TStack_70.Array = local_98.Pointer;
    if (iStack_84 < iVar6) {
      do {
        uVar14 = *(int *)((longlong)this + 0x48) - 1U &
                 *(uint *)(*local_78 + (longlong)TStack_70.CurrentBitIndex * 0xc);
        lVar12 = *local_78 + (longlong)TStack_70.CurrentBitIndex * 0xc;
        *(uint *)(lVar12 + 8) = uVar14;
        lVar13 = (longlong)this + 0x38;
        if (*(longlong *)((longlong)this + 0x40) != 0) {
          lVar13 = *(longlong *)((longlong)this + 0x40);
        }
        uVar11 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (longlong)(int)uVar14;
        *(undefined4 *)(lVar12 + 4) = *(undefined4 *)(lVar13 + uVar11 * 4);
        *(int *)(lVar13 + uVar11 * 4) = TStack_70.CurrentBitIndex;
        TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
      } while (TStack_70.CurrentBitIndex < (TStack_70.Array)->NumBits);
    }
  }
joined_r0x00014e6296f0:
  do {
    if (pEVar18 == pEVar4) {
      return this;
    }
    if (*(int *)((longlong)this + 0x34) == 0) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xc,4,1,this,piVar1,(int *)((longlong)this + 0xc));
      iVar9 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                        ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),1);
      pTVar16 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar16 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
      }
      bVar8 = (byte)iVar9 & 0x1f;
      if (iVar9 < 0) {
        iVar9 = iVar9 + 0x1f;
        bVar8 = bVar8 - 0x20;
      }
      puVar2 = (pTVar16->AllocatorInstance).InlineData + (longlong)(iVar9 >> 5) * 4;
      *(uint *)puVar2 = *(uint *)puVar2 & ~(1 << (bVar8 & 0x1f));
    }
    else {
      iVar6 = *(int *)((longlong)this + 0x30);
      iVar9 = *(int *)((longlong)this + 0x34) + -1;
      iVar3 = *(int *)(*(longlong *)this + 4 + (longlong)iVar6 * 0xc);
      *(int *)((longlong)this + 0x30) = iVar3;
      *(int *)((longlong)this + 0x34) = iVar9;
      if (iVar9 != 0) {
        *(undefined4 *)(*(longlong *)this + (longlong)iVar3 * 0xc) = 0xffffffff;
      }
    }
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex(this,&local_98,iVar6);
    if (local_98.Pointer != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      *(EExtension *)(local_98.Pointer)->InlineData = *pEVar18;
      pFVar5 = local_98.Pointer;
      pFVar5->InlineData[4] = 0xff;
      pFVar5->InlineData[5] = 0xff;
      pFVar5->InlineData[6] = 0xff;
      pFVar5->InlineData[7] = 0xff;
    }
    uVar14 = *(uint *)(local_98.Pointer)->InlineData;
    if ((*piVar1 - *(int *)((longlong)this + 0x34) != 1) &&
       (*piVar1 != *(int *)((longlong)this + 0x34))) {
      lVar12 = (longlong)this + 0x38;
      if (*(longlong *)((longlong)this + 0x40) != 0) {
        lVar12 = *(longlong *)((longlong)this + 0x40);
      }
      iVar6 = *(int *)(lVar12 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & uVar14) * 4);
      if (iVar6 != -1) {
        lVar12 = *(longlong *)this;
        do {
          if (*(uint *)(lVar12 + (longlong)iVar6 * 0xc) == uVar14) {
            if (iVar6 != -1) {
              *(uint *)(lVar12 + (longlong)iVar6 * 0xc) = uVar14;
              TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized(this,local_98.Index,1);
              pTVar16 = TStack_70.Array;
              goto LAB_14e629a5d;
            }
            break;
          }
          iVar6 = *(int *)(lVar12 + 4 + (longlong)iVar6 * 0xc);
        } while (iVar6 != -1);
      }
    }
    uVar15 = 1;
    uVar10 = *piVar1 - *(int *)((longlong)this + 0x34);
    if (3 < uVar10) {
      uVar11 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar15 = 1 << ((byte)lVar12 & 0x1f);
    }
    if (((int)uVar10 < 1) || ((int)uVar15 <= *(int *)((longlong)this + 0x48))) {
      uVar14 = *(int *)((longlong)this + 0x48) - 1U & uVar14;
      *(uint *)((local_98.Pointer)->InlineData + 8) = uVar14;
      lVar12 = (longlong)this + 0x38;
      if (*(longlong *)((longlong)this + 0x40) != 0) {
        lVar12 = *(longlong *)((longlong)this + 0x40);
      }
      uVar11 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (longlong)(int)uVar14;
      *(undefined4 *)((local_98.Pointer)->InlineData + 4) = *(undefined4 *)(lVar12 + uVar11 * 4);
      *(int *)(lVar12 + uVar11 * 4) = local_98.Index;
      pTVar16 = TStack_70.Array;
    }
    else {
      *(uint *)((longlong)this + 0x48) = uVar15;
      if (*(longlong *)((longlong)this + 0x40) != 0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)((longlong)this + 0x40),0,0,4);
      }
      if (uVar15 != 0) {
        uVar14 = uVar15;
        if (uVar15 < 2) {
          if (*(longlong *)((longlong)this + 0x40) != 0) {
            uVar14 = 0;
            goto LAB_14e6298aa;
          }
        }
        else {
LAB_14e6298aa:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)((longlong)this + 0x40),0,uVar14,4);
        }
        if (0 < (int)uVar15) {
          uVar17 = (ulonglong)uVar15;
          uVar11 = 0;
          do {
            lVar12 = (longlong)this + 0x38;
            if (*(longlong *)((longlong)this + 0x40) != 0) {
              lVar12 = *(longlong *)((longlong)this + 0x40);
            }
            uVar7 = uVar11 & (longlong)(int)uVar15 - 1U;
            uVar11 = uVar11 + 1;
            *(undefined4 *)(lVar12 + uVar7 * 4) = 0xffffffff;
            uVar17 = uVar17 - 1;
          } while (uVar17 != 0);
        }
      }
      pTVar16 = TStack_70.Array;
      if (*(int *)((longlong)this + 0x48) != 0) {
        iVar6 = *(int *)((longlong)this + 0x28);
        TStack_70._padding_ = (longlong)this + 0x10;
        iVar9 = 0;
        local_78 = (longlong *)&DAT_100000000;
        TStack_70.Array._4_4_ = 0;
        TStack_70.UnvisitedBitMask = 0;
        if (iVar6 != 0) {
          pTVar16 = (TBitArray<FDefaultBitArrayAllocator> *)TStack_70._padding_;
          if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar16 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
          }
          uVar14 = *(uint *)(pTVar16->AllocatorInstance).InlineData;
          TStack_70.UnvisitedBitMask = 0;
          while (uVar14 == 0) {
            TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask + 0x20;
            lVar12 = (longlong)iVar9;
            iVar9 = iVar9 + 1;
            uVar11 = (ulonglong)local_78 >> 0x20;
            local_78 = (longlong *)CONCAT44((int)uVar11,iVar9);
            if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_14e629999;
            uVar14 = *(uint *)((pTVar16->AllocatorInstance).InlineData + lVar12 * 4 + 4);
          }
          local_78 = (longlong *)CONCAT44(-uVar14 & uVar14,SUB84(local_78,0));
          uVar11 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
          lVar12 = 0x3f;
          if (uVar11 != 0) {
            for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          TStack_70.Array._4_4_ = (int)lVar12 + -1 + TStack_70.UnvisitedBitMask;
          if (iVar6 < TStack_70.Array._4_4_) {
LAB_14e629999:
            TStack_70.Array._4_4_ = iVar6;
          }
        }
        TStack_70.Array._0_4_ = 0xffffffff;
        local_48.CurrentBitIndex = TStack_70.Array._4_4_;
        local_48.UnvisitedBitMask = 0xffffffff;
        local_48._28_4_ = TStack_70.CurrentBitIndex;
        local_48.BaseBitIndex = TStack_70.UnvisitedBitMask;
        local_48._padding_ = (longlong)local_78;
        local_50 = this;
        local_48.Array = (TBitArray<FDefaultBitArrayAllocator> *)TStack_70._padding_;
        iVar9 = TStack_70.Array._4_4_;
        pTVar16 = (TBitArray<FDefaultBitArrayAllocator> *)CONCAT44(TStack_70.Array._4_4_,0xffffffff)
        ;
        if (TStack_70.Array._4_4_ < iVar6) {
          do {
            uVar14 = *(int *)((longlong)this + 0x48) - 1U &
                     *(uint *)(*local_50 + (longlong)iVar9 * 0xc);
            lVar12 = *local_50 + (longlong)iVar9 * 0xc;
            *(uint *)(lVar12 + 8) = uVar14;
            lVar13 = (longlong)this + 0x38;
            if (*(longlong *)((longlong)this + 0x40) != 0) {
              lVar13 = *(longlong *)((longlong)this + 0x40);
            }
            uVar11 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (longlong)(int)uVar14;
            *(undefined4 *)(lVar12 + 4) = *(undefined4 *)(lVar13 + uVar11 * 4);
            *(int *)(lVar13 + uVar11 * 4) = iVar9;
            local_48.UnvisitedBitMask = local_48.UnvisitedBitMask & ~local_48._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_48);
            iVar9 = local_48.CurrentBitIndex;
            pTVar16 = (TBitArray<FDefaultBitArrayAllocator> *)
                      CONCAT44(TStack_70.Array._4_4_,TStack_70.Array._0_4_);
          } while (local_48.CurrentBitIndex < (local_48.Array)->NumBits);
        }
      }
    }
LAB_14e629a5d:
    pEVar18 = pEVar18 + 1;
    TStack_70.Array = pTVar16;
  } while( true );
}

// operator= @ 14e62bf10

TSet<TTuple<int,UE::Math::TMatrix<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TMatrix<double>,0>,FDefaultSetAllocator>
* __thiscall
TSet<TTuple<int,UE::Math::TMatrix<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TMatrix<double>,0>,FDefaultSetAllocator>
::operator=(TSet<TTuple<int,UE::Math::TMatrix<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TMatrix<double>,0>,FDefaultSetAllocator>
            *this,TSet<TTuple<int,UE::Math::TMatrix<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TMatrix<double>,0>,FDefaultSetAllocator>
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
    TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TMatrix<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this->Elements,iVar2);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa0,0x10,iVar2,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
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
      memcpy(*(void **)&this->Elements,*(void **)&param_1->Elements,(longlong)iVar2 * 0xa0);
    }
    return this;
  }
  return this;
}

// operator= @ 14e62bfe0

TSet<TTuple<int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
* __thiscall
TSet<TTuple<int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
::operator=(TSet<TTuple<int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
            *this,TSet<TTuple<int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
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
    TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this->Elements,iVar2);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,0x10,iVar2,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
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
      memcpy(*(void **)&this->Elements,*(void **)&param_1->Elements,(longlong)iVar2 << 7);
    }
    return this;
  }
  return this;
}

// Empty @ 14e633fb0

void __thiscall
TSet<TTuple<int,FVertexID>,TDefaultMapHashableKeyFuncs<int,FVertexID,0>,FDefaultSetAllocator>::Empty
          (TSet<TTuple<int,FVertexID>,TDefaultMapHashableKeyFuncs<int,FVertexID,0>,FDefaultSetAllocator>
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
    TSparseArray<TSparseSetElement<TTuple<int,FVertexID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this->Elements,param_1);
  }
  else {
    TSparseArray<TSparseSetElement<TTuple<int,FVertexID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this->Elements,param_1);
    *piVar1 = iVar4;
    Rehash(this);
  }
  return;
}

// Rehash @ 14e648960

void __thiscall
TSet<TTuple<int,GLTF::FTextureMap_*>,TDefaultMapHashableKeyFuncs<int,GLTF::FTextureMap_*,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<int,GLTF::FTextureMap_*>,TDefaultMapHashableKeyFuncs<int,GLTF::FTextureMap_*,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14e648a3c;
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
LAB_14e648a3c:
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
                *(uint *)(*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x18);
        lVar4 = *(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x18;
        *(uint *)(lVar4 + 0x14) = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e648b00

void __thiscall
TSet<TTuple<int,UE::Math::TMatrix<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TMatrix<double>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<int,UE::Math::TMatrix<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TMatrix<double>,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14e648bdc;
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
LAB_14e648bdc:
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
        puVar8 = (uint *)((longlong)local_30.CurrentBitIndex * 0xa0 + *(longlong *)&this->Elements);
        uVar7 = *piVar1 - 1U & *puVar8;
        puVar8[0x25] = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        puVar8[0x24] = *(uint *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e648ca0

void __thiscall
TSet<TTuple<int,`GLTF::FFileReader::ResolveConflictingTextures'::__l2::FAffectedTextureMaps>,TDefaultMapHashableKeyFuncs<int,`GLTF::FFileReader::ResolveConflictingTextures'::__l2::FAffectedTextureMaps,0>,FDefaultSetAllocator>
::Rehash(void *this)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> *pFVar5;
  uint uVar6;
  uint *puVar7;
  TBitArray<FDefaultBitArrayAllocator> *pTVar8;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = (int *)((longlong)this + 0x48);
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            ((ForElementType<FSetElementId> *)((longlong)this + 0x38),
             *(int *)((longlong)this + 0x48));
  if (*piVar1 != 0) {
    iVar2 = *(int *)((longlong)this + 0x28);
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      pTVar8 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar8 = local_30.Array;
      }
      uVar6 = *(uint *)(pTVar8->AllocatorInstance).InlineData;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar6 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar3 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14e648d7c;
        uVar6 = *(uint *)((pTVar8->AllocatorInstance).InlineData + lVar3 * 4 + 4);
      }
      uStack_54 = -uVar6 & uVar6;
      uVar4 = (ulonglong)uStack_54 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iStack_44 = (int)lVar3 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14e648d7c:
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
        puVar7 = (uint *)((longlong)local_30.CurrentBitIndex * 0x20 + *(longlong *)this);
        uVar6 = *piVar1 - 1U & *puVar7;
        puVar7[7] = uVar6;
        pFVar5 = (ForElementType<FSetElementId> *)((longlong)this + 0x38);
        if (*(ForElementType<FSetElementId> **)((longlong)this + 0x40) !=
            (ForElementType<FSetElementId> *)0x0) {
          pFVar5 = *(ForElementType<FSetElementId> **)((longlong)this + 0x40);
        }
        uVar4 = (longlong)*piVar1 - 1U & (longlong)(int)uVar6;
        puVar7[6] = *(uint *)(pFVar5->InlineData + uVar4 * 4);
        *(int *)(pFVar5->InlineData + uVar4 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e648e30

void __thiscall
TSet<TTuple<int,`GLTF::FFileReader::BuildRootJoints'::__l3::FRootJoints>,TDefaultMapHashableKeyFuncs<int,`GLTF::FFileReader::BuildRootJoints'::__l3::FRootJoints,0>,FDefaultSetAllocator>
::Rehash(void *this)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> *pFVar5;
  uint uVar6;
  TBitArray<FDefaultBitArrayAllocator> *pTVar7;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = (int *)((longlong)this + 0x48);
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            ((ForElementType<FSetElementId> *)((longlong)this + 0x38),
             *(int *)((longlong)this + 0x48));
  if (*piVar1 != 0) {
    iVar2 = *(int *)((longlong)this + 0x28);
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      pTVar7 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar7 = local_30.Array;
      }
      uVar6 = *(uint *)(pTVar7->AllocatorInstance).InlineData;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar6 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar3 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14e648f0c;
        uVar6 = *(uint *)((pTVar7->AllocatorInstance).InlineData + lVar3 * 4 + 4);
      }
      uStack_54 = -uVar6 & uVar6;
      uVar4 = (ulonglong)uStack_54 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iStack_44 = (int)lVar3 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14e648f0c:
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
        uVar6 = *piVar1 - 1U &
                *(uint *)(*(longlong *)this + (longlong)local_30.CurrentBitIndex * 0x28);
        lVar3 = *(longlong *)this + (longlong)local_30.CurrentBitIndex * 0x28;
        *(uint *)(lVar3 + 0x24) = uVar6;
        pFVar5 = (ForElementType<FSetElementId> *)((longlong)this + 0x38);
        if (*(ForElementType<FSetElementId> **)((longlong)this + 0x40) !=
            (ForElementType<FSetElementId> *)0x0) {
          pFVar5 = *(ForElementType<FSetElementId> **)((longlong)this + 0x40);
        }
        uVar4 = (longlong)*piVar1 - 1U & (longlong)(int)uVar6;
        *(undefined4 *)(lVar3 + 0x20) = *(undefined4 *)(pFVar5->InlineData + uVar4 * 4);
        *(int *)(pFVar5->InlineData + uVar4 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e648fd0

void __thiscall
TSet<enum_GLTF::EExtension,DefaultKeyFuncs<enum_GLTF::EExtension,0>,FDefaultSetAllocator>::Rehash
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> *pFVar5;
  uint uVar6;
  TBitArray<FDefaultBitArrayAllocator> *pTVar7;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = (int *)((longlong)this + 0x48);
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            ((ForElementType<FSetElementId> *)((longlong)this + 0x38),
             *(int *)((longlong)this + 0x48));
  if (*piVar1 != 0) {
    iVar2 = *(int *)((longlong)this + 0x28);
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      pTVar7 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar7 = local_30.Array;
      }
      uVar6 = *(uint *)(pTVar7->AllocatorInstance).InlineData;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar6 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar3 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14e6490ac;
        uVar6 = *(uint *)((pTVar7->AllocatorInstance).InlineData + lVar3 * 4 + 4);
      }
      uStack_54 = -uVar6 & uVar6;
      uVar4 = (ulonglong)uStack_54 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iStack_44 = (int)lVar3 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14e6490ac:
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
        uVar6 = *piVar1 - 1U &
                *(uint *)(*(longlong *)this + (longlong)local_30.CurrentBitIndex * 0xc);
        lVar3 = *(longlong *)this + (longlong)local_30.CurrentBitIndex * 0xc;
        *(uint *)(lVar3 + 8) = uVar6;
        pFVar5 = (ForElementType<FSetElementId> *)((longlong)this + 0x38);
        if (*(ForElementType<FSetElementId> **)((longlong)this + 0x40) !=
            (ForElementType<FSetElementId> *)0x0) {
          pFVar5 = *(ForElementType<FSetElementId> **)((longlong)this + 0x40);
        }
        uVar4 = (longlong)*piVar1 - 1U & (longlong)(int)uVar6;
        *(undefined4 *)(lVar3 + 4) = *(undefined4 *)(pFVar5->InlineData + uVar4 * 4);
        *(int *)(pFVar5->InlineData + uVar4 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// RehashOrLink @ 14e649170

void __thiscall
TSet<enum_GLTF::EExtension,DefaultKeyFuncs<enum_GLTF::EExtension,0>,FDefaultSetAllocator>::
RehashOrLink(void *this,uint param_1,TSparseSetElement<GLTF::EExtension> *param_2,int param_3)

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
  *(uint *)&param_2->field_0x8 = uVar4;
  lVar3 = *(longlong *)((longlong)this + 0x40);
  if (*(longlong *)((longlong)this + 0x40) == 0) {
    lVar3 = (longlong)this + 0x38;
  }
  uVar2 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (longlong)(int)uVar4;
  *(undefined4 *)&param_2->field_0x4 = *(undefined4 *)(lVar3 + uVar2 * 4);
  *(int *)(lVar3 + uVar2 * 4) = param_3;
  return;
}

// TryReplaceExisting @ 14e65a840

bool __thiscall
TSet<TTuple<int,UE::Math::TMatrix<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TMatrix<double>,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<int,UE::Math::TMatrix<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TMatrix<double>,0>,FDefaultSetAllocator>
           *this,uint param_1,TSparseSetElement<TTuple<int,UE::Math::TMatrix<double>_>_> *param_2,
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
  undefined4 uVar9;
  undefined1 *puVar10;
  undefined4 *puVar11;
  ForElementType<FSetElementId> FVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  
  iVar13 = *(int *)&(this->Elements).field_0x8;
  bVar15 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  if ((iVar13 - iVar3 != 1) && (iVar13 != iVar3)) {
    FVar12 = (this->Hash).SecondaryData;
    if (FVar12 == (ForElementType<FSetElementId>)0x0) {
      FVar12 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar13 = *(int *)((longlong)FVar12 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar13 != -1) {
      lVar4 = *(longlong *)&this->Elements;
      do {
        if (*(int *)((longlong)iVar13 * 0xa0 + lVar4) == *(int *)param_2) {
          bVar15 = iVar13 != -1;
          if (bVar15) {
            memmove((void *)((longlong)iVar13 * 0xa0 + lVar4),param_2,0x90);
            iVar3 = *param_3;
            lVar4 = *(longlong *)&this->Elements;
            puVar1 = &(this->Elements).field_0x10;
            bVar6 = (byte)iVar3 & 0x1f;
            uVar14 = 1 << bVar6 | 1U >> 0x20 - bVar6;
            if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
            lVar2 = (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4;
            if (puVar10 == (undefined1 *)0x0) {
              puVar10 = puVar1;
            }
            if (((*(uint *)(puVar10 + lVar2) & uVar14) == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            if (*(int *)&(this->Elements).field_0x34 != 0) {
              *(int *)((longlong)*(int *)&(this->Elements).field_0x30 * 0xa0 + lVar4) = iVar3;
            }
            uVar9 = 0xffffffff;
            puVar11 = (undefined4 *)((longlong)iVar3 * 0xa0 + lVar4);
            *puVar11 = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0x34) {
              uVar9 = *(undefined4 *)&(this->Elements).field_0x30;
            }
            puVar11[1] = uVar9;
            puVar10 = &(this->Elements).field_0x34;
            *(int *)puVar10 = *(int *)puVar10 + 1;
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
            puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
            if (puVar10 == (undefined1 *)0x0) {
              puVar10 = puVar1;
            }
            *(uint *)(puVar10 + lVar2) = *(uint *)(puVar10 + lVar2) & ~uVar14;
            *param_3 = iVar13;
          }
          break;
        }
        iVar13 = *(int *)((longlong)iVar13 * 0xa0 + 0x90 + lVar4);
      } while (iVar13 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar15;
  }
  return bVar15;
}

// UnhashElements @ 14e65aa80

void __thiscall
TSet<TTuple<int,FPolygonGroupID>,TDefaultMapHashableKeyFuncs<int,FPolygonGroupID,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<int,FPolygonGroupID>,TDefaultMapHashableKeyFuncs<int,FPolygonGroupID,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14e65ab7b;
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
LAB_14e65ab7b:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14e65ac70;
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
LAB_14e65ac70:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<int,FPolygonGroupID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)(*(longlong *)&this->Elements + 0xc + (longlong)local_60.CurrentBitIndex * 0x10) * 4) =
         0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// UnhashElements @ 14e65ad10

void __thiscall
TSet<TTuple<int,FVertexID>,TDefaultMapHashableKeyFuncs<int,FVertexID,0>,FDefaultSetAllocator>::
UnhashElements(TSet<TTuple<int,FVertexID>,TDefaultMapHashableKeyFuncs<int,FVertexID,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14e65ae0b;
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
LAB_14e65ae0b:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14e65af00;
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
LAB_14e65af00:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<int,FVertexID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)(*(longlong *)&this->Elements + 0xc + (longlong)local_60.CurrentBitIndex * 0x10) * 4) =
         0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// UnhashElements @ 14e65afa0

void __thiscall
TSet<enum_GLTF::EExtension,DefaultKeyFuncs<enum_GLTF::EExtension,0>,FDefaultSetAllocator>::
UnhashElements(void *this)

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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14e65b09b;
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
LAB_14e65b09b:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14e65b190;
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
LAB_14e65b190:
  while( true ) {
    if (*(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34) != local_40) {
      `TSparseArray<TSparseSetElement<enum_GLTF::EExtension>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) && (local_60.Array == pTVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)pvVar6 +
     (longlong)*(int *)(*(longlong *)this + 8 + (longlong)local_60.CurrentBitIndex * 0xc) * 4) =
         0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

