// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplayVolume
// Functions: 13

// Emplace<TPairInitializer<unsigned_int_const_&,UAudioGameplayVolumeComponent_const_*_&>_> @ 14d999f30

FSetElementId __thiscall
TSet<TTuple<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<unsigned_int_const_&,UAudioGameplayVolumeComponent_const_*_&>_>
          (TSet<TTuple<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<unsigned_int_const_&,UAudioGameplayVolumeComponent_const_*_&>
                 *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  UObject *pUVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  char *in_R9;
  bool bVar12;
  FSparseArrayAllocationInfo local_38;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
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
                   *)this,&local_38,iVar5);
  if (local_38.Pointer != (uint *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 8);
    *(uint *)local_38.Pointer = **(uint **)param_2;
    pUVar4 = (UObject *)*puVar3;
    *(UObject **)((longlong)local_38.Pointer + 8) = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    *(uint *)((longlong)local_38.Pointer + 0x10) = 0xffffffff;
  }
  iVar10 = *(int *)&(this->Elements).field_0x8;
  bVar12 = false;
  iVar5 = *(int *)&(this->Elements).field_0x34;
  uVar11 = *(uint *)local_38.Pointer;
  if ((iVar10 - iVar5 != 1) && (iVar10 != iVar5)) {
    FVar8 = (this->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar10 = *(int *)((longlong)FVar8 + (ulonglong)(this->HashSize - 1U & uVar11) * 4);
    if (iVar10 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(uint *)(lVar2 + (longlong)iVar10 * 0x18) == uVar11) {
          bVar12 = iVar10 != -1;
          if (bVar12) {
            memmove((void *)(lVar2 + (longlong)iVar10 * 0x18),local_38.Pointer,0x10);
            TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar10;
          }
          break;
        }
        iVar10 = *(int *)(lVar2 + 0x10 + (longlong)iVar10 * 0x18);
      } while (iVar10 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar12;
  }
  if (bVar12 == false) {
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
      uVar11 = this->HashSize - 1U & uVar11;
      *(uint *)((longlong)local_38.Pointer + 0x14) = uVar11;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar11;
      *(uint *)((longlong)local_38.Pointer + 0x10) = *(uint *)((longlong)FVar8 + uVar6 * 4);
      *(int *)((longlong)FVar8 + uVar6 * 4) = local_38.Index;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// EmplaceByHash<TKeyInitializer<unsigned_int_&&>_> @ 14d99a150

FSetElementId __thiscall
TSet<TTuple<unsigned_int,FAudioGameplayActiveSoundInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioGameplayActiveSoundInfo,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<unsigned_int_&&>_>
          (TSet<TTuple<unsigned_int,FAudioGameplayActiveSoundInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioGameplayActiveSoundInfo,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<unsigned_int_&&> *param_2,bool *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar6;
  int iVar7;
  int iVar8;
  void *_Dst;
  bool bVar9;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  iVar7 = 1;
  if (iVar8 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x98,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    iVar8 = iVar8 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar3 * 0x98 + 4 + lVar2);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x98 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<152,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<152,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar3);
  if (local_38.Pointer != (TTuple<unsigned_int,FAudioGameplayActiveSoundInfo> *)0x0) {
    TKeyInitializer<unsigned_int_&&>::
    operator<unsigned_int,FAudioGameplayActiveSoundInfo>_TTuple<unsigned_int,FAudioGameplayActiveSoundInfo>
              ((TKeyInitializer<unsigned_int_&&> *)param_3,local_38.Pointer);
    *(undefined4 *)((longlong)local_38.Pointer + 0x90) = 0xffffffff;
  }
  iVar8 = *(int *)&(this->Elements).field_0x8;
  bVar9 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  if ((iVar8 - iVar3 != 1) && (iVar8 != iVar3)) {
    FVar6 = (this->Hash).SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar8 = *(int *)((longlong)FVar6 + (ulonglong)(this->HashSize - 1U & (uint)param_2) * 4);
    if (iVar8 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(int *)((longlong)iVar8 * 0x98 + lVar2) == *(int *)local_38.Pointer) {
          bVar9 = iVar8 != -1;
          if (bVar9) {
            _Dst = (void *)((longlong)iVar8 * 0x98 + lVar2);
            DestructItems<TSharedPtr<FProxyVolumeMutator,1>,int>
                      (*(TSharedPtr<FProxyVolumeMutator,1> **)((longlong)_Dst + 0x80),
                       *(int *)((longlong)_Dst + 0x88));
            if (*(void **)((longlong)_Dst + 0x80) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x80));
            }
            memmove(_Dst,local_38.Pointer,0x90);
            TSparseArrayBase<152,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<152,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar8;
          }
          break;
        }
        iVar8 = *(int *)((longlong)iVar8 * 0x98 + 0x90 + lVar2);
      } while (iVar8 != -1);
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar9;
  }
  if (bVar9 == false) {
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
      uVar5 = this->HashSize - 1U & (uint)param_2;
      *(uint *)&((TTuple<unsigned_int,FAudioGameplayActiveSoundInfo> *)
                ((longlong)local_38.Pointer + 0x90))->field_0x4 = uVar5;
      FVar6 = (this->Hash).SecondaryData;
      if (FVar6 == (ForElementType<FSetElementId>)0x0) {
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar4 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)((longlong)local_38.Pointer + 0x90) =
           *(undefined4 *)((longlong)FVar6 + uVar4 * 4);
      *(int *)((longlong)FVar6 + uVar4 * 4) = local_38.Index;
    }
    else {
      this->HashSize = iVar7;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_38.Index;
  return (FSetElementId)param_1;
}

// EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_> @ 14d99a3b0

FSetElementId __thiscall
TSet<TTuple<unsigned_int,FAudioGameplayVolumeProxyInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioGameplayVolumeProxyInfo,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
          (TSet<TTuple<unsigned_int,FAudioGameplayVolumeProxyInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioGameplayVolumeProxyInfo,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<unsigned_int_const_&> *param_2,bool *param_3)

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
                      (0xc0,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0xc0 + 4 + lVar3);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0xc0 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<192,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<192,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar5);
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<unsigned_int,FAudioGameplayVolumeProxyInfo>_> *)0x0) {
    TKeyInitializer<unsigned_int_const_&>::
    operator<unsigned_int,FAudioGameplayVolumeProxyInfo>_TTuple<unsigned_int,FAudioGameplayVolumeProxyInfo>
              ((TKeyInitializer<unsigned_int_const_&> *)param_3,local_38.Pointer);
    *(undefined4 *)((longlong)local_38.Pointer + 0xb8) = 0xffffffff;
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
      *(uint *)((longlong)local_38.Pointer + 0xbc) = uVar7;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar7;
      *(undefined4 *)((longlong)local_38.Pointer + 0xb8) =
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

// EmplaceByHash<TPairInitializer<FName_const_&,int_const_&>_> @ 14d99a550

FSetElementId __thiscall
TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
EmplaceByHash<TPairInitializer<FName_const_&,int_const_&>_>
          (TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
           *this,uint param_1,TPairInitializer<FName_const_&,int_const_&> *param_2,bool *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined4 *puVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  int local_res8 [2];
  bool *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar1 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x14,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar6 * 0x14);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x14) = 0xffffffff;
    }
  }
  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar6);
  if (local_38.Pointer != (TSparseSetElement<TTuple<FName,int>_> *)0x0) {
    puVar4 = *(undefined4 **)(param_3 + 8);
    *(undefined8 *)local_38.Pointer = **(undefined8 **)param_3;
    *(undefined4 *)((longlong)local_38.Pointer + 8) = *puVar4;
    *(undefined4 *)((longlong)local_38.Pointer + 0xc) = 0xffffffff;
  }
  local_res8[0] = local_38.Index;
  bVar5 = TryReplaceExisting(this,(uint)param_2,local_38.Pointer,local_res8,in_stack_00000028);
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
      uVar8 = this->HashSize - 1U & (uint)param_2;
      *(uint *)((longlong)local_38.Pointer + 0x10) = uVar8;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar8;
      *(undefined4 *)((longlong)local_38.Pointer + 0xc) =
           *(undefined4 *)((longlong)FVar9 + uVar7 * 4);
      *(int *)((longlong)FVar9 + uVar7 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_res8[0];
  return (FSetElementId)param_1;
}

// RemoveImpl<unsigned_int> @ 14d99e410

int __thiscall
TSet<TTuple<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>,0>,FDefaultSetAllocator>
::RemoveImpl<unsigned_int>
          (TSet<TTuple<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>,0>,FDefaultSetAllocator>
           *this,uint param_1,uint *param_2)

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
        *(uint *)(lVar7 + *(longlong *)&this->Elements) != *param_2) {
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
         (uVar6 & 0x1f) & 1) != 0) goto LAB_14d99e4f7;
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
LAB_14d99e4f7:
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

// RemoveImpl<unsigned_int> @ 14d99e590

int __thiscall
TSet<TTuple<unsigned_int,FAudioGameplayActiveSoundInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioGameplayActiveSoundInfo,0>,FDefaultSetAllocator>
::RemoveImpl<unsigned_int>
          (TSet<TTuple<unsigned_int,FAudioGameplayActiveSoundInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioGameplayActiveSoundInfo,0>,FDefaultSetAllocator>
           *this,uint param_1,uint *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined1 *puVar9;
  
  FVar5 = (this->Hash).SecondaryData;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar6 = *(uint *)((longlong)FVar5 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar6 == 0xffffffff) {
    return 0;
  }
  while (lVar8 = (longlong)(int)uVar6 * 0x98,
        *(uint *)(lVar8 + *(longlong *)&this->Elements) != *param_2) {
    uVar6 = *(uint *)(lVar8 + 0x90 + *(longlong *)&this->Elements);
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
         (uVar6 & 0x1f) & 1) != 0) goto LAB_14d99e674;
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
LAB_14d99e674:
  FVar5 = (this->Hash).SecondaryData;
  lVar8 = *(longlong *)&this->Elements + lVar8;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar7 = (uint *)((longlong)FVar5 + (longlong)*(int *)(lVar8 + 0x94) * 4);
  while( true ) {
    uVar1 = *puVar7;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == uVar6) {
      *puVar7 = *(uint *)(lVar8 + 0x90);
      TSparseArray<TSparseSetElement<TTuple<unsigned_int,FAudioGameplayActiveSoundInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar6,1);
      TSparseArrayBase<152,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<152,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar6,1);
      return 1;
    }
    puVar7 = (uint *)(*(longlong *)&this->Elements + 0x90 + (longlong)(int)uVar1 * 0x98);
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

// Difference @ 14d9a44e0

TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> * __thiscall
TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Difference
          (TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *this,
          TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>
          *__return_storage_ptr__,
          TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  longlong lVar5;
  undefined1 *puVar6;
  void *pvVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  byte bVar12;
  ForElementType<FSetElementId> FVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  undefined1 *this_00;
  ulonglong uVar19;
  uint *puVar20;
  uint *puVar21;
  int local_res8 [2];
  int local_b8;
  uint uStack_b4;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  FSparseArrayAllocationInfo local_40;
  
  puVar1 = &(__return_storage_ptr__->Elements).field_0x8;
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined4 *)puVar1 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0xc = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  uVar17 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if (uVar17 == 0) goto LAB_14d9a475c;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar17);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)__return_storage_ptr__,uVar17);
  if (uVar17 < 4) {
    uVar17 = 1;
  }
  else {
    uVar15 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar17 = 1 << ((byte)lVar16 & 0x1f);
  }
  if ((__return_storage_ptr__->HashSize != 0) && ((int)uVar17 <= __return_storage_ptr__->HashSize))
  goto LAB_14d9a475c;
  __return_storage_ptr__->HashSize = uVar17;
  if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,0,4);
  }
  if (uVar17 != 0) {
    uVar14 = uVar17;
    if (uVar17 < 2) {
      if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
        uVar14 = 0;
        goto LAB_14d9a45c8;
      }
    }
    else {
LAB_14d9a45c8:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,uVar14,4);
    }
    uVar15 = 0;
    if (0 < (int)uVar17) {
      uVar19 = (ulonglong)uVar17;
      do {
        FVar4 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar13 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar13 = FVar4;
        }
        uVar11 = (longlong)(int)uVar17 - 1U & uVar15;
        uVar15 = uVar15 + 1;
        *(undefined4 *)((longlong)FVar13 + uVar11 * 4) = 0xffffffff;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
  }
  if (__return_storage_ptr__->HashSize != 0) {
    iVar2 = *(int *)&(__return_storage_ptr__->Elements).field_0x28;
    TStack_60.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)&(__return_storage_ptr__->Elements).field_0x10;
    uStack_b4 = 1;
    local_b8 = 0;
    iStack_a4 = 0;
    iStack_a0 = 0;
    if (iVar2 != 0) {
      puVar21 = *(uint **)&(__return_storage_ptr__->Elements).field_0x20;
      if (puVar21 == (uint *)0x0) {
        puVar21 = (uint *)TStack_60.Array;
      }
      uVar17 = *puVar21;
      iStack_a0 = 0;
      local_b8 = 0;
      while (uVar17 == 0) {
        iStack_a0 = iStack_a0 + 0x20;
        lVar16 = (longlong)local_b8;
        local_b8 = local_b8 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_b8) goto LAB_14d9a46c9;
        uVar17 = puVar21[lVar16 + 1];
      }
      uStack_b4 = -uVar17 & uVar17;
      uVar15 = (ulonglong)uStack_b4 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iStack_a4 = (int)lVar16 + -1 + iStack_a0;
      if (iVar2 < iStack_a4) {
LAB_14d9a46c9:
        iStack_a4 = iVar2;
      }
    }
    TStack_60._padding_._0_4_ = local_b8;
    TStack_60._padding_._4_4_ = uStack_b4;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    TStack_60.CurrentBitIndex = iStack_a4;
    TStack_60._28_4_ = uStack_9c;
    TStack_60.BaseBitIndex = iStack_a0;
    local_68 = __return_storage_ptr__;
    if (iStack_a4 < iVar2) {
      do {
        uVar17 = __return_storage_ptr__->HashSize - 1U &
                 *(uint *)(*(longlong *)&local_68->Elements +
                          (longlong)TStack_60.CurrentBitIndex * 0xc);
        lVar16 = *(longlong *)&local_68->Elements + (longlong)TStack_60.CurrentBitIndex * 0xc;
        *(uint *)(lVar16 + 8) = uVar17;
        FVar4 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar13 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar13 = FVar4;
        }
        uVar15 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar17;
        *(undefined4 *)(lVar16 + 4) = *(undefined4 *)((longlong)FVar13 + uVar15 * 4);
        *(int *)((longlong)FVar13 + uVar15 * 4) = TStack_60.CurrentBitIndex;
        TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
    }
  }
LAB_14d9a475c:
  TStack_90.BaseBitIndex = 0;
  iVar2 = *(int *)&(this->Elements).field_0x28;
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
  TStack_90._padding_._0_4_ = 0;
  TStack_90._padding_._4_4_ = 1;
  TStack_90.CurrentBitIndex = TStack_90.BaseBitIndex;
  if (iVar2 != 0) {
    puVar21 = *(uint **)&(this->Elements).field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)TStack_90.Array;
    }
    uVar17 = *puVar21;
    TStack_90._padding_._0_4_ = 0;
    while (uVar17 == 0) {
      lVar16 = (longlong)(int)TStack_90._padding_;
      TStack_90.BaseBitIndex = TStack_90.BaseBitIndex + 0x20;
      TStack_90._padding_._0_4_ = (int)TStack_90._padding_ + 1;
      TStack_90.CurrentBitIndex = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)TStack_90._padding_)
      goto LAB_14d9a47db;
      uVar17 = puVar21[lVar16 + 1];
    }
    TStack_90._padding_._4_4_ = -uVar17 & uVar17;
    uVar15 = (ulonglong)TStack_90._padding_._4_4_ * 2 + 1;
    lVar16 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    TStack_90.CurrentBitIndex = TStack_90.BaseBitIndex + -1 + (int)lVar16;
    if (iVar2 < TStack_90.CurrentBitIndex) {
      TStack_90.CurrentBitIndex = iVar2;
    }
  }
LAB_14d9a47db:
  TStack_90.UnvisitedBitMask = 0xffffffff;
  TStack_90._28_4_ = uStack_9c;
  TStack_60.BaseBitIndex = TStack_90.BaseBitIndex;
  TStack_60._28_4_ = uStack_9c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  local_68 = this;
  TStack_60.Array = TStack_90.Array;
  TStack_60._padding_._0_4_ = (int)TStack_90._padding_;
  TStack_60._padding_._4_4_ = TStack_90._padding_._4_4_;
  TStack_60.CurrentBitIndex = TStack_90.CurrentBitIndex;
  if (TStack_90.CurrentBitIndex < iVar2) {
    do {
      iVar2 = TStack_60.CurrentBitIndex;
      lVar16 = *(longlong *)&local_68->Elements;
      uVar17 = *(uint *)(lVar16 + (longlong)TStack_60.CurrentBitIndex * 0xc);
      if (*(int *)&(param_1->Elements).field_0x8 != *(int *)&(param_1->Elements).field_0x34) {
        FVar4 = (param_1->Hash).SecondaryData;
        FVar13 = (ForElementType<FSetElementId>)&param_1->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar13 = FVar4;
        }
        iVar10 = *(int *)((longlong)FVar13 + (ulonglong)(param_1->HashSize - 1U & uVar17) * 4);
        if (iVar10 != -1) {
          do {
            if (*(uint *)(*(longlong *)&param_1->Elements + (longlong)iVar10 * 0xc) == uVar17)
            goto LAB_14d9a4bcf;
            iVar10 = *(int *)(*(longlong *)&param_1->Elements + 4 + (longlong)iVar10 * 0xc);
          } while (iVar10 != -1);
        }
      }
      iVar10 = *(int *)&(__return_storage_ptr__->Elements).field_0x34;
      if (iVar10 == 0) {
        iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0xc,4,1,(ForAnyElementType *)__return_storage_ptr__,(int *)puVar1,
                           (int *)&(__return_storage_ptr__->Elements).field_0xc);
        this_00 = &(__return_storage_ptr__->Elements).field_0x10;
        iVar10 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                           ((TBitArray<FDefaultBitArrayAllocator> *)this_00,1);
        puVar6 = *(undefined1 **)&(__return_storage_ptr__->Elements).field_0x20;
        if (puVar6 != (undefined1 *)0x0) {
          this_00 = puVar6;
        }
        bVar12 = (byte)iVar10 & 0x1f;
        if (iVar10 < 0) {
          iVar10 = iVar10 + 0x1f;
          bVar12 = bVar12 - 0x20;
        }
        *(uint *)(this_00 + (longlong)(iVar10 >> 5) * 4) =
             *(uint *)(this_00 + (longlong)(iVar10 >> 5) * 4) & ~(1 << (bVar12 & 0x1f));
      }
      else {
        iVar9 = *(int *)&(__return_storage_ptr__->Elements).field_0x30;
        iVar10 = iVar10 + -1;
        lVar5 = *(longlong *)&__return_storage_ptr__->Elements;
        iVar3 = *(int *)(lVar5 + 4 + (longlong)iVar9 * 0xc);
        *(int *)&(__return_storage_ptr__->Elements).field_0x30 = iVar3;
        *(int *)&(__return_storage_ptr__->Elements).field_0x34 = iVar10;
        if (iVar10 != 0) {
          *(undefined4 *)(lVar5 + (longlong)iVar3 * 0xc) = 0xffffffff;
        }
      }
      TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)__return_storage_ptr__,&local_40,iVar9);
      pvVar7 = local_40.Pointer;
      if (local_40.Pointer != (TSparseSetElement<unsigned_int> *)0x0) {
        *(undefined4 *)local_40.Pointer = *(undefined4 *)(lVar16 + (longlong)iVar2 * 0xc);
        *(undefined4 *)((longlong)local_40.Pointer + 4) = 0xffffffff;
      }
      uVar17 = *(uint *)local_40.Pointer;
      local_res8[0] = local_40.Index;
      bVar8 = TryReplaceExisting(__return_storage_ptr__,uVar17,local_40.Pointer,local_res8,
                                 (bool *)0x0);
      if (!bVar8) {
        uVar18 = 1;
        uVar14 = *(int *)puVar1 - *(int *)&(__return_storage_ptr__->Elements).field_0x34;
        if (3 < uVar14) {
          uVar15 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
          lVar16 = 0x3f;
          if (uVar15 != 0) {
            for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          uVar18 = 1 << ((byte)lVar16 & 0x1f);
        }
        if (((int)uVar14 < 1) || ((int)uVar18 <= __return_storage_ptr__->HashSize)) {
          uVar17 = __return_storage_ptr__->HashSize - 1U & uVar17;
          *(uint *)((longlong)pvVar7 + 8) = uVar17;
          FVar4 = (__return_storage_ptr__->Hash).SecondaryData;
          FVar13 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
          if (FVar4 != (ForElementType<FSetElementId>)0x0) {
            FVar13 = FVar4;
          }
          uVar15 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar17;
          *(undefined4 *)((longlong)pvVar7 + 4) = *(undefined4 *)((longlong)FVar13 + uVar15 * 4);
          *(int *)((longlong)FVar13 + uVar15 * 4) = local_res8[0];
        }
        else {
          __return_storage_ptr__->HashSize = uVar18;
          if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,0,4);
          }
          if (uVar18 != 0) {
            uVar17 = uVar18;
            if (uVar18 < 2) {
              if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0
                 ) {
                uVar17 = 0;
                goto LAB_14d9a49f8;
              }
            }
            else {
LAB_14d9a49f8:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,uVar17
                         ,4);
            }
            if (0 < (int)uVar18) {
              uVar19 = (ulonglong)uVar18;
              uVar15 = 0;
              do {
                FVar4 = (__return_storage_ptr__->Hash).SecondaryData;
                FVar13 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
                if (FVar4 != (ForElementType<FSetElementId>)0x0) {
                  FVar13 = FVar4;
                }
                uVar11 = uVar15 & (longlong)(int)uVar18 - 1U;
                uVar15 = uVar15 + 1;
                *(undefined4 *)((longlong)FVar13 + uVar11 * 4) = 0xffffffff;
                uVar19 = uVar19 - 1;
              } while (uVar19 != 0);
            }
          }
          if (__return_storage_ptr__->HashSize != 0) {
            iVar2 = *(int *)&(__return_storage_ptr__->Elements).field_0x28;
            TStack_90.Array =
                 (TBitArray<FDefaultBitArrayAllocator> *)
                 &(__return_storage_ptr__->Elements).field_0x10;
            uStack_b4 = 1;
            local_b8 = 0;
            iStack_a4 = 0;
            iStack_a0 = 0;
            if (iVar2 != 0) {
              puVar21 = *(uint **)&(__return_storage_ptr__->Elements).field_0x20;
              puVar20 = (uint *)TStack_90.Array;
              if (puVar21 != (uint *)0x0) {
                puVar20 = puVar21;
              }
              uVar17 = *puVar20;
              iStack_a0 = 0;
              local_b8 = 0;
              while (uVar17 == 0) {
                iStack_a0 = iStack_a0 + 0x20;
                lVar16 = (longlong)local_b8;
                local_b8 = local_b8 + 1;
                if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_b8)
                goto LAB_14d9a4ae9;
                uVar17 = puVar20[lVar16 + 1];
              }
              uStack_b4 = -uVar17 & uVar17;
              uVar15 = (ulonglong)uStack_b4 * 2 + 1;
              lVar16 = 0x3f;
              if (uVar15 != 0) {
                for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                }
              }
              iStack_a4 = (int)lVar16 + -1 + iStack_a0;
              if (iVar2 < iStack_a4) {
LAB_14d9a4ae9:
                TStack_90._padding_._0_4_ = local_b8;
                TStack_90._padding_._4_4_ = uStack_b4;
                TStack_90.UnvisitedBitMask = 0xffffffff;
                TStack_90.BaseBitIndex = iStack_a0;
                TStack_90.CurrentBitIndex = iVar2;
                goto LAB_14d9a4bcf;
              }
            }
            TStack_90._padding_._0_4_ = local_b8;
            TStack_90._padding_._4_4_ = uStack_b4;
            TStack_90.CurrentBitIndex = iStack_a4;
            TStack_90.BaseBitIndex = iStack_a0;
            TStack_90.UnvisitedBitMask = 0xffffffff;
            uVar17 = 0xffffffff;
            if (iStack_a4 < iVar2) {
              do {
                TStack_90.UnvisitedBitMask = uVar17;
                uVar17 = __return_storage_ptr__->HashSize - 1U &
                         *(uint *)(*(longlong *)&__return_storage_ptr__->Elements +
                                  (longlong)TStack_90.CurrentBitIndex * 0xc);
                lVar16 = *(longlong *)&__return_storage_ptr__->Elements +
                         (longlong)TStack_90.CurrentBitIndex * 0xc;
                *(uint *)(lVar16 + 8) = uVar17;
                FVar4 = (__return_storage_ptr__->Hash).SecondaryData;
                FVar13 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
                if (FVar4 != (ForElementType<FSetElementId>)0x0) {
                  FVar13 = FVar4;
                }
                uVar15 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar17;
                *(undefined4 *)(lVar16 + 4) = *(undefined4 *)((longlong)FVar13 + uVar15 * 4);
                *(int *)((longlong)FVar13 + uVar15 * 4) = TStack_90.CurrentBitIndex;
                TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_
                ;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
                uVar17 = TStack_90.UnvisitedBitMask;
              } while (TStack_90.CurrentBitIndex < (TStack_90.Array)->NumBits);
            }
          }
        }
      }
LAB_14d9a4bcf:
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  return __return_storage_ptr__;
}

// Rehash @ 14d9a8420

void __thiscall
TSet<TTuple<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14d9a84fc;
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
LAB_14d9a84fc:
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

// Rehash @ 14d9a85c0

void __thiscall
TSet<TTuple<unsigned_int,FAudioGameplayActiveSoundInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioGameplayActiveSoundInfo,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<unsigned_int,FAudioGameplayActiveSoundInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioGameplayActiveSoundInfo,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14d9a869c;
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
LAB_14d9a869c:
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
        puVar8 = (uint *)((longlong)local_30.CurrentBitIndex * 0x98 + *(longlong *)&this->Elements);
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

// Rehash @ 14d9a8750

void __thiscall
TSet<TTuple<unsigned_int,FAudioGameplayVolumeProxyInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioGameplayVolumeProxyInfo,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<unsigned_int,FAudioGameplayVolumeProxyInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioGameplayVolumeProxyInfo,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14d9a882c;
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
LAB_14d9a882c:
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
        puVar8 = (uint *)((longlong)local_30.CurrentBitIndex * 0xc0 + *(longlong *)&this->Elements);
        uVar7 = *piVar1 - 1U & *puVar8;
        puVar8[0x2f] = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        puVar8[0x2e] = *(uint *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Reset @ 14d9a91d0

void __thiscall
TSet<TTuple<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>,0>,FDefaultSetAllocator>
::Reset(TSet<TTuple<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>,0>,FDefaultSetAllocator>
        *this)

{
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    UnhashElements(this);
    *(undefined4 *)&(this->Elements).field_0x8 = 0;
    if (*(int *)&(this->Elements).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)this,0,(int *)&(this->Elements).field_0xc);
    }
    *(undefined4 *)&(this->Elements).field_0x34 = 0;
    *(undefined4 *)&(this->Elements).field_0x28 = 0;
    *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  }
  return;
}

// TryReplaceExisting @ 14d9a9c90

bool __thiscall
TSet<TTuple<unsigned_int,FAudioGameplayVolumeProxyInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioGameplayVolumeProxyInfo,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<unsigned_int,FAudioGameplayVolumeProxyInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioGameplayVolumeProxyInfo,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<unsigned_int,FAudioGameplayVolumeProxyInfo>_> *param_2,
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
  void *_Dst;
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
        if (*(int *)((longlong)iVar13 * 0xc0 + lVar4) == *(int *)param_2) {
          bVar15 = iVar13 != -1;
          if (bVar15) {
            _Dst = (void *)((longlong)iVar13 * 0xc0 + lVar4);
            FAudioGameplayVolumeProxyInfo::~FAudioGameplayVolumeProxyInfo
                      ((FAudioGameplayVolumeProxyInfo *)((longlong)_Dst + 8));
            memmove(_Dst,param_2,0xb8);
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
              *(int *)((longlong)*(int *)&(this->Elements).field_0x30 * 0xc0 + lVar4) = iVar3;
            }
            uVar9 = 0xffffffff;
            puVar11 = (undefined4 *)((longlong)iVar3 * 0xc0 + lVar4);
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
        iVar13 = *(int *)((longlong)iVar13 * 0xc0 + 0xb8 + lVar4);
      } while (iVar13 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar15;
  }
  return bVar15;
}

// UnhashElements @ 14d9a9ec0

void __thiscall
TSet<TTuple<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14d9a9fbb;
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
LAB_14d9a9fbb:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14d9aa0b0;
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
LAB_14d9aa0b0:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)(*(longlong *)&this->Elements + 0x14 + (longlong)local_60.CurrentBitIndex * 0x18) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

