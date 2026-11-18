// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCGGeometryScriptInterop
// Functions: 8

// Emplace<TKeyInitializer<FSoftObjectPath_const_&>_> @ 14cedf0c0

FSetElementId __thiscall
TSet<TTuple<FSoftObjectPath,UE::Geometry::FDynamicMesh3>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,UE::Geometry::FDynamicMesh3,0>,FDefaultSetAllocator>
::Emplace<TKeyInitializer<FSoftObjectPath_const_&>_>
          (TSet<TTuple<FSoftObjectPath,UE::Geometry::FDynamicMesh3>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,UE::Geometry::FDynamicMesh3,0>,FDefaultSetAllocator>
           *this,TKeyInitializer<FSoftObjectPath_const_&> *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FDynamicMesh3 *pFVar7;
  ulonglong uVar8;
  uint uVar9;
  ForElementType<FSetElementId> FVar10;
  int iVar11;
  bool *in_R9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_268;
  FDynamicMesh3 local_258;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (600,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)((longlong)iVar5 * 600 + 4 + lVar3);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 600 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<600,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<600,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_268,iVar5);
  if (local_268.Pointer !=
      (TSparseSetElement<TTuple<FSoftObjectPath,UE::Geometry::FDynamicMesh3>_> *)0x0) {
    pFVar7 = UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_258);
    FSoftObjectPath::FSoftObjectPath(local_268.Pointer,*(FSoftObjectPath **)param_2);
    UE::Geometry::FDynamicMesh3::FDynamicMesh3
              ((FDynamicMesh3 *)((longlong)local_268.Pointer + 0x20),pFVar7);
    UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_258);
    *(undefined4 *)((longlong)local_268.Pointer + 0x250) = 0xffffffff;
  }
  local_res8[0] = local_268.Index;
  uVar6 = ::GetTypeHash(local_268.Pointer);
  bVar4 = TryReplaceExisting(this,uVar6,local_268.Pointer,local_res8,in_R9);
  if (!bVar4) {
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
      uVar6 = this->HashSize - 1U & uVar6;
      *(uint *)((longlong)local_268.Pointer + 0x254) = uVar6;
      FVar10 = (this->Hash).SecondaryData;
      if (FVar10 == (ForElementType<FSetElementId>)0x0) {
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      *(undefined4 *)((longlong)local_268.Pointer + 0x250) =
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

// EmplaceByHash<TKeyInitializer<FSoftObjectPath_const_&>_> @ 14cedf2a0

FSetElementId __thiscall
TSet<TTuple<FSoftObjectPath,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<FSoftObjectPath_const_&>_>
          (TSet<TTuple<FSoftObjectPath,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<FSoftObjectPath_const_&> *param_2,bool *param_3)

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
                      (0x38,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x38 + 4 + lVar3);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x38 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar5);
  if (local_38.Pointer ==
      (TSparseSetElement<TTuple<FSoftObjectPath,TArray<int,TSizedDefaultAllocator<32>_>_>_> *)0x0) {
    local_38.Pointer =
         (TSparseSetElement<TTuple<FSoftObjectPath,TArray<int,TSizedDefaultAllocator<32>_>_>_> *)0x0
    ;
  }
  else {
    FSoftObjectPath::FSoftObjectPath(local_38.Pointer,*(FSoftObjectPath **)param_3);
    *(undefined8 *)((longlong)local_38.Pointer + 0x20) = 0;
    *(undefined8 *)((longlong)local_38.Pointer + 0x28) = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 0x30) = 0xffffffff;
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
      *(uint *)&((TSparseSetElement<TTuple<FSoftObjectPath,TArray<int,TSizedDefaultAllocator<32>_>_>_>
                  *)local_38.Pointer)->field_0x34 = uVar7;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar7;
      *(undefined4 *)
       &((TSparseSetElement<TTuple<FSoftObjectPath,TArray<int,TSizedDefaultAllocator<32>_>_>_> *)
        local_38.Pointer)->field_0x30 = *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
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

// FindIndexByHash<FSoftObjectPath> @ 14cedfb00

int __thiscall
TSet<TTuple<FSoftObjectPath,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::FindIndexByHash<FSoftObjectPath>
          (TSet<TTuple<FSoftObjectPath,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,FSoftObjectPath *param_2)

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
        iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x38 + 0x30 + *(longlong *)&this->Elements))
    {
      bVar2 = FSoftObjectPath::operator==
                        ((FSoftObjectPath *)(*(longlong *)&this->Elements + (longlong)iVar1 * 0x38),
                         param_2);
      if (bVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}

// FindIndexByHash<FSoftObjectPath> @ 14cedfba0

int __thiscall
TSet<TTuple<FSoftObjectPath,UE::Geometry::FDynamicMesh3>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,UE::Geometry::FDynamicMesh3,0>,FDefaultSetAllocator>
::FindIndexByHash<FSoftObjectPath>
          (TSet<TTuple<FSoftObjectPath,UE::Geometry::FDynamicMesh3>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,UE::Geometry::FDynamicMesh3,0>,FDefaultSetAllocator>
           *this,uint param_1,FSoftObjectPath *param_2)

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
        iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 600 + 0x250 + *(longlong *)&this->Elements))
    {
      bVar2 = FSoftObjectPath::operator==
                        ((FSoftObjectPath *)(*(longlong *)&this->Elements + (longlong)iVar1 * 600),
                         param_2);
      if (bVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}

// Rehash @ 14cef7b40

void __thiscall
TSet<TTuple<FSoftObjectPath,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FSoftObjectPath,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  FSoftObjectPath *pFVar8;
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
      uVar4 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14cef7c17;
        uVar4 = puVar9[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14cef7c17:
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
        iVar2 = local_30.CurrentBitIndex;
        pFVar8 = (FSoftObjectPath *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x38);
        uVar4 = ::GetTypeHash(pFVar8);
        uVar4 = *piVar1 - 1U & uVar4;
        *(uint *)((longlong)&pFVar8[1].SubPathString.Data.AllocatorInstance.Data + 4) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)&pFVar8[1].SubPathString.Data.AllocatorInstance.Data =
             *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = iVar2;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14cef7cd0

void __thiscall
TSet<TTuple<FSoftObjectPath,UE::Geometry::FDynamicMesh3>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,UE::Geometry::FDynamicMesh3,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FSoftObjectPath,UE::Geometry::FDynamicMesh3>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,UE::Geometry::FDynamicMesh3,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  FSoftObjectPath *pFVar8;
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
      uVar4 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14cef7da7;
        uVar4 = puVar9[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14cef7da7:
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
        iVar2 = local_30.CurrentBitIndex;
        pFVar8 = (FSoftObjectPath *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 600);
        uVar4 = ::GetTypeHash(pFVar8);
        uVar4 = *piVar1 - 1U & uVar4;
        *(uint *)((longlong)&pFVar8[0x12].SubPathString.Data.AllocatorInstance.Data + 4) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)&pFVar8[0x12].SubPathString.Data.AllocatorInstance.Data =
             *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = iVar2;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// TryReplaceExisting @ 14cef9cb0

bool __thiscall
TSet<TTuple<FSoftObjectPath,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FSoftObjectPath,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<FSoftObjectPath,TArray<int,TSizedDefaultAllocator<32>_>_>_>
          *param_2,int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  byte bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  ForElementType<FSetElementId> FVar14;
  void *_Dst;
  uint uVar15;
  
  iVar3 = *(int *)&(this->Elements).field_0x8;
  bVar8 = false;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  if ((iVar3 - iVar4 != 1) && (iVar3 != iVar4)) {
    FVar14 = (this->Hash).SecondaryData;
    if (FVar14 == (ForElementType<FSetElementId>)0x0) {
      FVar14 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar3 = *(int *)((longlong)FVar14 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
        iVar3 != -1; iVar3 = *(int *)((longlong)iVar3 * 0x38 + 0x30 + *(longlong *)&this->Elements))
    {
      bVar8 = FSoftObjectPath::operator==
                        ((FSoftObjectPath *)(*(longlong *)&this->Elements + (longlong)iVar3 * 0x38),
                         (FSoftObjectPath *)param_2);
      if (bVar8) {
        bVar8 = iVar3 != -1;
        if (bVar8) {
          _Dst = (void *)((longlong)iVar3 * 0x38 + *(longlong *)&this->Elements);
          if (*(void **)((longlong)_Dst + 0x20) != (void *)0x0) {
            FMemory::Free(*(void **)((longlong)_Dst + 0x20));
          }
          if (*(void **)((longlong)_Dst + 0x10) != (void *)0x0) {
            FMemory::Free(*(void **)((longlong)_Dst + 0x10));
          }
          memmove(_Dst,param_2,0x30);
          iVar4 = *param_3;
          puVar1 = &(this->Elements).field_0x10;
          lVar5 = *(longlong *)&this->Elements;
          bVar7 = (byte)iVar4 & 0x1f;
          uVar15 = 1 << bVar7 | 1U >> 0x20 - bVar7;
          if (((iVar4 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar4)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            uVar10 = (*pcVar6)();
            return (bool)uVar10;
          }
          puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
          lVar2 = (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4;
          if (puVar12 == (undefined1 *)0x0) {
            puVar12 = puVar1;
          }
          if (((*(uint *)(puVar12 + lVar2) & uVar15) == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("AllocationFlags[Index]",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                 ,0xc5,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            uVar10 = (*pcVar6)();
            return (bool)uVar10;
          }
          if (*(int *)&(this->Elements).field_0x34 != 0) {
            *(int *)((longlong)*(int *)&(this->Elements).field_0x30 * 0x38 + lVar5) = iVar4;
          }
          uVar11 = 0xffffffff;
          puVar13 = (undefined4 *)((longlong)iVar4 * 0x38 + lVar5);
          *puVar13 = 0xffffffff;
          if (0 < *(int *)&(this->Elements).field_0x34) {
            uVar11 = *(undefined4 *)&(this->Elements).field_0x30;
          }
          puVar13[1] = uVar11;
          puVar12 = &(this->Elements).field_0x34;
          *(int *)puVar12 = *(int *)puVar12 + 1;
          *(int *)&(this->Elements).field_0x30 = iVar4;
          if (((iVar4 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar4)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            uVar10 = (*pcVar6)();
            return (bool)uVar10;
          }
          puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
          if (puVar12 == (undefined1 *)0x0) {
            puVar12 = puVar1;
          }
          *(uint *)(puVar12 + lVar2) = *(uint *)(puVar12 + lVar2) & ~uVar15;
          *param_3 = iVar3;
        }
        goto LAB_14cef9d3d;
      }
    }
    bVar8 = false;
  }
LAB_14cef9d3d:
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar8;
  }
  return bVar8;
}

// TryReplaceExisting @ 14cef9ee0

bool __thiscall
TSet<TTuple<FSoftObjectPath,UE::Geometry::FDynamicMesh3>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,UE::Geometry::FDynamicMesh3,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FSoftObjectPath,UE::Geometry::FDynamicMesh3>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,UE::Geometry::FDynamicMesh3,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<FSoftObjectPath,UE::Geometry::FDynamicMesh3>_> *param_2,
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
    iVar9 = FindIndexByHash<FSoftObjectPath>(this,param_1,(FSoftObjectPath *)param_2);
    bVar14 = iVar9 != -1;
    if (bVar14) {
      _Dst = (void *)((longlong)iVar9 * 600 + *(longlong *)&this->Elements);
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3((FDynamicMesh3 *)((longlong)_Dst + 0x20));
      if (*(void **)((longlong)_Dst + 0x10) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)_Dst + 0x10));
      }
      memmove(_Dst,param_2,0x250);
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
        *(int *)((longlong)*(int *)&(this->Elements).field_0x30 * 600 + lVar4) = iVar3;
      }
      uVar10 = 0xffffffff;
      puVar11 = (undefined4 *)((longlong)iVar3 * 600 + lVar4);
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

