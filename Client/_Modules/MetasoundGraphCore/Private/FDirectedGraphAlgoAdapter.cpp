// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 5

// FDirectedGraphAlgoAdapter @ 14ad37f30

FDirectedGraphAlgoAdapter * __thiscall
Metasound::FDirectedGraphAlgoAdapter::FDirectedGraphAlgoAdapter
          (FDirectedGraphAlgoAdapter *this,IGraph *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  TSet<Metasound::INode_const_*,DefaultKeyFuncs<Metasound::INode_const_*,0>,FDefaultSetAllocator>
  *this_00;
  TArray<Metasound::INode_const_*,TSizedDefaultAllocator<32>_> *pTVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TSet<TTuple<Metasound::INode_const_*,int>,TDefaultMapHashableKeyFuncs<Metasound::INode_const_*,int,0>,FDefaultSetAllocator>
  *this_01;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  bool bVar8;
  longlong *plVar9;
  FDirectedGraphAlgoAdapter *pFVar10;
  TArray<Metasound::INode_const_*,TSizedDefaultAllocator<32>_> *pTVar11;
  TTuple<Metasound::INode_const_*,int> *pTVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  bool *pbVar16;
  undefined8 *puVar17;
  uint uVar18;
  longlong *plVar19;
  TBitArray<FDefaultBitArrayAllocator> *pTVar20;
  undefined8 *puVar21;
  uint uVar22;
  uint uVar23;
  bool *pbVar24;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_278;
  undefined1 local_277;
  undefined1 local_276;
  undefined1 local_275;
  uint local_274;
  longlong *local_270;
  uint uStack_268;
  uint uStack_264;
  TBitArray<FDefaultBitArrayAllocator> *local_260;
  undefined4 uStack_258;
  uint uStack_254;
  uint local_250;
  undefined4 uStack_24c;
  int iStack_248;
  undefined4 uStack_244;
  ulonglong local_240;
  undefined4 local_238;
  undefined4 local_234;
  TSet<TTuple<Metasound::INode_const_*,int>,TDefaultMapHashableKeyFuncs<Metasound::INode_const_*,int,0>,FDefaultSetAllocator>
  *local_230;
  longlong *local_228;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_220;
  undefined8 local_200;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1f8;
  undefined1 local_1d8 [8];
  int local_1d0;
  undefined8 local_1cc;
  int local_1c4;
  undefined1 local_1c0 [8];
  undefined1 local_1b8 [8];
  int local_1b0;
  int local_1ac;
  int local_1a8;
  longlong *local_1a0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_198;
  TArray<int,TSizedDefaultAllocator<32>_> *local_190;
  int local_188;
  longlong *local_180;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_178;
  undefined8 uStack_158;
  longlong *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  longlong *local_120;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_118;
  undefined8 uStack_f8;
  FScriptContainerElement *local_f0;
  uint *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  TArray<Metasound::INode_const_*,TSizedDefaultAllocator<32>_> local_c0 [2];
  undefined4 local_94;
  undefined4 local_74;
  undefined4 local_54;
  
  *(undefined8 *)&(this->EdgeSet).Elements = 0;
  *(undefined8 *)&(this->EdgeSet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->EdgeSet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->EdgeSet).Elements.field_0x28 = 0;
  this_00 = &this->MetasoundNodeSet;
  *(undefined4 *)&(this->EdgeSet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->EdgeSet).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EdgeSet).Elements.field_0x34 = 0;
  (this->EdgeSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->EdgeSet).HashSize = 0;
  local_230 = (TSet<TTuple<Metasound::INode_const_*,int>,TDefaultMapHashableKeyFuncs<Metasound::INode_const_*,int,0>,FDefaultSetAllocator>
               *)&this->MetasoundNodeToInt;
  *(undefined8 *)
   &((TMap<Metasound::INode_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::INode_const_*,int,0>_>
      *)local_230)->field_0x0 = 0;
  *(undefined8 *)&(this->MetasoundNodeToInt).field_0x8 = 0;
  *(undefined8 *)&(this->MetasoundNodeToInt).field_0x20 = 0;
  *(undefined4 *)&(this->MetasoundNodeToInt).field_0x28 = 0;
  *(undefined4 *)&(this->MetasoundNodeToInt).field_0x2c = 0x80;
  *(undefined4 *)&(this->MetasoundNodeToInt).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MetasoundNodeToInt).field_0x34 = 0;
  *(undefined8 *)&(this->MetasoundNodeToInt).field_0x40 = 0;
  *(undefined4 *)&(this->MetasoundNodeToInt).field_0x48 = 0;
  local_198 = &this->InputVertices;
  (local_198->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->InputVertices).ArrayNum = 0;
  (this->InputVertices).ArrayMax = 0;
  (this->MetasoundUniqueNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MetasoundUniqueNodes).ArrayNum = 0;
  (this->MetasoundUniqueNodes).ArrayMax = 0;
  *(undefined8 *)&this_00->Elements = 0;
  *(undefined8 *)&(this->MetasoundNodeSet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->MetasoundNodeSet).Elements.field_0x20 = 0;
  local_190 = &this->OutputVertices;
  (local_190->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->OutputVertices).ArrayNum = 0;
  (this->OutputVertices).ArrayMax = 0;
  *(undefined4 *)&(this->MetasoundNodeSet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->MetasoundNodeSet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->MetasoundNodeSet).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MetasoundNodeSet).Elements.field_0x34 = 0;
  (this->MetasoundNodeSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->MetasoundNodeSet).HashSize = 0;
  *(undefined8 *)&this->MetasoundNodePairEdges = 0;
  *(undefined8 *)&(this->MetasoundNodePairEdges).field_0x8 = 0;
  *(undefined8 *)&(this->MetasoundNodePairEdges).field_0x20 = 0;
  *(undefined4 *)&(this->MetasoundNodePairEdges).field_0x28 = 0;
  *(undefined4 *)&(this->MetasoundNodePairEdges).field_0x2c = 0x80;
  *(undefined4 *)&(this->MetasoundNodePairEdges).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MetasoundNodePairEdges).field_0x34 = 0;
  *(undefined8 *)&(this->MetasoundNodePairEdges).field_0x40 = 0;
  *(undefined4 *)&(this->MetasoundNodePairEdges).field_0x48 = 0;
  (this->Lazy).UniqueVertices.bIsInitialized = false;
  (this->Lazy).UniqueVertices.Object.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Lazy).UniqueVertices.Object.ArrayNum = 0;
  (this->Lazy).UniqueVertices.Object.ArrayMax = 0;
  (this->Lazy).UniqueEdges.bIsInitialized = false;
  (this->Lazy).UniqueEdges.Object.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Lazy).UniqueEdges.Object.ArrayNum = 0;
  (this->Lazy).UniqueEdges.Object.ArrayMax = 0;
  (this->Lazy).Tree.bIsInitialized = false;
  *(undefined8 *)&(this->Lazy).Tree.Object = 0;
  *(undefined8 *)&(this->Lazy).Tree.Object.field_0x8 = 0;
  *(undefined8 *)&(this->Lazy).Tree.Object.field_0x20 = 0;
  *(undefined4 *)&(this->Lazy).Tree.Object.field_0x28 = 0;
  *(undefined4 *)&(this->Lazy).Tree.Object.field_0x2c = 0x80;
  *(undefined4 *)&(this->Lazy).Tree.Object.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Lazy).Tree.Object.field_0x34 = 0;
  *(undefined8 *)&(this->Lazy).Tree.Object.field_0x40 = 0;
  *(undefined4 *)&(this->Lazy).Tree.Object.field_0x48 = 0;
  (this->Lazy).TransposeTree.bIsInitialized = false;
  *(undefined8 *)&(this->Lazy).TransposeTree.Object = 0;
  *(undefined8 *)&(this->Lazy).TransposeTree.Object.field_0x8 = 0;
  *(undefined8 *)&(this->Lazy).TransposeTree.Object.field_0x20 = 0;
  *(undefined4 *)&(this->Lazy).TransposeTree.Object.field_0x28 = 0;
  *(undefined4 *)&(this->Lazy).TransposeTree.Object.field_0x2c = 0x80;
  *(undefined4 *)&(this->Lazy).TransposeTree.Object.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Lazy).TransposeTree.Object.field_0x34 = 0;
  *(undefined8 *)&(this->Lazy).TransposeTree.Object.field_0x40 = 0;
  *(undefined4 *)&(this->Lazy).TransposeTree.Object.field_0x48 = 0;
  plVar9 = (longlong *)(**(code **)((longlong)*param_1 + 0x58))(param_1);
  lVar13 = plVar9[1];
  pbVar16 = (bool *)*plVar9;
  pbVar24 = pbVar16 + (longlong)(int)lVar13 * 0x68;
  while( true ) {
    if ((int)plVar9[1] != (int)lVar13) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<Metasound::FDataEdge_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pbVar16 == pbVar24) break;
    if (*(longlong *)pbVar16 != 0) {
      TSet<Metasound::INode_const_*,DefaultKeyFuncs<Metasound::INode_const_*,0>,FDefaultSetAllocator>
      ::Emplace<Metasound::INode_const_*_const_&>(this_00,(INode **)local_1d8,pbVar16);
    }
    if (*(longlong *)(pbVar16 + 0x28) != 0) {
      TSet<Metasound::INode_const_*,DefaultKeyFuncs<Metasound::INode_const_*,0>,FDefaultSetAllocator>
      ::Emplace<Metasound::INode_const_*_const_&>(this_00,(INode **)(local_1d8 + 4),pbVar16 + 0x28);
    }
    pbVar16 = pbVar16 + 0x68;
  }
  plVar9 = (longlong *)(**(code **)((longlong)*param_1 + 0x60))(param_1);
  local_1f8._padding_._0_4_ = 0;
  local_1f8.UnvisitedBitMask = 0xffffffff;
  local_1f8.CurrentBitIndex = 0;
  local_1f8.BaseBitIndex = 0;
  local_240 = 1;
  local_1f8._padding_._4_4_ = 1;
  local_1f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(plVar9 + 2);
  if ((int)plVar9[5] != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1f8);
  }
  uVar18 = *(uint *)(plVar9 + 5);
  TStack_220._padding_ = CONCAT44(local_1f8._padding_._4_4_,(undefined4)local_1f8._padding_);
  TStack_220.CurrentBitIndex = local_1f8.CurrentBitIndex;
  TStack_220.UnvisitedBitMask = local_1f8.UnvisitedBitMask;
  TStack_220._28_4_ = local_1f8._28_4_;
  TStack_220.BaseBitIndex = local_1f8.BaseBitIndex;
  TStack_220.Array = local_1f8.Array;
  uVar22 = uVar18 & 0xffffffe0;
  local_200 = CONCAT44(local_200._4_4_,(int)plVar9[1] - *(int *)((longlong)plVar9 + 0x34));
  iVar14 = (int)uVar18 >> 5;
  TStack_178.Array = local_1f8.Array;
  uStack_158 = local_200;
  local_228 = plVar9;
  local_180 = plVar9;
  TStack_178._padding_ = TStack_220._padding_;
  TStack_178._16_8_ = TStack_220._16_8_;
  TStack_178._24_8_ = TStack_220._24_8_;
  if (((int)uVar18 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pFVar10 = (FDirectedGraphAlgoAdapter *)(*pcVar6)();
    return pFVar10;
  }
  uVar23 = *(uint *)(plVar9 + 5);
  if (uVar18 != uVar23) {
    plVar19 = (longlong *)plVar9[4];
    if ((longlong *)plVar9[4] == (longlong *)0x0) {
      plVar19 = plVar9 + 2;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)((longlong)plVar19 + (longlong)iVar14 * 4);
    while (uVar18 == 0) {
      lVar13 = (longlong)iVar14;
      uVar22 = uVar22 + 0x20;
      iVar14 = iVar14 + 1;
      uVar18 = uVar23;
      if ((int)((uVar23 - 1) + ((int)(uVar23 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_14ad3829f;
      uVar18 = *(uint *)((longlong)plVar19 + lVar13 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_1d0 = (int)lVar13;
    uVar18 = local_1d0 + -1 + uVar22;
    if ((int)uVar23 < (int)uVar18) {
      uVar18 = uVar23;
    }
  }
LAB_14ad3829f:
  while( true ) {
    plVar19 = local_180;
    if ((int)local_180[1] - *(int *)((longlong)local_180 + 0x34) != (int)uStack_158) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TTuple<Metasound::INode_const_*,FName>,Metasound::FInputDataDestination>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_178.CurrentBitIndex == uVar18) &&
        (TStack_178.Array == (TBitArray<FDefaultBitArrayAllocator> *)(plVar9 + 2))) &&
       (plVar19 == plVar9)) break;
    TSet<Metasound::INode_const_*,DefaultKeyFuncs<Metasound::INode_const_*,0>,FDefaultSetAllocator>
    ::Emplace<Metasound::INode_const_*_const_&>
              (this_00,(INode **)&local_1cc,
               (bool *)(*plVar19 + (longlong)TStack_178.CurrentBitIndex * 0x58 + 0x10));
    TStack_178.UnvisitedBitMask = TStack_178.UnvisitedBitMask & ~TStack_178._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_178);
  }
  plVar9 = (longlong *)(**(code **)((longlong)*param_1 + 0x68))();
  uVar18 = *(uint *)(plVar9 + 5);
  uStack_268 = 0;
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar9 + 2);
  uStack_264 = (uint)local_240;
  uStack_254 = uStack_268;
  local_250 = 0;
  if (uVar18 != 0) {
    pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)plVar9[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar9[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar20 = pTVar1;
    }
    uVar22 = *(uint *)(pTVar20->AllocatorInstance).InlineData;
    local_250 = 0;
    uStack_268 = 0;
    while (uVar22 == 0) {
      lVar13 = (longlong)(int)uStack_268;
      local_250 = local_250 + 0x20;
      uStack_268 = uStack_268 + 1;
      uStack_254 = uVar18;
      if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_268)
      goto LAB_14ad383ad;
      uVar22 = *(uint *)((pTVar20->AllocatorInstance).InlineData + lVar13 * 4 + 4);
    }
    uStack_264 = -uVar22 & uVar22;
    uVar3 = (ulonglong)uStack_264 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_1cc._4_4_ = (int)lVar13;
    uStack_254 = local_1cc._4_4_ + -1 + local_250;
    if ((int)uVar18 < (int)uStack_254) {
      uStack_254 = uVar18;
    }
  }
LAB_14ad383ad:
  uVar22 = *(uint *)(plVar9 + 5);
  uStack_24c = local_94;
  iStack_248 = (int)plVar9[1] - *(int *)((longlong)plVar9 + 0x34);
  uVar23 = uVar22 & 0xffffffe0;
  uStack_258 = 0xffffffff;
  TStack_148._padding_ = CONCAT44(uStack_264,uStack_268);
  TStack_148.CurrentBitIndex = uStack_254;
  TStack_148.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar22 >> 5;
  TStack_148._28_4_ = local_94;
  TStack_148.BaseBitIndex = local_250;
  uStack_128 = CONCAT44(uStack_244,iStack_248);
  local_270 = plVar9;
  local_260 = pTVar1;
  local_1a0 = plVar9;
  local_150 = plVar9;
  TStack_148.Array = pTVar1;
  if ((((int)uVar22 < 0) || ((int)uVar18 < (int)uVar22)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pFVar10 = (FDirectedGraphAlgoAdapter *)(*pcVar6)();
    return pFVar10;
  }
  plVar19 = local_1a0;
  uVar18 = *(uint *)(plVar9 + 5);
  if (uVar22 != uVar18) {
    pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)plVar9[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar9[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar20 = pTVar1;
    }
    uVar22 = -1 << ((byte)uVar22 & 0x1f) &
             *(uint *)((pTVar20->AllocatorInstance).InlineData + (longlong)iVar14 * 4);
    while (uVar22 == 0) {
      lVar13 = (longlong)iVar14;
      uVar23 = uVar23 + 0x20;
      iVar14 = iVar14 + 1;
      uVar22 = uVar18;
      if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_14ad384d0;
      uVar22 = *(uint *)((pTVar20->AllocatorInstance).InlineData + lVar13 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_1c4 = (int)lVar13;
    uVar22 = local_1c4 + -1 + uVar23;
    if ((int)uVar18 < (int)uVar22) {
      uVar22 = uVar18;
    }
  }
LAB_14ad384d0:
  while( true ) {
    plVar9 = local_150;
    if ((int)local_150[1] - *(int *)((longlong)local_150 + 0x34) != (int)uStack_128) {
      local_278 = 0;
      `TSparseArray<TSparseSetElement<TTuple<TTuple<Metasound::INode_const_*,FName>,Metasound::FOutputDataSource>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_278);
    }
    if (((TStack_148.CurrentBitIndex == uVar22) && (TStack_148.Array == pTVar1)) &&
       (plVar9 == plVar19)) break;
    TSet<Metasound::INode_const_*,DefaultKeyFuncs<Metasound::INode_const_*,0>,FDefaultSetAllocator>
    ::Emplace<Metasound::INode_const_*_const_&>
              (this_00,(INode **)local_1c0,
               (bool *)(*plVar9 + 0x10 + (longlong)TStack_148.CurrentBitIndex * 0x40));
    TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
  }
  pTVar11 = TSet<Metasound::INode_const_*,DefaultKeyFuncs<Metasound::INode_const_*,0>,FDefaultSetAllocator>
            ::Array(this_00,local_c0);
  pTVar2 = &this->MetasoundUniqueNodes;
  if (pTVar2 != pTVar11) {
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar11->AllocatorInstance).Data;
    (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->MetasoundUniqueNodes).ArrayNum = pTVar11->ArrayNum;
    (this->MetasoundUniqueNodes).ArrayMax = pTVar11->ArrayMax;
    pTVar11->ArrayNum = 0;
    pTVar11->ArrayMax = 0;
  }
  if (local_c0[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0[0].AllocatorInstance.Data);
  }
  local_274 = 0;
  if (0 < (this->MetasoundUniqueNodes).ArrayNum) {
    do {
      uVar18 = local_274;
      uVar22 = 0;
      if ((int)local_274 < (this->MetasoundUniqueNodes).ArrayNum) {
        uVar22 = ~local_274 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        pFVar10 = (FDirectedGraphAlgoAdapter *)(*pcVar6)();
        return pFVar10;
      }
      local_f0 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar18 * 8;
      local_e8 = &local_274;
      TSet<TTuple<Metasound::INode_const_*,int>,TDefaultMapHashableKeyFuncs<Metasound::INode_const_*,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<Metasound::INode_const_*_const_&,int_const_&>_>
                ((TSet<TTuple<Metasound::INode_const_*,int>,TDefaultMapHashableKeyFuncs<Metasound::INode_const_*,int,0>,FDefaultSetAllocator>
                  *)&this->MetasoundNodeToInt,
                 (TPairInitializer<Metasound::INode_const_*_const_&,int_const_&> *)(local_1c0 + 4),
                 (bool *)&local_f0);
      local_274 = local_274 + 1;
    } while ((int)local_274 < (this->MetasoundUniqueNodes).ArrayNum);
  }
  plVar9 = (longlong *)(**(code **)((longlong)*param_1 + 0x58))(param_1);
  lVar13 = plVar9[1];
  puVar17 = (undefined8 *)*plVar9;
  puVar21 = puVar17 + (longlong)(int)lVar13 * 0xd;
  while( true ) {
    if ((int)plVar9[1] != (int)lVar13) {
      local_277 = 0;
      `TCheckedPointerIterator<Metasound::FDataEdge_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_277);
    }
    if (puVar17 == puVar21) break;
    if (((INode *)*puVar17 != (INode *)0x0) && (puVar17[5] != 0)) {
      pTVar12 = TSet<TTuple<Metasound::INode_const_*,int>,TDefaultMapHashableKeyFuncs<Metasound::INode_const_*,int,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<Metasound::INode_const_*,int>,TDefaultMapHashableKeyFuncs<Metasound::INode_const_*,int,0>,FDefaultSetAllocator>
                        *)&this->MetasoundNodeToInt,(INode *)*puVar17);
      if ((pTVar12 == (TTuple<Metasound::INode_const_*,int> *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x288,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        pFVar10 = (FDirectedGraphAlgoAdapter *)(*pcVar6)();
        return pFVar10;
      }
      uVar4 = *(undefined4 *)&pTVar12->field_0x8;
      pTVar12 = TSet<TTuple<Metasound::INode_const_*,int>,TDefaultMapHashableKeyFuncs<Metasound::INode_const_*,int,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<Metasound::INode_const_*,int>,TDefaultMapHashableKeyFuncs<Metasound::INode_const_*,int,0>,FDefaultSetAllocator>
                        *)&this->MetasoundNodeToInt,(INode *)puVar17[5]);
      if ((pTVar12 == (TTuple<Metasound::INode_const_*,int> *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x288,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        pFVar10 = (FDirectedGraphAlgoAdapter *)(*pcVar6)();
        return pFVar10;
      }
      local_234 = *(undefined4 *)&pTVar12->field_0x8;
      local_238 = uVar4;
      TSet<TTuple<int,int>,DefaultKeyFuncs<TTuple<int,int>,0>,FDefaultSetAllocator>::
      Emplace<TTuple<int,int>_>(&this->EdgeSet,(TTuple<int,int> *)local_1b8,(bool *)&local_238);
      local_e0 = *puVar17;
      local_d8 = puVar17[5];
      local_d0 = &local_e0;
      local_c8 = puVar17;
      TSet<TTuple<TTuple<Metasound::INode_const_*,Metasound::INode_const_*>,Metasound::FDataEdge>,TDefaultMapHashableKeyFuncs<TTuple<Metasound::INode_const_*,Metasound::INode_const_*>,Metasound::FDataEdge,1>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<TTuple<Metasound::INode_const_*,Metasound::INode_const_*>_&&,Metasound::FDataEdge_const_&>_>
                ((TSet<TTuple<TTuple<Metasound::INode_const_*,Metasound::INode_const_*>,Metasound::FDataEdge>,TDefaultMapHashableKeyFuncs<TTuple<Metasound::INode_const_*,Metasound::INode_const_*>,Metasound::FDataEdge,1>,FDefaultSetAllocator>
                  *)&this->MetasoundNodePairEdges,
                 (TPairInitializer<TTuple<Metasound::INode_const_*,Metasound::INode_const_*>_&&,Metasound::FDataEdge_const_&>
                  *)(local_1b8 + 4),(bool *)&local_d0);
    }
    puVar17 = puVar17 + 0xd;
  }
  plVar9 = (longlong *)(**(code **)((longlong)*param_1 + 0x60))();
  iVar14 = (int)plVar9[5];
  uStack_268 = 0;
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar9 + 2);
  local_250 = 0;
  uStack_264 = (uint)local_240;
  uStack_254 = 0;
  if (iVar14 != 0) {
    pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)plVar9[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar9[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar20 = pTVar1;
    }
    uVar18 = *(uint *)(pTVar20->AllocatorInstance).InlineData;
    local_250 = 0;
    while (uVar18 == 0) {
      lVar13 = (longlong)(int)uStack_268;
      local_250 = local_250 + 0x20;
      uStack_268 = uStack_268 + 1;
      uStack_254 = iVar14;
      if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uStack_268)
      goto LAB_14ad3881d;
      uVar18 = *(uint *)((pTVar20->AllocatorInstance).InlineData + lVar13 * 4 + 4);
    }
    uStack_264 = -uVar18 & uVar18;
    uVar3 = (ulonglong)uStack_264 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_1b0 = (int)lVar13;
    uStack_254 = local_250 + -1 + local_1b0;
    if (iVar14 < (int)uStack_254) {
      uStack_254 = iVar14;
    }
  }
LAB_14ad3881d:
  uVar18 = *(uint *)(plVar9 + 5);
  uStack_24c = local_74;
  uVar22 = uVar18 & 0xffffffe0;
  iStack_248 = (int)plVar9[1] - *(int *)((longlong)plVar9 + 0x34);
  TStack_118._padding_ = CONCAT44(uStack_264,uStack_268);
  uStack_258 = 0xffffffff;
  TStack_118.CurrentBitIndex = uStack_254;
  TStack_118.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar18 >> 5;
  TStack_118._28_4_ = local_74;
  TStack_118.BaseBitIndex = local_250;
  uStack_f8 = CONCAT44(uStack_244,iStack_248);
  local_270 = plVar9;
  local_260 = pTVar1;
  local_120 = plVar9;
  TStack_118.Array = pTVar1;
  if ((((int)uVar18 < 0) || (iVar14 < (int)uVar18)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pFVar10 = (FDirectedGraphAlgoAdapter *)(*pcVar6)();
    return pFVar10;
  }
  pTVar7 = local_198;
  this_01 = local_230;
  uVar23 = *(uint *)(plVar9 + 5);
  if (uVar18 != uVar23) {
    pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)plVar9[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar9[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar20 = pTVar1;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) &
             *(uint *)((pTVar20->AllocatorInstance).InlineData + (longlong)iVar15 * 4);
    while (uVar18 == 0) {
      lVar13 = (longlong)iVar15;
      uVar22 = uVar22 + 0x20;
      iVar15 = iVar15 + 1;
      uVar18 = uVar23;
      if ((int)((uVar23 - 1) + ((int)(uVar23 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
      goto LAB_14ad38950;
      uVar18 = *(uint *)((pTVar20->AllocatorInstance).InlineData + lVar13 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_1ac = (int)lVar13;
    uVar18 = local_1ac + -1 + uVar22;
    if ((int)uVar23 < (int)uVar18) {
      uVar18 = uVar23;
    }
  }
LAB_14ad38950:
  while( true ) {
    plVar19 = local_120;
    if ((int)local_120[1] - *(int *)((longlong)local_120 + 0x34) != (int)uStack_f8) {
      local_276 = 0;
      `TSparseArray<TSparseSetElement<TTuple<TTuple<Metasound::INode_const_*,FName>,Metasound::FInputDataDestination>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_276);
    }
    if (((TStack_118.CurrentBitIndex == uVar18) && (TStack_118.Array == pTVar1)) &&
       (plVar19 == plVar9)) break;
    pTVar12 = TSet<TTuple<Metasound::INode_const_*,int>,TDefaultMapHashableKeyFuncs<Metasound::INode_const_*,int,0>,FDefaultSetAllocator>
              ::Find(this_01,*(INode **)
                              ((longlong)TStack_118.CurrentBitIndex * 0x58 + 0x10 + *plVar19));
    if ((pTVar12 == (TTuple<Metasound::INode_const_*,int> *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FDirectedGraphAlgoAdapter *)(*pcVar6)();
      return pFVar10;
    }
    TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
              (pTVar7,(int *)&pTVar12->field_0x8);
    TStack_118.UnvisitedBitMask = TStack_118.UnvisitedBitMask & ~TStack_118._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_118);
  }
  plVar9 = (longlong *)(**(code **)((longlong)*param_1 + 0x68))();
  iVar14 = (int)plVar9[5];
  uStack_268 = 0;
  local_250 = 0;
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar9 + 2);
  uStack_254 = 0;
  if (iVar14 != 0) {
    pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)plVar9[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar9[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar20 = pTVar1;
    }
    uVar18 = *(uint *)(pTVar20->AllocatorInstance).InlineData;
    while (uVar18 == 0) {
      lVar13 = (longlong)(int)uStack_268;
      local_250 = local_250 + 0x20;
      uStack_268 = uStack_268 + 1;
      uStack_254 = iVar14;
      if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uStack_268)
      goto LAB_14ad38a82;
      uVar18 = *(uint *)((pTVar20->AllocatorInstance).InlineData + lVar13 * 4 + 4);
    }
    local_240 = (ulonglong)(-uVar18 & uVar18);
    uVar3 = local_240 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_1a8 = (int)lVar13;
    uStack_254 = local_1a8 + -1 + local_250;
    if (iVar14 < (int)uStack_254) {
      uStack_254 = iVar14;
    }
  }
LAB_14ad38a82:
  uVar18 = *(uint *)(plVar9 + 5);
  uStack_264 = (uint)local_240;
  uStack_24c = local_54;
  iStack_248 = (int)plVar9[1] - *(int *)((longlong)plVar9 + 0x34);
  uStack_258 = 0xffffffff;
  uVar22 = uVar18 & 0xffffffe0;
  TStack_220._padding_ = CONCAT44(uStack_264,uStack_268);
  TStack_220.CurrentBitIndex = uStack_254;
  TStack_220.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar18 >> 5;
  TStack_220._28_4_ = local_54;
  TStack_220.BaseBitIndex = local_250;
  local_200 = CONCAT44(uStack_244,iStack_248);
  local_270 = plVar9;
  local_260 = pTVar1;
  local_228 = plVar9;
  TStack_220.Array = pTVar1;
  if ((((int)uVar18 < 0) || (iVar14 < (int)uVar18)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pFVar10 = (FDirectedGraphAlgoAdapter *)(*pcVar6)();
    return pFVar10;
  }
  pTVar7 = local_190;
  uVar23 = *(uint *)(plVar9 + 5);
  if (uVar18 != uVar23) {
    pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)plVar9[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar9[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar20 = pTVar1;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) &
             *(uint *)((pTVar20->AllocatorInstance).InlineData + (longlong)iVar15 * 4);
    while (uVar18 == 0) {
      lVar13 = (longlong)iVar15;
      uVar22 = uVar22 + 0x20;
      iVar15 = iVar15 + 1;
      uVar18 = uVar23;
      if ((int)((uVar23 - 1) + ((int)(uVar23 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
      goto LAB_14ad38ba0;
      uVar18 = *(uint *)((pTVar20->AllocatorInstance).InlineData + lVar13 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_188 = (int)lVar13;
    uVar18 = local_188 + -1 + uVar22;
    if ((int)uVar23 < (int)uVar18) {
      uVar18 = uVar23;
    }
  }
LAB_14ad38ba0:
  while( true ) {
    plVar19 = local_228;
    if ((int)local_228[1] - *(int *)((longlong)local_228 + 0x34) != (int)local_200) {
      local_275 = 0;
      `TSparseArray<TSparseSetElement<TTuple<TTuple<Metasound::INode_const_*,FName>,Metasound::FOutputDataSource>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_275);
    }
    if (((TStack_220.CurrentBitIndex == uVar18) && (TStack_220.Array == pTVar1)) &&
       (plVar19 == plVar9)) break;
    pTVar12 = TSet<TTuple<Metasound::INode_const_*,int>,TDefaultMapHashableKeyFuncs<Metasound::INode_const_*,int,0>,FDefaultSetAllocator>
              ::Find(local_230,
                     *(INode **)((longlong)TStack_220.CurrentBitIndex * 0x40 + 0x10 + *plVar19));
    if ((pTVar12 == (TTuple<Metasound::INode_const_*,int> *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FDirectedGraphAlgoAdapter *)(*pcVar6)();
      return pFVar10;
    }
    TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
              (pTVar7,(int *)&pTVar12->field_0x8);
    TStack_220.UnvisitedBitMask = TStack_220.UnvisitedBitMask & ~TStack_220._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_220);
  }
  return this;
}

// ~FDirectedGraphAlgoAdapter @ 14ad3d8b0

void __thiscall
Metasound::FDirectedGraphAlgoAdapter::~FDirectedGraphAlgoAdapter(FDirectedGraphAlgoAdapter *this)

{
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  FScriptContainerElement *pFVar3;
  
  FLazyCache::~FLazyCache(&this->Lazy);
  *(undefined4 *)&(this->MetasoundNodePairEdges).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MetasoundNodePairEdges).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<Metasound::INode_const_*,Metasound::INode_const_*>,Metasound::FDataEdge>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<Metasound::INode_const_*,Metasound::INode_const_*>,Metasound::FDataEdge>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<Metasound::INode_const_*,Metasound::INode_const_*>,Metasound::FDataEdge>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MetasoundNodePairEdges);
  (this->MetasoundNodeSet).HashSize = 0;
  FVar2 = (this->MetasoundNodeSet).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<Metasound::INode_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<Metasound::INode_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->MetasoundNodeSet).Elements);
  pFVar3 = (this->MetasoundUniqueNodes).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->OutputVertices).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->InputVertices).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  *(undefined4 *)&(this->MetasoundNodeToInt).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MetasoundNodeToInt).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<Metasound::INode_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Metasound::INode_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Metasound::INode_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MetasoundNodeToInt);
  (this->EdgeSet).HashSize = 0;
  FVar2 = (this->EdgeSet).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// GetNodeSet @ 14ad56090

void __thiscall
Metasound::FDirectedGraphAlgoAdapter::GetNodeSet
          (FDirectedGraphAlgoAdapter *this,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1,
          TSet<Metasound::INode_const_*,DefaultKeyFuncs<Metasound::INode_const_*,0>,FDefaultSetAllocator>
          *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  TSet<Metasound::INode_const_*,DefaultKeyFuncs<Metasound::INode_const_*,0>,FDefaultSetAllocator>
  *this_00;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  undefined1 *puVar13;
  undefined1 local_res10 [8];
  TSet<Metasound::INode_const_*,DefaultKeyFuncs<Metasound::INode_const_*,0>,FDefaultSetAllocator>
  *local_res18;
  int local_res20;
  undefined1 local_a4 [12];
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iStack_98 = 0;
  local_80 = 0;
  uStack_94 = 1;
  iStack_84 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar11 = *puVar12;
    while (uVar11 == 0) {
      lVar8 = (longlong)iStack_98;
      local_80 = local_80 + 0x20;
      iStack_98 = iStack_98 + 1;
      iStack_84 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_14ad5613d;
      uVar11 = puVar12[lVar8 + 1];
    }
    uStack_94 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uStack_94 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res20 = (int)lVar8;
    iStack_84 = local_res20 + -1 + local_80;
    if (iVar3 < iStack_84) {
      iStack_84 = iVar3;
    }
  }
LAB_14ad5613d:
  uVar11 = *(uint *)&(param_1->Elements).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  iStack_78 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uStack_88 = 0xffffffff;
  TStack_68._padding_ = CONCAT44(uStack_94,iStack_98);
  TStack_68.CurrentBitIndex = iStack_84;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar9 = (int)uVar11 >> 5;
  TStack_68._28_4_ = iStack_84;
  TStack_68.BaseBitIndex = local_80;
  uStack_48 = CONCAT44(uStack_74,iStack_78);
  local_res18 = param_2;
  local_a4._4_8_ = param_1;
  local_90 = puVar1;
  iStack_7c = iStack_84;
  local_70 = param_1;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_00 = local_res18;
  uVar7 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar9 * 4);
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar9;
      uVar10 = uVar10 + 0x20;
      iVar9 = iVar9 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_14ad56241;
      uVar11 = *(uint *)(puVar13 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar11 = (int)lVar8 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_14ad56241:
  while( true ) {
    pTVar5 = local_70;
    if (*(int *)&(local_70->Elements).field_0x8 - *(int *)&(local_70->Elements).field_0x34 !=
        (int)uStack_48) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_68.CurrentBitIndex == uVar11) &&
        (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar5 == param_1))
    {
      return;
    }
    uVar10 = *(uint *)(*(longlong *)&pTVar5->Elements + (longlong)TStack_68.CurrentBitIndex * 0xc);
    uVar7 = 0;
    if ((int)uVar10 < (this->MetasoundUniqueNodes).ArrayNum) {
      uVar7 = ~uVar10 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    TSet<Metasound::INode_const_*,DefaultKeyFuncs<Metasound::INode_const_*,0>,FDefaultSetAllocator>
    ::Emplace<Metasound::INode_const_*_const_&>
              (this_00,(INode **)local_a4,
               (bool *)((this->MetasoundUniqueNodes).AllocatorInstance.Data +
                       (longlong)(int)uVar10 * 8));
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// GetUniqueEdges @ 14ad56d50

TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::FDirectedGraphAlgoAdapter::GetUniqueEdges(FDirectedGraphAlgoAdapter *this)

{
  TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_> local_18;
  
  if ((this->Lazy).UniqueEdges.bIsInitialized == false) {
    pTVar3 = TSet<TTuple<int,int>,DefaultKeyFuncs<TTuple<int,int>,0>,FDefaultSetAllocator>::Array
                       (&this->EdgeSet,&local_18);
    pTVar1 = &(this->Lazy).UniqueEdges.Object;
    if (pTVar1 != pTVar3) {
      pFVar2 = (pTVar1->AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pTVar1->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
      (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->Lazy).UniqueEdges.Object.ArrayNum = pTVar3->ArrayNum;
      (this->Lazy).UniqueEdges.Object.ArrayMax = pTVar3->ArrayMax;
      pTVar3->ArrayNum = 0;
      pTVar3->ArrayMax = 0;
    }
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
    (this->Lazy).UniqueEdges.bIsInitialized = true;
    return pTVar1;
  }
  return &(this->Lazy).UniqueEdges.Object;
}

// GetUniqueVertices @ 14ad56df0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::FDirectedGraphAlgoAdapter::GetUniqueVertices(FDirectedGraphAlgoAdapter *this)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  int local_18 [4];
  
  pTVar7 = &(this->Lazy).UniqueVertices.Object;
  if ((this->Lazy).UniqueVertices.bIsInitialized == false) {
    uVar2 = (this->MetasoundUniqueNodes).ArrayNum;
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    piVar1 = &(this->Lazy).UniqueVertices.Object.ArrayMax;
    if ((this->Lazy).UniqueVertices.Object.ArrayMax < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar2,&pTVar7->AllocatorInstance,(this->Lazy).UniqueVertices.Object.ArrayNum,
                 piVar1);
    }
    local_18[0] = 0;
    if (0 < (this->MetasoundUniqueNodes).ArrayNum) {
      do {
        pFVar3 = (pTVar7->AllocatorInstance).Data;
        if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
           ((FScriptContainerElement *)local_18 <
            pFVar3 + (longlong)(this->Lazy).UniqueVertices.Object.ArrayMax * 4)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pTVar7 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar7;
          }
        }
        iVar6 = (this->Lazy).UniqueVertices.Object.ArrayNum;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&pTVar7->AllocatorInstance,piVar1);
        }
        (this->Lazy).UniqueVertices.Object.ArrayNum = iVar6 + 1;
        *(int *)((pTVar7->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_18[0];
        local_18[0] = local_18[0] + 1;
      } while (local_18[0] < (this->MetasoundUniqueNodes).ArrayNum);
    }
    (this->Lazy).UniqueVertices.bIsInitialized = true;
  }
  return pTVar7;
}

