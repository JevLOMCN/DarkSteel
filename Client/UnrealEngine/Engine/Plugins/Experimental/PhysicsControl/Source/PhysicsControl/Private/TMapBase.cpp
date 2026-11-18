// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsControl
// Functions: 10

// EmplaceByHash<FName_const_&> @ 14d9ba7d0

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
::EmplaceByHash<FName_const_&>
          (TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FName *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_> *pTVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar4 * 0x20 + 4 + lVar6);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar6) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar4);
  pTVar5 = (TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_> *)0x0;
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_> *)0x0) {
    *(FName *)local_18.Pointer = *param_2;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x10) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x18) = 0xffffffff;
    pTVar5 = local_18.Pointer;
  }
  local_res8[0] = local_18.Index;
  bVar3 = TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,pTVar5,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,pTVar5,local_res8[0]);
  }
  return (TArray<FName,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + lVar6 * 0x20);
}

// EmplaceByHash<FName> @ 14d9ba900

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
::EmplaceByHash<FName>
          (TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FName *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_> *pTVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar4 * 0x20 + 4 + lVar6);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar6) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar4);
  pTVar5 = (TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_> *)0x0;
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_> *)0x0) {
    *(FName *)local_18.Pointer = *param_2;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x10) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x18) = 0xffffffff;
    pTVar5 = local_18.Pointer;
  }
  local_res8[0] = local_18.Index;
  bVar3 = TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,pTVar5,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,pTVar5,local_res8[0]);
  }
  return (TArray<FName,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + lVar6 * 0x20);
}

// Find @ 14d9db590

FPhysicsBodyModifierCreationData * __thiscall
TMapBase<FName,FPhysicsBodyModifierCreationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierCreationData,0>_>
::Find(TMapBase<FName,FPhysicsBodyModifierCreationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierCreationData,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FPhysicsBodyModifierCreationData *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FName *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar4 = (FName *)((longlong)(int)uVar1 * 0x38 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pFVar2 = (FPhysicsBodyModifierCreationData *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pFVar2 = (FPhysicsBodyModifierCreationData *)(pFVar4 + 1);
          }
          return pFVar2;
        }
        uVar1 = pFVar4[6].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FPhysicsBodyModifierCreationData *)0x0;
}

// Find @ 14d9db630

FPhysicsBodyModifierRecord * __thiscall
TMapBase<FName,FPhysicsBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierRecord,0>_>
::Find(TMapBase<FName,FPhysicsBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierRecord,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FPhysicsBodyModifierRecord *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FName *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar4 = (FName *)((longlong)(int)uVar1 * 0x90 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pFVar2 = (FPhysicsBodyModifierRecord *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pFVar2 = (FPhysicsBodyModifierRecord *)(pFVar4 + 2);
          }
          return pFVar2;
        }
        uVar1 = pFVar4[0x10].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FPhysicsBodyModifierRecord *)0x0;
}

// Find @ 14d9db6d0

FPhysicsControlControlAndModifierUpdates * __thiscall
TMapBase<FName,FPhysicsControlControlAndModifierUpdates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlControlAndModifierUpdates,0>_>
::Find(TMapBase<FName,FPhysicsControlControlAndModifierUpdates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlControlAndModifierUpdates,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FPhysicsControlControlAndModifierUpdates *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x40 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == param_1) {
          pFVar4 = (FPhysicsControlControlAndModifierUpdates *)0x0;
          if (pFVar2 != (FName *)0x0) {
            pFVar4 = (FPhysicsControlControlAndModifierUpdates *)(pFVar2 + 1);
          }
          return pFVar4;
        }
        uVar1 = pFVar2[7].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FPhysicsControlControlAndModifierUpdates *)0x0;
}

// Find @ 14d9db770

FPhysicsControlCreationData * __thiscall
TMapBase<FName,FPhysicsControlCreationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlCreationData,0>_>
::Find(TMapBase<FName,FPhysicsControlCreationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlCreationData,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FPhysicsControlCreationData *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FName *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar4 = (FName *)((longlong)(int)uVar1 * 0xf0 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pFVar2 = (FPhysicsControlCreationData *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pFVar2 = (FPhysicsControlCreationData *)(pFVar4 + 1);
          }
          return pFVar2;
        }
        uVar1 = pFVar4[0x1d].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FPhysicsControlCreationData *)0x0;
}

// Find @ 14d9db810

FPhysicsControlRecord * __thiscall
TMapBase<FName,FPhysicsControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlRecord,0>_>
::Find(TMapBase<FName,FPhysicsControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlRecord,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FPhysicsControlRecord *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FName *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar4 = (FName *)((longlong)(int)uVar1 * 0x1d0 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pFVar2 = (FPhysicsControlRecord *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pFVar2 = (FPhysicsControlRecord *)(pFVar4 + 2);
          }
          return pFVar2;
        }
        uVar1 = pFVar4[0x38].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FPhysicsControlRecord *)0x0;
}

// Find @ 14d9db8b0

FRigidBodyControlRecord * __thiscall
TMapBase<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>
::Find(TMapBase<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FRigidBodyControlRecord *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FName *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar4 = (FName *)((longlong)(int)uVar1 * 0x240 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pFVar2 = (FRigidBodyControlRecord *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pFVar2 = (FRigidBodyControlRecord *)(pFVar4 + 2);
          }
          return pFVar2;
        }
        uVar1 = pFVar4[0x46].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FRigidBodyControlRecord *)0x0;
}

// Find @ 14d9db950

FRigidBodyModifierRecord * __thiscall
TMapBase<FName,FRigidBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>_>
::Find(TMapBase<FName,FRigidBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FRigidBodyModifierRecord *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x40 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == param_1) {
          pFVar4 = (FRigidBodyModifierRecord *)0x0;
          if (pFVar2 != (FName *)0x0) {
            pFVar4 = (FRigidBodyModifierRecord *)(pFVar2 + 1);
          }
          return pFVar4;
        }
        uVar1 = pFVar2[7].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FRigidBodyModifierRecord *)0x0;
}

// OrderIndependentCompareEqual @ 14d9e4c80

bool __thiscall
TMapBase<FName,FPhysicsBodyModifierCreationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierCreationData,0>_>
::OrderIndependentCompareEqual
          (TMapBase<FName,FPhysicsBodyModifierCreationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierCreationData,0>_>
           *this,TMapBase<FName,FPhysicsBodyModifierCreationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierCreationData,0>_>
                 *param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  FPhysicsBodyModifierCreationData *pFVar5;
  longlong lVar6;
  longlong lVar7;
  uint *puVar8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  TMapBase<FName,FPhysicsBodyModifierCreationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierCreationData,0>_>
  *local_40;
  int iStack_38;
  uint uStack_34;
  undefined1 *local_30;
  undefined4 uStack_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34 ==
      *(int *)&(param_1->Pairs).Elements.field_0x8 - *(int *)&(param_1->Pairs).Elements.field_0x34)
  {
    iStack_38 = 0;
    iVar2 = *(int *)&(this->Pairs).Elements.field_0x28;
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
    uStack_34 = 1;
    local_20 = 0;
    iStack_24 = 0;
    if (iVar2 != 0) {
      puVar8 = *(uint **)&(this->Pairs).Elements.field_0x20;
      if (puVar8 == (uint *)0x0) {
        puVar8 = (uint *)TStack_60.Array;
      }
      uVar3 = *puVar8;
      while (uVar3 == 0) {
        lVar6 = (longlong)iStack_38;
        local_20 = local_20 + 0x20;
        iStack_38 = iStack_38 + 1;
        iStack_24 = iVar2;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_38) goto LAB_14d9e4d3a;
        uVar3 = puVar8[lVar6 + 1];
      }
      uStack_34 = -uVar3 & uVar3;
      uVar1 = (ulonglong)uStack_34 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_24 = (int)lVar6 + -1 + local_20;
      if (iVar2 < iStack_24) {
        iStack_24 = iVar2;
      }
    }
LAB_14d9e4d3a:
    uStack_28 = 0xffffffff;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iStack_1c = TStack_60.CurrentBitIndex;
    TStack_60._28_4_ = TStack_60.CurrentBitIndex;
    TStack_60.BaseBitIndex = local_20;
    local_40 = this;
    local_30 = (undefined1 *)TStack_60.Array;
    TStack_60._padding_._0_4_ = iStack_38;
    TStack_60._padding_._4_4_ = uStack_34;
    TStack_60.CurrentBitIndex = iStack_24;
    if (iStack_24 < *(int *)&(this->Pairs).Elements.field_0x28) {
      do {
        iVar2 = TStack_60.CurrentBitIndex;
        pFVar5 = Find(param_1,*(FName *)((longlong)TStack_60.CurrentBitIndex * 0x38 +
                                        *(longlong *)&(this->Pairs).Elements));
        if (pFVar5 == (FPhysicsBodyModifierCreationData *)0x0) goto LAB_14d9e4e8e;
        lVar6 = *(longlong *)&(this->Pairs).Elements;
        lVar7 = (longlong)iVar2 * 0x38;
        if (((((((pFVar5->Modifier).BoneName != *(FName *)(lVar7 + 8 + lVar6)) ||
               ((pFVar5->Modifier).ModifierData.MovementType !=
                *(EPhysicsMovementType *)(lVar7 + 0x10 + lVar6))) ||
              ((pFVar5->Modifier).ModifierData.CollisionType.Value !=
               *(uchar *)(lVar7 + 0x11 + lVar6))) ||
             (((pFVar5->Modifier).ModifierData.KinematicTargetSpace !=
               *(EPhysicsControlKinematicTargetSpace *)(lVar7 + 0x12 + lVar6) ||
              (*(float *)(lVar7 + 0x14 + lVar6) != (pFVar5->Modifier).ModifierData.GravityMultiplier
              )))) || ((*(float *)(lVar7 + 0x18 + lVar6) !=
                        (pFVar5->Modifier).ModifierData.PhysicsBlendWeight ||
                       (((pFVar5->Modifier).ModifierData.bUpdateKinematicFromSimulation !=
                         (bool)*(char *)(lVar7 + 0x1c + lVar6) ||
                        (iVar2 = (pFVar5->Sets).ArrayNum, iVar2 != *(int *)(lVar7 + 0x28 + lVar6))))
                       ))) ||
           (bVar4 = CompareItems<FName,int>
                              ((FName *)(pFVar5->Sets).AllocatorInstance.Data,
                               *(FName **)(lVar7 + 0x20 + lVar6),iVar2), !bVar4))
        goto LAB_14d9e4e8e;
        TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
    }
    bVar4 = true;
  }
  else {
LAB_14d9e4e8e:
    bVar4 = false;
  }
  return bVar4;
}

