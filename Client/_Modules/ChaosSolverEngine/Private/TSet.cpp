// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosSolverEngine
// Functions: 38

// Emplace<TPairInitializer<TObjectPtr<UPrimitiveComponent>_&&,FBreakEventCallbackWrapper_const_&>_> @ 1463049a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FSetElementId __thiscall
TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FBreakEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FBreakEventCallbackWrapper,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<TObjectPtr<UPrimitiveComponent>_&&,FBreakEventCallbackWrapper_const_&>_>
          (TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FBreakEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FBreakEventCallbackWrapper,0>,FDefaultSetAllocator>
           *this,TPairInitializer<TObjectPtr<UPrimitiveComponent>_&&,FBreakEventCallbackWrapper_const_&>
                 *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  UObject *pUVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  uint uVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  char *in_R9;
  void *_Dst;
  bool bVar13;
  TObjectPtr<UPrimitiveComponent_const_>_u_0 local_res10;
  FSparseArrayAllocationInfo local_48;
  
  iVar5 = *(int *)&(this->Elements).field_0x34;
  iVar12 = 1;
  if (iVar5 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,0x10,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar5 = iVar5 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x50);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x50) = 0xffffffff;
    }
  }
  TSparseArrayBase<80,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<80,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer != (undefined8 *)0x0) {
    plVar8 = *(longlong **)(param_2 + 8);
    pUVar3 = (UObject *)**(undefined8 **)param_2;
    *(UObject **)local_48.Pointer = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    lVar2 = *plVar8;
    *(longlong *)((longlong)local_48.Pointer + 0x10) = lVar2;
    *(undefined8 *)((longlong)local_48.Pointer + 0x38) = 0;
    if (lVar2 != 0) {
      plVar7 = plVar8 + 2;
      if ((longlong *)plVar8[5] != (longlong *)0x0) {
        plVar7 = (longlong *)plVar8[5];
      }
      (**(code **)*plVar7)();
    }
    *(undefined4 *)((longlong)local_48.Pointer + 0x40) = 0xffffffff;
  }
  pUVar3 = *(UObject **)local_48.Pointer;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  bVar13 = false;
  uVar6 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    local_res10.DebugPtr = *(UPrimitiveComponent **)local_48.Pointer;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res10.DebugPtr != (UPrimitiveComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res10.DebugPtr);
    }
    iVar5 = FindIndexByHash<TObjectPtr<UPrimitiveComponent_const_>_>
                      (this,uVar6,(TObjectPtr<UPrimitiveComponent_const_> *)&local_res10.ObjectPtr);
    bVar13 = iVar5 != -1;
    if (bVar13) {
      _Dst = (void *)((longlong)iVar5 * 0x50 + *(longlong *)&this->Elements);
      if (*(longlong *)((longlong)_Dst + 0x10) != 0) {
        plVar8 = (longlong *)((longlong)_Dst + 0x20);
        if (*(longlong **)((longlong)_Dst + 0x38) != (longlong *)0x0) {
          plVar8 = *(longlong **)((longlong)_Dst + 0x38);
        }
        (**(code **)(*plVar8 + 0x10))();
      }
      memmove(_Dst,local_48.Pointer,0x40);
      TSparseArrayBase<80,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<80,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      local_48.Index = iVar5;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar13;
  }
  if (bVar13 == false) {
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
      uVar6 = this->HashSize - 1U & uVar6;
      *(uint *)((longlong)local_48.Pointer + 0x44) = uVar6;
      FVar11 = (this->Hash).SecondaryData;
      if (FVar11 == (ForElementType<FSetElementId>)0x0) {
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar9 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      *(undefined4 *)((longlong)local_48.Pointer + 0x40) =
           *(undefined4 *)((longlong)FVar11 + uVar9 * 4);
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

// Emplace<TPairInitializer<TObjectPtr<UPrimitiveComponent>_&&,FCrumblingEventCallbackWrapper_const_&>_> @ 146304c40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FSetElementId __thiscall
TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FCrumblingEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FCrumblingEventCallbackWrapper,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<TObjectPtr<UPrimitiveComponent>_&&,FCrumblingEventCallbackWrapper_const_&>_>
          (TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FCrumblingEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FCrumblingEventCallbackWrapper,0>,FDefaultSetAllocator>
           *this,TPairInitializer<TObjectPtr<UPrimitiveComponent>_&&,FCrumblingEventCallbackWrapper_const_&>
                 *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  UObject *pUVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  uint uVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  char *in_R9;
  void *_Dst;
  bool bVar13;
  TObjectPtr<UPrimitiveComponent_const_>_u_0 local_res10;
  FSparseArrayAllocationInfo local_48;
  
  iVar5 = *(int *)&(this->Elements).field_0x34;
  iVar12 = 1;
  if (iVar5 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,0x10,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar5 = iVar5 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x50);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x50) = 0xffffffff;
    }
  }
  TSparseArrayBase<80,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<80,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer != (undefined8 *)0x0) {
    plVar8 = *(longlong **)(param_2 + 8);
    pUVar3 = (UObject *)**(undefined8 **)param_2;
    *(UObject **)local_48.Pointer = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    lVar2 = *plVar8;
    *(longlong *)((longlong)local_48.Pointer + 0x10) = lVar2;
    *(undefined8 *)((longlong)local_48.Pointer + 0x38) = 0;
    if (lVar2 != 0) {
      plVar7 = plVar8 + 2;
      if ((longlong *)plVar8[5] != (longlong *)0x0) {
        plVar7 = (longlong *)plVar8[5];
      }
      (**(code **)*plVar7)();
    }
    *(undefined4 *)((longlong)local_48.Pointer + 0x40) = 0xffffffff;
  }
  pUVar3 = *(UObject **)local_48.Pointer;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  bVar13 = false;
  uVar6 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    local_res10.DebugPtr = *(UPrimitiveComponent **)local_48.Pointer;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res10.DebugPtr != (UPrimitiveComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res10.DebugPtr);
    }
    iVar5 = FindIndexByHash<TObjectPtr<UPrimitiveComponent_const_>_>
                      (this,uVar6,(TObjectPtr<UPrimitiveComponent_const_> *)&local_res10.ObjectPtr);
    bVar13 = iVar5 != -1;
    if (bVar13) {
      _Dst = (void *)((longlong)iVar5 * 0x50 + *(longlong *)&this->Elements);
      if (*(longlong *)((longlong)_Dst + 0x10) != 0) {
        plVar8 = (longlong *)((longlong)_Dst + 0x20);
        if (*(longlong **)((longlong)_Dst + 0x38) != (longlong *)0x0) {
          plVar8 = *(longlong **)((longlong)_Dst + 0x38);
        }
        (**(code **)(*plVar8 + 0x10))();
      }
      memmove(_Dst,local_48.Pointer,0x40);
      TSparseArrayBase<80,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<80,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      local_48.Index = iVar5;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar13;
  }
  if (bVar13 == false) {
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
      uVar6 = this->HashSize - 1U & uVar6;
      *(uint *)((longlong)local_48.Pointer + 0x44) = uVar6;
      FVar11 = (this->Hash).SecondaryData;
      if (FVar11 == (ForElementType<FSetElementId>)0x0) {
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar9 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      *(undefined4 *)((longlong)local_48.Pointer + 0x40) =
           *(undefined4 *)((longlong)FVar11 + uVar9 * 4);
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

// Emplace<TPairInitializer<TObjectPtr<UPrimitiveComponent>_&&,FRemovalEventCallbackWrapper_const_&>_> @ 146304ee0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FSetElementId __thiscall
TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<TObjectPtr<UPrimitiveComponent>_&&,FRemovalEventCallbackWrapper_const_&>_>
          (TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper,0>,FDefaultSetAllocator>
           *this,TPairInitializer<TObjectPtr<UPrimitiveComponent>_&&,FRemovalEventCallbackWrapper_const_&>
                 *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  UObject *pUVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  uint uVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  char *in_R9;
  void *_Dst;
  bool bVar13;
  TObjectPtr<UPrimitiveComponent_const_>_u_0 local_res10;
  FSparseArrayAllocationInfo local_48;
  
  iVar5 = *(int *)&(this->Elements).field_0x34;
  iVar12 = 1;
  if (iVar5 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,0x10,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar5 = iVar5 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x50);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x50) = 0xffffffff;
    }
  }
  TSparseArrayBase<80,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<80,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer != (undefined8 *)0x0) {
    plVar8 = *(longlong **)(param_2 + 8);
    pUVar3 = (UObject *)**(undefined8 **)param_2;
    *(UObject **)local_48.Pointer = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    lVar2 = *plVar8;
    *(longlong *)((longlong)local_48.Pointer + 0x10) = lVar2;
    *(undefined8 *)((longlong)local_48.Pointer + 0x38) = 0;
    if (lVar2 != 0) {
      plVar7 = plVar8 + 2;
      if ((longlong *)plVar8[5] != (longlong *)0x0) {
        plVar7 = (longlong *)plVar8[5];
      }
      (**(code **)*plVar7)();
    }
    *(undefined4 *)((longlong)local_48.Pointer + 0x40) = 0xffffffff;
  }
  pUVar3 = *(UObject **)local_48.Pointer;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  bVar13 = false;
  uVar6 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    local_res10.DebugPtr = *(UPrimitiveComponent **)local_48.Pointer;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res10.DebugPtr != (UPrimitiveComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res10.DebugPtr);
    }
    iVar5 = FindIndexByHash<TObjectPtr<UPrimitiveComponent_const_>_>
                      (this,uVar6,(TObjectPtr<UPrimitiveComponent_const_> *)&local_res10.ObjectPtr);
    bVar13 = iVar5 != -1;
    if (bVar13) {
      _Dst = (void *)((longlong)iVar5 * 0x50 + *(longlong *)&this->Elements);
      if (*(longlong *)((longlong)_Dst + 0x10) != 0) {
        plVar8 = (longlong *)((longlong)_Dst + 0x20);
        if (*(longlong **)((longlong)_Dst + 0x38) != (longlong *)0x0) {
          plVar8 = *(longlong **)((longlong)_Dst + 0x38);
        }
        (**(code **)(*plVar8 + 0x10))();
      }
      memmove(_Dst,local_48.Pointer,0x40);
      TSparseArrayBase<80,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<80,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      local_48.Index = iVar5;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar13;
  }
  if (bVar13 == false) {
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
      uVar6 = this->HashSize - 1U & uVar6;
      *(uint *)((longlong)local_48.Pointer + 0x44) = uVar6;
      FVar11 = (this->Hash).SecondaryData;
      if (FVar11 == (ForElementType<FSetElementId>)0x0) {
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar9 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      *(undefined4 *)((longlong)local_48.Pointer + 0x40) =
           *(undefined4 *)((longlong)FVar11 + uVar9 * 4);
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

// Emplace<TPairInitializer<FGuid_&,TSharedRef<FChaosVDSessionInfo,1>_const_&>_> @ 146305180

FSetElementId __thiscall
TSet<TTuple<FGuid,TWeakPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TWeakPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FGuid_&,TSharedRef<FChaosVDSessionInfo,1>_const_&>_>
          (TSet<TTuple<FGuid,TWeakPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TWeakPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FGuid_&,TSharedRef<FChaosVDSessionInfo,1>_const_&> *param_1,
          bool *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  ulong64 uVar8;
  ulonglong uVar9;
  uint uVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  int iVar13;
  char *in_R9;
  bool bVar14;
  FSparseArrayAllocationInfo local_48;
  
  iVar13 = *(int *)&(this->Elements).field_0x34;
  iVar12 = 1;
  if (iVar13 == 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar7 = *(int *)&(this->Elements).field_0x30;
    iVar13 = iVar13 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar7 * 0x28);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar13;
    if (iVar13 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar7);
  if (local_48.Pointer != (int *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 8);
    uVar6 = (*(undefined8 **)param_2)[1];
    *(undefined8 *)local_48.Pointer = **(undefined8 **)param_2;
    *(undefined8 *)((longlong)local_48.Pointer + 8) = uVar6;
    *(undefined8 *)((longlong)local_48.Pointer + 0x10) = *puVar4;
    lVar3 = puVar4[1];
    *(longlong *)((longlong)local_48.Pointer + 0x18) = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
      UNLOCK();
    }
    *(int *)((longlong)local_48.Pointer + 0x20) = -1;
  }
  uVar8 = CityHash64(local_48.Pointer,0x10);
  iVar13 = *(int *)&(this->Elements).field_0x8;
  bVar14 = false;
  iVar7 = *(int *)&(this->Elements).field_0x34;
  if ((iVar13 - iVar7 != 1) && (iVar13 != iVar7)) {
    FVar11 = (this->Hash).SecondaryData;
    if (FVar11 == (ForElementType<FSetElementId>)0x0) {
      FVar11 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar13 = *(int *)((longlong)FVar11 + ((ulonglong)(this->HashSize - 1) & uVar8 & 0xffffffff) * 4)
    ;
    if (iVar13 != -1) {
      lVar3 = *(longlong *)&this->Elements;
      do {
        piVar1 = (int *)(lVar3 + (longlong)iVar13 * 0x28);
        if (((*(int *)((longlong)local_48.Pointer + 0xc) == piVar1[3] &&
             *(int *)((longlong)local_48.Pointer + 8) ==
             *(int *)(lVar3 + 8 + (longlong)iVar13 * 0x28)) &&
            *(int *)((longlong)local_48.Pointer + 4) == piVar1[1]) &&
            *(int *)local_48.Pointer == *piVar1) {
          bVar14 = iVar13 != -1;
          if (bVar14) {
            plVar5 = *(longlong **)(lVar3 + 0x18 + (longlong)iVar13 * 0x28);
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar5 + 0xc);
              iVar7 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
            memmove((void *)(lVar3 + (longlong)iVar13 * 0x28),local_48.Pointer,0x20);
            TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar13;
          }
          goto LAB_1463052ff;
        }
        iVar13 = piVar1[8];
      } while (iVar13 != -1);
    }
    bVar14 = false;
  }
LAB_1463052ff:
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar14;
  }
  if (bVar14 == false) {
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
      uVar10 = this->HashSize - 1U & (uint)uVar8;
      *(uint *)((longlong)local_48.Pointer + 0x24) = uVar10;
      FVar11 = (this->Hash).SecondaryData;
      if (FVar11 == (ForElementType<FSetElementId>)0x0) {
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar9 = (longlong)this->HashSize - 1U & (longlong)(int)uVar10;
      *(int *)((longlong)local_48.Pointer + 0x20) = *(int *)((longlong)FVar11 + uVar9 * 4);
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

// Emplace<TPairInitializer<FString_const_&,FChaosVDDataChannelState_const_&>_> @ 146305420

FSetElementId __thiscall
TSet<TTuple<FString,FChaosVDDataChannelState>,TDefaultMapHashableKeyFuncs<FString,FChaosVDDataChannelState,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FString_const_&,FChaosVDDataChannelState_const_&>_>
          (TSet<TTuple<FString,FChaosVDDataChannelState>,TDefaultMapHashableKeyFuncs<FString,FChaosVDDataChannelState,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FString_const_&,FChaosVDDataChannelState_const_&> *param_1,
          bool *param_2)

{
  int iVar1;
  longlong lVar2;
  FString *pFVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  wchar_t *pwVar9;
  ForElementType<FSetElementId> FVar10;
  int iVar11;
  bool *in_R9;
  int iVar12;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_48;
  TSparseSetElement<TTuple<FString,FChaosVDDataChannelState>_> *pTVar13;
  
  iVar12 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar12 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar12 = iVar12 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x30);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar12;
    if (iVar12 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x30) = 0xffffffff;
    }
  }
  TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar5);
  pTVar13 = (TSparseSetElement<TTuple<FString,FChaosVDDataChannelState>_> *)0x0;
  iVar12 = 0;
  if (local_48.Pointer != (TSparseSetElement<TTuple<FString,FChaosVDDataChannelState>_> *)0x0) {
    pFVar3 = *(FString **)(param_2 + 8);
    ::FString::FString(local_48.Pointer,*(FString **)param_2);
    ::FString::FString((FString *)((longlong)local_48.Pointer + 0x10),pFVar3);
    *(undefined1 *)((longlong)local_48.Pointer + 0x20) =
         *(undefined1 *)&pFVar3[1].Data.AllocatorInstance.Data;
    *(undefined1 *)((longlong)local_48.Pointer + 0x21) =
         *(undefined1 *)((longlong)&pFVar3[1].Data.AllocatorInstance.Data + 1);
    *(undefined1 *)((longlong)local_48.Pointer + 0x22) =
         *(undefined1 *)((longlong)&pFVar3[1].Data.AllocatorInstance.Data + 2);
    *(undefined4 *)((longlong)local_48.Pointer + 0x28) = 0xffffffff;
    pTVar13 = local_48.Pointer;
  }
  local_res8[0] = local_48.Index;
  if (*(int *)&pTVar13->field_0x8 == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = *(wchar_t **)pTVar13;
    iVar12 = *(int *)&pTVar13->field_0x8 + -1;
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar12,pwVar9);
  bVar4 = TryReplaceExisting(this,uVar6,pTVar13,local_res8,in_R9);
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
      *(uint *)&pTVar13->field_0x2c = uVar6;
      FVar10 = (this->Hash).SecondaryData;
      if (FVar10 == (ForElementType<FSetElementId>)0x0) {
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      *(undefined4 *)&pTVar13->field_0x28 = *(undefined4 *)((longlong)FVar10 + uVar7 * 4);
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

// EmplaceByHash<TKeyInitializer<TObjectPtr<UPrimitiveComponent>_&&>_> @ 146305740

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FSetElementId __thiscall
TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<TObjectPtr<UPrimitiveComponent>_&&>_>
          (TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<TObjectPtr<UPrimitiveComponent>_&&> *param_2,
          bool *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  uint uVar9;
  undefined1 *puVar10;
  bool bVar11;
  TObjectPtr<UPrimitiveComponent_const_>_u_0 local_res8;
  void *local_res10;
  uint local_res18;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_48;
  
  uVar9 = (uint)param_2;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  iVar8 = 1;
  local_res18 = uVar9;
  if (iVar4 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x68,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    iVar4 = iVar4 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar3 * 0x68 + 4 + lVar2);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x68 + lVar2) = 0xffffffff;
    }
  }
  puVar10 = &(this->Elements).field_0x8;
  TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar3);
  if (local_48.Pointer != (TTuple<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet> *)0x0) {
    TKeyInitializer<TObjectPtr<UPrimitiveComponent>_&&>::
    operator<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet>_TTuple<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet>
              ((TKeyInitializer<TObjectPtr<UPrimitiveComponent>_&&> *)param_3,local_48.Pointer);
    *(undefined4 *)((longlong)local_48.Pointer + 0x60) = 0xffffffff;
  }
  bVar11 = false;
  if (*(int *)puVar10 - *(int *)&(this->Elements).field_0x34 != 1) {
    local_res8.ObjectPtr.field0_0x0 = *(FObjectPtr *)local_48.Pointer;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res8.DebugPtr != (UPrimitiveComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
    }
    iVar4 = FindIndexByHash<TObjectPtr<UPrimitiveComponent_const_>_>
                      (this,uVar9,(TObjectPtr<UPrimitiveComponent_const_> *)&local_res8.ObjectPtr);
    bVar11 = iVar4 != -1;
    uVar9 = local_res18;
    if (bVar11) {
      local_res10 = (void *)((longlong)iVar4 * 0x68 + *(longlong *)&this->Elements);
      local_res8.DebugPtr = (UPrimitiveComponent *)((longlong)local_res10 + 0x10);
      *(undefined4 *)((longlong)local_res10 + 0x58) = 0;
      if (*(void **)((longlong)local_res10 + 0x50) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)local_res10 + 0x50));
      }
      TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_res8.DebugPtr);
      memmove(local_res10,local_48.Pointer,0x60);
      TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      local_48.Index = iVar4;
      uVar9 = local_res18;
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
      uVar9 = this->HashSize - 1U & uVar9;
      *(uint *)&((TTuple<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet> *)
                ((longlong)local_48.Pointer + 0x60))->field_0x4 = uVar9;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar9;
      *(undefined4 *)((longlong)local_48.Pointer + 0x60) =
           *(undefined4 *)((longlong)FVar7 + uVar5 * 4);
      *(int *)((longlong)FVar7 + uVar5 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar8;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_48.Index;
  return (FSetElementId)param_1;
}

// EmplaceByHash<TKeyInitializer<FGuid_const_&>_> @ 146305970

FSetElementId __thiscall
TSet<TTuple<FGuid,FChaosVDRecordingStatusMessage>,TDefaultMapHashableKeyFuncs<FGuid,FChaosVDRecordingStatusMessage,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<FGuid_const_&>_>
          (TSet<TTuple<FGuid,FChaosVDRecordingStatusMessage>,TDefaultMapHashableKeyFuncs<FGuid,FChaosVDRecordingStatusMessage,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<FGuid_const_&> *param_2,bool *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  void *_Dst;
  FGuid *_Src;
  ulonglong uVar6;
  uint uVar7;
  undefined4 in_register_00000014;
  int iVar8;
  ForElementType<FSetElementId> FVar9;
  undefined1 *puVar10;
  bool bVar11;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  iVar5 = *(int *)&(this->Elements).field_0x34;
  iVar8 = 1;
  if (iVar5 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x80,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar4 * 0x80 + 4 + lVar2);
    iVar5 = iVar5 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x80 + lVar2) = 0xffffffff;
    }
  }
  puVar10 = &(this->Elements).field_0x8;
  TSparseArrayBase<128,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<128,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_b8,iVar4);
  _Src = (FGuid *)0x0;
  if (local_b8.Pointer != (FGuid *)0x0) {
    local_a8 = 0;
    uStack_a0 = 0;
    local_90 = 0;
    uVar3 = (*(undefined8 **)param_3)[1];
    uStack_88 = 0;
    local_80 = 0;
    *(undefined8 *)local_b8.Pointer = **(undefined8 **)param_3;
    *(undefined8 *)((longlong)local_b8.Pointer + 8) = uVar3;
    *(undefined1 *)&((FGuid *)((longlong)local_b8.Pointer + 0x20))->A = 0;
    ((FGuid *)((longlong)local_b8.Pointer + 0x20))->B = 0;
    uStack_78 = 0;
    ((FGuid *)((longlong)local_b8.Pointer + 0x10))->A = 0;
    ((FGuid *)((longlong)local_b8.Pointer + 0x10))->B = 0;
    ((FGuid *)((longlong)local_b8.Pointer + 0x10))->C = 0;
    ((FGuid *)((longlong)local_b8.Pointer + 0x10))->D = 0;
    ((FGuid *)((longlong)local_b8.Pointer + 0x30))->C = 0;
    ((FGuid *)((longlong)local_b8.Pointer + 0x30))->D = 0;
    ((FGuid *)((longlong)local_b8.Pointer + 0x40))->A = 0;
    ((FGuid *)((longlong)local_b8.Pointer + 0x40))->B = 0;
    ((FGuid *)((longlong)local_b8.Pointer + 0x20))->C = 0;
    ((FGuid *)((longlong)local_b8.Pointer + 0x20))->D = 0;
    ((FGuid *)((longlong)local_b8.Pointer + 0x30))->A = 0;
    ((FGuid *)((longlong)local_b8.Pointer + 0x30))->B = 0;
    ((FGuid *)((longlong)local_b8.Pointer + 0x40))->C = 0;
    ((FGuid *)((longlong)local_b8.Pointer + 0x40))->D = 0;
    ((FGuid *)((longlong)local_b8.Pointer + 0x50))->A = 0;
    ((FGuid *)((longlong)local_b8.Pointer + 0x50))->B = 0;
    ((FGuid *)((longlong)local_b8.Pointer + 0x60))->A = 0;
    ((FGuid *)((longlong)local_b8.Pointer + 0x60))->B = 0;
    ((FGuid *)((longlong)local_b8.Pointer + 0x50))->C = 0;
    *(undefined1 *)&((FGuid *)((longlong)local_b8.Pointer + 0x50))->D = 0;
    ((FGuid *)((longlong)local_b8.Pointer + 0x60))->C = 0;
    ((FGuid *)((longlong)local_b8.Pointer + 0x60))->D = 0;
    *(undefined1 *)&((FGuid *)((longlong)local_b8.Pointer + 0x70))->A = 0;
    ((FGuid *)((longlong)local_b8.Pointer + 0x70))->C = 0xffffffff;
    _Src = local_b8.Pointer;
  }
  bVar11 = false;
  if (*(int *)puVar10 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar5 = FindIndexByHash<FGuid>(this,(uint)param_2,_Src);
    bVar11 = iVar5 != -1;
    if (bVar11) {
      _Dst = (void *)((longlong)iVar5 * 0x80 + *(longlong *)&this->Elements);
      if (*(void **)((longlong)_Dst + 0x60) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)_Dst + 0x60));
      }
      if (*(void **)((longlong)_Dst + 0x48) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)_Dst + 0x48));
      }
      memmove(_Dst,_Src,0x78);
      TSparseArrayBase<128,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<128,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_b8.Index,1);
      local_b8.Index = iVar5;
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
      iVar8 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar8 <= this->HashSize)) {
      uVar7 = this->HashSize - 1U & (uint)param_2;
      _Src[7].D = uVar7;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar7;
      _Src[7].C = *(uint *)((longlong)FVar9 + uVar6 * 4);
      *(int *)((longlong)FVar9 + uVar6 * 4) = local_b8.Index;
    }
    else {
      this->HashSize = iVar8;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_b8.Index;
  return (FSetElementId)param_1;
}

// EmplaceByHash<TKeyInitializer<FGuid_const_&>_> @ 146305be0

FSetElementId __thiscall
TSet<TTuple<FGuid,FChaosVDTraceDetails>,TDefaultMapHashableKeyFuncs<FGuid,FChaosVDTraceDetails,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<FGuid_const_&>_>
          (TSet<TTuple<FGuid,FChaosVDTraceDetails>,TDefaultMapHashableKeyFuncs<FGuid,FChaosVDTraceDetails,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<FGuid_const_&> *param_2,bool *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int *_Src;
  ulonglong uVar5;
  uint uVar6;
  undefined4 in_register_00000014;
  int *piVar7;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  void *_Dst;
  int iVar10;
  bool bVar11;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  
  iVar9 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar9 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x68,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar9 = iVar9 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar4 * 0x68 + 4 + lVar2);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x68 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_88,iVar4);
  _Src = (int *)0x0;
  if (local_88.Pointer != (int *)0x0) {
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uVar3 = (*(undefined8 **)param_3)[1];
    uStack_60 = 0;
    *(undefined8 *)local_88.Pointer = **(undefined8 **)param_3;
    *(undefined8 *)((longlong)local_88.Pointer + 8) = uVar3;
    ((int *)((longlong)local_88.Pointer + 0x20))[0] = 0;
    ((int *)((longlong)local_88.Pointer + 0x20))[1] = 0;
    ((int *)((longlong)local_88.Pointer + 0x28))[0] = 0;
    ((int *)((longlong)local_88.Pointer + 0x28))[1] = 0;
    ((int *)((longlong)local_88.Pointer + 0x10))[0] = 0;
    ((int *)((longlong)local_88.Pointer + 0x10))[1] = 0;
    ((int *)((longlong)local_88.Pointer + 0x18))[0] = 0;
    ((int *)((longlong)local_88.Pointer + 0x18))[1] = 0;
    ((int *)((longlong)local_88.Pointer + 0x30))[0] = 0;
    ((int *)((longlong)local_88.Pointer + 0x30))[1] = 0;
    ((int *)((longlong)local_88.Pointer + 0x38))[0] = 0;
    ((int *)((longlong)local_88.Pointer + 0x38))[1] = 0;
    ((int *)((longlong)local_88.Pointer + 0x48))[0] = 0;
    ((int *)((longlong)local_88.Pointer + 0x48))[1] = 0;
    *(int *)((longlong)local_88.Pointer + 0x40) = 0;
    *(undefined1 *)((longlong)local_88.Pointer + 0x44) = 0;
    ((int *)((longlong)local_88.Pointer + 0x50))[0] = 0;
    ((int *)((longlong)local_88.Pointer + 0x50))[1] = 0;
    *(undefined1 *)((longlong)local_88.Pointer + 0x58) = 0;
    *(int *)((longlong)local_88.Pointer + 0x60) = -1;
    _Src = local_88.Pointer;
  }
  iVar9 = *(int *)&(this->Elements).field_0x8;
  bVar11 = false;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  if ((iVar9 - iVar4 != 1) && (iVar9 != iVar4)) {
    FVar8 = (this->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar9 = *(int *)((longlong)FVar8 + (ulonglong)(this->HashSize - 1U & (uint)param_2) * 4);
    if (iVar9 != -1) {
      do {
        piVar7 = (int *)((longlong)iVar9 * 0x68 + *(longlong *)&this->Elements);
        if (((_Src[3] == piVar7[3] && _Src[2] == piVar7[2]) && _Src[1] == piVar7[1]) &&
            *_Src == *piVar7) {
          bVar11 = iVar9 != -1;
          if (bVar11) {
            _Dst = (void *)((longlong)iVar9 * 0x68 + *(longlong *)&this->Elements);
            if (*(void **)((longlong)_Dst + 0x48) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x48));
            }
            if (*(void **)((longlong)_Dst + 0x30) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x30));
            }
            memmove(_Dst,_Src,0x60);
            TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_88.Index,1);
            local_88.Index = iVar9;
          }
          goto LAB_146305d73;
        }
        iVar9 = piVar7[0x18];
      } while (iVar9 != -1);
    }
    bVar11 = false;
  }
LAB_146305d73:
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar11;
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
      iVar10 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar10 <= this->HashSize)) {
      uVar6 = this->HashSize - 1U & (uint)param_2;
      _Src[0x19] = uVar6;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      _Src[0x18] = *(int *)((longlong)FVar8 + uVar5 * 4);
      *(int *)((longlong)FVar8 + uVar5 * 4) = local_88.Index;
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_88.Index;
  return (FSetElementId)param_1;
}

// FindIndexByHash<TObjectPtr<UPrimitiveComponent_const_>_> @ 1463069a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __thiscall
TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FBreakEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FBreakEventCallbackWrapper,0>,FDefaultSetAllocator>
::FindIndexByHash<TObjectPtr<UPrimitiveComponent_const_>_>
          (TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FBreakEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FBreakEventCallbackWrapper,0>,FDefaultSetAllocator>
           *this,uint param_1,TObjectPtr<UPrimitiveComponent_const_> *param_2)

{
  int iVar1;
  UPrimitiveComponent *pUVar2;
  UPrimitiveComponent *pUVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar4 = (this->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar1 = *(int *)((longlong)FVar4 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
        iVar1 != -1; iVar1 = *(int *)(*(longlong *)&this->Elements + 0x40 + (longlong)iVar1 * 0x50))
    {
      pUVar2 = (param_2->field0_0x0).DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 != (UPrimitiveComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      pUVar3 = *(UPrimitiveComponent **)(*(longlong *)&this->Elements + (longlong)iVar1 * 0x50);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UPrimitiveComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      if (pUVar3 == pUVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}

// FindIndexByHash<TObjectPtr<UPrimitiveComponent_const_>_> @ 146306a70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __thiscall
TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet,0>,FDefaultSetAllocator>
::FindIndexByHash<TObjectPtr<UPrimitiveComponent_const_>_>
          (TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet,0>,FDefaultSetAllocator>
           *this,uint param_1,TObjectPtr<UPrimitiveComponent_const_> *param_2)

{
  int iVar1;
  UPrimitiveComponent *pUVar2;
  UPrimitiveComponent *pUVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar4 = (this->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar1 = *(int *)((longlong)FVar4 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
        iVar1 != -1; iVar1 = *(int *)(*(longlong *)&this->Elements + 0x60 + (longlong)iVar1 * 0x68))
    {
      pUVar2 = (param_2->field0_0x0).DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 != (UPrimitiveComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      pUVar3 = *(UPrimitiveComponent **)((longlong)iVar1 * 0x68 + *(longlong *)&this->Elements);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UPrimitiveComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      if (pUVar3 == pUVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}

// FindIndexByHash<TObjectPtr<UPrimitiveComponent_const_>_> @ 146306b40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __thiscall
TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FCrumblingEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FCrumblingEventCallbackWrapper,0>,FDefaultSetAllocator>
::FindIndexByHash<TObjectPtr<UPrimitiveComponent_const_>_>
          (TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FCrumblingEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FCrumblingEventCallbackWrapper,0>,FDefaultSetAllocator>
           *this,uint param_1,TObjectPtr<UPrimitiveComponent_const_> *param_2)

{
  int iVar1;
  UPrimitiveComponent *pUVar2;
  UPrimitiveComponent *pUVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar4 = (this->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar1 = *(int *)((longlong)FVar4 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
        iVar1 != -1; iVar1 = *(int *)(*(longlong *)&this->Elements + 0x40 + (longlong)iVar1 * 0x50))
    {
      pUVar2 = (param_2->field0_0x0).DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 != (UPrimitiveComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      pUVar3 = *(UPrimitiveComponent **)(*(longlong *)&this->Elements + (longlong)iVar1 * 0x50);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UPrimitiveComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      if (pUVar3 == pUVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}

// FindIndexByHash<TObjectPtr<UPrimitiveComponent_const_>_> @ 146306c10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __thiscall
TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper,0>,FDefaultSetAllocator>
::FindIndexByHash<TObjectPtr<UPrimitiveComponent_const_>_>
          (TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper,0>,FDefaultSetAllocator>
           *this,uint param_1,TObjectPtr<UPrimitiveComponent_const_> *param_2)

{
  int iVar1;
  UPrimitiveComponent *pUVar2;
  UPrimitiveComponent *pUVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar4 = (this->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar1 = *(int *)((longlong)FVar4 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
        iVar1 != -1; iVar1 = *(int *)(*(longlong *)&this->Elements + 0x40 + (longlong)iVar1 * 0x50))
    {
      pUVar2 = (param_2->field0_0x0).DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 != (UPrimitiveComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      pUVar3 = *(UPrimitiveComponent **)(*(longlong *)&this->Elements + (longlong)iVar1 * 0x50);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UPrimitiveComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      if (pUVar3 == pUVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}

// FindIndexByHash<FGuid> @ 146306ce0

int __thiscall
TSet<TTuple<FGuid,FChaosVDRecordingStatusMessage>,TDefaultMapHashableKeyFuncs<FGuid,FChaosVDRecordingStatusMessage,0>,FDefaultSetAllocator>
::FindIndexByHash<FGuid>
          (TSet<TTuple<FGuid,FChaosVDRecordingStatusMessage>,TDefaultMapHashableKeyFuncs<FGuid,FChaosVDRecordingStatusMessage,0>,FDefaultSetAllocator>
           *this,uint param_1,FGuid *param_2)

{
  uint uVar1;
  uint *puVar2;
  ForElementType<FSetElementId> FVar3;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar3 = (this->Hash).SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&this->Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x80 + *(longlong *)&this->Elements);
        if (((param_2->D == puVar2[3] && param_2->C == puVar2[2]) && param_2->B == puVar2[1]) &&
            param_2->A == *puVar2) {
          return uVar1;
        }
        uVar1 = puVar2[0x1e];
      } while (uVar1 != 0xffffffff);
    }
  }
  return -1;
}

// FindIndexByHash<FGuid> @ 146306d90

int __thiscall
TSet<TTuple<FGuid,FChaosVDTraceDetails>,TDefaultMapHashableKeyFuncs<FGuid,FChaosVDTraceDetails,0>,FDefaultSetAllocator>
::FindIndexByHash<FGuid>
          (TSet<TTuple<FGuid,FChaosVDTraceDetails>,TDefaultMapHashableKeyFuncs<FGuid,FChaosVDTraceDetails,0>,FDefaultSetAllocator>
           *this,uint param_1,FGuid *param_2)

{
  uint uVar1;
  uint *puVar2;
  ForElementType<FSetElementId> FVar3;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar3 = (this->Hash).SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&this->Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x68 + *(longlong *)&this->Elements);
        if (((param_2->D == puVar2[3] && param_2->C == puVar2[2]) && param_2->B == puVar2[1]) &&
            param_2->A == *puVar2) {
          return uVar1;
        }
        uVar1 = puVar2[0x18];
      } while (uVar1 != 0xffffffff);
    }
  }
  return -1;
}

// FindIndexByHash<FGuid> @ 146306e30

int __thiscall
TSet<TTuple<FGuid,TSharedPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
::FindIndexByHash<FGuid>
          (TSet<TTuple<FGuid,TSharedPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
           *this,uint param_1,FGuid *param_2)

{
  uint *puVar1;
  uint uVar2;
  ForElementType<FSetElementId> FVar3;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar3 = (this->Hash).SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&this->Hash;
    }
    uVar2 = *(uint *)((longlong)FVar3 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (uVar2 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)&this->Elements + (longlong)(int)uVar2 * 0x28);
        if (((param_2->D == puVar1[3] &&
             param_2->C == *(uint *)(*(longlong *)&this->Elements + 8 + (longlong)(int)uVar2 * 0x28)
             ) && param_2->B == puVar1[1]) && param_2->A == *puVar1) {
          return uVar2;
        }
        uVar2 = puVar1[8];
      } while (uVar2 != 0xffffffff);
    }
  }
  return -1;
}

// FindIndexByHash<FString> @ 146306ed0

int __thiscall
TSet<TTuple<FString,FChaosVDDataChannelState>,TDefaultMapHashableKeyFuncs<FString,FChaosVDDataChannelState,0>,FDefaultSetAllocator>
::FindIndexByHash<FString>
          (TSet<TTuple<FString,FChaosVDDataChannelState>,TDefaultMapHashableKeyFuncs<FString,FChaosVDDataChannelState,0>,FDefaultSetAllocator>
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

// RemoveImpl<TObjectPtr<UObject_const_>_> @ 146307fa0

int __thiscall
TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
RemoveImpl<TObjectPtr<UObject_const_>_>
          (TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
           *this,uint param_1,TObjectPtr<UObject_const_> *param_2)

{
  uint uVar1;
  longlong lVar2;
  UObject *pUVar3;
  UObject *pUVar4;
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
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    pUVar4 = *(UObject **)(lVar2 + lVar12);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
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
         (uVar9 & 0x1f) & 1) != 0) goto LAB_1463080b9;
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
LAB_1463080b9:
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

// RemoveImpl<TObjectPtr<UPrimitiveComponent_const_>_> @ 146308150

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __thiscall
TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FBreakEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FBreakEventCallbackWrapper,0>,FDefaultSetAllocator>
::RemoveImpl<TObjectPtr<UPrimitiveComponent_const_>_>
          (TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FBreakEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FBreakEventCallbackWrapper,0>,FDefaultSetAllocator>
           *this,uint param_1,TObjectPtr<UPrimitiveComponent_const_> *param_2)

{
  uint uVar1;
  longlong lVar2;
  UPrimitiveComponent *pUVar3;
  UPrimitiveComponent *pUVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  ForElementType<FSetElementId> FVar9;
  uint uVar10;
  uint *puVar11;
  undefined1 *puVar12;
  
  FVar9 = (this->Hash).SecondaryData;
  if (FVar9 == (ForElementType<FSetElementId>)0x0) {
    FVar9 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar10 = *(uint *)((longlong)FVar9 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4)
  ;
  if (uVar10 == 0xffffffff) {
    return 0;
  }
  while( true ) {
    lVar2 = *(longlong *)&this->Elements;
    pUVar3 = (param_2->field0_0x0).DebugPtr;
    lVar8 = (longlong)(int)uVar10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UPrimitiveComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    pUVar4 = *(UPrimitiveComponent **)(lVar2 + lVar8 * 0x50);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UPrimitiveComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    if (pUVar4 == pUVar3) break;
    uVar10 = *(uint *)(lVar2 + 0x40 + lVar8 * 0x50);
    if (uVar10 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar10) && ((int)uVar10 < *(int *)&(this->Elements).field_0x28)) {
    puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar12 + (longlong)((int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar10 & 0x1f) & 1) != 0) goto LAB_14630826c;
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
LAB_14630826c:
  FVar9 = (this->Hash).SecondaryData;
  lVar2 = *(longlong *)&this->Elements;
  if (FVar9 == (ForElementType<FSetElementId>)0x0) {
    FVar9 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar11 = (uint *)((longlong)FVar9 + (longlong)*(int *)(lVar2 + 0x44 + lVar8 * 0x50) * 4);
  while( true ) {
    uVar1 = *puVar11;
    if ((uVar1 == 0xffffffff) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar6)) break;
    if (uVar1 == uVar10) {
      *puVar11 = *(uint *)(lVar2 + 0x40 + lVar8 * 0x50);
      TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UPrimitiveComponent>,FBreakEventCallbackWrapper>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar10,1);
      TSparseArrayBase<80,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<80,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar10,1);
      return 1;
    }
    puVar11 = (uint *)(*(longlong *)&this->Elements + 0x40 + (longlong)(int)uVar1 * 0x50);
  }
  pcVar5 = (code *)swi(3);
  iVar7 = (*pcVar5)();
  return iVar7;
}

// RemoveImpl<TObjectPtr<UPrimitiveComponent_const_>_> @ 146308310

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __thiscall
TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet,0>,FDefaultSetAllocator>
::RemoveImpl<TObjectPtr<UPrimitiveComponent_const_>_>
          (TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet,0>,FDefaultSetAllocator>
           *this,uint param_1,TObjectPtr<UPrimitiveComponent_const_> *param_2)

{
  uint uVar1;
  longlong lVar2;
  UPrimitiveComponent *pUVar3;
  UPrimitiveComponent *pUVar4;
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
    lVar12 = (longlong)(int)uVar9 * 0x68;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UPrimitiveComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    pUVar4 = *(UPrimitiveComponent **)(lVar2 + lVar12);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UPrimitiveComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    if (pUVar4 == pUVar3) break;
    uVar9 = *(uint *)(lVar2 + 0x60 + lVar12);
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
         (uVar9 & 0x1f) & 1) != 0) goto LAB_146308429;
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
LAB_146308429:
  FVar8 = (this->Hash).SecondaryData;
  lVar2 = *(longlong *)&this->Elements;
  if (FVar8 == (ForElementType<FSetElementId>)0x0) {
    FVar8 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar10 = (uint *)((longlong)FVar8 + (longlong)*(int *)(lVar2 + 100 + lVar12) * 4);
  while( true ) {
    uVar1 = *puVar10;
    if ((uVar1 == 0xffffffff) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar6)) break;
    if (uVar1 == uVar9) {
      *puVar10 = *(uint *)(lVar2 + 0x60 + lVar12);
      TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar9,1);
      TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar9,1);
      return 1;
    }
    puVar10 = (uint *)(*(longlong *)&this->Elements + 0x60 + (longlong)(int)uVar1 * 0x68);
  }
  pcVar5 = (code *)swi(3);
  iVar7 = (*pcVar5)();
  return iVar7;
}

// RemoveImpl<TObjectPtr<UPrimitiveComponent_const_>_> @ 1463084d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __thiscall
TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FCrumblingEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FCrumblingEventCallbackWrapper,0>,FDefaultSetAllocator>
::RemoveImpl<TObjectPtr<UPrimitiveComponent_const_>_>
          (TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FCrumblingEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FCrumblingEventCallbackWrapper,0>,FDefaultSetAllocator>
           *this,uint param_1,TObjectPtr<UPrimitiveComponent_const_> *param_2)

{
  uint uVar1;
  longlong lVar2;
  UPrimitiveComponent *pUVar3;
  UPrimitiveComponent *pUVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  ForElementType<FSetElementId> FVar9;
  uint uVar10;
  uint *puVar11;
  undefined1 *puVar12;
  
  FVar9 = (this->Hash).SecondaryData;
  if (FVar9 == (ForElementType<FSetElementId>)0x0) {
    FVar9 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar10 = *(uint *)((longlong)FVar9 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4)
  ;
  if (uVar10 == 0xffffffff) {
    return 0;
  }
  while( true ) {
    lVar2 = *(longlong *)&this->Elements;
    pUVar3 = (param_2->field0_0x0).DebugPtr;
    lVar8 = (longlong)(int)uVar10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UPrimitiveComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    pUVar4 = *(UPrimitiveComponent **)(lVar2 + lVar8 * 0x50);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UPrimitiveComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    if (pUVar4 == pUVar3) break;
    uVar10 = *(uint *)(lVar2 + 0x40 + lVar8 * 0x50);
    if (uVar10 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar10) && ((int)uVar10 < *(int *)&(this->Elements).field_0x28)) {
    puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar12 + (longlong)((int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar10 & 0x1f) & 1) != 0) goto LAB_1463085ec;
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
LAB_1463085ec:
  FVar9 = (this->Hash).SecondaryData;
  lVar2 = *(longlong *)&this->Elements;
  if (FVar9 == (ForElementType<FSetElementId>)0x0) {
    FVar9 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar11 = (uint *)((longlong)FVar9 + (longlong)*(int *)(lVar2 + 0x44 + lVar8 * 0x50) * 4);
  while( true ) {
    uVar1 = *puVar11;
    if ((uVar1 == 0xffffffff) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar6)) break;
    if (uVar1 == uVar10) {
      *puVar11 = *(uint *)(lVar2 + 0x40 + lVar8 * 0x50);
      TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UPrimitiveComponent>,FCrumblingEventCallbackWrapper>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar10,1);
      TSparseArrayBase<80,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<80,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar10,1);
      return 1;
    }
    puVar11 = (uint *)(*(longlong *)&this->Elements + 0x40 + (longlong)(int)uVar1 * 0x50);
  }
  pcVar5 = (code *)swi(3);
  iVar7 = (*pcVar5)();
  return iVar7;
}

// RemoveImpl<TObjectPtr<UPrimitiveComponent_const_>_> @ 146308690

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __thiscall
TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper,0>,FDefaultSetAllocator>
::RemoveImpl<TObjectPtr<UPrimitiveComponent_const_>_>
          (TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper,0>,FDefaultSetAllocator>
           *this,uint param_1,TObjectPtr<UPrimitiveComponent_const_> *param_2)

{
  uint uVar1;
  longlong lVar2;
  UPrimitiveComponent *pUVar3;
  UPrimitiveComponent *pUVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  ForElementType<FSetElementId> FVar9;
  uint uVar10;
  uint *puVar11;
  undefined1 *puVar12;
  
  FVar9 = (this->Hash).SecondaryData;
  if (FVar9 == (ForElementType<FSetElementId>)0x0) {
    FVar9 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar10 = *(uint *)((longlong)FVar9 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4)
  ;
  if (uVar10 == 0xffffffff) {
    return 0;
  }
  while( true ) {
    lVar2 = *(longlong *)&this->Elements;
    pUVar3 = (param_2->field0_0x0).DebugPtr;
    lVar8 = (longlong)(int)uVar10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UPrimitiveComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    pUVar4 = *(UPrimitiveComponent **)(lVar2 + lVar8 * 0x50);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UPrimitiveComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    if (pUVar4 == pUVar3) break;
    uVar10 = *(uint *)(lVar2 + 0x40 + lVar8 * 0x50);
    if (uVar10 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar10) && ((int)uVar10 < *(int *)&(this->Elements).field_0x28)) {
    puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar12 + (longlong)((int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar10 & 0x1f) & 1) != 0) goto LAB_1463087ac;
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
LAB_1463087ac:
  FVar9 = (this->Hash).SecondaryData;
  lVar2 = *(longlong *)&this->Elements;
  if (FVar9 == (ForElementType<FSetElementId>)0x0) {
    FVar9 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar11 = (uint *)((longlong)FVar9 + (longlong)*(int *)(lVar2 + 0x44 + lVar8 * 0x50) * 4);
  while( true ) {
    uVar1 = *puVar11;
    if ((uVar1 == 0xffffffff) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar6)) break;
    if (uVar1 == uVar10) {
      *puVar11 = *(uint *)(lVar2 + 0x40 + lVar8 * 0x50);
      TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar10,1);
      TSparseArrayBase<80,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<80,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar10,1);
      return 1;
    }
    puVar11 = (uint *)(*(longlong *)&this->Elements + 0x40 + (longlong)(int)uVar1 * 0x50);
  }
  pcVar5 = (code *)swi(3);
  iVar7 = (*pcVar5)();
  return iVar7;
}

// RemoveImpl<FGuid> @ 146308850

int __thiscall
TSet<TTuple<FGuid,TWeakPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TWeakPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
::RemoveImpl<FGuid>(TSet<TTuple<FGuid,TWeakPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TWeakPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
                    *this,uint param_1,FGuid *param_2)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 *puVar9;
  uint *puVar10;
  
  FVar6 = (this->Hash).SecondaryData;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar7 = *(uint *)((longlong)FVar6 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar7 == 0xffffffff) {
    return 0;
  }
  lVar2 = *(longlong *)&this->Elements;
  while (lVar8 = (longlong)(int)uVar7 * 0x28,
        ((param_2->D != *(uint *)(lVar8 + 0xc + lVar2) || param_2->C != *(uint *)(lVar8 + 8 + lVar2)
         ) || param_2->B != *(uint *)(lVar8 + 4 + lVar2)) || param_2->A != *(uint *)(lVar8 + lVar2))
  {
    uVar7 = *(uint *)(lVar8 + 0x20 + lVar2);
    if (uVar7 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)&(this->Elements).field_0x28)) {
    puVar9 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar9 + (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar7 & 0x1f) & 1) != 0) goto LAB_146308966;
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
LAB_146308966:
  FVar6 = (this->Hash).SecondaryData;
  lVar8 = *(longlong *)&this->Elements + lVar8;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar10 = (uint *)((longlong)FVar6 + (longlong)*(int *)(lVar8 + 0x24) * 4);
  while( true ) {
    uVar1 = *puVar10;
    if ((uVar1 == 0xffffffff) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar4)) break;
    if (uVar1 == uVar7) {
      *puVar10 = *(uint *)(lVar8 + 0x20);
      TSparseArray<TSparseSetElement<TTuple<FGuid,TWeakPtr<FChaosVDSessionInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar7,1);
      TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar7,1);
      return 1;
    }
    puVar10 = (uint *)(*(longlong *)&this->Elements + (longlong)(int)uVar1 * 0x28 + 0x20);
  }
  pcVar3 = (code *)swi(3);
  iVar5 = (*pcVar3)();
  return iVar5;
}

// operator= @ 14630b4f0

TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> * __thiscall
TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::operator=
          (TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
           *this,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *pTVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  if (this == param_1) {
    return this;
  }
  UE::Core::Private::
  CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,&this->HashSize,&param_1->Hash,param_1->HashSize);
  iVar6 = *(int *)&(param_1->Elements).field_0x8;
  lVar11 = (longlong)iVar6;
  TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty(&this->Elements,iVar6);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar6,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
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
  iVar12 = 0;
  if (0 < iVar6) {
    uVar10 = 1;
    puVar9 = (undefined4 *)(*(longlong *)&this->Elements + 8);
    lVar13 = *(longlong *)&param_1->Elements - *(longlong *)&this->Elements;
    do {
      if ((iVar12 < 0) || (*(int *)&(param_1->Elements).field_0x28 <= iVar12)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                    *)(*pcVar4)();
          return pTVar7;
        }
      }
      puVar2 = *(undefined1 **)&(param_1->Elements).field_0x20;
      puVar8 = puVar1;
      if (puVar2 != (undefined1 *)0x0) {
        puVar8 = puVar2;
      }
      iVar6 = iVar12;
      if (iVar12 < 0) {
        iVar6 = iVar12 + 0x1f;
      }
      if ((*(uint *)(puVar8 + (longlong)(iVar6 >> 5) * 4) & uVar10) == 0) {
        puVar9[-2] = *(undefined4 *)((longlong)puVar9 + lVar13 + -8);
        puVar9[-1] = *(undefined4 *)(lVar13 + -4 + (longlong)puVar9);
      }
      else {
        pUVar3 = *(UObject **)((longlong)puVar9 + lVar13 + -8);
        *(UObject **)(puVar9 + -2) = pUVar3;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        *puVar9 = *(undefined4 *)(lVar13 + (longlong)puVar9);
        puVar9[1] = *(undefined4 *)(lVar13 + 4 + (longlong)puVar9);
      }
      iVar12 = iVar12 + 1;
      uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
      puVar9 = puVar9 + 4;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return this;
}

// Rehash @ 14631b060

void __thiscall
TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FBreakEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FBreakEventCallbackWrapper,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FBreakEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FBreakEventCallbackWrapper,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14631b137;
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
LAB_14631b137:
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
                 ((longlong)local_40.CurrentBitIndex * 0x50 + *(longlong *)&this->Elements);
        pUVar3 = (UObject *)*puVar9;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        uVar5 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
                -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar5 = (uVar5 >> 0x10 ^ uVar5) & *piVar1 - 1U;
        *(uint *)((longlong)puVar9 + 0x44) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(puVar9 + 8) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14631b240

void __thiscall
TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14631b317;
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
LAB_14631b317:
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
                 ((longlong)local_40.CurrentBitIndex * 0x68 + *(longlong *)&this->Elements);
        pUVar3 = (UObject *)*puVar9;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        uVar5 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
                -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar5 = (uVar5 >> 0x10 ^ uVar5) & *piVar1 - 1U;
        *(uint *)((longlong)puVar9 + 100) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(puVar9 + 0xc) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14631b410

void __thiscall
TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FCrumblingEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FCrumblingEventCallbackWrapper,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FCrumblingEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FCrumblingEventCallbackWrapper,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14631b4e7;
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
LAB_14631b4e7:
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
                 ((longlong)local_40.CurrentBitIndex * 0x50 + *(longlong *)&this->Elements);
        pUVar3 = (UObject *)*puVar9;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        uVar5 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
                -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar5 = (uVar5 >> 0x10 ^ uVar5) & *piVar1 - 1U;
        *(uint *)((longlong)puVar9 + 0x44) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(puVar9 + 8) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14631b5f0

void __thiscall
TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14631b6c7;
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
LAB_14631b6c7:
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
                 ((longlong)local_40.CurrentBitIndex * 0x50 + *(longlong *)&this->Elements);
        pUVar3 = (UObject *)*puVar9;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        uVar5 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
                -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar5 = (uVar5 >> 0x10 ^ uVar5) & *piVar1 - 1U;
        *(uint *)((longlong)puVar9 + 0x44) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(puVar9 + 8) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14631b7d0

void __thiscall
TSet<TTuple<FGuid,FChaosVDRecordingStatusMessage>,TDefaultMapHashableKeyFuncs<FGuid,FChaosVDRecordingStatusMessage,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FGuid,FChaosVDRecordingStatusMessage>,TDefaultMapHashableKeyFuncs<FGuid,FChaosVDRecordingStatusMessage,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  ulong64 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  char *pcVar8;
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
      uVar9 = *puVar10;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar9 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14631b8a7;
        uVar9 = puVar10[lVar5 + 1];
      }
      uStack_54 = -uVar9 & uVar9;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14631b8a7:
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
        pcVar8 = (char *)(*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x80);
        uVar4 = CityHash64(pcVar8,0x10);
        uVar9 = *piVar1 - 1U & (uint)uVar4;
        *(uint *)(pcVar8 + 0x7c) = uVar9;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar9;
        *(undefined4 *)(pcVar8 + 0x78) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = iVar2;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14631b970

void __thiscall
TSet<TTuple<FGuid,FChaosVDTraceDetails>,TDefaultMapHashableKeyFuncs<FGuid,FChaosVDTraceDetails,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FGuid,FChaosVDTraceDetails>,TDefaultMapHashableKeyFuncs<FGuid,FChaosVDTraceDetails,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  ulong64 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  char *pcVar8;
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
      uVar9 = *puVar10;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar9 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14631ba47;
        uVar9 = puVar10[lVar5 + 1];
      }
      uStack_54 = -uVar9 & uVar9;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14631ba47:
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
        pcVar8 = (char *)(*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x68);
        uVar4 = CityHash64(pcVar8,0x10);
        uVar9 = *piVar1 - 1U & (uint)uVar4;
        *(uint *)(pcVar8 + 100) = uVar9;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar9;
        *(undefined4 *)(pcVar8 + 0x60) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = iVar2;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14631bb10

void __thiscall
TSet<TTuple<FGuid,TSharedPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FGuid,TSharedPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  ulong64 uVar5;
  longlong lVar6;
  ulonglong uVar7;
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
    iVar3 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_30.Array;
      }
      uVar9 = *puVar10;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar9 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar6 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14631bbe7;
        uVar9 = puVar10[lVar6 + 1];
      }
      uStack_54 = -uVar9 & uVar9;
      uVar7 = (ulonglong)uStack_54 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_44 = (int)lVar6 + -1 + iStack_40;
      if (iVar3 < iStack_44) {
LAB_14631bbe7:
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
        pcVar2 = (char *)(*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x28);
        uVar5 = CityHash64(pcVar2,0x10);
        uVar9 = *piVar1 - 1U & (uint)uVar5;
        *(uint *)(pcVar2 + 0x24) = uVar9;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar9;
        *(undefined4 *)(pcVar2 + 0x20) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar3;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14631bcb0

void __thiscall
TSet<TTuple<FGuid,TWeakPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TWeakPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FGuid,TWeakPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TWeakPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  ulong64 uVar5;
  longlong lVar6;
  ulonglong uVar7;
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
    iVar3 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_30.Array;
      }
      uVar9 = *puVar10;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar9 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar6 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14631bd87;
        uVar9 = puVar10[lVar6 + 1];
      }
      uStack_54 = -uVar9 & uVar9;
      uVar7 = (ulonglong)uStack_54 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_44 = (int)lVar6 + -1 + iStack_40;
      if (iVar3 < iStack_44) {
LAB_14631bd87:
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
        pcVar2 = (char *)(*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x28);
        uVar5 = CityHash64(pcVar2,0x10);
        uVar9 = *piVar1 - 1U & (uint)uVar5;
        *(uint *)(pcVar2 + 0x24) = uVar9;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar9;
        *(undefined4 *)(pcVar2 + 0x20) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar3;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14631be50

void __thiscall
TSet<TTuple<FString,FChaosVDDataChannelState>,TDefaultMapHashableKeyFuncs<FString,FChaosVDDataChannelState,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FString,FChaosVDDataChannelState>,TDefaultMapHashableKeyFuncs<FString,FChaosVDDataChannelState,0>,FDefaultSetAllocator>
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
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14631bf27;
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
LAB_14631bf27:
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

// RehashOrLink @ 14631c000

void __thiscall
TSet<TTuple<FGuid,TSharedPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
::RehashOrLink(TSet<TTuple<FGuid,TSharedPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
               *this,uint param_1,
              TSparseSetElement<TTuple<FGuid,TSharedPtr<FChaosVDSessionInfo,1>_>_> *param_2,
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
  *(uint *)&param_2->field_0x24 = uVar5;
  FVar4 = (this->Hash).SecondaryData;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar3 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
  *(undefined4 *)&param_2->field_0x20 = *(undefined4 *)((longlong)FVar4 + uVar3 * 4);
  *(int *)((longlong)FVar4 + uVar3 * 4) = param_3;
  return;
}

// RemoveByIndex @ 14631c090

void __thiscall
TSet<TTuple<FGuid,TSharedPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
::RemoveByIndex(TSet<TTuple<FGuid,TSharedPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
                *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  ForElementType<FSetElementId> FVar5;
  undefined1 *puVar6;
  int *piVar7;
  
  if ((-1 < param_1) && (param_1 < *(int *)&(this->Elements).field_0x28)) {
    puVar6 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar6 + (ulonglong)((uint)param_1 >> 5) * 4) >> (param_1 & 0x1fU) & 1) != 0)
    goto LAB_14631c102;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14631c102:
  lVar1 = *(longlong *)&this->Elements + (longlong)param_1 * 0x28;
  FVar5 = (this->Hash).SecondaryData;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  piVar7 = (int *)((longlong)FVar5 + (longlong)*(int *)(lVar1 + 0x24) * 4);
  while( true ) {
    iVar2 = *piVar7;
    if (iVar2 == -1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NextElementIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                         ,0x2b5,L"Corrupt hash");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (iVar2 == param_1) break;
    piVar7 = (int *)(*(longlong *)&this->Elements + (longlong)iVar2 * 0x28 + 0x20);
  }
  *piVar7 = *(int *)(lVar1 + 0x20);
  TSparseArray<TSparseSetElement<TTuple<FGuid,TSharedPtr<FChaosVDSessionInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(&this->Elements,param_1,1);
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized
            ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this,param_1,1);
  return;
}

// Reset @ 14631de30

void __thiscall
TSet<TTuple<UChaosGameplayEventDispatcher::FUniqueContactPairKey,int>,TDefaultMapHashableKeyFuncs<UChaosGameplayEventDispatcher::FUniqueContactPairKey,int,0>,FDefaultSetAllocator>
::Reset(TSet<TTuple<UChaosGameplayEventDispatcher::FUniqueContactPairKey,int>,TDefaultMapHashableKeyFuncs<UChaosGameplayEventDispatcher::FUniqueContactPairKey,int,0>,FDefaultSetAllocator>
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

// TryReplaceExisting @ 146320f20

bool __thiscall
TSet<TTuple<FGuid,TSharedPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FGuid,TSharedPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<FGuid,TSharedPtr<FChaosVDSessionInfo,1>_>_> *param_2,int *param_3
          ,bool *param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = *(int *)&(this->Elements).field_0x8;
  bVar6 = false;
  iVar2 = *(int *)&(this->Elements).field_0x34;
  if ((iVar5 - iVar2 != 1) && (iVar5 != iVar2)) {
    FVar4 = (this->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar5 = *(int *)((longlong)FVar4 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar3 = *(longlong *)&this->Elements;
      do {
        piVar1 = (int *)(lVar3 + (longlong)iVar5 * 0x28);
        if (((*(int *)&param_2->field_0xc == piVar1[3] &&
             *(int *)&param_2->field_0x8 == *(int *)(lVar3 + 8 + (longlong)iVar5 * 0x28)) &&
            *(int *)&param_2->field_0x4 == piVar1[1]) && *(int *)param_2 == *piVar1) {
          bVar6 = iVar5 != -1;
          if (bVar6) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)(lVar3 + 0x18 + (longlong)iVar5 * 0x28));
            memmove((void *)(lVar3 + (longlong)iVar5 * 0x28),param_2,0x20);
            TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,*param_3,1);
            *param_3 = iVar5;
          }
          break;
        }
        iVar5 = piVar1[8];
      } while (iVar5 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar6;
  }
  return bVar6;
}

// TryReplaceExisting @ 146321050

bool __thiscall
TSet<TTuple<FString,FChaosVDDataChannelState>,TDefaultMapHashableKeyFuncs<FString,FChaosVDDataChannelState,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FString,FChaosVDDataChannelState>,TDefaultMapHashableKeyFuncs<FString,FChaosVDDataChannelState,0>,FDefaultSetAllocator>
           *this,uint param_1,TSparseSetElement<TTuple<FString,FChaosVDDataChannelState>_> *param_2,
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
  undefined8 *_Dst;
  uint uVar13;
  bool bVar14;
  
  bVar14 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar9 = FindIndexByHash<FString>(this,param_1,(FString *)param_2);
    bVar14 = iVar9 != -1;
    if (bVar14) {
      _Dst = (undefined8 *)((longlong)iVar9 * 0x30 + *(longlong *)&this->Elements);
      if ((void *)_Dst[2] != (void *)0x0) {
        FMemory::Free((void *)_Dst[2]);
      }
      if ((void *)*_Dst != (void *)0x0) {
        FMemory::Free((void *)*_Dst);
      }
      memmove(_Dst,param_2,0x28);
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
        *(int *)(lVar4 + (longlong)*(int *)&(this->Elements).field_0x30 * 0x30) = iVar3;
      }
      uVar10 = 0xffffffff;
      puVar11 = (undefined4 *)((longlong)iVar3 * 0x30 + lVar4);
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

// UnhashElements @ 146321670

void __thiscall
TSet<TTuple<UChaosGameplayEventDispatcher::FUniqueContactPairKey,int>,TDefaultMapHashableKeyFuncs<UChaosGameplayEventDispatcher::FUniqueContactPairKey,int,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<UChaosGameplayEventDispatcher::FUniqueContactPairKey,int>,TDefaultMapHashableKeyFuncs<UChaosGameplayEventDispatcher::FUniqueContactPairKey,int,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14632176b;
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
LAB_14632176b:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_146321860;
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
LAB_146321860:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<UChaosGameplayEventDispatcher::FUniqueContactPairKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

