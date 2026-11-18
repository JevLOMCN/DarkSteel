// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 14

// ~FMessageStack @ 147436750

void __thiscall UE::Anim::FMessageStack::~FMessageStack(FMessageStack *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->TagStacks).field_0x1c0 = 0;
  pvVar1 = *(void **)&(this->TagStacks).field_0x1b8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
              *)&this->TagStacks);
  *(undefined4 *)&(this->MessageStacks).field_0x948 = 0;
  pvVar1 = *(void **)&(this->MessageStacks).field_0x940;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>_>,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>_>,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>_>,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
              *)this);
  return;
}

// BottomMessage @ 1474c0ac0

void __thiscall
UE::Anim::FMessageStack::BottomMessage
          (FMessageStack *this,FName param_1,
          TFunctionRef<void___cdecl(UE::Anim::IGraphMessage_&)> *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
  *pTVar4;
  FName *pFVar5;
  IGraphMessage *pIVar6;
  TSharedPtr<UE::Anim::IGraphMessage,1> *this_00;
  undefined1 local_res8 [8];
  
  pTVar4 = TSet<TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
           ::Find((TSet<TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                   *)this,param_1);
  this_00 = (TSharedPtr<UE::Anim::IGraphMessage,1> *)&pTVar4->field_0x8;
  if (pTVar4 == (TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
                 *)0x0) {
    this_00 = (TSharedPtr<UE::Anim::IGraphMessage,1> *)0x0;
  }
  if (this_00 != (TSharedPtr<UE::Anim::IGraphMessage,1> *)0x0) {
    iVar1 = *(int *)&this_00[0x10].SharedReferenceCount.ReferenceController;
    if (iVar1 != 0) {
      if (iVar1 < 1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if ((TSharedPtr<UE::Anim::IGraphMessage,1> *)this_00[0x10].Object !=
          (TSharedPtr<UE::Anim::IGraphMessage,1> *)0x0) {
        this_00 = (TSharedPtr<UE::Anim::IGraphMessage,1> *)this_00[0x10].Object;
      }
      if (this_00->Object == (IGraphMessage *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pFVar5 = (FName *)(**(code **)((longlong)*this_00->Object + 8))(this_00->Object,local_res8);
      if (*pFVar5 == param_1) {
        pIVar6 = TSharedPtr<UE::Anim::IGraphMessage,1>::operator*<UE::Anim::IGraphMessage>(this_00);
        (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,pIVar6);
      }
    }
  }
  return;
}

// CopyForCachedUpdate @ 1474c9160

void __thiscall
UE::Anim::FMessageStack::CopyForCachedUpdate(FMessageStack *this,FMessageStack *param_1)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  TMap<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
  *pTVar4;
  FMessageStack *pFVar5;
  ForElementType<UE::Anim::FMessageStack::FMessageEntry> FVar6;
  ForElementType<UE::Anim::FMessageStack::FNodeInfo> FVar7;
  code *pcVar8;
  undefined8 uVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ForElementType<UE::Anim::FMessageStack::FMessageEntry> FVar15;
  ForElementType<UE::Anim::FMessageStack::FMessageEntry> FVar16;
  ForElementType<UE::Anim::FMessageStack::FNodeInfo> FVar17;
  ForElementType<UE::Anim::FMessageStack::FNodeInfo> FVar18;
  longlong lVar19;
  longlong lVar20;
  FMessageStack *pFVar21;
  TMap<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
  *this_00;
  TMap<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
  *pTVar22;
  uint uVar23;
  uint uVar24;
  ForElementType<UE::Anim::FMessageStack::FMessageEntry> FVar25;
  FName *pFVar26;
  FName FVar27;
  ForElementType<UE::Anim::FMessageStack::FNodeInfo> FVar28;
  int iVar29;
  uint uVar30;
  undefined1 *puVar31;
  int iVar32;
  uint *puVar33;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
  uint local_148;
  undefined4 uStack_114;
  undefined4 uStack_cc;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> TStack_c0;
  undefined8 uStack_a0;
  TMap<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
  *local_98;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> TStack_90;
  undefined8 uStack_70;
  undefined4 local_4c;
  
  TSet<TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  ::Reset((TSet<TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
           *)this);
  TSet<TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  ::Reserve((TSet<TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
             *)this,*(int *)&(param_1->MessageStacks).field_0x908 -
                    *(int *)&(param_1->MessageStacks).field_0x92c);
  puVar3 = &(param_1->MessageStacks).field_0x910;
  iVar13 = *(int *)&(param_1->MessageStacks).field_0x920;
  iVar29 = 0;
  iVar32 = 0;
  local_148 = 1;
  uVar11 = 1;
  iVar12 = 0;
  if (iVar13 != 0) {
    puVar33 = *(uint **)&(param_1->MessageStacks).field_0x918;
    if (puVar33 == (uint *)0x0) {
      puVar33 = (uint *)puVar3;
    }
    uVar11 = *puVar33;
    while (uVar11 == 0) {
      lVar19 = (longlong)iVar29;
      iVar32 = iVar32 + 0x20;
      iVar29 = iVar29 + 1;
      uVar11 = 1;
      iVar12 = iVar13;
      if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar29) goto LAB_1474c9230;
      uVar11 = puVar33[lVar19 + 1];
    }
    uVar11 = -uVar11 & uVar11;
    uVar1 = (ulonglong)uVar11 * 2 + 1;
    lVar19 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_res20 = (int)lVar19;
    iVar12 = iVar32 + -1 + local_res20;
    if (iVar13 < iVar12) {
      iVar12 = iVar13;
    }
  }
LAB_1474c9230:
  uVar24 = *(uint *)&(param_1->MessageStacks).field_0x920;
  uVar23 = uVar24 & 0xffffffe0;
  TStack_c0._padding_ = CONCAT44(uVar11,iVar29);
  TStack_c0.CurrentBitIndex = iVar12;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  iVar29 = (int)uVar24 >> 5;
  TStack_c0._28_4_ = local_4c;
  TStack_c0.BaseBitIndex = iVar32;
  uStack_a0 = CONCAT44(uStack_114,
                       *(int *)&(param_1->MessageStacks).field_0x908 -
                       *(int *)&(param_1->MessageStacks).field_0x92c);
  TStack_c0.Array = (TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)puVar3;
  if ((((int)uVar24 < 0) || (iVar13 < (int)uVar24)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar11 = *(uint *)&(param_1->MessageStacks).field_0x920;
  if (uVar24 != uVar11) {
    puVar31 = *(undefined1 **)&(param_1->MessageStacks).field_0x918;
    if (puVar31 == (undefined1 *)0x0) {
      puVar31 = puVar3;
    }
    uVar24 = -1 << ((byte)uVar24 & 0x1f) & *(uint *)(puVar31 + (longlong)iVar29 * 4);
    while (uVar24 == 0) {
      lVar19 = (longlong)iVar29;
      uVar23 = uVar23 + 0x20;
      iVar29 = iVar29 + 1;
      uVar24 = uVar11;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar29)
      goto LAB_1474c9360;
      uVar24 = *(uint *)(puVar31 + lVar19 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    uVar24 = (int)lVar19 + -1 + uVar23;
    if ((int)uVar11 < (int)uVar24) {
      uVar24 = uVar11;
    }
  }
LAB_1474c9360:
  while( true ) {
    if (*(int *)&(param_1->MessageStacks).field_0x908 -
        *(int *)&(param_1->MessageStacks).field_0x92c != (int)uStack_a0) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>_>,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_c0.CurrentBitIndex == uVar24) &&
       (TStack_c0.Array ==
        (TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)puVar3)) break;
    pFVar5 = *(FMessageStack **)&(param_1->MessageStacks).field_0x900;
    pFVar21 = param_1;
    if (pFVar5 != (FMessageStack *)0x0) {
      pFVar21 = pFVar5;
    }
    pFVar26 = (FName *)(&(pFVar21->MessageStacks).field_0x0 +
                       (longlong)TStack_c0.CurrentBitIndex * 0x120);
    if (0 < (int)pFVar26[0x22].ComparisonIndex.Value) {
      FVar15 = (ForElementType<UE::Anim::FMessageStack::FMessageEntry>)
               TMapBase<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>_>
               ::Emplace<FName_const_&>
                         ((TMapBase<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>_>
                           *)this,pFVar26);
      uVar11 = pFVar26[0x22].ComparisonIndex.Value;
      uVar30 = uVar11 - 1;
      uVar23 = 0;
      if ((int)uVar30 < (int)uVar11) {
        uVar23 = ~uVar30 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FVar6 = *(ForElementType<UE::Anim::FMessageStack::FMessageEntry> *)((longlong)FVar15 + 0x100);
      FVar27 = (FName)(pFVar26 + 1);
      if (pFVar26[0x21] != (FName)0x0) {
        FVar27 = pFVar26[0x21];
      }
      FVar25 = (ForElementType<UE::Anim::FMessageStack::FMessageEntry>)
               ((longlong)FVar27 + (longlong)(int)pFVar26[0x22].ComparisonIndex.Value * 0x20 + -0x20
               );
      FVar16 = FVar15;
      if (FVar6 != (ForElementType<UE::Anim::FMessageStack::FMessageEntry>)0x0) {
        FVar16 = FVar6;
      }
      if ((ulonglong)FVar16 <= (ulonglong)FVar25) {
        FVar16 = FVar15;
        if (FVar6 != (ForElementType<UE::Anim::FMessageStack::FMessageEntry>)0x0) {
          FVar16 = FVar6;
        }
        if (((ulonglong)FVar25 <
             (ulonglong)((longlong)*(int *)((longlong)FVar15 + 0x10c) * 0x20 + (longlong)FVar16)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      iVar13 = *(int *)((longlong)FVar15 + 0x108);
      if (iVar13 == *(int *)((longlong)FVar15 + 0x10c)) {
        iVar13 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Anim::FMessageStack::FMessageEntry>_>
                           (0x820,(ForElementType<UE::Anim::FMessageStack::FMessageEntry> *)FVar15,
                            (int *)((longlong)FVar15 + 0x10c));
      }
      *(int *)((longlong)FVar15 + 0x108) = iVar13 + 1;
      if (*(ForElementType<UE::Anim::FMessageStack::FMessageEntry> *)((longlong)FVar15 + 0x100) !=
          (ForElementType<UE::Anim::FMessageStack::FMessageEntry>)0x0) {
        FVar15 = *(ForElementType<UE::Anim::FMessageStack::FMessageEntry> *)
                  ((longlong)FVar15 + 0x100);
      }
      lVar20 = (longlong)iVar13 * 0x20;
      *(undefined8 *)(lVar20 + (longlong)FVar15) = *(undefined8 *)FVar25;
      lVar19 = *(longlong *)((longlong)FVar25 + 8);
      *(longlong *)(lVar20 + 8 + (longlong)FVar15) = lVar19;
      if (lVar19 != 0) {
        LOCK();
        *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
        UNLOCK();
      }
      uVar9 = *(undefined8 *)((longlong)FVar25 + 0x18);
      puVar2 = (undefined8 *)(lVar20 + 0x10 + (longlong)FVar15);
      *puVar2 = *(undefined8 *)((longlong)FVar25 + 0x10);
      puVar2[1] = uVar9;
    }
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FindFirstSetBit
              (&TStack_c0);
  }
  this_00 = &this->TagStacks;
  TSet<TTuple<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  ::Reset((TSet<TTuple<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
           *)this_00);
  TSet<TTuple<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  ::Reserve((TSet<TTuple<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
             *)this_00,
            *(int *)&(param_1->TagStacks).field_0x188 - *(int *)&(param_1->TagStacks).field_0x1ac);
  puVar3 = &(param_1->TagStacks).field_0x190;
  iVar32 = 0;
  iVar13 = *(int *)&(param_1->TagStacks).field_0x1a0;
  pTVar4 = &param_1->TagStacks;
  iVar29 = 0;
  iVar14 = 0;
  if (iVar13 != 0) {
    puVar33 = *(uint **)&(param_1->TagStacks).field_0x198;
    if (puVar33 == (uint *)0x0) {
      puVar33 = (uint *)puVar3;
    }
    uVar11 = *puVar33;
    while (uVar11 == 0) {
      lVar19 = (longlong)iVar32;
      iVar29 = iVar29 + 0x20;
      iVar32 = iVar32 + 1;
      iVar14 = iVar13;
      if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar32) goto LAB_1474c9610;
      uVar11 = puVar33[lVar19 + 1];
    }
    local_148 = -uVar11 & uVar11;
    uVar1 = (ulonglong)local_148 * 2 + 1;
    lVar19 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    iVar14 = iVar29 + -1 + (int)lVar19;
    if (iVar13 < iVar14) {
      iVar14 = iVar13;
    }
  }
LAB_1474c9610:
  uVar11 = *(uint *)&(param_1->TagStacks).field_0x1a0;
  uVar24 = uVar11 & 0xffffffe0;
  TStack_90._padding_ = CONCAT44(local_148,iVar32);
  TStack_90.CurrentBitIndex = iVar14;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar32 = (int)uVar11 >> 5;
  TStack_90._28_4_ = iVar12;
  TStack_90.BaseBitIndex = iVar29;
  uStack_70 = CONCAT44(uStack_cc,
                       *(int *)&(param_1->TagStacks).field_0x188 -
                       *(int *)&(param_1->TagStacks).field_0x1ac);
  local_98 = pTVar4;
  TStack_90.Array = (TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)puVar3;
  if ((((int)uVar11 < 0) || (iVar13 < (int)uVar11)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar23 = *(uint *)&(param_1->TagStacks).field_0x1a0;
  if (uVar11 != uVar23) {
    puVar31 = *(undefined1 **)&(param_1->TagStacks).field_0x198;
    if (puVar31 == (undefined1 *)0x0) {
      puVar31 = puVar3;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar31 + (longlong)iVar32 * 4);
    while (uVar11 == 0) {
      lVar19 = (longlong)iVar32;
      uVar24 = uVar24 + 0x20;
      iVar32 = iVar32 + 1;
      uVar11 = uVar23;
      if ((int)((uVar23 - 1) + ((int)(uVar23 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar32)
      goto LAB_1474c9730;
      uVar11 = *(uint *)(puVar31 + lVar19 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    uVar11 = (int)lVar19 + -1 + uVar24;
    if ((int)uVar23 < (int)uVar11) {
      uVar11 = uVar23;
    }
  }
LAB_1474c9730:
  while( true ) {
    pTVar22 = local_98;
    if (*(int *)&local_98->field_0x188 - *(int *)&local_98->field_0x1ac != (int)uStack_70) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_90.CurrentBitIndex == uVar11) &&
        (TStack_90.Array ==
         (TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)puVar3)) &&
       (pTVar22 == pTVar4)) break;
    if (*(TMap<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
          **)&pTVar22->field_0x180 !=
        (TMap<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
         *)0x0) {
      pTVar22 = *(TMap<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
                  **)&pTVar22->field_0x180;
    }
    pFVar26 = (FName *)(&pTVar22->field_0x0 + (longlong)TStack_90.CurrentBitIndex * 0x60);
    if (0 < (int)pFVar26[10].ComparisonIndex.Value) {
      FVar17 = (ForElementType<UE::Anim::FMessageStack::FNodeInfo>)
               TMapBase<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
               ::Emplace<FName_const_&>
                         ((TMapBase<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
                           *)this_00,pFVar26);
      uVar24 = pFVar26[10].ComparisonIndex.Value;
      uVar30 = uVar24 - 1;
      uVar23 = 0;
      if ((int)uVar30 < (int)uVar24) {
        uVar23 = ~uVar30 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FVar7 = *(ForElementType<UE::Anim::FMessageStack::FNodeInfo> *)((longlong)FVar17 + 0x40);
      FVar27 = (FName)(pFVar26 + 1);
      if (pFVar26[9] != (FName)0x0) {
        FVar27 = pFVar26[9];
      }
      FVar28 = (ForElementType<UE::Anim::FMessageStack::FNodeInfo>)
               ((longlong)FVar27 + (longlong)(int)pFVar26[10].ComparisonIndex.Value * 0x10 + -0x10);
      FVar18 = FVar17;
      if (FVar7 != (ForElementType<UE::Anim::FMessageStack::FNodeInfo>)0x0) {
        FVar18 = FVar7;
      }
      if ((ulonglong)FVar18 <= (ulonglong)FVar28) {
        FVar18 = FVar17;
        if (FVar7 != (ForElementType<UE::Anim::FMessageStack::FNodeInfo>)0x0) {
          FVar18 = FVar7;
        }
        if (((ulonglong)FVar28 <
             (ulonglong)((longlong)*(int *)((longlong)FVar17 + 0x4c) * 0x10 + (longlong)FVar18)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      iVar13 = *(int *)((longlong)FVar17 + 0x48);
      if (iVar13 == *(int *)((longlong)FVar17 + 0x4c)) {
        iVar13 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Anim::FMessageStack::FNodeInfo>_>
                           (0x810,(ForElementType<UE::Anim::FMessageStack::FNodeInfo> *)FVar17,
                            (int *)((longlong)FVar17 + 0x4c));
      }
      *(int *)((longlong)FVar17 + 0x48) = iVar13 + 1;
      uVar9 = *(undefined8 *)((longlong)FVar28 + 8);
      if (*(ForElementType<UE::Anim::FMessageStack::FNodeInfo> *)((longlong)FVar17 + 0x40) !=
          (ForElementType<UE::Anim::FMessageStack::FNodeInfo>)0x0) {
        FVar17 = *(ForElementType<UE::Anim::FMessageStack::FNodeInfo> *)((longlong)FVar17 + 0x40);
      }
      puVar2 = (undefined8 *)((longlong)FVar17 + (longlong)iVar13 * 0x10);
      *puVar2 = *(undefined8 *)FVar28;
      puVar2[1] = uVar9;
    }
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FindFirstSetBit
              (&TStack_90);
  }
  return;
}

// ForEachMessage @ 1474d4350

void __thiscall
UE::Anim::FMessageStack::ForEachMessage
          (FMessageStack *this,FName param_1,
          TFunctionRef<UE::Anim::FMessageStack::EEnumerate___cdecl(UE::Anim::IGraphMessage_&)>
          *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
  *pTVar5;
  FName *pFVar6;
  undefined1 *puVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined1 local_res8 [8];
  
  pTVar5 = TSet<TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
           ::Find((TSet<TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                   *)this,param_1);
  puVar10 = &pTVar5->field_0x8;
  if (pTVar5 == (TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
                 *)0x0) {
    puVar10 = (undefined1 *)0x0;
  }
  if ((puVar10 != (undefined1 *)0x0) && (uVar9 = *(int *)(puVar10 + 0x108) - 1, -1 < (int)uVar9)) {
    lVar8 = (longlong)(int)uVar9 << 5;
    do {
      uVar3 = 0;
      if ((int)uVar9 < *(int *)(puVar10 + 0x108)) {
        uVar3 = ~uVar9 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      puVar7 = puVar10;
      if (*(undefined1 **)(puVar10 + 0x100) != (undefined1 *)0x0) {
        puVar7 = *(undefined1 **)(puVar10 + 0x100);
      }
      if ((*(longlong *)(puVar7 + lVar8) == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar6 = (FName *)(**(code **)(**(longlong **)(puVar7 + lVar8) + 8))
                                  (*(longlong **)(puVar7 + lVar8),local_res8);
      if (*pFVar6 == param_1) {
        if ((*(longlong *)(puVar7 + lVar8) == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar4 = (**(code **)param_2)
                          (*(undefined8 *)&param_2->field_0x8,*(undefined8 *)(puVar7 + lVar8));
        if (iVar4 == 0) {
          return;
        }
      }
      lVar8 = lVar8 + -0x20;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  return;
}

// ForEachTag @ 1474d44c0

void __thiscall
UE::Anim::FMessageStack::ForEachTag
          (FMessageStack *this,FName param_1,
          TFunctionRef<UE::Anim::FMessageStack::EEnumerate___cdecl(UE::Anim::FMessageStack::FNodeInfo)>
          *param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  TTuple<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
  *pTVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined1 *puVar9;
  longlong lVar10;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pTVar6 = TSet<TTuple<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
           ::Find((TSet<TTuple<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                   *)&this->TagStacks,param_1);
  puVar9 = &pTVar6->field_0x8;
  if (pTVar6 == (TTuple<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
                 *)0x0) {
    puVar9 = (undefined1 *)0x0;
  }
  if ((puVar9 != (undefined1 *)0x0) && (uVar8 = *(int *)(puVar9 + 0x48) - 1, -1 < (int)uVar8)) {
    lVar10 = (longlong)(int)uVar8 << 4;
    do {
      uVar4 = 0;
      if ((int)uVar8 < *(int *)(puVar9 + 0x48)) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar7 = puVar9;
      if (*(undefined1 **)(puVar9 + 0x40) != (undefined1 *)0x0) {
        puVar7 = *(undefined1 **)(puVar9 + 0x40);
      }
      puVar1 = (undefined4 *)(puVar7 + lVar10);
      local_18 = *puVar1;
      uStack_14 = puVar1[1];
      uStack_10 = puVar1[2];
      uStack_c = puVar1[3];
      iVar5 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_18);
      if (iVar5 == 0) {
        return;
      }
      lVar10 = lVar10 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  return;
}

// HasMessage @ 1474e1040

bool __thiscall UE::Anim::FMessageStack::HasMessage(FMessageStack *this,FName param_1)

{
  TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  undefined1 *puVar2;
  
  pTVar1 = TSet<TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
           ::Find((TSet<TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                   *)this,param_1);
  puVar2 = &pTVar1->field_0x8;
  if (pTVar1 == (TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
                 *)0x0) {
    puVar2 = (undefined1 *)0x0;
  }
  if (puVar2 != (undefined1 *)0x0) {
    return *(int *)(puVar2 + 0x108) != 0;
  }
  return false;
}

// MakeEventContextData @ 1474ecb30

/* WARNING: Removing unreachable block (ram,0x0001474eced6) */

void __thiscall
UE::Anim::FMessageStack::MakeEventContextData
          (FMessageStack *this,
          TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  uint uVar4;
  FMessageStack *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  FMessageStack *pFVar12;
  undefined1 *puVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  longlong local_b8;
  FMessageStack *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  FMessageStack *local_80;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> TStack_78;
  undefined8 uStack_58;
  
  DestructItems<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,int>
            ((TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>
              *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_1->AllocatorInstance,0,piVar1);
  }
  puVar2 = &(this->MessageStacks).field_0x910;
  iStack_a8 = 0;
  iVar9 = *(int *)&(this->MessageStacks).field_0x920;
  uStack_a4 = 1;
  local_90 = 0;
  iStack_94 = 0;
  if (iVar9 != 0) {
    puVar16 = *(uint **)&(this->MessageStacks).field_0x918;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar2;
    }
    uVar14 = *puVar16;
    while (uVar14 == 0) {
      lVar10 = (longlong)iStack_a8;
      local_90 = local_90 + 0x20;
      iStack_a8 = iStack_a8 + 1;
      iStack_94 = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_1474ecc0d;
      uVar14 = puVar16[lVar10 + 1];
    }
    uStack_a4 = -uVar14 & uVar14;
    uVar3 = (ulonglong)uStack_a4 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res18 = (int)lVar10;
    iStack_94 = local_90 + -1 + local_res18;
    if (iVar9 < iStack_94) {
      iStack_94 = iVar9;
    }
  }
LAB_1474ecc0d:
  uVar14 = *(uint *)&(this->MessageStacks).field_0x920;
  iStack_88 = *(int *)&(this->MessageStacks).field_0x908 -
              *(int *)&(this->MessageStacks).field_0x92c;
  uVar17 = uVar14 & 0xffffffe0;
  TStack_78._padding_ = CONCAT44(uStack_a4,iStack_a8);
  uStack_98 = 0xffffffff;
  TStack_78.CurrentBitIndex = iStack_94;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar14 >> 5;
  TStack_78._28_4_ = iStack_94;
  TStack_78.BaseBitIndex = local_90;
  uStack_58 = CONCAT44(uStack_84,iStack_88);
  local_b0 = this;
  local_a0 = puVar2;
  iStack_8c = iStack_94;
  local_80 = this;
  TStack_78.Array = (TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)puVar2;
  if ((((int)uVar14 < 0) || (iVar9 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar4 = *(uint *)&(this->MessageStacks).field_0x920;
  if (uVar14 != uVar4) {
    puVar15 = *(undefined1 **)&(this->MessageStacks).field_0x918;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar2;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar11 * 4);
    while (uVar14 == 0) {
      lVar10 = (longlong)iVar11;
      uVar17 = uVar17 + 0x20;
      iVar11 = iVar11 + 1;
      uVar14 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1474ecd20;
      uVar14 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res20 = (int)lVar10;
    uVar14 = local_res20 + -1 + uVar17;
    if ((int)uVar4 < (int)uVar14) {
      uVar14 = uVar4;
    }
  }
LAB_1474ecd20:
  do {
    pFVar12 = local_80;
    if (*(int *)&(local_80->MessageStacks).field_0x908 -
        *(int *)&(local_80->MessageStacks).field_0x92c != (int)uStack_58) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>_>,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_78.CurrentBitIndex == uVar14) &&
        (TStack_78.Array ==
         (TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)puVar2)) &&
       (pFVar12 == this)) {
      return;
    }
    pFVar5 = *(FMessageStack **)&(pFVar12->MessageStacks).field_0x900;
    if (pFVar5 != (FMessageStack *)0x0) {
      pFVar12 = pFVar5;
    }
    puVar15 = &(pFVar12->MessageStacks).field_0x8 + (longlong)TStack_78.CurrentBitIndex * 0x120;
    iVar9 = *(int *)(puVar15 + 0x108);
    if (iVar9 != 0) {
      uVar17 = 0;
      if ((int)(iVar9 - 1U) < iVar9) {
        uVar17 = ~(iVar9 - 1U) >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      puVar13 = puVar15;
      if (*(undefined1 **)(puVar15 + 0x100) != (undefined1 *)0x0) {
        puVar13 = *(undefined1 **)(puVar15 + 0x100);
      }
      iVar9 = *(int *)(puVar15 + 0x108);
      if ((*(longlong *)(puVar13 + (longlong)iVar9 * 0x20 + -0x20) == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      (**(code **)(**(longlong **)(puVar13 + (longlong)iVar9 * 0x20 + -0x20) + 0x18))
                (*(longlong **)(puVar13 + (longlong)iVar9 * 0x20 + -0x20),&local_b8);
      if (local_b8 != 0) {
        pFVar6 = (param_1->AllocatorInstance).Data;
        if (((pFVar6 <= (FScriptContainerElement *)&local_b8) &&
            ((FScriptContainerElement *)&local_b8 < pFVar6 + (longlong)*piVar1 * 8)) &&
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
        iVar9 = param_1->ArrayNum;
        if (iVar9 == *piVar1) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_1->AllocatorInstance,piVar1);
        }
        param_1->ArrayNum = iVar9 + 1;
        *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_b8;
        local_b8 = 0;
      }
    }
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FindFirstSetBit
              (&TStack_78);
  } while( true );
}

// PopMessage @ 1474f07e0

void __thiscall UE::Anim::FMessageStack::PopMessage(FMessageStack *this,FName param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
  *pTVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  
  pTVar5 = TSet<TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
           ::Find((TSet<TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                   *)this,param_1);
  if (pTVar5 == (TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
                 *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puVar8 = &pTVar5->field_0x8;
  if (*(int *)&pTVar5->field_0x110 < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puVar7 = *(undefined1 **)&pTVar5->field_0x108;
  if (*(undefined1 **)&pTVar5->field_0x108 == (undefined1 *)0x0) {
    puVar7 = puVar8;
  }
  lVar6 = (longlong)*(int *)&pTVar5->field_0x110 * 0x20;
  pTVar1 = *(TReferenceControllerBase<1> **)(puVar7 + lVar6 + -0x18);
  *(undefined8 *)(puVar7 + lVar6 + -0x18) = 0;
  *(undefined8 *)(puVar7 + lVar6 + -0x20) = 0;
  iVar4 = *(int *)&pTVar5->field_0x110;
  puVar7 = *(undefined1 **)&pTVar5->field_0x108;
  if (*(undefined1 **)&pTVar5->field_0x108 == (undefined1 *)0x0) {
    puVar7 = puVar8;
  }
  puVar7 = puVar7 + (longlong)iVar4 * 0x20;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(puVar7 + -0x18));
  iVar4 = *(int *)&pTVar5->field_0x110 - iVar4;
  if (iVar4 != 0) {
    memmove(puVar7 + -0x20,puVar7,(longlong)iVar4 << 5);
  }
  *(int *)&pTVar5->field_0x110 = *(int *)&pTVar5->field_0x110 + -1;
  Core::Private::
  ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Anim::FMessageStack::FMessageEntry>_>
            (0x20,8,(ForElementType<UE::Anim::FMessageStack::FMessageEntry> *)puVar8,
             *(int *)&pTVar5->field_0x110,(int *)&pTVar5->field_0x114);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// PopTag @ 1474f0ac0

void __thiscall UE::Anim::FMessageStack::PopTag(FMessageStack *this,FName param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TTuple<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
  *pTVar5;
  undefined1 *puVar6;
  
  pTVar5 = TSet<TTuple<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
           ::Find((TSet<TTuple<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                   *)&this->TagStacks,param_1);
  if (pTVar5 == (TTuple<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
                 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(int *)&pTVar5->field_0x50 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  puVar6 = *(undefined1 **)&pTVar5->field_0x48;
  if (*(undefined1 **)&pTVar5->field_0x48 == (undefined1 *)0x0) {
    puVar6 = &pTVar5->field_0x8;
  }
  uVar1 = *(int *)&pTVar5->field_0x50 - 1;
  iVar2 = ~uVar1 + *(int *)&pTVar5->field_0x50;
  if (iVar2 != 0) {
    memmove(puVar6 + (longlong)(int)uVar1 * 0x10,puVar6 + (longlong)(int)uVar1 * 0x10 + 0x10,
            (longlong)iVar2 << 4);
  }
  *(int *)&pTVar5->field_0x50 = *(int *)&pTVar5->field_0x50 + -1;
  Core::Private::
  ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Anim::FMessageStack::FNodeInfo>_>
            (0x10,8,(ForElementType<UE::Anim::FMessageStack::FNodeInfo> *)&pTVar5->field_0x8,
             *(int *)&pTVar5->field_0x50,(int *)&pTVar5->field_0x54);
  return;
}

// PushMessage @ 1474f2000

void __thiscall
UE::Anim::FMessageStack::PushMessage
          (FMessageStack *this,FName param_1,FAnimNode_Base *param_2,UScriptStruct *param_3,
          TSharedRef<UE::Anim::IGraphMessage,1> *param_4)

{
  undefined8 *puVar1;
  FMessageStack *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ForElementType<UE::Anim::FMessageStack::FMessageEntry> FVar7;
  FMessageStack *pFVar8;
  longlong lVar9;
  undefined1 *puVar10;
  ForElementType<UE::Anim::FMessageStack::FMessageEntry> FVar11;
  FName local_res10;
  IGraphMessage *local_38;
  TReferenceControllerBase<1> *local_30;
  FAnimNode_Base *local_28;
  UScriptStruct *pUStack_20;
  
  local_res10 = param_1;
  uVar5 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  uVar5 = param_1.Number + uVar5;
  iVar6 = TSet<TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
          ::FindIndexByHash<FName>
                    ((TSet<TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                      *)this,uVar5,&local_res10);
  if (iVar6 != -1) {
    pFVar2 = *(FMessageStack **)&(this->MessageStacks).field_0x900;
    pFVar8 = this;
    if (pFVar2 != (FMessageStack *)0x0) {
      pFVar8 = pFVar2;
    }
    puVar10 = &(pFVar8->MessageStacks).field_0x0 + (longlong)iVar6 * 0x120;
    if (puVar10 != (undefined1 *)0x0) {
      FVar11 = (ForElementType<UE::Anim::FMessageStack::FMessageEntry>)((longlong)puVar10 + 8);
      goto LAB_1474f2082;
    }
  }
  FVar11 = (ForElementType<UE::Anim::FMessageStack::FMessageEntry>)
           TMapBase<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>_>
           ::EmplaceByHash<FName_const_&>
                     ((TMapBase<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>_>
                       *)this,uVar5,&local_res10);
LAB_1474f2082:
  local_30 = (param_4->SharedReferenceCount).ReferenceController;
  local_38 = param_4->Object;
  if (local_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  FVar7 = *(ForElementType<UE::Anim::FMessageStack::FMessageEntry> *)((longlong)FVar11 + 0x100);
  if (*(ForElementType<UE::Anim::FMessageStack::FMessageEntry> *)((longlong)FVar11 + 0x100) ==
      (ForElementType<UE::Anim::FMessageStack::FMessageEntry>)0x0) {
    FVar7 = FVar11;
  }
  local_28 = param_2;
  pUStack_20 = param_3;
  if (((ulonglong)FVar7 <= &local_38) &&
     (&local_38 <
      (IGraphMessage **)((longlong)*(int *)((longlong)FVar11 + 0x10c) * 0x20 + (longlong)FVar7))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = *(int *)((longlong)FVar11 + 0x108);
  if (iVar6 == *(int *)((longlong)FVar11 + 0x10c)) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Anim::FMessageStack::FMessageEntry>_>
                      (0x820,(ForElementType<UE::Anim::FMessageStack::FMessageEntry> *)FVar11,
                       (int *)((longlong)FVar11 + 0x10c));
  }
  *(int *)((longlong)FVar11 + 0x108) = iVar6 + 1;
  FVar7 = *(ForElementType<UE::Anim::FMessageStack::FMessageEntry> *)((longlong)FVar11 + 0x100);
  if (*(ForElementType<UE::Anim::FMessageStack::FMessageEntry> *)((longlong)FVar11 + 0x100) ==
      (ForElementType<UE::Anim::FMessageStack::FMessageEntry>)0x0) {
    FVar7 = FVar11;
  }
  lVar9 = (longlong)iVar6 * 0x20;
  *(IGraphMessage **)(lVar9 + (longlong)FVar7) = local_38;
  *(TReferenceControllerBase<1> **)(lVar9 + 8 + (longlong)FVar7) = local_30;
  local_30 = (TReferenceControllerBase<1> *)0x0;
  local_38 = (IGraphMessage *)0x0;
  puVar1 = (undefined8 *)(lVar9 + 0x10 + (longlong)FVar7);
  *puVar1 = local_28;
  puVar1[1] = pUStack_20;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return;
}

// PushTag @ 1474f2320

void __thiscall
UE::Anim::FMessageStack::PushTag
          (FMessageStack *this,FAnimNode_Base *param_1,UScriptStruct *param_2,FName param_3)

{
  TMap<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
  *this_00;
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ForElementType<UE::Anim::FMessageStack::FNodeInfo> FVar6;
  TMap<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
  *pTVar7;
  ForElementType<UE::Anim::FMessageStack::FNodeInfo> FVar8;
  FName local_res20;
  FAnimNode_Base *local_28;
  UScriptStruct *pUStack_20;
  
  this_00 = &this->TagStacks;
  local_res20 = param_3;
  uVar4 = ::GetTypeHash(param_3.ComparisonIndex.Value);
  uVar4 = param_3.Number + uVar4;
  iVar5 = TSet<TTuple<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
          ::FindIndexByHash<FName>
                    ((TSet<TTuple<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                      *)this_00,uVar4,&local_res20);
  if (iVar5 != -1) {
    pTVar7 = *(TMap<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
               **)&(this->TagStacks).field_0x180;
    if (pTVar7 == (TMap<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
                   *)0x0) {
      pTVar7 = this_00;
    }
    if (&pTVar7->field_0x0 + (longlong)iVar5 * 0x60 != (undefined1 *)0x0) {
      FVar8 = (ForElementType<UE::Anim::FMessageStack::FNodeInfo>)
              ((longlong)(&pTVar7->field_0x0 + (longlong)iVar5 * 0x60) + 8);
      goto LAB_1474f23a4;
    }
  }
  FVar8 = (ForElementType<UE::Anim::FMessageStack::FNodeInfo>)
          TMapBase<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
          ::EmplaceByHash<FName_const_&>
                    ((TMapBase<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
                      *)this_00,uVar4,&local_res20);
LAB_1474f23a4:
  FVar6 = *(ForElementType<UE::Anim::FMessageStack::FNodeInfo> *)((longlong)FVar8 + 0x40);
  if (*(ForElementType<UE::Anim::FMessageStack::FNodeInfo> *)((longlong)FVar8 + 0x40) ==
      (ForElementType<UE::Anim::FMessageStack::FNodeInfo>)0x0) {
    FVar6 = FVar8;
  }
  local_28 = param_1;
  pUStack_20 = param_2;
  if (((ulonglong)FVar6 <= &local_28) &&
     (&local_28 <
      (FAnimNode_Base **)((longlong)*(int *)((longlong)FVar8 + 0x4c) * 0x10 + (longlong)FVar6))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)((longlong)FVar8 + 0x48);
  if (iVar5 == *(int *)((longlong)FVar8 + 0x4c)) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Anim::FMessageStack::FNodeInfo>_>
                      (0x810,(ForElementType<UE::Anim::FMessageStack::FNodeInfo> *)FVar8,
                       (int *)((longlong)FVar8 + 0x4c));
  }
  *(int *)((longlong)FVar8 + 0x48) = iVar5 + 1;
  FVar6 = *(ForElementType<UE::Anim::FMessageStack::FNodeInfo> *)((longlong)FVar8 + 0x40);
  if (*(ForElementType<UE::Anim::FMessageStack::FNodeInfo> *)((longlong)FVar8 + 0x40) ==
      (ForElementType<UE::Anim::FMessageStack::FNodeInfo>)0x0) {
    FVar6 = FVar8;
  }
  puVar1 = (undefined8 *)((longlong)FVar6 + (longlong)iVar5 * 0x10);
  *puVar1 = local_28;
  puVar1[1] = pUStack_20;
  return;
}

// TopMessage @ 1474fc3c0

void __thiscall
UE::Anim::FMessageStack::TopMessage
          (FMessageStack *this,FName param_1,
          TFunctionRef<void___cdecl(UE::Anim::IGraphMessage_&)> *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
  *pTVar4;
  FName *pFVar5;
  IGraphMessage *pIVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 local_res8 [8];
  
  pTVar4 = TSet<TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
           ::Find((TSet<TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                   *)this,param_1);
  puVar8 = &pTVar4->field_0x8;
  if (pTVar4 == (TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
                 *)0x0) {
    puVar8 = (undefined1 *)0x0;
  }
  if (puVar8 != (undefined1 *)0x0) {
    iVar1 = *(int *)(puVar8 + 0x108);
    if (iVar1 != 0) {
      uVar7 = 0;
      if ((int)(iVar1 - 1U) < iVar1) {
        uVar7 = ~(iVar1 - 1U) >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar9 = puVar8;
      if (*(undefined1 **)(puVar8 + 0x100) != (undefined1 *)0x0) {
        puVar9 = *(undefined1 **)(puVar8 + 0x100);
      }
      iVar1 = *(int *)(puVar8 + 0x108);
      if ((*(longlong *)(puVar9 + (longlong)iVar1 * 0x20 + -0x20) == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar5 = (FName *)(**(code **)(**(longlong **)(puVar9 + (longlong)iVar1 * 0x20 + -0x20) + 8))
                                  (*(longlong **)(puVar9 + (longlong)iVar1 * 0x20 + -0x20),
                                   local_res8);
      if (*pFVar5 == param_1) {
        pIVar6 = TSharedPtr<UE::Anim::IGraphMessage,1>::operator*<UE::Anim::IGraphMessage>
                           ((TSharedPtr<UE::Anim::IGraphMessage,1> *)
                            (puVar9 + (longlong)iVar1 * 0x20 + -0x20));
        (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,pIVar6);
      }
    }
  }
  return;
}

// TopMessageSharedPtr @ 1474fc4e0

void __thiscall
UE::Anim::FMessageStack::TopMessageSharedPtr
          (FMessageStack *this,FName param_1,
          TFunctionRef<void___cdecl(TSharedPtr<UE::Anim::IGraphMessage,1>_&)> *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
  *pTVar4;
  FName *pFVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 local_res8 [8];
  
  pTVar4 = TSet<TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
           ::Find((TSet<TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                   *)this,param_1);
  puVar7 = &pTVar4->field_0x8;
  if (pTVar4 == (TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
                 *)0x0) {
    puVar7 = (undefined1 *)0x0;
  }
  if (puVar7 != (undefined1 *)0x0) {
    iVar1 = *(int *)(puVar7 + 0x108);
    if (iVar1 != 0) {
      uVar6 = 0;
      if ((int)(iVar1 - 1U) < iVar1) {
        uVar6 = ~(iVar1 - 1U) >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar8 = puVar7;
      if (*(undefined1 **)(puVar7 + 0x100) != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)(puVar7 + 0x100);
      }
      iVar1 = *(int *)(puVar7 + 0x108);
      if ((*(longlong *)(puVar8 + (longlong)iVar1 * 0x20 + -0x20) == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar5 = (FName *)(**(code **)(**(longlong **)(puVar8 + (longlong)iVar1 * 0x20 + -0x20) + 8))
                                  (*(longlong **)(puVar8 + (longlong)iVar1 * 0x20 + -0x20),
                                   local_res8);
      if (*pFVar5 == param_1) {
        (**(code **)param_2)
                  (*(undefined8 *)&param_2->field_0x8,puVar8 + (longlong)iVar1 * 0x20 + -0x20);
      }
    }
  }
  return;
}

// operator() @ 1475ac0d0

void __thiscall
`UE::Anim::FMessageStack::TopMessageWeakPtr<UE::Anim::FAnimSyncGroupScope>'::__l2::<lambda_1>::
operator()(void *this,TSharedPtr<UE::Anim::IGraphMessage,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  IGraphMessage *local_18;
  TReferenceControllerBase<1> *local_10;
  
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  local_18 = param_1->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_10 = pTVar3;
  (*(code *)**(undefined8 **)this)((*(undefined8 **)this)[1],&local_18);
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &local_10->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(local_10->_padding_ + 8))(local_10,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

