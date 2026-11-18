// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 105

// Emplace<UCameraNode_*_const_&> @ 14d53ddd0

FSetElementId __thiscall
TSet<UCameraNode_*,DefaultKeyFuncs<UCameraNode_*,0>,FDefaultSetAllocator>::
Emplace<UCameraNode_*_const_&>
          (TSet<UCameraNode_*,DefaultKeyFuncs<UCameraNode_*,0>,FDefaultSetAllocator> *this,
          UCameraNode **param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  int iVar9;
  char *in_R9;
  undefined1 *puVar10;
  bool bVar11;
  FSparseArrayAllocationInfo local_48;
  
  iVar9 = *(int *)&(this->Elements).field_0x34;
  iVar8 = 1;
  if (iVar9 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar3 * 0x10);
    iVar9 = iVar9 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x10) = 0xffffffff;
    }
  }
  puVar10 = &(this->Elements).field_0x8;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar3);
  if (local_48.Pointer != (ulonglong *)0x0) {
    *(ulonglong *)local_48.Pointer = *(ulonglong *)param_2;
    *(undefined4 *)((longlong)local_48.Pointer + 8) = 0xffffffff;
  }
  uVar5 = *(ulonglong *)local_48.Pointer;
  bVar11 = false;
  uVar4 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar9 = *(int *)puVar10;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  if ((iVar9 - iVar3 != 1) && (iVar9 != iVar3)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar9 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar4) * 4);
    if (iVar9 != -1) {
      do {
        if (*(ulonglong *)(*(longlong *)&this->Elements + (longlong)iVar9 * 0x10) == uVar5) {
          bVar11 = iVar9 != -1;
          if (bVar11) {
            *(ulonglong *)(*(longlong *)&this->Elements + (longlong)iVar9 * 0x10) = uVar5;
            TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar9;
          }
          break;
        }
        iVar9 = *(int *)(*(longlong *)&this->Elements + 8 + (longlong)iVar9 * 0x10);
      } while (iVar9 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar11;
  }
  if (bVar11 == false) {
    uVar6 = *(int *)puVar10 - *(int *)&(this->Elements).field_0x34;
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
      uVar4 = this->HashSize - 1U & uVar4;
      *(uint *)((longlong)local_48.Pointer + 0xc) = uVar4;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar4;
      *(undefined4 *)((longlong)local_48.Pointer + 8) = *(undefined4 *)((longlong)FVar7 + uVar5 * 4)
      ;
      *(int *)((longlong)FVar7 + uVar5 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar8;
      Rehash(this);
    }
  }
  *(int *)param_1 = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<UCameraRigAsset_*_const_&> @ 14d53dff0

FSetElementId __thiscall
TSet<UCameraRigAsset_*,DefaultKeyFuncs<UCameraRigAsset_*,0>,FDefaultSetAllocator>::
Emplace<UCameraRigAsset_*_const_&>
          (TSet<UCameraRigAsset_*,DefaultKeyFuncs<UCameraRigAsset_*,0>,FDefaultSetAllocator> *this,
          UCameraRigAsset **param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  ForElementType<FSetElementId> FVar6;
  int iVar7;
  char *in_R9;
  bool bVar8;
  FSparseArrayAllocationInfo local_38;
  
  iVar7 = *(int *)&(this->Elements).field_0x34;
  if (iVar7 == 0) {
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
    iVar7 = iVar7 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x10) = 0xffffffff;
    }
  }
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  if (local_38.Pointer != (TSparseSetElement<UCameraRigAsset_*> *)0x0) {
    *(undefined8 *)local_38.Pointer = *(undefined8 *)param_2;
    *(undefined4 *)((longlong)local_38.Pointer + 8) = 0xffffffff;
  }
  uVar3 = *(ulonglong *)local_38.Pointer;
  bVar8 = false;
  uVar5 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  iVar7 = *(int *)&(this->Elements).field_0x8;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  if ((iVar7 - iVar4 != 1) && (iVar7 != iVar4)) {
    FVar6 = (this->Hash).SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar7 = *(int *)((longlong)FVar6 + (ulonglong)(this->HashSize - 1U & uVar5) * 4);
    if (iVar7 != -1) {
      do {
        if (*(ulonglong *)(*(longlong *)&this->Elements + (longlong)iVar7 * 0x10) == uVar3) {
          bVar8 = iVar7 != -1;
          if (bVar8) {
            *(ulonglong *)(*(longlong *)&this->Elements + (longlong)iVar7 * 0x10) = uVar3;
            TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar7;
          }
          break;
        }
        iVar7 = *(int *)(*(longlong *)&this->Elements + 8 + (longlong)iVar7 * 0x10);
      } while (iVar7 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar8;
  }
  if (bVar8 == false) {
    RehashOrLink(this,uVar5,local_38.Pointer,local_38.Index);
  }
  *(int *)param_1 = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<UCameraRigProxyAsset_*_const_&> @ 14d53e1c0

FSetElementId __thiscall
TSet<UCameraRigProxyAsset_*,DefaultKeyFuncs<UCameraRigProxyAsset_*,0>,FDefaultSetAllocator>::
Emplace<UCameraRigProxyAsset_*_const_&>
          (TSet<UCameraRigProxyAsset_*,DefaultKeyFuncs<UCameraRigProxyAsset_*,0>,FDefaultSetAllocator>
           *this,UCameraRigProxyAsset **param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  int iVar9;
  char *in_R9;
  undefined1 *puVar10;
  bool bVar11;
  FSparseArrayAllocationInfo local_48;
  
  iVar9 = *(int *)&(this->Elements).field_0x34;
  iVar8 = 1;
  if (iVar9 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar3 * 0x10);
    iVar9 = iVar9 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x10) = 0xffffffff;
    }
  }
  puVar10 = &(this->Elements).field_0x8;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar3);
  if (local_48.Pointer != (ulonglong *)0x0) {
    *(ulonglong *)local_48.Pointer = *(ulonglong *)param_2;
    *(undefined4 *)((longlong)local_48.Pointer + 8) = 0xffffffff;
  }
  uVar5 = *(ulonglong *)local_48.Pointer;
  bVar11 = false;
  uVar4 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar9 = *(int *)puVar10;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  if ((iVar9 - iVar3 != 1) && (iVar9 != iVar3)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar9 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar4) * 4);
    if (iVar9 != -1) {
      do {
        if (*(ulonglong *)(*(longlong *)&this->Elements + (longlong)iVar9 * 0x10) == uVar5) {
          bVar11 = iVar9 != -1;
          if (bVar11) {
            *(ulonglong *)(*(longlong *)&this->Elements + (longlong)iVar9 * 0x10) = uVar5;
            TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar9;
          }
          break;
        }
        iVar9 = *(int *)(*(longlong *)&this->Elements + 8 + (longlong)iVar9 * 0x10);
      } while (iVar9 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar11;
  }
  if (bVar11 == false) {
    uVar6 = *(int *)puVar10 - *(int *)&(this->Elements).field_0x34;
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
      uVar4 = this->HashSize - 1U & uVar4;
      *(uint *)((longlong)local_48.Pointer + 0xc) = uVar4;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar4;
      *(undefined4 *)((longlong)local_48.Pointer + 8) = *(undefined4 *)((longlong)FVar7 + uVar5 * 4)
      ;
      *(int *)((longlong)FVar7 + uVar5 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar8;
      Rehash(this);
    }
  }
  *(int *)param_1 = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<UCameraRigAsset_*> @ 14d53e3e0

FSetElementId __thiscall
TSet<UCameraRigAsset_*,DefaultKeyFuncs<UCameraRigAsset_*,0>,FDefaultSetAllocator>::
Emplace<UCameraRigAsset_*>
          (TSet<UCameraRigAsset_*,DefaultKeyFuncs<UCameraRigAsset_*,0>,FDefaultSetAllocator> *this,
          UCameraRigAsset **param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  ForElementType<FSetElementId> FVar6;
  int iVar7;
  char *in_R9;
  bool bVar8;
  FSparseArrayAllocationInfo local_38;
  
  iVar7 = *(int *)&(this->Elements).field_0x34;
  if (iVar7 == 0) {
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
    iVar7 = iVar7 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x10) = 0xffffffff;
    }
  }
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  if (local_38.Pointer != (TSparseSetElement<UCameraRigAsset_*> *)0x0) {
    *(undefined8 *)local_38.Pointer = *(undefined8 *)param_2;
    *(undefined4 *)((longlong)local_38.Pointer + 8) = 0xffffffff;
  }
  uVar3 = *(ulonglong *)local_38.Pointer;
  bVar8 = false;
  uVar5 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  iVar7 = *(int *)&(this->Elements).field_0x8;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  if ((iVar7 - iVar4 != 1) && (iVar7 != iVar4)) {
    FVar6 = (this->Hash).SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar7 = *(int *)((longlong)FVar6 + (ulonglong)(this->HashSize - 1U & uVar5) * 4);
    if (iVar7 != -1) {
      do {
        if (*(ulonglong *)(*(longlong *)&this->Elements + (longlong)iVar7 * 0x10) == uVar3) {
          bVar8 = iVar7 != -1;
          if (bVar8) {
            *(ulonglong *)(*(longlong *)&this->Elements + (longlong)iVar7 * 0x10) = uVar3;
            TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar7;
          }
          break;
        }
        iVar7 = *(int *)(*(longlong *)&this->Elements + 8 + (longlong)iVar7 * 0x10);
      } while (iVar7 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar8;
  }
  if (bVar8 == false) {
    RehashOrLink(this,uVar5,local_38.Pointer,local_38.Index);
  }
  *(int *)param_1 = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TKeyInitializer<UCameraRigAsset_const_*_const_&>_> @ 14d53e600

FSetElementId __thiscall
TSet<TTuple<UCameraRigAsset_const_*,TArray<FCameraObjectInterfaceParameterDefinition,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UCameraRigAsset_const_*,TArray<FCameraObjectInterfaceParameterDefinition,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Emplace<TKeyInitializer<UCameraRigAsset_const_*_const_&>_>
          (TSet<TTuple<UCameraRigAsset_const_*,TArray<FCameraObjectInterfaceParameterDefinition,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UCameraRigAsset_const_*,TArray<FCameraObjectInterfaceParameterDefinition,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,TKeyInitializer<UCameraRigAsset_const_*_const_&> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  ulonglong *_Src;
  int iVar10;
  char *in_R9;
  void *_Dst;
  bool bVar11;
  FSparseArrayAllocationInfo local_48;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar10 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar4 * 0x20 + 4 + lVar2);
    iVar10 = iVar10 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer == (ulonglong *)0x0) {
    _Src = (ulonglong *)0x0;
  }
  else {
    uVar6 = **(ulonglong **)param_2;
    *(ulonglong *)((longlong)local_48.Pointer + 8) = 0;
    *(ulonglong *)local_48.Pointer = uVar6;
    *(ulonglong *)((longlong)local_48.Pointer + 0x10) = 0;
    *(undefined4 *)((longlong)local_48.Pointer + 0x18) = 0xffffffff;
    _Src = local_48.Pointer;
  }
  uVar6 = *_Src;
  bVar11 = false;
  uVar5 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  iVar10 = *(int *)&(this->Elements).field_0x8;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  if ((iVar10 - iVar4 != 1) && (iVar10 != iVar4)) {
    FVar8 = (this->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar10 = *(int *)((longlong)FVar8 + (ulonglong)(this->HashSize - 1U & uVar5) * 4);
    if (iVar10 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(ulonglong *)((longlong)iVar10 * 0x20 + lVar2) == uVar6) {
          bVar11 = iVar10 != -1;
          if (bVar11) {
            _Dst = (void *)((longlong)iVar10 * 0x20 + lVar2);
            pvVar3 = *(void **)((longlong)_Dst + 8);
            if (pvVar3 != (void *)0x0) {
              FMemory::Free(pvVar3);
            }
            memmove(_Dst,_Src,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar10;
          }
          break;
        }
        iVar10 = *(int *)((longlong)iVar10 * 0x20 + 0x18 + lVar2);
      } while (iVar10 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar11;
  }
  if (bVar11 == false) {
    uVar7 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
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
      *(uint *)((longlong)_Src + 0x1c) = uVar5;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)(_Src + 3) = *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
      *(int *)((longlong)FVar8 + uVar6 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TKeyInitializer<enum_ECameraEvaluationDataCondition_const_&>_> @ 14d53e860

FSetElementId __thiscall
TSet<TTuple<enum_ECameraEvaluationDataCondition,UE::Cameras::FCameraNodeEvaluationResult>,TDefaultMapHashableKeyFuncs<enum_ECameraEvaluationDataCondition,UE::Cameras::FCameraNodeEvaluationResult,0>,FDefaultSetAllocator>
::Emplace<TKeyInitializer<enum_ECameraEvaluationDataCondition_const_&>_>
          (void *this,TKeyInitializer<ECameraEvaluationDataCondition_const_&> *param_1,bool *param_2
          )

{
  int iVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  bool *in_R9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar9 = 1;
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xa20,0x10,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),false);
  }
  else {
    iVar5 = *(int *)((longlong)this + 0x30);
    iVar1 = *(int *)((longlong)this + 0x34) + -1;
    iVar3 = *(int *)((longlong)iVar5 * 0xa20 + 4 + *(longlong *)this);
    *(int *)((longlong)this + 0x30) = iVar3;
    *(int *)((longlong)this + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0xa20 + *(longlong *)this) = 0xffffffff;
    }
  }
  TSparseArrayBase<2592,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&local_38,iVar5);
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<ECameraEvaluationDataCondition,UE::Cameras::FCameraNodeEvaluationResult>_>
       *)0x0) {
    TKeyInitializer<enum_ECameraEvaluationDataCondition_const_&>::
    operator<enum_ECameraEvaluationDataCondition,UE::Cameras::FCameraNodeEvaluationResult>_TTuple<enum_ECameraEvaluationDataCondition,UE::Cameras::FCameraNodeEvaluationResult>
              (param_2,local_38.Pointer);
    *(undefined4 *)((longlong)local_38.Pointer + 0xa10) = 0xffffffff;
  }
  bVar2 = *(byte *)local_38.Pointer;
  local_res8[0] = local_38.Index;
  bVar4 = TryReplaceExisting(this,(uint)bVar2,local_38.Pointer,local_res8,in_R9);
  if (!bVar4) {
    uVar7 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= *(int *)((longlong)this + 0x48))) {
      uVar7 = *(int *)((longlong)this + 0x48) - 1U & (uint)bVar2;
      *(uint *)((longlong)local_38.Pointer + 0xa14) = uVar7;
      lVar8 = *(longlong *)((longlong)this + 0x40);
      if (*(longlong *)((longlong)this + 0x40) == 0) {
        lVar8 = (longlong)this + 0x38;
      }
      uVar6 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (ulonglong)uVar7;
      *(undefined4 *)((longlong)local_38.Pointer + 0xa10) = *(undefined4 *)(lVar8 + uVar6 * 4);
      *(int *)(lVar8 + uVar6 * 4) = local_res8[0];
    }
    else {
      *(int *)((longlong)this + 0x48) = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<TTuple<FName,UObject_*>_&&,FCameraContextDataID_const_&>_> @ 14d53e9f0

FSetElementId __thiscall
TSet<TTuple<TTuple<FName,UObject_*>,FCameraContextDataID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraContextDataID,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<TTuple<FName,UObject_*>_&&,FCameraContextDataID_const_&>_>
          (TSet<TTuple<TTuple<FName,UObject_*>,FCameraContextDataID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraContextDataID,0>,FDefaultSetAllocator>
           *this,TPairInitializer<TTuple<FName,UObject_*>_&&,FCameraContextDataID_const_&> *param_1,
          bool *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  int iVar10;
  char *in_R9;
  int iVar11;
  undefined1 *puVar12;
  bool bVar13;
  FSparseArrayAllocationInfo local_48;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar10 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    lVar1 = *(longlong *)&this->Elements;
    iVar11 = *(int *)((longlong)iVar3 * 0x20 + 4 + lVar1);
    iVar10 = iVar10 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar11;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)((longlong)iVar11 * 0x20 + lVar1) = 0xffffffff;
    }
  }
  puVar12 = &(this->Elements).field_0x8;
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar3);
  if (local_48.Pointer != (longlong *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 8);
    lVar1 = (*(longlong **)param_2)[1];
    *(longlong *)local_48.Pointer = **(longlong **)param_2;
    *(longlong *)((longlong)local_48.Pointer + 8) = lVar1;
    *(undefined4 *)((longlong)local_48.Pointer + 0x10) = *puVar2;
    *(undefined4 *)((longlong)local_48.Pointer + 0x18) = 0xffffffff;
  }
  lVar1 = *(longlong *)local_48.Pointer;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)lVar1);
  uVar7 = *(ulonglong *)((longlong)local_48.Pointer + 8);
  bVar13 = false;
  uVar4 = uVar4 + (int)((ulonglong)lVar1 >> 0x20);
  uVar6 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  iVar10 = *(int *)puVar12;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  uVar4 = (uVar4 >> 2) + (uVar6 >> 0x10 ^ uVar6) + 0x9e3779b9 + uVar4 * 0x40 ^ uVar4;
  iVar11 = local_48.Index;
  if ((iVar10 - iVar3 != 1) && (iVar10 != iVar3)) {
    FVar8 = (this->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar10 = *(int *)((longlong)FVar8 + (ulonglong)(this->HashSize - 1U & uVar4) * 4);
    if (iVar10 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        lVar5 = (longlong)iVar10 * 0x20;
        if ((*(longlong *)(lVar5 + lVar1) == *(longlong *)local_48.Pointer) &&
           (*(ulonglong *)(lVar5 + 8 + lVar1) == uVar7)) {
          bVar13 = iVar10 != -1;
          if (bVar13) {
            memmove((void *)((longlong)iVar10 * 0x20 + *(longlong *)&this->Elements),
                    local_48.Pointer,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            iVar11 = iVar10;
          }
          break;
        }
        iVar10 = *(int *)(lVar5 + 0x18 + lVar1);
      } while (iVar10 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar13;
  }
  if (bVar13 == false) {
    uVar6 = *(int *)puVar12 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar6) {
      uVar7 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar1 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= this->HashSize)) {
      uVar4 = this->HashSize - 1U & uVar4;
      *(uint *)((longlong)local_48.Pointer + 0x1c) = uVar4;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar4;
      *(undefined4 *)((longlong)local_48.Pointer + 0x18) =
           *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
      *(int *)((longlong)FVar8 + uVar7 * 4) = iVar11;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = iVar11;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<TTuple<FName,UObject_*>_&&,FCameraVariableID_const_&>_> @ 14d53ec60

FSetElementId __thiscall
TSet<TTuple<TTuple<FName,UObject_*>,FCameraVariableID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<TTuple<FName,UObject_*>_&&,FCameraVariableID_const_&>_>
          (TSet<TTuple<TTuple<FName,UObject_*>,FCameraVariableID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>,FDefaultSetAllocator>
           *this,TPairInitializer<TTuple<FName,UObject_*>_&&,FCameraVariableID_const_&> *param_1,
          bool *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  int iVar10;
  char *in_R9;
  int iVar11;
  undefined1 *puVar12;
  bool bVar13;
  FSparseArrayAllocationInfo local_48;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar10 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    lVar1 = *(longlong *)&this->Elements;
    iVar11 = *(int *)((longlong)iVar3 * 0x20 + 4 + lVar1);
    iVar10 = iVar10 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar11;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)((longlong)iVar11 * 0x20 + lVar1) = 0xffffffff;
    }
  }
  puVar12 = &(this->Elements).field_0x8;
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar3);
  if (local_48.Pointer != (longlong *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 8);
    lVar1 = (*(longlong **)param_2)[1];
    *(longlong *)local_48.Pointer = **(longlong **)param_2;
    *(longlong *)((longlong)local_48.Pointer + 8) = lVar1;
    *(undefined4 *)((longlong)local_48.Pointer + 0x10) = *puVar2;
    *(undefined4 *)((longlong)local_48.Pointer + 0x18) = 0xffffffff;
  }
  lVar1 = *(longlong *)local_48.Pointer;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)lVar1);
  uVar7 = *(ulonglong *)((longlong)local_48.Pointer + 8);
  bVar13 = false;
  uVar4 = uVar4 + (int)((ulonglong)lVar1 >> 0x20);
  uVar6 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  iVar10 = *(int *)puVar12;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  uVar4 = (uVar4 >> 2) + (uVar6 >> 0x10 ^ uVar6) + 0x9e3779b9 + uVar4 * 0x40 ^ uVar4;
  iVar11 = local_48.Index;
  if ((iVar10 - iVar3 != 1) && (iVar10 != iVar3)) {
    FVar8 = (this->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar10 = *(int *)((longlong)FVar8 + (ulonglong)(this->HashSize - 1U & uVar4) * 4);
    if (iVar10 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        lVar5 = (longlong)iVar10 * 0x20;
        if ((*(longlong *)(lVar5 + lVar1) == *(longlong *)local_48.Pointer) &&
           (*(ulonglong *)(lVar5 + 8 + lVar1) == uVar7)) {
          bVar13 = iVar10 != -1;
          if (bVar13) {
            memmove((void *)((longlong)iVar10 * 0x20 + *(longlong *)&this->Elements),
                    local_48.Pointer,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            iVar11 = iVar10;
          }
          break;
        }
        iVar10 = *(int *)(lVar5 + 0x18 + lVar1);
      } while (iVar10 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar13;
  }
  if (bVar13 == false) {
    uVar6 = *(int *)puVar12 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar6) {
      uVar7 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar1 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= this->HashSize)) {
      uVar4 = this->HashSize - 1U & uVar4;
      *(uint *)((longlong)local_48.Pointer + 0x1c) = uVar4;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar4;
      *(undefined4 *)((longlong)local_48.Pointer + 0x18) =
           *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
      *(int *)((longlong)FVar8 + uVar7 * 4) = iVar11;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = iVar11;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FCameraContextDataID_const_&,int_&&>_> @ 14d53eed0

FSetElementId __thiscall
TSet<TTuple<FCameraContextDataID,int>,TDefaultMapHashableKeyFuncs<FCameraContextDataID,int,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FCameraContextDataID_const_&,int_&&>_>
          (TSet<TTuple<FCameraContextDataID,int>,TDefaultMapHashableKeyFuncs<FCameraContextDataID,int,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FCameraContextDataID_const_&,int_&&> *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined4 *puVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  uint uVar11;
  bool *in_R9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar1 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar6 * 0x10);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x10) = 0xffffffff;
    }
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar6);
  if (local_38.Pointer != (TSparseSetElement<TTuple<FCameraContextDataID,int>_> *)0x0) {
    puVar4 = *(undefined4 **)(param_2 + 8);
    *(undefined4 *)local_38.Pointer = **(undefined4 **)param_2;
    *(undefined4 *)((longlong)local_38.Pointer + 4) = *puVar4;
    *(undefined4 *)((longlong)local_38.Pointer + 8) = 0xffffffff;
  }
  uVar11 = *(uint *)local_38.Pointer;
  local_res8[0] = local_38.Index;
  bVar5 = TryReplaceExisting(this,uVar11,local_38.Pointer,local_res8,in_R9);
  if (!bVar5) {
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
      uVar11 = this->HashSize - 1U & uVar11;
      *(uint *)((longlong)local_38.Pointer + 0xc) = uVar11;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar11;
      *(undefined4 *)((longlong)local_38.Pointer + 8) = *(undefined4 *)((longlong)FVar9 + uVar7 * 4)
      ;
      *(int *)((longlong)FVar9 + uVar7 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FGuid_const_&,enum_ECameraObjectInterfaceParameterType_const_&>_> @ 14d53f070

FSetElementId __thiscall
TSet<TTuple<FGuid,enum_ECameraObjectInterfaceParameterType>,TDefaultMapHashableKeyFuncs<FGuid,enum_ECameraObjectInterfaceParameterType,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FGuid_const_&,enum_ECameraObjectInterfaceParameterType_const_&>_>
          (void *this,
          TPairInitializer<FGuid_const_&,ECameraObjectInterfaceParameterType_const_&> *param_1,
          bool *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  ulong64 uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  bool *in_R9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar11 = 1;
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1c,4,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),false);
  }
  else {
    iVar6 = *(int *)((longlong)this + 0x30);
    iVar1 = *(int *)((longlong)this + 0x34) + -1;
    iVar2 = *(int *)((longlong)iVar6 * 0x1c + 4 + *(longlong *)this);
    *(int *)((longlong)this + 0x30) = iVar2;
    *(int *)((longlong)this + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x1c + *(longlong *)this) = 0xffffffff;
    }
  }
  TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&local_38,iVar6);
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<FGuid,ECameraObjectInterfaceParameterType>_> *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 8);
    uVar4 = (*(undefined8 **)param_2)[1];
    *(undefined8 *)local_38.Pointer = **(undefined8 **)param_2;
    *(undefined8 *)((longlong)local_38.Pointer + 8) = uVar4;
    *(undefined1 *)((longlong)local_38.Pointer + 0x10) = *puVar3;
    *(undefined4 *)((longlong)local_38.Pointer + 0x14) = 0xffffffff;
  }
  local_res8[0] = local_38.Index;
  uVar7 = CityHash64(local_38.Pointer,0x10);
  bVar5 = TryReplaceExisting(this,(uint)uVar7,local_38.Pointer,local_res8,in_R9);
  if (!bVar5) {
    uVar9 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
    if (3 < uVar9) {
      uVar8 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar11 <= *(int *)((longlong)this + 0x48))) {
      uVar9 = *(int *)((longlong)this + 0x48) - 1U & (uint)uVar7;
      *(uint *)((longlong)local_38.Pointer + 0x18) = uVar9;
      lVar10 = *(longlong *)((longlong)this + 0x40);
      if (*(longlong *)((longlong)this + 0x40) == 0) {
        lVar10 = (longlong)this + 0x38;
      }
      uVar8 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (longlong)(int)uVar9;
      *(undefined4 *)((longlong)local_38.Pointer + 0x14) = *(undefined4 *)(lVar10 + uVar8 * 4);
      *(int *)(lVar10 + uVar8 * 4) = local_res8[0];
    }
    else {
      *(int *)((longlong)this + 0x48) = iVar11;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// EmplaceByHash<TKeyInitializer<FName_const_&>_> @ 14d53f200

FSetElementId __thiscall
TSet<TTuple<FName,TArray<UCameraRigAsset_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UCameraRigAsset_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<FName_const_&>_>
          (TSet<TTuple<FName,TArray<UCameraRigAsset_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UCameraRigAsset_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<FName_const_&> *param_2,bool *param_3)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  int iVar9;
  void *_Dst;
  longlong *_Src;
  bool bVar10;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar9 = *(int *)&(this->Elements).field_0x34;
  iVar8 = 1;
  if (iVar9 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar4 * 0x20 + 4 + lVar2);
    iVar9 = iVar9 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  if (local_38.Pointer == (longlong *)0x0) {
    _Src = (longlong *)0x0;
  }
  else {
    *(longlong *)local_38.Pointer = **(longlong **)param_3;
    *(longlong *)((longlong)local_38.Pointer + 8) = 0;
    *(longlong *)((longlong)local_38.Pointer + 0x10) = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 0x18) = 0xffffffff;
    _Src = local_38.Pointer;
  }
  iVar9 = *(int *)&(this->Elements).field_0x8;
  bVar10 = false;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  if ((iVar9 - iVar4 != 1) && (iVar9 != iVar4)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar9 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & (uint)param_2) * 4);
    if (iVar9 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)((longlong)iVar9 * 0x20 + lVar2) == *_Src) {
          bVar10 = iVar9 != -1;
          if (bVar10) {
            _Dst = (void *)((longlong)iVar9 * 0x20 + lVar2);
            pvVar3 = *(void **)((longlong)_Dst + 8);
            if (pvVar3 != (void *)0x0) {
              FMemory::Free(pvVar3);
            }
            memmove(_Dst,_Src,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar9;
          }
          break;
        }
        iVar9 = *(int *)((longlong)iVar9 * 0x20 + 0x18 + lVar2);
      } while (iVar9 != -1);
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar10;
  }
  if (bVar10 == false) {
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
      uVar6 = this->HashSize - 1U & (uint)param_2;
      *(uint *)((longlong)_Src + 0x1c) = uVar6;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      *(undefined4 *)(_Src + 3) = *(undefined4 *)((longlong)FVar7 + uVar5 * 4);
      *(int *)((longlong)FVar7 + uVar5 * 4) = local_38.Index;
    }
    else {
      this->HashSize = iVar8;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_38.Index;
  return (FSetElementId)param_1;
}

// FindIndexByHash<UCameraRigAsset_const_*> @ 14d53f450

int __thiscall
TSet<TTuple<UCameraRigAsset_const_*,TArray<FCameraObjectInterfaceParameterDefinition,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UCameraRigAsset_const_*,TArray<FCameraObjectInterfaceParameterDefinition,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::FindIndexByHash<UCameraRigAsset_const_*>
          (TSet<TTuple<UCameraRigAsset_const_*,TArray<FCameraObjectInterfaceParameterDefinition,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UCameraRigAsset_const_*,TArray<FCameraObjectInterfaceParameterDefinition,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,UCameraRigAsset **param_2)

{
  int iVar1;
  ForElementType<FSetElementId> FVar2;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar2 = (this->Hash).SecondaryData;
    if (FVar2 == (ForElementType<FSetElementId>)0x0) {
      FVar2 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar1 = *(int *)((longlong)FVar2 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        if (*(UCameraRigAsset **)((longlong)iVar1 * 0x20 + *(longlong *)&this->Elements) == *param_2
           ) {
          return iVar1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + 0x18 + *(longlong *)&this->Elements);
      } while (iVar1 != -1);
    }
  }
  return -1;
}

// operator= @ 14d544cc0

TSet<TTuple<FCameraContextDataID,int>,TDefaultMapHashableKeyFuncs<FCameraContextDataID,int,0>,FDefaultSetAllocator>
* __thiscall
TSet<TTuple<FCameraContextDataID,int>,TDefaultMapHashableKeyFuncs<FCameraContextDataID,int,0>,FDefaultSetAllocator>
::operator=(TSet<TTuple<FCameraContextDataID,int>,TDefaultMapHashableKeyFuncs<FCameraContextDataID,int,0>,FDefaultSetAllocator>
            *this,TSet<TTuple<FCameraContextDataID,int>,TDefaultMapHashableKeyFuncs<FCameraContextDataID,int,0>,FDefaultSetAllocator>
                  *param_1)

{
  undefined1 *puVar1;
  undefined1 *this_00;
  uint uVar2;
  int iVar3;
  ForElementType<FSetElementId> _Dst;
  ForElementType<FSetElementId> _Src;
  uint uVar4;
  
  if (this == param_1) {
    return this;
  }
  uVar2 = param_1->HashSize;
  uVar4 = uVar2;
  if (uVar2 < 2) {
    if ((this->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_14d544d1b;
    uVar4 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(this->Hash).SecondaryData,0,uVar4,4);
LAB_14d544d1b:
  _Src = (param_1->Hash).SecondaryData;
  _Dst = (this->Hash).SecondaryData;
  if (uVar2 != 0) {
    if (_Src == (ForElementType<FSetElementId>)0x0) {
      _Src = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    if (_Dst == (ForElementType<FSetElementId>)0x0) {
      _Dst = (ForElementType<FSetElementId>)&this->Hash;
    }
    memcpy((void *)_Dst,(void *)_Src,(longlong)(int)uVar2 << 2);
  }
  this->HashSize = uVar2;
  iVar3 = *(int *)&(param_1->Elements).field_0x8;
  TSparseArray<TSparseSetElement<TTuple<FCameraContextDataID,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty(&this->Elements,iVar3);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,iVar3,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
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
  if (iVar3 != 0) {
    memcpy(*(void **)&this->Elements,*(void **)&param_1->Elements,(longlong)iVar3 << 4);
  }
  return this;
}

// Array @ 14d548f40

TArray<UCameraNode_*,TSizedDefaultAllocator<32>_> * __thiscall
TSet<UCameraNode_*,DefaultKeyFuncs<UCameraNode_*,0>,FDefaultSetAllocator>::Array
          (TSet<UCameraNode_*,DefaultKeyFuncs<UCameraNode_*,0>,FDefaultSetAllocator> *this,
          TArray<UCameraNode_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  TArray<UCameraNode_*,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar10 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar12 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  if (0 < (int)uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar12,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  iVar3 = *(int *)&(this->Elements).field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
  uVar12 = 1;
  iVar13 = iVar10;
  TStack_40.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)TStack_40.Array;
    }
    uVar4 = *puVar14;
    iVar13 = 0;
    iVar10 = 0;
    while (uVar4 == 0) {
      lVar9 = (longlong)iVar10;
      iVar13 = iVar13 + 0x20;
      iVar10 = iVar10 + 1;
      TStack_40.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14d549015;
      uVar4 = puVar14[lVar9 + 1];
    }
    uVar12 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar12 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar9 + -1 + iVar13;
    if (iVar3 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar3;
    }
  }
LAB_14d549015:
  TStack_40._padding_ = CONCAT44(uVar12,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar13;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Elements).field_0x28) {
    do {
      pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
      pFVar11 = (FScriptContainerElement *)
                ((longlong)TStack_40.CurrentBitIndex * 0x10 + *(longlong *)&this->Elements);
      if (((pFVar5 <= pFVar11) && (pFVar11 < pFVar5 + (longlong)*piVar1 * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        pTVar8 = (TArray<UCameraNode_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar8;
      }
      iVar10 = __return_storage_ptr__->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar10 + 1;
      *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar10 * 8) =
           *(undefined8 *)pFVar11;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return __return_storage_ptr__;
}

// Rehash @ 14d55f2e0

void __thiscall
TSet<UCameraNode_*,DefaultKeyFuncs<UCameraNode_*,0>,FDefaultSetAllocator>::Rehash
          (TSet<UCameraNode_*,DefaultKeyFuncs<UCameraNode_*,0>,FDefaultSetAllocator> *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  ulonglong *puVar8;
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14d55f3bc;
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
LAB_14d55f3bc:
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
        puVar8 = (ulonglong *)
                 ((longlong)local_30.CurrentBitIndex * 0x10 + *(longlong *)&this->Elements);
        uVar4 = ((uint)(*puVar8 >> 0x14) & 0xffff ^ (uint)(*puVar8 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = (uVar4 >> 0x10 ^ uVar4) & *piVar1 - 1U;
        *(uint *)((longlong)puVar8 + 0xc) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14d55f4a0

void __thiscall
TSet<UCameraRigAsset_*,DefaultKeyFuncs<UCameraRigAsset_*,0>,FDefaultSetAllocator>::Rehash
          (TSet<UCameraRigAsset_*,DefaultKeyFuncs<UCameraRigAsset_*,0>,FDefaultSetAllocator> *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  ulonglong *puVar8;
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14d55f57c;
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
LAB_14d55f57c:
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
        puVar8 = (ulonglong *)
                 ((longlong)local_30.CurrentBitIndex * 0x10 + *(longlong *)&this->Elements);
        uVar4 = ((uint)(*puVar8 >> 0x14) & 0xffff ^ (uint)(*puVar8 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = (uVar4 >> 0x10 ^ uVar4) & *piVar1 - 1U;
        *(uint *)((longlong)puVar8 + 0xc) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14d55f660

void __thiscall
TSet<UCameraRigProxyAsset_*,DefaultKeyFuncs<UCameraRigProxyAsset_*,0>,FDefaultSetAllocator>::Rehash
          (TSet<UCameraRigProxyAsset_*,DefaultKeyFuncs<UCameraRigProxyAsset_*,0>,FDefaultSetAllocator>
           *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  ulonglong *puVar8;
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14d55f73c;
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
LAB_14d55f73c:
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
        puVar8 = (ulonglong *)
                 ((longlong)local_30.CurrentBitIndex * 0x10 + *(longlong *)&this->Elements);
        uVar4 = ((uint)(*puVar8 >> 0x14) & 0xffff ^ (uint)(*puVar8 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = (uVar4 >> 0x10 ^ uVar4) & *piVar1 - 1U;
        *(uint *)((longlong)puVar8 + 0xc) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14d55f820

void __thiscall
TSet<TTuple<UCameraRigAsset_const_*,TArray<FCameraObjectInterfaceParameterDefinition,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UCameraRigAsset_const_*,TArray<FCameraObjectInterfaceParameterDefinition,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<UCameraRigAsset_const_*,TArray<FCameraObjectInterfaceParameterDefinition,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UCameraRigAsset_const_*,TArray<FCameraObjectInterfaceParameterDefinition,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  ulonglong *puVar8;
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14d55f8fc;
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
LAB_14d55f8fc:
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
        puVar8 = (ulonglong *)
                 ((longlong)local_30.CurrentBitIndex * 0x20 + *(longlong *)&this->Elements);
        uVar4 = ((uint)(*puVar8 >> 0x14) & 0xffff ^ (uint)(*puVar8 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = (uVar4 >> 0x10 ^ uVar4) & *piVar1 - 1U;
        *(uint *)((longlong)puVar8 + 0x1c) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar8 + 3) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14d55f9e0

void __thiscall
TSet<TTuple<TTuple<FName,UObject_*>,FCameraContextDataID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraContextDataID,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<TTuple<FName,UObject_*>,FCameraContextDataID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraContextDataID,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
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
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      puVar11 = *(uint **)&(this->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_40.Array;
      }
      uVar5 = *puVar11;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar7 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14d55fab7;
        uVar5 = puVar11[lVar7 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      uVar8 = (ulonglong)uStack_64 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_54 = (int)lVar7 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14d55fab7:
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
        puVar10 = (undefined8 *)
                  ((longlong)local_40.CurrentBitIndex * 0x20 + *(longlong *)&this->Elements);
        uVar3 = *puVar10;
        uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar5 = uVar5 + (int)((ulonglong)uVar3 >> 0x20);
        uVar6 = ((uint)((ulonglong)puVar10[1] >> 0x14) & 0xffff ^ (uint)((ulonglong)puVar10[1] >> 4)
                ) * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        uVar5 = (uVar5 * 0x40 + (uVar6 >> 0x10 ^ uVar6) + (uVar5 >> 2) + 0x9e3779b9 ^ uVar5) &
                *piVar1 - 1U;
        *(uint *)((longlong)puVar10 + 0x1c) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar4;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(puVar10 + 3) = *(undefined4 *)((longlong)FVar9 + uVar8 * 4);
        *(int *)((longlong)FVar9 + uVar8 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14d55fbd0

void __thiscall
TSet<TTuple<TTuple<FName,UObject_*>,FCameraVariableID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<TTuple<FName,UObject_*>,FCameraVariableID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
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
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      puVar11 = *(uint **)&(this->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_40.Array;
      }
      uVar5 = *puVar11;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar7 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14d55fca7;
        uVar5 = puVar11[lVar7 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      uVar8 = (ulonglong)uStack_64 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_54 = (int)lVar7 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14d55fca7:
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
        puVar10 = (undefined8 *)
                  ((longlong)local_40.CurrentBitIndex * 0x20 + *(longlong *)&this->Elements);
        uVar3 = *puVar10;
        uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar5 = uVar5 + (int)((ulonglong)uVar3 >> 0x20);
        uVar6 = ((uint)((ulonglong)puVar10[1] >> 0x14) & 0xffff ^ (uint)((ulonglong)puVar10[1] >> 4)
                ) * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        uVar5 = (uVar5 * 0x40 + (uVar6 >> 0x10 ^ uVar6) + (uVar5 >> 2) + 0x9e3779b9 ^ uVar5) &
                *piVar1 - 1U;
        *(uint *)((longlong)puVar10 + 0x1c) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar4;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(puVar10 + 3) = *(undefined4 *)((longlong)FVar9 + uVar8 * 4);
        *(int *)((longlong)FVar9 + uVar8 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14d55fdc0

void __thiscall
TSet<TTuple<FCameraContextDataID,int>,TDefaultMapHashableKeyFuncs<FCameraContextDataID,int,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FCameraContextDataID,int>,TDefaultMapHashableKeyFuncs<FCameraContextDataID,int,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14d55fe9c;
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
LAB_14d55fe9c:
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
        puVar8 = (uint *)((longlong)local_30.CurrentBitIndex * 0x10 + *(longlong *)&this->Elements);
        uVar7 = *piVar1 - 1U & *puVar8;
        puVar8[3] = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        puVar8[2] = *(uint *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14d55ff50

void __thiscall
TSet<TTuple<FGuid,enum_ECameraObjectInterfaceParameterType>,TDefaultMapHashableKeyFuncs<FGuid,enum_ECameraObjectInterfaceParameterType,0>,FDefaultSetAllocator>
::Rehash(void *this)

{
  int *piVar1;
  int iVar2;
  ulong64 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> *pFVar6;
  char *pcVar7;
  uint uVar8;
  TBitArray<FDefaultBitArrayAllocator> *pTVar9;
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
      pTVar9 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar9 = local_30.Array;
      }
      uVar8 = *(uint *)(pTVar9->AllocatorInstance).InlineData;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar8 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar4 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14d560027;
        uVar8 = *(uint *)((pTVar9->AllocatorInstance).InlineData + lVar4 * 4 + 4);
      }
      uStack_54 = -uVar8 & uVar8;
      uVar5 = (ulonglong)uStack_54 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iStack_44 = (int)lVar4 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14d560027:
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
        pcVar7 = (char *)(*(longlong *)this + (longlong)local_30.CurrentBitIndex * 0x1c);
        uVar3 = CityHash64(pcVar7,0x10);
        uVar8 = *piVar1 - 1U & (uint)uVar3;
        *(uint *)(pcVar7 + 0x18) = uVar8;
        pFVar6 = (ForElementType<FSetElementId> *)((longlong)this + 0x38);
        if (*(ForElementType<FSetElementId> **)((longlong)this + 0x40) !=
            (ForElementType<FSetElementId> *)0x0) {
          pFVar6 = *(ForElementType<FSetElementId> **)((longlong)this + 0x40);
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar8;
        *(undefined4 *)(pcVar7 + 0x14) = *(undefined4 *)(pFVar6->InlineData + uVar5 * 4);
        *(int *)(pFVar6->InlineData + uVar5 * 4) = iVar2;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14d5600f0

void __thiscall
TSet<TTuple<FName,TArray<UCameraRigAsset_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UCameraRigAsset_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FName,TArray<UCameraRigAsset_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UCameraRigAsset_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
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
  undefined8 *puVar9;
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
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_40.Array;
      }
      uVar5 = *puVar10;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar6 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14d5601c7;
        uVar5 = puVar10[lVar6 + 1];
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
LAB_14d5601c7:
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
        puVar9 = (undefined8 *)
                 ((longlong)local_40.CurrentBitIndex * 0x20 + *(longlong *)&this->Elements);
        uVar3 = *puVar9;
        uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar5 = *piVar1 - 1U & uVar5 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)((longlong)puVar9 + 0x1c) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(puVar9 + 3) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14d560290

void __thiscall
TSet<TTuple<enum_ECameraEvaluationDataCondition,UE::Cameras::FCameraNodeEvaluationResult>,TDefaultMapHashableKeyFuncs<enum_ECameraEvaluationDataCondition,UE::Cameras::FCameraNodeEvaluationResult,0>,FDefaultSetAllocator>
::Rehash(void *this)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> *pFVar5;
  uint uVar6;
  byte *pbVar7;
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14d56036c;
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
LAB_14d56036c:
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
        pbVar7 = (byte *)((longlong)local_30.CurrentBitIndex * 0xa20 + *(longlong *)this);
        uVar6 = *piVar1 - 1U & (uint)*pbVar7;
        *(uint *)(pbVar7 + 0xa14) = uVar6;
        pFVar5 = (ForElementType<FSetElementId> *)((longlong)this + 0x38);
        if (*(ForElementType<FSetElementId> **)((longlong)this + 0x40) !=
            (ForElementType<FSetElementId> *)0x0) {
          pFVar5 = *(ForElementType<FSetElementId> **)((longlong)this + 0x40);
        }
        uVar4 = (longlong)*piVar1 - 1U & (ulonglong)uVar6;
        *(undefined4 *)(pbVar7 + 0xa10) = *(undefined4 *)(pFVar5->InlineData + uVar4 * 4);
        *(int *)(pFVar5->InlineData + uVar4 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// RehashOrLink @ 14d560420

void __thiscall
TSet<UCameraRigAsset_*,DefaultKeyFuncs<UCameraRigAsset_*,0>,FDefaultSetAllocator>::RehashOrLink
          (TSet<UCameraRigAsset_*,DefaultKeyFuncs<UCameraRigAsset_*,0>,FDefaultSetAllocator> *this,
          uint param_1,TSparseSetElement<UCameraRigAsset_*> *param_2,int param_3)

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
  *(uint *)&param_2->field_0xc = uVar5;
  FVar4 = (this->Hash).SecondaryData;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar3 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
  *(undefined4 *)&param_2->field_0x8 = *(undefined4 *)((longlong)FVar4 + uVar3 * 4);
  *(int *)((longlong)FVar4 + uVar3 * 4) = param_3;
  return;
}

// Reset @ 14d561390

void __thiscall
TSet<TTuple<TTuple<FName,UObject_*>,FCameraContextDataID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraContextDataID,0>,FDefaultSetAllocator>
::Reset(TSet<TTuple<TTuple<FName,UObject_*>,FCameraContextDataID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraContextDataID,0>,FDefaultSetAllocator>
        *this)

{
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    UnhashElements(this);
    *(undefined4 *)&(this->Elements).field_0x8 = 0;
    if (*(int *)&(this->Elements).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)this,0,(int *)&(this->Elements).field_0xc);
    }
    *(undefined4 *)&(this->Elements).field_0x34 = 0;
    *(undefined4 *)&(this->Elements).field_0x28 = 0;
    *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  }
  return;
}

// Reset @ 14d561400

void __thiscall
TSet<TTuple<TTuple<FName,UObject_*>,FCameraVariableID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>,FDefaultSetAllocator>
::Reset(TSet<TTuple<TTuple<FName,UObject_*>,FCameraVariableID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>,FDefaultSetAllocator>
        *this)

{
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    UnhashElements(this);
    *(undefined4 *)&(this->Elements).field_0x8 = 0;
    if (*(int *)&(this->Elements).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)this,0,(int *)&(this->Elements).field_0xc);
    }
    *(undefined4 *)&(this->Elements).field_0x34 = 0;
    *(undefined4 *)&(this->Elements).field_0x28 = 0;
    *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  }
  return;
}

// Reset @ 14d561470

void __thiscall
TSet<TTuple<FCameraContextDataID,int>,TDefaultMapHashableKeyFuncs<FCameraContextDataID,int,0>,FDefaultSetAllocator>
::Reset(TSet<TTuple<FCameraContextDataID,int>,TDefaultMapHashableKeyFuncs<FCameraContextDataID,int,0>,FDefaultSetAllocator>
        *this)

{
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    UnhashElements(this);
    *(undefined4 *)&(this->Elements).field_0x8 = 0;
    if (*(int *)&(this->Elements).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)this,0,(int *)&(this->Elements).field_0xc);
    }
    *(undefined4 *)&(this->Elements).field_0x34 = 0;
    *(undefined4 *)&(this->Elements).field_0x28 = 0;
    *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  }
  return;
}

// TryReplaceExisting @ 14d568ca0

bool __thiscall
TSet<TTuple<UObject_*,FName>,DefaultKeyFuncs<TTuple<UObject_*,FName>,0>,FDefaultSetAllocator>::
TryReplaceExisting(TSet<TTuple<UObject_*,FName>,DefaultKeyFuncs<TTuple<UObject_*,FName>,0>,FDefaultSetAllocator>
                   *this,uint param_1,TSparseSetElement<TTuple<UObject_*,FName>_> *param_2,
                  int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  bool bVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined1 *puVar11;
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
        lVar10 = (longlong)iVar13;
        if ((*(longlong *)(lVar4 + lVar10 * 0x18) == *(longlong *)param_2) &&
           (*(longlong *)(lVar4 + 8 + lVar10 * 0x18) == *(longlong *)&param_2->field_0x8)) {
          bVar15 = iVar13 != -1;
          if (bVar15) {
            memmove((void *)(lVar4 + (longlong)iVar13 * 0x18),param_2,0x10);
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
            puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
            lVar10 = (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4;
            if (puVar11 == (undefined1 *)0x0) {
              puVar11 = puVar1;
            }
            if (((*(uint *)(puVar11 + lVar10) & uVar14) == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            if (*(int *)&(this->Elements).field_0x34 != 0) {
              *(int *)(lVar4 + (longlong)*(int *)&(this->Elements).field_0x30 * 0x18) = iVar3;
            }
            puVar2 = (undefined4 *)(lVar4 + (longlong)iVar3 * 0x18);
            uVar9 = 0xffffffff;
            *puVar2 = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0x34) {
              uVar9 = *(undefined4 *)&(this->Elements).field_0x30;
            }
            puVar2[1] = uVar9;
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
            *(uint *)(puVar11 + lVar10) = *(uint *)(puVar11 + lVar10) & ~uVar14;
            *param_3 = iVar13;
          }
          break;
        }
        iVar13 = *(int *)(lVar4 + 0x10 + lVar10 * 0x18);
      } while (iVar13 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar15;
  }
  return bVar15;
}

// TryReplaceExisting @ 14d568ee0

bool __thiscall
TSet<TTuple<FCameraContextDataID,int>,TDefaultMapHashableKeyFuncs<FCameraContextDataID,int,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FCameraContextDataID,int>,TDefaultMapHashableKeyFuncs<FCameraContextDataID,int,0>,FDefaultSetAllocator>
           *this,uint param_1,TSparseSetElement<TTuple<FCameraContextDataID,int>_> *param_2,
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
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  
  iVar12 = *(int *)&(this->Elements).field_0x8;
  bVar14 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  if ((iVar12 - iVar3 != 1) && (iVar12 != iVar3)) {
    FVar11 = (this->Hash).SecondaryData;
    if (FVar11 == (ForElementType<FSetElementId>)0x0) {
      FVar11 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar12 = *(int *)((longlong)FVar11 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar12 != -1) {
      do {
        if (*(int *)(*(longlong *)&this->Elements + (longlong)iVar12 * 0x10) == *(int *)param_2) {
          bVar14 = iVar12 != -1;
          if (bVar14) {
            puVar1 = &(this->Elements).field_0x10;
            *(undefined8 *)(*(longlong *)&this->Elements + (longlong)iVar12 * 0x10) =
                 *(undefined8 *)param_2;
            iVar3 = *param_3;
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
            puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
            lVar2 = (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4;
            if (puVar10 == (undefined1 *)0x0) {
              puVar10 = puVar1;
            }
            if (((*(uint *)(puVar10 + lVar2) & uVar13) == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            if (*(int *)&(this->Elements).field_0x34 != 0) {
              *(int *)(lVar4 + (longlong)*(int *)&(this->Elements).field_0x30 * 0x10) = iVar3;
            }
            uVar9 = 0xffffffff;
            *(undefined4 *)(lVar4 + (longlong)iVar3 * 0x10) = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0x34) {
              uVar9 = *(undefined4 *)&(this->Elements).field_0x30;
            }
            *(undefined4 *)(lVar4 + 4 + (longlong)iVar3 * 0x10) = uVar9;
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
            *(uint *)(puVar10 + lVar2) = *(uint *)(puVar10 + lVar2) & ~uVar13;
            *param_3 = iVar12;
          }
          break;
        }
        iVar12 = *(int *)(*(longlong *)&this->Elements + 8 + (longlong)iVar12 * 0x10);
      } while (iVar12 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar14;
  }
  return bVar14;
}

// TryReplaceExisting @ 14d5690f0

bool __thiscall
TSet<TTuple<FGuid,enum_ECameraObjectInterfaceParameterType>,TDefaultMapHashableKeyFuncs<FGuid,enum_ECameraObjectInterfaceParameterType,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (void *this,uint param_1,
          TSparseSetElement<TTuple<FGuid,ECameraObjectInterfaceParameterType>_> *param_2,
          int *param_3,bool *param_4)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  code *pcVar4;
  byte bVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined4 *puVar10;
  int *piVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  bool bVar15;
  
  bVar15 = false;
  if ((*(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34) != 1) &&
     (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34))) {
    lVar9 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar9 = (longlong)this + 0x38;
    }
    iVar12 = *(int *)(lVar9 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (iVar12 != -1) {
      do {
        piVar11 = (int *)((longlong)iVar12 * 0x1c + *(longlong *)this);
        if (((*(int *)&param_2->field_0xc == piVar11[3] && *(int *)&param_2->field_0x8 == piVar11[2]
             ) && *(int *)&param_2->field_0x4 == piVar11[1]) && *(int *)param_2 == *piVar11) {
          bVar15 = iVar12 != -1;
          if (bVar15) {
            memmove((void *)((longlong)iVar12 * 0x1c + *(longlong *)this),param_2,0x14);
            iVar3 = *param_3;
            lVar9 = *(longlong *)this;
            bVar5 = (byte)iVar3 & 0x1f;
            uVar14 = 1 << bVar5 | 1U >> 0x20 - bVar5;
            if (((iVar3 < 0) || (*(int *)((longlong)this + 0x28) <= iVar3)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            lVar2 = (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4;
            lVar13 = *(longlong *)((longlong)this + 0x20);
            if (*(longlong *)((longlong)this + 0x20) == 0) {
              lVar13 = (longlong)this + 0x10;
            }
            if (((*(uint *)(lVar13 + lVar2) & uVar14) == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            if (*(int *)((longlong)this + 0x34) != 0) {
              *(int *)((longlong)*(int *)((longlong)this + 0x30) * 0x1c + lVar9) = iVar3;
            }
            uVar8 = 0xffffffff;
            puVar10 = (undefined4 *)((longlong)iVar3 * 0x1c + lVar9);
            *puVar10 = 0xffffffff;
            if (0 < *(int *)((longlong)this + 0x34)) {
              uVar8 = *(undefined4 *)((longlong)this + 0x30);
            }
            puVar10[1] = uVar8;
            *(int *)((longlong)this + 0x34) = *(int *)((longlong)this + 0x34) + 1;
            *(int *)((longlong)this + 0x30) = iVar3;
            if (((iVar3 < 0) || (*(int *)((longlong)this + 0x28) <= iVar3)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            lVar9 = *(longlong *)((longlong)this + 0x20);
            if (*(longlong *)((longlong)this + 0x20) == 0) {
              lVar9 = (longlong)this + 0x10;
            }
            puVar1 = (uint *)(lVar9 + lVar2);
            *puVar1 = *puVar1 & ~uVar14;
            *param_3 = iVar12;
          }
          goto LAB_14d56919c;
        }
        iVar12 = piVar11[5];
      } while (iVar12 != -1);
    }
    bVar15 = false;
  }
LAB_14d56919c:
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar15;
  }
  return bVar15;
}

// TryReplaceExisting @ 14d569320

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
TSet<TTuple<enum_ECameraEvaluationDataCondition,UE::Cameras::FCameraNodeEvaluationResult>,TDefaultMapHashableKeyFuncs<enum_ECameraEvaluationDataCondition,UE::Cameras::FCameraNodeEvaluationResult,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (void *this,uint param_1,
          TSparseSetElement<TTuple<ECameraEvaluationDataCondition,UE::Cameras::FCameraNodeEvaluationResult>_>
          *param_2,int *param_3,bool *param_4)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  code *pcVar4;
  byte bVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined4 *puVar10;
  void *_Dst;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  bool bVar14;
  
  bVar14 = false;
  if ((*(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34) != 1) &&
     (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34))) {
    lVar9 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar9 = (longlong)this + 0x38;
    }
    iVar11 = *(int *)(lVar9 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (iVar11 != -1) {
      lVar9 = *(longlong *)this;
      do {
        if (*(char *)((longlong)iVar11 * 0xa20 + lVar9) == *(char *)param_2) {
          bVar14 = iVar11 != -1;
          if (bVar14) {
            _Dst = (void *)((longlong)iVar11 * 0xa20 + lVar9);
            UE::Cameras::FCameraNodeEvaluationResult::~FCameraNodeEvaluationResult
                      ((FCameraNodeEvaluationResult *)((longlong)_Dst + 0x10));
            memmove(_Dst,param_2,0xa10);
            iVar3 = *param_3;
            lVar9 = *(longlong *)this;
            bVar5 = (byte)iVar3 & 0x1f;
            uVar13 = 1 << bVar5 | 1U >> 0x20 - bVar5;
            if (((iVar3 < 0) || (*(int *)((longlong)this + 0x28) <= iVar3)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            lVar2 = (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4;
            lVar12 = *(longlong *)((longlong)this + 0x20);
            if (*(longlong *)((longlong)this + 0x20) == 0) {
              lVar12 = (longlong)this + 0x10;
            }
            if (((*(uint *)(lVar12 + lVar2) & uVar13) == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            if (*(int *)((longlong)this + 0x34) != 0) {
              *(int *)((longlong)*(int *)((longlong)this + 0x30) * 0xa20 + lVar9) = iVar3;
            }
            uVar8 = 0xffffffff;
            puVar10 = (undefined4 *)((longlong)iVar3 * 0xa20 + lVar9);
            *puVar10 = 0xffffffff;
            if (0 < *(int *)((longlong)this + 0x34)) {
              uVar8 = *(undefined4 *)((longlong)this + 0x30);
            }
            puVar10[1] = uVar8;
            *(int *)((longlong)this + 0x34) = *(int *)((longlong)this + 0x34) + 1;
            *(int *)((longlong)this + 0x30) = iVar3;
            if (((iVar3 < 0) || (*(int *)((longlong)this + 0x28) <= iVar3)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            lVar9 = *(longlong *)((longlong)this + 0x20);
            if (*(longlong *)((longlong)this + 0x20) == 0) {
              lVar9 = (longlong)this + 0x10;
            }
            puVar1 = (uint *)(lVar9 + lVar2);
            *puVar1 = *puVar1 & ~uVar13;
            *param_3 = iVar11;
          }
          break;
        }
        iVar11 = *(int *)((longlong)iVar11 * 0xa20 + 0xa10 + lVar9);
      } while (iVar11 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar14;
  }
  return bVar14;
}

// UnhashElements @ 14d5697b0

void __thiscall
TSet<TTuple<TTuple<FName,UObject_*>,FCameraContextDataID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraContextDataID,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<TTuple<FName,UObject_*>,FCameraContextDataID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraContextDataID,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14d5698ab;
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
LAB_14d5698ab:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14d5699a0;
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
LAB_14d5699a0:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<TTuple<FName,UObject_*>,FCameraContextDataID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)((longlong)local_60.CurrentBitIndex * 0x20 + 0x1c + *(longlong *)&this->Elements) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// UnhashElements @ 14d569a40

void __thiscall
TSet<TTuple<TTuple<FName,UObject_*>,FCameraVariableID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<TTuple<FName,UObject_*>,FCameraVariableID>,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14d569b3b;
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
LAB_14d569b3b:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14d569c30;
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
LAB_14d569c30:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<TTuple<FName,UObject_*>,FCameraVariableID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)((longlong)local_60.CurrentBitIndex * 0x20 + 0x1c + *(longlong *)&this->Elements) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// UnhashElements @ 14d569cd0

void __thiscall
TSet<TTuple<FCameraContextDataID,int>,TDefaultMapHashableKeyFuncs<FCameraContextDataID,int,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<FCameraContextDataID,int>,TDefaultMapHashableKeyFuncs<FCameraContextDataID,int,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14d569dcb;
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
LAB_14d569dcb:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14d569ec0;
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
LAB_14d569ec0:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<FCameraContextDataID,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// Emplace<FCameraVariableID_const_&> @ 14d57fd70

FSetElementId __thiscall
TSet<FCameraVariableID,DefaultKeyFuncs<FCameraVariableID,0>,FDefaultSetAllocator>::
Emplace<FCameraVariableID_const_&>
          (TSet<FCameraVariableID,DefaultKeyFuncs<FCameraVariableID,0>,FDefaultSetAllocator> *this,
          FCameraVariableID *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  uint uVar10;
  bool *in_R9;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
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
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar5 * 0xc);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0xc) = 0xffffffff;
    }
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar5);
  if (local_38.Pointer != (TSparseSetElement<FCameraVariableID> *)0x0) {
    *(undefined4 *)local_38.Pointer = *(undefined4 *)param_2;
    *(undefined4 *)((longlong)local_38.Pointer + 4) = 0xffffffff;
  }
  uVar10 = *(uint *)local_38.Pointer;
  local_res8[0] = local_38.Index;
  bVar4 = TryReplaceExisting(this,uVar10,local_38.Pointer,(int *)local_res8,in_R9);
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
      uVar10 = this->HashSize - 1U & uVar10;
      *(uint *)((longlong)local_38.Pointer + 8) = uVar10;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar10;
      *(undefined4 *)((longlong)local_38.Pointer + 4) = *(undefined4 *)((longlong)FVar8 + uVar6 * 4)
      ;
      *(uint *)((longlong)FVar8 + uVar6 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  param_1->Value = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// Emplace<TKeyInitializer<FName_const_&>_> @ 14d57ff00

FSetElementId __thiscall
TSet<TTuple<FName,UE::Cameras::FCameraNodeEvaluatorHierarchy::FTaggedRange>,TDefaultMapHashableKeyFuncs<FName,UE::Cameras::FCameraNodeEvaluatorHierarchy::FTaggedRange,0>,FDefaultSetAllocator>
::Emplace<TKeyInitializer<FName_const_&>_>
          (TSet<TTuple<FName,UE::Cameras::FCameraNodeEvaluatorHierarchy::FTaggedRange>,TDefaultMapHashableKeyFuncs<FName,UE::Cameras::FCameraNodeEvaluatorHierarchy::FTaggedRange,0>,FDefaultSetAllocator>
           *this,TKeyInitializer<FName_const_&> *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ForElementType<FSetElementId> FVar10;
  int iVar11;
  bool *in_R9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar1 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar6 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar6);
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<FName,UE::Cameras::FCameraNodeEvaluatorHierarchy::FTaggedRange>_> *)
      0x0) {
    *(undefined8 *)local_38.Pointer = **(undefined8 **)param_2;
    *(undefined8 *)((longlong)local_38.Pointer + 8) = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 0x10) = 0xffffffff;
  }
  uVar4 = *(undefined8 *)local_38.Pointer;
  local_res8[0] = local_38.Index;
  uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
  uVar7 = (int)((ulonglong)uVar4 >> 0x20) + uVar7;
  bVar5 = TryReplaceExisting(this,uVar7,local_38.Pointer,local_res8,in_R9);
  if (!bVar5) {
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
      uVar7 = this->HashSize - 1U & uVar7;
      *(uint *)((longlong)local_38.Pointer + 0x14) = uVar7;
      FVar10 = (this->Hash).SecondaryData;
      if (FVar10 == (ForElementType<FSetElementId>)0x0) {
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar7;
      *(undefined4 *)((longlong)local_38.Pointer + 0x10) =
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

// Emplace<TPairInitializer<UE::Cameras::FCameraDebugBlock_*_&&,int_&&>_> @ 14d5800a0

FSetElementId __thiscall
TSet<TTuple<UE::Cameras::FCameraDebugBlock_*,int>,TDefaultMapHashableKeyFuncs<UE::Cameras::FCameraDebugBlock_*,int,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<UE::Cameras::FCameraDebugBlock_*_&&,int_&&>_>
          (TSet<TTuple<UE::Cameras::FCameraDebugBlock_*,int>,TDefaultMapHashableKeyFuncs<UE::Cameras::FCameraDebugBlock_*,int,0>,FDefaultSetAllocator>
           *this,TPairInitializer<UE::Cameras::FCameraDebugBlock_*_&&,int_&&> *param_1,bool *param_2
          )

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  char *in_R9;
  bool bVar9;
  FSparseArrayAllocationInfo local_38;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  if (iVar8 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar8 = iVar8 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar5);
  if (local_38.Pointer != (TSparseSetElement<TTuple<UE::Cameras::FCameraDebugBlock_*,int>_> *)0x0) {
    puVar3 = *(undefined4 **)(param_2 + 8);
    *(undefined8 *)local_38.Pointer = **(undefined8 **)param_2;
    *(undefined4 *)((longlong)local_38.Pointer + 8) = *puVar3;
    *(undefined4 *)((longlong)local_38.Pointer + 0x10) = 0xffffffff;
  }
  uVar4 = *(ulonglong *)local_38.Pointer;
  bVar9 = false;
  uVar6 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  iVar8 = *(int *)&(this->Elements).field_0x8;
  iVar5 = *(int *)&(this->Elements).field_0x34;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  if ((iVar8 - iVar5 != 1) && (iVar8 != iVar5)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar8 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar6) * 4);
    if (iVar8 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(ulonglong *)(lVar2 + (longlong)iVar8 * 0x18) == uVar4) {
          bVar9 = iVar8 != -1;
          if (bVar9) {
            memmove((void *)(lVar2 + (longlong)iVar8 * 0x18),local_38.Pointer,0x10);
            TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar8;
          }
          break;
        }
        iVar8 = *(int *)(lVar2 + 0x10 + (longlong)iVar8 * 0x18);
      } while (iVar8 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar9;
  }
  if (bVar9 == false) {
    RehashOrLink(this,uVar6,local_38.Pointer,local_38.Index);
  }
  *(int *)&param_1->Key = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FString_&&,FColor_const_&>_> @ 14d580280

FSetElementId __thiscall
TSet<TTuple<FString,FColor>,TDefaultMapHashableKeyFuncs<FString,FColor,0>,FDefaultSetAllocator>::
Emplace<TPairInitializer<FString_&&,FColor_const_&>_>
          (TSet<TTuple<FString,FColor>,TDefaultMapHashableKeyFuncs<FString,FColor,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FString_&&,FColor_const_&> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  wchar_t *pwVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  TSparseSetElement<TTuple<FString,FColor>_> *pTVar13;
  int iVar14;
  bool *in_R9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar14 = *(int *)&(this->Elements).field_0x34;
  iVar12 = 1;
  if (iVar14 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar6 * 0x20 + 4 + lVar2);
    iVar14 = iVar14 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar14;
    if (iVar14 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar6);
  pTVar13 = (TSparseSetElement<TTuple<FString,FColor>_> *)0x0;
  iVar14 = 0;
  if (local_38.Pointer != (TSparseSetElement<TTuple<FString,FColor>_> *)0x0) {
    puVar3 = *(undefined8 **)param_2;
    puVar4 = *(undefined4 **)(param_2 + 8);
    *(undefined8 *)local_38.Pointer = 0;
    *(undefined8 *)local_38.Pointer = *puVar3;
    *puVar3 = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 8) = *(undefined4 *)(puVar3 + 1);
    *(undefined4 *)((longlong)local_38.Pointer + 0xc) = *(undefined4 *)((longlong)puVar3 + 0xc);
    puVar3[1] = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 0x10) = *puVar4;
    *(undefined4 *)((longlong)local_38.Pointer + 0x18) = 0xffffffff;
    pTVar13 = local_38.Pointer;
  }
  local_res8[0] = local_38.Index;
  if (*(int *)&pTVar13->field_0x8 == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = *(wchar_t **)pTVar13;
    iVar14 = *(int *)&pTVar13->field_0x8 + -1;
  }
  uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar14,pwVar10);
  bVar5 = TryReplaceExisting(this,uVar7,pTVar13,local_res8,in_R9);
  if (!bVar5) {
    uVar9 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar9) {
      uVar8 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar12 <= this->HashSize)) {
      uVar7 = this->HashSize - 1U & uVar7;
      *(uint *)&pTVar13->field_0x1c = uVar7;
      FVar11 = (this->Hash).SecondaryData;
      if (FVar11 == (ForElementType<FSetElementId>)0x0) {
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar7;
      *(undefined4 *)&pTVar13->field_0x18 = *(undefined4 *)((longlong)FVar11 + uVar8 * 4);
      *(int *)((longlong)FVar11 + uVar8 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar12;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<UE::Cameras::FCameraDebugBlock_*_const_&,int_&&>_> @ 14d580440

FSetElementId __thiscall
TSet<TTuple<UE::Cameras::FCameraDebugBlock_*,int>,TDefaultMapHashableKeyFuncs<UE::Cameras::FCameraDebugBlock_*,int,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<UE::Cameras::FCameraDebugBlock_*_const_&,int_&&>_>
          (TSet<TTuple<UE::Cameras::FCameraDebugBlock_*,int>,TDefaultMapHashableKeyFuncs<UE::Cameras::FCameraDebugBlock_*,int,0>,FDefaultSetAllocator>
           *this,TPairInitializer<UE::Cameras::FCameraDebugBlock_*_const_&,int_&&> *param_1,
          bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  char *in_R9;
  bool bVar9;
  FSparseArrayAllocationInfo local_38;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  if (iVar8 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar8 = iVar8 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar5);
  if (local_38.Pointer != (TSparseSetElement<TTuple<UE::Cameras::FCameraDebugBlock_*,int>_> *)0x0) {
    puVar3 = *(undefined4 **)(param_2 + 8);
    *(undefined8 *)local_38.Pointer = **(undefined8 **)param_2;
    *(undefined4 *)((longlong)local_38.Pointer + 8) = *puVar3;
    *(undefined4 *)((longlong)local_38.Pointer + 0x10) = 0xffffffff;
  }
  uVar4 = *(ulonglong *)local_38.Pointer;
  bVar9 = false;
  uVar6 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  iVar8 = *(int *)&(this->Elements).field_0x8;
  iVar5 = *(int *)&(this->Elements).field_0x34;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  if ((iVar8 - iVar5 != 1) && (iVar8 != iVar5)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar8 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar6) * 4);
    if (iVar8 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(ulonglong *)(lVar2 + (longlong)iVar8 * 0x18) == uVar4) {
          bVar9 = iVar8 != -1;
          if (bVar9) {
            memmove((void *)(lVar2 + (longlong)iVar8 * 0x18),local_38.Pointer,0x10);
            TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar8;
          }
          break;
        }
        iVar8 = *(int *)(lVar2 + 0x10 + (longlong)iVar8 * 0x18);
      } while (iVar8 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar9;
  }
  if (bVar9 == false) {
    RehashOrLink(this,uVar6,local_38.Pointer,local_38.Index);
  }
  *(int *)&param_1->Key = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<UE::Cameras::FCameraDebugBlock_*_const_&,UE::Cameras::FCameraDebugBlockReader::FRelatedIndices_&&>_> @ 14d580620

FSetElementId __thiscall
TSet<TTuple<UE::Cameras::FCameraDebugBlock_*,UE::Cameras::FCameraDebugBlockReader::FRelatedIndices>,TDefaultMapHashableKeyFuncs<UE::Cameras::FCameraDebugBlock_*,UE::Cameras::FCameraDebugBlockReader::FRelatedIndices,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<UE::Cameras::FCameraDebugBlock_*_const_&,UE::Cameras::FCameraDebugBlockReader::FRelatedIndices_&&>_>
          (TSet<TTuple<UE::Cameras::FCameraDebugBlock_*,UE::Cameras::FCameraDebugBlockReader::FRelatedIndices>,TDefaultMapHashableKeyFuncs<UE::Cameras::FCameraDebugBlock_*,UE::Cameras::FCameraDebugBlockReader::FRelatedIndices,0>,FDefaultSetAllocator>
           *this,TPairInitializer<UE::Cameras::FCameraDebugBlock_*_const_&,UE::Cameras::FCameraDebugBlockReader::FRelatedIndices_&&>
                 *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ForElementType<FSetElementId> FVar10;
  int iVar11;
  bool *in_R9;
  TSparseSetElement<TTuple<UE::Cameras::FCameraDebugBlock_*,UE::Cameras::FCameraDebugBlockReader::FRelatedIndices>_>
  *pTVar12;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar1 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar6 * 0x30);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x30) = 0xffffffff;
    }
  }
  TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar6);
  if (local_38.Pointer ==
      (TSparseSetElement<TTuple<UE::Cameras::FCameraDebugBlock_*,UE::Cameras::FCameraDebugBlockReader::FRelatedIndices>_>
       *)0x0) {
    pTVar12 = (TSparseSetElement<TTuple<UE::Cameras::FCameraDebugBlock_*,UE::Cameras::FCameraDebugBlockReader::FRelatedIndices>_>
               *)0x0;
  }
  else {
    puVar4 = *(undefined8 **)(param_2 + 8);
    *(undefined8 *)local_38.Pointer = **(undefined8 **)param_2;
    *(undefined8 *)((longlong)local_38.Pointer + 8) = 0;
    *(undefined8 *)((longlong)local_38.Pointer + 8) = *puVar4;
    *puVar4 = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 0x10) = *(undefined4 *)(puVar4 + 1);
    *(undefined4 *)((longlong)local_38.Pointer + 0x14) = *(undefined4 *)((longlong)puVar4 + 0xc);
    puVar4[1] = 0;
    *(undefined8 *)((longlong)local_38.Pointer + 0x18) = 0;
    *(undefined8 *)((longlong)local_38.Pointer + 0x18) = puVar4[2];
    puVar4[2] = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 0x20) = *(undefined4 *)(puVar4 + 3);
    *(undefined4 *)((longlong)local_38.Pointer + 0x24) = *(undefined4 *)((longlong)puVar4 + 0x1c);
    puVar4[3] = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 0x28) = 0xffffffff;
    pTVar12 = local_38.Pointer;
  }
  local_res8[0] = local_38.Index;
  uVar7 = ((uint)(*(ulonglong *)pTVar12 >> 0x14) & 0xffff ^ (uint)(*(ulonglong *)pTVar12 >> 4)) *
          -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  uVar7 = uVar7 >> 0x10 ^ uVar7;
  bVar5 = TryReplaceExisting(this,uVar7,pTVar12,local_res8,in_R9);
  if (!bVar5) {
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
      uVar7 = this->HashSize - 1U & uVar7;
      *(uint *)&pTVar12->field_0x2c = uVar7;
      FVar10 = (this->Hash).SecondaryData;
      if (FVar10 == (ForElementType<FSetElementId>)0x0) {
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar7;
      *(undefined4 *)&pTVar12->field_0x28 = *(undefined4 *)((longlong)FVar10 + uVar8 * 4);
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

// Emplace<TPairInitializer<FCameraVariableID_const_&,int_&&>_> @ 14d580830

FSetElementId __thiscall
TSet<TTuple<FCameraVariableID,int>,TDefaultMapHashableKeyFuncs<FCameraVariableID,int,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FCameraVariableID_const_&,int_&&>_>
          (TSet<TTuple<FCameraVariableID,int>,TDefaultMapHashableKeyFuncs<FCameraVariableID,int,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FCameraVariableID_const_&,int_&&> *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined4 *puVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  uint uVar11;
  bool *in_R9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar1 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar6 * 0x10);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x10) = 0xffffffff;
    }
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar6);
  if (local_38.Pointer != (TSparseSetElement<TTuple<FCameraVariableID,int>_> *)0x0) {
    puVar4 = *(undefined4 **)(param_2 + 8);
    *(undefined4 *)local_38.Pointer = **(undefined4 **)param_2;
    *(undefined4 *)((longlong)local_38.Pointer + 4) = *puVar4;
    *(undefined4 *)((longlong)local_38.Pointer + 8) = 0xffffffff;
  }
  uVar11 = *(uint *)local_38.Pointer;
  local_res8[0] = local_38.Index;
  bVar5 = TryReplaceExisting(this,uVar11,local_38.Pointer,local_res8,in_R9);
  if (!bVar5) {
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
      uVar11 = this->HashSize - 1U & uVar11;
      *(uint *)((longlong)local_38.Pointer + 0xc) = uVar11;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar11;
      *(undefined4 *)((longlong)local_38.Pointer + 8) = *(undefined4 *)((longlong)FVar9 + uVar7 * 4)
      ;
      *(int *)((longlong)FVar9 + uVar7 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FCameraVariableID_const_&,TTuple<UE::Cameras::FCameraRigJoint,bool>_&&>_> @ 14d5809d0

FSetElementId __thiscall
TSet<TTuple<FCameraVariableID,TTuple<UE::Cameras::FCameraRigJoint,bool>_>,TDefaultMapHashableKeyFuncs<FCameraVariableID,TTuple<UE::Cameras::FCameraRigJoint,bool>,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FCameraVariableID_const_&,TTuple<UE::Cameras::FCameraRigJoint,bool>_&&>_>
          (TSet<TTuple<FCameraVariableID,TTuple<UE::Cameras::FCameraRigJoint,bool>_>,TDefaultMapHashableKeyFuncs<FCameraVariableID,TTuple<UE::Cameras::FCameraRigJoint,bool>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FCameraVariableID_const_&,TTuple<UE::Cameras::FCameraRigJoint,bool>_&&>
                 *param_1,bool *param_2)

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
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<FCameraVariableID,TTuple<UE::Cameras::FCameraRigJoint,bool>_>_> *)
      0x0) {
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

// Emplace<TPairInitializer<FName_const_&,unsigned_int_&&>_> @ 14d580ba0

FSetElementId __thiscall
TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FName_const_&,unsigned_int_&&>_>
          (TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FName_const_&,unsigned_int_&&> *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  bool *in_R9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar12 = 1;
  if (iVar1 == 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x14,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar7 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar7 * 0x14);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x14) = 0xffffffff;
    }
  }
  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar7);
  if (local_38.Pointer != (TSparseSetElement<TTuple<FName,unsigned_int>_> *)0x0) {
    puVar4 = *(undefined4 **)(param_2 + 8);
    *(undefined8 *)local_38.Pointer = **(undefined8 **)param_2;
    *(undefined4 *)((longlong)local_38.Pointer + 8) = *puVar4;
    *(undefined4 *)((longlong)local_38.Pointer + 0xc) = 0xffffffff;
  }
  uVar5 = *(undefined8 *)local_38.Pointer;
  local_res8[0] = local_38.Index;
  uVar8 = ::GetTypeHash((FNameEntryId)(uint)uVar5);
  uVar8 = (int)((ulonglong)uVar5 >> 0x20) + uVar8;
  bVar6 = TryReplaceExisting(this,uVar8,local_38.Pointer,local_res8,in_R9);
  if (!bVar6) {
    uVar10 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar10) {
      uVar9 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar10 < 1) || (iVar12 <= this->HashSize)) {
      uVar8 = this->HashSize - 1U & uVar8;
      *(uint *)((longlong)local_38.Pointer + 0x10) = uVar8;
      FVar11 = (this->Hash).SecondaryData;
      if (FVar11 == (ForElementType<FSetElementId>)0x0) {
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar9 = (longlong)this->HashSize - 1U & (longlong)(int)uVar8;
      *(undefined4 *)((longlong)local_38.Pointer + 0xc) =
           *(undefined4 *)((longlong)FVar11 + uVar9 * 4);
      *(int *)((longlong)FVar11 + uVar9 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar12;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FString_const_&,UE::Cameras::FCameraDebugColors_const_&>_> @ 14d580d50

FSetElementId __thiscall
TSet<TTuple<FString,UE::Cameras::FCameraDebugColors>,TDefaultMapHashableKeyFuncs<FString,UE::Cameras::FCameraDebugColors,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FString_const_&,UE::Cameras::FCameraDebugColors_const_&>_>
          (TSet<TTuple<FString,UE::Cameras::FCameraDebugColors>,TDefaultMapHashableKeyFuncs<FString,UE::Cameras::FCameraDebugColors,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FString_const_&,UE::Cameras::FCameraDebugColors_const_&> *param_1,
          bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 uVar5;
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
                      (0x48,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    iVar8 = iVar8 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar6 * 0x48);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x48) = 0xffffffff;
    }
  }
  TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar6);
  _Src = (FString *)0x0;
  iVar8 = 0;
  if (local_48.Pointer != (FString *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 8);
    ::FString::FString(local_48.Pointer,*(FString **)param_2);
    uVar5 = puVar3[1];
    (((FString *)((longlong)local_48.Pointer + 0x10))->Data).AllocatorInstance.Data =
         (FScriptContainerElement *)*puVar3;
    (((FString *)((longlong)local_48.Pointer + 0x10))->Data).ArrayNum = (int)uVar5;
    (((FString *)((longlong)local_48.Pointer + 0x10))->Data).ArrayMax =
         (int)((ulonglong)uVar5 >> 0x20);
    uVar5 = puVar3[3];
    (((FString *)((longlong)local_48.Pointer + 0x20))->Data).AllocatorInstance.Data =
         (FScriptContainerElement *)puVar3[2];
    (((FString *)((longlong)local_48.Pointer + 0x20))->Data).ArrayNum = (int)uVar5;
    (((FString *)((longlong)local_48.Pointer + 0x20))->Data).ArrayMax =
         (int)((ulonglong)uVar5 >> 0x20);
    (((FString *)((longlong)local_48.Pointer + 0x30))->Data).AllocatorInstance.Data =
         (FScriptContainerElement *)puVar3[4];
    (((FString *)((longlong)local_48.Pointer + 0x30))->Data).ArrayNum = *(int *)(puVar3 + 5);
    *(undefined4 *)&(((FString *)((longlong)local_48.Pointer + 0x40))->Data).AllocatorInstance.Data
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
      pvVar4 = *(void **)(lVar2 + (longlong)iVar8 * 0x48);
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
      memmove((void *)(lVar2 + (longlong)iVar8 * 0x48),_Src,0x40);
      TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
      *(uint *)((longlong)&_Src[4].Data.AllocatorInstance.Data + 4) = uVar7;
      FVar12 = (this->Hash).SecondaryData;
      if (FVar12 == (ForElementType<FSetElementId>)0x0) {
        FVar12 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar9 = (longlong)this->HashSize - 1U & (longlong)(int)uVar7;
      *(undefined4 *)&_Src[4].Data.AllocatorInstance.Data =
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

// EmplaceByHash<TPairInitializer<UE::Cameras::FCameraRigCombinationRegistry::FCameraRigCombinationKey_const_&,int_&&>_> @ 14d580f80

FSetElementId __thiscall
TSet<TTuple<UE::Cameras::FCameraRigCombinationRegistry::FCameraRigCombinationKey,int>,TDefaultMapHashableKeyFuncs<UE::Cameras::FCameraRigCombinationRegistry::FCameraRigCombinationKey,int,0>,FDefaultSetAllocator>
::
EmplaceByHash<TPairInitializer<UE::Cameras::FCameraRigCombinationRegistry::FCameraRigCombinationKey_const_&,int_&&>_>
          (TSet<TTuple<UE::Cameras::FCameraRigCombinationRegistry::FCameraRigCombinationKey,int>,TDefaultMapHashableKeyFuncs<UE::Cameras::FCameraRigCombinationRegistry::FCameraRigCombinationKey,int,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TPairInitializer<UE::Cameras::FCameraRigCombinationRegistry::FCameraRigCombinationKey_const_&,int_&&>
          *param_2,bool *param_3)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  undefined1 *puVar10;
  bool bVar11;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_48;
  
  iVar5 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
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
  puVar10 = &(this->Elements).field_0x8;
  TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer !=
      (TTuple<UE::Cameras::FCameraRigCombinationRegistry::FCameraRigCombinationKey,int> *)0x0) {
    TPairInitializer<UE::Cameras::FCameraRigCombinationRegistry::FCameraRigCombinationKey_const_&,int_&&>
    ::
    operator<UE::Cameras::FCameraRigCombinationRegistry::FCameraRigCombinationKey,int>_TTuple<UE::Cameras::FCameraRigCombinationRegistry::FCameraRigCombinationKey,int>
              ((TPairInitializer<UE::Cameras::FCameraRigCombinationRegistry::FCameraRigCombinationKey_const_&,int_&&>
                *)param_3,local_48.Pointer);
    *(undefined4 *)((longlong)local_48.Pointer + 0x40) = 0xffffffff;
  }
  bVar11 = false;
  if (*(int *)puVar10 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar5 = FindIndexByHash<UE::Cameras::FCameraRigCombinationRegistry::FCameraRigCombinationKey>
                      (this,(uint)param_2,local_48.Pointer);
    bVar11 = iVar5 != -1;
    if (bVar11) {
      lVar2 = *(longlong *)&this->Elements;
      pvVar3 = *(void **)(lVar2 + 0x20 + (longlong)iVar5 * 0x48);
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      memmove((void *)(lVar2 + (longlong)iVar5 * 0x48),local_48.Pointer,0x40);
      TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      local_48.Index = iVar5;
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar11;
  }
  if (bVar11 == false) {
    uVar7 = *(int *)puVar10 - *(int *)&(this->Elements).field_0x34;
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
      uVar7 = this->HashSize - 1U & (uint)param_2;
      *(uint *)&((TTuple<UE::Cameras::FCameraRigCombinationRegistry::FCameraRigCombinationKey,int> *
                 )((longlong)local_48.Pointer + 0x40))->field_0x4 = uVar7;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar7;
      *(undefined4 *)((longlong)local_48.Pointer + 0x40) =
           *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
      *(int *)((longlong)FVar8 + uVar6 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_48.Index;
  return (FSetElementId)param_1;
}

// FindIndexByHash<UE::Cameras::FCameraRigCombinationRegistry::FCameraRigCombinationKey> @ 14d581460

int __thiscall
TSet<TTuple<UE::Cameras::FCameraRigCombinationRegistry::FCameraRigCombinationKey,int>,TDefaultMapHashableKeyFuncs<UE::Cameras::FCameraRigCombinationRegistry::FCameraRigCombinationKey,int,0>,FDefaultSetAllocator>
::FindIndexByHash<UE::Cameras::FCameraRigCombinationRegistry::FCameraRigCombinationKey>
          (TSet<TTuple<UE::Cameras::FCameraRigCombinationRegistry::FCameraRigCombinationKey,int>,TDefaultMapHashableKeyFuncs<UE::Cameras::FCameraRigCombinationRegistry::FCameraRigCombinationKey,int,0>,FDefaultSetAllocator>
           *this,uint param_1,FCameraRigCombinationKey *param_2)

{
  int iVar1;
  int iVar2;
  ForElementType<TWeakObjectPtr<UCameraRigAsset_const_,FWeakObjectPtr>_> FVar3;
  bool bVar4;
  FWeakObjectPtr FVar5;
  ForElementType<TWeakObjectPtr<UCameraRigAsset_const_,FWeakObjectPtr>_> FVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar1 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
        iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x48 + 0x40 + *(longlong *)&this->Elements))
    {
      FVar5 = (FWeakObjectPtr)(*(longlong *)&this->Elements + (longlong)iVar1 * 0x48);
      iVar2 = (((TWeakObjectPtr<UCameraRigAsset_const_,FWeakObjectPtr> *)((longlong)FVar5 + 0x28))->
              WeakPtr).ObjectIndex;
      if (iVar2 == (param_2->Combination).ArrayNum) {
        FVar3 = (param_2->Combination).AllocatorInstance.SecondaryData;
        FVar6 = (ForElementType<TWeakObjectPtr<UCameraRigAsset_const_,FWeakObjectPtr>_>)param_2;
        if (FVar3 != (ForElementType<TWeakObjectPtr<UCameraRigAsset_const_,FWeakObjectPtr>_>)0x0) {
          FVar6 = FVar3;
        }
        if (*(FWeakObjectPtr *)((longlong)FVar5 + 0x20) != (FWeakObjectPtr)0x0) {
          FVar5 = *(FWeakObjectPtr *)((longlong)FVar5 + 0x20);
        }
        bVar4 = CompareItems<TWeakObjectPtr<UCameraRigAsset_const_,FWeakObjectPtr>,int>
                          ((TWeakObjectPtr<UCameraRigAsset_const_,FWeakObjectPtr> *)FVar5,
                           (TWeakObjectPtr<UCameraRigAsset_const_,FWeakObjectPtr> *)FVar6,iVar2);
        if (bVar4) {
          return iVar1;
        }
      }
    }
  }
  return -1;
}

// FindIndexByHash<FString> @ 14d581530

int __thiscall
TSet<TTuple<FString,FColor>,TDefaultMapHashableKeyFuncs<FString,FColor,0>,FDefaultSetAllocator>::
FindIndexByHash<FString>
          (TSet<TTuple<FString,FColor>,TDefaultMapHashableKeyFuncs<FString,FColor,0>,FDefaultSetAllocator>
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
      lVar4 = (longlong)iVar1 * 0x20;
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
      iVar1 = *(int *)(lVar4 + 0x18 + *(longlong *)&this->Elements);
    }
  }
  return -1;
}

// FindIndexByHash<FString> @ 14d5815f0

int __thiscall
TSet<TTuple<FString,UE::Cameras::FCameraDebugColors>,TDefaultMapHashableKeyFuncs<FString,UE::Cameras::FCameraDebugColors,0>,FDefaultSetAllocator>
::FindIndexByHash<FString>
          (TSet<TTuple<FString,UE::Cameras::FCameraDebugColors>,TDefaultMapHashableKeyFuncs<FString,UE::Cameras::FCameraDebugColors,0>,FDefaultSetAllocator>
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

// Move<TSet<TTuple<FCameraVariableID,int>,TDefaultMapHashableKeyFuncs<FCameraVariableID,int,0>,FDefaultSetAllocator>_> @ 14d586ff0

void __cdecl
TSet<TTuple<FCameraVariableID,int>,TDefaultMapHashableKeyFuncs<FCameraVariableID,int,0>,FDefaultSetAllocator>
::
Move<TSet<TTuple<FCameraVariableID,int>,TDefaultMapHashableKeyFuncs<FCameraVariableID,int,0>,FDefaultSetAllocator>_>
          (TSet<TTuple<FCameraVariableID,int>,TDefaultMapHashableKeyFuncs<FCameraVariableID,int,0>,FDefaultSetAllocator>
           *param_1,
          TSet<TTuple<FCameraVariableID,int>,TDefaultMapHashableKeyFuncs<FCameraVariableID,int,0>,FDefaultSetAllocator>
          *param_2)

{
  undefined1 *_Src;
  undefined1 *_Dst;
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  
  if (param_1 != param_2) {
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

// RemoveImpl<UE::Cameras::FCameraDebugBlock_const_*> @ 14d5882b0

int __thiscall
TSet<TTuple<UE::Cameras::FCameraDebugBlock_*,int>,TDefaultMapHashableKeyFuncs<UE::Cameras::FCameraDebugBlock_*,int,0>,FDefaultSetAllocator>
::RemoveImpl<UE::Cameras::FCameraDebugBlock_const_*>
          (TSet<TTuple<UE::Cameras::FCameraDebugBlock_*,int>,TDefaultMapHashableKeyFuncs<UE::Cameras::FCameraDebugBlock_*,int,0>,FDefaultSetAllocator>
           *this,uint param_1,FCameraDebugBlock **param_2)

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
  while (lVar7 = (longlong)(int)uVar6 * 0x18,
        *(FCameraDebugBlock **)(lVar7 + *(longlong *)&this->Elements) != *param_2) {
    uVar6 = *(uint *)(lVar7 + 0x10 + *(longlong *)&this->Elements);
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
         (uVar6 & 0x1f) & 1) != 0) goto LAB_14d588397;
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
LAB_14d588397:
  FVar5 = (this->Hash).SecondaryData;
  lVar7 = *(longlong *)&this->Elements + lVar7;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar8 = (uint *)((longlong)FVar5 + (longlong)*(int *)(lVar7 + 0x14) * 4);
  while( true ) {
    uVar1 = *puVar8;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == uVar6) {
      *puVar8 = *(uint *)(lVar7 + 0x10);
      TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar6,1);
      return 1;
    }
    puVar8 = (uint *)(*(longlong *)&this->Elements + (longlong)(int)uVar1 * 0x18 + 0x10);
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

// Rehash @ 14d5c9cf0

void __thiscall
TSet<TTuple<UE::Cameras::FCameraDebugBlock_*,int>,TDefaultMapHashableKeyFuncs<UE::Cameras::FCameraDebugBlock_*,int,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<UE::Cameras::FCameraDebugBlock_*,int>,TDefaultMapHashableKeyFuncs<UE::Cameras::FCameraDebugBlock_*,int,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
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
      uVar4 = *puVar8;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14d5c9dcc;
        uVar4 = puVar8[lVar5 + 1];
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
LAB_14d5c9dcc:
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
        lVar5 = *(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x18;
        uVar6 = *(ulonglong *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x18);
        uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = (uVar4 >> 0x10 ^ uVar4) & *piVar1 - 1U;
        *(uint *)(lVar5 + 0x14) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(lVar5 + 0x10) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14d5c9eb0

void __thiscall
TSet<TTuple<UE::Cameras::FCameraDebugBlock_*,UE::Cameras::FCameraDebugBlockReader::FRelatedIndices>,TDefaultMapHashableKeyFuncs<UE::Cameras::FCameraDebugBlock_*,UE::Cameras::FCameraDebugBlockReader::FRelatedIndices,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<UE::Cameras::FCameraDebugBlock_*,UE::Cameras::FCameraDebugBlockReader::FRelatedIndices>,TDefaultMapHashableKeyFuncs<UE::Cameras::FCameraDebugBlock_*,UE::Cameras::FCameraDebugBlockReader::FRelatedIndices,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  ulonglong *puVar8;
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14d5c9f8c;
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
LAB_14d5c9f8c:
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
        puVar8 = (ulonglong *)
                 ((longlong)local_30.CurrentBitIndex * 0x30 + *(longlong *)&this->Elements);
        uVar4 = ((uint)(*puVar8 >> 0x14) & 0xffff ^ (uint)(*puVar8 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = (uVar4 >> 0x10 ^ uVar4) & *piVar1 - 1U;
        *(uint *)((longlong)puVar8 + 0x2c) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar8 + 5) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14d5ca070

void __thiscall
TSet<TTuple<UE::Cameras::FCameraRigCombinationRegistry::FCameraRigCombinationKey,int>,TDefaultMapHashableKeyFuncs<UE::Cameras::FCameraRigCombinationRegistry::FCameraRigCombinationKey,int,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<UE::Cameras::FCameraRigCombinationRegistry::FCameraRigCombinationKey,int>,TDefaultMapHashableKeyFuncs<UE::Cameras::FCameraRigCombinationRegistry::FCameraRigCombinationKey,int,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14d5ca14c;
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
LAB_14d5ca14c:
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
                *(uint *)(*(longlong *)&this->Elements + 0x30 +
                         (longlong)local_30.CurrentBitIndex * 0x48);
        lVar4 = *(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x48;
        *(uint *)(lVar4 + 0x44) = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(lVar4 + 0x40) = *(undefined4 *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14d5ca210

void __thiscall
TSet<TTuple<FCameraVariableID,int>,TDefaultMapHashableKeyFuncs<FCameraVariableID,int,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FCameraVariableID,int>,TDefaultMapHashableKeyFuncs<FCameraVariableID,int,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14d5ca2ec;
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
LAB_14d5ca2ec:
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
        puVar8 = (uint *)((longlong)local_30.CurrentBitIndex * 0x10 + *(longlong *)&this->Elements);
        uVar7 = *piVar1 - 1U & *puVar8;
        puVar8[3] = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        puVar8[2] = *(uint *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14d5ca3a0

void __thiscall
TSet<TTuple<FCameraVariableID,TTuple<UE::Cameras::FCameraRigJoint,bool>_>,TDefaultMapHashableKeyFuncs<FCameraVariableID,TTuple<UE::Cameras::FCameraRigJoint,bool>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FCameraVariableID,TTuple<UE::Cameras::FCameraRigJoint,bool>_>,TDefaultMapHashableKeyFuncs<FCameraVariableID,TTuple<UE::Cameras::FCameraRigJoint,bool>,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14d5ca47c;
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
LAB_14d5ca47c:
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

// Rehash @ 14d5ca540

void __thiscall
TSet<TTuple<FName,UE::Cameras::FCameraNodeEvaluatorHierarchy::FTaggedRange>,TDefaultMapHashableKeyFuncs<FName,UE::Cameras::FCameraNodeEvaluatorHierarchy::FTaggedRange,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FName,UE::Cameras::FCameraNodeEvaluatorHierarchy::FTaggedRange>,TDefaultMapHashableKeyFuncs<FName,UE::Cameras::FCameraNodeEvaluatorHierarchy::FTaggedRange,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14d5ca617;
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
LAB_14d5ca617:
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
                 (*(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x18);
        lVar6 = *(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x18;
        uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar5 = *piVar1 - 1U & uVar5 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)(lVar6 + 0x14) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(lVar6 + 0x10) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14d5ca6f0

void __thiscall
TSet<TTuple<FString,FColor>,TDefaultMapHashableKeyFuncs<FString,FColor,0>,FDefaultSetAllocator>::
Rehash(TSet<TTuple<FString,FColor>,TDefaultMapHashableKeyFuncs<FString,FColor,0>,FDefaultSetAllocator>
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
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14d5ca7c7;
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
LAB_14d5ca7c7:
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
                  (*(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x20);
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
        *(uint *)((longlong)puVar10 + 0x1c) = uVar4;
        FVar2 = (this->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar2;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar10 + 3) = *(undefined4 *)((longlong)FVar9 + uVar6 * 4);
        *(int *)((longlong)FVar9 + uVar6 * 4) = iVar3;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14d5ca8a0

void __thiscall
TSet<TTuple<FString,UE::Cameras::FCameraDebugColors>,TDefaultMapHashableKeyFuncs<FString,UE::Cameras::FCameraDebugColors,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FString,UE::Cameras::FCameraDebugColors>,TDefaultMapHashableKeyFuncs<FString,UE::Cameras::FCameraDebugColors,0>,FDefaultSetAllocator>
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
        if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14d5ca977;
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
LAB_14d5ca977:
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

// Rehash @ 14d5caa50

void __thiscall
TSet<FCameraVariableID,DefaultKeyFuncs<FCameraVariableID,0>,FDefaultSetAllocator>::Rehash
          (TSet<FCameraVariableID,DefaultKeyFuncs<FCameraVariableID,0>,FDefaultSetAllocator> *this)

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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14d5cab2c;
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
LAB_14d5cab2c:
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

// RehashOrLink @ 14d5cabf0

void __thiscall
TSet<TTuple<UE::Cameras::FCameraDebugBlock_*,int>,TDefaultMapHashableKeyFuncs<UE::Cameras::FCameraDebugBlock_*,int,0>,FDefaultSetAllocator>
::RehashOrLink(TSet<TTuple<UE::Cameras::FCameraDebugBlock_*,int>,TDefaultMapHashableKeyFuncs<UE::Cameras::FCameraDebugBlock_*,int,0>,FDefaultSetAllocator>
               *this,uint param_1,
              TSparseSetElement<TTuple<UE::Cameras::FCameraDebugBlock_*,int>_> *param_2,int param_3)

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
  *(uint *)&param_2->field_0x14 = uVar5;
  FVar4 = (this->Hash).SecondaryData;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar3 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
  *(undefined4 *)&param_2->field_0x10 = *(undefined4 *)((longlong)FVar4 + uVar3 * 4);
  *(int *)((longlong)FVar4 + uVar3 * 4) = param_3;
  return;
}

// Reset @ 14d5cbb10

void __thiscall
TSet<TTuple<FCameraVariableID,int>,TDefaultMapHashableKeyFuncs<FCameraVariableID,int,0>,FDefaultSetAllocator>
::Reset(TSet<TTuple<FCameraVariableID,int>,TDefaultMapHashableKeyFuncs<FCameraVariableID,int,0>,FDefaultSetAllocator>
        *this)

{
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    UnhashElements(this);
    *(undefined4 *)&(this->Elements).field_0x8 = 0;
    if (*(int *)&(this->Elements).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)this,0,(int *)&(this->Elements).field_0xc);
    }
    *(undefined4 *)&(this->Elements).field_0x34 = 0;
    *(undefined4 *)&(this->Elements).field_0x28 = 0;
    *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  }
  return;
}

// Reset @ 14d5cbb80

void __thiscall
TSet<TTuple<FString,FColor>,TDefaultMapHashableKeyFuncs<FString,FColor,0>,FDefaultSetAllocator>::
Reset(TSet<TTuple<FString,FColor>,TDefaultMapHashableKeyFuncs<FString,FColor,0>,FDefaultSetAllocator>
      *this)

{
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    UnhashElements(this);
    TSparseArray<TSparseSetElement<TTuple<FString,FColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&this->Elements,0,*(int *)&(this->Elements).field_0x8);
    *(undefined4 *)&(this->Elements).field_0x8 = 0;
    if (*(int *)&(this->Elements).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)this,0,(int *)&(this->Elements).field_0xc);
    }
    *(undefined4 *)&(this->Elements).field_0x34 = 0;
    *(undefined4 *)&(this->Elements).field_0x28 = 0;
    *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  }
  return;
}

// TryReplaceExisting @ 14d5d15c0

bool __thiscall
TSet<TTuple<UE::Cameras::FCameraDebugBlock_*,UE::Cameras::FCameraDebugBlockReader::FRelatedIndices>,TDefaultMapHashableKeyFuncs<UE::Cameras::FCameraDebugBlock_*,UE::Cameras::FCameraDebugBlockReader::FRelatedIndices,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<UE::Cameras::FCameraDebugBlock_*,UE::Cameras::FCameraDebugBlockReader::FRelatedIndices>,TDefaultMapHashableKeyFuncs<UE::Cameras::FCameraDebugBlock_*,UE::Cameras::FCameraDebugBlockReader::FRelatedIndices,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<UE::Cameras::FCameraDebugBlock_*,UE::Cameras::FCameraDebugBlockReader::FRelatedIndices>_>
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
  undefined4 uVar9;
  undefined1 *puVar10;
  undefined4 *puVar11;
  ForElementType<FSetElementId> FVar12;
  int iVar13;
  void *_Dst;
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
        if (*(longlong *)(lVar4 + (longlong)iVar13 * 0x30) == *(longlong *)param_2) {
          bVar15 = iVar13 != -1;
          if (bVar15) {
            _Dst = (void *)((longlong)iVar13 * 0x30 + lVar4);
            if (*(void **)((longlong)_Dst + 0x18) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x18));
            }
            if (*(void **)((longlong)_Dst + 8) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 8));
            }
            memmove(_Dst,param_2,0x28);
            iVar3 = *param_3;
            puVar1 = &(this->Elements).field_0x10;
            lVar4 = *(longlong *)&this->Elements;
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
              *(int *)(lVar4 + (longlong)*(int *)&(this->Elements).field_0x30 * 0x30) = iVar3;
            }
            uVar9 = 0xffffffff;
            puVar11 = (undefined4 *)((longlong)iVar3 * 0x30 + lVar4);
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
        iVar13 = *(int *)(lVar4 + 0x28 + (longlong)iVar13 * 0x30);
      } while (iVar13 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar15;
  }
  return bVar15;
}

// TryReplaceExisting @ 14d5d1810

bool __thiscall
TSet<TTuple<FCameraVariableID,int>,TDefaultMapHashableKeyFuncs<FCameraVariableID,int,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FCameraVariableID,int>,TDefaultMapHashableKeyFuncs<FCameraVariableID,int,0>,FDefaultSetAllocator>
           *this,uint param_1,TSparseSetElement<TTuple<FCameraVariableID,int>_> *param_2,
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
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  
  iVar12 = *(int *)&(this->Elements).field_0x8;
  bVar14 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  if ((iVar12 - iVar3 != 1) && (iVar12 != iVar3)) {
    FVar11 = (this->Hash).SecondaryData;
    if (FVar11 == (ForElementType<FSetElementId>)0x0) {
      FVar11 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar12 = *(int *)((longlong)FVar11 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar12 != -1) {
      do {
        if (*(int *)(*(longlong *)&this->Elements + (longlong)iVar12 * 0x10) == *(int *)param_2) {
          bVar14 = iVar12 != -1;
          if (bVar14) {
            puVar1 = &(this->Elements).field_0x10;
            *(undefined8 *)(*(longlong *)&this->Elements + (longlong)iVar12 * 0x10) =
                 *(undefined8 *)param_2;
            iVar3 = *param_3;
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
            puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
            lVar2 = (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4;
            if (puVar10 == (undefined1 *)0x0) {
              puVar10 = puVar1;
            }
            if (((*(uint *)(puVar10 + lVar2) & uVar13) == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            if (*(int *)&(this->Elements).field_0x34 != 0) {
              *(int *)(lVar4 + (longlong)*(int *)&(this->Elements).field_0x30 * 0x10) = iVar3;
            }
            uVar9 = 0xffffffff;
            *(undefined4 *)(lVar4 + (longlong)iVar3 * 0x10) = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0x34) {
              uVar9 = *(undefined4 *)&(this->Elements).field_0x30;
            }
            *(undefined4 *)(lVar4 + 4 + (longlong)iVar3 * 0x10) = uVar9;
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
            *(uint *)(puVar10 + lVar2) = *(uint *)(puVar10 + lVar2) & ~uVar13;
            *param_3 = iVar12;
          }
          break;
        }
        iVar12 = *(int *)(*(longlong *)&this->Elements + 8 + (longlong)iVar12 * 0x10);
      } while (iVar12 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar14;
  }
  return bVar14;
}

// TryReplaceExisting @ 14d5d1a20

bool __thiscall
TSet<TTuple<FCameraVariableID,TTuple<UE::Cameras::FCameraRigJoint,bool>_>,TDefaultMapHashableKeyFuncs<FCameraVariableID,TTuple<UE::Cameras::FCameraRigJoint,bool>,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FCameraVariableID,TTuple<UE::Cameras::FCameraRigJoint,bool>_>,TDefaultMapHashableKeyFuncs<FCameraVariableID,TTuple<UE::Cameras::FCameraRigJoint,bool>,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<FCameraVariableID,TTuple<UE::Cameras::FCameraRigJoint,bool>_>_>
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

// TryReplaceExisting @ 14d5d1c60

bool __thiscall
TSet<TTuple<FName,UE::Cameras::FCameraNodeEvaluatorHierarchy::FTaggedRange>,TDefaultMapHashableKeyFuncs<FName,UE::Cameras::FCameraNodeEvaluatorHierarchy::FTaggedRange,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FName,UE::Cameras::FCameraNodeEvaluatorHierarchy::FTaggedRange>,TDefaultMapHashableKeyFuncs<FName,UE::Cameras::FCameraNodeEvaluatorHierarchy::FTaggedRange,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<FName,UE::Cameras::FCameraNodeEvaluatorHierarchy::FTaggedRange>_>
          *param_2,int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  byte bVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  int iVar12;
  ForElementType<FSetElementId> FVar13;
  uint uVar14;
  bool bVar15;
  
  bVar15 = false;
  iVar12 = *(int *)&(this->Elements).field_0x8;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  if ((iVar12 - iVar4 != 1) && (iVar12 != iVar4)) {
    FVar13 = (this->Hash).SecondaryData;
    if (FVar13 == (ForElementType<FSetElementId>)0x0) {
      FVar13 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar12 = *(int *)((longlong)FVar13 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar12 != -1) {
      lVar5 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)(lVar5 + (longlong)iVar12 * 0x18) == *(longlong *)param_2) {
          bVar15 = iVar12 != -1;
          if (bVar15) {
            memmove((void *)(lVar5 + (longlong)iVar12 * 0x18),param_2,0x10);
            iVar4 = *param_3;
            lVar5 = *(longlong *)&this->Elements;
            puVar1 = &(this->Elements).field_0x10;
            bVar7 = (byte)iVar4 & 0x1f;
            uVar14 = 1 << bVar7 | 1U >> 0x20 - bVar7;
            if (((iVar4 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar4)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
            lVar3 = (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4;
            if (puVar11 == (undefined1 *)0x0) {
              puVar11 = puVar1;
            }
            if (((*(uint *)(puVar11 + lVar3) & uVar14) == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            if (*(int *)&(this->Elements).field_0x34 != 0) {
              *(int *)(lVar5 + (longlong)*(int *)&(this->Elements).field_0x30 * 0x18) = iVar4;
            }
            puVar2 = (undefined4 *)(lVar5 + (longlong)iVar4 * 0x18);
            uVar10 = 0xffffffff;
            *puVar2 = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0x34) {
              uVar10 = *(undefined4 *)&(this->Elements).field_0x30;
            }
            puVar2[1] = uVar10;
            puVar11 = &(this->Elements).field_0x34;
            *(int *)puVar11 = *(int *)puVar11 + 1;
            *(int *)&(this->Elements).field_0x30 = iVar4;
            if (((iVar4 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar4)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
            if (puVar11 == (undefined1 *)0x0) {
              puVar11 = puVar1;
            }
            *(uint *)(puVar11 + lVar3) = *(uint *)(puVar11 + lVar3) & ~uVar14;
            *param_3 = iVar12;
          }
          break;
        }
        iVar12 = *(int *)(lVar5 + 0x10 + (longlong)iVar12 * 0x18);
      } while (iVar12 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar15;
  }
  return bVar15;
}

// TryReplaceExisting @ 14d5d1e90

bool __thiscall
TSet<TTuple<FString,FColor>,TDefaultMapHashableKeyFuncs<FString,FColor,0>,FDefaultSetAllocator>::
TryReplaceExisting(TSet<TTuple<FString,FColor>,TDefaultMapHashableKeyFuncs<FString,FColor,0>,FDefaultSetAllocator>
                   *this,uint param_1,TSparseSetElement<TTuple<FString,FColor>_> *param_2,
                  int *param_3,bool *param_4)

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
  undefined1 *puVar12;
  undefined8 *_Dst;
  uint uVar13;
  bool bVar14;
  
  bVar14 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar10 = FindIndexByHash<FString>(this,param_1,(FString *)param_2);
    bVar14 = iVar10 != -1;
    if (bVar14) {
      _Dst = (undefined8 *)((longlong)iVar10 * 0x20 + *(longlong *)&this->Elements);
      pvVar4 = (void *)*_Dst;
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
      memmove(_Dst,param_2,0x18);
      iVar3 = *param_3;
      puVar1 = &(this->Elements).field_0x10;
      lVar5 = *(longlong *)&this->Elements;
      bVar7 = (byte)iVar3 & 0x1f;
      uVar13 = 1 << bVar7 | 1U >> 0x20 - bVar7;
      if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
      lVar2 = (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = puVar1;
      }
      if (((*(uint *)(puVar12 + lVar2) & uVar13) == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      if (*(int *)&(this->Elements).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(this->Elements).field_0x30 * 0x20 + lVar5) = iVar3;
      }
      uVar11 = 0xffffffff;
      *(undefined4 *)((longlong)iVar3 * 0x20 + lVar5) = 0xffffffff;
      if (0 < *(int *)&(this->Elements).field_0x34) {
        uVar11 = *(undefined4 *)&(this->Elements).field_0x30;
      }
      *(undefined4 *)((longlong)iVar3 * 0x20 + 4 + lVar5) = uVar11;
      puVar12 = &(this->Elements).field_0x34;
      *(int *)puVar12 = *(int *)puVar12 + 1;
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
      puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = puVar1;
      }
      *(uint *)(puVar12 + lVar2) = *(uint *)(puVar12 + lVar2) & ~uVar13;
      *param_3 = iVar10;
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar14;
  }
  return bVar14;
}

// TryReplaceExisting @ 14d5d2080

bool __thiscall
TSet<FCameraVariableID,DefaultKeyFuncs<FCameraVariableID,0>,FDefaultSetAllocator>::
TryReplaceExisting(TSet<FCameraVariableID,DefaultKeyFuncs<FCameraVariableID,0>,FDefaultSetAllocator>
                   *this,uint param_1,TSparseSetElement<FCameraVariableID> *param_2,int *param_3,
                  bool *param_4)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  byte bVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  ForElementType<FSetElementId> FVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  
  iVar13 = *(int *)&(this->Elements).field_0x8;
  bVar15 = false;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  if ((iVar13 - iVar4 != 1) && (iVar13 != iVar4)) {
    FVar12 = (this->Hash).SecondaryData;
    if (FVar12 == (ForElementType<FSetElementId>)0x0) {
      FVar12 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar13 = *(int *)((longlong)FVar12 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar13 != -1) {
      lVar5 = *(longlong *)&this->Elements;
      do {
        if (*(int *)(lVar5 + (longlong)iVar13 * 0xc) == *(int *)param_2) {
          bVar15 = iVar13 != -1;
          if (bVar15) {
            puVar1 = &(this->Elements).field_0x10;
            *(undefined4 *)(lVar5 + (longlong)iVar13 * 0xc) = *(undefined4 *)param_2;
            iVar4 = *param_3;
            lVar5 = *(longlong *)&this->Elements;
            bVar7 = (byte)iVar4 & 0x1f;
            uVar14 = 1 << bVar7 | 1U >> 0x20 - bVar7;
            if (((iVar4 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar4)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
            lVar3 = (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4;
            if (puVar11 == (undefined1 *)0x0) {
              puVar11 = puVar1;
            }
            if (((*(uint *)(puVar11 + lVar3) & uVar14) == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            if (*(int *)&(this->Elements).field_0x34 != 0) {
              *(int *)(lVar5 + (longlong)*(int *)&(this->Elements).field_0x30 * 0xc) = iVar4;
            }
            puVar2 = (undefined4 *)(lVar5 + (longlong)iVar4 * 0xc);
            uVar10 = 0xffffffff;
            *puVar2 = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0x34) {
              uVar10 = *(undefined4 *)&(this->Elements).field_0x30;
            }
            puVar2[1] = uVar10;
            puVar11 = &(this->Elements).field_0x34;
            *(int *)puVar11 = *(int *)puVar11 + 1;
            *(int *)&(this->Elements).field_0x30 = iVar4;
            if (((iVar4 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar4)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
            if (puVar11 == (undefined1 *)0x0) {
              puVar11 = puVar1;
            }
            *(uint *)(puVar11 + lVar3) = *(uint *)(puVar11 + lVar3) & ~uVar14;
            *param_3 = iVar13;
          }
          break;
        }
        iVar13 = *(int *)(lVar5 + 4 + (longlong)iVar13 * 0xc);
      } while (iVar13 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar15;
  }
  return bVar15;
}

// UnhashElements @ 14d5d2370

void __thiscall
TSet<TTuple<FCameraVariableID,int>,TDefaultMapHashableKeyFuncs<FCameraVariableID,int,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<FCameraVariableID,int>,TDefaultMapHashableKeyFuncs<FCameraVariableID,int,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14d5d246b;
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
LAB_14d5d246b:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14d5d2560;
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
LAB_14d5d2560:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<FCameraVariableID,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// UnhashElements @ 14d5d2600

void __thiscall
TSet<TTuple<FString,FColor>,TDefaultMapHashableKeyFuncs<FString,FColor,0>,FDefaultSetAllocator>::
UnhashElements(TSet<TTuple<FString,FColor>,TDefaultMapHashableKeyFuncs<FString,FColor,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14d5d26fb;
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
LAB_14d5d26fb:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14d5d27f0;
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
LAB_14d5d27f0:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)((longlong)local_60.CurrentBitIndex * 0x20 + 0x1c + *(longlong *)&this->Elements) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// Emplace<UStaticMeshComponent_*_const_&> @ 14d5eeab0

FSetElementId __thiscall
TSet<UStaticMeshComponent_*,DefaultKeyFuncs<UStaticMeshComponent_*,0>,FDefaultSetAllocator>::
Emplace<UStaticMeshComponent_*_const_&>
          (TSet<UStaticMeshComponent_*,DefaultKeyFuncs<UStaticMeshComponent_*,0>,FDefaultSetAllocator>
           *this,UStaticMeshComponent **param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  int iVar9;
  char *in_R9;
  undefined1 *puVar10;
  bool bVar11;
  FSparseArrayAllocationInfo local_48;
  
  iVar9 = *(int *)&(this->Elements).field_0x34;
  iVar8 = 1;
  if (iVar9 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar3 * 0x10);
    iVar9 = iVar9 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x10) = 0xffffffff;
    }
  }
  puVar10 = &(this->Elements).field_0x8;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar3);
  if (local_48.Pointer != (ulonglong *)0x0) {
    *(ulonglong *)local_48.Pointer = *(ulonglong *)param_2;
    *(undefined4 *)((longlong)local_48.Pointer + 8) = 0xffffffff;
  }
  uVar5 = *(ulonglong *)local_48.Pointer;
  bVar11 = false;
  uVar4 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar9 = *(int *)puVar10;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  if ((iVar9 - iVar3 != 1) && (iVar9 != iVar3)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar9 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar4) * 4);
    if (iVar9 != -1) {
      do {
        if (*(ulonglong *)(*(longlong *)&this->Elements + (longlong)iVar9 * 0x10) == uVar5) {
          bVar11 = iVar9 != -1;
          if (bVar11) {
            *(ulonglong *)(*(longlong *)&this->Elements + (longlong)iVar9 * 0x10) = uVar5;
            TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar9;
          }
          break;
        }
        iVar9 = *(int *)(*(longlong *)&this->Elements + 8 + (longlong)iVar9 * 0x10);
      } while (iVar9 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar11;
  }
  if (bVar11 == false) {
    uVar6 = *(int *)puVar10 - *(int *)&(this->Elements).field_0x34;
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
      uVar4 = this->HashSize - 1U & uVar4;
      *(uint *)((longlong)local_48.Pointer + 0xc) = uVar4;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar4;
      *(undefined4 *)((longlong)local_48.Pointer + 8) = *(undefined4 *)((longlong)FVar7 + uVar5 * 4)
      ;
      *(int *)((longlong)FVar7 + uVar5 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar8;
      Rehash(this);
    }
  }
  *(int *)param_1 = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>_> @ 14d5eefc0

FSetElementId __thiscall
TSet<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
::Emplace<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>_>
          (TSet<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
           *this,TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr> *param_1,bool *param_2)

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
                      (0x10,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar5 * 0x10);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x10) = 0xffffffff;
    }
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar5);
  if (local_38.Pointer !=
      (TSparseSetElement<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>_> *)0x0) {
    *(undefined8 *)local_38.Pointer = *(undefined8 *)param_2;
    *(undefined4 *)((longlong)local_38.Pointer + 8) = 0xffffffff;
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
      *(uint *)((longlong)local_38.Pointer + 0xc) = uVar9;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar9;
      *(undefined4 *)((longlong)local_38.Pointer + 8) = *(undefined4 *)((longlong)FVar8 + uVar6 * 4)
      ;
      *(int *)((longlong)FVar8 + uVar6 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  (param_1->WeakPtr).ObjectIndex = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// Emplace<TKeyInitializer<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>_&&>_> @ 14d5ef160

FSetElementId __thiscall
TSet<TTuple<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,UE::Cameras::FOcclusionMaterialOverrideInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,UE::Cameras::FOcclusionMaterialOverrideInfo,0>,FDefaultSetAllocator>
::Emplace<TKeyInitializer<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>_&&>_>
          (TSet<TTuple<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,UE::Cameras::FOcclusionMaterialOverrideInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,UE::Cameras::FOcclusionMaterialOverrideInfo,0>,FDefaultSetAllocator>
           *this,TKeyInitializer<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>_&&> *param_1,
          bool *param_2)

{
  int iVar1;
  longlong lVar2;
  FWeakObjectPtr FVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  FWeakObjectPtr *_Src;
  char *in_R9;
  uint uVar10;
  bool bVar11;
  FWeakObjectPtr local_res8;
  FSparseArrayAllocationInfo local_48;
  
  iVar5 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar5 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar5 = iVar5 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x30);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x30) = 0xffffffff;
    }
  }
  TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer == (FWeakObjectPtr *)0x0) {
    _Src = (FWeakObjectPtr *)0x0;
  }
  else {
    *(FWeakObjectPtr *)local_48.Pointer = **(FWeakObjectPtr **)param_2;
    ((FWeakObjectPtr *)((longlong)local_48.Pointer + 8))->ObjectIndex = 0;
    ((FWeakObjectPtr *)((longlong)local_48.Pointer + 8))->ObjectSerialNumber = 0;
    ((FWeakObjectPtr *)((longlong)local_48.Pointer + 0x10))->ObjectIndex = 0;
    ((FWeakObjectPtr *)((longlong)local_48.Pointer + 0x10))->ObjectSerialNumber = 0;
    ((FWeakObjectPtr *)((longlong)local_48.Pointer + 0x18))->ObjectIndex = 0;
    ((FWeakObjectPtr *)((longlong)local_48.Pointer + 0x18))->ObjectSerialNumber = 0;
    ((FWeakObjectPtr *)((longlong)local_48.Pointer + 0x20))->ObjectIndex = 0;
    ((FWeakObjectPtr *)((longlong)local_48.Pointer + 0x20))->ObjectSerialNumber = 0;
    ((FWeakObjectPtr *)((longlong)local_48.Pointer + 0x28))->ObjectIndex = -1;
    _Src = local_48.Pointer;
  }
  FVar3 = *_Src;
  bVar11 = false;
  uVar10 = FVar3.ObjectSerialNumber ^ FVar3.ObjectIndex;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    local_res8 = FVar3;
    iVar5 = FindIndexByHash<TWeakObjectPtr<UStaticMeshComponent_const_,FWeakObjectPtr>_>
                      (this,uVar10,
                       (TWeakObjectPtr<UStaticMeshComponent_const_,FWeakObjectPtr> *)&local_res8);
    bVar11 = iVar5 != -1;
    if (bVar11) {
      local_res8 = (FWeakObjectPtr)((longlong)iVar5 * 0x30 + *(longlong *)&this->Elements);
      if (*(void **)((longlong)local_res8 + 0x18) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)local_res8 + 0x18));
      }
      if (*(void **)((longlong)local_res8 + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)local_res8 + 8));
      }
      memmove((void *)local_res8,_Src,0x28);
      TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      local_48.Index = iVar5;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar11;
  }
  if (bVar11 == false) {
    uVar7 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
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
      uVar10 = this->HashSize - 1U & uVar10;
      _Src[5].ObjectSerialNumber = uVar10;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar10;
      _Src[5].ObjectIndex = *(int *)((longlong)FVar8 + uVar6 * 4);
      *(int *)((longlong)FVar8 + uVar6 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::FKeyType_const_&,unsigned_short_const_&>_> @ 14d5ef3a0

FSetElementId __thiscall
TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::FKeyType_const_&,unsigned_short_const_&>_>
          (TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
           *this,TPairInitializer<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::FKeyType_const_&,unsigned_short_const_&>
                 *param_1,bool *param_2)

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
  char *in_R9;
  undefined1 *puVar10;
  int iVar11;
  FSparseArrayAllocationInfo local_48;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
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
  puVar10 = &(this->Elements).field_0x8;
  TSparseArrayBase<32,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar5);
  if (local_48.Pointer !=
      (TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::FKeyType,unsigned_short>
       *)0x0) {
    TPairInitializer<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::FKeyType_const_&,unsigned_short_const_&>
    ::
    operator<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::FKeyType,unsigned_short>_TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::FKeyType,unsigned_short>
              ((TPairInitializer<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::FKeyType_const_&,unsigned_short_const_&>
                *)param_2,local_48.Pointer);
    *(undefined4 *)((longlong)local_48.Pointer + 0x18) = 0xffffffff;
  }
  uVar6 = UE::MovieScene::GetTypeHash(local_48.Pointer);
  iVar1 = *(int *)puVar10;
  bVar4 = false;
  iVar5 = *(int *)&(this->Elements).field_0x34;
  if ((iVar1 - iVar5 != 1) && (iVar1 != iVar5)) {
    FVar9 = (this->Hash).SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar1 = *(int *)((longlong)FVar9 + (ulonglong)(this->HashSize - 1U & uVar6) * 4);
        iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x20 + 0x18 + *(longlong *)&this->Elements))
    {
      bVar4 = UE::MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->Elements + (longlong)iVar1 * 0x20),
                         local_48.Pointer);
      if (bVar4) {
        bVar4 = iVar1 != -1;
        if (bVar4) {
          memmove((void *)((longlong)iVar1 * 0x20 + *(longlong *)&this->Elements),local_48.Pointer,
                  0x18);
          TSparseArrayBase<32,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::RemoveAtUninitialized
                    ((TSparseArrayBase<32,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)this,local_48.Index,1);
          local_48.Index = iVar1;
        }
        goto LAB_14d5ef4df;
      }
    }
    bVar4 = false;
  }
LAB_14d5ef4df:
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar4;
  }
  if (bVar4 == false) {
    uVar8 = *(int *)puVar10 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar8) {
      uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar11 <= this->HashSize)) {
      uVar6 = this->HashSize - 1U & uVar6;
      *(uint *)&((TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::FKeyType,unsigned_short>
                  *)((longlong)local_48.Pointer + 0x18))->field_0x4 = uVar6;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      *(undefined4 *)((longlong)local_48.Pointer + 0x18) =
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

// EmplaceByHash<TKeyInitializer<UClass_*_const_&>_> @ 14d5ef5d0

FSetElementId __thiscall
TSet<TTuple<UClass_*,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UClass_*,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<UClass_*_const_&>_>
          (TSet<TTuple<UClass_*,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UClass_*,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<UClass_*_const_&> *param_2,bool *param_3)

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
                      (0x60,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x60 + 4 + lVar3);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x60 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar5);
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<UClass_*,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>_>_>
       *)0x0) {
    TKeyInitializer<UClass_*_const_&>::
    operator<UClass_*,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>_>_TTuple<UClass_*,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>_>
              ((TKeyInitializer<UClass_*_const_&> *)param_3,local_38.Pointer);
    *(undefined4 *)((longlong)local_38.Pointer + 0x58) = 0xffffffff;
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
      *(uint *)((longlong)local_38.Pointer + 0x5c) = uVar7;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar7;
      *(undefined4 *)((longlong)local_38.Pointer + 0x58) =
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

// EmplaceByHash<TPairInitializer<UObject_*_const_&,int_&&>_> @ 14d5ef760

FSetElementId __thiscall
TSet<TTuple<UObject_*,int>,TDefaultMapHashableKeyFuncs<UObject_*,int,0>,FDefaultSetAllocator>::
EmplaceByHash<TPairInitializer<UObject_*_const_&,int_&&>_>
          (TSet<TTuple<UObject_*,int>,TDefaultMapHashableKeyFuncs<UObject_*,int,0>,FDefaultSetAllocator>
           *this,uint param_1,TPairInitializer<UObject_*_const_&,int_&&> *param_2,bool *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  bool bVar11;
  char *in_stack_00000028;
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
  puVar10 = &(this->Elements).field_0x8;
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  if (local_38.Pointer != (longlong *)0x0) {
    puVar3 = *(undefined4 **)(param_3 + 8);
    *(longlong *)local_38.Pointer = **(longlong **)param_3;
    *(undefined4 *)((longlong)local_38.Pointer + 8) = *puVar3;
    *(undefined4 *)((longlong)local_38.Pointer + 0x10) = 0xffffffff;
  }
  iVar9 = *(int *)puVar10;
  bVar11 = false;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  if ((iVar9 - iVar4 != 1) && (iVar9 != iVar4)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar9 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & (uint)param_2) * 4);
    if (iVar9 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)(lVar2 + (longlong)iVar9 * 0x18) == *(longlong *)local_38.Pointer) {
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
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar11;
  }
  if (bVar11 == false) {
    uVar6 = *(int *)puVar10 - *(int *)&(this->Elements).field_0x34;
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
      uVar6 = this->HashSize - 1U & (uint)param_2;
      *(uint *)((longlong)local_38.Pointer + 0x14) = uVar6;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      *(undefined4 *)((longlong)local_38.Pointer + 0x10) =
           *(undefined4 *)((longlong)FVar7 + uVar5 * 4);
      *(int *)((longlong)FVar7 + uVar5 * 4) = local_38.Index;
    }
    else {
      this->HashSize = iVar8;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_38.Index;
  return (FSetElementId)param_1;
}

// FindIndexByHash<TWeakObjectPtr<UStaticMeshComponent_const_,FWeakObjectPtr>_> @ 14d5ef980

int __thiscall
TSet<TTuple<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,UE::Cameras::FOcclusionMaterialOverrideInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,UE::Cameras::FOcclusionMaterialOverrideInfo,0>,FDefaultSetAllocator>
::FindIndexByHash<TWeakObjectPtr<UStaticMeshComponent_const_,FWeakObjectPtr>_>
          (TSet<TTuple<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,UE::Cameras::FOcclusionMaterialOverrideInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,UE::Cameras::FOcclusionMaterialOverrideInfo,0>,FDefaultSetAllocator>
           *this,uint param_1,TWeakObjectPtr<UStaticMeshComponent_const_,FWeakObjectPtr> *param_2)

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
        iVar1 != -1; iVar1 = *(int *)(*(longlong *)&this->Elements + 0x28 + (longlong)iVar1 * 0x30))
    {
      local_res8 = param_2->WeakPtr;
      local_res20 = *(FWeakObjectPtr *)(*(longlong *)&this->Elements + (longlong)iVar1 * 0x30);
      bVar2 = TWeakObjectPtr<UStaticMeshComponent_const_,FWeakObjectPtr>::
              UEOpEquals<UStaticMeshComponent_const_,bool>
                        ((TWeakObjectPtr<UStaticMeshComponent_const_,FWeakObjectPtr> *)&local_res20,
                         (TWeakObjectPtr<UStaticMeshComponent_const_,FWeakObjectPtr> *)&local_res8);
      if (bVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}

// Move<TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>_> @ 14d5f79f0

void __cdecl
TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::
Move<TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>_>
          (TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *param_1,
          TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *param_2)

{
  undefined1 *_Src;
  undefined1 *_Dst;
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  
  if (param_1 != param_2) {
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

// operator= @ 14d6012f0

TSet<UStaticMeshComponent_*,DefaultKeyFuncs<UStaticMeshComponent_*,0>,FDefaultSetAllocator> *
__thiscall
TSet<UStaticMeshComponent_*,DefaultKeyFuncs<UStaticMeshComponent_*,0>,FDefaultSetAllocator>::
operator=(TSet<UStaticMeshComponent_*,DefaultKeyFuncs<UStaticMeshComponent_*,0>,FDefaultSetAllocator>
          *this,TSet<UStaticMeshComponent_*,DefaultKeyFuncs<UStaticMeshComponent_*,0>,FDefaultSetAllocator>
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
    TSparseArray<TSparseSetElement<UStaticMeshComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this->Elements,iVar2);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
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
      memcpy(*(void **)&this->Elements,*(void **)&param_1->Elements,(longlong)iVar2 << 4);
    }
    return this;
  }
  return this;
}

// operator= @ 14d6013c0

TSet<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
* __thiscall
TSet<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
::operator=(TSet<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
            *this,TSet<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
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
    TSparseArray<TSparseSetElement<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this->Elements,iVar2);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar2,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
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
      memcpy(*(void **)&this->Elements,*(void **)&param_1->Elements,(longlong)iVar2 << 4);
    }
    return this;
  }
  return this;
}

// Difference @ 14d613370

TSet<UStaticMeshComponent_*,DefaultKeyFuncs<UStaticMeshComponent_*,0>,FDefaultSetAllocator> *
__thiscall
TSet<UStaticMeshComponent_*,DefaultKeyFuncs<UStaticMeshComponent_*,0>,FDefaultSetAllocator>::
Difference(TSet<UStaticMeshComponent_*,DefaultKeyFuncs<UStaticMeshComponent_*,0>,FDefaultSetAllocator>
           *this,TSet<UStaticMeshComponent_*,DefaultKeyFuncs<UStaticMeshComponent_*,0>,FDefaultSetAllocator>
                 *__return_storage_ptr__,
          TSet<UStaticMeshComponent_*,DefaultKeyFuncs<UStaticMeshComponent_*,0>,FDefaultSetAllocator>
          *param_1)

{
  ForElementType<FSetElementId> FVar1;
  longlong lVar2;
  UStaticMeshComponent *pUVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  ForElementType<FSetElementId> FVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  uint *puVar14;
  longlong *plVar15;
  bool *pbVar16;
  uint uVar17;
  uint uVar18;
  UStaticMeshComponent *local_res8;
  uint local_88;
  uint uStack_84;
  undefined8 uStack_80;
  uint uStack_74;
  uint uStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  uVar11 = 0;
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  uVar4 = 1;
  uVar10 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  uVar17 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  local_res8 = (UStaticMeshComponent *)this;
  if (uVar17 == 0) goto LAB_14d613608;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar17);
  }
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)__return_storage_ptr__,uVar17);
  uVar18 = 1;
  if (3 < uVar17) {
    uVar9 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar18 = 1 << ((byte)lVar2 & 0x1f);
  }
  if ((__return_storage_ptr__->HashSize != 0) && ((int)uVar18 <= __return_storage_ptr__->HashSize))
  goto LAB_14d613608;
  __return_storage_ptr__->HashSize = uVar18;
  if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,0,4);
  }
  if (uVar18 != 0) {
    uVar17 = uVar18;
    if (uVar18 < 2) {
      if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
        uVar17 = 0;
        goto LAB_14d61345d;
      }
    }
    else {
LAB_14d61345d:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,uVar17,4);
    }
    if (0 < (int)uVar18) {
      uVar12 = (ulonglong)uVar18;
      uVar9 = uVar11;
      do {
        FVar1 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar1 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar1;
        }
        uVar6 = (longlong)(int)uVar18 - 1U & uVar9;
        uVar9 = uVar9 + 1;
        *(undefined4 *)((longlong)FVar8 + uVar6 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
  }
  if (__return_storage_ptr__->HashSize != 0) {
    uVar17 = *(uint *)&(__return_storage_ptr__->Elements).field_0x28;
    TStack_50.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)&(__return_storage_ptr__->Elements).field_0x10;
    local_88 = 0;
    uStack_84 = 1;
    uStack_74 = 0;
    uStack_70 = 0;
    uVar9 = uVar11;
    if (uVar17 != 0) {
      puVar14 = *(uint **)&(__return_storage_ptr__->Elements).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)TStack_50.Array;
      }
      uVar18 = *puVar14;
      uVar12 = uVar11;
      while (uVar18 == 0) {
        uStack_70 = (int)uVar12 + 0x20;
        uVar12 = (ulonglong)uStack_70;
        iVar7 = (int)uVar9;
        local_88 = iVar7 + 1;
        uVar9 = (ulonglong)local_88;
        if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_88)
        goto LAB_14d613549;
        uVar18 = puVar14[(longlong)iVar7 + 1];
      }
      uStack_84 = -uVar18 & uVar18;
      uVar9 = (ulonglong)uStack_84 * 2 + 1;
      lVar2 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      uStack_74 = (int)lVar2 + -1 + uStack_70;
      uVar9 = (ulonglong)uStack_74;
      if ((int)uVar17 < (int)uStack_74) {
LAB_14d613549:
        uVar9 = (ulonglong)uVar17;
        uStack_74 = uVar17;
      }
    }
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_74;
    TStack_50._28_4_ = uStack_6c;
    TStack_50.BaseBitIndex = uStack_70;
    TStack_50._padding_._0_4_ = local_88;
    TStack_50._padding_._4_4_ = uStack_84;
    if ((int)uVar9 < (int)uVar17) {
      do {
        puVar13 = (ulonglong *)
                  ((longlong)(int)uVar9 * 0x10 + *(longlong *)&__return_storage_ptr__->Elements);
        uVar17 = ((uint)(*puVar13 >> 0x14) & 0xffff ^ (uint)(*puVar13 >> 4)) * -0x7a143595;
        uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
        uVar17 = (uVar17 >> 0x10 ^ uVar17) & __return_storage_ptr__->HashSize - 1U;
        *(uint *)((longlong)puVar13 + 0xc) = uVar17;
        FVar1 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar1 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar1;
        }
        uVar12 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar17;
        *(undefined4 *)(puVar13 + 1) = *(undefined4 *)((longlong)FVar8 + uVar12 * 4);
        *(int *)((longlong)FVar8 + uVar12 * 4) = (int)uVar9;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar9 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
LAB_14d613608:
  pUVar3 = local_res8;
  uVar17 = (uint)local_res8->_padding_;
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&local_res8->_padding_;
  uVar18 = 0;
  uVar9 = uVar11;
  if (uVar17 != 0) {
    uVar9 = (ulonglong)uVar17;
    plVar15 = (longlong *)local_res8->_padding_;
    if ((longlong *)local_res8->_padding_ == (longlong *)0x0) {
      plVar15 = (longlong *)TStack_50.Array;
    }
    uVar5 = (uint)*plVar15;
    uVar12 = uVar11;
    uVar18 = 0;
    uVar10 = 0;
    while (uVar5 == 0) {
      iVar7 = (int)uVar11;
      uVar18 = (int)uVar12 + 0x20;
      uVar12 = (ulonglong)uVar18;
      uVar10 = iVar7 + 1;
      uVar11 = (ulonglong)uVar10;
      if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar10)
      goto LAB_14d61367e;
      uVar5 = *(uint *)((longlong)plVar15 + (longlong)iVar7 * 4 + 4);
    }
    uVar4 = -uVar5 & uVar5;
    uVar11 = (ulonglong)uVar4 * 2 + 1;
    lVar2 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar5 = (uVar18 - 1) + (int)lVar2;
    if ((int)uVar17 < (int)uVar5) {
      uVar5 = uVar17;
    }
    uVar9 = (ulonglong)uVar5;
  }
LAB_14d61367e:
  TStack_50.CurrentBitIndex = (int)uVar9;
  uStack_80 = CONCAT44(uVar4,uVar10);
  TStack_50.UnvisitedBitMask = 0xffffffff;
  TStack_50._padding_ = uStack_80;
  TStack_50._28_4_ = TStack_50.CurrentBitIndex;
  TStack_50.BaseBitIndex = uVar18;
  if (TStack_50.CurrentBitIndex < (int)uVar17) {
    do {
      pbVar16 = (bool *)((longlong)(int)uVar9 * 0x10 + *(longlong *)&pUVar3->_padding_);
      uVar11 = *(ulonglong *)pbVar16;
      uVar10 = ((uint)(uVar11 >> 0x14) & 0xffff ^ (uint)(uVar11 >> 4)) * -0x7a143595;
      uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
      if (*(int *)&(param_1->Elements).field_0x8 != *(int *)&(param_1->Elements).field_0x34) {
        FVar1 = (param_1->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&param_1->Hash;
        if (FVar1 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar1;
        }
        iVar7 = *(int *)((longlong)FVar8 +
                        (ulonglong)(param_1->HashSize - 1U & (uVar10 >> 0x10 ^ uVar10)) * 4);
        if (iVar7 != -1) {
          do {
            if (*(ulonglong *)(*(longlong *)&param_1->Elements + (longlong)iVar7 * 0x10) == uVar11)
            goto LAB_14d613767;
            iVar7 = *(int *)(*(longlong *)&param_1->Elements + 8 + (longlong)iVar7 * 0x10);
          } while (iVar7 != -1);
        }
      }
      Emplace<UStaticMeshComponent_*_const_&>(__return_storage_ptr__,&local_res8,pbVar16);
LAB_14d613767:
      TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
      uVar9 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
    } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
  }
  return __return_storage_ptr__;
}

// Rehash @ 14d630740

void __thiscall
TSet<UStaticMeshComponent_*,DefaultKeyFuncs<UStaticMeshComponent_*,0>,FDefaultSetAllocator>::Rehash
          (TSet<UStaticMeshComponent_*,DefaultKeyFuncs<UStaticMeshComponent_*,0>,FDefaultSetAllocator>
           *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  ulonglong *puVar8;
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14d63081c;
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
LAB_14d63081c:
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
        puVar8 = (ulonglong *)
                 ((longlong)local_30.CurrentBitIndex * 0x10 + *(longlong *)&this->Elements);
        uVar4 = ((uint)(*puVar8 >> 0x14) & 0xffff ^ (uint)(*puVar8 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = (uVar4 >> 0x10 ^ uVar4) & *piVar1 - 1U;
        *(uint *)((longlong)puVar8 + 0xc) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14d630900

void __thiscall
TSet<TTuple<UClass_*,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UClass_*,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<UClass_*,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UClass_*,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  ulonglong *puVar8;
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14d6309dc;
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
LAB_14d6309dc:
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
        puVar8 = (ulonglong *)
                 ((longlong)local_30.CurrentBitIndex * 0x60 + *(longlong *)&this->Elements);
        uVar4 = ((uint)(*puVar8 >> 0x14) & 0xffff ^ (uint)(*puVar8 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = (uVar4 >> 0x10 ^ uVar4) & *piVar1 - 1U;
        *(uint *)((longlong)puVar8 + 0x5c) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar8 + 0xb) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14d630ac0

void __thiscall
TSet<TTuple<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,UE::Cameras::FOcclusionMaterialOverrideInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,UE::Cameras::FOcclusionMaterialOverrideInfo,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,UE::Cameras::FOcclusionMaterialOverrideInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,UE::Cameras::FOcclusionMaterialOverrideInfo,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14d630b9c;
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
LAB_14d630b9c:
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
                 ((longlong)local_30.CurrentBitIndex * 0x30 + *(longlong *)&this->Elements);
        uVar7 = ((uint)((ulonglong)*puVar8 >> 0x20) ^ (uint)*puVar8) & *piVar1 - 1U;
        *(uint *)((longlong)puVar8 + 0x2c) = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(puVar8 + 5) = *(undefined4 *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14d630c60

void __thiscall
TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  FKeyType *pFVar8;
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14d630d37;
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
LAB_14d630d37:
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
        pFVar8 = (FKeyType *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x20);
        uVar4 = UE::MovieScene::GetTypeHash(pFVar8);
        uVar4 = uVar4 & *piVar1 - 1U;
        *(uint *)&pFVar8[1].Property = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        pFVar8[1].Object.ObjectSerialNumber = *(int *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = iVar2;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14d630df0

void __thiscall
TSet<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
::Rehash(TSet<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14d630ecc;
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
LAB_14d630ecc:
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
                 ((longlong)local_30.CurrentBitIndex * 0x10 + *(longlong *)&this->Elements);
        uVar7 = ((uint)((ulonglong)*puVar8 >> 0x20) ^ (uint)*puVar8) & *piVar1 - 1U;
        *(uint *)((longlong)puVar8 + 0xc) = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// RemoveByIndex @ 14d631360

void __thiscall
TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
::RemoveByIndex(TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
                *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ForElementType<FSetElementId> FVar4;
  longlong lVar5;
  undefined1 *puVar6;
  int *piVar7;
  
  if ((-1 < param_1) && (param_1 < *(int *)&(this->Elements).field_0x28)) {
    puVar6 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar6 + (ulonglong)((uint)param_1 >> 5) * 4) >> (param_1 & 0x1fU) & 1) != 0)
    goto LAB_14d6313d2;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14d6313d2:
  FVar4 = (this->Hash).SecondaryData;
  lVar5 = (longlong)param_1 * 0x20 + *(longlong *)&this->Elements;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  piVar7 = (int *)((longlong)FVar4 + (longlong)*(int *)(lVar5 + 0x1c) * 4);
  while( true ) {
    iVar1 = *piVar7;
    if (iVar1 == -1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NextElementIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                         ,0x2b5,L"Corrupt hash");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (iVar1 == param_1) break;
    piVar7 = (int *)(*(longlong *)&this->Elements + 0x18 + (longlong)iVar1 * 0x20);
  }
  *piVar7 = *(int *)(lVar5 + 0x18);
  TSparseArrayBase<32,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized
            ((TSparseArrayBase<32,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this,param_1,1);
  return;
}

// TryReplaceExisting @ 14d63a0d0

bool __thiscall
TSet<TTuple<UClass_*,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UClass_*,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<UClass_*,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UClass_*,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<UClass_*,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>_>_>
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
  undefined4 uVar9;
  undefined1 *puVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  void *_Dst;
  uint uVar13;
  bool bVar14;
  
  iVar12 = *(int *)&(this->Elements).field_0x8;
  bVar14 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  if ((iVar12 - iVar3 != 1) && (iVar12 != iVar3)) {
    FVar11 = (this->Hash).SecondaryData;
    if (FVar11 == (ForElementType<FSetElementId>)0x0) {
      FVar11 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar12 = *(int *)((longlong)FVar11 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar12 != -1) {
      lVar4 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)((longlong)iVar12 * 0x60 + lVar4) == *(longlong *)param_2) {
          bVar14 = iVar12 != -1;
          if (bVar14) {
            _Dst = (void *)((longlong)iVar12 * 0x60 + lVar4);
            *(undefined4 *)((longlong)_Dst + 0x50) = 0;
            if (*(void **)((longlong)_Dst + 0x48) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x48));
            }
            TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ((TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)((longlong)_Dst + 8));
            memmove(_Dst,param_2,0x58);
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
            puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
            lVar2 = (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4;
            if (puVar10 == (undefined1 *)0x0) {
              puVar10 = puVar1;
            }
            if (((*(uint *)(puVar10 + lVar2) & uVar13) == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            if (*(int *)&(this->Elements).field_0x34 != 0) {
              *(int *)((longlong)*(int *)&(this->Elements).field_0x30 * 0x60 + lVar4) = iVar3;
            }
            uVar9 = 0xffffffff;
            *(undefined4 *)((longlong)iVar3 * 0x60 + lVar4) = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0x34) {
              uVar9 = *(undefined4 *)&(this->Elements).field_0x30;
            }
            *(undefined4 *)((longlong)iVar3 * 0x60 + 4 + lVar4) = uVar9;
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
            *(uint *)(puVar10 + lVar2) = *(uint *)(puVar10 + lVar2) & ~uVar13;
            *param_3 = iVar12;
          }
          break;
        }
        iVar12 = *(int *)((longlong)iVar12 * 0x60 + 0x58 + lVar4);
      } while (iVar12 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar14;
  }
  return bVar14;
}

// TryReplaceExisting @ 14d63a330

bool __thiscall
TSet<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>_> *param_2,
          int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  FWeakObjectPtr FVar4;
  longlong lVar5;
  code *pcVar6;
  byte bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  ForElementType<FSetElementId> FVar13;
  uint uVar14;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_48;
  longlong local_40;
  
  iVar2 = *(int *)&(this->Elements).field_0x8;
  bVar8 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  if (iVar2 - iVar3 != 1) {
    FVar4.ObjectIndex = *(int *)&param_2->field_0x0;
    FVar4.ObjectSerialNumber = *(int *)&param_2->field_0x4;
    if (iVar2 == iVar3) {
      bVar8 = false;
    }
    else {
      FVar13 = (this->Hash).SecondaryData;
      if (FVar13 == (ForElementType<FSetElementId>)0x0) {
        FVar13 = (ForElementType<FSetElementId>)&this->Hash;
      }
      for (iVar2 = *(int *)((longlong)FVar13 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
          iVar2 != -1; iVar2 = *(int *)(*(longlong *)&this->Elements + 8 + (longlong)iVar2 * 0x10))
      {
        local_48 = *(FWeakObjectPtr *)(*(longlong *)&this->Elements + (longlong)iVar2 * 0x10);
        local_res8 = FVar4;
        bVar8 = TWeakObjectPtr<UStaticMeshComponent_const_,FWeakObjectPtr>::
                UEOpEquals<UStaticMeshComponent_const_,bool>
                          ((TWeakObjectPtr<UStaticMeshComponent_const_,FWeakObjectPtr> *)&local_48,
                           (TWeakObjectPtr<UStaticMeshComponent_const_,FWeakObjectPtr> *)&local_res8
                          );
        if (bVar8) {
          bVar8 = iVar2 != -1;
          if (bVar8) {
            puVar1 = &(this->Elements).field_0x10;
            *(undefined8 *)(*(longlong *)&this->Elements + (longlong)iVar2 * 0x10) =
                 *(undefined8 *)param_2;
            iVar3 = *param_3;
            lVar5 = *(longlong *)&this->Elements;
            bVar7 = (byte)iVar3 & 0x1f;
            uVar14 = 1 << bVar7 | 1U >> 0x20 - bVar7;
            if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              uVar10 = (*pcVar6)();
              return (bool)uVar10;
            }
            puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
            local_40 = (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4;
            if (puVar12 == (undefined1 *)0x0) {
              puVar12 = puVar1;
            }
            if (((*(uint *)(puVar12 + local_40) & uVar14) == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              uVar10 = (*pcVar6)();
              return (bool)uVar10;
            }
            if (*(int *)&(this->Elements).field_0x34 != 0) {
              *(int *)(lVar5 + (longlong)*(int *)&(this->Elements).field_0x30 * 0x10) = iVar3;
            }
            uVar11 = 0xffffffff;
            *(undefined4 *)(lVar5 + (longlong)iVar3 * 0x10) = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0x34) {
              uVar11 = *(undefined4 *)&(this->Elements).field_0x30;
            }
            *(undefined4 *)(lVar5 + 4 + (longlong)iVar3 * 0x10) = uVar11;
            puVar12 = &(this->Elements).field_0x34;
            *(int *)puVar12 = *(int *)puVar12 + 1;
            *(int *)&(this->Elements).field_0x30 = iVar3;
            if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
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
            *(uint *)(puVar12 + local_40) = *(uint *)(puVar12 + local_40) & ~uVar14;
            *param_3 = iVar2;
          }
          goto LAB_14d63a3e2;
        }
      }
      bVar8 = false;
    }
  }
LAB_14d63a3e2:
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar8;
  }
  return bVar8;
}

// UnhashElements @ 14d63a560

void __thiscall
TSet<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14d63a65b;
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
LAB_14d63a65b:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14d63a750;
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
LAB_14d63a750:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// Emplace<TKeyInitializer<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>_const_&>_> @ 14d64f2d0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FSetElementId __thiscall
TSet<TTuple<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext,0>,FDefaultSetAllocator>
::Emplace<TKeyInitializer<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>_const_&>_>
          (TSet<TTuple<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext,0>,FDefaultSetAllocator>
           *this,TKeyInitializer<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>_const_&>
                 *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  TTuple<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext>
  *pTVar4;
  FSharedReferencer<1> _Src;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  void *_Dst;
  int iVar10;
  atomic<int> aVar11;
  char *in_R9;
  int iVar12;
  bool bVar13;
  FCameraEvaluationContext *local_48;
  FSharedReferencer<1> local_40;
  
  iVar12 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar12 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar5 * 0x40 + 4 + lVar2);
    iVar12 = iVar12 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar12;
    if (iVar12 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x40 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,(FSparseArrayAllocationInfo *)&local_48,iVar5);
  _Src.ReferenceController = local_40.ReferenceController;
  if ((TTuple<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext>
       *)local_40.ReferenceController !=
      (TTuple<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext>
       *)0x0) {
    TKeyInitializer<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>_const_&>::
    operator<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext>_TTuple<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext>
              ((TKeyInitializer<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>_const_&>
                *)param_2,
               (TTuple<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext>
                *)local_40.ReferenceController);
    _Src.ReferenceController[3].SharedReferenceCount = (atomic<int>)0xffffffff;
  }
  pTVar3 = *(TReferenceControllerBase<1> **)&(_Src.ReferenceController)->SharedReferenceCount;
  iVar12 = (int)local_48;
  uVar6 = (_Src.ReferenceController)->_padding_;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar7 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  bVar13 = false;
  uVar7 = uVar7 >> 0x10 ^ uVar7;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    pTVar4 = *(TTuple<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext>
               **)&(_Src.ReferenceController)->SharedReferenceCount;
    local_48 = (FCameraEvaluationContext *)(_Src.ReferenceController)->_padding_;
    if (pTVar4 != (TTuple<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext>
                   *)0x0) {
      LOCK();
      *(atomic<int> *)&pTVar4->field_0x8 =
           (atomic<int>)((int)*(atomic<int> *)&pTVar4->field_0x8 + 1);
      UNLOCK();
    }
    local_40.ReferenceController = (TReferenceControllerBase<1> *)pTVar4;
    iVar5 = FindIndexByHash<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>_>
                      (this,uVar7,
                       (TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> *)&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pTVar4);
    bVar13 = iVar5 != -1;
    if (bVar13) {
      _Dst = (void *)((longlong)iVar5 * 0x40 + *(longlong *)&this->Elements);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)((longlong)_Dst + 8));
      memmove(_Dst,_Src.ReferenceController,0x38);
      TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,iVar12,1);
      iVar12 = iVar5;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar13;
  }
  if (bVar13 == false) {
    uVar8 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar8) {
      uVar6 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= this->HashSize)) {
      aVar11 = (atomic<int>)(this->HashSize - 1U & uVar7);
      _Src.ReferenceController[3].WeakReferenceCount = aVar11;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)aVar11;
      _Src.ReferenceController[3].SharedReferenceCount =
           *(atomic<int> *)((longlong)FVar9 + uVar6 * 4);
      *(int *)((longlong)FVar9 + uVar6 * 4) = iVar12;
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = iVar12;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FName_const_&,UCameraVariableAsset_*_&&>_> @ 14d64f520

FSetElementId __thiscall
TSet<TTuple<FName,UCameraVariableAsset_*>,TDefaultMapHashableKeyFuncs<FName,UCameraVariableAsset_*,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FName_const_&,UCameraVariableAsset_*_&&>_>
          (TSet<TTuple<FName,UCameraVariableAsset_*>,TDefaultMapHashableKeyFuncs<FName,UCameraVariableAsset_*,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FName_const_&,UCameraVariableAsset_*_&&> *param_1,bool *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  int iVar9;
  char *in_R9;
  int iVar10;
  undefined1 *puVar11;
  bool bVar12;
  FSparseArrayAllocationInfo local_48;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar8 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    iVar8 = iVar8 + -1;
    lVar1 = *(longlong *)&this->Elements;
    iVar10 = *(int *)(lVar1 + 4 + (longlong)iVar3 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar10;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(lVar1 + (longlong)iVar10 * 0x18) = 0xffffffff;
    }
  }
  puVar11 = &(this->Elements).field_0x8;
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar3);
  if (local_48.Pointer != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 8);
    *(longlong *)local_48.Pointer = **(longlong **)param_2;
    *(longlong *)((longlong)local_48.Pointer + 8) = *plVar2;
    *(undefined4 *)((longlong)local_48.Pointer + 0x10) = 0xffffffff;
  }
  lVar1 = *(longlong *)local_48.Pointer;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)lVar1);
  iVar8 = *(int *)puVar11;
  bVar12 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  uVar4 = uVar4 + (int)((ulonglong)lVar1 >> 0x20);
  iVar10 = local_48.Index;
  if ((iVar8 - iVar3 != 1) && (iVar8 != iVar3)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar8 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar4) * 4);
    if (iVar8 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)(lVar1 + (longlong)iVar8 * 0x18) == *(longlong *)local_48.Pointer) {
          bVar12 = iVar8 != -1;
          if (bVar12) {
            memmove((void *)(lVar1 + (longlong)iVar8 * 0x18),local_48.Pointer,0x10);
            TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            iVar10 = iVar8;
          }
          break;
        }
        iVar8 = *(int *)(lVar1 + 0x10 + (longlong)iVar8 * 0x18);
      } while (iVar8 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar12;
  }
  if (bVar12 == false) {
    uVar6 = *(int *)puVar11 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar6) {
      uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar1 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= this->HashSize)) {
      uVar4 = this->HashSize - 1U & uVar4;
      *(uint *)((longlong)local_48.Pointer + 0x14) = uVar4;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar4;
      *(undefined4 *)((longlong)local_48.Pointer + 0x10) =
           *(undefined4 *)((longlong)FVar7 + uVar5 * 4);
      *(int *)((longlong)FVar7 + uVar5 * 4) = iVar10;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = iVar10;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FName_const_&,FCameraContextDataID_const_&>_> @ 14d64f750

FSetElementId __thiscall
TSet<TTuple<FName,FCameraContextDataID>,TDefaultMapHashableKeyFuncs<FName,FCameraContextDataID,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FName_const_&,FCameraContextDataID_const_&>_>
          (TSet<TTuple<FName,FCameraContextDataID>,TDefaultMapHashableKeyFuncs<FName,FCameraContextDataID,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FName_const_&,FCameraContextDataID_const_&> *param_1,bool *param_2
          )

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  int iVar9;
  char *in_R9;
  int iVar10;
  undefined1 *puVar11;
  bool bVar12;
  FSparseArrayAllocationInfo local_48;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar8 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x14,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    iVar8 = iVar8 + -1;
    lVar1 = *(longlong *)&this->Elements;
    iVar10 = *(int *)(lVar1 + 4 + (longlong)iVar3 * 0x14);
    *(int *)&(this->Elements).field_0x30 = iVar10;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(lVar1 + (longlong)iVar10 * 0x14) = 0xffffffff;
    }
  }
  puVar11 = &(this->Elements).field_0x8;
  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar3);
  if (local_48.Pointer != (longlong *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 8);
    *(longlong *)local_48.Pointer = **(longlong **)param_2;
    *(undefined4 *)((longlong)local_48.Pointer + 8) = *puVar2;
    *(undefined4 *)((longlong)local_48.Pointer + 0xc) = 0xffffffff;
  }
  lVar1 = *(longlong *)local_48.Pointer;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)lVar1);
  iVar8 = *(int *)puVar11;
  bVar12 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  uVar4 = uVar4 + (int)((ulonglong)lVar1 >> 0x20);
  iVar10 = local_48.Index;
  if ((iVar8 - iVar3 != 1) && (iVar8 != iVar3)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar8 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar4) * 4);
    if (iVar8 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)(lVar1 + (longlong)iVar8 * 0x14) == *(longlong *)local_48.Pointer) {
          bVar12 = iVar8 != -1;
          if (bVar12) {
            memmove((void *)(lVar1 + (longlong)iVar8 * 0x14),local_48.Pointer,0xc);
            TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            iVar10 = iVar8;
          }
          break;
        }
        iVar8 = *(int *)(lVar1 + 0xc + (longlong)iVar8 * 0x14);
      } while (iVar8 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar12;
  }
  if (bVar12 == false) {
    uVar6 = *(int *)puVar11 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar6) {
      uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar1 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= this->HashSize)) {
      uVar4 = this->HashSize - 1U & uVar4;
      *(uint *)((longlong)local_48.Pointer + 0x10) = uVar4;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar4;
      *(undefined4 *)((longlong)local_48.Pointer + 0xc) =
           *(undefined4 *)((longlong)FVar7 + uVar5 * 4);
      *(int *)((longlong)FVar7 + uVar5 * 4) = iVar10;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = iVar10;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FName_const_&,FCameraVariableID_const_&>_> @ 14d64f980

FSetElementId __thiscall
TSet<TTuple<FName,FCameraVariableID>,TDefaultMapHashableKeyFuncs<FName,FCameraVariableID,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FName_const_&,FCameraVariableID_const_&>_>
          (TSet<TTuple<FName,FCameraVariableID>,TDefaultMapHashableKeyFuncs<FName,FCameraVariableID,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FName_const_&,FCameraVariableID_const_&> *param_1,bool *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  int iVar9;
  char *in_R9;
  int iVar10;
  undefined1 *puVar11;
  bool bVar12;
  FSparseArrayAllocationInfo local_48;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar8 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x14,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    iVar8 = iVar8 + -1;
    lVar1 = *(longlong *)&this->Elements;
    iVar10 = *(int *)(lVar1 + 4 + (longlong)iVar3 * 0x14);
    *(int *)&(this->Elements).field_0x30 = iVar10;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(lVar1 + (longlong)iVar10 * 0x14) = 0xffffffff;
    }
  }
  puVar11 = &(this->Elements).field_0x8;
  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar3);
  if (local_48.Pointer != (longlong *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 8);
    *(longlong *)local_48.Pointer = **(longlong **)param_2;
    *(undefined4 *)((longlong)local_48.Pointer + 8) = *puVar2;
    *(undefined4 *)((longlong)local_48.Pointer + 0xc) = 0xffffffff;
  }
  lVar1 = *(longlong *)local_48.Pointer;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)lVar1);
  iVar8 = *(int *)puVar11;
  bVar12 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  uVar4 = uVar4 + (int)((ulonglong)lVar1 >> 0x20);
  iVar10 = local_48.Index;
  if ((iVar8 - iVar3 != 1) && (iVar8 != iVar3)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar8 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar4) * 4);
    if (iVar8 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)(lVar1 + (longlong)iVar8 * 0x14) == *(longlong *)local_48.Pointer) {
          bVar12 = iVar8 != -1;
          if (bVar12) {
            memmove((void *)(lVar1 + (longlong)iVar8 * 0x14),local_48.Pointer,0xc);
            TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            iVar10 = iVar8;
          }
          break;
        }
        iVar8 = *(int *)(lVar1 + 0xc + (longlong)iVar8 * 0x14);
      } while (iVar8 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar12;
  }
  if (bVar12 == false) {
    uVar6 = *(int *)puVar11 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar6) {
      uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar1 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= this->HashSize)) {
      uVar4 = this->HashSize - 1U & uVar4;
      *(uint *)((longlong)local_48.Pointer + 0x10) = uVar4;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar4;
      *(undefined4 *)((longlong)local_48.Pointer + 0xc) =
           *(undefined4 *)((longlong)FVar7 + uVar5 * 4);
      *(int *)((longlong)FVar7 + uVar5 * 4) = iVar10;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = iVar10;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FString_const_&,UObject_*_const_&>_> @ 14d64fbb0

FSetElementId __thiscall
TSet<TTuple<FString,UObject_*>,TDefaultMapHashableKeyFuncs<FString,UObject_*,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FString_const_&,UObject_*_const_&>_>
          (TSet<TTuple<FString,UObject_*>,TDefaultMapHashableKeyFuncs<FString,UObject_*,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FString_const_&,UObject_*_const_&> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  wchar_t *pwVar9;
  ForElementType<FSetElementId> FVar10;
  int iVar11;
  TSparseSetElement<TTuple<FString,UObject_*>_> *pTVar12;
  bool *in_R9;
  int iVar13;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar13 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar13 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar5 * 0x20 + 4 + lVar2);
    iVar13 = iVar13 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar13;
    if (iVar13 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar5);
  pTVar12 = (TSparseSetElement<TTuple<FString,UObject_*>_> *)0x0;
  iVar13 = 0;
  if (local_38.Pointer != (TSparseSetElement<TTuple<FString,UObject_*>_> *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 8);
    ::FString::FString(local_38.Pointer,*(FString **)param_2);
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = *puVar3;
    *(undefined4 *)((longlong)local_38.Pointer + 0x18) = 0xffffffff;
    pTVar12 = local_38.Pointer;
  }
  local_res8[0] = local_38.Index;
  if (*(int *)&pTVar12->field_0x8 == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = *(wchar_t **)pTVar12;
    iVar13 = *(int *)&pTVar12->field_0x8 + -1;
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar13,pwVar9);
  bVar4 = TryReplaceExisting(this,uVar6,pTVar12,local_res8,in_R9);
  if (!bVar4) {
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
      *(uint *)&pTVar12->field_0x1c = uVar6;
      FVar10 = (this->Hash).SecondaryData;
      if (FVar10 == (ForElementType<FSetElementId>)0x0) {
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      *(undefined4 *)&pTVar12->field_0x18 = *(undefined4 *)((longlong)FVar10 + uVar7 * 4);
      *(int *)((longlong)FVar10 + uVar7 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar11;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// FindIndexByHash<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>_> @ 14d64fd70

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

int __thiscall
TSet<TTuple<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext,0>,FDefaultSetAllocator>
::FindIndexByHash<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>_>
          (TSet<TTuple<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext,0>,FDefaultSetAllocator>
           *this,uint param_1,TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> *param_2)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FCameraEvaluationContext *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FCameraEvaluationContext *pFVar5;
  longlong lVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar1 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    while (iVar1 != -1) {
      pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
      pFVar3 = param_2->Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      lVar6 = (longlong)iVar1 * 0x40;
      pTVar4 = *(TReferenceControllerBase<1> **)(lVar6 + 8 + *(longlong *)&this->Elements);
      pFVar5 = *(FCameraEvaluationContext **)(lVar6 + *(longlong *)&this->Elements);
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      if (pFVar5 == pFVar3) {
        return iVar1;
      }
      iVar1 = *(int *)(lVar6 + 0x38 + *(longlong *)&this->Elements);
    }
  }
  return -1;
}

// FindIndexByHash<FString> @ 14d64fe40

int __thiscall
TSet<TTuple<FString,UObject_*>,TDefaultMapHashableKeyFuncs<FString,UObject_*,0>,FDefaultSetAllocator>
::FindIndexByHash<FString>
          (TSet<TTuple<FString,UObject_*>,TDefaultMapHashableKeyFuncs<FString,UObject_*,0>,FDefaultSetAllocator>
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
      lVar4 = (longlong)iVar1 * 0x20;
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
      iVar1 = *(int *)(lVar4 + 0x18 + *(longlong *)&this->Elements);
    }
  }
  return -1;
}

// Rehash @ 14d670550

void __thiscall
TSet<TTuple<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  ForElementType<FSetElementId> FVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  ulonglong *puVar9;
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
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_40.Array;
      }
      uVar7 = *puVar10;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar7 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar5 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14d670627;
        uVar7 = puVar10[lVar5 + 1];
      }
      uStack_64 = -uVar7 & uVar7;
      uVar6 = (ulonglong)uStack_64 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_54 = (int)lVar5 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14d670627:
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
        puVar9 = (ulonglong *)
                 ((longlong)local_40.CurrentBitIndex * 0x40 + *(longlong *)&this->Elements);
        pTVar3 = (TReferenceControllerBase<1> *)puVar9[1];
        uVar6 = *puVar9;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        uVar7 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        uVar7 = (uVar7 >> 0x10 ^ uVar7) & *piVar1 - 1U;
        *(uint *)((longlong)puVar9 + 0x3c) = uVar7;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(puVar9 + 7) = *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
        *(int *)((longlong)FVar8 + uVar6 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14d670730

void __thiscall
TSet<TTuple<FName,UCameraVariableAsset_*>,TDefaultMapHashableKeyFuncs<FName,UCameraVariableAsset_*,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FName,UCameraVariableAsset_*>,TDefaultMapHashableKeyFuncs<FName,UCameraVariableAsset_*,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14d670807;
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
LAB_14d670807:
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
                 (*(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x18);
        lVar6 = *(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x18;
        uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar5 = *piVar1 - 1U & uVar5 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)(lVar6 + 0x14) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(lVar6 + 0x10) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14d6708e0

void __thiscall
TSet<TTuple<FName,FCameraContextDataID>,TDefaultMapHashableKeyFuncs<FName,FCameraContextDataID,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FName,FCameraContextDataID>,TDefaultMapHashableKeyFuncs<FName,FCameraContextDataID,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14d6709b7;
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
LAB_14d6709b7:
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
                 (*(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x14);
        lVar6 = *(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x14;
        uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar5 = *piVar1 - 1U & uVar5 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)(lVar6 + 0x10) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(lVar6 + 0xc) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14d670a90

void __thiscall
TSet<TTuple<FName,FCameraVariableID>,TDefaultMapHashableKeyFuncs<FName,FCameraVariableID,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FName,FCameraVariableID>,TDefaultMapHashableKeyFuncs<FName,FCameraVariableID,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14d670b67;
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
LAB_14d670b67:
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
                 (*(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x14);
        lVar6 = *(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x14;
        uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar5 = *piVar1 - 1U & uVar5 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)(lVar6 + 0x10) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(lVar6 + 0xc) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14d670c40

void __thiscall
TSet<TTuple<FString,UObject_*>,TDefaultMapHashableKeyFuncs<FString,UObject_*,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FString,UObject_*>,TDefaultMapHashableKeyFuncs<FString,UObject_*,0>,FDefaultSetAllocator>
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
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14d670d17;
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
LAB_14d670d17:
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
                  (*(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x20);
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
        *(uint *)((longlong)puVar10 + 0x1c) = uVar4;
        FVar2 = (this->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar2;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar10 + 3) = *(undefined4 *)((longlong)FVar9 + uVar6 * 4);
        *(int *)((longlong)FVar9 + uVar6 * 4) = iVar3;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// RemoveByIndex @ 14d670f80

void __thiscall
TSet<TTuple<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext,0>,FDefaultSetAllocator>
::RemoveByIndex(TSet<TTuple<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext,0>,FDefaultSetAllocator>
                *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ForElementType<FSetElementId> FVar4;
  longlong lVar5;
  undefined1 *puVar6;
  int *piVar7;
  
  if ((-1 < param_1) && (param_1 < *(int *)&(this->Elements).field_0x28)) {
    puVar6 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar6 + (ulonglong)((uint)param_1 >> 5) * 4) >> (param_1 & 0x1fU) & 1) != 0)
    goto LAB_14d670ff2;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14d670ff2:
  FVar4 = (this->Hash).SecondaryData;
  lVar5 = (longlong)param_1 * 0x40 + *(longlong *)&this->Elements;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  piVar7 = (int *)((longlong)FVar4 + (longlong)*(int *)(lVar5 + 0x3c) * 4);
  while( true ) {
    iVar1 = *piVar7;
    if (iVar1 == -1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NextElementIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                         ,0x2b5,L"Corrupt hash");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (iVar1 == param_1) break;
    piVar7 = (int *)(*(longlong *)&this->Elements + 0x38 + (longlong)iVar1 * 0x40);
  }
  *piVar7 = *(int *)(lVar5 + 0x38);
  TSparseArray<TSparseSetElement<TTuple<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(&this->Elements,param_1,1);
  TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized
            ((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this,param_1,1);
  return;
}

// TryReplaceExisting @ 14d674170

bool __thiscall
TSet<TTuple<FString,UObject_*>,TDefaultMapHashableKeyFuncs<FString,UObject_*,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FString,UObject_*>,TDefaultMapHashableKeyFuncs<FString,UObject_*,0>,FDefaultSetAllocator>
           *this,uint param_1,TSparseSetElement<TTuple<FString,UObject_*>_> *param_2,int *param_3,
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
  undefined1 *puVar12;
  undefined8 *_Dst;
  uint uVar13;
  bool bVar14;
  
  bVar14 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar10 = FindIndexByHash<FString>(this,param_1,(FString *)param_2);
    bVar14 = iVar10 != -1;
    if (bVar14) {
      _Dst = (undefined8 *)((longlong)iVar10 * 0x20 + *(longlong *)&this->Elements);
      pvVar4 = (void *)*_Dst;
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
      memmove(_Dst,param_2,0x18);
      iVar3 = *param_3;
      puVar1 = &(this->Elements).field_0x10;
      lVar5 = *(longlong *)&this->Elements;
      bVar7 = (byte)iVar3 & 0x1f;
      uVar13 = 1 << bVar7 | 1U >> 0x20 - bVar7;
      if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
      lVar2 = (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = puVar1;
      }
      if (((*(uint *)(puVar12 + lVar2) & uVar13) == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      if (*(int *)&(this->Elements).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(this->Elements).field_0x30 * 0x20 + lVar5) = iVar3;
      }
      uVar11 = 0xffffffff;
      *(undefined4 *)((longlong)iVar3 * 0x20 + lVar5) = 0xffffffff;
      if (0 < *(int *)&(this->Elements).field_0x34) {
        uVar11 = *(undefined4 *)&(this->Elements).field_0x30;
      }
      *(undefined4 *)((longlong)iVar3 * 0x20 + 4 + lVar5) = uVar11;
      puVar12 = &(this->Elements).field_0x34;
      *(int *)puVar12 = *(int *)puVar12 + 1;
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
      puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = puVar1;
      }
      *(uint *)(puVar12 + lVar2) = *(uint *)(puVar12 + lVar2) & ~uVar13;
      *param_3 = iVar10;
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar14;
  }
  return bVar14;
}

