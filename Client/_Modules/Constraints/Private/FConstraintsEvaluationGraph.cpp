// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Constraints
// Functions: 12

// Dump @ 1464ad440

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FConstraintsEvaluationGraph::Dump(FConstraintsEvaluationGraph *this)

{
  ulonglong uVar1;
  FConstraintsInWorld *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  uint uVar8;
  UObject *pUVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  TBitArray<FDefaultBitArrayAllocator> *pTVar14;
  undefined1 local_res10 [8];
  uint local_res18;
  int local_res20;
  longlong local_118;
  FName local_10c;
  FName local_104;
  FScriptContainerElement *local_f8;
  FName local_f0;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FScriptContainerElement *local_b8;
  int iStack_b0;
  uint uStack_ac;
  TBitArray<FDefaultBitArrayAllocator> *local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int local_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  FScriptContainerElement *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  undefined4 local_3c;
  
  if (ConstraintsEvaluationGraph::bDebugGraph) {
    pFVar2 = this->ConstraintsInWorld;
    if (2 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    iVar12 = (pFVar2->Constraints).ArrayNum;
    uVar11 = 0;
    if (0 < iVar12) {
      do {
        uVar13 = 0;
        if ((int)uVar11 < iVar12) {
          uVar13 = ~uVar11 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        bVar7 = FWeakObjectPtr::IsValid
                          ((FWeakObjectPtr *)
                           ((pFVar2->Constraints).AllocatorInstance.Data + (longlong)(int)uVar11 * 8
                           ));
        if ((bVar7) && (2 < (byte)LogTemp._0_1_)) {
          uVar13 = 0;
          if ((int)uVar11 < (pFVar2->Constraints).ArrayNum) {
            uVar13 = ~uVar11 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                       ((pFVar2->Constraints).AllocatorInstance.Data +
                                       (longlong)(int)uVar11 * 8));
          local_10c.ComparisonIndex.Value = *(uint *)&pUVar9->field_0x18;
          local_10c.Number = *(uint *)&pUVar9->field_0x1c;
          ::FName::ToString(&local_10c,&local_e8);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
          if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e8.Data.AllocatorInstance.Data);
          }
        }
        iVar12 = (pFVar2->Constraints).ArrayNum;
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < iVar12);
    }
    if (2 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    local_res18 = 0;
    if (0 < (this->Nodes).ArrayNum) {
      local_118 = 0;
      do {
        uVar11 = local_res18;
        uVar13 = 0;
        if ((int)local_res18 < (this->Nodes).ArrayNum) {
          uVar13 = ~local_res18 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (this->Nodes).AllocatorInstance.Data;
        if (((*(int *)(pFVar3 + local_118 + 0x1c) < 0) ||
            ((pFVar2->Constraints).ArrayNum <= *(int *)(pFVar3 + local_118 + 0x1c))) &&
           (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<7515207077300535590>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Private\\ConstraintsEvaluationGraph.cpp"
                               ,0x126,"Constraints.IsValidIndex(Node.ConstraintIndex)"), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*(uint *)(pFVar3 + local_118 + 0x18) != uVar11) &&
           (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<7515207077300535591>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Private\\ConstraintsEvaluationGraph.cpp"
                               ,0x127,"Node.NodeIndex == NodeIndex"), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (2 < (byte)LogTemp._0_1_) {
          uVar11 = *(uint *)(pFVar3 + local_118 + 0x1c);
          uVar13 = 0;
          if ((int)uVar11 < (pFVar2->Constraints).ArrayNum) {
            uVar13 = ~uVar11 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                       ((pFVar2->Constraints).AllocatorInstance.Data +
                                       (longlong)(int)uVar11 * 8));
          local_104.ComparisonIndex.Value = *(uint *)&pUVar9->field_0x18;
          local_104.Number = *(uint *)&pUVar9->field_0x1c;
          ::FName::ToString(&local_104,&local_d8);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
          if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
          }
        }
        local_a8 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar3 + local_118 + 0x80);
        iStack_b0 = 0;
        iVar12 = *(int *)(pFVar3 + local_118 + 0x98);
        local_f8 = pFVar3 + local_118 + 0x70;
        local_98 = 0;
        uStack_ac = 1;
        iStack_9c = 0;
        if (iVar12 != 0) {
          pTVar14 = local_a8;
          if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar3 + local_118 + 0x90) !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar14 = *(TBitArray<FDefaultBitArrayAllocator> **)(pFVar3 + local_118 + 0x90);
          }
          uVar11 = *(uint *)(pTVar14->AllocatorInstance).InlineData;
          while (uVar11 == 0) {
            lVar10 = (longlong)iStack_b0;
            local_98 = local_98 + 0x20;
            iStack_b0 = iStack_b0 + 1;
            iStack_9c = iVar12;
            if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b0)
            goto LAB_1464ad81f;
            uVar11 = *(uint *)((pTVar14->AllocatorInstance).InlineData + lVar10 * 4 + 4);
          }
          uStack_ac = -uVar11 & uVar11;
          uVar1 = (ulonglong)uStack_ac * 2 + 1;
          lVar10 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
            }
          }
          local_res20 = (int)lVar10;
          iStack_9c = local_res20 + -1 + local_98;
          if (iVar12 < iStack_9c) {
            iStack_9c = iVar12;
          }
        }
LAB_1464ad81f:
        uStack_94 = local_3c;
        iStack_90 = *(int *)(pFVar3 + local_118 + 0x78) - *(int *)(pFVar3 + local_118 + 0xa4);
        uVar11 = *(uint *)(pFVar3 + local_118 + 0x98);
        TStack_80._padding_ = CONCAT44(uStack_ac,iStack_b0);
        uStack_a0 = 0xffffffff;
        TStack_80.CurrentBitIndex = iStack_9c;
        TStack_80.UnvisitedBitMask = 0xffffffff;
        uVar13 = uVar11 & 0xffffffe0;
        iVar12 = (int)uVar11 >> 5;
        TStack_80._28_4_ = local_3c;
        TStack_80.BaseBitIndex = local_98;
        uStack_60 = CONCAT44(uStack_8c,iStack_90);
        local_b8 = local_f8;
        local_88 = local_f8;
        TStack_80.Array = local_a8;
        if (((int)uVar11 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar5 = local_f8;
        uVar8 = *(uint *)(pFVar3 + local_118 + 0x98);
        if (uVar11 != uVar8) {
          pTVar14 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar3 + local_118 + 0x80);
          if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar3 + local_118 + 0x90) !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar14 = *(TBitArray<FDefaultBitArrayAllocator> **)(pFVar3 + local_118 + 0x90);
          }
          uVar11 = -1 << ((byte)uVar11 & 0x1f) &
                   *(uint *)((pTVar14->AllocatorInstance).InlineData + (longlong)iVar12 * 4);
          while (uVar11 == 0) {
            lVar10 = (longlong)iVar12;
            uVar13 = uVar13 + 0x20;
            iVar12 = iVar12 + 1;
            uVar11 = uVar8;
            if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
            goto LAB_1464ad940;
            uVar11 = *(uint *)((pTVar14->AllocatorInstance).InlineData + lVar10 * 4 + 4);
          }
          uVar1 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
          lVar10 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
            }
          }
          uVar11 = (int)lVar10 + -1 + uVar13;
          if ((int)uVar8 < (int)uVar11) {
            uVar11 = uVar8;
          }
        }
LAB_1464ad940:
        while( true ) {
          pFVar6 = local_88;
          if (*(int *)(local_88 + 8) - *(int *)(local_88 + 0x34) != (int)uStack_60) {
            local_res10[0] = 0;
            `TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
          }
          if (((TStack_80.CurrentBitIndex == uVar11) &&
              (TStack_80.Array ==
               (TBitArray<FDefaultBitArrayAllocator> *)(pFVar3 + local_118 + 0x80))) &&
             (pFVar6 == pFVar5)) break;
          uVar13 = *(uint *)(*(longlong *)pFVar6 + (longlong)TStack_80.CurrentBitIndex * 0xc);
          if (((int)uVar13 < 0) || ((this->Nodes).ArrayNum <= (int)uVar13)) {
            bVar7 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<7515207077300535595>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Private\\ConstraintsEvaluationGraph.cpp"
                               ,299,"Nodes.IsValidIndex(ChildIndex)");
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          else {
            uVar8 = 0;
            if ((int)uVar13 < (this->Nodes).ArrayNum) {
              uVar8 = ~uVar13 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (2 < (byte)LogTemp._0_1_) {
              uVar13 = *(uint *)((this->Nodes).AllocatorInstance.Data +
                                (longlong)(int)uVar13 * 200 + 0x1c);
              uVar8 = 0;
              if ((int)uVar13 < (pFVar2->Constraints).ArrayNum) {
                uVar8 = ~uVar13 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                           ((pFVar2->Constraints).AllocatorInstance.Data +
                                           (longlong)(int)uVar13 * 8));
              local_f0.ComparisonIndex.Value = *(uint *)&pUVar9->field_0x18;
              local_f0.Number = *(uint *)&pUVar9->field_0x1c;
              ::FName::ToString(&local_f0,&local_c8);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
              if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_c8.Data.AllocatorInstance.Data);
              }
            }
          }
          TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
        }
        local_res18 = local_res18 + 1;
        local_118 = local_118 + 200;
      } while ((int)local_res18 < (this->Nodes).ArrayNum);
    }
  }
  return;
}

// Evaluate @ 1464ae3d0

void __thiscall
FConstraintsEvaluationGraph::Evaluate
          (FConstraintsEvaluationGraph *this,
          TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *param_1)

{
  FConstraintNode *pFVar1;
  
  if (this->State == InvalidData) {
    Rebuild(this);
  }
  if ((this->Nodes).ArrayNum != 0) {
    pFVar1 = FindNode(this,param_1);
    if (pFVar1 != (FConstraintNode *)0x0) {
      Evaluate(this,pFVar1);
    }
  }
  return;
}

// Evaluate @ 1464ae420

void __thiscall
FConstraintsEvaluationGraph::Evaluate(FConstraintsEvaluationGraph *this,FConstraintNode *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  FConstraintsInWorld *pFVar3;
  byte *pbVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  UObject *pUVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  FWeakObjectPtr local_res20;
  undefined4 local_ac;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  iVar12 = param_1->ConstraintIndex;
  pFVar3 = this->ConstraintsInWorld;
  if ((-1 < iVar12) && (iVar12 < (pFVar3->Constraints).ArrayNum)) {
    if ((iVar12 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_res20 = *(FWeakObjectPtr *)
                   ((pFVar3->Constraints).AllocatorInstance.Data + (longlong)iVar12 * 8);
    bVar6 = FWeakObjectPtr::IsValid(&local_res20);
    if ((bVar6) && (param_1->bEvaluating == false)) {
      param_1->bEvaluating = true;
      pUVar10 = FWeakObjectPtr::Get(&local_res20);
      cVar7 = (**(code **)(*(longlong *)pUVar10 + 0x2d0))(pUVar10);
      if (cVar7 != '\0') {
        pbVar4 = (byte *)param_1->ConstraintTick->_padding_;
        if (((pbVar4 != (byte *)0x0) && ((*pbVar4 & 1) != 0)) &&
           ((param_1->ConstraintTick->_padding_ & 0xc000000) != 0)) {
          pUVar10 = FWeakObjectPtr::Get(&local_res20);
          (**(code **)(*(longlong *)pUVar10 + 0x2b8))(pUVar10);
        }
      }
      puVar1 = &(param_1->Children).Elements.field_0x10;
      param_1->bMarkedForEvaluation = false;
      iVar12 = *(int *)&(param_1->Children).Elements.field_0x28;
      iVar14 = 0;
      iVar16 = 0;
      uVar8 = 1;
      iVar9 = 0;
      if (iVar12 != 0) {
        puVar17 = *(uint **)&(param_1->Children).Elements.field_0x20;
        if (puVar17 == (uint *)0x0) {
          puVar17 = (uint *)puVar1;
        }
        uVar13 = *puVar17;
        while (uVar13 == 0) {
          lVar11 = (longlong)iVar14;
          iVar16 = iVar16 + 0x20;
          iVar14 = iVar14 + 1;
          iVar9 = iVar12;
          if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1464ae5bd;
          uVar13 = puVar17[lVar11 + 1];
        }
        uVar8 = -uVar13 & uVar13;
        uVar2 = (ulonglong)uVar8 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_res10 = (int)lVar11;
        iVar9 = iVar16 + -1 + local_res10;
        if (iVar12 < iVar9) {
          iVar9 = iVar12;
        }
      }
LAB_1464ae5bd:
      uVar13 = *(uint *)&(param_1->Children).Elements.field_0x28;
      uVar18 = uVar13 & 0xffffffe0;
      TStack_70._padding_ = CONCAT44(uVar8,iVar14);
      TStack_70.CurrentBitIndex = iVar9;
      TStack_70.UnvisitedBitMask = 0xffffffff;
      iVar12 = (int)uVar13 >> 5;
      TStack_70._28_4_ = local_ac;
      TStack_70.BaseBitIndex = iVar16;
      uStack_50 = CONCAT44(uStack_7c,
                           *(int *)&(param_1->Children).Elements.field_0x8 -
                           *(int *)&(param_1->Children).Elements.field_0x34);
      TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if (((int)uVar13 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar8 = *(uint *)&(param_1->Children).Elements.field_0x28;
      if (uVar13 != uVar8) {
        puVar15 = *(undefined1 **)&(param_1->Children).Elements.field_0x20;
        if (puVar15 == (undefined1 *)0x0) {
          puVar15 = puVar1;
        }
        uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar12 * 4);
        while (uVar13 == 0) {
          lVar11 = (longlong)iVar12;
          uVar18 = uVar18 + 0x20;
          iVar12 = iVar12 + 1;
          uVar13 = uVar8;
          if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
          goto LAB_1464ae6d0;
          uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_res18 = (int)lVar11;
        uVar13 = local_res18 + -1 + uVar18;
        if ((int)uVar8 < (int)uVar13) {
          uVar13 = uVar8;
        }
      }
LAB_1464ae6d0:
      while( true ) {
        if (*(int *)&(param_1->Children).Elements.field_0x8 -
            *(int *)&(param_1->Children).Elements.field_0x34 != (int)uStack_50) {
          local_res8[0] = 0;
          `TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if ((TStack_70.CurrentBitIndex == uVar13) &&
           (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
        uVar8 = *(uint *)(*(longlong *)&(param_1->Children).Elements +
                         (longlong)TStack_70.CurrentBitIndex * 0xc);
        if (((int)uVar8 < 0) || ((this->Nodes).ArrayNum <= (int)uVar8)) {
          bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<7515207077300535508>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Private\\ConstraintsEvaluationGraph.cpp"
                             ,0xd4,"Nodes.IsValidIndex(ChildIndex)");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        else {
          uVar18 = 0;
          if ((int)uVar8 < (this->Nodes).ArrayNum) {
            uVar18 = ~uVar8 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          Evaluate(this,(FConstraintNode *)
                        ((this->Nodes).AllocatorInstance.Data + (longlong)(int)uVar8 * 200));
        }
        TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
      }
      param_1->bEvaluating = false;
    }
  }
  return;
}

// FindNode @ 1464afd90

FConstraintNode * __thiscall
FConstraintsEvaluationGraph::FindNode
          (FConstraintsEvaluationGraph *this,
          TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FConstraintNode *pFVar3;
  FConstraintNode *pFVar4;
  FWeakObjectPtr local_res10 [3];
  
  bVar1 = FWeakObjectPtr::IsValid(&param_1->WeakPtr);
  if (!bVar1) {
    return (FConstraintNode *)0x0;
  }
  local_res10[0] = param_1->WeakPtr;
  pFVar3 = (FConstraintNode *)(this->Nodes).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (this->Nodes).ArrayNum;
  while( true ) {
    if (pFVar3 == pFVar4) {
      return (FConstraintNode *)0x0;
    }
    bVar1 = FWeakObjectPtr::IsValid(local_res10);
    if ((bVar1) &&
       (pUVar2 = FWeakObjectPtr::Get(local_res10),
       (((pFVar3->ConstraintID).D == *(uint *)&pUVar2[1].field_0x10 &&
        (pFVar3->ConstraintID).C == *(uint *)&pUVar2[1].field_0xc) &&
       (pFVar3->ConstraintID).B == *(uint *)&pUVar2[1].field_0x8) &&
       *(uint *)&pUVar2[1].field_0x4 == (pFVar3->ConstraintID).A)) break;
    pFVar3 = pFVar3 + 1;
  }
  return pFVar3;
}

// FlushPendingEvaluations @ 1464b0400

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FConstraintsEvaluationGraph::FlushPendingEvaluations(FConstraintsEvaluationGraph *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FConstraintNode *pFVar6;
  FConstraintNode *pFVar7;
  undefined1 local_res8 [8];
  
  if (((this->State != InvalidData) && (this->State != Flushing)) && ((this->Nodes).ArrayNum != 0))
  {
    if ((ConstraintsEvaluationGraph::bDebugGraph) && (2 < (byte)LogTemp._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    this->State = Flushing;
    iVar1 = (this->Nodes).ArrayNum;
    pFVar6 = (FConstraintNode *)(this->Nodes).AllocatorInstance.Data;
    pFVar7 = pFVar6 + iVar1;
    while( true ) {
      if ((this->Nodes).ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FConstraintNode,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar6 == pFVar7) break;
      if (pFVar6->bMarkedForEvaluation != false) {
        Evaluate(this,pFVar6);
      }
      pFVar6 = pFVar6 + 1;
    }
    pFVar4 = (this->Nodes).AllocatorInstance.Data;
    pFVar5 = pFVar4 + (longlong)(this->Nodes).ArrayNum * 200;
    if (pFVar4 != pFVar5) {
      while (pFVar4[0xc0] == (FScriptContainerElement)0x0) {
        pFVar4 = pFVar4 + 200;
        if (pFVar4 == pFVar5) {
          this->State = ReadyForEvaluation;
          return;
        }
      }
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7515207077300535390>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Private\\ConstraintsEvaluationGraph.cpp"
                         ,0x5e,"!bHasNodesToEvaluate");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this->State = ReadyForEvaluation;
  }
  return;
}

// GetNode @ 1464b46e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FConstraintNode * __thiscall
FConstraintsEvaluationGraph::GetNode
          (FConstraintsEvaluationGraph *this,
          TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *param_1)

{
  int *piVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  ulonglong uVar5;
  bool bVar6;
  int iVar7;
  UObject *pUVar8;
  UTickableConstraint *this_00;
  UWorld *pUVar9;
  FConstraintNode *pFVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStackY_158 [32];
  FWeakObjectPtr local_128 [2];
  undefined1 local_118 [32];
  ForAnyElementType local_f8;
  undefined8 local_f0;
  TBitArray<FDefaultBitArrayAllocator> local_e8;
  undefined4 local_c8;
  undefined4 local_c4;
  ForElementType<FSetElementId> local_b8;
  int local_b0;
  ForAnyElementType local_a8;
  undefined8 local_a0;
  TBitArray<FDefaultBitArrayAllocator> local_98;
  undefined4 local_78;
  undefined4 local_74;
  ForElementType<FSetElementId> local_68;
  int local_60;
  undefined2 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  pFVar3 = (this->Nodes).AllocatorInstance.Data;
  local_128[0] = param_1->WeakPtr;
  iVar7 = (this->Nodes).ArrayNum;
  pFVar11 = pFVar3;
  do {
    if (pFVar11 == pFVar3 + (longlong)iVar7 * 200) {
LAB_1464b4779:
      local_118._24_4_ = -1;
      local_118._28_4_ = -1;
      local_118._0_4_ = 0;
      local_118._4_4_ = 0;
      local_118._8_4_ = 0;
      local_118._12_4_ = 0;
      local_f8.Data = (FScriptContainerElement *)0x0;
      local_f0 = 0;
      local_e8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_e8.NumBits = 0;
      local_c4 = 0;
      local_b8 = (ForElementType<FSetElementId>)0x0;
      local_b0 = 0;
      local_a8.Data = (FScriptContainerElement *)0x0;
      local_a0 = 0;
      local_98.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_98.NumBits = 0;
      local_74 = 0;
      local_68 = (ForElementType<FSetElementId>)0x0;
      local_60 = 0;
      local_58._0_1_ = false;
      local_58._1_1_ = false;
      local_e8.MaxBits = 0x80;
      local_c8 = 0xffffffff;
      local_98.MaxBits = 0x80;
      local_78 = 0xffffffff;
      pUVar8 = FWeakObjectPtr::Get(&param_1->WeakPtr);
      local_118._0_4_ = *(undefined4 *)&pUVar8[1].field_0x4;
      local_118._4_4_ = *(undefined4 *)&pUVar8[1].field_0x8;
      local_118._8_4_ = *(undefined4 *)&pUVar8[1].field_0xc;
      local_118._12_4_ = *(undefined4 *)&pUVar8[1].field_0x10;
      this_00 = (UTickableConstraint *)FWeakObjectPtr::Get(&param_1->WeakPtr);
      pUVar9 = (UWorld *)FWeakObjectPtr::Get((FWeakObjectPtr *)this->ConstraintsInWorld);
      local_118._16_8_ = UTickableConstraint::GetTickFunction(this_00,pUVar9);
      piVar1 = &(this->Nodes).ArrayMax;
      iVar7 = (this->Nodes).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x8c8,&(this->Nodes).AllocatorInstance,piVar1);
      }
      (this->Nodes).ArrayNum = iVar7 + 1;
      pFVar10 = FConstraintNode::FConstraintNode
                          ((FConstraintNode *)
                           ((this->Nodes).AllocatorInstance.Data + (longlong)iVar7 * 200),
                           (FConstraintNode *)local_118);
      local_60 = 0;
      if (local_68 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_68);
      }
      uVar5 = local_a0 >> 0x20;
      local_a0 = local_a0 & 0xffffffff00000000;
      if ((int)uVar5 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,&local_a8,0,(int *)((longlong)&local_a0 + 4));
      }
      local_78 = 0xffffffff;
      local_74 = 0;
      local_98.NumBits = 0;
      if (0x80 < (uint)local_98.MaxBits) {
        local_98.MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_98,0);
      }
      if (local_98.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_98.AllocatorInstance.SecondaryData);
      }
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data);
      }
      local_b0 = 0;
      if (local_b8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_b8);
      }
      uVar5 = local_f0 >> 0x20;
      local_f0 = local_f0 & 0xffffffff00000000;
      if ((int)uVar5 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,&local_f8,0,(int *)((longlong)&local_f0 + 4));
      }
      local_c8 = 0xffffffff;
      local_c4 = 0;
      local_e8.NumBits = 0;
      if (0x80 < (uint)local_e8.MaxBits) {
        local_e8.MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_e8,0);
      }
      if (local_e8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_e8.AllocatorInstance.SecondaryData);
      }
      if (local_f8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data);
      }
      return pFVar10;
    }
    bVar6 = FWeakObjectPtr::IsValid(local_128);
    if ((bVar6) &&
       (pUVar8 = FWeakObjectPtr::Get(local_128),
       ((*(int *)(pFVar11 + 0xc) == *(int *)&pUVar8[1].field_0x10 &&
        *(int *)(pFVar11 + 8) == *(int *)&pUVar8[1].field_0xc) &&
       *(int *)(pFVar11 + 4) == *(int *)&pUVar8[1].field_0x8) &&
       *(int *)&pUVar8[1].field_0x4 == *(int *)pFVar11)) {
      lVar2 = ((longlong)pFVar11 - (longlong)pFVar3) +
              SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((longlong)pFVar11 - (longlong)pFVar3),8)
      ;
      uVar12 = (int)(lVar2 >> 7) - (int)(lVar2 >> 0x3f);
      if (uVar12 != 0xffffffff) {
        uVar13 = 0;
        if ((int)uVar12 < (this->Nodes).ArrayNum) {
          uVar13 = ~uVar12 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FConstraintNode *)(*pcVar4)();
          return pFVar10;
        }
        return (FConstraintNode *)
               ((this->Nodes).AllocatorInstance.Data + (longlong)(int)uVar12 * 200);
      }
      goto LAB_1464b4779;
    }
    pFVar11 = pFVar11 + 200;
  } while( true );
}

// GetSortedConstraints @ 1464b6810

bool __thiscall
FConstraintsEvaluationGraph::GetSortedConstraints
          (FConstraintsEvaluationGraph *this,
          TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  FConstraintsInWorld *pFVar4;
  FWeakObjectPtr *pFVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  UObject *pUVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_38 [2];
  
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&param_1->AllocatorInstance,0,piVar1);
  }
  pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)this->ConstraintsInWorld);
  if (pUVar11 == (UObject *)0x0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7515207077300535421>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Private\\ConstraintsEvaluationGraph.cpp"
                       ,0x7d,"ConstraintsInWorld.World.Get()");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
  }
  else {
    if (this->State == InvalidData) {
      Rebuild(this);
    }
    uVar2 = (this->Nodes).ArrayNum;
    if (uVar2 != 0) {
      pFVar4 = this->ConstraintsInWorld;
      if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
      }
      if (*piVar1 < (int)uVar2) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,uVar2,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
      }
      iVar3 = (this->Nodes).ArrayNum;
      pFVar12 = (this->Nodes).AllocatorInstance.Data;
      pFVar13 = pFVar12 + (longlong)iVar3 * 200;
      while( true ) {
        if ((this->Nodes).ArrayNum != iVar3) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FConstraintNode,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (pFVar12 == pFVar13) break;
        uVar2 = *(uint *)(pFVar12 + 0x1c);
        uVar9 = 0;
        if ((int)uVar2 < (pFVar4->Constraints).ArrayNum) {
          uVar9 = ~uVar2 >> 0x1f;
        }
        if (uVar9 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
        }
        local_38[0] = *(FWeakObjectPtr *)
                       ((pFVar4->Constraints).AllocatorInstance.Data + (longlong)(int)uVar2 * 8);
        bVar7 = FWeakObjectPtr::IsValid(local_38);
        if (bVar7) {
          pFVar5 = (FWeakObjectPtr *)(param_1->AllocatorInstance).Data;
          if ((pFVar5 <= local_38) && (local_38 < pFVar5 + *piVar1)) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar7) {
              pcVar6 = (code *)swi(3);
              uVar8 = (*pcVar6)();
              return (bool)uVar8;
            }
          }
          iVar10 = param_1->ArrayNum;
          if (iVar10 == *piVar1) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&param_1->AllocatorInstance,piVar1);
          }
          param_1->ArrayNum = iVar10 + 1;
          *(FWeakObjectPtr *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 8) =
               local_38[0];
        }
        pFVar12 = pFVar12 + 200;
      }
      if (param_1->ArrayNum != (pFVar4->Constraints).ArrayNum) {
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7515207077300535449>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Private\\ConstraintsEvaluationGraph.cpp"
                           ,0x99,"OutConstraints.Num() == Constraints.Num()");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
      }
      return true;
    }
  }
  return false;
}

// InvalidateData @ 1464b9010

void __thiscall FConstraintsEvaluationGraph::InvalidateData(FConstraintsEvaluationGraph *this)

{
  this->State = InvalidData;
  DestructItems<FConstraintNode,int>
            ((FConstraintNode *)(this->Nodes).AllocatorInstance.Data,(this->Nodes).ArrayNum);
  (this->Nodes).ArrayNum = 0;
  if ((this->Nodes).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (200,8,0,&(this->Nodes).AllocatorInstance,0,&(this->Nodes).ArrayMax);
  }
  return;
}

// IsPendingEvaluation @ 1464b9440

bool __thiscall FConstraintsEvaluationGraph::IsPendingEvaluation(FConstraintsEvaluationGraph *this)

{
  return this->State == PendingEvaluation;
}

// MarkForEvaluation @ 1464ba030

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FConstraintsEvaluationGraph::MarkForEvaluation
          (FConstraintsEvaluationGraph *this,
          TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *param_1)

{
  FConstraintNode *pFVar1;
  UObject *pUVar2;
  FName local_res8;
  FString local_18;
  
  if (this->State == InvalidData) {
    Rebuild(this);
  }
  if ((this->State != Flushing) &&
     (pFVar1 = FindNode(this,param_1), pFVar1 != (FConstraintNode *)0x0)) {
    if ((ConstraintsEvaluationGraph::bDebugGraph != false) && (2 < (byte)LogTemp._0_1_)) {
      pUVar2 = FWeakObjectPtr::Get(&param_1->WeakPtr);
      local_res8.ComparisonIndex.Value = *(uint *)&pUVar2->field_0x18;
      local_res8.Number = *(uint *)&pUVar2->field_0x1c;
      ::FName::ToString(&local_res8,&local_18);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    pFVar1->bMarkedForEvaluation = true;
    if (this->State == ReadyForEvaluation) {
      this->State = PendingEvaluation;
    }
  }
  return;
}

// Rebuild @ 1464bc5b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FConstraintsEvaluationGraph::Rebuild(FConstraintsEvaluationGraph *this)

{
  TArray<FConstraintNode,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  UObject *pUVar6;
  UWorld *pUVar7;
  TArrayView<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>_const_,int> local_38;
  FGraphBuildHelper local_28;
  
  pTVar1 = &this->Nodes;
  DestructItems<FConstraintNode,int>
            ((FConstraintNode *)(pTVar1->AllocatorInstance).Data,(this->Nodes).ArrayNum);
  piVar2 = &(this->Nodes).ArrayMax;
  (this->Nodes).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (200,8,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)this->ConstraintsInWorld);
  if (pUVar6 == (UObject *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7515207077300535399>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Private\\ConstraintsEvaluationGraph.cpp"
                       ,0x67,"ConstraintsInWorld.World.Get()");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    iVar3 = (this->ConstraintsInWorld->Constraints).ArrayNum;
    if (iVar3 != 0) {
      local_38.DataPtr =
           (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)
           (this->ConstraintsInWorld->Constraints).AllocatorInstance.Data;
      if ((iVar3 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_38.ArrayNum = iVar3;
      pUVar7 = (UWorld *)FWeakObjectPtr::Get((FWeakObjectPtr *)this->ConstraintsInWorld);
      DestructItems<FConstraintNode,int>
                ((FConstraintNode *)(pTVar1->AllocatorInstance).Data,(this->Nodes).ArrayNum);
      (this->Nodes).ArrayNum = 0;
      if (*piVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (200,8,0,&pTVar1->AllocatorInstance,0,piVar2);
      }
      if (pUVar7 == (UWorld *)0x0) {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7515207077300535880>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Private\\ConstraintsEvaluationGraph.cpp"
                           ,0x248,"InWorld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else if (local_38.ArrayNum != 0) {
        local_28.Constraints = &local_38;
        local_28.World = pUVar7;
        local_28.Nodes = pTVar1;
        UE::Constraints::Graph::Private::FGraphBuildHelper::Build(&local_28);
      }
      this->State = ReadyForEvaluation;
      Dump(this);
    }
  }
  return;
}

// UseEvaluationGraph @ 1464c41b0

bool __cdecl FConstraintsEvaluationGraph::UseEvaluationGraph(void)

{
  return ConstraintsEvaluationGraph::bUseEvaluationGraph;
}

