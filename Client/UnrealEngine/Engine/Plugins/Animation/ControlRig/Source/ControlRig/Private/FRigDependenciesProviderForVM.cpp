// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// FRigDependenciesProviderForVM @ 14a2da0e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigDependenciesProviderForVM * __thiscall
FRigDependenciesProviderForVM::FRigDependenciesProviderForVM
          (FRigDependenciesProviderForVM *this,UControlRig *param_1,FName *param_2,bool param_3)

{
  UControlRig *local_res8;
  
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FRigDependenciesProviderForVM__6B_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UControlRig *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->WeakControlRig).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UControlRig *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->WeakControlRig).WeakPtr,(FObjectPtr)&local_res8);
  this->EventName = *param_2;
  *(undefined8 *)&this->CachedDependencies = 0;
  *(undefined8 *)&(this->CachedDependencies).field_0x8 = 0;
  *(undefined8 *)&(this->CachedDependencies).field_0x20 = 0;
  this->bFollowVariables = param_3;
  *(undefined4 *)&(this->CachedDependencies).field_0x28 = 0;
  *(undefined4 *)&(this->CachedDependencies).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedDependencies).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedDependencies).field_0x34 = 0;
  *(undefined8 *)&(this->CachedDependencies).field_0x40 = 0;
  *(undefined4 *)&(this->CachedDependencies).field_0x48 = 0;
  *(undefined8 *)&this->CachedReverseDependencies = 0;
  *(undefined8 *)&(this->CachedReverseDependencies).field_0x8 = 0;
  *(undefined8 *)&(this->CachedReverseDependencies).field_0x20 = 0;
  *(undefined4 *)&(this->CachedReverseDependencies).field_0x28 = 0;
  *(undefined4 *)&(this->CachedReverseDependencies).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedReverseDependencies).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedReverseDependencies).field_0x34 = 0;
  *(undefined8 *)&(this->CachedReverseDependencies).field_0x40 = 0;
  *(undefined4 *)&(this->CachedReverseDependencies).field_0x48 = 0;
  this->RecordsHash = 0;
  this->ReverseRecordsHash = 0;
  return this;
}

// ~FRigDependenciesProviderForVM @ 14a2deb30

void __thiscall
FRigDependenciesProviderForVM::~FRigDependenciesProviderForVM(FRigDependenciesProviderForVM *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedReverseDependencies).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedReverseDependencies).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedReverseDependencies);
  *(undefined4 *)&(this->CachedDependencies).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedDependencies).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedDependencies);
  return;
}

// ComputeDependencies @ 14a2f6dd0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigDependenciesProviderForVM::ComputeDependencies
          (FRigDependenciesProviderForVM *this,FControlRigExecuteContext *param_1,URigVM *param_2,
          FName *param_3,
          TMap<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>,0>_>
          *param_4)

{
  return;
}

// GetControlRig @ 14a30d100

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UControlRig * __thiscall
FRigDependenciesProviderForVM::GetControlRig(FRigDependenciesProviderForVM *this)

{
  bool bVar1;
  UControlRig *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->WeakControlRig).WeakPtr);
  if (bVar1) {
    pUVar2 = (UControlRig *)FWeakObjectPtr::Get(&(this->WeakControlRig).WeakPtr);
    return pUVar2;
  }
  return (UControlRig *)0x0;
}

// GetHash @ 14a30f570

uint __thiscall FRigDependenciesProviderForVM::GetHash(FRigDependenciesProviderForVM *this)

{
  return this->RecordsHash;
}

// GetReverseRigHierarchyDependencies @ 14a3151e0

TMap<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>,0>_>
* __thiscall
FRigDependenciesProviderForVM::GetReverseRigHierarchyDependencies
          (FRigDependenciesProviderForVM *this)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  bool *pbVar2;
  FRigHierarchyRecord *pFVar3;
  ulonglong uVar4;
  int iVar5;
  code *pcVar6;
  bool *pbVar7;
  longlong *plVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  TMap<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>,0>_>
  *pTVar14;
  TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator> *this_00;
  FName FVar15;
  TBitArray<FDefaultBitArrayAllocator> *pTVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  bool *pbVar21;
  FName FVar22;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  undefined4 uStack_12c;
  FRigHierarchyRecord local_118;
  longlong *local_108;
  bool *local_100;
  int iStack_f8;
  uint uStack_f4;
  TBitArray<FDefaultBitArrayAllocator> *local_f0;
  undefined4 uStack_e8;
  int iStack_e4;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  bool *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  longlong *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  plVar12 = (longlong *)(**(code **)(this->_padding_ + 8))();
  if (this->ReverseRecordsHash == this->RecordsHash) {
    return &this->CachedReverseDependencies;
  }
  local_108 = plVar12;
  TSet<TTuple<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
           *)&this->CachedReverseDependencies);
  TSet<TTuple<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
             *)&this->CachedReverseDependencies,(int)plVar12[1] - *(int *)((longlong)plVar12 + 0x34)
           );
  iVar5 = (int)plVar12[5];
  FVar22 = (FName)(plVar12 + 2);
  iVar19 = 0;
  iVar20 = 0;
  uVar10 = 1;
  iVar11 = 0;
  if (iVar5 != 0) {
    FVar15 = *(FName *)(plVar12 + 4);
    if (*(FName *)(plVar12 + 4) == (FName)0x0) {
      FVar15 = FVar22;
    }
    uVar18 = *(uint *)FVar15;
    while (uVar18 == 0) {
      lVar13 = (longlong)iVar19;
      iVar20 = iVar20 + 0x20;
      iVar19 = iVar19 + 1;
      iVar11 = iVar5;
      if ((int)((iVar5 + -1 >> 0x1f & 0x1fU) + iVar5 + -1) >> 5 < iVar19) goto LAB_14a3152ee;
      uVar18 = ((uint *)((longlong)FVar15 + 4))[lVar13];
    }
    uVar10 = -uVar18 & uVar18;
    uVar4 = (ulonglong)uVar10 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar11 = iVar20 + -1 + (int)lVar13;
    if (iVar5 < iVar11) {
      iVar11 = iVar5;
    }
  }
LAB_14a3152ee:
  uVar18 = *(uint *)(plVar12 + 5);
  uVar17 = uVar18 & 0xffffffe0;
  TStack_98._padding_ = CONCAT44(uVar10,iVar19);
  TStack_98.CurrentBitIndex = iVar11;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  iVar19 = (int)uVar18 >> 5;
  TStack_98._28_4_ = local_54;
  TStack_98.BaseBitIndex = iVar20;
  uStack_78 = CONCAT44(uStack_12c,(int)plVar12[1] - *(int *)((longlong)plVar12 + 0x34));
  local_res20 = uVar18;
  local_118.Name = FVar22;
  local_a0 = plVar12;
  TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar22;
  if ((((int)uVar18 < 0) || (iVar5 < (int)uVar18)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    pTVar14 = (TMap<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>,0>_>
               *)(*pcVar6)();
    return pTVar14;
  }
  uVar10 = *(uint *)(plVar12 + 5);
  if (uVar18 != uVar10) {
    FVar15 = *(FName *)(plVar12 + 4);
    if (*(FName *)(plVar12 + 4) == (FName)0x0) {
      FVar15 = FVar22;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)((longlong)FVar15 + (longlong)iVar19 * 4);
    while (uVar18 == 0) {
      lVar13 = (longlong)iVar19;
      uVar17 = uVar17 + 0x20;
      iVar19 = iVar19 + 1;
      uVar18 = uVar10;
      local_res20 = uVar10;
      if ((int)(((int)(uVar10 - 1) >> 0x1f & 0x1fU) + (uVar10 - 1)) >> 5 < iVar19)
      goto LAB_14a315420;
      uVar18 = ((uint *)((longlong)FVar15 + 4))[lVar13];
    }
    uVar4 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar18 = (int)lVar13 + -1 + uVar17;
    local_res20 = uVar18;
    if ((int)uVar10 < (int)uVar18) {
      uVar18 = uVar10;
      local_res20 = uVar10;
    }
  }
LAB_14a315420:
  do {
    plVar8 = local_a0;
    if ((int)local_a0[1] - *(int *)((longlong)local_a0 + 0x34) != (int)uStack_78) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_98.CurrentBitIndex == uVar18) && ((FName)TStack_98.Array == FVar22)) &&
       (plVar8 == plVar12)) {
      this->ReverseRecordsHash = this->RecordsHash;
      return &this->CachedReverseDependencies;
    }
    iStack_f8 = 0;
    local_e0 = 0;
    pbVar21 = (bool *)((longlong)TStack_98.CurrentBitIndex * 0x68 + *plVar8);
    uStack_f4 = 1;
    iVar5 = *(int *)(pbVar21 + 0x38);
    pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(pbVar21 + 0x20);
    pbVar2 = pbVar21 + 0x10;
    iStack_e4 = 0;
    if (iVar5 != 0) {
      pTVar16 = pTVar1;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(pbVar21 + 0x30) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar16 = *(TBitArray<FDefaultBitArrayAllocator> **)(pbVar21 + 0x30);
      }
      uVar10 = *(uint *)(pTVar16->AllocatorInstance).InlineData;
      while (uVar10 == 0) {
        lVar13 = (longlong)iStack_f8;
        local_e0 = local_e0 + 0x20;
        iStack_f8 = iStack_f8 + 1;
        iStack_e4 = iVar5;
        if ((int)((iVar5 + -1 >> 0x1f & 0x1fU) + iVar5 + -1) >> 5 < iStack_f8) goto LAB_14a3154ee;
        uVar10 = *(uint *)((pTVar16->AllocatorInstance).InlineData + lVar13 * 4 + 4);
      }
      uStack_f4 = -uVar10 & uVar10;
      uVar4 = (ulonglong)uStack_f4 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iStack_e4 = local_e0 + -1 + (int)lVar13;
      if (iVar5 < iStack_e4) {
        iStack_e4 = iVar5;
      }
    }
LAB_14a3154ee:
    uVar10 = *(uint *)(pbVar21 + 0x38);
    uVar18 = uVar10 & 0xffffffe0;
    iStack_d8 = *(int *)(pbVar21 + 0x18) - *(int *)(pbVar21 + 0x44);
    TStack_c8._padding_ = CONCAT44(uStack_f4,iStack_f8);
    uStack_e8 = 0xffffffff;
    TStack_c8.CurrentBitIndex = iStack_e4;
    TStack_c8.UnvisitedBitMask = 0xffffffff;
    iVar19 = (int)uVar10 >> 5;
    TStack_c8._28_4_ = iVar11;
    TStack_c8.BaseBitIndex = local_e0;
    uStack_a8 = CONCAT44(uStack_d4,iStack_d8);
    local_100 = pbVar2;
    local_f0 = pTVar1;
    iStack_dc = iVar11;
    local_d0 = pbVar2;
    TStack_c8.Array = pTVar1;
    if ((((int)uVar10 < 0) || (iVar5 < (int)uVar10)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      pTVar14 = (TMap<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>,0>_>
                 *)(*pcVar6)();
      return pTVar14;
    }
    uVar17 = *(uint *)(pbVar21 + 0x38);
    if (uVar10 != uVar17) {
      pTVar16 = pTVar1;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(pbVar21 + 0x30) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar16 = *(TBitArray<FDefaultBitArrayAllocator> **)(pbVar21 + 0x30);
      }
      uVar10 = -1 << ((byte)uVar10 & 0x1f) &
               *(uint *)((pTVar16->AllocatorInstance).InlineData + (longlong)iVar19 * 4);
      while (uVar10 == 0) {
        lVar13 = (longlong)iVar19;
        uVar18 = uVar18 + 0x20;
        iVar19 = iVar19 + 1;
        uVar10 = uVar17;
        if ((int)(((int)(uVar17 - 1) >> 0x1f & 0x1fU) + (uVar17 - 1)) >> 5 < iVar19)
        goto LAB_14a3155f0;
        uVar10 = *(uint *)((pTVar16->AllocatorInstance).InlineData + lVar13 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      uVar10 = (int)lVar13 + -1 + uVar18;
      if ((int)uVar17 < (int)uVar10) {
        uVar10 = uVar17;
      }
    }
LAB_14a3155f0:
    while( true ) {
      pbVar7 = local_d0;
      if (*(int *)(local_d0 + 8) - *(int *)(local_d0 + 0x34) != (int)uStack_a8) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<FRigHierarchyRecord>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_c8.CurrentBitIndex == uVar10) && (TStack_c8.Array == pTVar1)) &&
         (pbVar7 == pbVar2)) break;
      pFVar3 = (FRigHierarchyRecord *)
               (*(longlong *)pbVar7 + (longlong)TStack_c8.CurrentBitIndex * 0x18);
      uVar18 = ::GetTypeHash(pFVar3);
      this_00 = TMapBase<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>,0>_>
                ::FindOrAddImpl<FRigHierarchyRecord_const_&>
                          ((TMapBase<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>,0>_>
                            *)&this->CachedReverseDependencies,uVar18,pFVar3);
      TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>::
      Emplace<FRigHierarchyRecord_const_&>(this_00,&local_118,pbVar21);
      TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
    }
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
    plVar12 = local_108;
    FVar22 = local_118.Name;
    uVar18 = local_res20;
  } while( true );
}

// GetRigHierarchyDependencies @ 14a315b50

TMap<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>,0>_>
* __thiscall
FRigDependenciesProviderForVM::GetRigHierarchyDependencies(FRigDependenciesProviderForVM *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FRigDependenciesProviderForVM::GetRigHierarchyDependencies'::__l2::
             _dynamic_atexit_destructor_for__Empty__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &this->CachedDependencies;
}

// InvalidateCache @ 14a324ff0

void __thiscall FRigDependenciesProviderForVM::InvalidateCache(FRigDependenciesProviderForVM *this)

{
  TSet<TTuple<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
           *)&this->CachedDependencies);
  TSet<TTuple<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
           *)&this->CachedReverseDependencies);
  this->RecordsHash = 0xffffffff;
  this->ReverseRecordsHash = 0xffffffff;
  return;
}

