// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// CopyTopsOnly @ 1474c9ca0

void __thiscall FAnimNodeTracker::CopyTopsOnly(FAnimNodeTracker *this,FAnimNodeTracker *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  ForElementType<FAnimNode_Base_*> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<FAnimNode_Base_*> FVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  FAnimNodeTracker *pFVar11;
  FAnimNodeTracker *pFVar12;
  ForElementType<FAnimNode_Base_*> FVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar16;
  ForElementType<FAnimNode_Base_*> FVar17;
  undefined1 *puVar18;
  uint *puVar19;
  undefined1 local_res8 [8];
  TKeyInitializer<FObjectKey_const_&> local_res10;
  int local_res18;
  int local_res20;
  undefined1 *local_b8;
  FAnimNodeTracker *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  FAnimNodeTracker *local_80;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> TStack_78;
  undefined8 uStack_58;
  
  TSet<TTuple<FObjectKey,TArray<FAnimNode_Base_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<FAnimNode_Base_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  ::Reset((TSet<TTuple<FObjectKey,TArray<FAnimNode_Base_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<FAnimNode_Base_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
           *)this);
  TSet<TTuple<FObjectKey,TArray<FAnimNode_Base_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<FAnimNode_Base_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  ::Reserve((TSet<TTuple<FObjectKey,TArray<FAnimNode_Base_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<FAnimNode_Base_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
             *)this,*(int *)&(param_1->Map).field_0x108 - *(int *)&(param_1->Map).field_0x12c);
  puVar1 = &(param_1->Map).field_0x110;
  iStack_a8 = 0;
  iVar6 = *(int *)&(param_1->Map).field_0x120;
  local_90 = 0;
  uStack_a4 = 1;
  iStack_94 = 0;
  if (iVar6 != 0) {
    puVar19 = *(uint **)&(param_1->Map).field_0x118;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uVar15 = *puVar19;
    while (uVar15 == 0) {
      lVar8 = (longlong)iStack_a8;
      local_90 = local_90 + 0x20;
      iStack_a8 = iStack_a8 + 1;
      iStack_94 = iVar6;
      if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_1474c9d5d;
      uVar15 = puVar19[lVar8 + 1];
    }
    uStack_a4 = -uVar15 & uVar15;
    uVar2 = (ulonglong)uStack_a4 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    iStack_94 = local_90 + -1 + local_res18;
    if (iVar6 < iStack_94) {
      iStack_94 = iVar6;
    }
  }
LAB_1474c9d5d:
  uVar15 = *(uint *)&(param_1->Map).field_0x120;
  uVar14 = uVar15 & 0xffffffe0;
  iStack_88 = *(int *)&(param_1->Map).field_0x108 - *(int *)&(param_1->Map).field_0x12c;
  uStack_98 = 0xffffffff;
  TStack_78._padding_ = CONCAT44(uStack_a4,iStack_a8);
  TStack_78.CurrentBitIndex = iStack_94;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar15 >> 5;
  TStack_78._28_4_ = iStack_94;
  TStack_78.BaseBitIndex = local_90;
  uStack_58 = CONCAT44(uStack_84,iStack_88);
  local_b0 = param_1;
  local_a0 = puVar1;
  iStack_8c = iStack_94;
  local_80 = param_1;
  TStack_78.Array = (TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar6 < (int)uVar15)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar9 = *(uint *)&(param_1->Map).field_0x120;
  if (uVar15 != uVar9) {
    puVar18 = *(undefined1 **)&(param_1->Map).field_0x118;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar10 * 4);
    while (uVar15 == 0) {
      lVar8 = (longlong)iVar10;
      uVar14 = uVar14 + 0x20;
      iVar10 = iVar10 + 1;
      uVar15 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_1474c9e60;
      uVar15 = *(uint *)(puVar18 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res20 = (int)lVar8;
    uVar15 = local_res20 + -1 + uVar14;
    if ((int)uVar9 < (int)uVar15) {
      uVar15 = uVar9;
    }
  }
LAB_1474c9e60:
  do {
    pFVar11 = local_80;
    if (*(int *)&(local_80->Map).field_0x108 - *(int *)&(local_80->Map).field_0x12c !=
        (int)uStack_58) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FObjectKey,TArray<FAnimNode_Base_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_78.CurrentBitIndex == uVar15) &&
        (TStack_78.Array ==
         (TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)puVar1)) &&
       (pFVar11 == param_1)) {
      return;
    }
    pFVar12 = *(FAnimNodeTracker **)&(pFVar11->Map).field_0x100;
    if (pFVar12 != (FAnimNodeTracker *)0x0) {
      pFVar11 = pFVar12;
    }
    puVar18 = &(pFVar11->Map).field_0x0 + (longlong)TStack_78.CurrentBitIndex * 0x40;
    if (*(int *)(puVar18 + 0x30) != 0) {
      local_b8 = puVar18;
      TSet<TTuple<FObjectKey,TArray<FAnimNode_Base_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<FAnimNode_Base_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
      ::Emplace<TKeyInitializer<FObjectKey_const_&>_>
                ((TSet<TTuple<FObjectKey,TArray<FAnimNode_Base_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<FAnimNode_Base_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                  *)this,&local_res10,(bool *)&local_b8);
      pFVar11 = *(FAnimNodeTracker **)&(this->Map).field_0x100;
      pFVar12 = this;
      if (pFVar11 != (FAnimNodeTracker *)0x0) {
        pFVar12 = pFVar11;
      }
      FVar13 = (ForElementType<FAnimNode_Base_*>)
               (&(pFVar12->Map).field_0x8 + (longlong)(int)local_res10.Key * 0x40);
      uVar9 = *(int *)(puVar18 + 0x30) - 1;
      uVar14 = 0;
      if ((int)uVar9 < *(int *)(puVar18 + 0x30)) {
        uVar14 = ~uVar9 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar3 = *(ForElementType<FAnimNode_Base_*> *)((longlong)FVar13 + 0x20);
      puVar16 = puVar18 + 8;
      if (*(undefined1 **)(puVar18 + 0x28) != (undefined1 *)0x0) {
        puVar16 = *(undefined1 **)(puVar18 + 0x28);
      }
      FVar17 = (ForElementType<FAnimNode_Base_*>)
               (puVar16 + (longlong)*(int *)(puVar18 + 0x30) * 8 + -8);
      FVar7 = FVar13;
      if (FVar3 != (ForElementType<FAnimNode_Base_*>)0x0) {
        FVar7 = FVar3;
      }
      if ((ulonglong)FVar7 <= (ulonglong)FVar17) {
        FVar7 = FVar13;
        if (FVar3 != (ForElementType<FAnimNode_Base_*>)0x0) {
          FVar7 = FVar3;
        }
        if (((ulonglong)FVar17 <
             (ulonglong)((longlong)FVar7 + (longlong)*(int *)((longlong)FVar13 + 0x2c) * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)((longlong)FVar13 + 0x28);
      if (iVar6 == *(int *)((longlong)FVar13 + 0x2c)) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FAnimNode_Base_*>_>
                          (0x808,(ForElementType<FAnimNode_Base_*> *)FVar13,
                           (int *)((longlong)FVar13 + 0x2c));
      }
      *(int *)((longlong)FVar13 + 0x28) = iVar6 + 1;
      if (*(ForElementType<FAnimNode_Base_*> **)((longlong)FVar13 + 0x20) !=
          (ForElementType<FAnimNode_Base_*> *)0x0) {
        FVar13 = (ForElementType<FAnimNode_Base_*>)
                 *(ForElementType<FAnimNode_Base_*> **)((longlong)FVar13 + 0x20);
      }
      *(undefined8 *)
       (((ForElementType<FAnimNode_Base_*> *)FVar13)->InlineData + (longlong)iVar6 * 8) =
           *(undefined8 *)FVar17;
    }
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FindFirstSetBit
              (&TStack_78);
  } while( true );
}

