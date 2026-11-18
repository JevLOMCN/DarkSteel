// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 87

// Find @ 149750db0

ULandscapeHeightfieldCollisionComponent ** __thiscall
TMapBase<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*,0>_>
::Find(TMapBase<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*,0>_>
       *this,TIntPoint<int> param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  ULandscapeHeightfieldCollisionComponent **ppUVar4;
  uint uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  uVar10 = param_1.field0_0x0._4_4_;
  uVar8 = param_1.field0_0x0._0_4_ - uVar10 ^ uVar10 >> 0xd;
  uVar6 = (-0x61c88647 - uVar8) - uVar10 ^ uVar8 << 8;
  uVar5 = (uVar10 - uVar8) - uVar6 ^ uVar6 >> 0xd;
  uVar8 = (uVar8 - uVar5) - uVar6 ^ uVar5 >> 0xc;
  uVar6 = (uVar6 - uVar8) - uVar5 ^ uVar8 << 0x10;
  uVar5 = (uVar5 - uVar6) - uVar8 ^ uVar6 >> 5;
  uVar8 = (uVar8 - uVar5) - uVar6 ^ uVar5 >> 3;
  uVar6 = (uVar6 - uVar8) - uVar5 ^ uVar8 << 10;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar9 = *(int *)((longlong)FVar7 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & ((uVar5 - uVar6) - uVar8 ^ uVar6 >> 0xf)) * 4);
    if (iVar9 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        uVar3 = *(undefined8 *)(lVar2 + (longlong)iVar9 * 0x18);
        lVar1 = lVar2 + (longlong)iVar9 * 0x18;
        if (((int)uVar3 == param_1.field0_0x0._0_4_) && ((uint)((ulonglong)uVar3 >> 0x20) == uVar10)
           ) {
          if (iVar9 == -1) {
            return (ULandscapeHeightfieldCollisionComponent **)0x0;
          }
          ppUVar4 = (ULandscapeHeightfieldCollisionComponent **)0x0;
          if (lVar1 != 0) {
            ppUVar4 = (ULandscapeHeightfieldCollisionComponent **)(lVar1 + 8);
          }
          return ppUVar4;
        }
        iVar9 = *(int *)(lVar1 + 0x10);
      } while (iVar9 != -1);
    }
  }
  return (ULandscapeHeightfieldCollisionComponent **)0x0;
}

// Find @ 149750ed0

TTuple<FProperty_const_*,void_const_*> * __thiscall
TMapBase<FName,TTuple<FProperty_const_*,void_const_*>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TTuple<FProperty_const_*,void_const_*>,0>_>
::Find(TMapBase<FName,TTuple<FProperty_const_*,void_const_*>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TTuple<FProperty_const_*,void_const_*>,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  TTuple<FProperty_const_*,void_const_*> *pTVar4;
  
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
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == param_1) {
          pTVar4 = (TTuple<FProperty_const_*,void_const_*> *)0x0;
          if (pFVar2 != (FName *)0x0) {
            pTVar4 = (TTuple<FProperty_const_*,void_const_*> *)(pFVar2 + 1);
          }
          return pTVar4;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (TTuple<FProperty_const_*,void_const_*> *)0x0;
}

// Find @ 149750f70

FPCGDataLabels * __thiscall
TMapBase<FName,FPCGDataLabels,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGDataLabels,0>_>
::Find(TMapBase<FName,FPCGDataLabels,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGDataLabels,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
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
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == param_1) {
          pFVar4 = (FName *)0x0;
          if (pFVar2 != (FName *)0x0) {
            pFVar4 = pFVar2 + 1;
          }
          return (FPCGDataLabels *)pFVar4;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FPCGDataLabels *)0x0;
}

// Emplace<TObjectPtr<UComputeKernel_const_>_const_&,FPCGSpawnerPrimitives_const_&> @ 1497b6d10

FPCGSpawnerPrimitives * __thiscall
TMapBase<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives,0>_>
::Emplace<TObjectPtr<UComputeKernel_const_>_const_&,FPCGSpawnerPrimitives_const_&>
          (TMapBase<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives,0>_>
           *this,TObjectPtr<UComputeKernel_const_> *param_1,FPCGSpawnerPrimitives *param_2)

{
  UComputeKernel *pUVar1;
  UObject *pUVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AddUninitialized((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)this,&local_18);
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives>_> *)0x0) {
    pUVar1 = (param_1->field0_0x0).DebugPtr;
    *(UComputeKernel **)local_18.Pointer = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UComputeKernel *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    FPCGSpawnerPrimitives::FPCGSpawnerPrimitives
              ((FPCGSpawnerPrimitives *)((longlong)local_18.Pointer + 8),param_2);
    *(undefined4 *)((longlong)local_18.Pointer + 0x58) = 0xffffffff;
  }
  pUVar2 = *(UObject **)local_18.Pointer;
  local_res8[0] = local_18.Index;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  uVar4 = ((uint)((ulonglong)pUVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar2 >> 4)) *
          -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  bVar3 = TSet<TTuple<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives>,TDefaultMapHashableKeyFuncs<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar4,local_18.Pointer,local_res8,(bool *)0x0);
  lVar5 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives>,TDefaultMapHashableKeyFuncs<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar4,local_18.Pointer,local_res8[0]);
  }
  return (FPCGSpawnerPrimitives *)(*(longlong *)&(this->Pairs).Elements + 8 + lVar5 * 0x60);
}

// Emplace<TObjectPtr<UComputeKernel_const_>_const_&,FPCGSpawnerPrimitives> @ 1497b6e20

FPCGSpawnerPrimitives * __thiscall
TMapBase<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives,0>_>
::Emplace<TObjectPtr<UComputeKernel_const_>_const_&,FPCGSpawnerPrimitives>
          (TMapBase<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives,0>_>
           *this,TObjectPtr<UComputeKernel_const_> *param_1,FPCGSpawnerPrimitives *param_2)

{
  UObject *pUVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AddUninitialized((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)this,&local_18);
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives>_> *)0x0) {
    TTuple<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives>::
    TTuple<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives><TObjectPtr<UComputeKernel_const_>_const_&,FPCGSpawnerPrimitives>
              (local_18.Pointer,param_1,param_2);
    *(undefined4 *)((longlong)local_18.Pointer + 0x58) = 0xffffffff;
  }
  pUVar1 = *(UObject **)local_18.Pointer;
  local_res8[0] = local_18.Index;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  uVar3 = ((uint)((ulonglong)pUVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar1 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  bVar2 = TSet<TTuple<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives>,TDefaultMapHashableKeyFuncs<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar3,local_18.Pointer,local_res8,(bool *)0x0);
  lVar4 = (longlong)local_res8[0];
  if (!bVar2) {
    TSet<TTuple<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives>,TDefaultMapHashableKeyFuncs<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar3,local_18.Pointer,local_res8[0]);
  }
  return (FPCGSpawnerPrimitives *)(*(longlong *)&(this->Pairs).Elements + 8 + lVar4 * 0x60);
}

// EmplaceByHash<TObjectPtr<UComputeKernel_const_>_const_&> @ 1497b80e0

FPCGSpawnerPrimitives * __thiscall
TMapBase<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives,0>_>
::EmplaceByHash<TObjectPtr<UComputeKernel_const_>_const_&>
          (TMapBase<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives,0>_>
           *this,uint param_1,TObjectPtr<UComputeKernel_const_> *param_2)

{
  bool bVar1;
  TKeyInitializer<TObjectPtr<UComputeKernel_const_>_const_&> local_res8;
  FSparseArrayAllocationInfo local_18;
  
  local_res8.Key = param_2;
  TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AddUninitialized((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)this,&local_18);
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives>_> *)0x0) {
    TKeyInitializer<TObjectPtr<UComputeKernel_const_>_const_&>::
    operator<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives>_TTuple<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives>
              (&local_res8,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x58) = 0xffffffff;
  }
  local_res8.Key._0_4_ = local_18.Index;
  bVar1 = TSet<TTuple<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives>,TDefaultMapHashableKeyFuncs<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,(int *)&local_res8,(bool *)0x0)
  ;
  if (!bVar1) {
    TSet<TTuple<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives>,TDefaultMapHashableKeyFuncs<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,(int)local_res8.Key);
  }
  return (FPCGSpawnerPrimitives *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)(int)local_res8.Key * 0x60);
}

// FindOrAddImpl<TObjectKey<UPCGNode_const_>_> @ 1497ba030

TArray<FComputeKernelCompileMessage,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<TObjectKey<UPCGNode_const_>,TArray<FComputeKernelCompileMessage,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGNode_const_>,TArray<FComputeKernelCompileMessage,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<TObjectKey<UPCGNode_const_>_>
          (TMapBase<TObjectKey<UPCGNode_const_>,TArray<FComputeKernelCompileMessage,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGNode_const_>,TArray<FComputeKernelCompileMessage,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,TObjectKey<UPCGNode_const_> *param_2)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  TObjectKey<UPCGNode_const_> *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        piVar1 = (int *)((longlong)iVar2 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((*piVar1 == (param_2->ObjectKey).ObjectIndex) &&
           (piVar1[1] == (param_2->ObjectKey).ObjectSerialNumber)) {
          if ((iVar2 != -1) && (piVar1 != (int *)0x0)) {
            return (TArray<FComputeKernelCompileMessage,TSizedDefaultAllocator<32>_> *)(piVar1 + 2);
          }
          break;
        }
        iVar2 = piVar1[6];
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<TObjectKey<UPCGNode_const_>,TArray<FComputeKernelCompileMessage,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGNode_const_>,TArray<FComputeKernelCompileMessage,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<TObjectKey<UPCGNode_const_>_&&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<TObjectKey<UPCGNode_const_>_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TArray<FComputeKernelCompileMessage,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// GenerateKeyArray<TSizedDefaultAllocator<32>_> @ 1497bbd50

void __thiscall
TMapBase<FPCGKernelPin,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGKernelPin,int,0>_>::
GenerateKeyArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FPCGKernelPin,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGKernelPin,int,0>_>
           *this,TArray<FPCGKernelPin,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar12 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  piVar1 = &param_1->ArrayMax;
  iVar10 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,uVar12,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar3 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar12 = 1;
  iVar13 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)TStack_40.Array;
    }
    uVar4 = *puVar14;
    while (uVar4 == 0) {
      lVar9 = (longlong)iVar10;
      iVar13 = iVar13 + 0x20;
      iVar10 = iVar10 + 1;
      TStack_40.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_1497bbe32;
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
LAB_1497bbe32:
  TStack_40._padding_ = CONCAT44(uVar12,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar13;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar5 = (param_1->AllocatorInstance).Data;
      pFVar11 = (FScriptContainerElement *)
                ((longlong)TStack_40.CurrentBitIndex * 0x1c + *(longlong *)&(this->Pairs).Elements);
      if (((pFVar5 <= pFVar11) && (pFVar11 < pFVar5 + (longlong)*piVar1 * 0x10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar10 = param_1->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x410,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar10 + 1;
      uVar7 = *(undefined8 *)(pFVar11 + 8);
      pFVar5 = (param_1->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
      *(undefined8 *)pFVar5 = *(undefined8 *)pFVar11;
      *(undefined8 *)(pFVar5 + 8) = uVar7;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// Find @ 149802670

int * __thiscall
TMapBase<TTuple<int,TRefCountPtr<FRDGPooledBuffer>_>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,TRefCountPtr<FRDGPooledBuffer>_>,int,0>_>
::Find(TMapBase<TTuple<int,TRefCountPtr<FRDGPooledBuffer>_>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,TRefCountPtr<FRDGPooledBuffer>_>,int,0>_>
       *this,TTuple<int,TRefCountPtr<FRDGPooledBuffer>_> *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  uint *puVar3;
  uint uVar4;
  ForElementType<FSetElementId> FVar5;
  uint *puVar6;
  
  uVar1 = *(uint *)param_1;
  uVar2 = *(ulonglong *)&param_1->field_0x8;
  uVar4 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar4 = *(uint *)((longlong)FVar5 +
                     (ulonglong)
                     ((this->Pairs).HashSize - 1U &
                     ((uVar1 >> 2) + 0x9e3779b9 + (uVar4 >> 0x10 ^ uVar4) + uVar1 * 0x40 ^ uVar1)) *
                     4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar3 = (uint *)((longlong)(int)uVar4 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((*puVar3 == uVar1) && (*(ulonglong *)(puVar3 + 2) == uVar2)) {
          if (uVar4 == 0xffffffff) {
            return (int *)0x0;
          }
          puVar6 = (uint *)0x0;
          if (puVar3 != (uint *)0x0) {
            puVar6 = puVar3 + 4;
          }
          return (int *)puVar6;
        }
        uVar4 = puVar3[6];
      } while (uVar4 != 0xffffffff);
    }
  }
  return (int *)0x0;
}

// Find @ 149802730

int * __thiscall
TMapBase<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int,0>_>
::Find(TMapBase<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int,0>_>
       *this,TTuple<TRefCountPtr<FRDGPooledBuffer>,int> *param_1)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ForElementType<FSetElementId> FVar3;
  ulonglong *puVar4;
  uint uVar5;
  int iVar6;
  
  uVar1 = *(ulonglong *)param_1;
  uVar5 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar6 = *(int *)((longlong)FVar3 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U &
                    (uVar5 * 0x40 + -0x61c88647 + *(int *)&param_1->field_0x8 + (uVar5 >> 2) ^ uVar5
                    )) * 4);
    if (iVar6 != -1) {
      do {
        puVar2 = (ulonglong *)((longlong)iVar6 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((*puVar2 == uVar1) && ((int)puVar2[1] == *(int *)&param_1->field_0x8)) {
          if (iVar6 == -1) {
            return (int *)0x0;
          }
          puVar4 = (ulonglong *)0x0;
          if (puVar2 != (ulonglong *)0x0) {
            puVar4 = puVar2 + 2;
          }
          return (int *)puVar4;
        }
        iVar6 = (int)puVar2[3];
      } while (iVar6 != -1);
    }
  }
  return (int *)0x0;
}

// Find @ 149802810

int * __thiscall
TMapBase<TTuple<TSharedPtr<FPCGProxyForGPUDataCollection_const_,1>,int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<TSharedPtr<FPCGProxyForGPUDataCollection_const_,1>,int>,int,0>_>
::Find(TMapBase<TTuple<TSharedPtr<FPCGProxyForGPUDataCollection_const_,1>,int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<TSharedPtr<FPCGProxyForGPUDataCollection_const_,1>,int>,int,0>_>
       *this,TTuple<TSharedPtr<FPCGProxyForGPUDataCollection_const_,1>,int> *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  
  uVar2 = *(ulonglong *)param_1;
  uVar6 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar7 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U &
                    (uVar6 * 0x40 + -0x61c88647 + *(int *)&param_1->field_0x10 + (uVar6 >> 2) ^
                    uVar6)) * 4);
    if (iVar7 != -1) {
      lVar3 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar3 + (longlong)iVar7 * 0x28;
        if ((*(ulonglong *)(lVar3 + (longlong)iVar7 * 0x28) == uVar2) &&
           (*(int *)(lVar1 + 0x10) == *(int *)&param_1->field_0x10)) {
          if (iVar7 == -1) {
            return (int *)0x0;
          }
          piVar5 = (int *)0x0;
          if (lVar1 != 0) {
            piVar5 = (int *)(lVar1 + 0x18);
          }
          return piVar5;
        }
        iVar7 = *(int *)(lVar1 + 0x20);
      } while (iVar7 != -1);
    }
  }
  return (int *)0x0;
}

// Find @ 1498028f0

int * __thiscall
TMapBase<FPCGKernelPin,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGKernelPin,int,0>_>::
Find(TMapBase<FPCGKernelPin,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGKernelPin,int,0>_>
     *this,FPCGKernelPin *param_1)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  
  uVar1 = ::GetTypeHash(param_1);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar5 + (ulonglong)((this->Pairs).HashSize - 1U & uVar1) * 4);
    if (iVar4 != -1) {
      do {
        piVar3 = (int *)((longlong)iVar4 * 0x1c + *(longlong *)&(this->Pairs).Elements);
        if (((*piVar3 == param_1->KernelIndex) && (*(FName *)(piVar3 + 1) == param_1->PinLabel)) &&
           ((bool)(char)piVar3[3] == param_1->bIsInput)) {
          if (iVar4 == -1) {
            return (int *)0x0;
          }
          piVar2 = (int *)0x0;
          if (piVar3 != (int *)0x0) {
            piVar2 = piVar3 + 4;
          }
          return piVar2;
        }
        iVar4 = piVar3[5];
      } while (iVar4 != -1);
    }
  }
  return (int *)0x0;
}

// Find @ 1498029a0

FPCGMetadataAttributeBase ** __thiscall
TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
::Find(TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  FPCGMetadataAttributeBase **ppFVar5;
  ForElementType<FSetElementId> FVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar4 * 0x18;
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x18) == param_1) {
          ppFVar5 = (FPCGMetadataAttributeBase **)0x0;
          if (lVar1 != 0) {
            ppFVar5 = (FPCGMetadataAttributeBase **)(lVar1 + 8);
          }
          return ppFVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  return (FPCGMetadataAttributeBase **)0x0;
}

// Find @ 149802a40

FPCGDataTypeIdentifier * __thiscall
TMapBase<FName,FPCGDataTypeIdentifier,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGDataTypeIdentifier,0>_>
::Find(TMapBase<FName,FPCGDataTypeIdentifier,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGDataTypeIdentifier,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  FPCGDataTypeIdentifier *pFVar5;
  ForElementType<FSetElementId> FVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar4 * 0x28;
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x28) == param_1) {
          pFVar5 = (FPCGDataTypeIdentifier *)0x0;
          if (lVar1 != 0) {
            pFVar5 = (FPCGDataTypeIdentifier *)(lVar1 + 8);
          }
          return pFVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x20);
      } while (iVar4 != -1);
    }
  }
  return (FPCGDataTypeIdentifier *)0x0;
}

// Emplace<TTuple<int,int>,int_const_&> @ 1498605e0

int * __thiscall
TMapBase<TTuple<int,int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,int,0>_>
::Emplace<TTuple<int,int>,int_const_&>
          (TMapBase<TTuple<int,int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,int,0>_>
           *this,TTuple<int,int> *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  int iVar8;
  FSparseArrayAllocationInfo local_28;
  
  iVar8 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar8 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x14,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar8 = iVar8 + -1;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar1 = *(int *)(lVar3 + 4 + (longlong)iVar4 * 0x14);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar1;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar1 * 0x14) = 0xffffffff;
    }
  }
  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar4);
  if (local_28.Pointer != (TSparseSetElement<TTuple<TTuple<int,int>,int>_> *)0x0) {
    *(TTuple<int,int> *)local_28.Pointer = *param_1;
    *(int *)((longlong)local_28.Pointer + 8) = *param_2;
    *(undefined4 *)((longlong)local_28.Pointer + 0xc) = 0xffffffff;
  }
  uVar2 = *(uint *)local_28.Pointer;
  iVar8 = *(int *)&(this->Pairs).Elements.field_0x8;
  iVar4 = *(int *)&(this->Pairs).Elements.field_0x34;
  uVar7 = uVar2 * 0x40 + -0x61c88647 + *(int *)((longlong)local_28.Pointer + 4) + (uVar2 >> 2) ^
          uVar2;
  if ((iVar8 - iVar4 != 1) && (iVar8 != iVar4)) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar8 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & uVar7) * 4);
    if (iVar8 != -1) {
      lVar3 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar5 = (longlong)iVar8;
        if ((*(uint *)(lVar3 + lVar5 * 0x14) == uVar2) &&
           (*(int *)(lVar3 + 4 + lVar5 * 0x14) == *(int *)((longlong)local_28.Pointer + 4))) {
          if (iVar8 != -1) {
            memmove((void *)(lVar3 + (longlong)iVar8 * 0x14),local_28.Pointer,0xc);
            TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_28.Index,1);
            goto LAB_14986077b;
          }
          break;
        }
        iVar8 = *(int *)(lVar3 + 0xc + lVar5 * 0x14);
      } while (iVar8 != -1);
    }
  }
  TSet<TTuple<TTuple<int,int>,int>,TDefaultMapHashableKeyFuncs<TTuple<int,int>,int,0>,FDefaultSetAllocator>
  ::RehashOrLink(&this->Pairs,uVar7,local_28.Pointer,local_28.Index);
  iVar8 = local_28.Index;
LAB_14986077b:
  return (int *)(*(longlong *)&(this->Pairs).Elements + (longlong)iVar8 * 0x14 + 8);
}

// Find @ 1498b31f0

TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *
__thiscall
TMapBase<TObjectKey<UPCGPolygon2DData>,TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGPolygon2DData>,TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,0>_>
::Find(TMapBase<TObjectKey<UPCGPolygon2DData>,TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGPolygon2DData>,TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,0>_>
       *this,TObjectKey<UPCGPolygon2DData> *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  ForElementType<FSetElementId> FVar5;
  TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  uVar1 = (param_1->ObjectKey).ObjectSerialNumber;
  iVar2 = (param_1->ObjectKey).ObjectIndex;
  uVar8 = iVar2 - uVar1 ^ uVar1 >> 0xd;
  uVar4 = (-0x61c88647 - uVar8) - uVar1 ^ uVar8 << 8;
  uVar7 = (uVar1 - uVar8) - uVar4 ^ uVar4 >> 0xd;
  uVar8 = (uVar8 - uVar7) - uVar4 ^ uVar7 >> 0xc;
  uVar4 = (uVar4 - uVar8) - uVar7 ^ uVar8 << 0x10;
  uVar7 = (uVar7 - uVar4) - uVar8 ^ uVar4 >> 5;
  uVar8 = (uVar8 - uVar7) - uVar4 ^ uVar7 >> 3;
  uVar4 = (uVar4 - uVar8) - uVar7 ^ uVar8 << 10;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar9 = *(int *)((longlong)FVar5 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & ((uVar7 - uVar4) - uVar8 ^ uVar4 >> 0xf)) * 4);
    if (iVar9 != -1) {
      do {
        piVar3 = (int *)((longlong)iVar9 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((*piVar3 == iVar2) && (piVar3[1] == uVar1)) {
          if (iVar9 == -1) {
            return (TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                    *)0x0;
          }
          pTVar6 = (TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                    *)0x0;
          if (piVar3 != (int *)0x0) {
            pTVar6 = (TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                      *)(piVar3 + 2);
          }
          return pTVar6;
        }
        iVar9 = piVar3[6];
      } while (iVar9 != -1);
    }
  }
  return (TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *)0x0;
}

// FindChecked @ 1498b3300

TTuple<int,int> * __thiscall
TMapBase<int,TTuple<int,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,0>_>
::FindChecked(TMapBase<int,TTuple<int,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,0>_>
              *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TTuple<int,int> *pTVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x14;
        if (*(int *)(lVar2 + (longlong)iVar5 * 0x14) == param_1) {
          if (lVar1 != 0) {
            return (TTuple<int,int> *)(lVar1 + 4);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0xc);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar4) {
    return (TTuple<int,int> *)&DAT_00000004;
  }
  pcVar3 = (code *)swi(3);
  pTVar6 = (TTuple<int,int> *)(*pcVar3)();
  return pTVar6;
}

// FindChecked @ 1498b33a0

TTransform<double> * __thiscall
TMapBase<ULandscapeInfo_const_*,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ULandscapeInfo_const_*,UE::Math::TTransform<double>,0>_>
::FindChecked(TMapBase<ULandscapeInfo_const_*,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ULandscapeInfo_const_*,UE::Math::TTransform<double>,0>_>
              *this,ULandscapeInfo *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TTransform<double> *pTVar4;
  ForElementType<FSetElementId> FVar5;
  longlong *plVar6;
  uint uVar7;
  
  uVar7 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
    if (iVar3 != -1) {
      do {
        plVar6 = (longlong *)((longlong)iVar3 * 0x80 + *(longlong *)&(this->Pairs).Elements);
        if ((ULandscapeInfo *)*plVar6 == param_1) {
          if (plVar6 != (longlong *)0x0) {
            return (TTransform<double> *)(plVar6 + 2);
          }
          break;
        }
        iVar3 = (int)plVar6[0xe];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TTransform<double> *)&DAT_00000010;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TTransform<double> *)(*pcVar1)();
  return pTVar4;
}

// Emplace<FString_const_&> @ 1499785e0

FTokenizedGrammar * __thiscall
TMapBase<FString,PCGGrammar::FTokenizedGrammar,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,PCGGrammar::FTokenizedGrammar,0>_>
::Emplace<FString_const_&>
          (TMapBase<FString,PCGGrammar::FTokenizedGrammar,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,PCGGrammar::FTokenizedGrammar,0>_>
           *this,FString *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar5 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar5 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar5 = iVar5 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar1 = *(int *)((longlong)iVar3 * 0x38 + 4 + lVar7);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar1;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x38 + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar3);
  if (local_18.Pointer == (TSparseSetElement<TTuple<FString,PCGGrammar::FTokenizedGrammar>_> *)0x0)
  {
    local_18.Pointer = (TSparseSetElement<TTuple<FString,PCGGrammar::FTokenizedGrammar>_> *)0x0;
  }
  else {
    ::FString::FString(local_18.Pointer,param_1);
    *(undefined8 *)((longlong)local_18.Pointer + 0x10) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x18) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x20) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x28) = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    *(undefined4 *)((longlong)local_18.Pointer + 0x30) = 0xffffffff;
  }
  local_res8[0] = local_18.Index;
  iVar5 = *(int *)&((TSparseSetElement<TTuple<FString,PCGGrammar::FTokenizedGrammar>_> *)
                   local_18.Pointer)->field_0x8 + -1;
  if (*(int *)&((TSparseSetElement<TTuple<FString,PCGGrammar::FTokenizedGrammar>_> *)
               local_18.Pointer)->field_0x8 == 0) {
    pwVar6 = L"";
    iVar5 = 0;
  }
  else {
    pwVar6 = *(wchar_t **)local_18.Pointer;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar6);
  bVar2 = TSet<TTuple<FString,PCGGrammar::FTokenizedGrammar>,TDefaultMapHashableKeyFuncs<FString,PCGGrammar::FTokenizedGrammar,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar4,local_18.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar2) {
    TSet<TTuple<FString,PCGGrammar::FTokenizedGrammar>,TDefaultMapHashableKeyFuncs<FString,PCGGrammar::FTokenizedGrammar,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar4,local_18.Pointer,local_res8[0]);
  }
  return (FTokenizedGrammar *)(*(longlong *)&(this->Pairs).Elements + lVar7 * 0x38 + 0x10);
}

// Emplace<FString_const_&,PCGGrammar::FTokenizedGrammar> @ 149978740

FTokenizedGrammar * __thiscall
TMapBase<FString,PCGGrammar::FTokenizedGrammar,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,PCGGrammar::FTokenizedGrammar,0>_>
::Emplace<FString_const_&,PCGGrammar::FTokenizedGrammar>
          (TMapBase<FString,PCGGrammar::FTokenizedGrammar,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,PCGGrammar::FTokenizedGrammar,0>_>
           *this,FString *param_1,FTokenizedGrammar *param_2)

{
  int iVar1;
  FTokenizedModule *pFVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar6 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar6 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar6 = iVar6 + -1;
    lVar8 = *(longlong *)&(this->Pairs).Elements;
    iVar1 = *(int *)((longlong)iVar4 * 0x38 + 4 + lVar8);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar1;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x38 + lVar8) = 0xffffffff;
    }
  }
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar4);
  if (local_28.Pointer == (TSparseSetElement<TTuple<FString,PCGGrammar::FTokenizedGrammar>_> *)0x0)
  {
    local_28.Pointer = (TSparseSetElement<TTuple<FString,PCGGrammar::FTokenizedGrammar>_> *)0x0;
  }
  else {
    ::FString::FString(local_28.Pointer,param_1);
    *(FModuleDescriptor **)((longlong)local_28.Pointer + 0x10) = (param_2->ParsedGrammar).Object;
    *(TReferenceControllerBase<1> **)((longlong)local_28.Pointer + 0x18) =
         (param_2->ParsedGrammar).SharedReferenceCount.ReferenceController;
    pFVar2 = (param_2->ModuleGrammar).Object;
    (param_2->ParsedGrammar).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (param_2->ParsedGrammar).Object = (FModuleDescriptor *)0x0;
    *(FTokenizedModule **)((longlong)local_28.Pointer + 0x20) = pFVar2;
    *(TReferenceControllerBase<1> **)((longlong)local_28.Pointer + 0x28) =
         (param_2->ModuleGrammar).SharedReferenceCount.ReferenceController;
    (param_2->ModuleGrammar).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (param_2->ModuleGrammar).Object = (FTokenizedModule *)0x0;
    *(undefined4 *)((longlong)local_28.Pointer + 0x30) = 0xffffffff;
  }
  local_res8[0] = local_28.Index;
  iVar6 = *(int *)&((TSparseSetElement<TTuple<FString,PCGGrammar::FTokenizedGrammar>_> *)
                   local_28.Pointer)->field_0x8 + -1;
  if (*(int *)&((TSparseSetElement<TTuple<FString,PCGGrammar::FTokenizedGrammar>_> *)
               local_28.Pointer)->field_0x8 == 0) {
    pwVar7 = L"";
    iVar6 = 0;
  }
  else {
    pwVar7 = *(wchar_t **)local_28.Pointer;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
  bVar3 = TSet<TTuple<FString,PCGGrammar::FTokenizedGrammar>,TDefaultMapHashableKeyFuncs<FString,PCGGrammar::FTokenizedGrammar,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar5,local_28.Pointer,local_res8,(bool *)0x0);
  lVar8 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<FString,PCGGrammar::FTokenizedGrammar>,TDefaultMapHashableKeyFuncs<FString,PCGGrammar::FTokenizedGrammar,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar5,local_28.Pointer,local_res8[0]);
  }
  return (FTokenizedGrammar *)(*(longlong *)&(this->Pairs).Elements + lVar8 * 0x38 + 0x10);
}

// Find @ 1499f2830

TInstancedStruct<FPCGDataTypeInfo> * __thiscall
TMapBase<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>,0>_>
::Find(TMapBase<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>,0>_>
       *this,FPCGDataTypeBaseId *param_1)

{
  UScriptStruct *pUVar1;
  int iVar2;
  ulonglong *puVar3;
  uint uVar4;
  ForElementType<FSetElementId> FVar5;
  TInstancedStruct<FPCGDataTypeInfo> *pTVar6;
  
  pUVar1 = (param_1->Struct).field0_0x0.DebugPtr;
  uVar4 = ((uint)((ulonglong)pUVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar1 >> 4)) *
          -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar5 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
    if (iVar2 != -1) {
      do {
        puVar3 = (ulonglong *)((longlong)iVar2 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((UScriptStruct *)*puVar3 == pUVar1) {
          pTVar6 = (TInstancedStruct<FPCGDataTypeInfo> *)0x0;
          if (puVar3 != (ulonglong *)0x0) {
            pTVar6 = (TInstancedStruct<FPCGDataTypeInfo> *)(puVar3 + 1);
          }
          return pTVar6;
        }
        iVar2 = (int)puVar3[3];
      } while (iVar2 != -1);
    }
  }
  return (TInstancedStruct<FPCGDataTypeInfo> *)0x0;
}

// Find @ 1499f28d0

TTuple<FName,bool> * __thiscall
TMapBase<FName,TTuple<FName,bool>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TTuple<FName,bool>,0>_>
::Find(TMapBase<FName,TTuple<FName,bool>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TTuple<FName,bool>,0>_>
       *this,FName param_1)

{
  uint uVar1;
  TTuple<FName,bool> *pTVar2;
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
        pFVar4 = (FName *)((longlong)(int)uVar1 * 0x1c + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pTVar2 = (TTuple<FName,bool> *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pTVar2 = (TTuple<FName,bool> *)(pFVar4 + 1);
          }
          return pTVar2;
        }
        uVar1 = pFVar4[2].Number;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (TTuple<FName,bool> *)0x0;
}

// Find @ 1499f2970

FPCGAttributePropertyInputSelector * __thiscall
TMapBase<FString,FPCGAttributePropertyInputSelector,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FPCGAttributePropertyInputSelector,0>_>
::Find(TMapBase<FString,FPCGAttributePropertyInputSelector,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FPCGAttributePropertyInputSelector,0>_>
       *this,FString *param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  ForElementType<FSetElementId> FVar7;
  bool bVar8;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar5 = L"";
    iVar4 = 0;
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & uVar3) * 4);
    while (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      iVar1 = (param_1->Data).ArrayNum;
      lVar6 = (longlong)iVar4 * 0x58;
      iVar4 = *(int *)(lVar2 + 8 + lVar6);
      if (iVar4 == iVar1) {
        if (iVar4 < 2) goto LAB_1499f2a39;
        iVar4 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)(lVar2 + lVar6),
                           (wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar8 = iVar4 == 0;
      }
      else {
        bVar8 = iVar4 + iVar1 == 1;
      }
      if (bVar8) {
LAB_1499f2a39:
        lVar6 = *(longlong *)&(this->Pairs).Elements + lVar6;
        if (lVar6 != 0) {
          return (FPCGAttributePropertyInputSelector *)(lVar6 + 0x10);
        }
        return (FPCGAttributePropertyInputSelector *)0x0;
      }
      iVar4 = *(int *)(lVar6 + 0x50 + *(longlong *)&(this->Pairs).Elements);
    }
  }
  return (FPCGAttributePropertyInputSelector *)0x0;
}

// Find @ 1499f2a60

FPCGAttributePropertyOutputSelector * __thiscall
TMapBase<FString,FPCGAttributePropertyOutputSelector,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FPCGAttributePropertyOutputSelector,0>_>
::Find(TMapBase<FString,FPCGAttributePropertyOutputSelector,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FPCGAttributePropertyOutputSelector,0>_>
       *this,FString *param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  ForElementType<FSetElementId> FVar7;
  bool bVar8;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar5 = L"";
    iVar4 = 0;
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & uVar3) * 4);
    while (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      iVar1 = (param_1->Data).ArrayNum;
      lVar6 = (longlong)iVar4 * 0x58;
      iVar4 = *(int *)(lVar2 + 8 + lVar6);
      if (iVar4 == iVar1) {
        if (iVar4 < 2) goto LAB_1499f2b29;
        iVar4 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)(lVar2 + lVar6),
                           (wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar8 = iVar4 == 0;
      }
      else {
        bVar8 = iVar4 + iVar1 == 1;
      }
      if (bVar8) {
LAB_1499f2b29:
        lVar6 = *(longlong *)&(this->Pairs).Elements + lVar6;
        if (lVar6 != 0) {
          return (FPCGAttributePropertyOutputSelector *)(lVar6 + 0x10);
        }
        return (FPCGAttributePropertyOutputSelector *)0x0;
      }
      iVar4 = *(int *)(lVar6 + 0x50 + *(longlong *)&(this->Pairs).Elements);
    }
  }
  return (FPCGAttributePropertyOutputSelector *)0x0;
}

// Find @ 1499f2b50

FName * __thiscall
TMapBase<__int64,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FName,0>_>::Find
          (TMapBase<__int64,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FName,0>_>
           *this,long64 param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  FName *pFVar4;
  ForElementType<FSetElementId> FVar5;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U &
                    (int)((ulonglong)param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(longlong *)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          pFVar4 = (FName *)0x0;
          if (lVar1 != 0) {
            pFVar4 = (FName *)(lVar1 + 8);
          }
          return pFVar4;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (FName *)0x0;
}

// FindChecked @ 1499f2c50

TArray<FPCGSelectGrammarCriterion,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *
__thiscall
TMapBase<FName,TArray<FPCGSelectGrammarCriterion,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FPCGSelectGrammarCriterion,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
::FindChecked(TMapBase<FName,TArray<FPCGSelectGrammarCriterion,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FPCGSelectGrammarCriterion,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
              *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArray<FPCGSelectGrammarCriterion,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  *pTVar4;
  ForElementType<FSetElementId> FVar5;
  FName *pFVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar3 = *(uint *)((longlong)FVar5 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pFVar6 = (FName *)((longlong)(int)uVar3 * 800 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar6 == param_1) {
          if (pFVar6 != (FName *)0x0) {
            return (TArray<FPCGSelectGrammarCriterion,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                    *)(pFVar6 + 1);
          }
          break;
        }
        uVar3 = pFVar6[99].ComparisonIndex.Value;
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TArray<FPCGSelectGrammarCriterion,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
            *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TArray<FPCGSelectGrammarCriterion,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
            *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 1499f2d10

long64 * __thiscall
TMapBase<FName,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,__int64,0>_>::
FindChecked(TMapBase<FName,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,__int64,0>_>
            *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  long64 *plVar7;
  ForElementType<FSetElementId> FVar8;
  
  uVar5 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar8 = (this->Pairs).Hash.SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar6 = *(int *)((longlong)FVar8 +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar5) * 4);
    if (iVar6 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar6 * 0x18;
        if (*(FName *)(lVar2 + (longlong)iVar6 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (long64 *)(lVar1 + 8);
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x10);
      } while (iVar6 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (long64 *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  plVar7 = (long64 *)(*pcVar3)();
  return plVar7;
}

// FindChecked @ 1499f2dd0

FTokenizedGrammar * __thiscall
TMapBase<FString,PCGGrammar::FTokenizedGrammar,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,PCGGrammar::FTokenizedGrammar,0>_>
::FindChecked(TMapBase<FString,PCGGrammar::FTokenizedGrammar,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,PCGGrammar::FTokenizedGrammar,0>_>
              *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FTokenizedGrammar *pFVar5;
  int iVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  
  iVar4 = (param_1->Data).ArrayNum;
  if (iVar4 == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  lVar8 = 0;
  iVar6 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar6 = 0;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
  iVar4 = TSet<TTuple<FString,PCGGrammar::FTokenizedGrammar>,TDefaultMapHashableKeyFuncs<FString,PCGGrammar::FTokenizedGrammar,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar3,param_1);
  if ((iVar4 == -1) ||
     (lVar8 = (longlong)iVar4 * 0x38 + *(longlong *)&(this->Pairs).Elements, lVar8 == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FTokenizedGrammar *)(*pcVar1)();
      return pFVar5;
    }
  }
  return (FTokenizedGrammar *)(lVar8 + 0x10);
}

// FindChecked @ 149c22940

FParseTagResult * __thiscall
TMapBase<FPCGTaggedData_const_*,PCG::Private::FParseTagResult,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGTaggedData_const_*,PCG::Private::FParseTagResult,0>_>
::FindChecked(TMapBase<FPCGTaggedData_const_*,PCG::Private::FParseTagResult,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGTaggedData_const_*,PCG::Private::FParseTagResult,0>_>
              *this,FPCGTaggedData *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FParseTagResult *pFVar4;
  ForElementType<FSetElementId> FVar5;
  longlong *plVar6;
  uint uVar7;
  
  uVar7 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
    if (iVar3 != -1) {
      do {
        plVar6 = (longlong *)((longlong)iVar3 * 0x58 + *(longlong *)&(this->Pairs).Elements);
        if ((FPCGTaggedData *)*plVar6 == param_1) {
          if (plVar6 != (longlong *)0x0) {
            return (FParseTagResult *)(plVar6 + 1);
          }
          break;
        }
        iVar3 = (int)plVar6[10];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FParseTagResult *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FParseTagResult *)(*pcVar1)();
  return pFVar4;
}

// FindOrAddImpl<int_const_&> @ 149c411a0

TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<int,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<int_const_&>
          (TMapBase<int,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  int *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == *param_2) {
          if (piVar2 != (int *)0x0) {
            return (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(piVar2 + 2);
          }
          break;
        }
        iVar1 = piVar2[6];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<int,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<int_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// FindOrAddImpl<TSubclassOf<AActor>_> @ 149c41250

Element * __thiscall
TMapBase<TSubclassOf<AActor>,FPCGDataPartitionBase<FPCGSpawnActorPartitionByAttribute,TSubclassOf<AActor>_>::Element,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<AActor>,FPCGDataPartitionBase<FPCGSpawnActorPartitionByAttribute,TSubclassOf<AActor>_>::Element,0>_>
::FindOrAddImpl<TSubclassOf<AActor>_>
          (TMapBase<TSubclassOf<AActor>,FPCGDataPartitionBase<FPCGSpawnActorPartitionByAttribute,TSubclassOf<AActor>_>::Element,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<AActor>,FPCGDataPartitionBase<FPCGSpawnActorPartitionByAttribute,TSubclassOf<AActor>_>::Element,0>_>
           *this,uint param_1,TSubclassOf<AActor> *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  TSubclassOf<AActor> *local_res20;
  
  iVar1 = TSet<TTuple<TSubclassOf<AActor>,FPCGDataPartitionBase<FPCGSpawnActorPartitionByAttribute,TSubclassOf<AActor>_>::Element>,TDefaultMapHashableKeyFuncs<TSubclassOf<AActor>,FPCGDataPartitionBase<FPCGSpawnActorPartitionByAttribute,TSubclassOf<AActor>_>::Element,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TSubclassOf<AActor>_>(&this->Pairs,param_1,param_2);
  if ((iVar1 == -1) ||
     (lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x28, lVar2 == 0)) {
    local_res20 = param_2;
    TSet<TTuple<TSubclassOf<AActor>,FPCGDataPartitionBase<FPCGSpawnActorPartitionByAttribute,TSubclassOf<AActor>_>::Element>,TDefaultMapHashableKeyFuncs<TSubclassOf<AActor>,FPCGDataPartitionBase<FPCGSpawnActorPartitionByAttribute,TSubclassOf<AActor>_>::Element,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<TSubclassOf<AActor>_&&>_>
              (&this->Pairs,(uint)local_res8,
               (TKeyInitializer<TSubclassOf<AActor>_&&> *)(ulonglong)param_1,(bool *)&local_res20);
    lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
  }
  return (Element *)(lVar2 + 8);
}

// FindOrAddImpl<UPCGGraph_*_const_&> @ 149c9d4a0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

TMap<unsigned_int,FPCGStackContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>_>
* __thiscall
TMapBase<UPCGGraph_*,TMap<unsigned_int,FPCGStackContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGGraph_*,TMap<unsigned_int,FPCGStackContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>_>,0>_>
::FindOrAddImpl<UPCGGraph_*_const_&>
          (TMapBase<UPCGGraph_*,TMap<unsigned_int,FPCGStackContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGGraph_*,TMap<unsigned_int,FPCGStackContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>_>,0>_>
           *this,uint param_1,UPCGGraph **param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  UPCGGraph **local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if ((UPCGGraph *)*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (TMap<unsigned_int,FPCGStackContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>_>
                    *)(plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[0xb];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<UPCGGraph_*,TMap<unsigned_int,FPCGStackContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>_>_>,TDefaultMapHashableKeyFuncs<UPCGGraph_*,TMap<unsigned_int,FPCGStackContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<UPCGGraph_*_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<UPCGGraph_*_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (TMap<unsigned_int,FPCGStackContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>_>
          *)(*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x60);
}

// FindOrAddImpl<UPCGGraph_*_const_&> @ 149c9d550

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

TMap<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>
* __thiscall
TMapBase<UPCGGraph_*,TMap<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGGraph_*,TMap<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>,0>_>
::FindOrAddImpl<UPCGGraph_*_const_&>
          (TMapBase<UPCGGraph_*,TMap<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGGraph_*,TMap<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>,0>_>
           *this,uint param_1,UPCGGraph **param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  UPCGGraph **local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if ((UPCGGraph *)*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (TMap<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>
                    *)(plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[0xb];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<UPCGGraph_*,TMap<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<UPCGGraph_*,TMap<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<UPCGGraph_*_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<UPCGGraph_*_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (TMap<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>
          *)(*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x60);
}

// FindOrAddImpl<unsigned___int64_const_&> @ 149c9d600

FPCGPerExecutionCacheEntry * __thiscall
TMapBase<unsigned___int64,FPCGPerExecutionCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGPerExecutionCacheEntry,0>_>
::FindOrAddImpl<unsigned___int64_const_&>
          (TMapBase<unsigned___int64,FPCGPerExecutionCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGPerExecutionCacheEntry,0>_>
           *this,uint param_1,ulong64 *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  ulong64 *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0xb0 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == *param_2) {
          if (puVar2 != (ulong64 *)0x0) {
            return (FPCGPerExecutionCacheEntry *)(puVar2 + 1);
          }
          break;
        }
        iVar1 = (int)puVar2[0x15];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned___int64,FPCGPerExecutionCacheEntry>,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGPerExecutionCacheEntry,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned___int64_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned___int64_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (FPCGPerExecutionCacheEntry *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0xb0 + 8);
}

// FindOrAddImpl<unsigned___int64_const_&> @ 149c9d6b0

TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> * __thiscall
TMapBase<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>,0>_>
::FindOrAddImpl<unsigned___int64_const_&>
          (TMapBase<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>,0>_>
           *this,uint param_1,ulong64 *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  ulong64 *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == *param_2) {
          if (puVar2 != (ulong64 *)0x0) {
            return (TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                    *)(puVar2 + 1);
          }
          break;
        }
        iVar1 = (int)puVar2[0xb];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned___int64_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned___int64_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x60);
}

// FindOrAddImpl<IPCGElement_const_*> @ 149c9d760

TSet<FPCGCacheEntryKey,DefaultKeyFuncs<FPCGCacheEntryKey,0>,FDefaultSetAllocator> * __thiscall
TMapBase<IPCGElement_const_*,TSet<FPCGCacheEntryKey,DefaultKeyFuncs<FPCGCacheEntryKey,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPCGElement_const_*,TSet<FPCGCacheEntryKey,DefaultKeyFuncs<FPCGCacheEntryKey,0>,FDefaultSetAllocator>,0>_>
::FindOrAddImpl<IPCGElement_const_*>
          (TMapBase<IPCGElement_const_*,TSet<FPCGCacheEntryKey,DefaultKeyFuncs<FPCGCacheEntryKey,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPCGElement_const_*,TSet<FPCGCacheEntryKey,DefaultKeyFuncs<FPCGCacheEntryKey,0>,FDefaultSetAllocator>,0>_>
           *this,uint param_1,IPCGElement **param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  IPCGElement **local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if ((IPCGElement *)*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (TSet<FPCGCacheEntryKey,DefaultKeyFuncs<FPCGCacheEntryKey,0>,FDefaultSetAllocator>
                    *)(plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[0xb];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<IPCGElement_const_*,TSet<FPCGCacheEntryKey,DefaultKeyFuncs<FPCGCacheEntryKey,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<IPCGElement_const_*,TSet<FPCGCacheEntryKey,DefaultKeyFuncs<FPCGCacheEntryKey,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<IPCGElement_const_*_&&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<IPCGElement_const_*_&&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (TSet<FPCGCacheEntryKey,DefaultKeyFuncs<FPCGCacheEntryKey,0>,FDefaultSetAllocator> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x60);
}

// GetKeys<DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator> @ 149c9e750

int __thiscall
TMapBase<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>,0>_>
::GetKeys<DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator>
          (TMapBase<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>,0>_>
           *this,TSet<UPCGComponent_*,DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator>
                 *param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  UPCGComponent *local_res8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  TMapBase<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>,0>_>
  *local_50;
  int iStack_48;
  uint uStack_44;
  undefined1 *local_40;
  undefined4 uStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  
  iVar5 = 0;
  iVar2 = *(int *)&(param_1->Elements).field_0x8;
  iVar7 = *(int *)&(param_1->Elements).field_0x34;
  if (iVar2 != iVar7) {
    TSet<UPCGComponent_*,DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator>::UnhashElements
              (param_1);
    *(undefined4 *)&(param_1->Elements).field_0x8 = 0;
    iVar2 = 0;
    if (*(int *)&(param_1->Elements).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)param_1,0,(int *)&(param_1->Elements).field_0xc);
      iVar2 = *(int *)&(param_1->Elements).field_0x8;
    }
    *(undefined4 *)&(param_1->Elements).field_0x30 = 0xffffffff;
    iVar7 = 0;
    *(undefined4 *)&(param_1->Elements).field_0x34 = 0;
    *(undefined4 *)&(param_1->Elements).field_0x28 = 0;
  }
  uVar6 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  uVar3 = 1;
  if ((uint)(iVar2 - iVar7) < uVar6) {
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar6);
    }
    TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)param_1,uVar6);
    if (uVar6 < 4) {
      iVar2 = 1;
    }
    else {
      uVar1 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar2 = 1 << ((byte)lVar4 & 0x1f);
    }
    if ((param_1->HashSize == 0) || (param_1->HashSize < iVar2)) {
      param_1->HashSize = iVar2;
      TSet<UPCGComponent_*,DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator>::Rehash(param_1)
      ;
    }
  }
  iVar2 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  local_30 = 0;
  iStack_34 = 0;
  if (iVar2 != 0) {
    puVar8 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar8 == (uint *)0x0) {
      puVar8 = (uint *)TStack_70.Array;
    }
    uVar6 = *puVar8;
    while (uVar6 == 0) {
      lVar4 = (longlong)iVar5;
      local_30 = local_30 + 0x20;
      iVar5 = iVar5 + 1;
      iStack_34 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar5) goto LAB_149c9e888;
      uVar6 = puVar8[lVar4 + 1];
    }
    uVar3 = -uVar6 & uVar6;
    uVar1 = (ulonglong)uVar3 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iStack_34 = local_30 + -1 + (int)lVar4;
    if (iVar2 < iStack_34) {
      iStack_34 = iVar2;
    }
  }
LAB_149c9e888:
  uStack_38 = 0xffffffff;
  iStack_2c = TStack_70.CurrentBitIndex;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  TStack_70._28_4_ = TStack_70.CurrentBitIndex;
  TStack_70.BaseBitIndex = local_30;
  local_50 = this;
  iStack_48 = iVar5;
  uStack_44 = uVar3;
  local_40 = (undefined1 *)TStack_70.Array;
  TStack_70._padding_._0_4_ = iVar5;
  TStack_70._padding_._4_4_ = uVar3;
  TStack_70.CurrentBitIndex = iStack_34;
  if (iStack_34 < iVar2) {
    do {
      TSet<UPCGComponent_*,DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator>::
      Emplace<UPCGComponent_*_const_&>
                (param_1,&local_res8,
                 (bool *)((longlong)TStack_70.CurrentBitIndex * 0x20 +
                         *(longlong *)&(this->Pairs).Elements));
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    } while (TStack_70.CurrentBitIndex < (TStack_70.Array)->NumBits);
  }
  return *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
}

// GetKeys<DefaultKeyFuncs<TObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator> @ 149c9e960

int __thiscall
TMapBase<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>_>
::GetKeys<DefaultKeyFuncs<TObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator>
          (TMapBase<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>_>
           *this,TSet<TObjectPtr<UPCGComponent>,DefaultKeyFuncs<TObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator>
                 *param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  TObjectPtr<UPCGComponent> local_res8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  TMapBase<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>_>
  *local_50;
  int iStack_48;
  uint uStack_44;
  undefined1 *local_40;
  undefined4 uStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  
  iVar5 = 0;
  iVar2 = *(int *)&(param_1->Elements).field_0x8;
  iVar7 = *(int *)&(param_1->Elements).field_0x34;
  if (iVar2 != iVar7) {
    TSet<TObjectPtr<UPCGComponent>,DefaultKeyFuncs<TObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator>
    ::UnhashElements(param_1);
    *(undefined4 *)&(param_1->Elements).field_0x8 = 0;
    iVar2 = 0;
    if (*(int *)&(param_1->Elements).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)param_1,0,(int *)&(param_1->Elements).field_0xc);
      iVar2 = *(int *)&(param_1->Elements).field_0x8;
    }
    *(undefined4 *)&(param_1->Elements).field_0x30 = 0xffffffff;
    iVar7 = 0;
    *(undefined4 *)&(param_1->Elements).field_0x34 = 0;
    *(undefined4 *)&(param_1->Elements).field_0x28 = 0;
  }
  uVar6 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  uVar3 = 1;
  if ((uint)(iVar2 - iVar7) < uVar6) {
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar6);
    }
    TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)param_1,uVar6);
    if (uVar6 < 4) {
      iVar2 = 1;
    }
    else {
      uVar1 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar2 = 1 << ((byte)lVar4 & 0x1f);
    }
    if ((param_1->HashSize == 0) || (param_1->HashSize < iVar2)) {
      param_1->HashSize = iVar2;
      TSet<TObjectPtr<UPCGComponent>,DefaultKeyFuncs<TObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator>
      ::Rehash(param_1);
    }
  }
  iVar2 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  local_30 = 0;
  iStack_34 = 0;
  if (iVar2 != 0) {
    puVar8 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar8 == (uint *)0x0) {
      puVar8 = (uint *)TStack_70.Array;
    }
    uVar6 = *puVar8;
    while (uVar6 == 0) {
      lVar4 = (longlong)iVar5;
      local_30 = local_30 + 0x20;
      iVar5 = iVar5 + 1;
      iStack_34 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar5) goto LAB_149c9ea98;
      uVar6 = puVar8[lVar4 + 1];
    }
    uVar3 = -uVar6 & uVar6;
    uVar1 = (ulonglong)uVar3 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iStack_34 = local_30 + -1 + (int)lVar4;
    if (iVar2 < iStack_34) {
      iStack_34 = iVar2;
    }
  }
LAB_149c9ea98:
  uStack_38 = 0xffffffff;
  iStack_2c = TStack_70.CurrentBitIndex;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  TStack_70._28_4_ = TStack_70.CurrentBitIndex;
  TStack_70.BaseBitIndex = local_30;
  local_50 = this;
  iStack_48 = iVar5;
  uStack_44 = uVar3;
  local_40 = (undefined1 *)TStack_70.Array;
  TStack_70._padding_._0_4_ = iVar5;
  TStack_70._padding_._4_4_ = uVar3;
  TStack_70.CurrentBitIndex = iStack_34;
  if (iStack_34 < iVar2) {
    do {
      TSet<TObjectPtr<UPCGComponent>,DefaultKeyFuncs<TObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator>
      ::Emplace<TObjectPtr<UPCGComponent>_const_&>
                (param_1,&local_res8,
                 (bool *)((longlong)TStack_70.CurrentBitIndex * 0x38 +
                         *(longlong *)&(this->Pairs).Elements));
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    } while (TStack_70.CurrentBitIndex < (TStack_70.Array)->NumBits);
  }
  return *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
}

// Find @ 149cc5180

FPCGStackContext * __thiscall
TMapBase<unsigned_int,FPCGStackContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>_>
::Find(TMapBase<unsigned_int,FPCGStackContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>_>
       *this,uint param_1)

{
  uint uVar1;
  uint *puVar2;
  FPCGStackContext *pFVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == param_1) {
          pFVar3 = (FPCGStackContext *)0x0;
          if (puVar2 != (uint *)0x0) {
            pFVar3 = (FPCGStackContext *)(puVar2 + 2);
          }
          return pFVar3;
        }
        uVar1 = puVar2[10];
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FPCGStackContext *)0x0;
}

// Find @ 149cc51f0

TSharedRef<FPCGComponentOctreeID,1> * __thiscall
TMapBase<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>,0>_>
::Find(TMapBase<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_*,TSharedRef<FPCGComponentOctreeID,1>,0>_>
       *this,UPCGComponent *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  TSharedRef<FPCGComponentOctreeID,1> *pTVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((UPCGComponent *)*plVar2 == param_1) {
          pTVar4 = (TSharedRef<FPCGComponentOctreeID,1> *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TSharedRef<FPCGComponentOctreeID,1> *)(plVar2 + 1);
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (TSharedRef<FPCGComponentOctreeID,1> *)0x0;
}

// Find @ 149cc5290

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<UPCGGraph_*,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGGraph_*,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>
::Find(TMapBase<UPCGGraph_*,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGGraph_*,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>
       *this,UPCGGraph *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *pTVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((UPCGGraph *)*plVar2 == param_1) {
          pTVar4 = (TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *)(plVar2 + 1);
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *)0x0;
}

// Find @ 149cc5330

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

TMap<unsigned_int,FPCGStackContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>_>
* __thiscall
TMapBase<UPCGGraph_*,TMap<unsigned_int,FPCGStackContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGGraph_*,TMap<unsigned_int,FPCGStackContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>_>,0>_>
::Find(TMapBase<UPCGGraph_*,TMap<unsigned_int,FPCGStackContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGGraph_*,TMap<unsigned_int,FPCGStackContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>_>,0>_>
       *this,UPCGGraph *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  TMap<unsigned_int,FPCGStackContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>_>
  *pTVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if ((UPCGGraph *)*plVar2 == param_1) {
          pTVar4 = (TMap<unsigned_int,FPCGStackContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>_>
                    *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TMap<unsigned_int,FPCGStackContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>_>
                      *)(plVar2 + 1);
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[0xb];
      } while (iVar1 != -1);
    }
  }
  return (TMap<unsigned_int,FPCGStackContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>_>
          *)0x0;
}

// Find @ 149cc53e0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

TMap<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>
* __thiscall
TMapBase<UPCGGraph_*,TMap<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGGraph_*,TMap<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>,0>_>
::Find(TMapBase<UPCGGraph_*,TMap<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGGraph_*,TMap<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>,0>_>
       *this,UPCGGraph *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  TMap<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if ((UPCGGraph *)*plVar2 == param_1) {
          pTVar4 = (TMap<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>
                    *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TMap<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>
                      *)(plVar2 + 1);
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[0xb];
      } while (iVar1 != -1);
    }
  }
  return (TMap<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>
          *)0x0;
}

// Find @ 149cc5490

TSoftObjectPtr<UPCGComponent> * __thiscall
TMapBase<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>_>
::Find(TMapBase<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>_>
       *this,TObjectPtr<UPCGComponent_const_> param_1)

{
  TObjectPtr<UPCGComponent_const_>_u_0 TVar1;
  int iVar2;
  TSoftObjectPtr<UPCGComponent> *pTVar3;
  uint uVar4;
  longlong lVar5;
  TObjectPtr<UPCGComponent_const_>_u_0 local_res8;
  
                    /* WARNING: Load size is inaccurate */
  TVar1.DebugPtr = *param_1.field0_0x0;
  local_res8 = TVar1;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (TVar1.DebugPtr != (UPCGComponent *)0x0) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar1.DebugPtr != (UPCGComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
  }
  uVar4 = ((uint)((ulonglong)TVar1.DebugPtr >> 0x14) & 0xffff ^
          (uint)((ulonglong)TVar1.DebugPtr >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar2 = TSet<TTuple<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TObjectPtr<UPCGComponent_const_>_>
                    (&this->Pairs,uVar4 >> 0x10 ^ uVar4,
                     (TObjectPtr<UPCGComponent_const_> *)&local_res8.ObjectPtr);
  if (iVar2 != -1) {
    lVar5 = (longlong)iVar2 * 0x38 + *(longlong *)&(this->Pairs).Elements;
    pTVar3 = (TSoftObjectPtr<UPCGComponent> *)0x0;
    if (lVar5 != 0) {
      pTVar3 = (TSoftObjectPtr<UPCGComponent> *)(lVar5 + 8);
    }
    return pTVar3;
  }
  return (TSoftObjectPtr<UPCGComponent> *)0x0;
}

// Find @ 149cc5540

FCachedMemoryRecord * __thiscall
TMapBase<unsigned___int64,FCachedMemoryRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FCachedMemoryRecord,0>_>
::Find(TMapBase<unsigned___int64,FCachedMemoryRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FCachedMemoryRecord,0>_>
       *this,ulong64 param_1)

{
  int iVar1;
  ulong64 *puVar2;
  FCachedMemoryRecord *pFVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == param_1) {
          pFVar3 = (FCachedMemoryRecord *)0x0;
          if (puVar2 != (ulong64 *)0x0) {
            pFVar3 = (FCachedMemoryRecord *)(puVar2 + 1);
          }
          return pFVar3;
        }
        iVar1 = (int)puVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (FCachedMemoryRecord *)0x0;
}

// Find @ 149cc55b0

FOutputDataInfo * __thiscall
TMapBase<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo,0>_>
::Find(TMapBase<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo,0>_>
       *this,ulong64 param_1)

{
  int iVar1;
  FOutputDataInfo *pFVar2;
  ulong64 *puVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        puVar3 = (ulong64 *)((longlong)iVar1 * 0x50 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar3 == param_1) {
          pFVar2 = (FOutputDataInfo *)0x0;
          if (puVar3 != (ulong64 *)0x0) {
            pFVar2 = (FOutputDataInfo *)(puVar3 + 1);
          }
          return pFVar2;
        }
        iVar1 = (int)puVar3[9];
      } while (iVar1 != -1);
    }
  }
  return (FOutputDataInfo *)0x0;
}

// Find @ 149cc5640

FPCGPerExecutionCacheEntry * __thiscall
TMapBase<unsigned___int64,FPCGPerExecutionCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGPerExecutionCacheEntry,0>_>
::Find(TMapBase<unsigned___int64,FPCGPerExecutionCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGPerExecutionCacheEntry,0>_>
       *this,ulong64 param_1)

{
  int iVar1;
  FPCGPerExecutionCacheEntry *pFVar2;
  ulong64 *puVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        puVar3 = (ulong64 *)((longlong)iVar1 * 0xb0 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar3 == param_1) {
          pFVar2 = (FPCGPerExecutionCacheEntry *)0x0;
          if (puVar3 != (ulong64 *)0x0) {
            pFVar2 = (FPCGPerExecutionCacheEntry *)(puVar3 + 1);
          }
          return pFVar2;
        }
        iVar1 = (int)puVar3[0x15];
      } while (iVar1 != -1);
    }
  }
  return (FPCGPerExecutionCacheEntry *)0x0;
}

// Find @ 149cc56d0

TArray<unsigned___int64,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<unsigned___int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>_>
::Find(TMapBase<unsigned___int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>_>
       *this,ulong64 param_1)

{
  int iVar1;
  ulong64 *puVar2;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == param_1) {
          pTVar3 = (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)0x0;
          if (puVar2 != (ulong64 *)0x0) {
            pTVar3 = (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)(puVar2 + 1);
          }
          return pTVar3;
        }
        iVar1 = (int)puVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)0x0;
}

// Find @ 149cc5740

TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> * __thiscall
TMapBase<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>,0>_>
::Find(TMapBase<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>,0>_>
       *this,ulong64 param_1)

{
  int iVar1;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *pTVar2;
  ulong64 *puVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        puVar3 = (ulong64 *)((longlong)iVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar3 == param_1) {
          pTVar2 = (TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                    *)0x0;
          if (puVar3 != (ulong64 *)0x0) {
            pTVar2 = (TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                      *)(puVar3 + 1);
          }
          return pTVar2;
        }
        iVar1 = (int)puVar3[0xb];
      } while (iVar1 != -1);
    }
  }
  return (TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *)0x0;
}

// FindChecked @ 149cc58e0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

FPCGStackContext * __thiscall
TMapBase<UPCGGraph_*,FPCGStackContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGGraph_*,FPCGStackContext,0>_>
::FindChecked(TMapBase<UPCGGraph_*,FPCGStackContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGGraph_*,FPCGStackContext,0>_>
              *this,UPCGGraph *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FPCGStackContext *pFVar4;
  ForElementType<FSetElementId> FVar5;
  longlong *plVar6;
  uint uVar7;
  
  uVar7 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
    if (iVar3 != -1) {
      do {
        plVar6 = (longlong *)((longlong)iVar3 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if ((UPCGGraph *)*plVar6 == param_1) {
          if (plVar6 != (longlong *)0x0) {
            return (FPCGStackContext *)(plVar6 + 1);
          }
          break;
        }
        iVar3 = (int)plVar6[5];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FPCGStackContext *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FPCGStackContext *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 149cc59c0

FOutputDataInfo * __thiscall
TMapBase<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo,0>_>
::FindChecked(TMapBase<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo,0>_>
              *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FOutputDataInfo *pFVar4;
  ulong64 *puVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar3 != -1) {
      do {
        puVar5 = (ulong64 *)((longlong)iVar3 * 0x50 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar5 == param_1) {
          if (puVar5 != (ulong64 *)0x0) {
            return (FOutputDataInfo *)(puVar5 + 1);
          }
          break;
        }
        iVar3 = (int)puVar5[9];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FOutputDataInfo *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FOutputDataInfo *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 149cc5a80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGGraphTask * __thiscall
TMapBase<unsigned___int64,FPCGGraphTask,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGGraphTask,0>_>
::FindChecked(TMapBase<unsigned___int64,FPCGGraphTask,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGGraphTask,0>_>
              *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FPCGGraphTask *pFVar4;
  ulong64 *puVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar3 != -1) {
      do {
        puVar5 = (ulong64 *)((longlong)iVar3 * 0x158 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar5 == param_1) {
          if (puVar5 != (ulong64 *)0x0) {
            return (FPCGGraphTask *)(puVar5 + 1);
          }
          break;
        }
        iVar3 = (int)puVar5[0x2a];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FPCGGraphTask *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FPCGGraphTask *)(*pcVar1)();
  return pFVar4;
}

// Remove @ 149cd6140

int __thiscall
TMapBase<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>_>
::Remove(TMapBase<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>_>
         *this,TObjectPtr<UPCGComponent_const_> param_1)

{
  TObjectPtr<UPCGComponent_const_>_u_0 TVar1;
  int iVar2;
  uint uVar3;
  TObjectPtr<UPCGComponent_const_>_u_0 local_res8;
  
                    /* WARNING: Load size is inaccurate */
  TVar1.DebugPtr = *param_1.field0_0x0;
  local_res8 = TVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (TVar1.DebugPtr != (UPCGComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
  }
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar1.DebugPtr != (UPCGComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
    uVar3 = ((uint)((ulonglong)TVar1.DebugPtr >> 0x14) & 0xffff ^
            (uint)((ulonglong)TVar1.DebugPtr >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    iVar2 = TSet<TTuple<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator>
            ::RemoveImpl<TObjectPtr<UPCGComponent_const_>_>
                      (&this->Pairs,uVar3 >> 0x10 ^ uVar3,
                       (TObjectPtr<UPCGComponent_const_> *)&local_res8.ObjectPtr);
    return iVar2;
  }
  return 0;
}

// Remove @ 149cd61e0

int __thiscall
TMapBase<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,0>_>
::Remove(TMapBase<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,0>_>
         *this,TObjectKey<UPCGComponent> *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ForElementType<FSetElementId> FVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 == *(int *)&(this->Pairs).Elements.field_0x34) {
    return 0;
  }
  uVar1 = (param_1->ObjectKey).ObjectSerialNumber;
  iVar11 = 0;
  iVar2 = (param_1->ObjectKey).ObjectIndex;
  uVar9 = iVar2 - uVar1 ^ uVar1 >> 0xd;
  uVar6 = (-0x61c88647 - uVar9) - uVar1 ^ uVar9 << 8;
  uVar5 = (uVar1 - uVar9) - uVar6 ^ uVar6 >> 0xd;
  uVar10 = (uVar9 - uVar5) - uVar6 ^ uVar5 >> 0xc;
  uVar9 = (uVar6 - uVar10) - uVar5 ^ uVar10 << 0x10;
  uVar6 = (uVar5 - uVar9) - uVar10 ^ uVar9 >> 5;
  uVar10 = (uVar10 - uVar6) - uVar9 ^ uVar6 >> 3;
  uVar5 = uVar10 << 10 ^ (uVar9 - uVar10) - uVar6;
  FVar8 = (this->Pairs).Hash.SecondaryData;
  if (FVar8 == (ForElementType<FSetElementId>)0x0) {
    FVar8 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
  }
  iVar7 = *(int *)((longlong)FVar8 +
                  (((longlong)(int)((uVar6 - uVar5) - uVar10) ^ (ulonglong)(uVar5 >> 0xf)) &
                  (longlong)(this->Pairs).HashSize - 1U) * 4);
  if (iVar7 != -1) {
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    while ((lVar4 = (longlong)iVar7, *(int *)(lVar3 + lVar4 * 0x18) != iVar2 ||
           (*(uint *)(lVar3 + 4 + lVar4 * 0x18) != uVar1))) {
      iVar7 = *(int *)(lVar3 + 0x10 + lVar4 * 0x18);
      if (iVar7 == -1) {
        return 0;
      }
    }
    TSet<TTuple<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator>
    ::RemoveByIndex(&this->Pairs,iVar7);
    iVar11 = 1;
  }
  return iVar11;
}

// Remove @ 149cd6310

int __thiscall
TMapBase<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>,0>_>
::Remove(TMapBase<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>,0>_>
         *this,ulong64 param_1)

{
  longlong lVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  int iVar4;
  
  iVar4 = 0;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 +
                    ((longlong)((int)(param_1 >> 0x20) * 0x17 + (int)param_1) &
                    (longlong)(this->Pairs).HashSize - 1U) * 4);
    iVar4 = 0;
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      while (*(ulong64 *)((longlong)iVar2 * 0x60 + lVar1) != param_1) {
        iVar2 = *(int *)((longlong)iVar2 * 0x60 + 0x58 + lVar1);
        if (iVar2 == -1) {
          return 0;
        }
      }
      TSet<TTuple<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
      ::RemoveByIndex(&this->Pairs,iVar2);
      iVar4 = 1;
    }
  }
  return iVar4;
}

// Find @ 149d4c650

FPCGMetadataDomainID * __thiscall
TMapBase<FPCGMetadataDomainID,FPCGMetadataDomainID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,FPCGMetadataDomainID,0>_>
::Find(TMapBase<FPCGMetadataDomainID,FPCGMetadataDomainID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,FPCGMetadataDomainID,0>_>
       *this,FPCGMetadataDomainID *param_1)

{
  longlong lVar1;
  int iVar2;
  FPCGMetadataDomainID *pFVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = param_1->CustomFlag;
  uVar6 = param_1->Flag - uVar4 ^ uVar4 >> 0xd;
  uVar5 = (-0x61c88647 - uVar6) - uVar4 ^ uVar6 << 8;
  uVar4 = (uVar4 - uVar5) - uVar6 ^ uVar5 >> 0xd;
  uVar6 = (uVar6 - uVar4) - uVar5 ^ uVar4 >> 0xc;
  uVar5 = (uVar5 - uVar6) - uVar4 ^ uVar6 << 0x10;
  uVar4 = (uVar4 - uVar5) - uVar6 ^ uVar5 >> 5;
  uVar6 = (uVar6 - uVar4) - uVar5 ^ uVar4 >> 3;
  uVar5 = (uVar5 - uVar6) - uVar4 ^ uVar6 << 10;
  iVar2 = TSet<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainID>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,FPCGMetadataDomainID,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FPCGMetadataDomainID>
                    (&this->Pairs,(uVar4 - uVar5) - uVar6 ^ uVar5 >> 0xf,param_1);
  if (iVar2 != -1) {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar2 * 0x28;
    pFVar3 = (FPCGMetadataDomainID *)0x0;
    if (lVar1 != 0) {
      pFVar3 = (FPCGMetadataDomainID *)(lVar1 + 0x10);
    }
    return pFVar3;
  }
  return (FPCGMetadataDomainID *)0x0;
}

// Emplace<UPCGComponent_const_*_const_&,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>_> @ 149de3930

TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
* __thiscall
TMapBase<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,0>_>
::
Emplace<UPCGComponent_const_*_const_&,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>_>
          (TMapBase<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,0>_>
           *this,UPCGComponent **param_1,
          TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
          *param_2)

{
  bool bVar1;
  uint uVar2;
  longlong lVar3;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AddUninitialized((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)this,&local_18);
  if (local_18.Pointer ==
      (TSparseSetElement<TTuple<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>_>_>
       *)0x0) {
    local_18.Pointer =
         (TSparseSetElement<TTuple<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>_>_>
          *)0x0;
  }
  else {
    *(UPCGComponent **)local_18.Pointer = *param_1;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x10) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x28) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x30) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x34) = 0x80;
    *(undefined4 *)((longlong)local_18.Pointer + 0x38) = 0xffffffff;
    *(undefined4 *)((longlong)local_18.Pointer + 0x3c) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x48) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x50) = 0;
    TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>_>
              ((TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
                *)((longlong)local_18.Pointer + 8),param_2);
    *(undefined4 *)((longlong)local_18.Pointer + 0x58) = 0xffffffff;
  }
  local_res8[0] = local_18.Index;
  uVar2 = ((uint)(*(ulonglong *)local_18.Pointer >> 0x14) & 0xffff ^
          (uint)(*(ulonglong *)local_18.Pointer >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  bVar1 = TSet<TTuple<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar2,local_18.Pointer,local_res8,(bool *)0x0);
  lVar3 = (longlong)local_res8[0];
  if (!bVar1) {
    TSet<TTuple<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar2,local_18.Pointer,local_res8[0]);
  }
  return (TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
          *)(*(longlong *)&(this->Pairs).Elements + 8 + lVar3 * 0x60);
}

// EmplaceByHash<UPCGComponent_const_*_const_&> @ 149de5ce0

TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
* __thiscall
TMapBase<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,0>_>
::EmplaceByHash<UPCGComponent_const_*_const_&>
          (TMapBase<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,0>_>
           *this,uint param_1,UPCGComponent **param_2)

{
  bool bVar1;
  TKeyInitializer<UPCGComponent_const_*_const_&> local_res8;
  FSparseArrayAllocationInfo local_18;
  
  local_res8.Key = param_2;
  TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AddUninitialized((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)this,&local_18);
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>_>_>
       *)0x0) {
    TKeyInitializer<UPCGComponent_const_*_const_&>::
    operator<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>_>_TTuple<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>_>
              (&local_res8,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x58) = 0xffffffff;
  }
  local_res8.Key._0_4_ = local_18.Index;
  bVar1 = TSet<TTuple<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,(int *)&local_res8,(bool *)0x0)
  ;
  if (!bVar1) {
    TSet<TTuple<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,(int)local_res8.Key);
  }
  return (TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
          *)(*(longlong *)&(this->Pairs).Elements + 8 + (longlong)(int)local_res8.Key * 0x60);
}

// FindOrAddImpl<UPCGBasePointData_*_const_&> @ 149de80f0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<UPCGBasePointData_*_const_&>
          (TMapBase<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,UPCGBasePointData **param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  UPCGBasePointData **local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((UPCGBasePointData *)*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (TArray<int,TSizedDefaultAllocator<32>_> *)(plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<UPCGBasePointData_*_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<UPCGBasePointData_*_const_&> *)(ulonglong)param_1,(bool *)&local_res20
            );
  return (TArray<int,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// FindOrAddImpl<UPCGPointData_*_const_&> @ 149de81a0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<UPCGPointData_*_const_&>
          (TMapBase<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,UPCGPointData **param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  UPCGPointData **local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((UPCGPointData *)*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (TArray<int,TSizedDefaultAllocator<32>_> *)(plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<UPCGPointData_*_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<UPCGPointData_*_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (TArray<int,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// FindOrAddImpl<UPCGComponent_const_*_const_&> @ 149de8250

TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
* __thiscall
TMapBase<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,0>_>
::FindOrAddImpl<UPCGComponent_const_*_const_&>
          (TMapBase<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,0>_>
           *this,uint param_1,UPCGComponent **param_2)

{
  int iVar1;
  longlong *plVar2;
  TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
  *pTVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if ((UPCGComponent *)*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
                    *)(plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[0xb];
      } while (iVar1 != -1);
    }
  }
  pTVar3 = EmplaceByHash<UPCGComponent_const_*_const_&>(this,param_1,param_2);
  return pTVar3;
}

// FindOrAddImpl<TSoftObjectPtr<USkinnedAsset>_const_&> @ 149de82d0

TMap<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
* __thiscall
TMapBase<TSoftObjectPtr<USkinnedAsset>,TMap<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<USkinnedAsset>,TMap<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>,0>_>
::FindOrAddImpl<TSoftObjectPtr<USkinnedAsset>_const_&>
          (TMapBase<TSoftObjectPtr<USkinnedAsset>,TMap<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<USkinnedAsset>,TMap<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>,0>_>
           *this,uint param_1,TSoftObjectPtr<USkinnedAsset> *param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [2];
  TSoftObjectPtr<USkinnedAsset> *local_res20;
  FSoftObjectPath local_70;
  undefined8 local_50;
  FSoftObjectPath local_48;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    while (iVar1 != -1) {
      local_50 = *(undefined8 *)&param_2->SoftObjectPtr;
      FSoftObjectPath::FSoftObjectPath
                (&local_48,(FSoftObjectPath *)&(param_2->SoftObjectPtr).field_0x8);
      lVar3 = (longlong)iVar1 * 0x80;
      FSoftObjectPath::FSoftObjectPath
                (&local_70,(FSoftObjectPath *)(*(longlong *)&(this->Pairs).Elements + lVar3 + 8));
      bVar2 = FSoftObjectPath::operator==(&local_70,&local_48);
      if (local_70.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.SubPathString.Data.AllocatorInstance.Data);
      }
      if (local_48.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.SubPathString.Data.AllocatorInstance.Data);
      }
      if (bVar2) {
        if ((iVar1 != -1) && (lVar3 = *(longlong *)&(this->Pairs).Elements + lVar3, lVar3 != 0)) {
          return (TMap<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                  *)(lVar3 + 0x28);
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0x78 + *(longlong *)&(this->Pairs).Elements);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<TSoftObjectPtr<USkinnedAsset>,TMap<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<USkinnedAsset>,TMap<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<TSoftObjectPtr<USkinnedAsset>_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<TSoftObjectPtr<USkinnedAsset>_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TMap<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
          *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x80 + 0x28);
}

// FindOrAddImpl<TSoftObjectPtr<UStaticMesh>_const_&> @ 149de8420

TMap<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
* __thiscall
TMapBase<TSoftObjectPtr<UStaticMesh>,TMap<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UStaticMesh>,TMap<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>,0>_>
::FindOrAddImpl<TSoftObjectPtr<UStaticMesh>_const_&>
          (TMapBase<TSoftObjectPtr<UStaticMesh>,TMap<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UStaticMesh>,TMap<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>,0>_>
           *this,uint param_1,TSoftObjectPtr<UStaticMesh> *param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [2];
  TSoftObjectPtr<UStaticMesh> *local_res20;
  FSoftObjectPath local_70;
  undefined8 local_50;
  FSoftObjectPath local_48;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    while (iVar1 != -1) {
      local_50 = *(undefined8 *)&param_2->SoftObjectPtr;
      FSoftObjectPath::FSoftObjectPath
                (&local_48,(FSoftObjectPath *)&(param_2->SoftObjectPtr).field_0x8);
      lVar3 = (longlong)iVar1 * 0x80;
      FSoftObjectPath::FSoftObjectPath
                (&local_70,(FSoftObjectPath *)(*(longlong *)&(this->Pairs).Elements + lVar3 + 8));
      bVar2 = FSoftObjectPath::operator==(&local_70,&local_48);
      if (local_70.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.SubPathString.Data.AllocatorInstance.Data);
      }
      if (local_48.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.SubPathString.Data.AllocatorInstance.Data);
      }
      if (bVar2) {
        if ((iVar1 != -1) && (lVar3 = *(longlong *)&(this->Pairs).Elements + lVar3, lVar3 != 0)) {
          return (TMap<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                  *)(lVar3 + 0x28);
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0x78 + *(longlong *)&(this->Pairs).Elements);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<TSoftObjectPtr<UStaticMesh>,TMap<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UStaticMesh>,TMap<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<TSoftObjectPtr<UStaticMesh>_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<TSoftObjectPtr<UStaticMesh>_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TMap<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
          *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x80 + 0x28);
}

// FindOrAddImpl<__int64_const_&> @ 149de8570

int * __thiscall
TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>::
FindOrAddImpl<__int64_const_&>
          (TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
           *this,uint param_1,long64 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  long64 *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x18;
        if (*(longlong *)(lVar1 + (longlong)iVar2 * 0x18) == *param_2) {
          if (lVar3 != 0) goto LAB_149de8602;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>::
  EmplaceByHash<TKeyInitializer<__int64_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<__int64_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18;
LAB_149de8602:
  return (int *)(lVar3 + 8);
}

// GenerateKeyArray<TSizedDefaultAllocator<32>_> @ 149deb0b0

void __thiscall
TMapBase<FPCGGridDescriptor,TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGGridDescriptor,TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>,0>_>
::GenerateKeyArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FPCGGridDescriptor,TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGGridDescriptor,TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>,0>_>
           *this,TArray<FPCGGridDescriptor,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  FScriptContainerElement FVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar12 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  iVar10 = 0;
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,uVar12,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar4 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar12 = 1;
  iVar13 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar4 != 0) {
    puVar14 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)TStack_40.Array;
    }
    uVar5 = *puVar14;
    while (uVar5 == 0) {
      lVar9 = (longlong)iVar10;
      iVar13 = iVar13 + 0x20;
      iVar10 = iVar10 + 1;
      TStack_40.CurrentBitIndex = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_149deb192;
      uVar5 = puVar14[lVar9 + 1];
    }
    uVar12 = -uVar5 & uVar5;
    uVar2 = (ulonglong)uVar12 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar9 + -1 + iVar13;
    if (iVar4 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar4;
    }
  }
LAB_149deb192:
  TStack_40._padding_ = CONCAT44(uVar12,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar13;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar6 = (param_1->AllocatorInstance).Data;
      pFVar11 = (FScriptContainerElement *)
                ((longlong)TStack_40.CurrentBitIndex * 0x70 + *(longlong *)&(this->Pairs).Elements);
      if (((pFVar6 <= pFVar11) && (pFVar11 < pFVar6 + (longlong)*piVar1 * 0x14)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar10 = param_1->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x414,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar10 + 1;
      pFVar6 = (param_1->AllocatorInstance).Data + (longlong)iVar10 * 0x14;
      *(undefined4 *)pFVar6 = *(undefined4 *)pFVar11;
      pFVar6[4] = pFVar11[4];
      pFVar6[5] = pFVar11[5];
      *(undefined4 *)(pFVar6 + 8) = *(undefined4 *)(pFVar11 + 8);
      pFVar6[0x10] = (FScriptContainerElement)0x0;
      FVar3 = pFVar11[0x10];
      pFVar6[0x10] = FVar3;
      if (FVar3 != (FScriptContainerElement)0x0) {
        *(undefined4 *)(pFVar6 + 0xc) = *(undefined4 *)(pFVar11 + 0xc);
      }
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// GetKeys<TSizedDefaultAllocator<32>_> @ 149dedb10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TMapBase<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>_>
::GetKeys<TSizedDefaultAllocator<32>_>
          (TMapBase<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>_>
           *this,TArray<FPCGMetadataDomainID,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  byte *pbVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement FVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  code *pcVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  ForElementType<unsigned_int> FVar23;
  uint *puVar24;
  undefined1 auStackY_1b8 [32];
  uint local_168;
  uint uStack_164;
  uint uStack_154;
  uint uStack_150;
  undefined4 uStack_14c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined4 local_120;
  int local_11c;
  int local_118;
  undefined1 local_114 [12];
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_108;
  TMapBase<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>_>
  *local_e8;
  uint uStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  uint uStack_cc;
  uint local_c8;
  undefined4 uStack_c4;
  undefined4 local_9c;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  ulonglong uVar22;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  piVar1 = &param_1->ArrayMax;
  uVar22 = 0;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&param_1->AllocatorInstance,0,piVar1);
  }
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  uVar17 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  uVar20 = 0;
  if (uVar17 == 0) goto LAB_149dede47;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar17);
  }
  TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar17);
  uVar18 = 1;
  if (3 < uVar17) {
    uVar16 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_120 = (undefined4)lVar6;
    uVar18 = 1 << ((byte)lVar6 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar18 <= (int)local_50)) goto LAB_149dede47;
  local_50 = uVar18;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar18 != 0) {
    uVar17 = uVar18;
    if (uVar18 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar17 = 0;
        goto LAB_149dedc21;
      }
    }
    else {
LAB_149dedc21:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar17,4);
    }
    if (0 < (int)uVar18) {
      uVar21 = (ulonglong)uVar18;
      uVar16 = uVar22;
      do {
        FVar14.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar14.Data = local_58.Data;
        }
        uVar12 = uVar16 & (longlong)(int)uVar18 - 1U;
        uVar16 = uVar16 + 1;
        *(undefined4 *)(FVar14.Data + uVar12 * 4) = 0xffffffff;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
    }
  }
  if (local_50 != 0) {
    local_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_168 = 0;
    uStack_164 = 1;
    uStack_154 = 0;
    uStack_150 = 0;
    uVar16 = uVar22;
    if (local_70 != 0) {
      FVar23 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar23 = local_78;
      }
      uVar17 = *(uint *)FVar23;
      uVar21 = uVar22;
      while (uVar17 == 0) {
        uStack_150 = (int)uVar21 + 0x20;
        uVar21 = (ulonglong)uStack_150;
        iVar10 = (int)uVar16;
        local_168 = iVar10 + 1;
        uVar16 = (ulonglong)local_168;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_168)
        goto LAB_149dedd32;
        uVar17 = ((uint *)((longlong)FVar23 + 4))[iVar10];
      }
      uStack_164 = -uVar17 & uVar17;
      uVar16 = (ulonglong)uStack_164 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      local_11c = (int)lVar6;
      uStack_154 = local_11c + -1 + uStack_150;
      uVar16 = (ulonglong)uStack_154;
      if ((int)local_70 < (int)uStack_154) {
LAB_149dedd32:
        uVar16 = (ulonglong)local_70;
        uStack_154 = local_70;
      }
    }
    local_114._4_8_ = local_98;
    local_108._padding_ = CONCAT44(uStack_164,local_168);
    local_108.CurrentBitIndex = uStack_154;
    local_108.UnvisitedBitMask = 0xffffffff;
    local_108._28_4_ = uStack_14c;
    local_108.BaseBitIndex = uStack_150;
    if ((int)uVar16 < (int)local_70) {
      do {
        pbVar2 = (byte *)(*(longlong *)local_114._4_8_ + (longlong)(int)uVar16 * 0x18);
        uVar17 = *(uint *)(pbVar2 + 4);
        uVar15 = *pbVar2 - uVar17 ^ uVar17 >> 0xd;
        uVar18 = (-0x61c88647 - uVar15) - uVar17 ^ uVar15 << 8;
        uVar19 = (uVar17 - uVar18) - uVar15 ^ uVar18 >> 0xd;
        uVar15 = (uVar15 - uVar19) - uVar18 ^ uVar19 >> 0xc;
        uVar17 = (uVar18 - uVar15) - uVar19 ^ uVar15 << 0x10;
        uVar19 = (uVar19 - uVar17) - uVar15 ^ uVar17 >> 5;
        uVar18 = (uVar15 - uVar19) - uVar17 ^ uVar19 >> 3;
        uVar17 = (uVar17 - uVar18) - uVar19 ^ uVar18 << 10;
        uVar17 = ((uVar19 - uVar17) - uVar18 ^ uVar17 >> 0xf) & local_50 - 1;
        *(uint *)(pbVar2 + 0x14) = uVar17;
        FVar14.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar14.Data = local_58.Data;
        }
        uVar21 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar17;
        *(undefined4 *)(pbVar2 + 0x10) = *(undefined4 *)(FVar14.Data + uVar21 * 4);
        *(int *)(FVar14.Data + uVar21 * 4) = (int)uVar16;
        local_108.UnvisitedBitMask = local_108.UnvisitedBitMask & ~local_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_108);
        uVar16 = (ulonglong)(uint)local_108.CurrentBitIndex;
      } while (local_108.CurrentBitIndex < (local_108.Array)->NumBits);
    }
  }
LAB_149dede47:
  uVar17 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  if (*piVar1 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,uVar17,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar17 = *(uint *)&(this->Pairs).Elements.field_0x28;
  TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar16 = uVar22;
  local_c8 = uVar20;
  uStack_dc = 1;
  if (uVar17 != 0) {
    puVar24 = *(uint **)&(this->Pairs).Elements.field_0x20;
    uVar16 = (ulonglong)uVar17;
    if (puVar24 == (uint *)0x0) {
      puVar24 = (uint *)TStack_140.Array;
    }
    uVar18 = *puVar24;
    uVar21 = uVar22;
    local_c8 = 0;
    uVar20 = 0;
    while (uVar18 == 0) {
      iVar10 = (int)uVar22;
      local_c8 = (int)uVar21 + 0x20;
      uVar21 = (ulonglong)local_c8;
      uVar20 = iVar10 + 1;
      uVar22 = (ulonglong)uVar20;
      if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar20)
      goto LAB_149dedf00;
      uVar18 = puVar24[(longlong)iVar10 + 1];
    }
    uStack_dc = -uVar18 & uVar18;
    uVar22 = (ulonglong)uStack_dc * 2 + 1;
    lVar6 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_118 = (int)lVar6;
    uVar18 = (local_c8 - 1) + local_118;
    if ((int)uVar17 < (int)uVar18) {
      uVar18 = uVar17;
    }
    uVar16 = (ulonglong)uVar18;
  }
LAB_149dedf00:
  uStack_d0 = 0xffffffff;
  uStack_cc = (uint)uVar16;
  uStack_c4 = local_9c;
  TStack_140._padding_ = CONCAT44(uStack_dc,uVar20);
  TStack_140.UnvisitedBitMask = 0xffffffff;
  TStack_140._28_4_ = local_9c;
  TStack_140.BaseBitIndex = local_c8;
  local_e8 = this;
  uStack_e0 = uVar20;
  local_d8 = (undefined1 *)TStack_140.Array;
  TStack_140.CurrentBitIndex = uStack_cc;
  if ((int)uStack_cc < (int)uVar17) {
    do {
      iVar10 = TStack_140.CurrentBitIndex;
      lVar6 = *(longlong *)&(this->Pairs).Elements;
      uVar20 = *(uint *)(lVar6 + 4 + (longlong)(int)uVar16 * 0x28);
      FVar4 = *(FScriptContainerElement *)(lVar6 + (longlong)(int)uVar16 * 0x28);
      uVar18 = (byte)FVar4 - uVar20 ^ uVar20 >> 0xd;
      uVar17 = (-0x61c88647 - uVar18) - uVar20 ^ uVar18 << 8;
      uVar15 = (uVar20 - uVar17) - uVar18 ^ uVar17 >> 0xd;
      uVar18 = (uVar18 - uVar15) - uVar17 ^ uVar15 >> 0xc;
      uVar17 = (uVar17 - uVar18) - uVar15 ^ uVar18 << 0x10;
      uVar15 = (uVar15 - uVar17) - uVar18 ^ uVar17 >> 5;
      uVar18 = (uVar18 - uVar15) - uVar17 ^ uVar15 >> 3;
      uVar17 = (uVar17 - uVar18) - uVar15 ^ uVar18 << 10;
      if (local_98._8_4_ != local_64) {
        FVar14.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar14.Data = local_58.Data;
        }
        iVar11 = *(int *)(FVar14.Data +
                         (ulonglong)(local_50 - 1 & ((uVar15 - uVar17) - uVar18 ^ uVar17 >> 0xf)) *
                         4);
        while (iVar11 != -1) {
          lVar13 = (longlong)iVar11;
          if ((*(FScriptContainerElement *)(local_98._0_8_ + lVar13 * 0x18) == FVar4) &&
             (*(uint *)(local_98._0_8_ + lVar13 * 0x18 + 4) == uVar20)) {
            if (iVar11 != -1) goto LAB_149dee100;
            break;
          }
          iVar11 = *(int *)(local_98._0_8_ + lVar13 * 0x18 + 0x10);
        }
      }
      pFVar3 = (FScriptContainerElement *)(lVar6 + (longlong)TStack_140.CurrentBitIndex * 0x28);
      pFVar5 = (param_1->AllocatorInstance).Data;
      if (((pFVar5 <= pFVar3) && (pFVar3 < pFVar5 + (longlong)*piVar1 * 0x10)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        iVar10 = (*pcVar7)();
        return iVar10;
      }
      iVar11 = param_1->ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x410,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar11 + 1;
      uVar8 = *(undefined8 *)(pFVar3 + 8);
      pFVar5 = (param_1->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
      *(undefined8 *)pFVar5 = *(undefined8 *)pFVar3;
      *(undefined8 *)(pFVar5 + 8) = uVar8;
      TSet<FPCGMetadataDomainID,DefaultKeyFuncs<FPCGMetadataDomainID,0>,FDefaultSetAllocator>::
      Emplace<FPCGMetadataDomainID_const_&>
                ((TSet<FPCGMetadataDomainID,DefaultKeyFuncs<FPCGMetadataDomainID,0>,FDefaultSetAllocator>
                  *)local_98,(FPCGMetadataDomainID *)local_114,
                 (bool *)(*(longlong *)&(this->Pairs).Elements + (longlong)iVar10 * 0x28));
LAB_149dee100:
      TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
      uVar16 = (ulonglong)(uint)TStack_140.CurrentBitIndex;
    } while (TStack_140.CurrentBitIndex < (TStack_140.Array)->NumBits);
  }
  iVar10 = param_1->ArrayNum;
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<FPCGMetadataDomainID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FPCGMetadataDomainID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FPCGMetadataDomainID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return iVar10;
}

// Find @ 149e55b20

TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
* __thiscall
TMapBase<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,0>_>
::Find(TMapBase<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,0>_>
       *this,UPCGComponent *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
  *pTVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if ((UPCGComponent *)*plVar2 == param_1) {
          pTVar4 = (TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
                    *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
                      *)(plVar2 + 1);
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[0xb];
      } while (iVar1 != -1);
    }
  }
  return (TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
          *)0x0;
}

// Find @ 149e55bd0

int * __thiscall
TMapBase<TSoftObjectPtr<UStaticMesh>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UStaticMesh>,int,0>_>
::Find(TMapBase<TSoftObjectPtr<UStaticMesh>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UStaticMesh>,int,0>_>
       *this,TSoftObjectPtr<UStaticMesh_const_> *param_1)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  undefined1 local_58 [24];
  void *local_40;
  undefined1 local_30 [24];
  void *local_18;
  
  local_58._0_8_ = *(undefined8 *)&param_1->SoftObjectPtr;
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)(local_58 + 8),
             (FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8);
  local_30._0_8_ = local_58._0_8_;
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)(local_30 + 8),(FSoftObjectPath *)(local_58 + 8));
  uVar1 = ::GetTypeHash((FSoftObjectPath *)(local_30 + 8));
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  iVar2 = TSet<TTuple<TSoftObjectPtr<UStaticMesh>,int>,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UStaticMesh>,int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TSoftObjectPtr<UStaticMesh_const_>_>
                    (&this->Pairs,uVar1,(TSoftObjectPtr<UStaticMesh_const_> *)local_58);
  if (iVar2 == -1) {
    if (local_40 != (void *)0x0) {
      FMemory::Free(local_40);
    }
    pvVar3 = *(void **)&(param_1->SoftObjectPtr).field_0x18;
  }
  else {
    lVar4 = (longlong)iVar2 * 0x38 + *(longlong *)&(this->Pairs).Elements;
    if (local_40 != (void *)0x0) {
      FMemory::Free(local_40);
    }
    pvVar3 = *(void **)&(param_1->SoftObjectPtr).field_0x18;
    if (lVar4 != 0) {
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      return (int *)(lVar4 + 0x28);
    }
  }
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  return (int *)0x0;
}

// Find @ 149e55cc0

TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>
* __thiscall
TMapBase<FPCGGridDescriptor,TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGGridDescriptor,TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>,0>_>
::Find(TMapBase<FPCGGridDescriptor,TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGGridDescriptor,TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>,0>_>
       *this,FPCGGridDescriptor *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>
  *pTVar5;
  longlong lVar6;
  uint local_18 [4];
  
  if ((param_1->Hash).bIsSet == false) {
    uVar3 = FPCGGridDescriptor::ComputeHash(param_1);
    if ((TOptional<unsigned_int> *)local_18 != &param_1->Hash) {
      (param_1->Hash).TypedValue = uVar3;
      (param_1->Hash).bIsSet = true;
    }
  }
  if ((param_1->Hash).bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>
                *)(*pcVar1)();
      return pTVar5;
    }
  }
  iVar4 = TSet<TTuple<FPCGGridDescriptor,TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>_>,TDefaultMapHashableKeyFuncs<FPCGGridDescriptor,TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FPCGGridDescriptor>(&this->Pairs,(param_1->Hash).TypedValue,param_1);
  if (iVar4 != -1) {
    lVar6 = (longlong)iVar4 * 0x70 + *(longlong *)&(this->Pairs).Elements;
    pTVar5 = (TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>
              *)0x0;
    if (lVar6 != 0) {
      pTVar5 = (TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>
                *)(lVar6 + 0x18);
    }
    return pTVar5;
  }
  return (TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>
          *)0x0;
}

// Find @ 149e55d70

TArrayView<__int64_const_,int> * __thiscall
TMapBase<FPCGMetadataDomainID,TArrayView<__int64_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TArrayView<__int64_const_,int>,0>_>
::Find(TMapBase<FPCGMetadataDomainID,TArrayView<__int64_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TArrayView<__int64_const_,int>,0>_>
       *this,FPCGMetadataDomainID *param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  ForElementType<FSetElementId> FVar5;
  TArrayView<__int64_const_,int> *pTVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  uVar2 = param_1->CustomFlag;
  uVar8 = param_1->Flag - uVar2 ^ uVar2 >> 0xd;
  uVar4 = (-0x61c88647 - uVar8) - uVar2 ^ uVar8 << 8;
  uVar7 = (uVar2 - uVar8) - uVar4 ^ uVar4 >> 0xd;
  uVar8 = (uVar8 - uVar7) - uVar4 ^ uVar7 >> 0xc;
  uVar4 = (uVar4 - uVar8) - uVar7 ^ uVar8 << 0x10;
  uVar7 = (uVar7 - uVar4) - uVar8 ^ uVar4 >> 5;
  uVar8 = (uVar8 - uVar7) - uVar4 ^ uVar7 >> 3;
  uVar4 = (uVar4 - uVar8) - uVar7 ^ uVar8 << 10;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar9 = *(int *)((longlong)FVar5 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & ((uVar7 - uVar4) - uVar8 ^ uVar4 >> 0xf)) * 4);
    if (iVar9 != -1) {
      lVar3 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar3 + (longlong)iVar9 * 0x28;
        if ((*(EPCGMetadataDomainFlag *)(lVar3 + (longlong)iVar9 * 0x28) == param_1->Flag) &&
           (*(uint *)(lVar1 + 4) == uVar2)) {
          if (iVar9 == -1) {
            return (TArrayView<__int64_const_,int> *)0x0;
          }
          pTVar6 = (TArrayView<__int64_const_,int> *)0x0;
          if (lVar1 != 0) {
            pTVar6 = (TArrayView<__int64_const_,int> *)(lVar1 + 0x10);
          }
          return pTVar6;
        }
        iVar9 = *(int *)(lVar1 + 0x20);
      } while (iVar9 != -1);
    }
  }
  return (TArrayView<__int64_const_,int> *)0x0;
}

// Remove @ 149e84df0

int __thiscall
TMapBase<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,0>_>
::Remove(TMapBase<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,0>_>
         *this,UPCGComponent *param_1)

{
  int iVar1;
  uint uVar2;
  UPCGComponent *local_res8 [4];
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    uVar2 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    local_res8[0] = param_1;
    iVar1 = TSet<TTuple<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
            ::RemoveImpl<UPCGComponent_const_*>(&this->Pairs,uVar2 >> 0x10 ^ uVar2,local_res8);
    return iVar1;
  }
  return 0;
}

// FindOrAddImpl<TTuple<unsigned_int,int>_const_&> @ 149ee6dd0

TArray<TSharedPtr<FComputeGraphInstance,1>,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<TTuple<unsigned_int,int>,TArray<TSharedPtr<FComputeGraphInstance,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<unsigned_int,int>,TArray<TSharedPtr<FComputeGraphInstance,1>,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<TTuple<unsigned_int,int>_const_&>
          (TMapBase<TTuple<unsigned_int,int>,TArray<TSharedPtr<FComputeGraphInstance,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<unsigned_int,int>,TArray<TSharedPtr<FComputeGraphInstance,1>,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,TTuple<unsigned_int,int> *param_2)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  TTuple<unsigned_int,int> *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        piVar1 = (int *)((longlong)iVar2 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((*piVar1 == *(int *)param_2) && (piVar1[1] == *(int *)&param_2->field_0x4)) {
          if ((iVar2 != -1) && (piVar1 != (int *)0x0)) {
            return (TArray<TSharedPtr<FComputeGraphInstance,1>,TSizedDefaultAllocator<32>_> *)
                   (piVar1 + 2);
          }
          break;
        }
        iVar2 = piVar1[6];
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<TTuple<unsigned_int,int>,TArray<TSharedPtr<FComputeGraphInstance,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TTuple<unsigned_int,int>,TArray<TSharedPtr<FComputeGraphInstance,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<TTuple<unsigned_int,int>_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<TTuple<unsigned_int,int>_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TArray<TSharedPtr<FComputeGraphInstance,1>,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// Find @ 149efcea0

uint * __thiscall
TMapBase<UPCGNode_const_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGNode_const_*,unsigned_int,0>_>
::Find(TMapBase<UPCGNode_const_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGNode_const_*,unsigned_int,0>_>
       *this,UPCGNode *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  uint *puVar5;
  uint uVar6;
  
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(UPCGNode **)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          puVar5 = (uint *)0x0;
          if (lVar1 != 0) {
            puVar5 = (uint *)(lVar1 + 8);
          }
          return puVar5;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (uint *)0x0;
}

// Find @ 149efcf50

FPCGDataCollection * __thiscall
TMapBase<FString,FPCGDataCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FPCGDataCollection,0>_>
::Find(TMapBase<FString,FPCGDataCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FPCGDataCollection,0>_>
       *this,FString *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  FPCGDataCollection *pFVar6;
  
  iVar3 = (param_1->Data).ArrayNum;
  if (iVar3 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar4 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar4 = 0;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  iVar3 = TSet<TTuple<FString,FPCGDataCollection>,TDefaultMapHashableKeyFuncs<FString,FPCGDataCollection,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar2,param_1);
  if (iVar3 != -1) {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar3 * 0x48;
    pFVar6 = (FPCGDataCollection *)0x0;
    if (lVar1 != 0) {
      pFVar6 = (FPCGDataCollection *)(lVar1 + 0x10);
    }
    return pFVar6;
  }
  return (FPCGDataCollection *)0x0;
}

// FindChecked @ 149efcfe0

int * __thiscall
TMapBase<UPCGData_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGData_const_*,int,0>_>
::FindChecked(TMapBase<UPCGData_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGData_const_*,int,0>_>
              *this,UPCGData *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  ForElementType<FSetElementId> FVar7;
  uint uVar8;
  
  uVar8 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar8 >> 0x10 ^ uVar8)) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(UPCGData **)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (int *)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (int *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  piVar6 = (int *)(*pcVar3)();
  return piVar6;
}

// Emplace<FName_const_&,enum_EPCGDataType> @ 149f21a20

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

FPCGDataTypeIdentifier * __thiscall
TMapBase<FName,FPCGDataTypeIdentifier,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGDataTypeIdentifier,0>_>
::Emplace<FName_const_&,enum_EPCGDataType>
          (TMapBase<FName,FPCGDataTypeIdentifier,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGDataTypeIdentifier,0>_>
           *this,FName *param_1,EPCGDataType *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar7 + 4 + (longlong)iVar5 * 0x28);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar7 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  if (local_28.Pointer != (TSparseSetElement<TTuple<FName,FPCGDataTypeIdentifier>_> *)0x0) {
    *(FName *)local_28.Pointer = *param_1;
    FPCGDataTypeIdentifier::FPCGDataTypeIdentifier
              ((FPCGDataTypeIdentifier *)((longlong)local_28.Pointer + 8),*param_2);
    *(undefined4 *)((longlong)local_28.Pointer + 0x20) = 0xffffffff;
  }
  uVar3 = *(undefined8 *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar6 = uVar6 + (int)((ulonglong)uVar3 >> 0x20);
  bVar4 = TSet<TTuple<FName,FPCGDataTypeIdentifier>,TDefaultMapHashableKeyFuncs<FName,FPCGDataTypeIdentifier,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,local_28.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FName,FPCGDataTypeIdentifier>,TDefaultMapHashableKeyFuncs<FName,FPCGDataTypeIdentifier,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,local_28.Pointer,local_res8[0]);
  }
  return (FPCGDataTypeIdentifier *)(*(longlong *)&(this->Pairs).Elements + lVar7 * 0x28 + 8);
}

// FindOrAddImpl<PCGRuntimeGenChangeDetection::FDetectionInputs_const_&> @ 149f27560

FCachedState * __thiscall
TMapBase<PCGRuntimeGenChangeDetection::FDetectionInputs,PCGRuntimeGenChangeDetection::FDetector::FCachedState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<PCGRuntimeGenChangeDetection::FDetectionInputs,PCGRuntimeGenChangeDetection::FDetector::FCachedState,0>_>
::FindOrAddImpl<PCGRuntimeGenChangeDetection::FDetectionInputs_const_&>
          (TMapBase<PCGRuntimeGenChangeDetection::FDetectionInputs,PCGRuntimeGenChangeDetection::FDetector::FCachedState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<PCGRuntimeGenChangeDetection::FDetectionInputs,PCGRuntimeGenChangeDetection::FDetector::FCachedState,0>_>
           *this,uint param_1,FDetectionInputs *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FDetectionInputs *local_res20;
  
  iVar1 = TSet<TTuple<PCGRuntimeGenChangeDetection::FDetectionInputs,PCGRuntimeGenChangeDetection::FDetector::FCachedState>,TDefaultMapHashableKeyFuncs<PCGRuntimeGenChangeDetection::FDetectionInputs,PCGRuntimeGenChangeDetection::FDetector::FCachedState,0>,FDefaultSetAllocator>
          ::FindIndexByHash<PCGRuntimeGenChangeDetection::FDetectionInputs>
                    (&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0xd0 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (FCachedState *)(lVar2 + 0x80);
  }
  local_res20 = param_2;
  TSet<TTuple<PCGRuntimeGenChangeDetection::FDetectionInputs,PCGRuntimeGenChangeDetection::FDetector::FCachedState>,TDefaultMapHashableKeyFuncs<PCGRuntimeGenChangeDetection::FDetectionInputs,PCGRuntimeGenChangeDetection::FDetector::FCachedState,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<PCGRuntimeGenChangeDetection::FDetectionInputs_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<PCGRuntimeGenChangeDetection::FDetectionInputs_const_&> *)
             (ulonglong)param_1,(bool *)&local_res20);
  return (FCachedState *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0xd0 + 0x80);
}

// FindOrAddImpl<TSoftObjectPtr<URuntimeVirtualTexture>_> @ 149f27600

TArray<URuntimeVirtualTextureComponent_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<TSoftObjectPtr<URuntimeVirtualTexture>,TArray<URuntimeVirtualTextureComponent_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<URuntimeVirtualTexture>,TArray<URuntimeVirtualTextureComponent_*,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<TSoftObjectPtr<URuntimeVirtualTexture>_>
          (TMapBase<TSoftObjectPtr<URuntimeVirtualTexture>,TArray<URuntimeVirtualTextureComponent_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<URuntimeVirtualTexture>,TArray<URuntimeVirtualTextureComponent_*,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,TSoftObjectPtr<URuntimeVirtualTexture> *param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [2];
  TSoftObjectPtr<URuntimeVirtualTexture> *local_res20;
  FSoftObjectPath local_70;
  undefined8 local_50;
  FSoftObjectPath local_48;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    while (iVar1 != -1) {
      local_50 = *(undefined8 *)&param_2->SoftObjectPtr;
      FSoftObjectPath::FSoftObjectPath
                (&local_48,(FSoftObjectPath *)&(param_2->SoftObjectPtr).field_0x8);
      lVar3 = (longlong)iVar1 * 0x40;
      FSoftObjectPath::FSoftObjectPath
                (&local_70,(FSoftObjectPath *)(*(longlong *)&(this->Pairs).Elements + lVar3 + 8));
      bVar2 = FSoftObjectPath::operator==(&local_70,&local_48);
      if (local_70.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.SubPathString.Data.AllocatorInstance.Data);
      }
      if (local_48.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.SubPathString.Data.AllocatorInstance.Data);
      }
      if (bVar2) {
        if ((iVar1 != -1) && (lVar3 = *(longlong *)&(this->Pairs).Elements + lVar3, lVar3 != 0)) {
          return (TArray<URuntimeVirtualTextureComponent_*,TSizedDefaultAllocator<32>_> *)
                 (lVar3 + 0x28);
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0x38 + *(longlong *)&(this->Pairs).Elements);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<TSoftObjectPtr<URuntimeVirtualTexture>,TArray<URuntimeVirtualTextureComponent_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<URuntimeVirtualTexture>,TArray<URuntimeVirtualTextureComponent_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<TSoftObjectPtr<URuntimeVirtualTexture>_&&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<TSoftObjectPtr<URuntimeVirtualTexture>_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TArray<URuntimeVirtualTextureComponent_*,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x40 + 0x28);
}

// GetKeys<TSizedDefaultAllocator<32>_> @ 149f28e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TMapBase<PCGRuntimeGenChangeDetection::FDetectionInputs,PCGRuntimeGenChangeDetection::FDetector::FCachedState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<PCGRuntimeGenChangeDetection::FDetectionInputs,PCGRuntimeGenChangeDetection::FDetector::FCachedState,0>_>
::GetKeys<TSizedDefaultAllocator<32>_>
          (TMapBase<PCGRuntimeGenChangeDetection::FDetectionInputs,PCGRuntimeGenChangeDetection::FDetector::FCachedState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<PCGRuntimeGenChangeDetection::FDetectionInputs,PCGRuntimeGenChangeDetection::FDetector::FCachedState,0>_>
           *this,TArray<PCGRuntimeGenChangeDetection::FDetectionInputs,TSizedDefaultAllocator<32>_>
                 *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  FDetectionInputs *pFVar17;
  uint uVar18;
  int iVar19;
  ulonglong uVar20;
  ForElementType<unsigned_int> FVar21;
  uint *puVar22;
  undefined1 auStackY_1c8 [32];
  uint local_178;
  uint uStack_174;
  uint uStack_164;
  uint uStack_160;
  undefined4 uStack_15c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined4 local_128;
  int local_124;
  int local_120;
  undefined1 local_11c [12];
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_110;
  TMapBase<PCGRuntimeGenChangeDetection::FDetectionInputs,PCGRuntimeGenChangeDetection::FDetector::FCachedState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<PCGRuntimeGenChangeDetection::FDetectionInputs,PCGRuntimeGenChangeDetection::FDetector::FCachedState,0>_>
  *local_f0;
  int iStack_e8;
  uint uStack_e4;
  undefined1 *local_e0;
  undefined4 uStack_d8;
  int iStack_d4;
  int local_d0;
  undefined4 uStack_cc;
  undefined4 local_a4;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  piVar1 = &param_1->ArrayMax;
  uVar9 = 0;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,8,0,&param_1->AllocatorInstance,0,piVar1);
  }
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  uVar13 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if (uVar13 == 0) goto LAB_149f29275;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar13);
  }
  TSparseArrayBase<136,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<136,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar13);
  uVar14 = 1;
  if (3 < uVar13) {
    uVar12 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_128 = (undefined4)lVar10;
    uVar14 = 1 << ((byte)lVar10 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar14 <= (int)local_50)) goto LAB_149f29275;
  local_50 = uVar14;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar14 != 0) {
    uVar13 = uVar14;
    if (uVar14 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar13 = 0;
        goto LAB_149f28f9c;
      }
    }
    else {
LAB_149f28f9c:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar13,4);
    }
    if (0 < (int)uVar14) {
      uVar20 = (ulonglong)uVar14;
      uVar12 = uVar9;
      do {
        FVar8.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar8.Data = local_58.Data;
        }
        uVar7 = uVar12 & (longlong)(int)uVar14 - 1U;
        uVar12 = uVar12 + 1;
        *(undefined4 *)(FVar8.Data + uVar7 * 4) = 0xffffffff;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
  }
  if (local_50 != 0) {
    local_110.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_178 = 0;
    uStack_174 = 1;
    uStack_164 = 0;
    uStack_160 = 0;
    if (local_70 != 0) {
      FVar21 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar21 = local_78;
      }
      uVar13 = *(uint *)FVar21;
      uVar12 = uVar9;
      while (uVar13 == 0) {
        uStack_160 = (int)uVar12 + 0x20;
        uVar12 = (ulonglong)uStack_160;
        iVar19 = (int)uVar9;
        local_178 = iVar19 + 1;
        uVar9 = (ulonglong)local_178;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_178)
        goto LAB_149f29092;
        uVar13 = ((uint *)((longlong)FVar21 + 4))[iVar19];
      }
      uStack_174 = -uVar13 & uVar13;
      uVar9 = (ulonglong)uStack_174 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_124 = (int)lVar10;
      uStack_164 = local_124 + -1 + uStack_160;
      uVar9 = (ulonglong)uStack_164;
      if ((int)local_70 < (int)uStack_164) {
LAB_149f29092:
        uVar9 = (ulonglong)local_70;
        uStack_164 = local_70;
      }
    }
    local_11c._4_8_ = local_98;
    local_110._padding_ = CONCAT44(uStack_174,local_178);
    local_110.CurrentBitIndex = uStack_164;
    local_110.UnvisitedBitMask = 0xffffffff;
    local_110._28_4_ = uStack_15c;
    local_110.BaseBitIndex = uStack_160;
    if ((int)uVar9 < (int)local_70) {
      do {
        lVar10 = *(longlong *)local_11c._4_8_;
        lVar16 = (longlong)(int)uVar9 * 0x88;
        uVar13 = *(uint *)(lVar16 + 4 + lVar10);
        uVar11 = *(int *)(lVar16 + lVar10) - uVar13 ^ uVar13 >> 0xd;
        uVar14 = (-0x61c88647 - uVar11) - uVar13 ^ uVar11 << 8;
        uVar18 = (uVar13 - uVar14) - uVar11 ^ uVar14 >> 0xd;
        uVar11 = (uVar11 - uVar18) - uVar14 ^ uVar18 >> 0xc;
        uVar13 = (uVar14 - uVar11) - uVar18 ^ uVar11 << 0x10;
        uVar18 = (uVar18 - uVar13) - uVar11 ^ uVar13 >> 5;
        uVar14 = (uVar11 - uVar18) - uVar13 ^ uVar18 >> 3;
        uVar13 = (uVar13 - uVar14) - uVar18 ^ uVar14 << 10;
        uVar14 = (uVar18 - uVar13) - uVar14 ^ uVar13 >> 0xf;
        uVar12 = *(ulonglong *)(lVar16 + 8 + lVar10);
        uVar13 = ((uint)(uVar12 >> 0x14) & 0xffff ^ (uint)(uVar12 >> 4)) * -0x7a143595;
        uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
        uVar14 = (uVar14 >> 2) + (uVar13 >> 0x10 ^ uVar13) + uVar14 * 0x40 + -0x61c88647 ^ uVar14;
        uVar13 = ::GetTypeHash((FPCGRuntimeGenerationRadii *)(lVar10 + 0x10 + lVar16));
        uVar14 = uVar14 * 0x40 + (uVar14 >> 2) + 0x9e3779b9 + uVar13 ^ uVar14;
        uVar14 = uVar14 * 0x40 + *(int *)(lVar16 + 0x70 + lVar10) + (uVar14 >> 2) + 0x9e3779b9 ^
                 uVar14;
        uVar14 = (uVar14 >> 2) + 0x9e3779b9 +
                 (uint)*(byte *)(lVar16 + 0x74 + lVar10) + uVar14 * 0x40 ^ uVar14;
        uVar13 = (uVar14 * 0x40 + (uVar14 >> 2) + 0x9e3779b9 + *(int *)(lVar16 + 0x78 + lVar10) ^
                 uVar14) & local_50 - 1;
        *(uint *)(lVar16 + 0x84 + lVar10) = uVar13;
        FVar8.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar8.Data = local_58.Data;
        }
        uVar12 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar13;
        *(undefined4 *)(lVar16 + 0x80 + lVar10) = *(undefined4 *)(FVar8.Data + uVar12 * 4);
        *(int *)(FVar8.Data + uVar12 * 4) = (int)uVar9;
        local_110.UnvisitedBitMask = local_110.UnvisitedBitMask & ~local_110._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_110);
        uVar9 = (ulonglong)(uint)local_110.CurrentBitIndex;
      } while (local_110.CurrentBitIndex < (local_110.Array)->NumBits);
    }
  }
LAB_149f29275:
  iVar19 = 0;
  uVar13 = 1;
  uVar14 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  if (*piVar1 < (int)uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,8,uVar14,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  TStack_148.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  iVar2 = *(int *)&(this->Pairs).Elements.field_0x28;
  local_d0 = iVar19;
  iStack_d4 = 0;
  if (iVar2 != 0) {
    puVar22 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)TStack_148.Array;
    }
    uVar14 = *puVar22;
    while (uVar14 == 0) {
      lVar10 = (longlong)iVar19;
      local_d0 = local_d0 + 0x20;
      iVar19 = iVar19 + 1;
      iStack_d4 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_149f2931d;
      uVar14 = puVar22[lVar10 + 1];
    }
    uVar13 = -uVar14 & uVar14;
    uVar9 = (ulonglong)uVar13 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_120 = (int)lVar10;
    iStack_d4 = local_d0 + -1 + local_120;
    if (iVar2 < iStack_d4) {
      iStack_d4 = iVar2;
    }
  }
LAB_149f2931d:
  uStack_d8 = 0xffffffff;
  uStack_cc = local_a4;
  TStack_148._padding_ = CONCAT44(uVar13,iVar19);
  TStack_148.UnvisitedBitMask = 0xffffffff;
  TStack_148._28_4_ = local_a4;
  TStack_148.BaseBitIndex = local_d0;
  local_f0 = this;
  iStack_e8 = iVar19;
  uStack_e4 = uVar13;
  local_e0 = (undefined1 *)TStack_148.Array;
  TStack_148.CurrentBitIndex = iStack_d4;
  if (iStack_d4 < iVar2) {
    do {
      lVar10 = (longlong)TStack_148.CurrentBitIndex;
      pFVar17 = (FDetectionInputs *)(*(longlong *)&(this->Pairs).Elements + lVar10 * 0xd0);
      uVar13 = *(uint *)&pFVar17->field_0x4;
      uVar11 = *(int *)pFVar17 - uVar13 ^ uVar13 >> 0xd;
      uVar14 = (-0x61c88647 - uVar11) - uVar13 ^ uVar11 << 8;
      uVar18 = (uVar13 - uVar11) - uVar14 ^ uVar14 >> 0xd;
      uVar11 = (uVar11 - uVar18) - uVar14 ^ uVar18 >> 0xc;
      uVar13 = (uVar14 - uVar11) - uVar18 ^ uVar11 << 0x10;
      uVar18 = (uVar18 - uVar13) - uVar11 ^ uVar13 >> 5;
      uVar14 = (uVar11 - uVar18) - uVar13 ^ uVar18 >> 3;
      uVar13 = (uVar13 - uVar14) - uVar18 ^ uVar14 << 10;
      uVar14 = (uVar18 - uVar13) - uVar14 ^ uVar13 >> 0xf;
      uVar13 = ((uint)(*(ulonglong *)&pFVar17->field_0x8 >> 0x14) & 0xffff ^
               (uint)(*(ulonglong *)&pFVar17->field_0x8 >> 4)) * -0x7a143595;
      uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
      uVar14 = (uVar14 >> 2) + (uVar13 >> 0x10 ^ uVar13) + uVar14 * 0x40 + -0x61c88647 ^ uVar14;
      uVar13 = ::GetTypeHash((FPCGRuntimeGenerationRadii *)&pFVar17->field_0x10);
      uVar14 = uVar14 * 0x40 + (uVar14 >> 2) + 0x9e3779b9 + uVar13 ^ uVar14;
      uVar14 = uVar14 * 0x40 + *(int *)&pFVar17->field_0x70 + (uVar14 >> 2) + 0x9e3779b9 ^ uVar14;
      uVar14 = (uVar14 >> 2) + 0x9e3779b9 + (uint)(byte)pFVar17->field_0x74 + uVar14 * 0x40 ^ uVar14
      ;
      iVar19 = TSet<PCGRuntimeGenChangeDetection::FDetectionInputs,DefaultKeyFuncs<PCGRuntimeGenChangeDetection::FDetectionInputs,0>,FDefaultSetAllocator>
               ::FindIndexByHash<PCGRuntimeGenChangeDetection::FDetectionInputs>
                         ((TSet<PCGRuntimeGenChangeDetection::FDetectionInputs,DefaultKeyFuncs<PCGRuntimeGenChangeDetection::FDetectionInputs,0>,FDefaultSetAllocator>
                           *)local_98,
                          (uVar14 >> 2) + 0x9e3779b9 + *(int *)&pFVar17->field_0x78 + uVar14 * 0x40
                          ^ uVar14,pFVar17);
      if (iVar19 == -1) {
        pFVar3 = (param_1->AllocatorInstance).Data;
        pFVar15 = (FScriptContainerElement *)(*(longlong *)&(this->Pairs).Elements + lVar10 * 0xd0);
        if (((pFVar3 <= pFVar15) && (pFVar15 < pFVar3 + (longlong)*piVar1 * 0x80)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          iVar19 = (*pcVar4)();
          return iVar19;
        }
        iVar19 = param_1->ArrayNum;
        if (iVar19 == *piVar1) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x880,&param_1->AllocatorInstance,piVar1);
        }
        param_1->ArrayNum = iVar19 + 1;
        uVar5 = *(undefined8 *)(pFVar15 + 8);
        pFVar3 = (param_1->AllocatorInstance).Data;
        lVar10 = (longlong)iVar19 * 0x80;
        *(undefined8 *)(pFVar3 + lVar10) = *(undefined8 *)pFVar15;
        *(undefined8 *)(pFVar3 + lVar10 + 8) = uVar5;
        uVar5 = *(undefined8 *)(pFVar15 + 0x18);
        *(undefined8 *)(pFVar3 + lVar10 + 0x10) = *(undefined8 *)(pFVar15 + 0x10);
        *(undefined8 *)(pFVar3 + lVar10 + 0x10 + 8) = uVar5;
        uVar5 = *(undefined8 *)(pFVar15 + 0x28);
        *(undefined8 *)(pFVar3 + lVar10 + 0x20) = *(undefined8 *)(pFVar15 + 0x20);
        *(undefined8 *)(pFVar3 + lVar10 + 0x20 + 8) = uVar5;
        uVar5 = *(undefined8 *)(pFVar15 + 0x38);
        *(undefined8 *)(pFVar3 + lVar10 + 0x30) = *(undefined8 *)(pFVar15 + 0x30);
        *(undefined8 *)(pFVar3 + lVar10 + 0x30 + 8) = uVar5;
        uVar5 = *(undefined8 *)(pFVar15 + 0x48);
        *(undefined8 *)(pFVar3 + lVar10 + 0x40) = *(undefined8 *)(pFVar15 + 0x40);
        *(undefined8 *)(pFVar3 + lVar10 + 0x40 + 8) = uVar5;
        uVar5 = *(undefined8 *)(pFVar15 + 0x58);
        *(undefined8 *)(pFVar3 + lVar10 + 0x50) = *(undefined8 *)(pFVar15 + 0x50);
        *(undefined8 *)(pFVar3 + lVar10 + 0x50 + 8) = uVar5;
        uVar5 = *(undefined8 *)(pFVar15 + 0x68);
        *(undefined8 *)(pFVar3 + lVar10 + 0x60) = *(undefined8 *)(pFVar15 + 0x60);
        *(undefined8 *)(pFVar3 + lVar10 + 0x60 + 8) = uVar5;
        uVar5 = *(undefined8 *)(pFVar15 + 0x78);
        *(undefined8 *)(pFVar3 + lVar10 + 0x70) = *(undefined8 *)(pFVar15 + 0x70);
        *(undefined8 *)(pFVar3 + lVar10 + 0x70 + 8) = uVar5;
        TSet<PCGRuntimeGenChangeDetection::FDetectionInputs,DefaultKeyFuncs<PCGRuntimeGenChangeDetection::FDetectionInputs,0>,FDefaultSetAllocator>
        ::Emplace<PCGRuntimeGenChangeDetection::FDetectionInputs_const_&>
                  ((TSet<PCGRuntimeGenChangeDetection::FDetectionInputs,DefaultKeyFuncs<PCGRuntimeGenChangeDetection::FDetectionInputs,0>,FDefaultSetAllocator>
                    *)local_98,(FDetectionInputs *)local_11c,
                   (bool *)((longlong)TStack_148.CurrentBitIndex * 0xd0 +
                           *(longlong *)&(this->Pairs).Elements));
      }
      TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
    } while (TStack_148.CurrentBitIndex < (TStack_148.Array)->NumBits);
  }
  iVar19 = param_1->ArrayNum;
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<PCGRuntimeGenChangeDetection::FDetectionInputs>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<PCGRuntimeGenChangeDetection::FDetectionInputs>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<PCGRuntimeGenChangeDetection::FDetectionInputs>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return iVar19;
}

// Find @ 149f44870

TScriptInterface<IPCGGenSourceBase> * __thiscall
TMapBase<FName,TScriptInterface<IPCGGenSourceBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TScriptInterface<IPCGGenSourceBase>,0>_>
::Find(TMapBase<FName,TScriptInterface<IPCGGenSourceBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TScriptInterface<IPCGGenSourceBase>,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  TScriptInterface<IPCGGenSourceBase> *pTVar4;
  
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
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == param_1) {
          pTVar4 = (TScriptInterface<IPCGGenSourceBase> *)0x0;
          if (pFVar2 != (FName *)0x0) {
            pTVar4 = (TScriptInterface<IPCGGenSourceBase> *)(pFVar2 + 1);
          }
          return pTVar4;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (TScriptInterface<IPCGGenSourceBase> *)0x0;
}

// Find @ 149f44910

long64 * __thiscall
TMapBase<FName,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,__int64,0>_>::Find
          (TMapBase<FName,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,__int64,0>_>
           *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  long64 *plVar5;
  ForElementType<FSetElementId> FVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar4 * 0x18;
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x18) == param_1) {
          plVar5 = (long64 *)0x0;
          if (lVar1 != 0) {
            plVar5 = (long64 *)(lVar1 + 8);
          }
          return plVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  return (long64 *)0x0;
}

// FindChecked @ 149f449b0

Edge * __thiscall
TMapBase<int,enum_PCGSpatialAlgo::MarchingSquaresAlgo::Edge,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,enum_PCGSpatialAlgo::MarchingSquaresAlgo::Edge,0>_>
::FindChecked(void *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  Edge *pEVar4;
  int *piVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar6 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x10 + *(longlong *)this);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (Edge *)(piVar5 + 1);
          }
          break;
        }
        iVar3 = piVar5[2];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return &DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  pEVar4 = (Edge *)(*pcVar1)();
  return pEVar4;
}

// FindChecked @ 149f44a50

int * __thiscall
TMapBase<FPCGPoint_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGPoint_const_*,int,0>_>
::FindChecked(TMapBase<FPCGPoint_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGPoint_const_*,int,0>_>
              *this,FPCGPoint *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  ForElementType<FSetElementId> FVar7;
  uint uVar8;
  
  uVar8 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar8 >> 0x10 ^ uVar8)) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(FPCGPoint **)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (int *)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (int *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  piVar6 = (int *)(*pcVar3)();
  return piVar6;
}

// FindKey @ 149f44b20

/* WARNING: Type propagation algorithm not settling */

FName * __thiscall
TMapBase<FName,TScriptInterface<IPCGGenSourceBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TScriptInterface<IPCGGenSourceBase>,0>_>
::FindKey(TMapBase<FName,TScriptInterface<IPCGGenSourceBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TScriptInterface<IPCGGenSourceBase>,0>_>
          *this,TScriptInterface<IPCGGenSourceBase> *param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint *puVar8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  TMapBase<FName,TScriptInterface<IPCGGenSourceBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TScriptInterface<IPCGGenSourceBase>,0>_>
  *local_40;
  int iStack_38;
  uint uStack_34;
  undefined1 *local_30;
  undefined4 uStack_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  
  iVar2 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  iStack_38 = 0;
  local_20 = 0;
  uStack_34 = 1;
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
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_38) goto LAB_149f44bb9;
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
LAB_149f44bb9:
  uStack_28 = 0xffffffff;
  iStack_1c = TStack_60.CurrentBitIndex;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._28_4_ = TStack_60.CurrentBitIndex;
  TStack_60.BaseBitIndex = local_20;
  local_40 = this;
  local_30 = (undefined1 *)TStack_60.Array;
  TStack_60._padding_._0_4_ = iStack_38;
  TStack_60._padding_._4_4_ = uStack_34;
  TStack_60.CurrentBitIndex = iStack_24;
  if (iStack_24 < iVar2) {
    do {
      lVar6 = *(longlong *)&(this->Pairs).Elements;
      lVar4 = *(longlong *)((longlong)TStack_60.CurrentBitIndex * 0x20 + 8 + lVar6);
      if (lVar4 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = *(longlong *)((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x10 + lVar6);
      }
      if (*(longlong *)param_1 == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = *(longlong *)&param_1->field_0x8;
      }
      if ((lVar5 == lVar7) && (lVar4 == *(longlong *)param_1)) {
        return (FName *)((longlong)TStack_60.CurrentBitIndex * 0x20 + lVar6);
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  return (FName *)0x0;
}

// Emplace<__int64_const_&,int_const_&> @ 149f8c7d0

int * __thiscall
TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>::
Emplace<__int64_const_&,int_const_&>
          (TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
           *this,long64 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar6 + 4 + (longlong)iVar4 * 0x18);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar6 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar4);
  if (local_28.Pointer != (TSparseSetElement<TTuple<__int64,int>_> *)0x0) {
    *(long64 *)local_28.Pointer = *param_1;
    *(int *)((longlong)local_28.Pointer + 8) = *param_2;
    *(undefined4 *)((longlong)local_28.Pointer + 0x10) = 0xffffffff;
  }
  local_res8[0] = local_28.Index;
  uVar5 = (int)((ulonglong)*(undefined8 *)local_28.Pointer >> 0x20) * 0x17 +
          (int)*(undefined8 *)local_28.Pointer;
  bVar3 = TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar5,local_28.Pointer,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>::
    RehashOrLink(&this->Pairs,uVar5,local_28.Pointer,local_res8[0]);
  }
  return (int *)(*(longlong *)&(this->Pairs).Elements + lVar6 * 0x18 + 8);
}

// Emplace<__int64,int_const_&> @ 149f8c900

int * __thiscall
TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>::
Emplace<__int64,int_const_&>
          (TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
           *this,long64 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar6 + 4 + (longlong)iVar4 * 0x18);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar6 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar4);
  if (local_28.Pointer != (TSparseSetElement<TTuple<__int64,int>_> *)0x0) {
    *(long64 *)local_28.Pointer = *param_1;
    *(int *)((longlong)local_28.Pointer + 8) = *param_2;
    *(undefined4 *)((longlong)local_28.Pointer + 0x10) = 0xffffffff;
  }
  local_res8[0] = local_28.Index;
  uVar5 = (int)((ulonglong)*(undefined8 *)local_28.Pointer >> 0x20) * 0x17 +
          (int)*(undefined8 *)local_28.Pointer;
  bVar3 = TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar5,local_28.Pointer,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>::
    RehashOrLink(&this->Pairs,uVar5,local_28.Pointer,local_res8[0]);
  }
  return (int *)(*(longlong *)&(this->Pairs).Elements + lVar6 * 0x18 + 8);
}

// FindOrAddImpl<FName_const_&> @ 149f8cbd0

/* WARNING: Enum "EDeterminismLevel": Some values do not have unique names */

EDeterminismLevel * __thiscall
TMapBase<FName,enum_EDeterminismLevel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EDeterminismLevel,0>_>
::FindOrAddImpl<FName_const_&>(void *this,uint param_1,FName *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar2 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar2 = (longlong)this + 0x38;
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *(longlong *)this + (longlong)iVar1 * 0x14;
        if (*(FName *)(*(longlong *)this + (longlong)iVar1 * 0x14) == *param_2) {
          if (lVar2 != 0) goto LAB_149f8cc62;
          break;
        }
        iVar1 = *(int *)(lVar2 + 0xc);
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,enum_EDeterminismLevel>,TDefaultMapHashableKeyFuncs<FName,enum_EDeterminismLevel,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (this,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar2 = *(longlong *)this + (longlong)local_res8[0] * 0x14;
LAB_149f8cc62:
  return (EDeterminismLevel *)(lVar2 + 8);
}

