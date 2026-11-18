// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 103

// Emplace<FNavAgentProperties_const_&> @ 146d67d20

FSetElementId __thiscall
TSet<FNavAgentProperties,DefaultKeyFuncs<FNavAgentProperties,0>,FDefaultSetAllocator>::
Emplace<FNavAgentProperties_const_&>
          (TSet<FNavAgentProperties,DefaultKeyFuncs<FNavAgentProperties,0>,FDefaultSetAllocator>
           *this,FNavAgentProperties *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  ForElementType<FSetElementId> FVar9;
  bool *in_R9;
  uint uVar10;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar8 = 1;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x40 + 4 + lVar3);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x40 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar5);
  if (local_38.Pointer != (TSparseSetElement<FNavAgentProperties> *)0x0) {
    FNavAgentProperties::FNavAgentProperties(local_38.Pointer,(FNavAgentProperties *)param_2);
    *(undefined4 *)((longlong)local_38.Pointer + 0x38) = 0xffffffff;
  }
  local_res8[0] = local_38.Index;
  uVar10 = ((int)(short)(int)*(float *)((longlong)local_38.Pointer + 4) << 0x10 |
           (int)(short)(int)*(float *)((longlong)local_38.Pointer + 8)) ^
           (int)*(float *)((longlong)local_38.Pointer + 0xc);
  bVar4 = TryReplaceExisting(this,uVar10,local_38.Pointer,local_res8,in_R9);
  if (!bVar4) {
    uVar7 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar8 <= this->HashSize)) {
      uVar10 = this->HashSize - 1U & uVar10;
      *(uint *)((longlong)local_38.Pointer + 0x3c) = uVar10;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar10;
      *(undefined4 *)((longlong)local_38.Pointer + 0x38) =
           *(undefined4 *)((longlong)FVar9 + uVar6 * 4);
      *(int *)((longlong)FVar9 + uVar6 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar8;
      Rehash(this);
    }
  }
  param_1->_padding_ = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// Emplace<FNavigationBounds_const_&> @ 146d67ec0

FSetElementId __thiscall
TSet<FNavigationBounds,DefaultKeyFuncs<FNavigationBounds,0>,FDefaultSetAllocator>::
Emplace<FNavigationBounds_const_&>
          (TSet<FNavigationBounds,DefaultKeyFuncs<FNavigationBounds,0>,FDefaultSetAllocator> *this,
          FNavigationBounds *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  uint uVar10;
  char *in_R9;
  bool bVar11;
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x58,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x58 + 4 + lVar3);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x58 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<88,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<88,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar5);
  if (local_38.Pointer != (uint *)0x0) {
    uVar4 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)local_38.Pointer = *(undefined8 *)param_2;
    *(undefined8 *)((longlong)local_38.Pointer + 8) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)((longlong)local_38.Pointer + 0x18) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)((longlong)local_38.Pointer + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)((longlong)local_38.Pointer + 0x28) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)((longlong)local_38.Pointer + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)((longlong)local_38.Pointer + 0x38) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)((longlong)local_38.Pointer + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)((longlong)local_38.Pointer + 0x48) = uVar4;
    *(uint *)((longlong)local_38.Pointer + 0x50) = 0xffffffff;
  }
  iVar1 = *(int *)&(this->Elements).field_0x8;
  bVar11 = false;
  iVar5 = *(int *)&(this->Elements).field_0x34;
  uVar10 = *(uint *)local_38.Pointer;
  if ((iVar1 - iVar5 != 1) && (iVar1 != iVar5)) {
    FVar8 = (this->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
    }
    uVar7 = *(uint *)((longlong)FVar8 + (ulonglong)(this->HashSize - 1U & uVar10) * 4);
    if (uVar7 != 0xffffffff) {
      lVar3 = *(longlong *)&this->Elements;
      do {
        if (*(uint *)((longlong)(int)uVar7 * 0x58 + lVar3) == uVar10) {
          bVar11 = uVar7 != 0xffffffff;
          if (bVar11) {
            memmove((void *)((longlong)(int)uVar7 * 0x58 + lVar3),local_38.Pointer,0x50);
            TSparseArrayBase<88,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<88,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = uVar7;
          }
          break;
        }
        uVar7 = *(uint *)((longlong)(int)uVar7 * 0x58 + 0x50 + lVar3);
      } while (uVar7 != 0xffffffff);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar11;
  }
  if (bVar11 == false) {
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
      *(uint *)((longlong)local_38.Pointer + 0x54) = uVar10;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar10;
      *(uint *)((longlong)local_38.Pointer + 0x50) = *(uint *)((longlong)FVar8 + uVar6 * 4);
      *(int *)((longlong)FVar8 + uVar6 * 4) = local_38.Index;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  param_1->UniqueID = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<FNavigationDirtyElement_const_&> @ 146d680e0

FSetElementId __thiscall
TSet<FNavigationDirtyElement,FNavigationDirtyElementKeyFunctions,FDefaultSetAllocator>::
Emplace<FNavigationDirtyElement_const_&>
          (TSet<FNavigationDirtyElement,FNavigationDirtyElementKeyFunctions,FDefaultSetAllocator>
           *this,FNavigationDirtyElement *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  uint uVar9;
  int iVar10;
  char *in_R9;
  undefined1 *puVar11;
  undefined8 *_Dst;
  uint uVar12;
  bool bVar13;
  FSparseArrayAllocationInfo local_48;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x68,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)((longlong)iVar4 * 0x68 + 4 + lVar3);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x68 + lVar3) = 0xffffffff;
    }
  }
  puVar11 = &(this->Elements).field_0x8;
  TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  _Src = local_48.Pointer;
  if (local_48.Pointer != (FNavigationDirtyElement *)0x0) {
    FNavigationDirtyElement::FNavigationDirtyElement
              (local_48.Pointer,(FNavigationDirtyElement *)param_2);
    *(undefined4 *)
     &(((FNavigationDirtyElement *)((longlong)_Src + 0x60))->ExplicitAreasToDirty).AllocatorInstance
      .Data = 0xffffffff;
  }
  uVar9 = local_48.Index;
  FNavigationElement::GetHandle
            (((TSharedRef<FNavigationElement_const_,1> *)((longlong)_Src + 0x10))->Object,
             (FNavigationElementHandle *)&local_48);
  uVar12 = (int)((ulonglong)local_48.Pointer >> 0x20) * 0x17 + (int)local_48.Pointer;
  uVar7 = (local_48._4_4_ ^ local_48.Index) - uVar12 ^ uVar12 >> 0xd;
  uVar5 = (-0x61c88647 - uVar12) - uVar7 ^ uVar7 << 8;
  uVar12 = (uVar12 - uVar5) - uVar7 ^ uVar5 >> 0xd;
  uVar7 = (uVar7 - uVar12) - uVar5 ^ uVar12 >> 0xc;
  uVar5 = (uVar5 - uVar7) - uVar12 ^ uVar7 << 0x10;
  uVar12 = (uVar12 - uVar5) - uVar7 ^ uVar5 >> 5;
  uVar7 = (uVar7 - uVar12) - uVar5 ^ uVar12 >> 3;
  uVar5 = (uVar5 - uVar7) - uVar12 ^ uVar7 << 10;
  uVar5 = (uVar12 - uVar5) - uVar7 ^ uVar5 >> 0xf;
  bVar13 = false;
  if (*(int *)puVar11 - *(int *)&(this->Elements).field_0x34 != 1) {
    FNavigationElement::GetHandle
              (((TSharedRef<FNavigationElement_const_,1> *)((longlong)_Src + 0x10))->Object,
               (FNavigationElementHandle *)&local_48);
    uVar7 = FindIndexByHash<FNavigationElementHandle>
                      (this,uVar5,(FNavigationElementHandle *)&local_48);
    bVar13 = uVar7 != 0xffffffff;
    if (bVar13) {
      _Dst = (undefined8 *)((longlong)(int)uVar7 * 0x68 + *(longlong *)&this->Elements);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)_Dst[3]);
      if ((void *)*_Dst != (void *)0x0) {
        FMemory::Free((void *)*_Dst);
      }
      memmove(_Dst,_Src,0x60);
      TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar9,1);
      uVar9 = uVar7;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar13;
  }
  if (bVar13 == false) {
    uVar7 = *(int *)puVar11 - *(int *)&(this->Elements).field_0x34;
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
      uVar5 = this->HashSize - 1U & uVar5;
      *(uint *)((longlong)
                &(((FNavigationDirtyElement *)((longlong)_Src + 0x60))->ExplicitAreasToDirty).
                 AllocatorInstance.Data + 4) = uVar5;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)
       &(((FNavigationDirtyElement *)((longlong)_Src + 0x60))->ExplicitAreasToDirty).
        AllocatorInstance.Data = *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
      *(uint *)((longlong)FVar8 + uVar6 * 4) = uVar9;
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  *(uint *)&(param_1->ExplicitAreasToDirty).AllocatorInstance.Data = uVar9;
  return (FSetElementId)(int)param_1;
}

// Emplace<TObjectPtr<UClass_const_>_> @ 146d68380

FSetElementId __thiscall
TSet<TObjectPtr<UClass_const_>,DefaultKeyFuncs<TObjectPtr<UClass_const_>,0>,FDefaultSetAllocator>::
Emplace<TObjectPtr<UClass_const_>_>
          (TSet<TObjectPtr<UClass_const_>,DefaultKeyFuncs<TObjectPtr<UClass_const_>,0>,FDefaultSetAllocator>
           *this,TObjectPtr<UClass_const_> *param_1,bool *param_2)

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
  TObjectPtr<UClass_const_>_u_0 local_res8;
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
    local_res8.DebugPtr = *(UClass **)local_48.Pointer;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res8.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
    }
    iVar4 = FindIndexByHash<TObjectPtr<UClass_const_>_>
                      (this,uVar5,(TObjectPtr<UClass_const_> *)&local_res8.ObjectPtr);
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

// Emplace<TPairInitializer<UClass_*_&&,TSharedPtr<FNavigationQueryFilter_const_,1>_const_&>_> @ 146d685b0

FSetElementId __thiscall
TSet<TTuple<UClass_*,TSharedPtr<FNavigationQueryFilter_const_,1>_>,TDefaultMapHashableKeyFuncs<UClass_*,TSharedPtr<FNavigationQueryFilter_const_,1>,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<UClass_*_&&,TSharedPtr<FNavigationQueryFilter_const_,1>_const_&>_>
          (TSet<TTuple<UClass_*,TSharedPtr<FNavigationQueryFilter_const_,1>_>,TDefaultMapHashableKeyFuncs<UClass_*,TSharedPtr<FNavigationQueryFilter_const_,1>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<UClass_*_&&,TSharedPtr<FNavigationQueryFilter_const_,1>_const_&>
                 *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong *puVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  void *_Dst;
  int iVar9;
  int iVar10;
  char *in_R9;
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
  if (local_48.Pointer != (ulonglong *)0x0) {
    puVar3 = *(ulonglong **)(param_2 + 8);
    *(ulonglong *)local_48.Pointer = **(ulonglong **)param_2;
    *(ulonglong *)((longlong)local_48.Pointer + 8) = *puVar3;
    uVar6 = puVar3[1];
    *(ulonglong *)((longlong)local_48.Pointer + 0x10) = uVar6;
    if (uVar6 != 0) {
      LOCK();
      *(int *)(uVar6 + 8) = *(int *)(uVar6 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)((longlong)local_48.Pointer + 0x18) = 0xffffffff;
  }
  uVar6 = *(ulonglong *)local_48.Pointer;
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
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)((longlong)_Dst + 0x10));
            memmove(_Dst,local_48.Pointer,0x18);
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
      *(uint *)((longlong)local_48.Pointer + 0x1c) = uVar5;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)((longlong)local_48.Pointer + 0x18) =
           *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
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

// Emplace<TPairInitializer<FNavLinkId_&&,FNavigationSystem::FCustomLinkOwnerInfo_&&>_> @ 146d68810

FSetElementId __thiscall
TSet<TTuple<FNavLinkId,FNavigationSystem::FCustomLinkOwnerInfo>,TDefaultMapHashableKeyFuncs<FNavLinkId,FNavigationSystem::FCustomLinkOwnerInfo,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FNavLinkId_&&,FNavigationSystem::FCustomLinkOwnerInfo_&&>_>
          (TSet<TTuple<FNavLinkId,FNavigationSystem::FCustomLinkOwnerInfo>,TDefaultMapHashableKeyFuncs<FNavLinkId,FNavigationSystem::FCustomLinkOwnerInfo,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FNavLinkId_&&,FNavigationSystem::FCustomLinkOwnerInfo_&&> *param_1
          ,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  char *in_R9;
  undefined1 *puVar11;
  bool bVar12;
  FSparseArrayAllocationInfo local_48;
  
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
  puVar11 = &(this->Elements).field_0x8;
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 8);
    *(longlong *)local_48.Pointer = **(longlong **)param_2;
    lVar2 = plVar3[1];
    *(longlong *)((longlong)local_48.Pointer + 8) = *plVar3;
    *(longlong *)((longlong)local_48.Pointer + 0x10) = lVar2;
    *(undefined4 *)((longlong)local_48.Pointer + 0x18) = 0xffffffff;
  }
  lVar2 = *(longlong *)local_48.Pointer;
  bVar12 = false;
  iVar9 = *(int *)puVar11;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar10 = (int)((ulonglong)lVar2 >> 0x20) * 0x17 + (int)lVar2;
  if ((iVar9 - iVar4 != 1) && (iVar9 != iVar4)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar9 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar10) * 4);
    if (iVar9 != -1) {
      do {
        if (*(longlong *)((longlong)iVar9 * 0x20 + *(longlong *)&this->Elements) == lVar2) {
          bVar12 = iVar9 != -1;
          if (bVar12) {
            memmove((void *)((longlong)iVar9 * 0x20 + *(longlong *)&this->Elements),local_48.Pointer
                    ,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar9;
          }
          break;
        }
        iVar9 = *(int *)((longlong)iVar9 * 0x20 + 0x18 + *(longlong *)&this->Elements);
      } while (iVar9 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar12;
  }
  if (bVar12 == false) {
    uVar6 = *(int *)puVar11 - *(int *)&(this->Elements).field_0x34;
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
      *(uint *)((longlong)local_48.Pointer + 0x1c) = uVar10;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar10;
      *(undefined4 *)((longlong)local_48.Pointer + 0x18) =
           *(undefined4 *)((longlong)FVar7 + uVar5 * 4);
      *(int *)((longlong)FVar7 + uVar5 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar8;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FNavigationElementHandle_&&,TSharedRef<FNavigationElement,1>_const_&>_> @ 146d68a30

FSetElementId __thiscall
TSet<TTuple<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>_>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FNavigationElementHandle_&&,TSharedRef<FNavigationElement,1>_const_&>_>
          (TSet<TTuple<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>_>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FNavigationElementHandle_&&,TSharedRef<FNavigationElement,1>_const_&>
                 *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  int iVar13;
  char *in_R9;
  uint uVar14;
  bool bVar15;
  FSparseArrayAllocationInfo local_48;
  
  iVar13 = *(int *)&(this->Elements).field_0x34;
  iVar12 = 1;
  if (iVar13 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    iVar13 = iVar13 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar6 * 0x28);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar13;
    if (iVar13 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar6);
  if (local_48.Pointer != (uint *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 8);
    uVar5 = (*(undefined8 **)param_2)[1];
    *(undefined8 *)local_48.Pointer = **(undefined8 **)param_2;
    *(undefined8 *)((longlong)local_48.Pointer + 8) = uVar5;
    *(undefined8 *)((longlong)local_48.Pointer + 0x10) = *puVar3;
    lVar2 = puVar3[1];
    *(longlong *)((longlong)local_48.Pointer + 0x18) = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    *(uint *)((longlong)local_48.Pointer + 0x20) = 0xffffffff;
  }
  lVar2 = *(longlong *)((longlong)local_48.Pointer + 8);
  bVar15 = false;
  uVar14 = (int)((ulonglong)lVar2 >> 0x20) * 0x17 + (int)lVar2;
  uVar10 = (*(uint *)local_48.Pointer ^ *(uint *)((longlong)local_48.Pointer + 4)) - uVar14 ^
           uVar14 >> 0xd;
  uVar8 = (-0x61c88647 - uVar14) - uVar10 ^ uVar10 << 8;
  uVar14 = (uVar14 - uVar8) - uVar10 ^ uVar8 >> 0xd;
  uVar10 = (uVar10 - uVar14) - uVar8 ^ uVar14 >> 0xc;
  uVar8 = (uVar8 - uVar10) - uVar14 ^ uVar10 << 0x10;
  uVar14 = (uVar14 - uVar8) - uVar10 ^ uVar8 >> 5;
  uVar10 = (uVar10 - uVar14) - uVar8 ^ uVar14 >> 3;
  uVar8 = (uVar8 - uVar10) - uVar14 ^ uVar10 << 10;
  iVar13 = *(int *)&(this->Elements).field_0x8;
  iVar6 = *(int *)&(this->Elements).field_0x34;
  uVar8 = (uVar14 - uVar8) - uVar10 ^ uVar8 >> 0xf;
  if ((iVar13 - iVar6 != 1) && (iVar13 != iVar6)) {
    FVar11 = (this->Hash).SecondaryData;
    if (FVar11 == (ForElementType<FSetElementId>)0x0) {
      FVar11 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar13 = *(int *)((longlong)FVar11 + (ulonglong)(this->HashSize - 1U & uVar8) * 4);
    if (iVar13 != -1) {
      lVar4 = *(longlong *)&this->Elements;
      do {
        lVar7 = (longlong)iVar13;
        if (((*(uint *)(lVar4 + lVar7 * 0x28) == *(uint *)local_48.Pointer) &&
            (*(uint *)(lVar4 + 4 + lVar7 * 0x28) == *(uint *)((longlong)local_48.Pointer + 4))) &&
           (*(longlong *)(lVar4 + 8 + lVar7 * 0x28) == lVar2)) {
          bVar15 = iVar13 != -1;
          if (bVar15) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)(lVar4 + 0x18 + (longlong)iVar13 * 0x28));
            memmove((void *)(lVar4 + (longlong)iVar13 * 0x28),local_48.Pointer,0x20);
            TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar13;
          }
          break;
        }
        iVar13 = *(int *)(lVar4 + 0x20 + lVar7 * 0x28);
      } while (iVar13 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar15;
  }
  if (bVar15 == false) {
    uVar10 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar10) {
      uVar9 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar10 < 1) || (iVar12 <= this->HashSize)) {
      uVar8 = this->HashSize - 1U & uVar8;
      *(uint *)((longlong)local_48.Pointer + 0x24) = uVar8;
      FVar11 = (this->Hash).SecondaryData;
      if (FVar11 == (ForElementType<FSetElementId>)0x0) {
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar9 = (longlong)this->HashSize - 1U & (longlong)(int)uVar8;
      *(uint *)((longlong)local_48.Pointer + 0x20) = *(uint *)((longlong)FVar11 + uVar9 * 4);
      *(int *)((longlong)FVar11 + uVar9 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar12;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FObjectKey_&&,FNavigationElementHandle_&&>_> @ 146d68d10

FSetElementId __thiscall
TSet<TTuple<FObjectKey,FNavigationElementHandle>,TDefaultMapHashableKeyFuncs<FObjectKey,FNavigationElementHandle,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FObjectKey_&&,FNavigationElementHandle_&&>_>
          (TSet<TTuple<FObjectKey,FNavigationElementHandle>,TDefaultMapHashableKeyFuncs<FObjectKey,FNavigationElementHandle,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FObjectKey_&&,FNavigationElementHandle_&&> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  int iVar13;
  char *in_R9;
  uint uVar14;
  undefined1 *puVar15;
  bool bVar16;
  FSparseArrayAllocationInfo local_48;
  
  iVar13 = *(int *)&(this->Elements).field_0x34;
  iVar12 = 1;
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
  puVar15 = &(this->Elements).field_0x8;
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar5);
  if (local_48.Pointer != (int *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 8);
    *(undefined8 *)local_48.Pointer = **(undefined8 **)param_2;
    uVar4 = puVar3[1];
    *(undefined8 *)((longlong)local_48.Pointer + 8) = *puVar3;
    *(undefined8 *)((longlong)local_48.Pointer + 0x10) = uVar4;
    *(int *)((longlong)local_48.Pointer + 0x18) = -1;
  }
  uVar10 = *(uint *)((longlong)local_48.Pointer + 4);
  uVar9 = *(int *)local_48.Pointer - uVar10 ^ uVar10 >> 0xd;
  bVar16 = false;
  uVar7 = (-0x61c88647 - uVar9) - uVar10 ^ uVar9 << 8;
  uVar14 = (uVar10 - uVar9) - uVar7 ^ uVar7 >> 0xd;
  uVar9 = (uVar9 - uVar14) - uVar7 ^ uVar14 >> 0xc;
  uVar7 = (uVar7 - uVar9) - uVar14 ^ uVar9 << 0x10;
  uVar14 = (uVar14 - uVar7) - uVar9 ^ uVar7 >> 5;
  uVar9 = (uVar9 - uVar14) - uVar7 ^ uVar14 >> 3;
  uVar7 = (uVar7 - uVar9) - uVar14 ^ uVar9 << 10;
  iVar13 = *(int *)puVar15;
  iVar5 = *(int *)&(this->Elements).field_0x34;
  uVar7 = (uVar14 - uVar7) - uVar9 ^ uVar7 >> 0xf;
  if ((iVar13 - iVar5 != 1) && (iVar13 != iVar5)) {
    FVar11 = (this->Hash).SecondaryData;
    if (FVar11 == (ForElementType<FSetElementId>)0x0) {
      FVar11 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar13 = *(int *)((longlong)FVar11 + (ulonglong)(this->HashSize - 1U & uVar7) * 4);
    if (iVar13 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        lVar6 = (longlong)iVar13 * 0x20;
        if ((*(int *)(lVar6 + lVar2) == *(int *)local_48.Pointer) &&
           (*(uint *)(lVar6 + 4 + lVar2) == uVar10)) {
          bVar16 = iVar13 != -1;
          if (bVar16) {
            memmove((void *)((longlong)iVar13 * 0x20 + *(longlong *)&this->Elements),
                    local_48.Pointer,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar13;
          }
          break;
        }
        iVar13 = *(int *)(lVar6 + 0x18 + lVar2);
      } while (iVar13 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar16;
  }
  if (bVar16 == false) {
    uVar10 = *(int *)puVar15 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar10) {
      uVar8 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar10 < 1) || (iVar12 <= this->HashSize)) {
      uVar7 = this->HashSize - 1U & uVar7;
      *(uint *)((longlong)local_48.Pointer + 0x1c) = uVar7;
      FVar11 = (this->Hash).SecondaryData;
      if (FVar11 == (ForElementType<FSetElementId>)0x0) {
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar7;
      *(int *)((longlong)local_48.Pointer + 0x18) = *(int *)((longlong)FVar11 + uVar8 * 4);
      *(int *)((longlong)FVar11 + uVar8 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar12;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<UClass_const_*_const_&,int_const_&>_> @ 146d68fb0

FSetElementId __thiscall
TSet<TTuple<UClass_const_*,int>,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<UClass_const_*_const_&,int_const_&>_>
          (TSet<TTuple<UClass_const_*,int>,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>,FDefaultSetAllocator>
           *this,TPairInitializer<UClass_const_*_const_&,int_const_&> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
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
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar10 = iVar10 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x18) = 0xffffffff;
    }
  }
  puVar11 = &(this->Elements).field_0x8;
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer != (ulonglong *)0x0) {
    puVar3 = *(undefined4 **)(param_2 + 8);
    *(ulonglong *)local_48.Pointer = **(ulonglong **)param_2;
    *(undefined4 *)((longlong)local_48.Pointer + 8) = *puVar3;
    *(undefined4 *)((longlong)local_48.Pointer + 0x10) = 0xffffffff;
  }
  uVar6 = *(ulonglong *)local_48.Pointer;
  bVar12 = false;
  uVar5 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
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
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(ulonglong *)(lVar2 + (longlong)iVar10 * 0x18) == uVar6) {
          bVar12 = iVar10 != -1;
          if (bVar12) {
            memmove((void *)(lVar2 + (longlong)iVar10 * 0x18),local_48.Pointer,0x10);
            TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar10;
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
      *(uint *)((longlong)local_48.Pointer + 0x14) = uVar5;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)((longlong)local_48.Pointer + 0x10) =
           *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
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

// Emplace<TPairInitializer<FNavAgentProperties_const_&,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>_&&>_> @ 146d691f0

FSetElementId __thiscall
TSet<TTuple<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<FNavAgentProperties_const_&,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>_&&>_>
          (TSet<TTuple<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FNavAgentProperties_const_&,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>_&&>
                 *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  void *pvVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  float fVar11;
  ForElementType<FSetElementId> FVar12;
  uint uVar13;
  char *in_R9;
  int iVar14;
  FSparseArrayAllocationInfo local_48;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar14 = 1;
  if (iVar1 == 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x48,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar8 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar8 * 0x48);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x48) = 0xffffffff;
    }
  }
  TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar8);
  if (local_48.Pointer != (FNavAgentProperties *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 8);
    FNavAgentProperties::FNavAgentProperties(local_48.Pointer,*(FNavAgentProperties **)param_2);
    uVar5 = *puVar4;
    ((FNavAgentProperties *)((longlong)local_48.Pointer + 0x38))->_padding_ = (int)uVar5;
    ((FNavAgentProperties *)((longlong)local_48.Pointer + 0x38))->AgentRadius =
         (float)(int)((ulonglong)uVar5 >> 0x20);
    ((FNavAgentProperties *)((longlong)local_48.Pointer + 0x38))->AgentHeight = -NAN;
  }
  bVar7 = false;
  uVar13 = ((int)(short)(int)*(float *)((longlong)local_48.Pointer + 4) << 0x10 |
           (int)(short)(int)*(float *)((longlong)local_48.Pointer + 8)) ^
           (int)*(float *)((longlong)local_48.Pointer + 0xc);
  iVar1 = *(int *)&(this->Elements).field_0x8;
  iVar8 = *(int *)&(this->Elements).field_0x34;
  if ((iVar1 - iVar8 != 1) && (iVar1 != iVar8)) {
    FVar12 = (this->Hash).SecondaryData;
    if (FVar12 == (ForElementType<FSetElementId>)0x0) {
      FVar12 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar1 = *(int *)((longlong)FVar12 + (ulonglong)(this->HashSize - 1U & uVar13) * 4);
        iVar1 != -1; iVar1 = *(int *)(*(longlong *)&this->Elements + 0x40 + (longlong)iVar1 * 0x48))
    {
      bVar7 = FNavAgentProperties::operator==
                        ((FNavAgentProperties *)
                         (*(longlong *)&this->Elements + (longlong)iVar1 * 0x48),local_48.Pointer);
      if (bVar7) {
        bVar7 = iVar1 != -1;
        if (bVar7) {
          lVar3 = *(longlong *)&this->Elements;
          pvVar6 = *(void **)(lVar3 + 0x28 + (longlong)iVar1 * 0x48);
          if (pvVar6 != (void *)0x0) {
            FMemory::Free(pvVar6);
          }
          memmove((void *)(lVar3 + (longlong)iVar1 * 0x48),local_48.Pointer,0x40);
          TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::RemoveAtUninitialized
                    ((TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)this,local_48.Index,1);
          local_48.Index = iVar1;
        }
        goto LAB_146d69350;
      }
    }
    bVar7 = false;
  }
LAB_146d69350:
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar7;
  }
  if (bVar7 == false) {
    uVar10 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar10) {
      uVar9 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar14 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar10 < 1) || (iVar14 <= this->HashSize)) {
      fVar11 = (float)(this->HashSize - 1U & uVar13);
      ((FNavAgentProperties *)((longlong)local_48.Pointer + 0x38))->AgentStepHeight = fVar11;
      FVar12 = (this->Hash).SecondaryData;
      if (FVar12 == (ForElementType<FSetElementId>)0x0) {
        FVar12 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar9 = (longlong)this->HashSize - 1U & (longlong)(int)fVar11;
      ((FNavAgentProperties *)((longlong)local_48.Pointer + 0x38))->AgentHeight =
           *(float *)((longlong)FVar12 + uVar9 * 4);
      *(int *)((longlong)FVar12 + uVar9 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar14;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FNavigationElementHandle_const_&,TSharedRef<FNavigationElement_const_,1>_const_&>_> @ 146d69450

FSetElementId __thiscall
TSet<TTuple<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_,1>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<FNavigationElementHandle_const_&,TSharedRef<FNavigationElement_const_,1>_const_&>_>
          (TSet<TTuple<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_,1>,FDefaultSetAllocator>
           *this,TPairInitializer<FNavigationElementHandle_const_&,TSharedRef<FNavigationElement_const_,1>_const_&>
                 *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  undefined1 *in_R9;
  uint uVar13;
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar12 = 1;
  if (iVar1 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar6 * 0x28);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar6);
  if (local_28.Pointer != (uint *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 8);
    uVar5 = (*(undefined8 **)param_2)[1];
    *(undefined8 *)local_28.Pointer = **(undefined8 **)param_2;
    *(undefined8 *)((longlong)local_28.Pointer + 8) = uVar5;
    *(undefined8 *)((longlong)local_28.Pointer + 0x10) = *puVar4;
    lVar3 = puVar4[1];
    *(longlong *)((longlong)local_28.Pointer + 0x18) = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    *(uint *)((longlong)local_28.Pointer + 0x20) = 0xffffffff;
  }
  uVar13 = (int)((ulonglong)*(undefined8 *)((longlong)local_28.Pointer + 8) >> 0x20) * 0x17 +
           (int)*(undefined8 *)((longlong)local_28.Pointer + 8);
  uVar9 = (*(uint *)((longlong)local_28.Pointer + 4) ^ *(uint *)local_28.Pointer) - uVar13 ^
          uVar13 >> 0xd;
  uVar7 = (-0x61c88647 - uVar9) - uVar13 ^ uVar9 << 8;
  uVar13 = (uVar13 - uVar7) - uVar9 ^ uVar7 >> 0xd;
  uVar9 = (uVar9 - uVar13) - uVar7 ^ uVar13 >> 0xc;
  uVar7 = (uVar7 - uVar9) - uVar13 ^ uVar9 << 0x10;
  uVar13 = (uVar13 - uVar7) - uVar9 ^ uVar7 >> 5;
  uVar9 = (uVar9 - uVar13) - uVar7 ^ uVar13 >> 3;
  uVar7 = (uVar7 - uVar9) - uVar13 ^ uVar9 << 10;
  if (in_R9 != (undefined1 *)0x0) {
    *in_R9 = 0;
  }
  uVar10 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if (3 < uVar10) {
    uVar8 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar12 = 1 << ((byte)lVar3 & 0x1f);
  }
  if (((int)uVar10 < 1) || (iVar12 <= this->HashSize)) {
    uVar7 = this->HashSize - 1U & ((uVar13 - uVar7) - uVar9 ^ uVar7 >> 0xf);
    *(uint *)((longlong)local_28.Pointer + 0x24) = uVar7;
    FVar11 = (this->Hash).SecondaryData;
    if (FVar11 == (ForElementType<FSetElementId>)0x0) {
      FVar11 = (ForElementType<FSetElementId>)&this->Hash;
    }
    uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar7;
    *(uint *)((longlong)local_28.Pointer + 0x20) = *(uint *)((longlong)FVar11 + uVar8 * 4);
    *(int *)((longlong)FVar11 + uVar8 * 4) = local_28.Index;
  }
  else {
    this->HashSize = iVar12;
    Rehash(this);
  }
  *(int *)&param_1->Key = local_28.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FNavigationElementHandle_const_&,FOctreeElementId2_const_&>_> @ 146d69670

FSetElementId __thiscall
TSet<TTuple<FNavigationElementHandle,FOctreeElementId2>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FNavigationElementHandle_const_&,FOctreeElementId2_const_&>_>
          (TSet<TTuple<FNavigationElementHandle,FOctreeElementId2>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FNavigationElementHandle_const_&,FOctreeElementId2_const_&>
                 *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  int iVar13;
  char *in_R9;
  uint uVar14;
  undefined1 *puVar15;
  bool bVar16;
  FSparseArrayAllocationInfo local_48;
  
  iVar13 = *(int *)&(this->Elements).field_0x34;
  iVar12 = 1;
  if (iVar13 == 0) {
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
    iVar13 = iVar13 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar13;
    if (iVar13 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  puVar15 = &(this->Elements).field_0x8;
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar6);
  if (local_48.Pointer != (uint *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 8);
    uVar5 = (*(undefined8 **)param_2)[1];
    *(undefined8 *)local_48.Pointer = **(undefined8 **)param_2;
    *(undefined8 *)((longlong)local_48.Pointer + 8) = uVar5;
    *(undefined8 *)((longlong)local_48.Pointer + 0x10) = *puVar3;
    *(uint *)((longlong)local_48.Pointer + 0x18) = 0xffffffff;
  }
  lVar2 = *(longlong *)((longlong)local_48.Pointer + 8);
  bVar16 = false;
  uVar14 = (int)((ulonglong)lVar2 >> 0x20) * 0x17 + (int)lVar2;
  uVar10 = (*(uint *)local_48.Pointer ^ *(uint *)((longlong)local_48.Pointer + 4)) - uVar14 ^
           uVar14 >> 0xd;
  uVar8 = (-0x61c88647 - uVar10) - uVar14 ^ uVar10 << 8;
  uVar14 = (uVar14 - uVar10) - uVar8 ^ uVar8 >> 0xd;
  uVar10 = (uVar10 - uVar14) - uVar8 ^ uVar14 >> 0xc;
  uVar8 = (uVar8 - uVar10) - uVar14 ^ uVar10 << 0x10;
  uVar14 = (uVar14 - uVar8) - uVar10 ^ uVar8 >> 5;
  uVar10 = (uVar10 - uVar14) - uVar8 ^ uVar14 >> 3;
  uVar8 = (uVar8 - uVar10) - uVar14 ^ uVar10 << 10;
  iVar13 = *(int *)puVar15;
  iVar6 = *(int *)&(this->Elements).field_0x34;
  uVar8 = (uVar14 - uVar8) - uVar10 ^ uVar8 >> 0xf;
  if ((iVar13 - iVar6 != 1) && (iVar13 != iVar6)) {
    FVar11 = (this->Hash).SecondaryData;
    if (FVar11 == (ForElementType<FSetElementId>)0x0) {
      FVar11 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar13 = *(int *)((longlong)FVar11 + (ulonglong)(this->HashSize - 1U & uVar8) * 4);
    if (iVar13 != -1) {
      lVar4 = *(longlong *)&this->Elements;
      do {
        lVar7 = (longlong)iVar13 * 0x20;
        if (((*(uint *)(lVar7 + lVar4) == *(uint *)local_48.Pointer) &&
            (*(uint *)(lVar7 + 4 + lVar4) == *(uint *)((longlong)local_48.Pointer + 4))) &&
           (*(longlong *)(lVar7 + 8 + lVar4) == lVar2)) {
          bVar16 = iVar13 != -1;
          if (bVar16) {
            memmove((void *)((longlong)iVar13 * 0x20 + *(longlong *)&this->Elements),
                    local_48.Pointer,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar13;
          }
          break;
        }
        iVar13 = *(int *)(lVar7 + 0x18 + lVar4);
      } while (iVar13 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar16;
  }
  if (bVar16 == false) {
    uVar10 = *(int *)puVar15 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar10) {
      uVar9 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar10 < 1) || (iVar12 <= this->HashSize)) {
      uVar8 = this->HashSize - 1U & uVar8;
      *(uint *)((longlong)local_48.Pointer + 0x1c) = uVar8;
      FVar11 = (this->Hash).SecondaryData;
      if (FVar11 == (ForElementType<FSetElementId>)0x0) {
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar9 = (longlong)this->HashSize - 1U & (longlong)(int)uVar8;
      *(uint *)((longlong)local_48.Pointer + 0x18) = *(uint *)((longlong)FVar11 + uVar9 * 4);
      *(int *)((longlong)FVar11 + uVar9 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar12;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// EmplaceByHash<TKeyInitializer<UObject_*_&&>_> @ 146d69930

FSetElementId __thiscall
TSet<TTuple<UObject_*,FNavigationInvoker>,TDefaultMapHashableKeyFuncs<UObject_*,FNavigationInvoker,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<UObject_*_&&>_>
          (TSet<TTuple<UObject_*,FNavigationInvoker>,TDefaultMapHashableKeyFuncs<UObject_*,FNavigationInvoker,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<UObject_*_&&> *param_2,bool *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar4;
  int iVar5;
  bool bVar6;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_28;
  
  iVar5 = *(int *)&(this->Elements).field_0x34;
  if (iVar5 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    iVar5 = iVar5 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar3 * 0x38 + 4 + lVar2);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x38 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar3);
  if (local_28.Pointer != (TSparseSetElement<TTuple<UObject_*,FNavigationInvoker>_> *)0x0) {
    TKeyInitializer<UObject_*_&&>::
    operator<UObject_*,FNavigationInvoker>_TTuple<UObject_*,FNavigationInvoker>
              ((TKeyInitializer<UObject_*_&&> *)param_3,local_28.Pointer);
    *(undefined4 *)((longlong)local_28.Pointer + 0x30) = 0xffffffff;
  }
  iVar5 = *(int *)&(this->Elements).field_0x8;
  bVar6 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  if ((iVar5 - iVar3 != 1) && (iVar5 != iVar3)) {
    FVar4 = (this->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar5 = *(int *)((longlong)FVar4 +
                    ((ulonglong)(this->HashSize - 1) & (ulonglong)param_2 & 0xffffffff) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)((longlong)iVar5 * 0x38 + lVar2) == *(longlong *)local_28.Pointer) {
          bVar6 = iVar5 != -1;
          if (bVar6) {
            memmove((void *)((longlong)iVar5 * 0x38 + lVar2),local_28.Pointer,0x30);
            TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_28.Index,1);
            local_28.Index = iVar5;
          }
          break;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0x38 + 0x30 + lVar2);
      } while (iVar5 != -1);
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar6;
  }
  if (bVar6 == false) {
    RehashOrLink(this,(uint)param_2,local_28.Pointer,local_28.Index);
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_28.Index;
  return (FSetElementId)param_1;
}

// EmplaceByHash<TKeyInitializer<UObject_*_const_&>_> @ 146d69ad0

FSetElementId __thiscall
TSet<TTuple<UObject_*,FNavigationInvoker>,TDefaultMapHashableKeyFuncs<UObject_*,FNavigationInvoker,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<UObject_*_const_&>_>
          (TSet<TTuple<UObject_*,FNavigationInvoker>,TDefaultMapHashableKeyFuncs<UObject_*,FNavigationInvoker,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<UObject_*_const_&> *param_2,bool *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar4;
  int iVar5;
  bool bVar6;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_28;
  
  iVar5 = *(int *)&(this->Elements).field_0x34;
  if (iVar5 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    iVar5 = iVar5 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar3 * 0x38 + 4 + lVar2);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x38 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar3);
  if (local_28.Pointer != (TSparseSetElement<TTuple<UObject_*,FNavigationInvoker>_> *)0x0) {
    TKeyInitializer<UObject_*_const_&>::
    operator<UObject_*,FNavigationInvoker>_TTuple<UObject_*,FNavigationInvoker>
              ((TKeyInitializer<UObject_*_const_&> *)param_3,local_28.Pointer);
    *(undefined4 *)((longlong)local_28.Pointer + 0x30) = 0xffffffff;
  }
  iVar5 = *(int *)&(this->Elements).field_0x8;
  bVar6 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  if ((iVar5 - iVar3 != 1) && (iVar5 != iVar3)) {
    FVar4 = (this->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar5 = *(int *)((longlong)FVar4 +
                    ((ulonglong)(this->HashSize - 1) & (ulonglong)param_2 & 0xffffffff) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)((longlong)iVar5 * 0x38 + lVar2) == *(longlong *)local_28.Pointer) {
          bVar6 = iVar5 != -1;
          if (bVar6) {
            memmove((void *)((longlong)iVar5 * 0x38 + lVar2),local_28.Pointer,0x30);
            TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_28.Index,1);
            local_28.Index = iVar5;
          }
          break;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0x38 + 0x30 + lVar2);
      } while (iVar5 != -1);
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar6;
  }
  if (bVar6 == false) {
    RehashOrLink(this,(uint)param_2,local_28.Pointer,local_28.Index);
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_28.Index;
  return (FSetElementId)param_1;
}

// FindIndexByHash<TObjectPtr<UClass_const_>_> @ 146d6a310

int __thiscall
TSet<TObjectPtr<UClass_const_>,DefaultKeyFuncs<TObjectPtr<UClass_const_>,0>,FDefaultSetAllocator>::
FindIndexByHash<TObjectPtr<UClass_const_>_>
          (TSet<TObjectPtr<UClass_const_>,DefaultKeyFuncs<TObjectPtr<UClass_const_>,0>,FDefaultSetAllocator>
           *this,uint param_1,TObjectPtr<UClass_const_> *param_2)

{
  int iVar1;
  UClass *pUVar2;
  UClass *pUVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar4 = (this->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar1 = *(int *)((longlong)FVar4 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
        iVar1 != -1; iVar1 = *(int *)(*(longlong *)&this->Elements + 8 + (longlong)iVar1 * 0x10)) {
      pUVar2 = (param_2->field0_0x0).DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      pUVar3 = *(UClass **)(*(longlong *)&this->Elements + (longlong)iVar1 * 0x10);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      if (pUVar3 == pUVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}

// FindIndexByHash<FNavAgentProperties> @ 146d6a3e0

int __thiscall
TSet<TTuple<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
::FindIndexByHash<FNavAgentProperties>
          (TSet<TTuple<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
           *this,uint param_1,FNavAgentProperties *param_2)

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
        iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x48 + 0x40 + *(longlong *)&this->Elements))
    {
      bVar2 = FNavAgentProperties::operator==
                        ((FNavAgentProperties *)
                         (*(longlong *)&this->Elements + (longlong)iVar1 * 0x48),param_2);
      if (bVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}

// FindIndexByHash<FNavigationElementHandle> @ 146d6a480

int __thiscall
TSet<TTuple<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>_>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>,0>,FDefaultSetAllocator>
::FindIndexByHash<FNavigationElementHandle>
          (TSet<TTuple<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>_>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>,0>,FDefaultSetAllocator>
           *this,uint param_1,FNavigationElementHandle *param_2)

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
        lVar2 = (longlong)iVar3;
        if (((*(int *)(lVar1 + lVar2 * 0x28) == (param_2->OwnerUObject).WeakPtr.ObjectIndex) &&
            (*(int *)(lVar1 + 4 + lVar2 * 0x28) ==
             (param_2->OwnerUObject).WeakPtr.ObjectSerialNumber)) &&
           (*(ulong64 *)(lVar1 + 8 + lVar2 * 0x28) == param_2->SubElementId)) {
          return iVar3;
        }
        iVar3 = *(int *)(lVar1 + 0x20 + lVar2 * 0x28);
      } while (iVar3 != -1);
    }
  }
  return -1;
}

// FindIndexByHash<FNavigationElementHandle> @ 146d6a4f0

int __thiscall
TSet<TTuple<FNavigationElementHandle,FOctreeElementId2>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>,FDefaultSetAllocator>
::FindIndexByHash<FNavigationElementHandle>
          (TSet<TTuple<FNavigationElementHandle,FOctreeElementId2>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>,FDefaultSetAllocator>
           *this,uint param_1,FNavigationElementHandle *param_2)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar3 = (this->Hash).SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        piVar1 = (int *)((longlong)iVar2 * 0x20 + *(longlong *)&this->Elements);
        if (((*piVar1 == (param_2->OwnerUObject).WeakPtr.ObjectIndex) &&
            (piVar1[1] == (param_2->OwnerUObject).WeakPtr.ObjectSerialNumber)) &&
           (*(ulong64 *)(piVar1 + 2) == param_2->SubElementId)) {
          return iVar2;
        }
        iVar2 = piVar1[6];
      } while (iVar2 != -1);
    }
  }
  return -1;
}

// FindIndexByHash<FNavigationElementHandle> @ 146d6a570

int __thiscall
TSet<FNavigationDirtyElement,FNavigationDirtyElementKeyFunctions,FDefaultSetAllocator>::
FindIndexByHash<FNavigationElementHandle>
          (TSet<FNavigationDirtyElement,FNavigationDirtyElementKeyFunctions,FDefaultSetAllocator>
           *this,uint param_1,FNavigationElementHandle *param_2)

{
  int iVar1;
  ForElementType<FSetElementId> FVar2;
  FNavigationElementHandle local_18;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar2 = (this->Hash).SecondaryData;
    if (FVar2 == (ForElementType<FSetElementId>)0x0) {
      FVar2 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar1 = *(int *)((longlong)FVar2 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
        iVar1 != -1; iVar1 = *(int *)(*(longlong *)&this->Elements + 0x60 + (longlong)iVar1 * 0x68))
    {
      FNavigationElement::GetHandle
                (*(FNavigationElement **)
                  (*(longlong *)&this->Elements + 0x10 + (longlong)iVar1 * 0x68),&local_18);
      if (((local_18.OwnerUObject.WeakPtr.ObjectIndex == (param_2->OwnerUObject).WeakPtr.ObjectIndex
           ) && (local_18.OwnerUObject.WeakPtr.ObjectSerialNumber ==
                 (param_2->OwnerUObject).WeakPtr.ObjectSerialNumber)) &&
         (local_18.SubElementId == param_2->SubElementId)) {
        return iVar1;
      }
    }
  }
  return -1;
}

// RemoveImpl<UClass_const_*> @ 146d702f0

int __thiscall
TSet<TTuple<UClass_*,TSharedPtr<FNavigationQueryFilter_const_,1>_>,TDefaultMapHashableKeyFuncs<UClass_*,TSharedPtr<FNavigationQueryFilter_const_,1>,0>,FDefaultSetAllocator>
::RemoveImpl<UClass_const_*>
          (TSet<TTuple<UClass_*,TSharedPtr<FNavigationQueryFilter_const_,1>_>,TDefaultMapHashableKeyFuncs<UClass_*,TSharedPtr<FNavigationQueryFilter_const_,1>,0>,FDefaultSetAllocator>
           *this,uint param_1,UClass **param_2)

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
  while( true ) {
    lVar8 = (longlong)(int)uVar6 * 0x20;
    if (*(UClass **)(lVar8 + *(longlong *)&this->Elements) == *param_2) break;
    uVar6 = *(uint *)(lVar8 + *(longlong *)&this->Elements + 0x18);
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
         (uVar6 & 0x1f) & 1) != 0) goto LAB_146d703d1;
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
LAB_146d703d1:
  FVar5 = (this->Hash).SecondaryData;
  lVar8 = *(longlong *)&this->Elements + lVar8;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar7 = (uint *)((longlong)FVar5 + (longlong)*(int *)(lVar8 + 0x1c) * 4);
  while( true ) {
    uVar1 = *puVar7;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == uVar6) {
      *puVar7 = *(uint *)(lVar8 + 0x18);
      TSparseArray<TSparseSetElement<TTuple<UClass_*,TSharedPtr<FNavigationQueryFilter_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar6,1);
      TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar6,1);
      return 1;
    }
    puVar7 = (uint *)(*(longlong *)&this->Elements + 0x18 + (longlong)(int)uVar1 * 0x20);
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

// RemoveImpl<UClass_const_*> @ 146d70490

int __thiscall
TSet<TTuple<UClass_const_*,int>,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>,FDefaultSetAllocator>
::RemoveImpl<UClass_const_*>
          (TSet<TTuple<UClass_const_*,int>,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>,FDefaultSetAllocator>
           *this,uint param_1,UClass **param_2)

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
        *(UClass **)(lVar7 + *(longlong *)&this->Elements) != *param_2) {
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
         (uVar6 & 0x1f) & 1) != 0) goto LAB_146d70577;
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
LAB_146d70577:
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

// RemoveImpl<TObjectPtr<UClass_const_>_> @ 146d70610

int __thiscall
TSet<TObjectPtr<UClass_const_>,DefaultKeyFuncs<TObjectPtr<UClass_const_>,0>,FDefaultSetAllocator>::
RemoveImpl<TObjectPtr<UClass_const_>_>
          (TSet<TObjectPtr<UClass_const_>,DefaultKeyFuncs<TObjectPtr<UClass_const_>,0>,FDefaultSetAllocator>
           *this,uint param_1,TObjectPtr<UClass_const_> *param_2)

{
  uint uVar1;
  longlong lVar2;
  UClass *pUVar3;
  UClass *pUVar4;
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
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    pUVar4 = *(UClass **)(lVar2 + lVar12);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
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
         (uVar9 & 0x1f) & 1) != 0) goto LAB_146d70729;
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
LAB_146d70729:
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

// RemoveImpl<FNavAgentProperties> @ 146d707c0

int __thiscall
TSet<TTuple<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
::RemoveImpl<FNavAgentProperties>
          (TSet<TTuple<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
           *this,uint param_1,FNavAgentProperties *param_2)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  float fVar6;
  longlong lVar7;
  FNavAgentProperties *this_00;
  undefined1 *puVar8;
  float *pfVar9;
  
  FVar5 = (this->Hash).SecondaryData;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  fVar6 = *(float *)((longlong)FVar5 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4)
  ;
  if (fVar6 == -NAN) {
    return 0;
  }
  while( true ) {
    this_00 = (FNavAgentProperties *)(*(longlong *)&this->Elements + (longlong)(int)fVar6 * 0x48);
    bVar3 = FNavAgentProperties::operator==(this_00,param_2);
    if (bVar3) break;
    fVar6 = this_00[1].AgentHeight;
    if (fVar6 == -NAN) {
      return 0;
    }
  }
  if ((-1 < (int)fVar6) && ((int)fVar6 < *(int *)&(this->Elements).field_0x28)) {
    puVar8 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar8 + (longlong)((int)((int)fVar6 + ((int)fVar6 >> 0x1f & 0x1fU)) >> 5) * 4)
         >> ((uint)fVar6 & 0x1f) & 1) != 0) goto LAB_146d708b0;
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
LAB_146d708b0:
  FVar5 = (this->Hash).SecondaryData;
  lVar7 = *(longlong *)&this->Elements + (longlong)(int)fVar6 * 0x48;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  pfVar9 = (float *)((longlong)FVar5 + (longlong)*(int *)(lVar7 + 0x44) * 4);
  while( true ) {
    fVar1 = *pfVar9;
    if ((fVar1 == -NAN) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (fVar1 == fVar6) {
      *pfVar9 = *(float *)(lVar7 + 0x40);
      TSparseArray<TSparseSetElement<TTuple<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,(int)fVar6,1);
      TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,(int)fVar6,1);
      return 1;
    }
    pfVar9 = (float *)(*(longlong *)&this->Elements + (longlong)(int)fVar1 * 0x48 + 0x40);
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

// RemoveImpl<FNavigationElementHandle> @ 146d70960

int __thiscall
TSet<TTuple<FNavigationElementHandle,FOctreeElementId2>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>,FDefaultSetAllocator>
::RemoveImpl<FNavigationElementHandle>
          (TSet<TTuple<FNavigationElementHandle,FOctreeElementId2>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>,FDefaultSetAllocator>
           *this,uint param_1,FNavigationElementHandle *param_2)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  longlong lVar7;
  uint *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  
  FVar6 = (this->Hash).SecondaryData;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar9 = *(uint *)((longlong)FVar6 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar9 == 0xffffffff) {
    return 0;
  }
  lVar2 = *(longlong *)&this->Elements;
  while (((lVar7 = (longlong)(int)uVar9 * 0x20,
          *(int *)(lVar7 + lVar2) != (param_2->OwnerUObject).WeakPtr.ObjectIndex ||
          (*(int *)(lVar7 + 4 + lVar2) != (param_2->OwnerUObject).WeakPtr.ObjectSerialNumber)) ||
         (*(ulong64 *)(lVar7 + 8 + lVar2) != param_2->SubElementId))) {
    uVar9 = *(uint *)(lVar7 + 0x18 + lVar2);
    if (uVar9 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar9) && ((int)uVar9 < *(int *)&(this->Elements).field_0x28)) {
    puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar10 + (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar9 & 0x1f) & 1) != 0) goto LAB_146d70a52;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
LAB_146d70a52:
  FVar6 = (this->Hash).SecondaryData;
  lVar7 = *(longlong *)&this->Elements + lVar7;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar8 = (uint *)((longlong)FVar6 + (longlong)*(int *)(lVar7 + 0x1c) * 4);
  while( true ) {
    uVar1 = *puVar8;
    if ((uVar1 == 0xffffffff) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar4)) break;
    if (uVar1 == uVar9) {
      *puVar8 = *(uint *)(lVar7 + 0x18);
      TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar9,1);
      return 1;
    }
    puVar8 = (uint *)(*(longlong *)&this->Elements + 0x18 + (longlong)(int)uVar1 * 0x20);
  }
  pcVar3 = (code *)swi(3);
  iVar5 = (*pcVar3)();
  return iVar5;
}

// operator= @ 146d794a0

TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> * __thiscall
TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>::operator=
          (TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *this,
          TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *param_1
          )

{
  undefined1 *puVar1;
  undefined1 *this_00;
  int iVar2;
  
  if (this != param_1) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              (&this->Hash,&this->HashSize,&param_1->Hash,param_1->HashSize);
    iVar2 = *(int *)&(param_1->Elements).field_0x8;
    TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// Find @ 146d955e0

TTuple<UClass_*,TSharedPtr<FNavigationQueryFilter_const_,1>_> * __thiscall
TSet<TTuple<UClass_*,TSharedPtr<FNavigationQueryFilter_const_,1>_>,TDefaultMapHashableKeyFuncs<UClass_*,TSharedPtr<FNavigationQueryFilter_const_,1>,0>,FDefaultSetAllocator>
::Find(TSet<TTuple<UClass_*,TSharedPtr<FNavigationQueryFilter_const_,1>_>,TDefaultMapHashableKeyFuncs<UClass_*,TSharedPtr<FNavigationQueryFilter_const_,1>,0>,FDefaultSetAllocator>
       *this,UClass *param_1)

{
  int iVar1;
  TTuple<UClass_*,TSharedPtr<FNavigationQueryFilter_const_,1>_> *pTVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  
  uVar4 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar3 = (this->Hash).SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)(this->HashSize - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
    if (iVar1 != -1) {
      do {
        pTVar2 = (TTuple<UClass_*,TSharedPtr<FNavigationQueryFilter_const_,1>_> *)
                 ((longlong)iVar1 * 0x20 + *(longlong *)&this->Elements);
        if (*(UClass **)pTVar2 == param_1) {
          return pTVar2;
        }
        iVar1 = *(int *)(pTVar2 + 1);
      } while (iVar1 != -1);
    }
  }
  return (TTuple<UClass_*,TSharedPtr<FNavigationQueryFilter_const_,1>_> *)0x0;
}

// FindId @ 146d959d0

FSetElementId __thiscall
TSet<FNavigationDirtyElement,FNavigationDirtyElementKeyFunctions,FDefaultSetAllocator>::FindId
          (TSet<FNavigationDirtyElement,FNavigationDirtyElementKeyFunctions,FDefaultSetAllocator>
           *this,FNavigationElementHandle *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  FNavigationElementHandle *in_R8;
  uint uVar4;
  
  uVar3 = (int)(in_R8->SubElementId >> 0x20) * 0x17 + (int)in_R8->SubElementId;
  uVar4 = ((in_R8->OwnerUObject).WeakPtr.ObjectSerialNumber ^
          (in_R8->OwnerUObject).WeakPtr.ObjectIndex) - uVar3 ^ uVar3 >> 0xd;
  uVar2 = (-0x61c88647 - uVar4) - uVar3 ^ uVar4 << 8;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 >> 0xd;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xc;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 << 0x10;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 >> 5;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 3;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 << 10;
  iVar1 = FindIndexByHash<FNavigationElementHandle>
                    (this,(uVar3 - uVar2) - uVar4 ^ uVar2 >> 0xf,in_R8);
  (param_1->OwnerUObject).WeakPtr.ObjectIndex = iVar1;
  return (FSetElementId)(int)param_1;
}

// Rehash @ 146db2020

void __thiscall
TSet<TObjectPtr<UClass_const_>,DefaultKeyFuncs<TObjectPtr<UClass_const_>,0>,FDefaultSetAllocator>::
Rehash(TSet<TObjectPtr<UClass_const_>,DefaultKeyFuncs<TObjectPtr<UClass_const_>,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_146db20f7;
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
LAB_146db20f7:
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

// Rehash @ 146db21f0

void __thiscall
TSet<TTuple<UClass_*,TSharedPtr<FNavigationQueryFilter_const_,1>_>,TDefaultMapHashableKeyFuncs<UClass_*,TSharedPtr<FNavigationQueryFilter_const_,1>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<UClass_*,TSharedPtr<FNavigationQueryFilter_const_,1>_>,TDefaultMapHashableKeyFuncs<UClass_*,TSharedPtr<FNavigationQueryFilter_const_,1>,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_146db22cc;
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
LAB_146db22cc:
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

// Rehash @ 146db23b0

void __thiscall
TSet<TTuple<UObject_*,FNavigationInvoker>,TDefaultMapHashableKeyFuncs<UObject_*,FNavigationInvoker,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<UObject_*,FNavigationInvoker>,TDefaultMapHashableKeyFuncs<UObject_*,FNavigationInvoker,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_146db248c;
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
LAB_146db248c:
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
                 ((longlong)local_30.CurrentBitIndex * 0x38 + *(longlong *)&this->Elements);
        uVar4 = ((uint)(*puVar8 >> 0x14) & 0xffff ^ (uint)(*puVar8 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = (uVar4 >> 0x10 ^ uVar4) & *piVar1 - 1U;
        *(uint *)((longlong)puVar8 + 0x34) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar8 + 6) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 146db2570

void __thiscall
TSet<TTuple<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  uint uVar8;
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
      uVar8 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar8 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_146db264c;
        uVar8 = puVar9[lVar5 + 1];
      }
      uStack_54 = -uVar8 & uVar8;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_146db264c:
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
        lVar5 = *(longlong *)&this->Elements;
        lVar4 = (longlong)local_30.CurrentBitIndex;
        uVar8 = (((int)(short)(int)*(float *)(lVar5 + 4 + lVar4 * 0x48) << 0x10 |
                 (int)(short)(int)*(float *)(lVar5 + 8 + lVar4 * 0x48)) ^
                (int)*(float *)(lVar5 + 0xc + lVar4 * 0x48)) & *piVar1 - 1U;
        *(uint *)(lVar5 + 0x44 + lVar4 * 0x48) = uVar8;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar8;
        *(undefined4 *)(lVar5 + 0x40 + lVar4 * 0x48) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 146db2730

void __thiscall
TSet<TTuple<FNavLinkId,FNavigationSystem::FCustomLinkOwnerInfo>,TDefaultMapHashableKeyFuncs<FNavLinkId,FNavigationSystem::FCustomLinkOwnerInfo,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FNavLinkId,FNavigationSystem::FCustomLinkOwnerInfo>,TDefaultMapHashableKeyFuncs<FNavLinkId,FNavigationSystem::FCustomLinkOwnerInfo,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_146db280c;
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
LAB_146db280c:
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
                 ((longlong)local_30.CurrentBitIndex * 0x20 + *(longlong *)&this->Elements);
        uVar7 = (int)((ulonglong)*puVar8 >> 0x20) * 0x17 + (int)*puVar8 & *piVar1 - 1U;
        *(uint *)((longlong)puVar8 + 0x1c) = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(puVar8 + 3) = *(undefined4 *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 146db28d0

void __thiscall
TSet<TTuple<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_,1>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_,1>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  uint uVar9;
  uint *puVar10;
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
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_30.Array;
      }
      uVar4 = *puVar10;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_146db29ac;
        uVar4 = puVar10[lVar5 + 1];
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
LAB_146db29ac:
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
        puVar10 = (uint *)(*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x28)
        ;
        uVar9 = (int)((ulonglong)*(undefined8 *)(puVar10 + 2) >> 0x20) * 0x17 +
                (int)*(undefined8 *)(puVar10 + 2);
        uVar7 = (puVar10[1] ^ *puVar10) - uVar9 ^ uVar9 >> 0xd;
        uVar4 = (-0x61c88647 - uVar7) - uVar9 ^ uVar7 << 8;
        uVar9 = (uVar9 - uVar4) - uVar7 ^ uVar4 >> 0xd;
        uVar7 = (uVar7 - uVar9) - uVar4 ^ uVar9 >> 0xc;
        uVar4 = (uVar4 - uVar7) - uVar9 ^ uVar7 << 0x10;
        uVar9 = (uVar9 - uVar4) - uVar7 ^ uVar4 >> 5;
        uVar7 = (uVar7 - uVar9) - uVar4 ^ uVar9 >> 3;
        uVar4 = (uVar4 - uVar7) - uVar9 ^ uVar7 << 10;
        uVar4 = ((uVar9 - uVar4) - uVar7 ^ uVar4 >> 0xf) & *piVar1 - 1U;
        puVar10[9] = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        puVar10[8] = *(uint *)((longlong)FVar8 + uVar6 * 4);
        *(int *)((longlong)FVar8 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 146db2b00

void __thiscall
TSet<TTuple<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>_>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>_>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  uint uVar9;
  uint *puVar10;
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
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_30.Array;
      }
      uVar4 = *puVar10;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_146db2bdc;
        uVar4 = puVar10[lVar5 + 1];
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
LAB_146db2bdc:
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
        puVar10 = (uint *)(*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x28)
        ;
        uVar9 = (int)((ulonglong)*(undefined8 *)(puVar10 + 2) >> 0x20) * 0x17 +
                (int)*(undefined8 *)(puVar10 + 2);
        uVar7 = (puVar10[1] ^ *puVar10) - uVar9 ^ uVar9 >> 0xd;
        uVar4 = (-0x61c88647 - uVar7) - uVar9 ^ uVar7 << 8;
        uVar9 = (uVar9 - uVar4) - uVar7 ^ uVar4 >> 0xd;
        uVar7 = (uVar7 - uVar9) - uVar4 ^ uVar9 >> 0xc;
        uVar4 = (uVar4 - uVar7) - uVar9 ^ uVar7 << 0x10;
        uVar9 = (uVar9 - uVar4) - uVar7 ^ uVar4 >> 5;
        uVar7 = (uVar7 - uVar9) - uVar4 ^ uVar9 >> 3;
        uVar4 = (uVar4 - uVar7) - uVar9 ^ uVar7 << 10;
        uVar4 = ((uVar9 - uVar4) - uVar7 ^ uVar4 >> 0xf) & *piVar1 - 1U;
        puVar10[9] = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        puVar10[8] = *(uint *)((longlong)FVar8 + uVar6 * 4);
        *(int *)((longlong)FVar8 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 146db2d30

void __thiscall
TSet<TTuple<FNavigationElementHandle,FOctreeElementId2>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FNavigationElementHandle,FOctreeElementId2>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  uint uVar9;
  uint *puVar10;
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
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_30.Array;
      }
      uVar4 = *puVar10;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_146db2e0c;
        uVar4 = puVar10[lVar5 + 1];
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
LAB_146db2e0c:
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
        puVar10 = (uint *)((longlong)local_30.CurrentBitIndex * 0x20 + *(longlong *)&this->Elements)
        ;
        uVar9 = (int)((ulonglong)*(undefined8 *)(puVar10 + 2) >> 0x20) * 0x17 +
                (int)*(undefined8 *)(puVar10 + 2);
        uVar7 = (puVar10[1] ^ *puVar10) - uVar9 ^ uVar9 >> 0xd;
        uVar4 = (-0x61c88647 - uVar7) - uVar9 ^ uVar7 << 8;
        uVar9 = (uVar9 - uVar4) - uVar7 ^ uVar4 >> 0xd;
        uVar7 = (uVar7 - uVar9) - uVar4 ^ uVar9 >> 0xc;
        uVar4 = (uVar4 - uVar7) - uVar9 ^ uVar7 << 0x10;
        uVar9 = (uVar9 - uVar4) - uVar7 ^ uVar4 >> 5;
        uVar7 = (uVar7 - uVar9) - uVar4 ^ uVar9 >> 3;
        uVar4 = (uVar4 - uVar7) - uVar9 ^ uVar7 << 10;
        uVar4 = ((uVar9 - uVar4) - uVar7 ^ uVar4 >> 0xf) & *piVar1 - 1U;
        puVar10[7] = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        puVar10[6] = *(uint *)((longlong)FVar8 + uVar6 * 4);
        *(int *)((longlong)FVar8 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 146db2f50

void __thiscall
TSet<TTuple<FObjectKey,FNavigationElementHandle>,TDefaultMapHashableKeyFuncs<FObjectKey,FNavigationElementHandle,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FObjectKey,FNavigationElementHandle>,TDefaultMapHashableKeyFuncs<FObjectKey,FNavigationElementHandle,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  uint uVar10;
  uint *puVar11;
  int *piVar12;
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
      puVar11 = *(uint **)&(this->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_30.Array;
      }
      uVar5 = *puVar11;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar6 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_146db302c;
        uVar5 = puVar11[lVar6 + 1];
      }
      uStack_54 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_54 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_44 = (int)lVar6 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_146db302c:
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
        piVar12 = (int *)((longlong)local_30.CurrentBitIndex * 0x20 + *(longlong *)&this->Elements);
        uVar5 = piVar12[1];
        uVar8 = *piVar12 - uVar5 ^ uVar5 >> 0xd;
        uVar4 = (-0x61c88647 - uVar8) - uVar5 ^ uVar8 << 8;
        uVar10 = (uVar5 - uVar4) - uVar8 ^ uVar4 >> 0xd;
        uVar8 = (uVar8 - uVar10) - uVar4 ^ uVar10 >> 0xc;
        uVar5 = (uVar4 - uVar8) - uVar10 ^ uVar8 << 0x10;
        uVar10 = (uVar10 - uVar5) - uVar8 ^ uVar5 >> 5;
        uVar4 = (uVar8 - uVar10) - uVar5 ^ uVar10 >> 3;
        uVar5 = (uVar5 - uVar4) - uVar10 ^ uVar4 << 10;
        uVar5 = ((uVar10 - uVar5) - uVar4 ^ uVar5 >> 0xf) & *piVar1 - 1U;
        piVar12[7] = uVar5;
        FVar3 = (this->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar3;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        piVar12[6] = *(int *)((longlong)FVar9 + uVar7 * 4);
        *(int *)((longlong)FVar9 + uVar7 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 146db3160

void __thiscall
TSet<FNavAgentProperties,DefaultKeyFuncs<FNavAgentProperties,0>,FDefaultSetAllocator>::Rehash
          (TSet<FNavAgentProperties,DefaultKeyFuncs<FNavAgentProperties,0>,FDefaultSetAllocator>
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
  longlong lVar9;
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_146db323c;
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
LAB_146db323c:
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
        lVar4 = *(longlong *)&this->Elements;
        lVar9 = (longlong)local_30.CurrentBitIndex * 0x40;
        uVar7 = (((int)(short)(int)*(float *)(lVar9 + 4 + lVar4) << 0x10 |
                 (int)(short)(int)*(float *)(lVar9 + 8 + lVar4)) ^
                (int)*(float *)(lVar9 + 0xc + lVar4)) & *piVar1 - 1U;
        *(uint *)(lVar9 + 0x3c + lVar4) = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(lVar9 + 0x38 + lVar4) = *(undefined4 *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 146db3320

void __thiscall
TSet<FNavigationBounds,DefaultKeyFuncs<FNavigationBounds,0>,FDefaultSetAllocator>::Rehash
          (TSet<FNavigationBounds,DefaultKeyFuncs<FNavigationBounds,0>,FDefaultSetAllocator> *this)

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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_146db33fc;
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
LAB_146db33fc:
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
        puVar8 = (uint *)((longlong)local_30.CurrentBitIndex * 0x58 + *(longlong *)&this->Elements);
        uVar7 = *piVar1 - 1U & *puVar8;
        puVar8[0x15] = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        puVar8[0x14] = *(uint *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 146db34b0

void __thiscall
TSet<FNavigationDirtyElement,FNavigationDirtyElementKeyFunctions,FDefaultSetAllocator>::Rehash
          (TSet<FNavigationDirtyElement,FNavigationDirtyElementKeyFunctions,FDefaultSetAllocator>
           *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  uint uVar9;
  uint *puVar10;
  FNavigationElementHandle local_58;
  undefined4 local_48;
  int iStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  TSet<FNavigationDirtyElement,FNavigationDirtyElementKeyFunctions,FDefaultSetAllocator> *local_38;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_58.SubElementId = (ulong64)&(this->Elements).field_0x10;
    local_58.OwnerUObject.WeakPtr.ObjectIndex = 0;
    local_58.OwnerUObject.WeakPtr.ObjectSerialNumber = 1;
    iStack_44 = 0;
    uStack_40 = 0;
    if (iVar2 != 0) {
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_58.SubElementId;
      }
      uVar4 = *puVar10;
      uStack_40 = 0;
      local_58.OwnerUObject.WeakPtr.ObjectIndex = 0;
      while (uVar4 == 0) {
        uStack_40 = uStack_40 + 0x20;
        lVar5 = (longlong)local_58.OwnerUObject.WeakPtr.ObjectIndex;
        local_58.OwnerUObject.WeakPtr.ObjectIndex = local_58.OwnerUObject.WeakPtr.ObjectIndex + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <
            local_58.OwnerUObject.WeakPtr.ObjectIndex) goto LAB_146db3587;
        uVar4 = puVar10[lVar5 + 1];
      }
      local_58.OwnerUObject.WeakPtr.ObjectSerialNumber = -uVar4 & uVar4;
      uVar6 = (ulonglong)(uint)local_58.OwnerUObject.WeakPtr.ObjectSerialNumber * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + uStack_40;
      if (iVar2 < iStack_44) {
LAB_146db3587:
        iStack_44 = iVar2;
      }
    }
    local_48 = 0xffffffff;
    local_30._padding_._0_4_ = local_58.OwnerUObject.WeakPtr.ObjectIndex;
    local_30._padding_._4_4_ = local_58.OwnerUObject.WeakPtr.ObjectSerialNumber;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = uStack_40;
    local_38 = this;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_58.SubElementId;
    if (iStack_44 < iVar2) {
      do {
        iVar2 = local_30.CurrentBitIndex;
        lVar5 = *(longlong *)&local_38->Elements + (longlong)local_30.CurrentBitIndex * 0x68;
        FNavigationElement::GetHandle(*(FNavigationElement **)(lVar5 + 0x10),&local_58);
        uVar9 = (int)(local_58.SubElementId >> 0x20) * 0x17 + (int)local_58.SubElementId;
        uVar7 = (local_58.OwnerUObject.WeakPtr.ObjectSerialNumber ^
                local_58.OwnerUObject.WeakPtr.ObjectIndex) - uVar9 ^ uVar9 >> 0xd;
        uVar4 = (-0x61c88647 - uVar9) - uVar7 ^ uVar7 << 8;
        uVar9 = (uVar9 - uVar4) - uVar7 ^ uVar4 >> 0xd;
        uVar7 = (uVar7 - uVar9) - uVar4 ^ uVar9 >> 0xc;
        uVar4 = (uVar4 - uVar7) - uVar9 ^ uVar7 << 0x10;
        uVar9 = (uVar9 - uVar4) - uVar7 ^ uVar4 >> 5;
        uVar7 = (uVar7 - uVar9) - uVar4 ^ uVar9 >> 3;
        uVar4 = (uVar4 - uVar7) - uVar9 ^ uVar7 << 10;
        uVar4 = ((uVar9 - uVar4) - uVar7 ^ uVar4 >> 0xf) & *piVar1 - 1U;
        *(uint *)(lVar5 + 100) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(lVar5 + 0x60) = *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
        *(int *)((longlong)FVar8 + uVar6 * 4) = iVar2;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// RehashOrLink @ 146db36d0

void __thiscall
TSet<TTuple<UObject_*,FNavigationInvoker>,TDefaultMapHashableKeyFuncs<UObject_*,FNavigationInvoker,0>,FDefaultSetAllocator>
::RehashOrLink(TSet<TTuple<UObject_*,FNavigationInvoker>,TDefaultMapHashableKeyFuncs<UObject_*,FNavigationInvoker,0>,FDefaultSetAllocator>
               *this,uint param_1,TSparseSetElement<TTuple<UObject_*,FNavigationInvoker>_> *param_2,
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
  *(uint *)&param_2->field_0x34 = uVar5;
  FVar4 = (this->Hash).SecondaryData;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar3 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
  *(undefined4 *)&param_2->field_0x30 = *(undefined4 *)((longlong)FVar4 + uVar3 * 4);
  *(int *)((longlong)FVar4 + uVar3 * 4) = param_3;
  return;
}

// Remove @ 146db3770

int __thiscall
TSet<TTuple<FNavLinkId,FNavigationSystem::FCustomLinkOwnerInfo>,TDefaultMapHashableKeyFuncs<FNavLinkId,FNavigationSystem::FCustomLinkOwnerInfo,0>,FDefaultSetAllocator>
::Remove(TSet<TTuple<FNavLinkId,FNavigationSystem::FCustomLinkOwnerInfo>,TDefaultMapHashableKeyFuncs<FNavLinkId,FNavigationSystem::FCustomLinkOwnerInfo,0>,FDefaultSetAllocator>
         *this,FNavLinkId *param_1)

{
  uint uVar1;
  ulong64 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 *puVar9;
  uint *puVar10;
  
  if (*(int *)&(this->Elements).field_0x8 == *(int *)&(this->Elements).field_0x34) {
    return 0;
  }
  uVar2 = param_1->Id;
  FVar6 = (this->Hash).SecondaryData;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar7 = *(uint *)((longlong)FVar6 +
                   ((longlong)((int)(uVar2 >> 0x20) * 0x17 + (int)uVar2) &
                   (longlong)this->HashSize - 1U) * 4);
  if (uVar7 != 0xffffffff) {
    do {
      lVar8 = (longlong)(int)uVar7 * 0x20;
      if (*(ulong64 *)(lVar8 + *(longlong *)&this->Elements) == uVar2) {
        if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)&(this->Elements).field_0x28)) {
          puVar9 = *(undefined1 **)&(this->Elements).field_0x20;
          if (puVar9 == (undefined1 *)0x0) {
            puVar9 = &(this->Elements).field_0x10;
          }
          if ((*(uint *)(puVar9 + (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4)
               >> (uVar7 & 0x1f) & 1) != 0) goto LAB_146db3858;
        }
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Elements.IsValidIndex(ElementIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          iVar5 = (*pcVar3)();
          return iVar5;
        }
LAB_146db3858:
        FVar6 = (this->Hash).SecondaryData;
        lVar8 = *(longlong *)&this->Elements + lVar8;
        if (FVar6 == (ForElementType<FSetElementId>)0x0) {
          FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        }
        puVar10 = (uint *)((longlong)FVar6 + (longlong)*(int *)(lVar8 + 0x1c) * 4);
        while( true ) {
          uVar1 = *puVar10;
          if ((uVar1 == 0xffffffff) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("NextElementIndex != INDEX_NONE",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                 ,0x2b5,L"Corrupt hash"), bVar4)) break;
          if (uVar1 == uVar7) {
            *puVar10 = *(uint *)(lVar8 + 0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,uVar7,1);
            return 1;
          }
          puVar10 = (uint *)(*(longlong *)&this->Elements + 0x18 + (longlong)(int)uVar1 * 0x20);
        }
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
      uVar7 = *(uint *)(lVar8 + *(longlong *)&this->Elements + 0x18);
    } while (uVar7 != 0xffffffff);
  }
  return 0;
}

// RemoveByIndex @ 146db4040

void __thiscall
TSet<TTuple<UObject_*,FNavigationInvoker>,TDefaultMapHashableKeyFuncs<UObject_*,FNavigationInvoker,0>,FDefaultSetAllocator>
::RemoveByIndex(TSet<TTuple<UObject_*,FNavigationInvoker>,TDefaultMapHashableKeyFuncs<UObject_*,FNavigationInvoker,0>,FDefaultSetAllocator>
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
    goto LAB_146db40b2;
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
LAB_146db40b2:
  FVar4 = (this->Hash).SecondaryData;
  lVar5 = (longlong)param_1 * 0x38 + *(longlong *)&this->Elements;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  piVar7 = (int *)((longlong)FVar4 + (longlong)*(int *)(lVar5 + 0x34) * 4);
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
    piVar7 = (int *)(*(longlong *)&this->Elements + 0x30 + (longlong)iVar1 * 0x38);
  }
  *piVar7 = *(int *)(lVar5 + 0x30);
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized
            ((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this,param_1,1);
  return;
}

// RemoveByIndex @ 146db4150

void __thiscall
TSet<FNavigationDirtyElement,FNavigationDirtyElementKeyFunctions,FDefaultSetAllocator>::
RemoveByIndex(TSet<FNavigationDirtyElement,FNavigationDirtyElementKeyFunctions,FDefaultSetAllocator>
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
    goto LAB_146db41c2;
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
LAB_146db41c2:
  FVar4 = (this->Hash).SecondaryData;
  lVar5 = (longlong)param_1 * 0x68 + *(longlong *)&this->Elements;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  piVar7 = (int *)((longlong)FVar4 + (longlong)*(int *)(lVar5 + 100) * 4);
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
    piVar7 = (int *)(*(longlong *)&this->Elements + 0x60 + (longlong)iVar1 * 0x68);
  }
  *piVar7 = *(int *)(lVar5 + 0x60);
  TSparseArray<TSparseSetElement<FNavigationDirtyElement>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(&this->Elements,param_1,1);
  TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized
            ((TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this,param_1,1);
  return;
}

// Reset @ 146db7920

void __thiscall
TSet<TTuple<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
::Reset(TSet<TTuple<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
        *this)

{
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    UnhashElements(this);
    TSparseArray<TSparseSetElement<TTuple<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&this->Elements,0,*(int *)&(this->Elements).field_0x8);
    *(undefined4 *)&(this->Elements).field_0x8 = 0;
    if (*(int *)&(this->Elements).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,0,(ForAnyElementType *)this,0,(int *)&(this->Elements).field_0xc);
    }
    *(undefined4 *)&(this->Elements).field_0x34 = 0;
    *(undefined4 *)&(this->Elements).field_0x28 = 0;
    *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  }
  return;
}

// TryReplaceExisting @ 146dbde60

bool __thiscall
TSet<FNavAgentProperties,DefaultKeyFuncs<FNavAgentProperties,0>,FDefaultSetAllocator>::
TryReplaceExisting(TSet<FNavAgentProperties,DefaultKeyFuncs<FNavAgentProperties,0>,FDefaultSetAllocator>
                   *this,uint param_1,TSparseSetElement<FNavAgentProperties> *param_2,int *param_3,
                  bool *param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  code *pcVar7;
  byte bVar8;
  bool bVar9;
  bool bVar10;
  undefined1 uVar11;
  undefined4 uVar12;
  undefined1 *puVar13;
  ForElementType<FSetElementId> FVar14;
  void *_Dst;
  uint uVar15;
  
  iVar3 = *(int *)&(this->Elements).field_0x8;
  bVar9 = false;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  if ((iVar3 - iVar4 != 1) && (iVar3 != iVar4)) {
    FVar14 = (this->Hash).SecondaryData;
    if (FVar14 == (ForElementType<FSetElementId>)0x0) {
      FVar14 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar3 = *(int *)((longlong)FVar14 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
        iVar3 != -1; iVar3 = *(int *)((longlong)iVar3 * 0x40 + 0x38 + *(longlong *)&this->Elements))
    {
      bVar9 = FNavAgentProperties::operator==
                        ((FNavAgentProperties *)
                         (*(longlong *)&this->Elements + (longlong)iVar3 * 0x40),
                         (FNavAgentProperties *)param_2);
      if (bVar9) {
        bVar9 = iVar3 != -1;
        if (bVar9) {
          _Dst = (void *)((longlong)iVar3 * 0x40 + *(longlong *)&this->Elements);
          pvVar5 = *(void **)((longlong)_Dst + 0x28);
          if (pvVar5 != (void *)0x0) {
            FMemory::Free(pvVar5);
          }
          memmove(_Dst,param_2,0x38);
          iVar4 = *param_3;
          puVar1 = &(this->Elements).field_0x10;
          lVar6 = *(longlong *)&this->Elements;
          bVar8 = (byte)iVar4 & 0x1f;
          uVar15 = 1 << bVar8 | 1U >> 0x20 - bVar8;
          if (((iVar4 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar4)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            uVar11 = (*pcVar7)();
            return (bool)uVar11;
          }
          puVar13 = *(undefined1 **)&(this->Elements).field_0x20;
          lVar2 = (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4;
          if (puVar13 == (undefined1 *)0x0) {
            puVar13 = puVar1;
          }
          if (((*(uint *)(puVar13 + lVar2) & uVar15) == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("AllocationFlags[Index]",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                  ,0xc5,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            uVar11 = (*pcVar7)();
            return (bool)uVar11;
          }
          if (*(int *)&(this->Elements).field_0x34 != 0) {
            *(int *)((longlong)*(int *)&(this->Elements).field_0x30 * 0x40 + lVar6) = iVar4;
          }
          uVar12 = 0xffffffff;
          *(undefined4 *)((longlong)iVar4 * 0x40 + lVar6) = 0xffffffff;
          if (0 < *(int *)&(this->Elements).field_0x34) {
            uVar12 = *(undefined4 *)&(this->Elements).field_0x30;
          }
          *(undefined4 *)((longlong)iVar4 * 0x40 + 4 + lVar6) = uVar12;
          puVar13 = &(this->Elements).field_0x34;
          *(int *)puVar13 = *(int *)puVar13 + 1;
          *(int *)&(this->Elements).field_0x30 = iVar4;
          if (((iVar4 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar4)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            uVar11 = (*pcVar7)();
            return (bool)uVar11;
          }
          puVar13 = *(undefined1 **)&(this->Elements).field_0x20;
          if (puVar13 == (undefined1 *)0x0) {
            puVar13 = puVar1;
          }
          *(uint *)(puVar13 + lVar2) = *(uint *)(puVar13 + lVar2) & ~uVar15;
          *param_3 = iVar3;
        }
        goto LAB_146dbdeec;
      }
    }
    bVar9 = false;
  }
LAB_146dbdeec:
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar9;
  }
  return bVar9;
}

// UnhashElements @ 146dbe0d0

void __thiscall
TSet<TTuple<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_146dbe1cb;
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
LAB_146dbe1cb:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_146dbe2c0;
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
LAB_146dbe2c0:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// UnhashElements @ 146dbe360

void __thiscall
TSet<TTuple<FNavigationElementHandle,FOctreeElementId2>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<FNavigationElementHandle,FOctreeElementId2>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_146dbe45b;
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
LAB_146dbe45b:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_146dbe550;
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
LAB_146dbe550:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<FNavigationElementHandle,FOctreeElementId2>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// UnhashElements @ 146dbe5f0

void __thiscall
TSet<FNavigationBounds,DefaultKeyFuncs<FNavigationBounds,0>,FDefaultSetAllocator>::UnhashElements
          (TSet<FNavigationBounds,DefaultKeyFuncs<FNavigationBounds,0>,FDefaultSetAllocator> *this)

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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_146dbe6eb;
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
LAB_146dbe6eb:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_146dbe7e0;
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
LAB_146dbe7e0:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<FNavigationBounds>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)((longlong)local_60.CurrentBitIndex * 0x58 + 0x54 + *(longlong *)&this->Elements) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// UnhashElements @ 146dbe880

void __thiscall
TSet<FNavigationDirtyElement,FNavigationDirtyElementKeyFunctions,FDefaultSetAllocator>::
UnhashElements(TSet<FNavigationDirtyElement,FNavigationDirtyElementKeyFunctions,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_146dbe97b;
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
LAB_146dbe97b:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_146dbea70;
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
LAB_146dbea70:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<FNavigationDirtyElement>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)((longlong)local_60.CurrentBitIndex * 0x68 + 100 + *(longlong *)&this->Elements) * 4) =
         0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// Append<FDefaultSetAllocator> @ 146dcbb30

void __thiscall
TSet<FNavTestSceneProxy::FNodeDebugData,DefaultKeyFuncs<FNavTestSceneProxy::FNodeDebugData,0>,FDefaultSetAllocator>
::Append<FDefaultSetAllocator>
          (TSet<FNavTestSceneProxy::FNodeDebugData,DefaultKeyFuncs<FNavTestSceneProxy::FNodeDebugData,0>,FDefaultSetAllocator>
           *this,TSet<FNavTestSceneProxy::FNodeDebugData,DefaultKeyFuncs<FNavTestSceneProxy::FNodeDebugData,0>,FDefaultSetAllocator>
                 *param_1)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  int local_res18;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  uVar12 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  uVar6 = 1;
  uVar9 = (uVar12 - *(int *)&(param_1->Elements).field_0x34) +
          *(int *)&(param_1->Elements).field_0x8;
  if (uVar12 < uVar9) {
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar9);
    }
    TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this,uVar9);
    if (uVar9 < 4) {
      iVar5 = 1;
    }
    else {
      uVar1 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_res10 = (undefined4)lVar8;
      iVar5 = 1 << ((byte)lVar8 & 0x1f);
    }
    if ((this->HashSize == 0) || (this->HashSize < iVar5)) {
      this->HashSize = iVar5;
      Rehash(this);
    }
  }
  iVar5 = *(int *)&(param_1->Elements).field_0x28;
  iVar10 = 0;
  puVar2 = &(param_1->Elements).field_0x10;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar5 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar2;
    }
    uVar9 = *puVar14;
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      iVar13 = iVar13 + 0x20;
      iVar10 = iVar10 + 1;
      iVar7 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_146dcbc3d;
      uVar9 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar9 & uVar9;
    uVar1 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    iVar7 = local_res18 + -1 + iVar13;
    if (iVar5 < iVar7) {
      iVar7 = iVar5;
    }
  }
LAB_146dcbc3d:
  uVar9 = *(uint *)&(param_1->Elements).field_0x28;
  uVar12 = uVar9 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar6,iVar10);
  TStack_70.CurrentBitIndex = iVar7;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar9 >> 5;
  TStack_70._28_4_ = iVar7;
  TStack_70.BaseBitIndex = iVar13;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(param_1->Elements).field_0x8 -
                       *(int *)&(param_1->Elements).field_0x34);
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar9 < 0) || (iVar5 < (int)uVar9)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar6 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar9 != uVar6) {
    puVar11 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar2;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar12 = uVar12 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_146dcbd41;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar12;
    if ((int)uVar6 < (int)uVar9) {
      uVar9 = uVar6;
    }
  }
LAB_146dcbd41:
  while( true ) {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_50) {
      `TSparseArray<TSparseSetElement<FNavTestSceneProxy::FNodeDebugData>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_70.CurrentBitIndex == uVar9) &&
       (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    Emplace<FNavTestSceneProxy::FNodeDebugData_const_&>
              (this,(FNodeDebugData *)&stack0x00000020,
               (bool *)((longlong)TStack_70.CurrentBitIndex * 0x40 + *(longlong *)&param_1->Elements
                       ));
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  return;
}

// Emplace<UE::Math::TIntPoint<int>_const_&> @ 146dcd1f0

FSetElementId __thiscall
TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>::
Emplace<UE::Math::TIntPoint<int>_const_&>
          (TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>
           *this,TIntPoint<int> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  uint uVar10;
  char *in_R9;
  uint uVar11;
  bool bVar12;
  FSparseArrayAllocationInfo local_38;
  
  iVar9 = *(int *)&(this->Elements).field_0x34;
  if (iVar9 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x10);
    iVar9 = iVar9 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x10) = 0xffffffff;
    }
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar5);
  if (local_38.Pointer != (TSparseSetElement<UE::Math::TIntPoint<int>_> *)0x0) {
    *(undefined8 *)local_38.Pointer = *(undefined8 *)param_2;
    *(undefined4 *)((longlong)local_38.Pointer + 8) = 0xffffffff;
  }
  uVar3 = *(undefined8 *)local_38.Pointer;
  uVar10 = (uint)((ulonglong)uVar3 >> 0x20);
  uVar7 = (int)uVar3 - uVar10 ^ uVar10 >> 0xd;
  bVar12 = false;
  uVar6 = (-0x61c88647 - uVar7) - uVar10 ^ uVar7 << 8;
  uVar11 = (uVar10 - uVar7) - uVar6 ^ uVar6 >> 0xd;
  uVar7 = (uVar7 - uVar11) - uVar6 ^ uVar11 >> 0xc;
  uVar6 = (uVar6 - uVar7) - uVar11 ^ uVar7 << 0x10;
  uVar11 = (uVar11 - uVar6) - uVar7 ^ uVar6 >> 5;
  uVar7 = (uVar7 - uVar11) - uVar6 ^ uVar11 >> 3;
  uVar6 = (uVar6 - uVar7) - uVar11 ^ uVar7 << 10;
  iVar9 = *(int *)&(this->Elements).field_0x8;
  iVar5 = *(int *)&(this->Elements).field_0x34;
  uVar6 = (uVar11 - uVar6) - uVar7 ^ uVar6 >> 0xf;
  if ((iVar9 - iVar5 != 1) && (iVar9 != iVar5)) {
    FVar8 = (this->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar9 = *(int *)((longlong)FVar8 + (ulonglong)(this->HashSize - 1U & uVar6) * 4);
    if (iVar9 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        uVar4 = *(undefined8 *)(lVar2 + (longlong)iVar9 * 0x10);
        if (((int)uVar4 == (int)uVar3) && ((uint)((ulonglong)uVar4 >> 0x20) == uVar10)) {
          bVar12 = iVar9 != -1;
          if (bVar12) {
            *(undefined8 *)(lVar2 + (longlong)iVar9 * 0x10) = uVar3;
            TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar9;
          }
          break;
        }
        iVar9 = *(int *)(lVar2 + 8 + (longlong)iVar9 * 0x10);
      } while (iVar9 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar12;
  }
  if (bVar12 == false) {
    RehashOrLink(this,uVar6,local_38.Pointer,local_38.Index);
  }
  (param_1->field0_0x0)._s_0.X = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<FNavTileRef_const_&> @ 146dcd420

FSetElementId __thiscall
TSet<FNavTileRef,DefaultKeyFuncs<FNavTileRef,0>,FDefaultSetAllocator>::Emplace<FNavTileRef_const_&>
          (TSet<FNavTileRef,DefaultKeyFuncs<FNavTileRef,0>,FDefaultSetAllocator> *this,
          FNavTileRef *param_1,bool *param_2)

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
  undefined1 *puVar10;
  bool bVar11;
  FSparseArrayAllocationInfo local_48;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  iVar7 = 1;
  if (iVar8 == 0) {
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
    iVar8 = iVar8 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x10) = 0xffffffff;
    }
  }
  puVar10 = &(this->Elements).field_0x8;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar3);
  if (local_48.Pointer != (longlong *)0x0) {
    *(longlong *)local_48.Pointer = *(longlong *)param_2;
    *(undefined4 *)((longlong)local_48.Pointer + 8) = 0xffffffff;
  }
  lVar2 = *(longlong *)local_48.Pointer;
  bVar11 = false;
  iVar8 = *(int *)puVar10;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  uVar9 = (int)((ulonglong)lVar2 >> 0x20) * 0x17 + (int)lVar2;
  if ((iVar8 - iVar3 != 1) && (iVar8 != iVar3)) {
    FVar6 = (this->Hash).SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar8 = *(int *)((longlong)FVar6 + (ulonglong)(this->HashSize - 1U & uVar9) * 4);
    if (iVar8 != -1) {
      do {
        if (*(longlong *)(*(longlong *)&this->Elements + (longlong)iVar8 * 0x10) == lVar2) {
          bVar11 = iVar8 != -1;
          if (bVar11) {
            *(longlong *)(*(longlong *)&this->Elements + (longlong)iVar8 * 0x10) = lVar2;
            TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar8;
          }
          break;
        }
        iVar8 = *(int *)(*(longlong *)&this->Elements + 8 + (longlong)iVar8 * 0x10);
      } while (iVar8 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar11;
  }
  if (bVar11 == false) {
    uVar5 = *(int *)puVar10 - *(int *)&(this->Elements).field_0x34;
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
      *(uint *)((longlong)local_48.Pointer + 0xc) = uVar9;
      FVar6 = (this->Hash).SecondaryData;
      if (FVar6 == (ForElementType<FSetElementId>)0x0) {
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar4 = (longlong)this->HashSize - 1U & (longlong)(int)uVar9;
      *(undefined4 *)((longlong)local_48.Pointer + 8) = *(undefined4 *)((longlong)FVar6 + uVar4 * 4)
      ;
      *(int *)((longlong)FVar6 + uVar4 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar7;
      Rehash(this);
    }
  }
  *(int *)&param_1->TileRef = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<FNavTestSceneProxy::FNodeDebugData_const_&> @ 146dcd620

FSetElementId __thiscall
TSet<FNavTestSceneProxy::FNodeDebugData,DefaultKeyFuncs<FNavTestSceneProxy::FNodeDebugData,0>,FDefaultSetAllocator>
::Emplace<FNavTestSceneProxy::FNodeDebugData_const_&>
          (TSet<FNavTestSceneProxy::FNodeDebugData,DefaultKeyFuncs<FNavTestSceneProxy::FNodeDebugData,0>,FDefaultSetAllocator>
           *this,FNodeDebugData *param_1,bool *param_2)

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
                      (0x40,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x40 + 4 + lVar3);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x40 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar5);
  if (local_38.Pointer != (TSparseSetElement<FNavTestSceneProxy::FNodeDebugData> *)0x0) {
    FNavTestSceneProxy::FNodeDebugData::FNodeDebugData(local_38.Pointer,(FNodeDebugData *)param_2);
    *(undefined4 *)((longlong)local_38.Pointer + 0x38) = 0xffffffff;
  }
  local_res8[0] = local_38.Index;
  uVar9 = (int)((ulonglong)*(undefined8 *)local_38.Pointer >> 0x20) * 0x17 +
          (int)*(undefined8 *)local_38.Pointer;
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
      *(uint *)((longlong)local_38.Pointer + 0x3c) = uVar9;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar9;
      *(undefined4 *)((longlong)local_38.Pointer + 0x38) =
           *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
      *(int *)((longlong)FVar8 + uVar6 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  *(int *)&param_1->PolyRef = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// Emplace<FRecastDebugPathfindingNode_const_&> @ 146dcd7c0

FSetElementId __thiscall
TSet<FRecastDebugPathfindingNode,DefaultKeyFuncs<FRecastDebugPathfindingNode,0>,FDefaultSetAllocator>
::Emplace<FRecastDebugPathfindingNode_const_&>
          (TSet<FRecastDebugPathfindingNode,DefaultKeyFuncs<FRecastDebugPathfindingNode,0>,FDefaultSetAllocator>
           *this,FRecastDebugPathfindingNode *param_1,bool *param_2)

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
                      (0xa8,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0xa8 + 4 + lVar3);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0xa8 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<168,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<168,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar5);
  if (local_38.Pointer != (TSparseSetElement<FRecastDebugPathfindingNode> *)0x0) {
    FRecastDebugPathfindingNode::FRecastDebugPathfindingNode
              (local_38.Pointer,(FRecastDebugPathfindingNode *)param_2);
    *(undefined4 *)((longlong)local_38.Pointer + 0xa0) = 0xffffffff;
  }
  local_res8[0] = local_38.Index;
  uVar9 = (int)((ulonglong)*(undefined8 *)local_38.Pointer >> 0x20) * 0x17 +
          (int)*(undefined8 *)local_38.Pointer;
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
      *(uint *)((longlong)local_38.Pointer + 0xa4) = uVar9;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar9;
      *(undefined4 *)((longlong)local_38.Pointer + 0xa0) =
           *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
      *(int *)((longlong)FVar8 + uVar6 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  *(int *)&param_1->PolyRef = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// Emplace<UE::Math::TIntPoint<int>_> @ 146dcd970

FSetElementId __thiscall
TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>::
Emplace<UE::Math::TIntPoint<int>_>
          (TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>
           *this,TIntPoint<int> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  uint uVar10;
  char *in_R9;
  uint uVar11;
  bool bVar12;
  FSparseArrayAllocationInfo local_38;
  
  iVar9 = *(int *)&(this->Elements).field_0x34;
  if (iVar9 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x10);
    iVar9 = iVar9 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x10) = 0xffffffff;
    }
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar5);
  if (local_38.Pointer != (TSparseSetElement<UE::Math::TIntPoint<int>_> *)0x0) {
    *(undefined8 *)local_38.Pointer = *(undefined8 *)param_2;
    *(undefined4 *)((longlong)local_38.Pointer + 8) = 0xffffffff;
  }
  uVar3 = *(undefined8 *)local_38.Pointer;
  uVar10 = (uint)((ulonglong)uVar3 >> 0x20);
  uVar7 = (int)uVar3 - uVar10 ^ uVar10 >> 0xd;
  bVar12 = false;
  uVar6 = (-0x61c88647 - uVar7) - uVar10 ^ uVar7 << 8;
  uVar11 = (uVar10 - uVar7) - uVar6 ^ uVar6 >> 0xd;
  uVar7 = (uVar7 - uVar11) - uVar6 ^ uVar11 >> 0xc;
  uVar6 = (uVar6 - uVar7) - uVar11 ^ uVar7 << 0x10;
  uVar11 = (uVar11 - uVar6) - uVar7 ^ uVar6 >> 5;
  uVar7 = (uVar7 - uVar11) - uVar6 ^ uVar11 >> 3;
  uVar6 = (uVar6 - uVar7) - uVar11 ^ uVar7 << 10;
  iVar9 = *(int *)&(this->Elements).field_0x8;
  iVar5 = *(int *)&(this->Elements).field_0x34;
  uVar6 = (uVar11 - uVar6) - uVar7 ^ uVar6 >> 0xf;
  if ((iVar9 - iVar5 != 1) && (iVar9 != iVar5)) {
    FVar8 = (this->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar9 = *(int *)((longlong)FVar8 + (ulonglong)(this->HashSize - 1U & uVar6) * 4);
    if (iVar9 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        uVar4 = *(undefined8 *)(lVar2 + (longlong)iVar9 * 0x10);
        if (((int)uVar4 == (int)uVar3) && ((uint)((ulonglong)uVar4 >> 0x20) == uVar10)) {
          bVar12 = iVar9 != -1;
          if (bVar12) {
            *(undefined8 *)(lVar2 + (longlong)iVar9 * 0x10) = uVar3;
            TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar9;
          }
          break;
        }
        iVar9 = *(int *)(lVar2 + 8 + (longlong)iVar9 * 0x10);
      } while (iVar9 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar12;
  }
  if (bVar12 == false) {
    RehashOrLink(this,uVar6,local_38.Pointer,local_38.Index);
  }
  (param_1->field0_0x0)._s_0.X = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<FNavMeshRenderingHelpers::FUniqueColor> @ 146dcdba0

FSetElementId __thiscall
TSet<FNavMeshRenderingHelpers::FUniqueColor,DefaultKeyFuncs<FNavMeshRenderingHelpers::FUniqueColor,0>,FDefaultSetAllocator>
::Emplace<FNavMeshRenderingHelpers::FUniqueColor>
          (TSet<FNavMeshRenderingHelpers::FUniqueColor,DefaultKeyFuncs<FNavMeshRenderingHelpers::FUniqueColor,0>,FDefaultSetAllocator>
           *this,FUniqueColor *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  FColor_u_0 FVar9;
  uint uVar10;
  char *in_R9;
  bool bVar11;
  FColor_u_0 local_38 [2];
  uint *local_30;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar8 = 1;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar4 * 0x10);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x10) = 0xffffffff;
    }
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,(FSparseArrayAllocationInfo *)&local_38[0]._s_0,iVar4);
  if (local_30 != (uint *)0x0) {
    *(undefined8 *)local_30 = *(undefined8 *)param_2;
    local_30[2] = 0xffffffff;
  }
  iVar1 = *(int *)&(this->Elements).field_0x8;
  bVar11 = false;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar10 = *local_30;
  if ((iVar1 - iVar4 != 1) && (iVar1 != iVar4)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    FVar9 = (FColor_u_0)
            ((FColor_u_0 *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar10) * 4))->Bits;
    if (FVar9.Bits != 0xffffffff) {
      lVar3 = *(longlong *)&this->Elements;
      do {
        if (*(uint *)(lVar3 + (longlong)(int)FVar9.Bits * 0x10) == uVar10) {
          bVar11 = FVar9.Bits != 0xffffffff;
          if (bVar11) {
            *(undefined8 *)(lVar3 + (longlong)(int)FVar9.Bits * 0x10) = *(undefined8 *)local_30;
            TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38[0].Bits,1);
            local_38[0] = FVar9;
          }
          break;
        }
        FVar9 = (FColor_u_0)((FColor_u_0 *)(lVar3 + 8 + (longlong)(int)FVar9.Bits * 0x10))->Bits;
      } while (FVar9.Bits != 0xffffffff);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar11;
  }
  if (bVar11 == false) {
    uVar6 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar6) {
      uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= this->HashSize)) {
      uVar10 = this->HashSize - 1U & uVar10;
      local_30[3] = uVar10;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar10;
      local_30[2] = *(uint *)((longlong)FVar7 + uVar5 * 4);
      ((FColor_u_0 *)((longlong)FVar7 + uVar5 * 4))->Bits = (uint)local_38[0];
    }
    else {
      this->HashSize = iVar8;
      Rehash(this);
    }
  }
  (param_1->Color).field0_0x0.Bits = (uint)local_38[0];
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<UE::Math::TIntPoint<int>_&&,FNavMeshDirtyTileElement_&&>_> @ 146dcdd90

FSetElementId __thiscall
TSet<TTuple<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<UE::Math::TIntPoint<int>_&&,FNavMeshDirtyTileElement_&&>_>
          (TSet<TTuple<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement,0>,FDefaultSetAllocator>
           *this,TPairInitializer<UE::Math::TIntPoint<int>_&&,FNavMeshDirtyTileElement_&&> *param_1,
          bool *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  char *in_R9;
  uint uVar13;
  undefined1 *puVar14;
  bool bVar15;
  FSparseArrayAllocationInfo local_48;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar10 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar10 = iVar10 + -1;
    lVar1 = *(longlong *)&this->Elements;
    iVar12 = *(int *)(lVar1 + 4 + (longlong)iVar4 * 0x28);
    *(int *)&(this->Elements).field_0x30 = iVar12;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(lVar1 + (longlong)iVar12 * 0x28) = 0xffffffff;
    }
  }
  puVar14 = &(this->Elements).field_0x8;
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 8);
    *(undefined8 *)local_48.Pointer = **(undefined8 **)param_2;
    uVar3 = puVar2[1];
    *(undefined8 *)((longlong)local_48.Pointer + 8) = *puVar2;
    *(undefined8 *)((longlong)local_48.Pointer + 0x10) = uVar3;
    *(undefined8 *)((longlong)local_48.Pointer + 0x18) = puVar2[2];
    *(undefined4 *)((longlong)local_48.Pointer + 0x20) = 0xffffffff;
  }
  iVar12 = (int)*(undefined8 *)local_48.Pointer;
  uVar11 = (uint)((ulonglong)*(undefined8 *)local_48.Pointer >> 0x20);
  uVar7 = iVar12 - uVar11 ^ uVar11 >> 0xd;
  bVar15 = false;
  uVar5 = (-0x61c88647 - uVar7) - uVar11 ^ uVar7 << 8;
  uVar13 = (uVar11 - uVar5) - uVar7 ^ uVar5 >> 0xd;
  uVar7 = (uVar7 - uVar13) - uVar5 ^ uVar13 >> 0xc;
  uVar5 = (uVar5 - uVar7) - uVar13 ^ uVar7 << 0x10;
  uVar13 = (uVar13 - uVar5) - uVar7 ^ uVar5 >> 5;
  uVar7 = (uVar7 - uVar13) - uVar5 ^ uVar13 >> 3;
  uVar5 = (uVar5 - uVar7) - uVar13 ^ uVar7 << 10;
  iVar10 = *(int *)puVar14;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar5 = (uVar13 - uVar5) - uVar7 ^ uVar5 >> 0xf;
  if ((iVar10 - iVar4 != 1) && (iVar10 != iVar4)) {
    FVar8 = (this->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar10 = *(int *)((longlong)FVar8 + (ulonglong)(this->HashSize - 1U & uVar5) * 4);
    if (iVar10 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        uVar3 = *(undefined8 *)(lVar1 + (longlong)iVar10 * 0x28);
        if (((int)uVar3 == iVar12) && ((uint)((ulonglong)uVar3 >> 0x20) == uVar11)) {
          bVar15 = iVar10 != -1;
          if (bVar15) {
            memmove((void *)(lVar1 + (longlong)iVar10 * 0x28),local_48.Pointer,0x20);
            TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar10;
          }
          break;
        }
        iVar10 = *(int *)(lVar1 + 0x20 + (longlong)iVar10 * 0x28);
      } while (iVar10 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar15;
  }
  if (bVar15 == false) {
    uVar7 = *(int *)puVar14 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar1 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= this->HashSize)) {
      uVar5 = this->HashSize - 1U & uVar5;
      *(uint *)((longlong)local_48.Pointer + 0x24) = uVar5;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)((longlong)local_48.Pointer + 0x20) =
           *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
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

// Emplace<TPairInitializer<UE::Math::TIntPoint<int>_&&,FRecastInternalDebugData_const_&>_> @ 146dce050

FSetElementId __thiscall
TSet<TTuple<UE::Math::TIntPoint<int>,FRecastInternalDebugData>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FRecastInternalDebugData,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<UE::Math::TIntPoint<int>_&&,FRecastInternalDebugData_const_&>_>
          (TSet<TTuple<UE::Math::TIntPoint<int>,FRecastInternalDebugData>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FRecastInternalDebugData,0>,FDefaultSetAllocator>
           *this,TPairInitializer<UE::Math::TIntPoint<int>_&&,FRecastInternalDebugData_const_&>
                 *param_1,bool *param_2)

{
  longlong lVar1;
  FRecastInternalDebugData *pFVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  int iVar10;
  void *_Dst;
  uint uVar11;
  int iVar12;
  char *in_R9;
  uint uVar13;
  bool bVar14;
  FSparseArrayAllocationInfo local_48;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar10 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xd8,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar10 = iVar10 + -1;
    lVar1 = *(longlong *)&this->Elements;
    iVar12 = *(int *)((longlong)iVar4 * 0xd8 + 4 + lVar1);
    *(int *)&(this->Elements).field_0x30 = iVar12;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)((longlong)iVar12 * 0xd8 + lVar1) = 0xffffffff;
    }
  }
  TSparseArrayBase<216,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<216,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer != (undefined8 *)0x0) {
    pFVar2 = *(FRecastInternalDebugData **)(param_2 + 8);
    *(undefined8 *)local_48.Pointer = **(undefined8 **)param_2;
    FRecastInternalDebugData::FRecastInternalDebugData
              ((FRecastInternalDebugData *)((longlong)local_48.Pointer + 8),pFVar2);
    *(undefined4 *)((longlong)local_48.Pointer + 0xd0) = 0xffffffff;
  }
  iVar12 = (int)*(undefined8 *)local_48.Pointer;
  uVar11 = (uint)((ulonglong)*(undefined8 *)local_48.Pointer >> 0x20);
  uVar7 = iVar12 - uVar11 ^ uVar11 >> 0xd;
  bVar14 = false;
  uVar5 = (-0x61c88647 - uVar7) - uVar11 ^ uVar7 << 8;
  uVar13 = (uVar11 - uVar5) - uVar7 ^ uVar5 >> 0xd;
  uVar7 = (uVar7 - uVar13) - uVar5 ^ uVar13 >> 0xc;
  uVar5 = (uVar5 - uVar7) - uVar13 ^ uVar7 << 0x10;
  uVar13 = (uVar13 - uVar5) - uVar7 ^ uVar5 >> 5;
  uVar7 = (uVar7 - uVar13) - uVar5 ^ uVar13 >> 3;
  uVar5 = (uVar5 - uVar7) - uVar13 ^ uVar7 << 10;
  iVar10 = *(int *)&(this->Elements).field_0x8;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar5 = (uVar13 - uVar5) - uVar7 ^ uVar5 >> 0xf;
  if ((iVar10 - iVar4 != 1) && (iVar10 != iVar4)) {
    FVar8 = (this->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar10 = *(int *)((longlong)FVar8 + (ulonglong)(this->HashSize - 1U & uVar5) * 4);
    if (iVar10 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        uVar3 = *(undefined8 *)((longlong)iVar10 * 0xd8 + lVar1);
        if (((int)uVar3 == iVar12) && ((uint)((ulonglong)uVar3 >> 0x20) == uVar11)) {
          bVar14 = iVar10 != -1;
          if (bVar14) {
            _Dst = (void *)((longlong)iVar10 * 0xd8 + lVar1);
            FRecastInternalDebugData::~FRecastInternalDebugData
                      ((FRecastInternalDebugData *)((longlong)_Dst + 8));
            memmove(_Dst,local_48.Pointer,0xd0);
            TSparseArrayBase<216,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<216,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar10;
          }
          break;
        }
        iVar10 = *(int *)((longlong)iVar10 * 0xd8 + 0xd0 + lVar1);
      } while (iVar10 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar14;
  }
  if (bVar14 == false) {
    uVar7 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar1 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= this->HashSize)) {
      uVar5 = this->HashSize - 1U & uVar5;
      *(uint *)((longlong)local_48.Pointer + 0xd4) = uVar5;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)((longlong)local_48.Pointer + 0xd0) =
           *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
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

// Emplace<TPairInitializer<UE::Math::TIntPoint<int>_&&,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_const_&>_> @ 146dce320

FSetElementId __thiscall
TSet<TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<UE::Math::TIntPoint<int>_&&,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_const_&>_>
          (TSet<TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<UE::Math::TIntPoint<int>_&&,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_const_&>
                 *param_1,bool *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  char *in_R9;
  uint uVar12;
  void *_Dst;
  bool bVar13;
  FSparseArrayAllocationInfo local_48;
  
  iVar9 = *(int *)&(this->Elements).field_0x34;
  iVar8 = 1;
  if (iVar9 == 0) {
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
    iVar9 = iVar9 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar11;
    *(int *)&(this->Elements).field_0x34 = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)((longlong)iVar11 * 0x20 + lVar1) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar3);
  if (local_48.Pointer !=
      (TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_> *)0x0)
  {
    TPairInitializer<UE::Math::TIntPoint<int>_&&,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_const_&>
    ::
    operator<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>_TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>
              ((TPairInitializer<UE::Math::TIntPoint<int>_&&,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_const_&>
                *)param_2,local_48.Pointer);
    *(undefined4 *)((longlong)local_48.Pointer + 0x18) = 0xffffffff;
  }
  iVar11 = (int)*(undefined8 *)local_48.Pointer;
  uVar10 = (uint)((ulonglong)*(undefined8 *)local_48.Pointer >> 0x20);
  uVar6 = iVar11 - uVar10 ^ uVar10 >> 0xd;
  bVar13 = false;
  uVar4 = (-0x61c88647 - uVar6) - uVar10 ^ uVar6 << 8;
  uVar12 = (uVar10 - uVar4) - uVar6 ^ uVar4 >> 0xd;
  uVar6 = (uVar6 - uVar12) - uVar4 ^ uVar12 >> 0xc;
  uVar4 = (uVar4 - uVar6) - uVar12 ^ uVar6 << 0x10;
  uVar12 = (uVar12 - uVar4) - uVar6 ^ uVar4 >> 5;
  uVar6 = (uVar6 - uVar12) - uVar4 ^ uVar12 >> 3;
  uVar4 = (uVar4 - uVar6) - uVar12 ^ uVar6 << 10;
  iVar9 = *(int *)&(this->Elements).field_0x8;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  uVar4 = (uVar12 - uVar4) - uVar6 ^ uVar4 >> 0xf;
  if ((iVar9 - iVar3 != 1) && (iVar9 != iVar3)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar9 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar4) * 4);
    if (iVar9 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        uVar2 = *(undefined8 *)((longlong)iVar9 * 0x20 + lVar1);
        if (((int)uVar2 == iVar11) && ((uint)((ulonglong)uVar2 >> 0x20) == uVar10)) {
          bVar13 = iVar9 != -1;
          if (bVar13) {
            _Dst = (void *)((longlong)iVar9 * 0x20 + lVar1);
            DestructItems<FNavMeshTileData,int>
                      (*(FNavMeshTileData **)((longlong)_Dst + 8),*(int *)((longlong)_Dst + 0x10));
            if (*(void **)((longlong)_Dst + 8) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 8));
            }
            memmove(_Dst,local_48.Pointer,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar9;
          }
          break;
        }
        iVar9 = *(int *)((longlong)iVar9 * 0x20 + 0x18 + lVar1);
      } while (iVar9 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar13;
  }
  if (bVar13 == false) {
    uVar6 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar6) {
      uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar1 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= this->HashSize)) {
      uVar4 = this->HashSize - 1U & uVar4;
      *(uint *)&((TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>
                  *)((longlong)local_48.Pointer + 0x18))->field_0x4 = uVar4;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar4;
      *(undefined4 *)((longlong)local_48.Pointer + 0x18) =
           *(undefined4 *)((longlong)FVar7 + uVar5 * 4);
      *(int *)((longlong)FVar7 + uVar5 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar8;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<UE::Math::TIntPoint<int>_const_&,UE::Math::TVector<double>_const_&>_> @ 146dce5f0

FSetElementId __thiscall
TSet<TTuple<UE::Math::TIntPoint<int>,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<UE::Math::TIntPoint<int>_const_&,UE::Math::TVector<double>_const_&>_>
          (TSet<TTuple<UE::Math::TIntPoint<int>,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<UE::Math::TIntPoint<int>_const_&,UE::Math::TVector<double>_const_&>
                 *param_1,bool *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  char *in_R9;
  uint uVar13;
  undefined1 *puVar14;
  bool bVar15;
  FSparseArrayAllocationInfo local_48;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar10 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar10 = iVar10 + -1;
    lVar1 = *(longlong *)&this->Elements;
    iVar12 = *(int *)(lVar1 + 4 + (longlong)iVar4 * 0x28);
    *(int *)&(this->Elements).field_0x30 = iVar12;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(lVar1 + (longlong)iVar12 * 0x28) = 0xffffffff;
    }
  }
  puVar14 = &(this->Elements).field_0x8;
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 8);
    *(undefined8 *)local_48.Pointer = **(undefined8 **)param_2;
    uVar3 = puVar2[1];
    *(undefined8 *)((longlong)local_48.Pointer + 8) = *puVar2;
    *(undefined8 *)((longlong)local_48.Pointer + 0x10) = uVar3;
    *(undefined8 *)((longlong)local_48.Pointer + 0x18) = puVar2[2];
    *(undefined4 *)((longlong)local_48.Pointer + 0x20) = 0xffffffff;
  }
  iVar12 = (int)*(undefined8 *)local_48.Pointer;
  uVar11 = (uint)((ulonglong)*(undefined8 *)local_48.Pointer >> 0x20);
  uVar7 = iVar12 - uVar11 ^ uVar11 >> 0xd;
  bVar15 = false;
  uVar5 = (-0x61c88647 - uVar7) - uVar11 ^ uVar7 << 8;
  uVar13 = (uVar11 - uVar5) - uVar7 ^ uVar5 >> 0xd;
  uVar7 = (uVar7 - uVar13) - uVar5 ^ uVar13 >> 0xc;
  uVar5 = (uVar5 - uVar7) - uVar13 ^ uVar7 << 0x10;
  uVar13 = (uVar13 - uVar5) - uVar7 ^ uVar5 >> 5;
  uVar7 = (uVar7 - uVar13) - uVar5 ^ uVar13 >> 3;
  uVar5 = (uVar5 - uVar7) - uVar13 ^ uVar7 << 10;
  iVar10 = *(int *)puVar14;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar5 = (uVar13 - uVar5) - uVar7 ^ uVar5 >> 0xf;
  if ((iVar10 - iVar4 != 1) && (iVar10 != iVar4)) {
    FVar8 = (this->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar10 = *(int *)((longlong)FVar8 + (ulonglong)(this->HashSize - 1U & uVar5) * 4);
    if (iVar10 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        uVar3 = *(undefined8 *)(lVar1 + (longlong)iVar10 * 0x28);
        if (((int)uVar3 == iVar12) && ((uint)((ulonglong)uVar3 >> 0x20) == uVar11)) {
          bVar15 = iVar10 != -1;
          if (bVar15) {
            memmove((void *)(lVar1 + (longlong)iVar10 * 0x28),local_48.Pointer,0x20);
            TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar10;
          }
          break;
        }
        iVar10 = *(int *)(lVar1 + 0x20 + (longlong)iVar10 * 0x28);
      } while (iVar10 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar15;
  }
  if (bVar15 == false) {
    uVar7 = *(int *)puVar14 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar1 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= this->HashSize)) {
      uVar5 = this->HashSize - 1U & uVar5;
      *(uint *)((longlong)local_48.Pointer + 0x24) = uVar5;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)((longlong)local_48.Pointer + 0x20) =
           *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
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

// FindIndexByHash<UE::Math::TIntPoint<int>_> @ 146dce9a0

int __thiscall
TSet<TTuple<UE::Math::TIntPoint<int>,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
::FindIndexByHash<UE::Math::TIntPoint<int>_>
          (TSet<TTuple<UE::Math::TIntPoint<int>,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
           *this,uint param_1,TIntPoint<int> *param_2)

{
  undefined8 uVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar3 = (this->Hash).SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        uVar1 = *(undefined8 *)(*(longlong *)&this->Elements + (longlong)iVar2 * 0x28);
        if (((int)uVar1 == (param_2->field0_0x0)._s_0.X) &&
           ((int)((ulonglong)uVar1 >> 0x20) == (param_2->field0_0x0)._s_0.Y)) {
          return iVar2;
        }
        iVar2 = *(int *)(*(longlong *)&this->Elements + (longlong)iVar2 * 0x28 + 0x20);
      } while (iVar2 != -1);
    }
  }
  return -1;
}

// FindOrAddByHash<UE::Math::TIntPoint<int>_const_&> @ 146dcedb0

TIntPoint<int> * __thiscall
TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>::
FindOrAddByHash<UE::Math::TIntPoint<int>_const_&>
          (TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>
           *this,uint param_1,TIntPoint<int> *param_2,bool *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  int iVar6;
  FSparseArrayAllocationInfo local_18;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar5 = (this->Hash).SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar6 = *(int *)((longlong)FVar5 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar6 != -1) {
      do {
        uVar2 = *(undefined8 *)(*(longlong *)&this->Elements + (longlong)iVar6 * 0x10);
        if (((int)uVar2 == (param_2->field0_0x0)._s_0.X) &&
           ((int)((ulonglong)uVar2 >> 0x20) == (param_2->field0_0x0)._s_0.Y)) goto LAB_146dcee3f;
        iVar6 = *(int *)(*(longlong *)&this->Elements + 8 + (longlong)iVar6 * 0x10);
      } while (iVar6 != -1);
    }
  }
  iVar6 = -1;
LAB_146dcee3f:
  if (param_3 != (bool *)0x0) {
    *param_3 = iVar6 != -1;
  }
  if (iVar6 == -1) {
    iVar6 = *(int *)&(this->Elements).field_0x34;
    if (iVar6 == 0) {
      iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                         (int *)&(this->Elements).field_0xc);
      TBitArray<FDefaultBitArrayAllocator>::Add
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
    }
    else {
      iVar4 = *(int *)&(this->Elements).field_0x30;
      lVar3 = *(longlong *)&this->Elements;
      iVar1 = *(int *)(lVar3 + 4 + (longlong)iVar4 * 0x10);
      iVar6 = iVar6 + -1;
      *(int *)&(this->Elements).field_0x30 = iVar1;
      *(int *)&(this->Elements).field_0x34 = iVar6;
      if (iVar6 != 0) {
        *(undefined4 *)(lVar3 + (longlong)iVar1 * 0x10) = 0xffffffff;
      }
    }
    TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this,&local_18,iVar4);
    if (local_18.Pointer != (TIntPoint<int>_u_0 *)0x0) {
      *(TIntPoint<int>_u_0 *)local_18.Pointer = (TIntPoint<int>_u_0_s_0)param_2->field0_0x0;
      (((TIntPoint<int>_u_0 *)((longlong)local_18.Pointer + 8))->_s_0).X = -1;
    }
    RehashOrLink(this,param_1,local_18.Pointer,local_18.Index);
  }
  else {
    local_18.Pointer = (void *)((longlong)iVar6 * 0x10 + *(longlong *)&this->Elements);
  }
  return local_18.Pointer;
}

// FindOrAddByHash<UE::Math::TIntPoint<int>_> @ 146dcef30

TIntPoint<int> * __thiscall
TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>::
FindOrAddByHash<UE::Math::TIntPoint<int>_>
          (TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>
           *this,uint param_1,TIntPoint<int> *param_2,bool *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  int iVar6;
  FSparseArrayAllocationInfo local_18;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar5 = (this->Hash).SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar6 = *(int *)((longlong)FVar5 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar6 != -1) {
      do {
        uVar2 = *(undefined8 *)(*(longlong *)&this->Elements + (longlong)iVar6 * 0x10);
        if (((int)uVar2 == (param_2->field0_0x0)._s_0.X) &&
           ((int)((ulonglong)uVar2 >> 0x20) == (param_2->field0_0x0)._s_0.Y)) goto LAB_146dcefbf;
        iVar6 = *(int *)(*(longlong *)&this->Elements + 8 + (longlong)iVar6 * 0x10);
      } while (iVar6 != -1);
    }
  }
  iVar6 = -1;
LAB_146dcefbf:
  if (param_3 != (bool *)0x0) {
    *param_3 = iVar6 != -1;
  }
  if (iVar6 == -1) {
    iVar6 = *(int *)&(this->Elements).field_0x34;
    if (iVar6 == 0) {
      iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                         (int *)&(this->Elements).field_0xc);
      TBitArray<FDefaultBitArrayAllocator>::Add
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
    }
    else {
      iVar4 = *(int *)&(this->Elements).field_0x30;
      lVar3 = *(longlong *)&this->Elements;
      iVar1 = *(int *)(lVar3 + 4 + (longlong)iVar4 * 0x10);
      iVar6 = iVar6 + -1;
      *(int *)&(this->Elements).field_0x30 = iVar1;
      *(int *)&(this->Elements).field_0x34 = iVar6;
      if (iVar6 != 0) {
        *(undefined4 *)(lVar3 + (longlong)iVar1 * 0x10) = 0xffffffff;
      }
    }
    TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this,&local_18,iVar4);
    if (local_18.Pointer != (TIntPoint<int>_u_0 *)0x0) {
      *(TIntPoint<int>_u_0 *)local_18.Pointer = (TIntPoint<int>_u_0_s_0)param_2->field0_0x0;
      (((TIntPoint<int>_u_0 *)((longlong)local_18.Pointer + 8))->_s_0).X = -1;
    }
    RehashOrLink(this,param_1,local_18.Pointer,local_18.Index);
  }
  else {
    local_18.Pointer = (void *)((longlong)iVar6 * 0x10 + *(longlong *)&this->Elements);
  }
  return local_18.Pointer;
}

// RemoveImpl<UE::Math::TIntPoint<int>_> @ 146dd1d70

int __thiscall
TSet<TTuple<UE::Math::TIntPoint<int>,FRecastInternalDebugData>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FRecastInternalDebugData,0>,FDefaultSetAllocator>
::RemoveImpl<UE::Math::TIntPoint<int>_>
          (TSet<TTuple<UE::Math::TIntPoint<int>,FRecastInternalDebugData>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FRecastInternalDebugData,0>,FDefaultSetAllocator>
           *this,uint param_1,TIntPoint<int> *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  uint *puVar8;
  longlong lVar9;
  undefined1 *puVar10;
  
  FVar6 = (this->Hash).SecondaryData;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar7 = *(uint *)((longlong)FVar6 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar7 == 0xffffffff) {
    return 0;
  }
  while( true ) {
    lVar9 = (longlong)(int)uVar7 * 0xd8;
    uVar2 = *(undefined8 *)(lVar9 + *(longlong *)&this->Elements);
    if (((int)uVar2 == (param_2->field0_0x0)._s_0.X) &&
       ((int)((ulonglong)uVar2 >> 0x20) == (param_2->field0_0x0)._s_0.Y)) break;
    uVar7 = *(uint *)(lVar9 + 0xd0 + *(longlong *)&this->Elements);
    if (uVar7 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)&(this->Elements).field_0x28)) {
    puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar10 + (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar7 & 0x1f) & 1) != 0) goto LAB_146dd1e66;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
LAB_146dd1e66:
  FVar6 = (this->Hash).SecondaryData;
  lVar9 = *(longlong *)&this->Elements + lVar9;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar8 = (uint *)((longlong)FVar6 + (longlong)*(int *)(lVar9 + 0xd4) * 4);
  while( true ) {
    uVar1 = *puVar8;
    if ((uVar1 == 0xffffffff) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar4)) break;
    if (uVar1 == uVar7) {
      *puVar8 = *(uint *)(lVar9 + 0xd0);
      TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,FRecastInternalDebugData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar7,1);
      TSparseArrayBase<216,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<216,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar7,1);
      return 1;
    }
    puVar8 = (uint *)(*(longlong *)&this->Elements + 0xd0 + (longlong)(int)uVar1 * 0xd8);
  }
  pcVar3 = (code *)swi(3);
  iVar5 = (*pcVar3)();
  return iVar5;
}

// RemoveImpl<UE::Math::TIntPoint<int>_> @ 146dd1f20

int __thiscall
TSet<TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::RemoveImpl<UE::Math::TIntPoint<int>_>
          (TSet<TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,TIntPoint<int> *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  uint *puVar8;
  longlong lVar9;
  undefined1 *puVar10;
  
  FVar6 = (this->Hash).SecondaryData;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar7 = *(uint *)((longlong)FVar6 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar7 == 0xffffffff) {
    return 0;
  }
  while( true ) {
    lVar9 = (longlong)(int)uVar7 * 0x20;
    uVar2 = *(undefined8 *)(lVar9 + *(longlong *)&this->Elements);
    if (((int)uVar2 == (param_2->field0_0x0)._s_0.X) &&
       ((int)((ulonglong)uVar2 >> 0x20) == (param_2->field0_0x0)._s_0.Y)) break;
    uVar7 = *(uint *)(lVar9 + *(longlong *)&this->Elements + 0x18);
    if (uVar7 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)&(this->Elements).field_0x28)) {
    puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar10 + (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar7 & 0x1f) & 1) != 0) goto LAB_146dd2013;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
LAB_146dd2013:
  FVar6 = (this->Hash).SecondaryData;
  lVar9 = *(longlong *)&this->Elements + lVar9;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar8 = (uint *)((longlong)FVar6 + (longlong)*(int *)(lVar9 + 0x1c) * 4);
  while( true ) {
    uVar1 = *puVar8;
    if ((uVar1 == 0xffffffff) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar4)) break;
    if (uVar1 == uVar7) {
      *puVar8 = *(uint *)(lVar9 + 0x18);
      TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar7,1);
      TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar7,1);
      return 1;
    }
    puVar8 = (uint *)(*(longlong *)&this->Elements + 0x18 + (longlong)(int)uVar1 * 0x20);
  }
  pcVar3 = (code *)swi(3);
  iVar5 = (*pcVar3)();
  return iVar5;
}

// Array @ 146ddfd00

TArray<FNavTileRef,TSizedDefaultAllocator<32>_> * __thiscall
TSet<FNavTileRef,DefaultKeyFuncs<FNavTileRef,0>,FDefaultSetAllocator>::Array
          (TSet<FNavTileRef,DefaultKeyFuncs<FNavTileRef,0>,FDefaultSetAllocator> *this,
          TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *pTVar8;
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_146ddfdd5;
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
LAB_146ddfdd5:
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
        pTVar8 = (TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
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

// Find @ 146df3570

TTuple<UE::Math::TIntPoint<int>,FRecastInternalDebugData> * __thiscall
TSet<TTuple<UE::Math::TIntPoint<int>,FRecastInternalDebugData>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FRecastInternalDebugData,0>,FDefaultSetAllocator>
::Find(TSet<TTuple<UE::Math::TIntPoint<int>,FRecastInternalDebugData>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FRecastInternalDebugData,0>,FDefaultSetAllocator>
       *this,TIntPoint<int> param_1)

{
  TTuple<UE::Math::TIntPoint<int>,FRecastInternalDebugData> *pTVar1;
  uint uVar2;
  uint uVar3;
  ForElementType<FSetElementId> FVar4;
  TTuple<UE::Math::TIntPoint<int>,FRecastInternalDebugData> *pTVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  uVar8 = param_1.field0_0x0._4_4_;
  uVar6 = param_1.field0_0x0._0_4_ - uVar8 ^ uVar8 >> 0xd;
  uVar3 = (-0x61c88647 - uVar6) - uVar8 ^ uVar6 << 8;
  uVar2 = (uVar8 - uVar6) - uVar3 ^ uVar3 >> 0xd;
  uVar6 = (uVar6 - uVar2) - uVar3 ^ uVar2 >> 0xc;
  uVar3 = (uVar3 - uVar6) - uVar2 ^ uVar6 << 0x10;
  uVar2 = (uVar2 - uVar3) - uVar6 ^ uVar3 >> 5;
  uVar6 = (uVar6 - uVar2) - uVar3 ^ uVar2 >> 3;
  uVar3 = (uVar3 - uVar6) - uVar2 ^ uVar6 << 10;
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar4 = (this->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar7 = *(int *)((longlong)FVar4 +
                    (ulonglong)(this->HashSize - 1U & ((uVar2 - uVar3) - uVar6 ^ uVar3 >> 0xf)) * 4)
    ;
    if (iVar7 != -1) {
      do {
        pTVar5 = (TTuple<UE::Math::TIntPoint<int>,FRecastInternalDebugData> *)
                 ((longlong)iVar7 * 0xd8 + *(longlong *)&this->Elements);
        if (((int)*(undefined8 *)pTVar5 == param_1.field0_0x0._0_4_) &&
           ((uint)((ulonglong)*(undefined8 *)pTVar5 >> 0x20) == uVar8)) {
          pTVar1 = (TTuple<UE::Math::TIntPoint<int>,FRecastInternalDebugData> *)0x0;
          if (iVar7 != -1) {
            pTVar1 = pTVar5;
          }
          return pTVar1;
        }
        iVar7 = *(int *)(pTVar5 + 1);
      } while (iVar7 != -1);
    }
  }
  return (TTuple<UE::Math::TIntPoint<int>,FRecastInternalDebugData> *)0x0;
}

// Find @ 146df3690

TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_> * __thiscall
TSet<TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Find(TSet<TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
       *this,TIntPoint<int> param_1)

{
  TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_> *pTVar1;
  TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_> *pTVar2;
  uint uVar3;
  uint uVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  uVar8 = param_1.field0_0x0._4_4_;
  uVar6 = param_1.field0_0x0._0_4_ - uVar8 ^ uVar8 >> 0xd;
  uVar4 = (-0x61c88647 - uVar6) - uVar8 ^ uVar6 << 8;
  uVar3 = (uVar8 - uVar6) - uVar4 ^ uVar4 >> 0xd;
  uVar6 = (uVar6 - uVar3) - uVar4 ^ uVar3 >> 0xc;
  uVar4 = (uVar4 - uVar6) - uVar3 ^ uVar6 << 0x10;
  uVar3 = (uVar3 - uVar4) - uVar6 ^ uVar4 >> 5;
  uVar6 = (uVar6 - uVar3) - uVar4 ^ uVar3 >> 3;
  uVar4 = (uVar4 - uVar6) - uVar3 ^ uVar6 << 10;
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar5 = (this->Hash).SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar7 = *(int *)((longlong)FVar5 +
                    (ulonglong)(this->HashSize - 1U & ((uVar3 - uVar4) - uVar6 ^ uVar4 >> 0xf)) * 4)
    ;
    if (iVar7 != -1) {
      do {
        pTVar2 = (TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>
                  *)((longlong)iVar7 * 0x20 + *(longlong *)&this->Elements);
        if (((int)*(undefined8 *)pTVar2 == param_1.field0_0x0._0_4_) &&
           ((uint)((ulonglong)*(undefined8 *)pTVar2 >> 0x20) == uVar8)) {
          pTVar1 = (TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>
                    *)0x0;
          if (iVar7 != -1) {
            pTVar1 = pTVar2;
          }
          return pTVar1;
        }
        iVar7 = *(int *)(pTVar2 + 1);
      } while (iVar7 != -1);
    }
  }
  return (TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_> *)
         0x0;
}

// Find @ 146df37b0

FRecastDebugPathfindingNode * __thiscall
TSet<FRecastDebugPathfindingNode,DefaultKeyFuncs<FRecastDebugPathfindingNode,0>,FDefaultSetAllocator>
::Find(TSet<FRecastDebugPathfindingNode,DefaultKeyFuncs<FRecastDebugPathfindingNode,0>,FDefaultSetAllocator>
       *this,FRecastDebugPathfindingNode *param_1)

{
  ulonglong uVar1;
  int iVar2;
  FRecastDebugPathfindingNode *pFVar3;
  ForElementType<FSetElementId> FVar4;
  
  uVar1 = param_1->PolyRef;
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar4 = (this->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 +
                    ((uVar1 >> 0x20) * 0x17 + uVar1 & (ulonglong)(this->HashSize - 1)) * 4);
    if (iVar2 != -1) {
      do {
        pFVar3 = (FRecastDebugPathfindingNode *)
                 ((longlong)iVar2 * 0xa8 + *(longlong *)&this->Elements);
        if (pFVar3->PolyRef == uVar1) {
          return pFVar3;
        }
        iVar2 = (int)pFVar3[1].PolyRef;
      } while (iVar2 != -1);
    }
  }
  return (FRecastDebugPathfindingNode *)0x0;
}

// Rehash @ 146e1ef70

void __thiscall
TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>::
Rehash(TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>
       *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  uint uVar9;
  uint *puVar10;
  undefined8 *puVar11;
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
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_30.Array;
      }
      uVar4 = *puVar10;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_146e1f04c;
        uVar4 = puVar10[lVar5 + 1];
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
LAB_146e1f04c:
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
        puVar11 = (undefined8 *)
                  ((longlong)local_30.CurrentBitIndex * 0x10 + *(longlong *)&this->Elements);
        uVar9 = (uint)((ulonglong)*puVar11 >> 0x20);
        uVar7 = (int)*puVar11 - uVar9 ^ uVar9 >> 0xd;
        uVar4 = (-0x61c88647 - uVar7) - uVar9 ^ uVar7 << 8;
        uVar9 = (uVar9 - uVar4) - uVar7 ^ uVar4 >> 0xd;
        uVar7 = (uVar7 - uVar9) - uVar4 ^ uVar9 >> 0xc;
        uVar4 = (uVar4 - uVar7) - uVar9 ^ uVar7 << 0x10;
        uVar9 = (uVar9 - uVar4) - uVar7 ^ uVar4 >> 5;
        uVar7 = (uVar7 - uVar9) - uVar4 ^ uVar9 >> 3;
        uVar4 = (uVar4 - uVar7) - uVar9 ^ uVar7 << 10;
        uVar4 = ((uVar9 - uVar4) - uVar7 ^ uVar4 >> 0xf) & *piVar1 - 1U;
        *(uint *)((longlong)puVar11 + 0xc) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
        *(int *)((longlong)FVar8 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 146e1f180

void __thiscall
TSet<TTuple<UE::Math::TIntPoint<int>,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<UE::Math::TIntPoint<int>,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  uint uVar10;
  uint *puVar11;
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
      puVar11 = *(uint **)&(this->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_30.Array;
      }
      uVar5 = *puVar11;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar6 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_146e1f25c;
        uVar5 = puVar11[lVar6 + 1];
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
LAB_146e1f25c:
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
        puVar2 = (undefined8 *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x28);
        uVar10 = (uint)((ulonglong)*puVar2 >> 0x20);
        uVar8 = (int)*puVar2 - uVar10 ^ uVar10 >> 0xd;
        uVar5 = (-0x61c88647 - uVar8) - uVar10 ^ uVar8 << 8;
        uVar10 = (uVar10 - uVar5) - uVar8 ^ uVar5 >> 0xd;
        uVar8 = (uVar8 - uVar10) - uVar5 ^ uVar10 >> 0xc;
        uVar5 = (uVar5 - uVar8) - uVar10 ^ uVar8 << 0x10;
        uVar10 = (uVar10 - uVar5) - uVar8 ^ uVar5 >> 5;
        uVar8 = (uVar8 - uVar10) - uVar5 ^ uVar10 >> 3;
        uVar5 = (uVar5 - uVar8) - uVar10 ^ uVar8 << 10;
        uVar5 = ((uVar10 - uVar5) - uVar8 ^ uVar5 >> 0xf) & *piVar1 - 1U;
        *(uint *)((longlong)puVar2 + 0x24) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(puVar2 + 4) = *(undefined4 *)((longlong)FVar9 + uVar7 * 4);
        *(int *)((longlong)FVar9 + uVar7 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 146e1f3a0

void __thiscall
TSet<TTuple<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  uint uVar10;
  uint *puVar11;
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
      puVar11 = *(uint **)&(this->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_30.Array;
      }
      uVar5 = *puVar11;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar6 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_146e1f47c;
        uVar5 = puVar11[lVar6 + 1];
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
LAB_146e1f47c:
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
        puVar2 = (undefined8 *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x28);
        uVar10 = (uint)((ulonglong)*puVar2 >> 0x20);
        uVar8 = (int)*puVar2 - uVar10 ^ uVar10 >> 0xd;
        uVar5 = (-0x61c88647 - uVar8) - uVar10 ^ uVar8 << 8;
        uVar10 = (uVar10 - uVar5) - uVar8 ^ uVar5 >> 0xd;
        uVar8 = (uVar8 - uVar10) - uVar5 ^ uVar10 >> 0xc;
        uVar5 = (uVar5 - uVar8) - uVar10 ^ uVar8 << 0x10;
        uVar10 = (uVar10 - uVar5) - uVar8 ^ uVar5 >> 5;
        uVar8 = (uVar8 - uVar10) - uVar5 ^ uVar10 >> 3;
        uVar5 = (uVar5 - uVar8) - uVar10 ^ uVar8 << 10;
        uVar5 = ((uVar10 - uVar5) - uVar8 ^ uVar5 >> 0xf) & *piVar1 - 1U;
        *(uint *)((longlong)puVar2 + 0x24) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(puVar2 + 4) = *(undefined4 *)((longlong)FVar9 + uVar7 * 4);
        *(int *)((longlong)FVar9 + uVar7 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 146e1f5c0

void __thiscall
TSet<TTuple<UE::Math::TIntPoint<int>,FRecastInternalDebugData>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FRecastInternalDebugData,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<UE::Math::TIntPoint<int>,FRecastInternalDebugData>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FRecastInternalDebugData,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  uint uVar9;
  uint *puVar10;
  undefined8 *puVar11;
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
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_30.Array;
      }
      uVar4 = *puVar10;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_146e1f69c;
        uVar4 = puVar10[lVar5 + 1];
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
LAB_146e1f69c:
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
        puVar11 = (undefined8 *)
                  ((longlong)local_30.CurrentBitIndex * 0xd8 + *(longlong *)&this->Elements);
        uVar9 = (uint)((ulonglong)*puVar11 >> 0x20);
        uVar7 = (int)*puVar11 - uVar9 ^ uVar9 >> 0xd;
        uVar4 = (-0x61c88647 - uVar7) - uVar9 ^ uVar7 << 8;
        uVar9 = (uVar9 - uVar4) - uVar7 ^ uVar4 >> 0xd;
        uVar7 = (uVar7 - uVar9) - uVar4 ^ uVar9 >> 0xc;
        uVar4 = (uVar4 - uVar7) - uVar9 ^ uVar7 << 0x10;
        uVar9 = (uVar9 - uVar4) - uVar7 ^ uVar4 >> 5;
        uVar7 = (uVar7 - uVar9) - uVar4 ^ uVar9 >> 3;
        uVar4 = (uVar4 - uVar7) - uVar9 ^ uVar7 << 10;
        uVar4 = ((uVar9 - uVar4) - uVar7 ^ uVar4 >> 0xf) & *piVar1 - 1U;
        *(uint *)((longlong)puVar11 + 0xd4) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar11 + 0x1a) = *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
        *(int *)((longlong)FVar8 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 146e1f7e0

void __thiscall
TSet<TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  uint uVar9;
  uint *puVar10;
  undefined8 *puVar11;
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
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_30.Array;
      }
      uVar4 = *puVar10;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_146e1f8bc;
        uVar4 = puVar10[lVar5 + 1];
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
LAB_146e1f8bc:
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
        puVar11 = (undefined8 *)
                  ((longlong)local_30.CurrentBitIndex * 0x20 + *(longlong *)&this->Elements);
        uVar9 = (uint)((ulonglong)*puVar11 >> 0x20);
        uVar7 = (int)*puVar11 - uVar9 ^ uVar9 >> 0xd;
        uVar4 = (-0x61c88647 - uVar7) - uVar9 ^ uVar7 << 8;
        uVar9 = (uVar9 - uVar4) - uVar7 ^ uVar4 >> 0xd;
        uVar7 = (uVar7 - uVar9) - uVar4 ^ uVar9 >> 0xc;
        uVar4 = (uVar4 - uVar7) - uVar9 ^ uVar7 << 0x10;
        uVar9 = (uVar9 - uVar4) - uVar7 ^ uVar4 >> 5;
        uVar7 = (uVar7 - uVar9) - uVar4 ^ uVar9 >> 3;
        uVar4 = (uVar4 - uVar7) - uVar9 ^ uVar7 << 10;
        uVar4 = ((uVar9 - uVar4) - uVar7 ^ uVar4 >> 0xf) & *piVar1 - 1U;
        *(uint *)((longlong)puVar11 + 0x1c) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar11 + 3) = *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
        *(int *)((longlong)FVar8 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 146e1f9f0

void __thiscall
TSet<FNavTileRef,DefaultKeyFuncs<FNavTileRef,0>,FDefaultSetAllocator>::Rehash
          (TSet<FNavTileRef,DefaultKeyFuncs<FNavTileRef,0>,FDefaultSetAllocator> *this)

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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_146e1facc;
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
LAB_146e1facc:
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
        uVar7 = (int)((ulonglong)*puVar8 >> 0x20) * 0x17 + (int)*puVar8 & *piVar1 - 1U;
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

// Rehash @ 146e1fb90

void __thiscall
TSet<FNavTestSceneProxy::FNodeDebugData,DefaultKeyFuncs<FNavTestSceneProxy::FNodeDebugData,0>,FDefaultSetAllocator>
::Rehash(TSet<FNavTestSceneProxy::FNodeDebugData,DefaultKeyFuncs<FNavTestSceneProxy::FNodeDebugData,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_146e1fc6c;
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
LAB_146e1fc6c:
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
                 ((longlong)local_30.CurrentBitIndex * 0x40 + *(longlong *)&this->Elements);
        uVar7 = (int)((ulonglong)*puVar8 >> 0x20) * 0x17 + (int)*puVar8 & *piVar1 - 1U;
        *(uint *)((longlong)puVar8 + 0x3c) = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(puVar8 + 7) = *(undefined4 *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 146e1fd30

void __thiscall
TSet<FRecastDebugPathfindingNode,DefaultKeyFuncs<FRecastDebugPathfindingNode,0>,FDefaultSetAllocator>
::Rehash(TSet<FRecastDebugPathfindingNode,DefaultKeyFuncs<FRecastDebugPathfindingNode,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_146e1fe0c;
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
LAB_146e1fe0c:
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
                 ((longlong)local_30.CurrentBitIndex * 0xa8 + *(longlong *)&this->Elements);
        uVar7 = (int)((ulonglong)*puVar8 >> 0x20) * 0x17 + (int)*puVar8 & *piVar1 - 1U;
        *(uint *)((longlong)puVar8 + 0xa4) = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(puVar8 + 0x14) = *(undefined4 *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 146e1fee0

void __thiscall
TSet<FNavMeshRenderingHelpers::FUniqueColor,DefaultKeyFuncs<FNavMeshRenderingHelpers::FUniqueColor,0>,FDefaultSetAllocator>
::Rehash(TSet<FNavMeshRenderingHelpers::FUniqueColor,DefaultKeyFuncs<FNavMeshRenderingHelpers::FUniqueColor,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_146e1ffbc;
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
LAB_146e1ffbc:
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

// RehashOrLink @ 146e20070

void __thiscall
TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>::
RehashOrLink(TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>
             *this,uint param_1,TSparseSetElement<UE::Math::TIntPoint<int>_> *param_2,int param_3)

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

// RemoveByIndex @ 146e207a0

void __thiscall
TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>::
RemoveByIndex(TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>
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
    goto LAB_146e20812;
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
LAB_146e20812:
  FVar4 = (this->Hash).SecondaryData;
  lVar5 = (longlong)param_1 * 0x10 + *(longlong *)&this->Elements;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  piVar7 = (int *)((longlong)FVar4 + (longlong)*(int *)(lVar5 + 0xc) * 4);
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
    piVar7 = (int *)(*(longlong *)&this->Elements + 8 + (longlong)iVar1 * 0x10);
  }
  *piVar7 = *(int *)(lVar5 + 8);
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized
            ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this,param_1,1);
  return;
}

// Reserve @ 146e217d0

void __thiscall
TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>::
Reserve(TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>
        *this,int param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  if ((uint)(*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34) <
      (uint)param_1) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)param_1);
    }
    TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this,param_1);
    if ((uint)param_1 < 4) {
      iVar3 = 1;
    }
    else {
      uVar1 = (ulonglong)(((uint)param_1 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar3 = 1 << ((byte)lVar2 & 0x1f);
    }
    if ((this->HashSize == 0) || (this->HashSize < iVar3)) {
      this->HashSize = iVar3;
      Rehash(this);
    }
  }
  return;
}

// Reserve @ 146e21850

void __thiscall
TSet<TTuple<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement,0>,FDefaultSetAllocator>
::Reserve(TSet<TTuple<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement,0>,FDefaultSetAllocator>
          *this,int param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  if ((uint)(*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34) <
      (uint)param_1) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)param_1);
    }
    TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this,param_1);
    if ((uint)param_1 < 4) {
      iVar3 = 1;
    }
    else {
      uVar1 = (ulonglong)(((uint)param_1 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar3 = 1 << ((byte)lVar2 & 0x1f);
    }
    if ((this->HashSize == 0) || (this->HashSize < iVar3)) {
      this->HashSize = iVar3;
      Rehash(this);
    }
  }
  return;
}

// Reset @ 146e21b00

void __thiscall
TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>::
Reset(TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>
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

// Reset @ 146e21b70

void __thiscall
TSet<TTuple<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement,0>,FDefaultSetAllocator>
::Reset(TSet<TTuple<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement,0>,FDefaultSetAllocator>
        *this)

{
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    UnhashElements(this);
    *(undefined4 *)&(this->Elements).field_0x8 = 0;
    if (*(int *)&(this->Elements).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)this,0,(int *)&(this->Elements).field_0xc);
    }
    *(undefined4 *)&(this->Elements).field_0x34 = 0;
    *(undefined4 *)&(this->Elements).field_0x28 = 0;
    *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  }
  return;
}

// Shrink @ 146e29b50

void __thiscall
TSet<TTuple<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement,0>,FDefaultSetAllocator>
::Shrink(TSet<TTuple<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Shrink((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            *)this);
  uVar5 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if (uVar5 < 4) {
    iVar4 = 1;
  }
  else {
    uVar2 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar4 = 1 << ((byte)lVar3 & 0x1f);
  }
  piVar1 = &this->HashSize;
  if ((((int)uVar5 < 1) || (iVar4 <= *piVar1)) && (*piVar1 <= iVar4)) {
    return;
  }
  *piVar1 = iVar4;
  Rehash(this);
  return;
}

// TryReplaceExisting @ 146e2b630

bool __thiscall
TSet<FNavTestSceneProxy::FNodeDebugData,DefaultKeyFuncs<FNavTestSceneProxy::FNodeDebugData,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<FNavTestSceneProxy::FNodeDebugData,DefaultKeyFuncs<FNavTestSceneProxy::FNodeDebugData,0>,FDefaultSetAllocator>
           *this,uint param_1,TSparseSetElement<FNavTestSceneProxy::FNodeDebugData> *param_2,
          int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  void *pvVar5;
  code *pcVar6;
  byte bVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
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
        if (*(longlong *)((longlong)iVar13 * 0x40 + lVar4) == *(longlong *)param_2) {
          bVar15 = iVar13 != -1;
          if (bVar15) {
            _Dst = (void *)((longlong)iVar13 * 0x40 + lVar4);
            pvVar5 = *(void **)((longlong)_Dst + 0x20);
            if (pvVar5 != (void *)0x0) {
              FMemory::Free(pvVar5);
            }
            memmove(_Dst,param_2,0x38);
            iVar3 = *param_3;
            puVar1 = &(this->Elements).field_0x10;
            lVar4 = *(longlong *)&this->Elements;
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
            puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
            lVar2 = (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4;
            if (puVar11 == (undefined1 *)0x0) {
              puVar11 = puVar1;
            }
            if (((*(uint *)(puVar11 + lVar2) & uVar14) == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            if (*(int *)&(this->Elements).field_0x34 != 0) {
              *(int *)((longlong)*(int *)&(this->Elements).field_0x30 * 0x40 + lVar4) = iVar3;
            }
            uVar10 = 0xffffffff;
            *(undefined4 *)((longlong)iVar3 * 0x40 + lVar4) = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0x34) {
              uVar10 = *(undefined4 *)&(this->Elements).field_0x30;
            }
            *(undefined4 *)((longlong)iVar3 * 0x40 + 4 + lVar4) = uVar10;
            puVar11 = &(this->Elements).field_0x34;
            *(int *)puVar11 = *(int *)puVar11 + 1;
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
            puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
            if (puVar11 == (undefined1 *)0x0) {
              puVar11 = puVar1;
            }
            *(uint *)(puVar11 + lVar2) = *(uint *)(puVar11 + lVar2) & ~uVar14;
            *param_3 = iVar13;
          }
          break;
        }
        iVar13 = *(int *)((longlong)iVar13 * 0x40 + 0x38 + lVar4);
      } while (iVar13 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar15;
  }
  return bVar15;
}

// TryReplaceExisting @ 146e2b860

bool __thiscall
TSet<FRecastDebugPathfindingNode,DefaultKeyFuncs<FRecastDebugPathfindingNode,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<FRecastDebugPathfindingNode,DefaultKeyFuncs<FRecastDebugPathfindingNode,0>,FDefaultSetAllocator>
           *this,uint param_1,TSparseSetElement<FRecastDebugPathfindingNode> *param_2,int *param_3,
          bool *param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  void *pvVar5;
  code *pcVar6;
  byte bVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  undefined4 *puVar12;
  ForElementType<FSetElementId> FVar13;
  int iVar14;
  void *_Dst;
  uint uVar15;
  bool bVar16;
  
  iVar14 = *(int *)&(this->Elements).field_0x8;
  bVar16 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  if ((iVar14 - iVar3 != 1) && (iVar14 != iVar3)) {
    FVar13 = (this->Hash).SecondaryData;
    if (FVar13 == (ForElementType<FSetElementId>)0x0) {
      FVar13 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar14 = *(int *)((longlong)FVar13 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar14 != -1) {
      lVar4 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)((longlong)iVar14 * 0xa8 + lVar4) == *(longlong *)param_2) {
          bVar16 = iVar14 != -1;
          if (bVar16) {
            _Dst = (void *)((longlong)iVar14 * 0xa8 + lVar4);
            pvVar5 = *(void **)((longlong)_Dst + 0x88);
            if (pvVar5 != (void *)0x0) {
              FMemory::Free(pvVar5);
            }
            memmove(_Dst,param_2,0xa0);
            iVar3 = *param_3;
            puVar1 = &(this->Elements).field_0x10;
            lVar4 = *(longlong *)&this->Elements;
            bVar7 = (byte)iVar3 & 0x1f;
            uVar15 = 1 << bVar7 | 1U >> 0x20 - bVar7;
            if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
            lVar2 = (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4;
            if (puVar11 == (undefined1 *)0x0) {
              puVar11 = puVar1;
            }
            if (((*(uint *)(puVar11 + lVar2) & uVar15) == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            if (*(int *)&(this->Elements).field_0x34 != 0) {
              *(int *)((longlong)*(int *)&(this->Elements).field_0x30 * 0xa8 + lVar4) = iVar3;
            }
            uVar10 = 0xffffffff;
            puVar12 = (undefined4 *)((longlong)iVar3 * 0xa8 + lVar4);
            *puVar12 = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0x34) {
              uVar10 = *(undefined4 *)&(this->Elements).field_0x30;
            }
            puVar12[1] = uVar10;
            puVar11 = &(this->Elements).field_0x34;
            *(int *)puVar11 = *(int *)puVar11 + 1;
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
            puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
            if (puVar11 == (undefined1 *)0x0) {
              puVar11 = puVar1;
            }
            *(uint *)(puVar11 + lVar2) = *(uint *)(puVar11 + lVar2) & ~uVar15;
            *param_3 = iVar14;
          }
          break;
        }
        iVar14 = *(int *)((longlong)iVar14 * 0xa8 + 0xa0 + lVar4);
      } while (iVar14 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar16;
  }
  return bVar16;
}

// UnhashElements @ 146e2ba90

void __thiscall
TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>::
UnhashElements(TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_146e2bb8b;
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
LAB_146e2bb8b:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_146e2bc80;
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
LAB_146e2bc80:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<UE::Math::TIntPoint<int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// UnhashElements @ 146e2bd20

void __thiscall
TSet<TTuple<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_146e2be1b;
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
LAB_146e2be1b:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_146e2bf10;
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
LAB_146e2bf10:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// UnhashElements @ 146e2bfb0

void __thiscall
TSet<TTuple<UE::Math::TIntPoint<int>,FRecastInternalDebugData>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FRecastInternalDebugData,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<UE::Math::TIntPoint<int>,FRecastInternalDebugData>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FRecastInternalDebugData,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_146e2c0ab;
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
LAB_146e2c0ab:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_146e2c1a0;
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
LAB_146e2c1a0:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,FRecastInternalDebugData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)((longlong)local_60.CurrentBitIndex * 0xd8 + 0xd4 + *(longlong *)&this->Elements) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// UnhashElements @ 146e2c240

void __thiscall
TSet<TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_146e2c33b;
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
LAB_146e2c33b:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_146e2c430;
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
LAB_146e2c430:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// UnhashElements @ 146e2c4d0

void __thiscall
TSet<FNavTestSceneProxy::FNodeDebugData,DefaultKeyFuncs<FNavTestSceneProxy::FNodeDebugData,0>,FDefaultSetAllocator>
::UnhashElements(TSet<FNavTestSceneProxy::FNodeDebugData,DefaultKeyFuncs<FNavTestSceneProxy::FNodeDebugData,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_146e2c5cb;
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
LAB_146e2c5cb:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_146e2c6c0;
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
LAB_146e2c6c0:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<FNavTestSceneProxy::FNodeDebugData>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)((longlong)local_60.CurrentBitIndex * 0x40 + 0x3c + *(longlong *)&this->Elements) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// Emplace<FPendingTileElement_const_&> @ 146e326e0

FSetElementId __thiscall
TSet<FPendingTileElement,DefaultKeyFuncs<FPendingTileElement,0>,FDefaultSetAllocator>::
Emplace<FPendingTileElement_const_&>
          (TSet<FPendingTileElement,DefaultKeyFuncs<FPendingTileElement,0>,FDefaultSetAllocator>
           *this,FPendingTileElement *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  void *pvVar4;
  int iVar5;
  longlong lVar6;
  void *_Dst;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  char *in_R9;
  uint uVar13;
  undefined1 *puVar14;
  bool bVar15;
  FSparseArrayAllocationInfo local_48;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar12 = 1;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x40 + 4 + lVar3);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x40 + lVar3) = 0xffffffff;
    }
  }
  puVar14 = &(this->Elements).field_0x8;
  TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar5);
  if (local_48.Pointer != (FPendingTileElement *)0x0) {
    FPendingTileElement::FPendingTileElement(local_48.Pointer,(FPendingTileElement *)param_2);
    (((FPendingTileElement *)((longlong)local_48.Pointer + 0x38))->Coord).field0_0x0._s_0.X = -1;
  }
  uVar10 = ((local_48.Pointer)->field0_0x0)._s_0.Y;
  iVar1 = ((local_48.Pointer)->field0_0x0)._s_0.X;
  uVar9 = iVar1 - uVar10 ^ uVar10 >> 0xd;
  bVar15 = false;
  uVar7 = (-0x61c88647 - uVar9) - uVar10 ^ uVar9 << 8;
  uVar13 = (uVar10 - uVar9) - uVar7 ^ uVar7 >> 0xd;
  uVar9 = (uVar9 - uVar13) - uVar7 ^ uVar13 >> 0xc;
  uVar7 = (uVar7 - uVar9) - uVar13 ^ uVar9 << 0x10;
  uVar13 = (uVar13 - uVar7) - uVar9 ^ uVar7 >> 5;
  uVar9 = (uVar9 - uVar13) - uVar7 ^ uVar13 >> 3;
  uVar7 = (uVar7 - uVar9) - uVar13 ^ uVar9 << 10;
  iVar5 = *(int *)puVar14;
  iVar2 = *(int *)&(this->Elements).field_0x34;
  uVar7 = (uVar13 - uVar7) - uVar9 ^ uVar7 >> 0xf;
  if ((iVar5 - iVar2 != 1) && (iVar5 != iVar2)) {
    FVar11 = (this->Hash).SecondaryData;
    if (FVar11 == (ForElementType<FSetElementId>)0x0) {
      FVar11 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar5 = *(int *)((longlong)FVar11 + (ulonglong)(this->HashSize - 1U & uVar7) * 4);
    if (iVar5 != -1) {
      lVar3 = *(longlong *)&this->Elements;
      do {
        lVar6 = (longlong)iVar5 * 0x40;
        if ((*(int *)(lVar6 + lVar3) == iVar1) && (*(uint *)(lVar6 + 4 + lVar3) == uVar10)) {
          bVar15 = iVar5 != -1;
          if (bVar15) {
            _Dst = (void *)(*(longlong *)&this->Elements + (longlong)iVar5 * 0x40);
            pvVar4 = *(void **)((longlong)_Dst + 0x28);
            if (pvVar4 != (void *)0x0) {
              FMemory::Free(pvVar4);
            }
            memmove(_Dst,local_48.Pointer,0x38);
            TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar5;
          }
          break;
        }
        iVar5 = *(int *)(lVar6 + 0x38 + lVar3);
      } while (iVar5 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar15;
  }
  if (bVar15 == false) {
    uVar10 = *(int *)puVar14 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar10) {
      uVar8 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar10 < 1) || (iVar12 <= this->HashSize)) {
      uVar7 = this->HashSize - 1U & uVar7;
      (((FPendingTileElement *)((longlong)local_48.Pointer + 0x38))->Coord).field0_0x0._s_0.Y =
           uVar7;
      FVar11 = (this->Hash).SecondaryData;
      if (FVar11 == (ForElementType<FSetElementId>)0x0) {
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar7;
      (((FPendingTileElement *)((longlong)local_48.Pointer + 0x38))->Coord).field0_0x0._s_0.X =
           *(int *)((longlong)FVar11 + uVar8 * 4);
      *(int *)((longlong)FVar11 + uVar8 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar12;
      Rehash(this);
    }
  }
  (param_1->Coord).field0_0x0._s_0.X = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// EmplaceByHash<TKeyInitializer<FPendingTileElement_const_&>_> @ 146e329b0

FSetElementId __thiscall
TSet<TTuple<FPendingTileElement,TArray<FRecastNavMeshGenerator::FNavigationDirtyAreaPerTileDebugInformation,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPendingTileElement,TArray<FRecastNavMeshGenerator::FNavigationDirtyAreaPerTileDebugInformation,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<FPendingTileElement_const_&>_>
          (TSet<TTuple<FPendingTileElement,TArray<FRecastNavMeshGenerator::FNavigationDirtyAreaPerTileDebugInformation,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPendingTileElement,TArray<FRecastNavMeshGenerator::FNavigationDirtyAreaPerTileDebugInformation,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<FPendingTileElement_const_&> *param_2,bool *param_3)

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
                      (0x50,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar5 * 0x50);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x50) = 0xffffffff;
    }
  }
  TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar5);
  if (local_38.Pointer ==
      (TSparseSetElement<TTuple<FPendingTileElement,TArray<FRecastNavMeshGenerator::FNavigationDirtyAreaPerTileDebugInformation,TSizedDefaultAllocator<32>_>_>_>
       *)0x0) {
    local_38.Pointer =
         (TSparseSetElement<TTuple<FPendingTileElement,TArray<FRecastNavMeshGenerator::FNavigationDirtyAreaPerTileDebugInformation,TSizedDefaultAllocator<32>_>_>_>
          *)0x0;
  }
  else {
    FPendingTileElement::FPendingTileElement(local_38.Pointer,*(FPendingTileElement **)param_3);
    *(undefined8 *)((longlong)local_38.Pointer + 0x38) = 0;
    *(undefined8 *)((longlong)local_38.Pointer + 0x40) = 0;
    DestructItems<FRecastNavMeshGenerator::FNavigationDirtyAreaPerTileDebugInformation,int>
              ((FNavigationDirtyAreaPerTileDebugInformation *)0x0,0);
    *(undefined4 *)((longlong)local_38.Pointer + 0x48) = 0xffffffff;
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
      *(uint *)&((TSparseSetElement<TTuple<FPendingTileElement,TArray<FRecastNavMeshGenerator::FNavigationDirtyAreaPerTileDebugInformation,TSizedDefaultAllocator<32>_>_>_>
                  *)local_38.Pointer)->field_0x4c = uVar7;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar7;
      *(undefined4 *)
       &((TSparseSetElement<TTuple<FPendingTileElement,TArray<FRecastNavMeshGenerator::FNavigationDirtyAreaPerTileDebugInformation,TSizedDefaultAllocator<32>_>_>_>
          *)local_38.Pointer)->field_0x48 = *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
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

// FindIndexByHash<FPendingTileElement> @ 146e33fb0

int __thiscall
TSet<TTuple<FPendingTileElement,TArray<FRecastNavMeshGenerator::FNavigationDirtyAreaPerTileDebugInformation,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPendingTileElement,TArray<FRecastNavMeshGenerator::FNavigationDirtyAreaPerTileDebugInformation,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::FindIndexByHash<FPendingTileElement>
          (TSet<TTuple<FPendingTileElement,TArray<FRecastNavMeshGenerator::FNavigationDirtyAreaPerTileDebugInformation,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPendingTileElement,TArray<FRecastNavMeshGenerator::FNavigationDirtyAreaPerTileDebugInformation,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,FPendingTileElement *param_2)

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
        lVar2 = (longlong)iVar3;
        if ((*(int *)(lVar1 + lVar2 * 0x50) == (param_2->Coord).field0_0x0._s_0.X) &&
           (*(int *)(lVar1 + 4 + lVar2 * 0x50) == (param_2->Coord).field0_0x0._s_0.Y)) {
          return iVar3;
        }
        iVar3 = *(int *)(lVar1 + 0x48 + lVar2 * 0x50);
      } while (iVar3 != -1);
    }
  }
  return -1;
}

// RemoveImpl<UE::Math::TIntPoint<int>_> @ 146e35880

int __thiscall
TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>::
RemoveImpl<UE::Math::TIntPoint<int>_>
          (TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>
           *this,uint param_1,TIntPoint<int> *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  uint *puVar8;
  longlong lVar9;
  undefined1 *puVar10;
  
  FVar6 = (this->Hash).SecondaryData;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar7 = *(uint *)((longlong)FVar6 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar7 == 0xffffffff) {
    return 0;
  }
  while( true ) {
    lVar9 = (longlong)(int)uVar7 * 0x10;
    uVar2 = *(undefined8 *)(lVar9 + *(longlong *)&this->Elements);
    if (((int)uVar2 == (param_2->field0_0x0)._s_0.X) &&
       ((int)((ulonglong)uVar2 >> 0x20) == (param_2->field0_0x0)._s_0.Y)) break;
    uVar7 = *(uint *)(lVar9 + *(longlong *)&this->Elements + 8);
    if (uVar7 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)&(this->Elements).field_0x28)) {
    puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar10 + (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar7 & 0x1f) & 1) != 0) goto LAB_146e35973;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
LAB_146e35973:
  FVar6 = (this->Hash).SecondaryData;
  lVar9 = *(longlong *)&this->Elements + lVar9;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar8 = (uint *)((longlong)FVar6 + (longlong)*(int *)(lVar9 + 0xc) * 4);
  while( true ) {
    uVar1 = *puVar8;
    if ((uVar1 == 0xffffffff) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar4)) break;
    if (uVar1 == uVar7) {
      *puVar8 = *(uint *)(lVar9 + 8);
      TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar7,1);
      return 1;
    }
    puVar8 = (uint *)(*(longlong *)&this->Elements + 8 + (longlong)(int)uVar1 * 0x10);
  }
  pcVar3 = (code *)swi(3);
  iVar5 = (*pcVar3)();
  return iVar5;
}

// Rehash @ 146e6f820

void __thiscall
TSet<TTuple<FPendingTileElement,TArray<FRecastNavMeshGenerator::FNavigationDirtyAreaPerTileDebugInformation,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPendingTileElement,TArray<FRecastNavMeshGenerator::FNavigationDirtyAreaPerTileDebugInformation,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FPendingTileElement,TArray<FRecastNavMeshGenerator::FNavigationDirtyAreaPerTileDebugInformation,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPendingTileElement,TArray<FRecastNavMeshGenerator::FNavigationDirtyAreaPerTileDebugInformation,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  uint uVar10;
  uint *puVar11;
  int *piVar12;
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
      puVar11 = *(uint **)&(this->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_30.Array;
      }
      uVar5 = *puVar11;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar6 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_146e6f8fc;
        uVar5 = puVar11[lVar6 + 1];
      }
      uStack_54 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_54 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_44 = (int)lVar6 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_146e6f8fc:
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
        piVar12 = (int *)((longlong)local_30.CurrentBitIndex * 0x50 + *(longlong *)&this->Elements);
        uVar5 = piVar12[1];
        uVar8 = *piVar12 - uVar5 ^ uVar5 >> 0xd;
        uVar4 = (-0x61c88647 - uVar8) - uVar5 ^ uVar8 << 8;
        uVar10 = (uVar5 - uVar4) - uVar8 ^ uVar4 >> 0xd;
        uVar8 = (uVar8 - uVar10) - uVar4 ^ uVar10 >> 0xc;
        uVar5 = (uVar4 - uVar8) - uVar10 ^ uVar8 << 0x10;
        uVar10 = (uVar10 - uVar5) - uVar8 ^ uVar5 >> 5;
        uVar4 = (uVar8 - uVar10) - uVar5 ^ uVar10 >> 3;
        uVar5 = (uVar5 - uVar4) - uVar10 ^ uVar4 << 10;
        uVar5 = ((uVar10 - uVar5) - uVar4 ^ uVar5 >> 0xf) & *piVar1 - 1U;
        piVar12[0x13] = uVar5;
        FVar3 = (this->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar3;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        piVar12[0x12] = *(int *)((longlong)FVar9 + uVar7 * 4);
        *(int *)((longlong)FVar9 + uVar7 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 146e6fa30

void __thiscall
TSet<FPendingTileElement,DefaultKeyFuncs<FPendingTileElement,0>,FDefaultSetAllocator>::Rehash
          (TSet<FPendingTileElement,DefaultKeyFuncs<FPendingTileElement,0>,FDefaultSetAllocator>
           *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  uint uVar10;
  uint *puVar11;
  int *piVar12;
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
      puVar11 = *(uint **)&(this->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_30.Array;
      }
      uVar5 = *puVar11;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar6 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_146e6fb0c;
        uVar5 = puVar11[lVar6 + 1];
      }
      uStack_54 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_54 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_44 = (int)lVar6 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_146e6fb0c:
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
        piVar12 = (int *)((longlong)local_30.CurrentBitIndex * 0x40 + *(longlong *)&this->Elements);
        uVar5 = piVar12[1];
        uVar8 = *piVar12 - uVar5 ^ uVar5 >> 0xd;
        uVar4 = (-0x61c88647 - uVar8) - uVar5 ^ uVar8 << 8;
        uVar10 = (uVar5 - uVar4) - uVar8 ^ uVar4 >> 0xd;
        uVar8 = (uVar8 - uVar10) - uVar4 ^ uVar10 >> 0xc;
        uVar5 = (uVar4 - uVar8) - uVar10 ^ uVar8 << 0x10;
        uVar10 = (uVar10 - uVar5) - uVar8 ^ uVar5 >> 5;
        uVar4 = (uVar8 - uVar10) - uVar5 ^ uVar10 >> 3;
        uVar5 = (uVar5 - uVar4) - uVar10 ^ uVar4 << 10;
        uVar5 = ((uVar10 - uVar5) - uVar4 ^ uVar5 >> 0xf) & *piVar1 - 1U;
        piVar12[0xf] = uVar5;
        FVar3 = (this->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar3;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        piVar12[0xe] = *(int *)((longlong)FVar9 + uVar7 * 4);
        *(int *)((longlong)FVar9 + uVar7 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Reserve @ 146e70a60

void __thiscall
TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
::Reserve(TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
          *this,int param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  if ((uint)(*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34) <
      (uint)param_1) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)param_1);
    }
    TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this,param_1);
    if ((uint)param_1 < 4) {
      iVar3 = 1;
    }
    else {
      uVar1 = (ulonglong)(((uint)param_1 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar3 = 1 << ((byte)lVar2 & 0x1f);
    }
    if ((this->HashSize == 0) || (this->HashSize < iVar3)) {
      this->HashSize = iVar3;
      Rehash(this);
    }
  }
  return;
}

// Reset @ 146e70bc0

void __thiscall
TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
::Reset(TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
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

// TryReplaceExisting @ 146e74ee0

bool __thiscall
TSet<TTuple<FPendingTileElement,TArray<FRecastNavMeshGenerator::FNavigationDirtyAreaPerTileDebugInformation,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPendingTileElement,TArray<FRecastNavMeshGenerator::FNavigationDirtyAreaPerTileDebugInformation,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FPendingTileElement,TArray<FRecastNavMeshGenerator::FNavigationDirtyAreaPerTileDebugInformation,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPendingTileElement,TArray<FRecastNavMeshGenerator::FNavigationDirtyAreaPerTileDebugInformation,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<FPendingTileElement,TArray<FRecastNavMeshGenerator::FNavigationDirtyAreaPerTileDebugInformation,TSizedDefaultAllocator<32>_>_>_>
          *param_2,int *param_3,bool *param_4)

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
  undefined4 *puVar11;
  ForElementType<FSetElementId> FVar12;
  int iVar13;
  void *_Dst;
  uint uVar14;
  bool bVar15;
  
  iVar13 = *(int *)&(this->Elements).field_0x8;
  bVar15 = false;
  iVar2 = *(int *)&(this->Elements).field_0x34;
  if ((iVar13 - iVar2 != 1) && (iVar13 != iVar2)) {
    FVar12 = (this->Hash).SecondaryData;
    if (FVar12 == (ForElementType<FSetElementId>)0x0) {
      FVar12 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar13 = *(int *)((longlong)FVar12 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar13 != -1) {
      lVar3 = *(longlong *)&this->Elements;
      do {
        lVar9 = (longlong)iVar13;
        if ((*(int *)(lVar3 + lVar9 * 0x50) == *(int *)param_2) &&
           (*(int *)(lVar3 + 4 + lVar9 * 0x50) == *(int *)&param_2->field_0x4)) {
          bVar15 = iVar13 != -1;
          if (bVar15) {
            _Dst = (void *)((longlong)iVar13 * 0x50 + lVar3);
            DestructItems<FRecastNavMeshGenerator::FNavigationDirtyAreaPerTileDebugInformation,int>
                      (*(FNavigationDirtyAreaPerTileDebugInformation **)((longlong)_Dst + 0x38),
                       *(int *)((longlong)_Dst + 0x40));
            if (*(void **)((longlong)_Dst + 0x38) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x38));
            }
            if (*(void **)((longlong)_Dst + 0x28) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x28));
            }
            memmove(_Dst,param_2,0x48);
            iVar2 = *param_3;
            puVar1 = &(this->Elements).field_0x10;
            lVar3 = *(longlong *)&this->Elements;
            bVar5 = (byte)iVar2 & 0x1f;
            uVar14 = 1 << bVar5 | 1U >> 0x20 - bVar5;
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
            lVar9 = (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) * 4;
            if (puVar10 == (undefined1 *)0x0) {
              puVar10 = puVar1;
            }
            if (((*(uint *)(puVar10 + lVar9) & uVar14) == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            if (*(int *)&(this->Elements).field_0x34 != 0) {
              *(int *)(lVar3 + (longlong)*(int *)&(this->Elements).field_0x30 * 0x50) = iVar2;
            }
            uVar8 = 0xffffffff;
            puVar11 = (undefined4 *)((longlong)iVar2 * 0x50 + lVar3);
            *puVar11 = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0x34) {
              uVar8 = *(undefined4 *)&(this->Elements).field_0x30;
            }
            puVar11[1] = uVar8;
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
            *(uint *)(puVar10 + lVar9) = *(uint *)(puVar10 + lVar9) & ~uVar14;
            *param_3 = iVar13;
          }
          break;
        }
        iVar13 = *(int *)(lVar3 + 0x48 + lVar9 * 0x50);
      } while (iVar13 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar15;
  }
  return bVar15;
}

// UnhashElements @ 146e75150

void __thiscall
TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_146e7524b;
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
LAB_146e7524b:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_146e75340;
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
LAB_146e75340:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<int,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// UnhashElements @ 146e753e0

void __thiscall
TSet<FNavTileRef,DefaultKeyFuncs<FNavTileRef,0>,FDefaultSetAllocator>::UnhashElements
          (TSet<FNavTileRef,DefaultKeyFuncs<FNavTileRef,0>,FDefaultSetAllocator> *this)

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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_146e754db;
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
LAB_146e754db:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_146e755d0;
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
LAB_146e755d0:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<FNavTileRef>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

