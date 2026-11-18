// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XRBase
// Functions: 7

// Emplace<TPairInitializer<unsigned_int_&,IStereoLayers::FLayerDesc_const_&>_> @ 14cf78c30

FSetElementId __thiscall
TSet<TTuple<unsigned_int,IStereoLayers::FLayerDesc>,TDefaultMapHashableKeyFuncs<unsigned_int,IStereoLayers::FLayerDesc,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<unsigned_int_&,IStereoLayers::FLayerDesc_const_&>_>
          (TSet<TTuple<unsigned_int,IStereoLayers::FLayerDesc>,TDefaultMapHashableKeyFuncs<unsigned_int,IStereoLayers::FLayerDesc,0>,FDefaultSetAllocator>
           *this,TPairInitializer<unsigned_int_&,IStereoLayers::FLayerDesc_const_&> *param_1,
          bool *param_2)

{
  int iVar1;
  longlong lVar2;
  FLayerDesc *pFVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  char *in_R9;
  void *_Dst;
  bool bVar12;
  FSparseArrayAllocationInfo local_48;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar10 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x110,0x10,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar10 = iVar10 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar5 * 0x110 + 4 + lVar2);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x110 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<272,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<272,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar5);
  if (local_48.Pointer != (uint *)0x0) {
    pFVar3 = *(FLayerDesc **)(param_2 + 8);
    *(uint *)local_48.Pointer = **(uint **)param_2;
    IStereoLayers::FLayerDesc::FLayerDesc((FLayerDesc *)((longlong)local_48.Pointer + 0x10),pFVar3);
    *(uint *)((longlong)local_48.Pointer + 0x100) = 0xffffffff;
  }
  iVar10 = *(int *)&(this->Elements).field_0x8;
  bVar12 = false;
  iVar5 = *(int *)&(this->Elements).field_0x34;
  uVar11 = *(uint *)local_48.Pointer;
  if ((iVar10 - iVar5 != 1) && (iVar10 != iVar5)) {
    FVar8 = (this->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar10 = *(int *)((longlong)FVar8 + (ulonglong)(this->HashSize - 1U & uVar11) * 4);
    if (iVar10 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(uint *)((longlong)iVar10 * 0x110 + lVar2) == uVar11) {
          bVar12 = iVar10 != -1;
          if (bVar12) {
            _Dst = (void *)((longlong)iVar10 * 0x110 + lVar2);
            plVar4 = *(longlong **)((longlong)_Dst + 0xf0);
            if (plVar4 != (longlong *)0x0) {
              (**(code **)(*plVar4 + 0x10))(plVar4,1);
            }
            if (*(FRHIResource **)((longlong)_Dst + 0xe0) != (FRHIResource *)0x0) {
              FRHIResource::Release(*(FRHIResource **)((longlong)_Dst + 0xe0));
            }
            if (*(FRHIResource **)((longlong)_Dst + 0xd0) != (FRHIResource *)0x0) {
              FRHIResource::Release(*(FRHIResource **)((longlong)_Dst + 0xd0));
            }
            memmove(_Dst,local_48.Pointer,0x100);
            TSparseArrayBase<272,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<272,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar10;
          }
          break;
        }
        iVar10 = *(int *)((longlong)iVar10 * 0x110 + 0x100 + lVar2);
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
      *(uint *)((longlong)local_48.Pointer + 0x104) = uVar11;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar11;
      *(uint *)((longlong)local_48.Pointer + 0x100) = *(uint *)((longlong)FVar8 + uVar6 * 4);
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

// Emplace<TPairInitializer<FName_const_&,FXRTimedInputActionDelegate_const_&>_> @ 14cf78eb0

FSetElementId __thiscall
TSet<TTuple<FName,FXRTimedInputActionDelegate>,TDefaultMapHashableKeyFuncs<FName,FXRTimedInputActionDelegate,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FName_const_&,FXRTimedInputActionDelegate_const_&>_>
          (TSet<TTuple<FName,FXRTimedInputActionDelegate>,TDefaultMapHashableKeyFuncs<FName,FXRTimedInputActionDelegate,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FName_const_&,FXRTimedInputActionDelegate_const_&> *param_1,
          bool *param_2)

{
  void *_Dst;
  longlong lVar1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this_00;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  ForElementType<FSetElementId> FVar6;
  int iVar7;
  char *in_R9;
  int iVar8;
  longlong *_Src;
  int iVar9;
  bool bVar10;
  FSparseArrayAllocationInfo local_68;
  FReadAccessScope local_58;
  
  iVar7 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar7 == 0) {
    iVar2 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar2 = *(int *)&(this->Elements).field_0x30;
    iVar7 = iVar7 + -1;
    lVar1 = *(longlong *)&this->Elements;
    iVar8 = *(int *)(lVar1 + 4 + (longlong)iVar2 * 0x28);
    *(int *)&(this->Elements).field_0x30 = iVar8;
    *(int *)&(this->Elements).field_0x34 = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(lVar1 + (longlong)iVar8 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_68,iVar2);
  if (local_68.Pointer == (longlong *)0x0) {
    _Src = (longlong *)0x0;
  }
  else {
    this_00 = *(TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> **)(param_2 + 8);
    *(longlong *)local_68.Pointer = **(longlong **)param_2;
    *(longlong *)((longlong)local_68.Pointer + 8) = 0;
    *(longlong *)((longlong)local_68.Pointer + 0x10) = 0;
    *(longlong *)((longlong)local_68.Pointer + 0x18) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this_00,&local_58);
    *(atomic<unsigned___int64> *)((longlong)local_68.Pointer + 0x10) =
         this_00[1].AccessDetector.State;
    *(atomic<unsigned___int64> *)((longlong)local_68.Pointer + 0x18) =
         this_00[2].AccessDetector.State;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
    *(undefined4 *)((longlong)local_68.Pointer + 0x20) = 0xffffffff;
    _Src = local_68.Pointer;
  }
  lVar1 = *_Src;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)lVar1);
  iVar7 = *(int *)&(this->Elements).field_0x8;
  bVar10 = false;
  iVar2 = *(int *)&(this->Elements).field_0x34;
  uVar3 = uVar3 + (int)((ulonglong)lVar1 >> 0x20);
  iVar8 = local_68.Index;
  if ((iVar7 - iVar2 != 1) && (iVar7 != iVar2)) {
    FVar6 = (this->Hash).SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar7 = *(int *)((longlong)FVar6 + (ulonglong)(this->HashSize - 1U & uVar3) * 4);
    if (iVar7 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)(lVar1 + (longlong)iVar7 * 0x28) == *_Src) {
          bVar10 = iVar7 != -1;
          if (bVar10) {
            _Dst = (void *)(lVar1 + (longlong)iVar7 * 0x28);
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)((longlong)_Dst + 8));
            memmove(_Dst,_Src,0x20);
            TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_68.Index,1);
            iVar8 = iVar7;
          }
          break;
        }
        iVar7 = *(int *)(lVar1 + 0x20 + (longlong)iVar7 * 0x28);
      } while (iVar7 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar10;
  }
  if (bVar10 == false) {
    uVar5 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar5) {
      uVar4 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
      lVar1 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar9 <= this->HashSize)) {
      uVar3 = this->HashSize - 1U & uVar3;
      *(uint *)((longlong)_Src + 0x24) = uVar3;
      FVar6 = (this->Hash).SecondaryData;
      if (FVar6 == (ForElementType<FSetElementId>)0x0) {
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar4 = (longlong)this->HashSize - 1U & (longlong)(int)uVar3;
      *(undefined4 *)(_Src + 4) = *(undefined4 *)((longlong)FVar6 + uVar4 * 4);
      *(int *)((longlong)FVar6 + uVar4 * 4) = iVar8;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = iVar8;
  return (FSetElementId)(int)param_1;
}

// RemoveImpl<unsigned_int> @ 14cf7cba0

int __thiscall
TSet<TTuple<unsigned_int,IStereoLayers::FLayerDesc>,TDefaultMapHashableKeyFuncs<unsigned_int,IStereoLayers::FLayerDesc,0>,FDefaultSetAllocator>
::RemoveImpl<unsigned_int>
          (TSet<TTuple<unsigned_int,IStereoLayers::FLayerDesc>,TDefaultMapHashableKeyFuncs<unsigned_int,IStereoLayers::FLayerDesc,0>,FDefaultSetAllocator>
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
  while (lVar8 = (longlong)(int)uVar6 * 0x110,
        *(uint *)(lVar8 + *(longlong *)&this->Elements) != *param_2) {
    uVar6 = *(uint *)(lVar8 + 0x100 + *(longlong *)&this->Elements);
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
         (uVar6 & 0x1f) & 1) != 0) goto LAB_14cf7cc84;
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
LAB_14cf7cc84:
  FVar5 = (this->Hash).SecondaryData;
  lVar8 = *(longlong *)&this->Elements + lVar8;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar7 = (uint *)((longlong)FVar5 + (longlong)*(int *)(lVar8 + 0x104) * 4);
  while( true ) {
    uVar1 = *puVar7;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == uVar6) {
      *puVar7 = *(uint *)(lVar8 + 0x100);
      TSparseArray<TSparseSetElement<TTuple<unsigned_int,IStereoLayers::FLayerDesc>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar6,1);
      TSparseArrayBase<272,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<272,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar6,1);
      return 1;
    }
    puVar7 = (uint *)(*(longlong *)&this->Elements + 0x100 + (longlong)(int)uVar1 * 0x110);
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

// RemoveImpl<FName> @ 14cf7cd40

int __thiscall
TSet<TTuple<FName,FXRTimedInputActionDelegate>,TDefaultMapHashableKeyFuncs<FName,FXRTimedInputActionDelegate,0>,FDefaultSetAllocator>
::RemoveImpl<FName>(TSet<TTuple<FName,FXRTimedInputActionDelegate>,TDefaultMapHashableKeyFuncs<FName,FXRTimedInputActionDelegate,0>,FDefaultSetAllocator>
                    *this,uint param_1,FName *param_2)

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
  while (lVar7 = (longlong)(int)uVar6 * 0x28,
        *(FName *)(lVar7 + *(longlong *)&this->Elements) != *param_2) {
    uVar6 = *(uint *)(lVar7 + 0x20 + *(longlong *)&this->Elements);
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
         (uVar6 & 0x1f) & 1) != 0) goto LAB_14cf7ce27;
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
LAB_14cf7ce27:
  FVar5 = (this->Hash).SecondaryData;
  lVar7 = *(longlong *)&this->Elements + lVar7;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar8 = (uint *)((longlong)FVar5 + (longlong)*(int *)(lVar7 + 0x24) * 4);
  while( true ) {
    uVar1 = *puVar8;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == uVar6) {
      *puVar8 = *(uint *)(lVar7 + 0x20);
      TSparseArray<TSparseSetElement<TTuple<FName,FXRTimedInputActionDelegate>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar6,1);
      TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar6,1);
      return 1;
    }
    puVar8 = (uint *)(*(longlong *)&this->Elements + (longlong)(int)uVar1 * 0x28 + 0x20);
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

// operator= @ 14cf7f340

/* WARNING: Type propagation algorithm not settling */

TSet<TTuple<unsigned_int,IStereoLayers::FLayerDesc>,TDefaultMapHashableKeyFuncs<unsigned_int,IStereoLayers::FLayerDesc,0>,FDefaultSetAllocator>
* __thiscall
TSet<TTuple<unsigned_int,IStereoLayers::FLayerDesc>,TDefaultMapHashableKeyFuncs<unsigned_int,IStereoLayers::FLayerDesc,0>,FDefaultSetAllocator>
::operator=(TSet<TTuple<unsigned_int,IStereoLayers::FLayerDesc>,TDefaultMapHashableKeyFuncs<unsigned_int,IStereoLayers::FLayerDesc,0>,FDefaultSetAllocator>
            *this,TSet<TTuple<unsigned_int,IStereoLayers::FLayerDesc>,TDefaultMapHashableKeyFuncs<unsigned_int,IStereoLayers::FLayerDesc,0>,FDefaultSetAllocator>
                  *param_1)

{
  undefined1 *puVar1;
  FLayerDesc *pFVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  code *pcVar5;
  FLayerDesc *this_00;
  bool bVar6;
  int iVar7;
  TSet<TTuple<unsigned_int,IStereoLayers::FLayerDesc>,TDefaultMapHashableKeyFuncs<unsigned_int,IStereoLayers::FLayerDesc,0>,FDefaultSetAllocator>
  *pTVar8;
  ForElementType<FSetElementId> _Dst;
  undefined1 *puVar9;
  ForElementType<FSetElementId> _Src;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  
  if (this == param_1) {
    return this;
  }
  uVar10 = param_1->HashSize;
  uVar13 = uVar10;
  if (uVar10 < 2) {
    if ((this->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_14cf7f3a6;
    uVar13 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(this->Hash).SecondaryData,0,uVar13,4);
LAB_14cf7f3a6:
  _Src = (param_1->Hash).SecondaryData;
  _Dst = (this->Hash).SecondaryData;
  if (uVar10 != 0) {
    if (_Src == (ForElementType<FSetElementId>)0x0) {
      _Src = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    if (_Dst == (ForElementType<FSetElementId>)0x0) {
      _Dst = (ForElementType<FSetElementId>)&this->Hash;
    }
    memcpy((void *)_Dst,(void *)_Src,(longlong)(int)uVar10 << 2);
  }
  this->HashSize = uVar10;
  iVar7 = *(int *)&(param_1->Elements).field_0x8;
  lVar11 = (longlong)iVar7;
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,IStereoLayers::FLayerDesc>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty(&this->Elements,iVar7);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x110,0x10,iVar7,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
             (int *)&(this->Elements).field_0xc);
  puVar4 = &(this->Elements).field_0x10;
  puVar1 = &(param_1->Elements).field_0x10;
  *(undefined4 *)&(this->Elements).field_0x30 = *(undefined4 *)&(param_1->Elements).field_0x30;
  *(undefined4 *)&(this->Elements).field_0x34 = *(undefined4 *)&(param_1->Elements).field_0x34;
  if (puVar4 != puVar1) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)puVar4,
               (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
  }
  puVar3 = *(undefined4 **)&this->Elements;
  iVar12 = 0;
  if (0 < iVar7) {
    uVar10 = 1;
    lVar14 = *(longlong *)&param_1->Elements - (longlong)puVar3;
    do {
      this_00 = (FLayerDesc *)(puVar3 + 4);
      if (((iVar12 < 0) || (*(int *)&(param_1->Elements).field_0x28 <= iVar12)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TSet<TTuple<unsigned_int,IStereoLayers::FLayerDesc>,TDefaultMapHashableKeyFuncs<unsigned_int,IStereoLayers::FLayerDesc,0>,FDefaultSetAllocator>
                  *)(*pcVar5)();
        return pTVar8;
      }
      puVar4 = *(undefined1 **)&(param_1->Elements).field_0x20;
      pFVar2 = (FLayerDesc *)(lVar14 + (longlong)this_00);
      puVar9 = puVar1;
      if (puVar4 != (undefined1 *)0x0) {
        puVar9 = puVar4;
      }
      iVar7 = iVar12;
      if (iVar12 < 0) {
        iVar7 = iVar12 + 0x1f;
      }
      uVar13 = *(uint *)(puVar9 + (longlong)(iVar7 >> 5) * 4);
      *puVar3 = *(undefined4 *)((longlong)this_00 + lVar14 + -0x10);
      if ((uVar13 & uVar10) == 0) {
        puVar3[1] = *(undefined4 *)((longlong)&pFVar2[-1].Shape.Wrapped.Ptr + 4);
      }
      else {
        IStereoLayers::FLayerDesc::FLayerDesc(this_00,pFVar2);
        puVar3[0x40] = pFVar2[1].Id;
        puVar3[0x41] = *(undefined4 *)&pFVar2[1].field_0x4;
      }
      iVar12 = iVar12 + 1;
      uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
      puVar3 = puVar3 + 0x44;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return this;
}

// Rehash @ 14cf985a0

void __thiscall
TSet<TTuple<unsigned_int,IStereoLayers::FLayerDesc>,TDefaultMapHashableKeyFuncs<unsigned_int,IStereoLayers::FLayerDesc,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<unsigned_int,IStereoLayers::FLayerDesc>,TDefaultMapHashableKeyFuncs<unsigned_int,IStereoLayers::FLayerDesc,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14cf9867c;
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
LAB_14cf9867c:
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
        puVar8 = (uint *)((longlong)local_30.CurrentBitIndex * 0x110 + *(longlong *)&this->Elements)
        ;
        uVar7 = *piVar1 - 1U & *puVar8;
        puVar8[0x41] = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        puVar8[0x40] = *(uint *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14cf98730

void __thiscall
TSet<TTuple<FName,FXRTimedInputActionDelegate>,TDefaultMapHashableKeyFuncs<FName,FXRTimedInputActionDelegate,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FName,FXRTimedInputActionDelegate>,TDefaultMapHashableKeyFuncs<FName,FXRTimedInputActionDelegate,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14cf98807;
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
LAB_14cf98807:
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

