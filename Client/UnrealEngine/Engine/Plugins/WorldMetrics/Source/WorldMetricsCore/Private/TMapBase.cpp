// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WorldMetricsCore
// Functions: 3

// GenerateKeyArray<TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> @ 14f131990

void __thiscall
TMapBase<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>_>
::GenerateKeyArray<TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
          (TMapBase<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>_>
           *this,TArray<TSubclassOf<UWorldMetricsExtension>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                 *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  TMapBase<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>_>
  *pTVar5;
  ForElementType<TSubclassOf<UWorldMetricsExtension>_> FVar6;
  UObject *pUVar7;
  code *pcVar8;
  bool bVar9;
  ForElementType<TSubclassOf<UWorldMetricsExtension>_> FVar10;
  longlong lVar11;
  TMapBase<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>_>
  *pTVar12;
  int iVar13;
  ForElementType<TSubclassOf<UWorldMetricsExtension>_> FVar14;
  uint uVar15;
  int iVar16;
  uint *puVar17;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> TStack_40;
  
  uVar15 = *(int *)&(this->Pairs).Elements.field_0x2988 -
           *(int *)&(this->Pairs).Elements.field_0x29ac;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  piVar1 = &param_1->ArrayMax;
  iVar13 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar15) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TSubclassOf<UWorldMetricsExtension>_>_>
              (8,8,uVar15,&param_1->AllocatorInstance,0,piVar1);
  }
  TStack_40.Array =
       (TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
       &(this->Pairs).Elements.field_0x2990;
  uVar15 = 1;
  iVar3 = *(int *)&(this->Pairs).Elements.field_0x29a0;
  iVar16 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->Pairs).Elements.field_0x2998;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)TStack_40.Array;
    }
    uVar4 = *puVar17;
    while (uVar4 == 0) {
      lVar11 = (longlong)iVar13;
      iVar16 = iVar16 + 0x20;
      iVar13 = iVar13 + 1;
      TStack_40.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14f131a72;
      uVar4 = puVar17[lVar11 + 1];
    }
    uVar15 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar15 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = iVar16 + -1 + (int)lVar11;
    if (iVar3 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar3;
    }
  }
LAB_14f131a72:
  TStack_40._padding_ = CONCAT44(uVar15,iVar13);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar16;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x29a0) {
    do {
      pTVar5 = *(TMapBase<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>_>
                 **)&(this->Pairs).Elements.field_0x2980;
      pTVar12 = this;
      if (pTVar5 != (TMapBase<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>_>
                     *)0x0) {
        pTVar12 = pTVar5;
      }
      FVar14 = (ForElementType<TSubclassOf<UWorldMetricsExtension>_>)
               ((longlong)&(pTVar12->Pairs).Elements.field_0x0 +
               (longlong)TStack_40.CurrentBitIndex * 0x298);
      FVar6 = (param_1->AllocatorInstance).SecondaryData;
      FVar10 = (ForElementType<TSubclassOf<UWorldMetricsExtension>_>)param_1;
      if (FVar6 != (ForElementType<TSubclassOf<UWorldMetricsExtension>_>)0x0) {
        FVar10 = FVar6;
      }
      if ((ulonglong)FVar10 <= (ulonglong)FVar14) {
        FVar10 = (ForElementType<TSubclassOf<UWorldMetricsExtension>_>)param_1;
        if (FVar6 != (ForElementType<TSubclassOf<UWorldMetricsExtension>_>)0x0) {
          FVar10 = FVar6;
        }
        if (((ulonglong)FVar14 < (ulonglong)((longlong)FVar10 + (longlong)*piVar1 * 8)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      iVar13 = param_1->ArrayNum;
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TSubclassOf<UWorldMetricsExtension>_>_>
                           (0x808,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar13 + 1;
      FVar6 = (param_1->AllocatorInstance).SecondaryData;
      FVar10 = (ForElementType<TSubclassOf<UWorldMetricsExtension>_>)param_1;
      if (FVar6 != (ForElementType<TSubclassOf<UWorldMetricsExtension>_>)0x0) {
        FVar10 = FVar6;
      }
      pUVar7 = *(UObject **)FVar14;
      *(UObject **)((longlong)FVar10 + (longlong)iVar13 * 8) = pUVar7;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar7);
      }
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
      FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// Find @ 14f136510

FExtension * __thiscall
TMapBase<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>_>
::Find(TMapBase<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>_>
       *this,TSubclassOf<UWorldMetricsExtension_const_> param_1)

{
  TObjectPtr<UClass>_u_0 TVar1;
  TMapBase<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>_>
  *pTVar2;
  int iVar3;
  FExtension *pFVar4;
  uint uVar5;
  undefined1 *puVar6;
  TObjectPtr<UClass>_u_0 local_res8;
  
  TVar1 = *(TObjectPtr<UClass>_u_0 *)param_1.Class.field0_0x0;
  local_res8 = TVar1;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (TVar1.DebugPtr != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar1.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
  }
  uVar5 = ((uint)((ulonglong)TVar1.DebugPtr >> 0x14) & 0xffff ^
          (uint)((ulonglong)TVar1.DebugPtr >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  iVar3 = TSet<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
          ::FindIndexByHash<TSubclassOf<UWorldMetricsExtension_const_>_>
                    (&this->Pairs,uVar5 >> 0x10 ^ uVar5,
                     (TSubclassOf<UWorldMetricsExtension_const_> *)&local_res8.ObjectPtr);
  if (iVar3 != -1) {
    pTVar2 = *(TMapBase<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>_>
               **)&(this->Pairs).Elements.field_0x2980;
    if (pTVar2 != (TMapBase<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>_>
                   *)0x0) {
      this = pTVar2;
    }
    puVar6 = &(this->Pairs).Elements.field_0x0 + (longlong)iVar3 * 0x298;
    pFVar4 = (FExtension *)0x0;
    if (puVar6 != (undefined1 *)0x0) {
      pFVar4 = (FExtension *)(puVar6 + 8);
    }
    return pFVar4;
  }
  return (FExtension *)0x0;
}

// Remove @ 14f138250

int __thiscall
TMapBase<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>_>
::Remove(TMapBase<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>_>
         *this,TSubclassOf<UWorldMetricsExtension_const_> param_1)

{
  TObjectPtr<UClass>_u_0 TVar1;
  int iVar2;
  uint uVar3;
  TObjectPtr<UClass>_u_0 local_res8;
  
  TVar1 = *(TObjectPtr<UClass>_u_0 *)param_1.Class.field0_0x0;
  local_res8 = TVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (TVar1.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
  }
  if (*(int *)&(this->Pairs).Elements.field_0x2988 != *(int *)&(this->Pairs).Elements.field_0x29ac)
  {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar1.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
    uVar3 = ((uint)((ulonglong)TVar1.DebugPtr >> 0x14) & 0xffff ^
            (uint)((ulonglong)TVar1.DebugPtr >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    iVar2 = TSet<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>,TDefaultMapHashableKeyFuncs<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
            ::RemoveImpl<TSubclassOf<UWorldMetricsExtension_const_>_>
                      (&this->Pairs,uVar3 >> 0x10 ^ uVar3,
                       (TSubclassOf<UWorldMetricsExtension_const_> *)&local_res8.ObjectPtr);
    return iVar2;
  }
  return 0;
}

