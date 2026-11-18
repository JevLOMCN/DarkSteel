// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaFrameworkUtilities
// Functions: 21

// Emplace<TObjectPtr<UMediaCapture>_> @ 14d7cce10

FSetElementId __thiscall
TSet<TObjectPtr<UMediaCapture>,DefaultKeyFuncs<TObjectPtr<UMediaCapture>,0>,FDefaultSetAllocator>::
Emplace<TObjectPtr<UMediaCapture>_>
          (TSet<TObjectPtr<UMediaCapture>,DefaultKeyFuncs<TObjectPtr<UMediaCapture>,0>,FDefaultSetAllocator>
           *this,TObjectPtr<UMediaCapture> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  UObject *pUVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  char *in_R9;
  int iVar10;
  bool bVar11;
  TObjectPtr<UMediaCapture_const_>_u_0 local_res8;
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
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer != (undefined8 *)0x0) {
    pUVar3 = *(UObject **)param_2;
    *(UObject **)local_48.Pointer = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    *(undefined4 *)((longlong)local_48.Pointer + 8) = 0xffffffff;
  }
  pUVar3 = *(UObject **)local_48.Pointer;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  bVar11 = false;
  uVar5 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  iVar10 = local_48.Index;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    local_res8.DebugPtr = *(UMediaCapture **)local_48.Pointer;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res8.DebugPtr != (UMediaCapture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
    }
    iVar4 = FindIndexByHash<TObjectPtr<UMediaCapture_const_>_>
                      (this,uVar5,(TObjectPtr<UMediaCapture_const_> *)&local_res8.ObjectPtr);
    bVar11 = iVar4 != -1;
    if (bVar11) {
      *(undefined8 *)(*(longlong *)&this->Elements + (longlong)iVar4 * 0x10) =
           *(undefined8 *)local_48.Pointer;
      TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      iVar10 = iVar4;
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
      *(uint *)((longlong)local_48.Pointer + 0xc) = uVar5;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)((longlong)local_48.Pointer + 8) = *(undefined4 *)((longlong)FVar8 + uVar6 * 4)
      ;
      *(int *)((longlong)FVar8 + uVar6 * 4) = iVar10;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->field0_0x0 = iVar10;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<int_&&,TObjectPtr<UMediaCapture>_const_&>_> @ 14d7cd040

FSetElementId __thiscall
TSet<TTuple<int,TObjectPtr<UMediaCapture>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaCapture>,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<int_&&,TObjectPtr<UMediaCapture>_const_&>_>
          (TSet<TTuple<int,TObjectPtr<UMediaCapture>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaCapture>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<int_&&,TObjectPtr<UMediaCapture>_const_&> *param_1,bool *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  UObject *pUVar5;
  int iVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  char *in_R9;
  bool bVar9;
  FSparseArrayAllocationInfo local_38;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  if (iVar8 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    iVar8 = iVar8 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar3 + 4 + (longlong)iVar6 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar1 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar6);
  if (local_38.Pointer != (TSparseSetElement<TTuple<int,TObjectPtr<UMediaCapture>_>_> *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 8);
    *(undefined4 *)local_38.Pointer = **(undefined4 **)param_2;
    pUVar5 = (UObject *)*puVar4;
    *(UObject **)((longlong)local_38.Pointer + 8) = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    *(undefined4 *)((longlong)local_38.Pointer + 0x10) = 0xffffffff;
  }
  iVar8 = *(int *)&(this->Elements).field_0x8;
  bVar9 = false;
  iVar6 = *(int *)&(this->Elements).field_0x34;
  uVar2 = *(uint *)local_38.Pointer;
  if ((iVar8 - iVar6 != 1) && (iVar8 != iVar6)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar8 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar2) * 4);
    if (iVar8 != -1) {
      lVar3 = *(longlong *)&this->Elements;
      do {
        if (*(uint *)(lVar3 + (longlong)iVar8 * 0x18) == uVar2) {
          bVar9 = iVar8 != -1;
          if (bVar9) {
            memmove((void *)(lVar3 + (longlong)iVar8 * 0x18),local_38.Pointer,0x10);
            TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar8;
          }
          break;
        }
        iVar8 = *(int *)(lVar3 + 0x10 + (longlong)iVar8 * 0x18);
      } while (iVar8 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar9;
  }
  if (bVar9 == false) {
    RehashOrLink(this,uVar2,local_38.Pointer,local_38.Index);
  }
  *(int *)&param_1->Key = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<int_&&,TObjectPtr<UMediaPlayer>_const_&>_> @ 14d7cd200

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FSetElementId __thiscall
TSet<TTuple<int,TObjectPtr<UMediaPlayer>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaPlayer>,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<int_&&,TObjectPtr<UMediaPlayer>_const_&>_>
          (TSet<TTuple<int,TObjectPtr<UMediaPlayer>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaPlayer>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<int_&&,TObjectPtr<UMediaPlayer>_const_&> *param_1,bool *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  UObject *pUVar5;
  int iVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  char *in_R9;
  bool bVar9;
  FSparseArrayAllocationInfo local_38;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  if (iVar8 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    iVar8 = iVar8 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar3 + 4 + (longlong)iVar6 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar1 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar6);
  if (local_38.Pointer != (TSparseSetElement<TTuple<int,TObjectPtr<UMediaPlayer>_>_> *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 8);
    *(undefined4 *)local_38.Pointer = **(undefined4 **)param_2;
    pUVar5 = (UObject *)*puVar4;
    *(UObject **)((longlong)local_38.Pointer + 8) = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    *(undefined4 *)((longlong)local_38.Pointer + 0x10) = 0xffffffff;
  }
  iVar8 = *(int *)&(this->Elements).field_0x8;
  bVar9 = false;
  iVar6 = *(int *)&(this->Elements).field_0x34;
  uVar2 = *(uint *)local_38.Pointer;
  if ((iVar8 - iVar6 != 1) && (iVar8 != iVar6)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar8 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar2) * 4);
    if (iVar8 != -1) {
      lVar3 = *(longlong *)&this->Elements;
      do {
        if (*(uint *)(lVar3 + (longlong)iVar8 * 0x18) == uVar2) {
          bVar9 = iVar8 != -1;
          if (bVar9) {
            memmove((void *)(lVar3 + (longlong)iVar8 * 0x18),local_38.Pointer,0x10);
            TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar8;
          }
          break;
        }
        iVar8 = *(int *)(lVar3 + 0x10 + (longlong)iVar8 * 0x18);
      } while (iVar8 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar9;
  }
  if (bVar9 == false) {
    RehashOrLink(this,uVar2,local_38.Pointer,local_38.Index);
  }
  *(int *)&param_1->Key = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<TObjectPtr<UMediaPlayer>_&&,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>_&&>_> @ 14d7cd3c0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FSetElementId __thiscall
TSet<TTuple<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<TObjectPtr<UMediaPlayer>_&&,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>_&&>_>
          (TSet<TTuple<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<TObjectPtr<UMediaPlayer>_&&,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>_&&>
                 *param_1,bool *param_2)

{
  longlong *this_00;
  int iVar1;
  longlong lVar2;
  TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator> *pTVar3;
  UObject *pUVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ForElementType<FSetElementId> FVar10;
  int iVar11;
  char *in_R9;
  bool bVar12;
  TObjectPtr<UMediaPlayer_const_>_u_0 local_res10;
  FSparseArrayAllocationInfo local_48;
  
  iVar6 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar6 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x60,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar6 = iVar6 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar5 * 0x60 + 4 + lVar2);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x60 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar5);
  if (local_48.Pointer != (undefined8 *)0x0) {
    pTVar3 = *(TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator> **)(param_2 + 8);
    pUVar4 = (UObject *)**(undefined8 **)param_2;
    *(UObject **)local_48.Pointer = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>::
    TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>
              ((TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator> *)
               ((longlong)local_48.Pointer + 8),pTVar3);
    *(undefined4 *)((longlong)local_48.Pointer + 0x58) = 0xffffffff;
  }
  pUVar4 = *(UObject **)local_48.Pointer;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  bVar12 = false;
  uVar7 = ((uint)((ulonglong)pUVar4 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar4 >> 4)) *
          -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  uVar7 = uVar7 >> 0x10 ^ uVar7;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    local_res10.DebugPtr = *(UMediaPlayer **)local_48.Pointer;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res10.DebugPtr != (UMediaPlayer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res10.DebugPtr);
    }
    iVar6 = FindIndexByHash<TObjectPtr<UMediaPlayer_const_>_>
                      (this,uVar7,(TObjectPtr<UMediaPlayer_const_> *)&local_res10.ObjectPtr);
    bVar12 = iVar6 != -1;
    if (bVar12) {
      local_res10.DebugPtr = (UMediaPlayer *)((longlong)iVar6 * 0x60 + *(longlong *)&this->Elements)
      ;
      this_00 = &(local_res10.DebugPtr)->_padding_;
      *(undefined4 *)&((local_res10.DebugPtr)->OnMediaClosed).field_0x8 = 0;
      if (*(void **)&(local_res10.DebugPtr)->OnMediaClosed != (void *)0x0) {
        FMemory::Free(*(void **)&(local_res10.DebugPtr)->OnMediaClosed);
      }
      TSparseArray<TSparseSetElement<void_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<void_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<void_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this_00);
      memmove(local_res10.DebugPtr,local_48.Pointer,0x58);
      TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      local_48.Index = iVar6;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar12;
  }
  if (bVar12 == false) {
    uVar9 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar9) {
      uVar8 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar11 <= this->HashSize)) {
      uVar7 = this->HashSize - 1U & uVar7;
      *(uint *)((longlong)local_48.Pointer + 0x5c) = uVar7;
      FVar10 = (this->Hash).SecondaryData;
      if (FVar10 == (ForElementType<FSetElementId>)0x0) {
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar7;
      *(undefined4 *)((longlong)local_48.Pointer + 0x58) =
           *(undefined4 *)((longlong)FVar10 + uVar8 * 4);
      *(int *)((longlong)FVar10 + uVar8 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar11;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<int_const_&,TObjectPtr<UMediaCapture>_&&>_> @ 14d7cd650

FSetElementId __thiscall
TSet<TTuple<int,TObjectPtr<UMediaCapture>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaCapture>,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<int_const_&,TObjectPtr<UMediaCapture>_&&>_>
          (TSet<TTuple<int,TObjectPtr<UMediaCapture>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaCapture>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<int_const_&,TObjectPtr<UMediaCapture>_&&> *param_1,bool *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  UObject *pUVar5;
  int iVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  char *in_R9;
  bool bVar9;
  FSparseArrayAllocationInfo local_38;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  if (iVar8 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    iVar8 = iVar8 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar3 + 4 + (longlong)iVar6 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar1 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar6);
  if (local_38.Pointer != (TSparseSetElement<TTuple<int,TObjectPtr<UMediaCapture>_>_> *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 8);
    *(undefined4 *)local_38.Pointer = **(undefined4 **)param_2;
    pUVar5 = (UObject *)*puVar4;
    *(UObject **)((longlong)local_38.Pointer + 8) = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    *(undefined4 *)((longlong)local_38.Pointer + 0x10) = 0xffffffff;
  }
  iVar8 = *(int *)&(this->Elements).field_0x8;
  bVar9 = false;
  iVar6 = *(int *)&(this->Elements).field_0x34;
  uVar2 = *(uint *)local_38.Pointer;
  if ((iVar8 - iVar6 != 1) && (iVar8 != iVar6)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar8 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar2) * 4);
    if (iVar8 != -1) {
      lVar3 = *(longlong *)&this->Elements;
      do {
        if (*(uint *)(lVar3 + (longlong)iVar8 * 0x18) == uVar2) {
          bVar9 = iVar8 != -1;
          if (bVar9) {
            memmove((void *)(lVar3 + (longlong)iVar8 * 0x18),local_38.Pointer,0x10);
            TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar8;
          }
          break;
        }
        iVar8 = *(int *)(lVar3 + 0x10 + (longlong)iVar8 * 0x18);
      } while (iVar8 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar9;
  }
  if (bVar9 == false) {
    RehashOrLink(this,uVar2,local_38.Pointer,local_38.Index);
  }
  *(int *)&param_1->Key = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<int_const_&,TObjectPtr<UMediaPlayer>_&&>_> @ 14d7cd810

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FSetElementId __thiscall
TSet<TTuple<int,TObjectPtr<UMediaPlayer>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaPlayer>,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<int_const_&,TObjectPtr<UMediaPlayer>_&&>_>
          (TSet<TTuple<int,TObjectPtr<UMediaPlayer>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaPlayer>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<int_const_&,TObjectPtr<UMediaPlayer>_&&> *param_1,bool *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  UObject *pUVar5;
  int iVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  char *in_R9;
  bool bVar9;
  FSparseArrayAllocationInfo local_38;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  if (iVar8 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    iVar8 = iVar8 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar3 + 4 + (longlong)iVar6 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar1 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar6);
  if (local_38.Pointer != (TSparseSetElement<TTuple<int,TObjectPtr<UMediaPlayer>_>_> *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 8);
    *(undefined4 *)local_38.Pointer = **(undefined4 **)param_2;
    pUVar5 = (UObject *)*puVar4;
    *(UObject **)((longlong)local_38.Pointer + 8) = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    *(undefined4 *)((longlong)local_38.Pointer + 0x10) = 0xffffffff;
  }
  iVar8 = *(int *)&(this->Elements).field_0x8;
  bVar9 = false;
  iVar6 = *(int *)&(this->Elements).field_0x34;
  uVar2 = *(uint *)local_38.Pointer;
  if ((iVar8 - iVar6 != 1) && (iVar8 != iVar6)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar8 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar2) * 4);
    if (iVar8 != -1) {
      lVar3 = *(longlong *)&this->Elements;
      do {
        if (*(uint *)(lVar3 + (longlong)iVar8 * 0x18) == uVar2) {
          bVar9 = iVar8 != -1;
          if (bVar9) {
            memmove((void *)(lVar3 + (longlong)iVar8 * 0x18),local_38.Pointer,0x10);
            TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar8;
          }
          break;
        }
        iVar8 = *(int *)(lVar3 + 0x10 + (longlong)iVar8 * 0x18);
      } while (iVar8 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar9;
  }
  if (bVar9 == false) {
    RehashOrLink(this,uVar2,local_38.Pointer,local_38.Index);
  }
  *(int *)&param_1->Key = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// FindIndexByHash<TObjectPtr<UMediaCapture_const_>_> @ 14d7cd9d0

int __thiscall
TSet<TObjectPtr<UMediaCapture>,DefaultKeyFuncs<TObjectPtr<UMediaCapture>,0>,FDefaultSetAllocator>::
FindIndexByHash<TObjectPtr<UMediaCapture_const_>_>
          (TSet<TObjectPtr<UMediaCapture>,DefaultKeyFuncs<TObjectPtr<UMediaCapture>,0>,FDefaultSetAllocator>
           *this,uint param_1,TObjectPtr<UMediaCapture_const_> *param_2)

{
  int iVar1;
  UMediaCapture *pUVar2;
  UMediaCapture *pUVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar4 = (this->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar1 = *(int *)((longlong)FVar4 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
        iVar1 != -1; iVar1 = *(int *)(*(longlong *)&this->Elements + 8 + (longlong)iVar1 * 0x10)) {
      pUVar2 = (param_2->field0_0x0).DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UMediaCapture *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      pUVar3 = *(UMediaCapture **)(*(longlong *)&this->Elements + (longlong)iVar1 * 0x10);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UMediaCapture *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      if (pUVar3 == pUVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}

// FindIndexByHash<TObjectPtr<UMediaPlayer_const_>_> @ 14d7cdaa0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

int __thiscall
TSet<TTuple<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
::FindIndexByHash<TObjectPtr<UMediaPlayer_const_>_>
          (TSet<TTuple<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
           *this,uint param_1,TObjectPtr<UMediaPlayer_const_> *param_2)

{
  int iVar1;
  UMediaPlayer *pUVar2;
  UMediaPlayer *pUVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar4 = (this->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar1 = *(int *)((longlong)FVar4 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
        iVar1 != -1; iVar1 = *(int *)(*(longlong *)&this->Elements + 0x58 + (longlong)iVar1 * 0x60))
    {
      pUVar2 = (param_2->field0_0x0).DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UMediaPlayer *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      pUVar3 = *(UMediaPlayer **)((longlong)iVar1 * 0x60 + *(longlong *)&this->Elements);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UMediaPlayer *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      if (pUVar3 == pUVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}

// RemoveImpl<int> @ 14d7cf840

int __thiscall
TSet<TTuple<int,TObjectPtr<UMediaCapture>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaCapture>,0>,FDefaultSetAllocator>
::RemoveImpl<int>(TSet<TTuple<int,TObjectPtr<UMediaCapture>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaCapture>,0>,FDefaultSetAllocator>
                  *this,uint param_1,int *param_2)

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
        *(int *)(lVar7 + *(longlong *)&this->Elements) != *param_2) {
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
         (uVar6 & 0x1f) & 1) != 0) goto LAB_14d7cf927;
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
LAB_14d7cf927:
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

// RemoveImpl<int> @ 14d7cf9c0

int __thiscall
TSet<TTuple<int,TObjectPtr<UMediaPlayer>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaPlayer>,0>,FDefaultSetAllocator>
::RemoveImpl<int>(TSet<TTuple<int,TObjectPtr<UMediaPlayer>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaPlayer>,0>,FDefaultSetAllocator>
                  *this,uint param_1,int *param_2)

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
        *(int *)(lVar7 + *(longlong *)&this->Elements) != *param_2) {
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
         (uVar6 & 0x1f) & 1) != 0) goto LAB_14d7cfaa7;
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
LAB_14d7cfaa7:
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

// RemoveImpl<TObjectPtr<UMediaCapture_const_>_> @ 14d7cfb40

int __thiscall
TSet<TObjectPtr<UMediaCapture>,DefaultKeyFuncs<TObjectPtr<UMediaCapture>,0>,FDefaultSetAllocator>::
RemoveImpl<TObjectPtr<UMediaCapture_const_>_>
          (TSet<TObjectPtr<UMediaCapture>,DefaultKeyFuncs<TObjectPtr<UMediaCapture>,0>,FDefaultSetAllocator>
           *this,uint param_1,TObjectPtr<UMediaCapture_const_> *param_2)

{
  uint uVar1;
  longlong lVar2;
  UMediaCapture *pUVar3;
  UMediaCapture *pUVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ForElementType<FSetElementId> FVar8;
  uint uVar9;
  uint *puVar10;
  undefined1 *puVar11;
  longlong lVar12;
  
  FVar8 = (this->Hash).SecondaryData;
  if (FVar8 == (ForElementType<FSetElementId>)0x0) {
    FVar8 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar9 = *(uint *)((longlong)FVar8 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar9 == 0xffffffff) {
    return 0;
  }
  while( true ) {
    lVar2 = *(longlong *)&this->Elements;
    pUVar3 = (param_2->field0_0x0).DebugPtr;
    lVar12 = (longlong)(int)uVar9 * 0x10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UMediaCapture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    pUVar4 = *(UMediaCapture **)(lVar2 + lVar12);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UMediaCapture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    if (pUVar4 == pUVar3) break;
    uVar9 = *(uint *)(lVar2 + 8 + lVar12);
    if (uVar9 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar9) && ((int)uVar9 < *(int *)&(this->Elements).field_0x28)) {
    puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar11 + (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar9 & 0x1f) & 1) != 0) goto LAB_14d7cfc59;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    iVar7 = (*pcVar5)();
    return iVar7;
  }
LAB_14d7cfc59:
  lVar12 = lVar12 + *(longlong *)&this->Elements;
  FVar8 = (this->Hash).SecondaryData;
  if (FVar8 == (ForElementType<FSetElementId>)0x0) {
    FVar8 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar10 = (uint *)((longlong)FVar8 + (longlong)*(int *)(lVar12 + 0xc) * 4);
  while( true ) {
    uVar1 = *puVar10;
    if ((uVar1 == 0xffffffff) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar6)) break;
    if (uVar1 == uVar9) {
      *puVar10 = *(uint *)(lVar12 + 8);
      TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar9,1);
      return 1;
    }
    puVar10 = (uint *)(*(longlong *)&this->Elements + 8 + (longlong)(int)uVar1 * 0x10);
  }
  pcVar5 = (code *)swi(3);
  iVar7 = (*pcVar5)();
  return iVar7;
}

// RemoveImpl<TObjectPtr<UMediaPlayer_const_>_> @ 14d7cfcf0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

int __thiscall
TSet<TTuple<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
::RemoveImpl<TObjectPtr<UMediaPlayer_const_>_>
          (TSet<TTuple<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
           *this,uint param_1,TObjectPtr<UMediaPlayer_const_> *param_2)

{
  uint uVar1;
  longlong lVar2;
  UMediaPlayer *pUVar3;
  UMediaPlayer *pUVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ForElementType<FSetElementId> FVar8;
  uint uVar9;
  uint *puVar10;
  undefined1 *puVar11;
  longlong lVar12;
  
  FVar8 = (this->Hash).SecondaryData;
  if (FVar8 == (ForElementType<FSetElementId>)0x0) {
    FVar8 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar9 = *(uint *)((longlong)FVar8 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar9 == 0xffffffff) {
    return 0;
  }
  while( true ) {
    lVar2 = *(longlong *)&this->Elements;
    pUVar3 = (param_2->field0_0x0).DebugPtr;
    lVar12 = (longlong)(int)uVar9 * 0x60;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UMediaPlayer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    pUVar4 = *(UMediaPlayer **)(lVar2 + lVar12);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UMediaPlayer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    if (pUVar4 == pUVar3) break;
    uVar9 = *(uint *)(lVar2 + 0x58 + lVar12);
    if (uVar9 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar9) && ((int)uVar9 < *(int *)&(this->Elements).field_0x28)) {
    puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar11 + (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar9 & 0x1f) & 1) != 0) goto LAB_14d7cfe0d;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    iVar7 = (*pcVar5)();
    return iVar7;
  }
LAB_14d7cfe0d:
  FVar8 = (this->Hash).SecondaryData;
  lVar2 = *(longlong *)&this->Elements;
  if (FVar8 == (ForElementType<FSetElementId>)0x0) {
    FVar8 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar10 = (uint *)((longlong)FVar8 + (longlong)*(int *)(lVar2 + 0x5c + lVar12) * 4);
  while( true ) {
    uVar1 = *puVar10;
    if ((uVar1 == 0xffffffff) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar6)) break;
    if (uVar1 == uVar9) {
      *puVar10 = *(uint *)(lVar2 + 0x58 + lVar12);
      TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar9,1);
      TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar9,1);
      return 1;
    }
    puVar10 = (uint *)(*(longlong *)&this->Elements + 0x58 + (longlong)(int)uVar1 * 0x60);
  }
  pcVar5 = (code *)swi(3);
  iVar7 = (*pcVar5)();
  return iVar7;
}

// TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator> @ 14d7d0170

TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator> * __thiscall
TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>::
TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>
          (TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator> *this,
          TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator> *param_1)

{
  undefined1 *_Dst;
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  undefined1 *_Src;
  
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
    *(undefined8 *)&this->Elements = *(undefined8 *)&param_1->Elements;
    *(undefined8 *)&param_1->Elements = 0;
    *(undefined4 *)&(this->Elements).field_0x8 = *(undefined4 *)&(param_1->Elements).field_0x8;
    *(undefined4 *)&(this->Elements).field_0xc = *(undefined4 *)&(param_1->Elements).field_0xc;
    *(undefined8 *)&(param_1->Elements).field_0x8 = 0;
    _Src = &(param_1->Elements).field_0x10;
    _Dst = &(this->Elements).field_0x10;
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

// TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator> @ 14d7d0290

TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator> * __thiscall
TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>::
TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>
          (TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator> *this,
          initializer_list<void_*> *param_1)

{
  void **ppvVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> FVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  void **ppvVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  uint *puVar13;
  uint uVar14;
  void *local_res8;
  uint local_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  ppvVar1 = param_1->_Last;
  uVar8 = 0;
  ppvVar9 = param_1->_First;
  *(undefined8 *)&this->Elements = 0;
  *(undefined8 *)&(this->Elements).field_0x8 = 0;
  *(undefined8 *)&(this->Elements).field_0x20 = 0;
  *(undefined4 *)&(this->Elements).field_0x28 = 0;
  *(undefined4 *)&(this->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Elements).field_0x34 = 0;
  (this->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->HashSize = 0;
  uVar14 = (uint)((longlong)ppvVar1 - (longlong)ppvVar9 >> 3);
  if (uVar14 == 0) goto joined_r0x00014d7d052a;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar14);
  }
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this,uVar14);
  if (uVar14 < 4) {
    uVar14 = 1;
  }
  else {
    uVar6 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar14 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((this->HashSize != 0) && ((int)uVar14 <= this->HashSize)) goto joined_r0x00014d7d052a;
  this->HashSize = uVar14;
  if ((this->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->Hash).SecondaryData,0,0,4);
  }
  if (uVar14 != 0) {
    uVar10 = uVar14;
    if (uVar14 < 2) {
      if ((this->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
        uVar10 = 0;
        goto LAB_14d7d0375;
      }
    }
    else {
LAB_14d7d0375:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(this->Hash).SecondaryData,0,uVar10,4);
    }
    if (0 < (int)uVar14) {
      uVar11 = (ulonglong)uVar14;
      uVar6 = uVar8;
      do {
        FVar2 = (this->Hash).SecondaryData;
        FVar5 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar5 = FVar2;
        }
        uVar4 = uVar6 & (longlong)(int)uVar14 - 1U;
        uVar6 = uVar6 + 1;
        *(undefined4 *)((longlong)FVar5 + uVar4 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
  }
  if (this->HashSize != 0) {
    uVar14 = *(uint *)&(this->Elements).field_0x28;
    local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar14 != 0) {
      puVar13 = *(uint **)&(this->Elements).field_0x20;
      if (puVar13 == (uint *)0x0) {
        puVar13 = (uint *)local_50.Array;
      }
      uVar10 = *puVar13;
      uVar6 = uVar8;
      while (uVar10 == 0) {
        iVar7 = (int)uVar8;
        uStack_60 = (int)uVar6 + 0x20;
        uVar6 = (ulonglong)uStack_60;
        local_78 = iVar7 + 1;
        uVar8 = (ulonglong)local_78;
        if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_14d7d046b;
        uVar10 = puVar13[(longlong)iVar7 + 1];
      }
      uStack_74 = -uVar10 & uVar10;
      uVar8 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar8 = (ulonglong)uStack_64;
      if ((int)uVar14 < (int)uStack_64) {
LAB_14d7d046b:
        uVar8 = (ulonglong)uVar14;
        uStack_64 = uVar14;
      }
    }
    local_50._padding_ = CONCAT44(uStack_74,local_78);
    local_50.CurrentBitIndex = uStack_64;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    if ((int)uVar8 < (int)uVar14) {
      do {
        puVar12 = (ulonglong *)((longlong)(int)uVar8 * 0x10 + *(longlong *)&this->Elements);
        uVar14 = ((uint)(*puVar12 >> 0x14) & 0xffff ^ (uint)(*puVar12 >> 4)) * -0x7a143595;
        uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
        uVar14 = (uVar14 >> 0x10 ^ uVar14) & this->HashSize - 1U;
        *(uint *)((longlong)puVar12 + 0xc) = uVar14;
        FVar2 = (this->Hash).SecondaryData;
        FVar5 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar5 = FVar2;
        }
        uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar14;
        *(undefined4 *)(puVar12 + 1) = *(undefined4 *)((longlong)FVar5 + uVar6 * 4);
        *(int *)((longlong)FVar5 + uVar6 * 4) = (int)uVar8;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar8 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
joined_r0x00014d7d052a:
  for (; ppvVar9 != ppvVar1; ppvVar9 = ppvVar9 + 1) {
    Emplace<void_*_const_&>(this,&local_res8,(bool *)ppvVar9);
  }
  return this;
}

// Find @ 14d7d70a0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

TTuple<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>_> *
__thiscall
TSet<TTuple<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
::Find(TSet<TTuple<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
       *this,TObjectPtr<UMediaPlayer_const_> param_1)

{
  UObject *pUVar1;
  int iVar2;
  uint uVar3;
  
  pUVar1 = *(UObject **)param_1.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  uVar3 = ((uint)((ulonglong)pUVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar1 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  iVar2 = FindIndexByHash<TObjectPtr<UMediaPlayer_const_>_>
                    (this,uVar3 >> 0x10 ^ uVar3,
                     (TObjectPtr<UMediaPlayer_const_> *)param_1.field0_0x0);
  if (iVar2 != -1) {
    return (TTuple<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>_>
            *)((longlong)iVar2 * 0x60 + *(longlong *)&this->Elements);
  }
  return (TTuple<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>_>
          *)0x0;
}

// Rehash @ 14d7df990

void __thiscall
TSet<TObjectPtr<UMediaCapture>,DefaultKeyFuncs<TObjectPtr<UMediaCapture>,0>,FDefaultSetAllocator>::
Rehash(TSet<TObjectPtr<UMediaCapture>,DefaultKeyFuncs<TObjectPtr<UMediaCapture>,0>,FDefaultSetAllocator>
       *this)

{
  int *piVar1;
  int iVar2;
  UObject *pUVar3;
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14d7dfa67;
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
LAB_14d7dfa67:
        iStack_54 = iVar2;
      }
    }
    local_40._padding_ = CONCAT44(uStack_64,local_68);
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar2) {
      do {
        iVar2 = local_40.CurrentBitIndex;
        puVar9 = (undefined8 *)
                 ((longlong)local_40.CurrentBitIndex * 0x10 + *(longlong *)&this->Elements);
        pUVar3 = (UObject *)*puVar9;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        uVar5 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
                -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar5 = (uVar5 >> 0x10 ^ uVar5) & *piVar1 - 1U;
        *(uint *)((longlong)puVar9 + 0xc) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(puVar9 + 1) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14d7dfb60

void __thiscall
TSet<TTuple<int,TObjectPtr<UMediaCapture>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaCapture>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<int,TObjectPtr<UMediaCapture>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaCapture>,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14d7dfc3c;
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
LAB_14d7dfc3c:
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

// Rehash @ 14d7dfd00

void __thiscall
TSet<TTuple<int,TObjectPtr<UMediaPlayer>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaPlayer>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<int,TObjectPtr<UMediaPlayer>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaPlayer>,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14d7dfddc;
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
LAB_14d7dfddc:
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

// Rehash @ 14d7dfea0

void __thiscall
TSet<TTuple<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  UObject *pUVar3;
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14d7dff77;
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
LAB_14d7dff77:
        iStack_54 = iVar2;
      }
    }
    local_40._padding_ = CONCAT44(uStack_64,local_68);
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar2) {
      do {
        iVar2 = local_40.CurrentBitIndex;
        puVar9 = (undefined8 *)
                 ((longlong)local_40.CurrentBitIndex * 0x60 + *(longlong *)&this->Elements);
        pUVar3 = (UObject *)*puVar9;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        uVar5 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
                -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar5 = (uVar5 >> 0x10 ^ uVar5) & *piVar1 - 1U;
        *(uint *)((longlong)puVar9 + 0x5c) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(puVar9 + 0xb) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// RehashOrLink @ 14d7e0080

void __thiscall
TSet<TTuple<int,TObjectPtr<UMediaCapture>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaCapture>,0>,FDefaultSetAllocator>
::RehashOrLink(TSet<TTuple<int,TObjectPtr<UMediaCapture>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaCapture>,0>,FDefaultSetAllocator>
               *this,uint param_1,
              TSparseSetElement<TTuple<int,TObjectPtr<UMediaCapture>_>_> *param_2,int param_3)

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

// RehashOrLink @ 14d7e0110

void __thiscall
TSet<TTuple<int,TObjectPtr<UMediaPlayer>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaPlayer>,0>,FDefaultSetAllocator>
::RehashOrLink(TSet<TTuple<int,TObjectPtr<UMediaPlayer>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMediaPlayer>,0>,FDefaultSetAllocator>
               *this,uint param_1,TSparseSetElement<TTuple<int,TObjectPtr<UMediaPlayer>_>_> *param_2
              ,int param_3)

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

