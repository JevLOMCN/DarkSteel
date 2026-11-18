// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Foliage
// Functions: 3

// Emplace<TObjectPtr<UFoliageType>_> @ 145ed2c80

TUniqueObj<FFoliageInfo> * __thiscall
TMapBase<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,0>_>
::Emplace<TObjectPtr<UFoliageType>_>
          (TMapBase<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,0>_>
           *this,TObjectPtr<UFoliageType> *param_1)

{
  int iVar1;
  int iVar2;
  UObject *pUVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  TKeyInitializer<TObjectPtr<UFoliageType>_&&> local_res8;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  local_res8.Key = param_1;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar7 + 4 + (longlong)iVar5 * 0x18);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar7 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_>_> *)0x0) {
    TKeyInitializer<TObjectPtr<UFoliageType>_&&>::
    operator<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_>_TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_>
              (&local_res8,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x10) = 0xffffffff;
  }
  pUVar3 = *(UObject **)local_18.Pointer;
  local_res8.Key._0_4_ = local_18.Index;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  uVar6 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  bVar4 = TSet<TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,local_18.Pointer,(int *)&local_res8,(bool *)0x0);
  lVar7 = (longlong)(int)local_res8.Key;
  if (!bVar4) {
    TSet<TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,local_18.Pointer,(int)local_res8.Key);
  }
  return (TUniqueObj<FFoliageInfo> *)(*(longlong *)&(this->Pairs).Elements + lVar7 * 0x18 + 8);
}

// Emplace<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_> @ 145ed2de0

TUniqueObj<FFoliageInfo> * __thiscall
TMapBase<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,0>_>
::Emplace<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_>
          (TMapBase<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,0>_>
           *this,TObjectPtr<UFoliageType> *param_1,TUniqueObj<FFoliageInfo> *param_2)

{
  int iVar1;
  int iVar2;
  UObject *pUVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar7 + 4 + (longlong)iVar5 * 0x18);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar7 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  if (local_28.Pointer !=
      (TSparseSetElement<TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_>_> *)0x0) {
    TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_>::
    TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_><TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_>
              (local_28.Pointer,param_1,param_2);
    *(undefined4 *)((longlong)local_28.Pointer + 0x10) = 0xffffffff;
  }
  pUVar3 = *(UObject **)local_28.Pointer;
  local_res8[0] = local_28.Index;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  uVar6 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  bVar4 = TSet<TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,local_28.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,local_28.Pointer,local_res8[0]);
  }
  return (TUniqueObj<FFoliageInfo> *)(*(longlong *)&(this->Pairs).Elements + lVar7 * 0x18 + 8);
}

// Find @ 145ee1830

TUniqueObj<FFoliageInfo> * __thiscall
TMapBase<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,0>_>
::Find(TMapBase<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,0>_>
       *this,TObjectPtr<UFoliageType_const_> param_1)

{
  longlong lVar1;
  TObjectPtr<UFoliageType_const_>_u_0 TVar2;
  int iVar3;
  TUniqueObj<FFoliageInfo> *pTVar4;
  uint uVar5;
  TObjectPtr<UFoliageType_const_>_u_0 local_res8;
  
                    /* WARNING: Load size is inaccurate */
  TVar2.DebugPtr = *param_1.field0_0x0;
  local_res8 = TVar2;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (TVar2.DebugPtr != (UFoliageType *)0x0) {
      UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar2.DebugPtr != (UFoliageType *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
    }
  }
  uVar5 = ((uint)((ulonglong)TVar2.DebugPtr >> 0x14) & 0xffff ^
          (uint)((ulonglong)TVar2.DebugPtr >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  iVar3 = TSet<TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TObjectPtr<UFoliageType_const_>_>
                    (&this->Pairs,uVar5 >> 0x10 ^ uVar5,
                     (TObjectPtr<UFoliageType_const_> *)&local_res8.ObjectPtr);
  if (iVar3 != -1) {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar3 * 0x18;
    pTVar4 = (TUniqueObj<FFoliageInfo> *)0x0;
    if (lVar1 != 0) {
      pTVar4 = (TUniqueObj<FFoliageInfo> *)(lVar1 + 8);
    }
    return pTVar4;
  }
  return (TUniqueObj<FFoliageInfo> *)0x0;
}

