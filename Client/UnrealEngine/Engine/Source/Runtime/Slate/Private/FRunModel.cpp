// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 16

// FRunModel @ 142844be0

FRunModel * __thiscall
FTextLayout::FRunModel::FRunModel(FRunModel *this,TSharedRef<IRun,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FRunModel *pFVar4;
  
  (this->Run).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->Run).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->MeasuredRanges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeasuredRanges).ArrayNum = 0;
  (this->MeasuredRanges).ArrayMax = 0;
  (this->MeasuredRangeSizes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeasuredRangeSizes).ArrayNum = 0;
  (this->MeasuredRangeSizes).ArrayMax = 0;
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = IsInSlateThread();
    if (!bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread() || IsInSlateThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\TextLayout.cpp"
                         ,0xbc1,
                         L"Slate can only be accessed from the GameThread or the SlateLoadingThread!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FRunModel *)(*pcVar2)();
        return pFVar4;
      }
    }
  }
  return this;
}

// AppendTextTo @ 1428530d0

void __thiscall FTextLayout::FRunModel::AppendTextTo(FRunModel *this,FString *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001428530d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*(this->Run).Object + 0x88))();
  return;
}

// AppendTextTo @ 1428530f0

void __thiscall
FTextLayout::FRunModel::AppendTextTo(FRunModel *this,FString *param_1,FTextRange *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001428530f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*(this->Run).Object + 0x80))();
  return;
}

// BeginLayout @ 142855710

void __thiscall FTextLayout::FRunModel::BeginLayout(FRunModel *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142855716. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*(this->Run).Object + 0x60))();
  return;
}

// BinarySearchForBeginIndex @ 142855970

int __cdecl
FTextLayout::FRunModel::BinarySearchForBeginIndex
          (TArray<FTextRange,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 0;
  uVar5 = 0;
  iVar6 = param_1->ArrayNum + -1;
  if (-1 < iVar6) {
    do {
      iVar3 = iVar6 - iVar7;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      uVar5 = (iVar3 >> 1) + iVar7;
      uVar4 = 0;
      if ((int)uVar5 < param_1->ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar6 = (*pcVar1)();
        return iVar6;
      }
      if (*(int *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar5 * 8) == param_2) {
        return uVar5;
      }
      uVar4 = 0;
      if ((int)uVar5 < param_1->ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar6 = (*pcVar1)();
        return iVar6;
      }
      iVar3 = uVar5 + 1;
      if (param_2 <= *(int *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar5 * 8)) {
        iVar3 = iVar7;
        iVar6 = uVar5 - 1;
      }
      iVar7 = iVar3;
    } while (iVar7 <= iVar6);
  }
  return uVar5;
}

// BinarySearchForEndIndex @ 142855aa0

int __cdecl
FTextLayout::FRunModel::BinarySearchForEndIndex
          (TArray<FTextRange,TSizedDefaultAllocator<32>_> *param_1,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = 0;
  iVar6 = param_1->ArrayNum + -1;
  if (param_2 <= iVar6) {
    do {
      iVar3 = iVar6 - param_2;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      uVar5 = (iVar3 >> 1) + param_2;
      uVar4 = 0;
      if ((int)uVar5 < param_1->ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar6 = (*pcVar1)();
        return iVar6;
      }
      if (*(int *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar5 * 8 + 4) == param_3) {
        return uVar5;
      }
      uVar4 = 0;
      if ((int)uVar5 < param_1->ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar6 = (*pcVar1)();
        return iVar6;
      }
      iVar3 = uVar5 + 1;
      if (param_3 <= *(int *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar5 * 8 + 4)) {
        iVar3 = param_2;
        iVar6 = uVar5 - 1;
      }
      param_2 = iVar3;
    } while (param_2 <= iVar6);
  }
  return uVar5;
}

// ClearCache @ 142857630

void __thiscall FTextLayout::FRunModel::ClearCache(FRunModel *this)

{
  int *piVar1;
  
  piVar1 = &(this->MeasuredRanges).ArrayMax;
  (this->MeasuredRanges).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->MeasuredRanges).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->MeasuredRangeSizes).ArrayMax;
  (this->MeasuredRangeSizes).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->MeasuredRangeSizes).AllocatorInstance,0,piVar1);
  }
  return;
}

// CreateBlock @ 142866a50

TSharedRef<ILayoutBlock,1> * __thiscall
FTextLayout::FRunModel::CreateBlock
          (FRunModel *this,TSharedRef<ILayoutBlock,1> *__return_storage_ptr__,
          FBlockDefinition *param_1,float param_2,FLayoutBlockTextContext *param_3)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  IRun *pIVar3;
  IRun IVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  TSharedRef<ILayoutBlock,1> *pTVar12;
  double *pdVar13;
  undefined8 *puVar14;
  char *pcVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  longlong lVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  longlong in_stack_ffffffffffffff08;
  undefined1 local_d0 [8];
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [64];
  
  uVar27 = (undefined4)((ulonglong)in_stack_ffffffffffffff08 >> 0x20);
  iVar9 = (this->MeasuredRanges).ArrayNum;
  if (iVar9 == 0) {
    pIVar3 = (this->Run).Object;
    (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_d0);
    pIVar3 = (this->Run).Object;
    IVar4 = *pIVar3;
    puVar11 = (undefined4 *)
              (**(code **)((longlong)IVar4 + 0x28))
                        (pIVar3,local_98,(param_1->ActualRange).BeginIndex,
                         (param_1->ActualRange).EndIndex,CONCAT44(uVar27,param_2),param_3);
    local_a8 = *puVar11;
    uStack_a4 = puVar11[1];
    uStack_a0 = puVar11[2];
    uStack_9c = puVar11[3];
    (**(code **)((longlong)IVar4 + 0x48))
              (pIVar3,__return_storage_ptr__,(param_1->ActualRange).BeginIndex,
               (param_1->ActualRange).EndIndex,&local_a8,param_3,&param_1->Renderer);
    return __return_storage_ptr__;
  }
  iVar21 = (param_1->ActualRange).BeginIndex;
  uVar17 = 0;
  uVar23 = 0;
  if (iVar9 < 0x11) {
    uVar22 = iVar9 - 1;
    uVar18 = uVar17;
    if (iVar21 != 0) {
      if (0 < (int)uVar22) {
        do {
          uVar20 = (uint)uVar18;
          uVar19 = uVar23;
          if ((int)uVar20 < (this->MeasuredRanges).ArrayNum) {
            uVar19 = ~uVar20 >> 0x1f;
          }
          if (uVar19 == 0) {
            in_stack_ffffffffffffff08 = (longlong)(int)uVar20;
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar5 = (code *)swi(3);
              pTVar12 = (TSharedRef<ILayoutBlock,1> *)(*pcVar5)();
              return pTVar12;
            }
          }
          if ((param_1->ActualRange).BeginIndex <=
              *(int *)((this->MeasuredRanges).AllocatorInstance.Data + uVar17 * 8))
          goto LAB_142866def;
          uVar18 = (ulonglong)(uVar20 + 1);
          uVar17 = uVar17 + 1;
        } while ((longlong)uVar17 < (longlong)(int)uVar22);
      }
      if (((uint)uVar18 != uVar22) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("FoundBeginIndexMatch == true || StartRangeIndex == MaxValidIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\TextLayout.cpp"
                             ,0xb19,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TSharedRef<ILayoutBlock,1> *)(*pcVar5)();
        return pTVar12;
      }
    }
LAB_142866def:
    iVar9 = (int)((ulonglong)in_stack_ffffffffffffff08 >> 0x20);
    uVar20 = (uint)uVar18;
    uVar19 = uVar20;
    if (uVar20 != uVar22) {
      if ((int)uVar20 < (this->MeasuredRanges).ArrayNum) {
        lVar16 = (longlong)(int)uVar20 * 8;
        do {
          uVar19 = (uint)uVar18;
          uVar10 = uVar23;
          if ((int)uVar19 < (this->MeasuredRanges).ArrayNum) {
            uVar10 = ~uVar19 >> 0x1f;
          }
          if (uVar10 == 0) {
            in_stack_ffffffffffffff08 = (longlong)(int)uVar19;
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar5 = (code *)swi(3);
              pTVar12 = (TSharedRef<ILayoutBlock,1> *)(*pcVar5)();
              return pTVar12;
            }
          }
          iVar9 = (int)((ulonglong)in_stack_ffffffffffffff08 >> 0x20);
          if ((param_1->ActualRange).EndIndex <=
              *(int *)((this->MeasuredRanges).AllocatorInstance.Data + lVar16 + 4))
          goto LAB_142866e9e;
          uVar19 = uVar19 + 1;
          uVar18 = (ulonglong)uVar19;
          lVar16 = lVar16 + 8;
        } while ((int)uVar19 < (this->MeasuredRanges).ArrayNum);
      }
      if (uVar19 != uVar22) {
        iVar21 = 0xb28;
        pcVar15 = "FoundEndIndexMatch == true || EndRangeIndex == MaxValidIndex";
        goto LAB_142866e85;
      }
    }
  }
  else {
    if (iVar21 != 0) {
      iVar9 = iVar9 + -1;
      uVar18 = uVar17;
      do {
        iVar8 = iVar9 - (int)uVar18;
        if (iVar8 < 0) {
          iVar8 = iVar8 + 1;
        }
        uVar19 = (iVar8 >> 1) + (int)uVar18;
        uVar17 = (ulonglong)uVar19;
        uVar22 = 0;
        if ((int)uVar19 < (this->MeasuredRanges).ArrayNum) {
          uVar22 = ~uVar19 >> 0x1f;
        }
        if (uVar22 == 0) {
          in_stack_ffffffffffffff08 = (longlong)(int)uVar19;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            pTVar12 = (TSharedRef<ILayoutBlock,1> *)(*pcVar5)();
            return pTVar12;
          }
        }
        lVar16 = (longlong)(int)uVar19;
        if (*(int *)((this->MeasuredRanges).AllocatorInstance.Data + lVar16 * 8) == iVar21) break;
        uVar22 = 0;
        if ((int)uVar19 < (this->MeasuredRanges).ArrayNum) {
          uVar22 = ~uVar19 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (in_stack_ffffffffffffff08 = lVar16,
           bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar12 = (TSharedRef<ILayoutBlock,1> *)(*pcVar5)();
          return pTVar12;
        }
        if (*(int *)((this->MeasuredRanges).AllocatorInstance.Data + lVar16 * 8) < iVar21) {
          uVar18 = (ulonglong)(uVar19 + 1);
        }
        else {
          iVar9 = uVar19 - 1;
        }
      } while ((int)uVar18 <= iVar9);
      if ((uVar19 == 0xffffffff) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartRangeIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\TextLayout.cpp"
                             ,0xb00,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TSharedRef<ILayoutBlock,1> *)(*pcVar5)();
        return pTVar12;
      }
    }
    iVar9 = (int)((ulonglong)in_stack_ffffffffffffff08 >> 0x20);
    uVar20 = (uint)uVar17;
    uVar22 = (this->MeasuredRanges).ArrayNum - 1;
    uVar19 = uVar20;
    if (uVar20 != uVar22) {
      iVar21 = (param_1->ActualRange).EndIndex;
      uVar19 = 0;
      if ((int)uVar20 < (int)uVar22) {
        do {
          iVar9 = uVar22 - (int)uVar17;
          if (iVar9 < 0) {
            iVar9 = iVar9 + 1;
          }
          uVar19 = (iVar9 >> 1) + (int)uVar17;
          uVar10 = uVar23;
          if ((int)uVar19 < (this->MeasuredRanges).ArrayNum) {
            uVar10 = ~uVar19 >> 0x1f;
          }
          if (uVar10 == 0) {
            in_stack_ffffffffffffff08 = (longlong)(int)uVar19;
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar5 = (code *)swi(3);
              pTVar12 = (TSharedRef<ILayoutBlock,1> *)(*pcVar5)();
              return pTVar12;
            }
          }
          iVar9 = (int)((ulonglong)in_stack_ffffffffffffff08 >> 0x20);
          lVar16 = (longlong)(int)uVar19;
          if (*(int *)((this->MeasuredRanges).AllocatorInstance.Data + lVar16 * 8 + 4) == iVar21)
          break;
          uVar10 = uVar23;
          if ((int)uVar19 < (this->MeasuredRanges).ArrayNum) {
            uVar10 = ~uVar19 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (in_stack_ffffffffffffff08 = lVar16,
             bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar7)) {
            pcVar5 = (code *)swi(3);
            pTVar12 = (TSharedRef<ILayoutBlock,1> *)(*pcVar5)();
            return pTVar12;
          }
          iVar9 = (int)((ulonglong)in_stack_ffffffffffffff08 >> 0x20);
          if (*(int *)((this->MeasuredRanges).AllocatorInstance.Data + lVar16 * 8 + 4) < iVar21) {
            uVar17 = (ulonglong)(uVar19 + 1);
          }
          else {
            uVar22 = uVar19 - 1;
          }
        } while ((int)uVar17 <= (int)uVar22);
      }
      if (uVar19 == 0xffffffff) {
        iVar21 = 0xb07;
        pcVar15 = "EndRangeIndex != INDEX_NONE";
LAB_142866e85:
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          (pcVar15,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\TextLayout.cpp"
                           ,iVar21,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar12 = (TSharedRef<ILayoutBlock,1> *)(*pcVar5)();
          return pTVar12;
        }
      }
    }
  }
LAB_142866e9e:
  iVar21 = (this->MeasuredRanges).ArrayNum;
  uVar22 = ~uVar20 >> 0x1f;
  if (uVar20 == uVar19) {
    uVar19 = uVar23;
    if ((int)uVar20 < iVar21) {
      uVar19 = uVar22;
    }
    if (uVar19 == 0) {
      iVar9 = (int)uVar20 >> 0x1f;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TSharedRef<ILayoutBlock,1> *)(*pcVar5)();
        return pTVar12;
      }
    }
    lVar16 = (longlong)(int)uVar20;
    iVar21 = (param_1->ActualRange).BeginIndex;
    if (*(int *)((this->MeasuredRanges).AllocatorInstance.Data + lVar16 * 8) == iVar21) {
      uVar19 = uVar23;
      if ((int)uVar20 < (this->MeasuredRanges).ArrayNum) {
        uVar19 = uVar22;
      }
      if (uVar19 == 0) {
        lVar24 = lVar16;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        iVar9 = (int)((ulonglong)lVar24 >> 0x20);
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar12 = (TSharedRef<ILayoutBlock,1> *)(*pcVar5)();
          return pTVar12;
        }
      }
      iVar8 = (param_1->ActualRange).EndIndex;
      if (*(int *)((this->MeasuredRanges).AllocatorInstance.Data + lVar16 * 8 + 4) == iVar8) {
        if ((int)uVar20 < (this->MeasuredRangeSizes).ArrayNum) {
          uVar23 = uVar22;
        }
        if ((uVar23 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar12 = (TSharedRef<ILayoutBlock,1> *)(*pcVar5)();
          return pTVar12;
        }
        pFVar1 = (this->MeasuredRangeSizes).AllocatorInstance.Data + lVar16 * 0x10;
        local_b8 = *(double *)pFVar1;
        local_b0 = *(double *)(pFVar1 + 8);
        goto LAB_1428673f2;
      }
      iVar21 = (param_1->ActualRange).BeginIndex;
    }
    else {
      iVar8 = (param_1->ActualRange).EndIndex;
    }
    pIVar3 = (this->Run).Object;
    pdVar13 = (double *)
              (**(code **)((longlong)*pIVar3 + 0x28))
                        (pIVar3,local_88,iVar21,iVar8,CONCAT44(iVar9,param_2),param_3);
    local_b0 = pdVar13[1];
    local_b8 = *pdVar13;
  }
  else {
    uVar10 = uVar23;
    if ((int)uVar20 < iVar21) {
      uVar10 = uVar22;
    }
    if ((uVar10 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TSharedRef<ILayoutBlock,1> *)(*pcVar5)();
      return pTVar12;
    }
    lVar16 = (longlong)(int)uVar20;
    if (*(int *)((this->MeasuredRanges).AllocatorInstance.Data + lVar16 * 8) ==
        (param_1->ActualRange).BeginIndex) {
      if ((int)uVar20 < (this->MeasuredRangeSizes).ArrayNum) {
        uVar23 = uVar22;
      }
      if ((uVar23 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TSharedRef<ILayoutBlock,1> *)(*pcVar5)();
        return pTVar12;
      }
      pFVar1 = (this->MeasuredRangeSizes).AllocatorInstance.Data + lVar16 * 0x10;
      uVar27 = *(undefined4 *)pFVar1;
      uVar28 = *(undefined4 *)(pFVar1 + 4);
      uVar25 = *(undefined4 *)(pFVar1 + 8);
      uVar26 = *(undefined4 *)(pFVar1 + 0xc);
    }
    else {
      pIVar3 = (this->Run).Object;
      pcVar5 = *(code **)((longlong)*pIVar3 + 0x28);
      if ((int)uVar20 < (this->MeasuredRanges).ArrayNum) {
        uVar23 = uVar22;
      }
      if ((uVar23 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TSharedRef<ILayoutBlock,1> *)(*pcVar5)();
        return pTVar12;
      }
      puVar14 = (undefined8 *)
                (*pcVar5)(pIVar3,local_78,(param_1->ActualRange).BeginIndex,
                          *(undefined4 *)
                           ((this->MeasuredRanges).AllocatorInstance.Data + lVar16 * 8 + 4),param_2,
                          param_3);
      uVar27 = (undefined4)*puVar14;
      uVar28 = (undefined4)((ulonglong)*puVar14 >> 0x20);
      uVar25 = (undefined4)puVar14[1];
      uVar26 = (undefined4)((ulonglong)puVar14[1] >> 0x20);
    }
    dVar6 = (double)CONCAT44(uVar28,uVar27);
    uVar20 = uVar20 + 1;
    lVar16 = (longlong)(int)uVar20;
    if (lVar16 < (int)uVar19) {
      lVar24 = (int)uVar19 - lVar16;
      lVar16 = lVar16 << 4;
      uVar27 = uVar25;
      uVar28 = uVar26;
      do {
        uVar23 = 0;
        if ((int)uVar20 < (this->MeasuredRangeSizes).ArrayNum) {
          uVar23 = ~uVar20 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar12 = (TSharedRef<ILayoutBlock,1> *)(*pcVar5)();
          return pTVar12;
        }
        dVar6 = dVar6 + *(double *)((this->MeasuredRangeSizes).AllocatorInstance.Data + lVar16);
        uVar23 = 0;
        if ((int)uVar20 < (this->MeasuredRangeSizes).ArrayNum) {
          uVar23 = ~uVar20 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar12 = (TSharedRef<ILayoutBlock,1> *)(*pcVar5)();
          return pTVar12;
        }
        uVar20 = uVar20 + 1;
        dVar2 = *(double *)((this->MeasuredRangeSizes).AllocatorInstance.Data + lVar16 + 8);
        lVar16 = lVar16 + 0x10;
        uVar25 = SUB84(dVar2,0);
        uVar26 = (int)((ulonglong)dVar2 >> 0x20);
        if (dVar2 <= (double)CONCAT44(uVar28,uVar27)) {
          uVar25 = uVar27;
          uVar26 = uVar28;
        }
        lVar24 = lVar24 + -1;
        uVar27 = uVar25;
        uVar28 = uVar26;
      } while (lVar24 != 0);
    }
    uVar22 = ~uVar19 >> 0x1f;
    uVar23 = 0;
    if ((int)uVar19 < (this->MeasuredRanges).ArrayNum) {
      uVar23 = uVar22;
    }
    if ((uVar23 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TSharedRef<ILayoutBlock,1> *)(*pcVar5)();
      return pTVar12;
    }
    iVar9 = (param_1->ActualRange).EndIndex;
    if (*(int *)((this->MeasuredRanges).AllocatorInstance.Data + (longlong)(int)uVar19 * 8 + 4) ==
        iVar9) {
      uVar23 = 0;
      if ((int)uVar19 < (this->MeasuredRangeSizes).ArrayNum) {
        uVar23 = uVar22;
      }
      if ((uVar23 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TSharedRef<ILayoutBlock,1> *)(*pcVar5)();
        return pTVar12;
      }
      dVar2 = *(double *)
               ((this->MeasuredRangeSizes).AllocatorInstance.Data + (longlong)(int)uVar19 * 0x10);
      uVar23 = 0;
      if ((int)uVar19 < (this->MeasuredRangeSizes).ArrayNum) {
        uVar23 = uVar22;
      }
      if ((uVar23 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TSharedRef<ILayoutBlock,1> *)(*pcVar5)();
        return pTVar12;
      }
      local_b0 = *(double *)
                  ((this->MeasuredRangeSizes).AllocatorInstance.Data +
                  (longlong)(int)uVar19 * 0x10 + 8);
      if (local_b0 <= (double)CONCAT44(uVar26,uVar25)) {
        local_b0 = (double)CONCAT44(uVar26,uVar25);
      }
    }
    else {
      pIVar3 = (this->Run).Object;
      pcVar5 = *(code **)((longlong)*pIVar3 + 0x28);
      uVar23 = 0;
      if ((int)uVar19 < (this->MeasuredRanges).ArrayNum) {
        uVar23 = uVar22;
      }
      if ((uVar23 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TSharedRef<ILayoutBlock,1> *)(*pcVar5)();
        return pTVar12;
      }
      (*pcVar5)(pIVar3,&local_c8,
                *(undefined4 *)
                 ((this->MeasuredRanges).AllocatorInstance.Data + (longlong)(int)uVar19 * 8),iVar9,
                param_2,param_3);
      if ((double)CONCAT44(uVar26,uVar25) <= local_c0) {
        uVar25 = SUB84(local_c0,0);
        uVar26 = (undefined4)((ulonglong)local_c0 >> 0x20);
      }
      local_b0 = (double)CONCAT44(uVar26,uVar25);
      dVar2 = local_c8;
    }
    local_b8 = dVar6 + dVar2;
  }
LAB_1428673f2:
  pIVar3 = (this->Run).Object;
  (**(code **)((longlong)*pIVar3 + 0x48))
            (pIVar3,__return_storage_ptr__,(param_1->ActualRange).BeginIndex,
             (param_1->ActualRange).EndIndex,&local_b8,param_3,&param_1->Renderer);
  return __return_storage_ptr__;
}

// EndLayout @ 14286f090

void __thiscall FTextLayout::FRunModel::EndLayout(FRunModel *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014286f096. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*(this->Run).Object + 0x68))();
  return;
}

// GetBaseLine @ 142875030

short __thiscall FTextLayout::FRunModel::GetBaseLine(FRunModel *this,float param_1)

{
  short sVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000142875036. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar1 = (**(code **)((longlong)*(this->Run).Object + 0x18))();
  return sVar1;
}

// GetKerning @ 142877060

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

schar __thiscall
FTextLayout::FRunModel::GetKerning
          (FRunModel *this,int param_1,float param_2,FRunTextContext *param_3)

{
  schar sVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000142877066. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar1 = (**(code **)((longlong)*(this->Run).Object + 0x30))();
  return sVar1;
}

// GetMaxHeight @ 142877d50

short __thiscall FTextLayout::FRunModel::GetMaxHeight(FRunModel *this,float param_1)

{
  short sVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000142877d56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar1 = (**(code **)((longlong)*(this->Run).Object + 0x20))();
  return sVar1;
}

// GetRun @ 142879e10

TSharedRef<IRun,1> * __thiscall
FTextLayout::FRunModel::GetRun(FRunModel *this,TSharedRef<IRun,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->Run).Object;
  pTVar1 = (this->Run).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetTextRange @ 14287ce20

FTextRange __thiscall FTextLayout::FRunModel::GetTextRange(FRunModel *this)

{
  FTextRange in_RDX;
  
  (**(code **)((longlong)*(this->Run).Object + 8))();
  return in_RDX;
}

// Measure @ 142884070

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TVector2<double> * __thiscall
FTextLayout::FRunModel::Measure
          (FRunModel *this,TVector2<double> *__return_storage_ptr__,int param_1,int param_2,
          float param_3,FRunTextContext *param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  TVector2<double> *pTVar7;
  int local_18;
  int iStack_14;
  
  (**(code **)((longlong)*(this->Run).Object + 0x28))();
  pFVar2 = (this->MeasuredRanges).AllocatorInstance.Data;
  local_18 = param_1;
  iStack_14 = param_2;
  if ((pFVar2 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar2 + (longlong)(this->MeasuredRanges).ArrayMax * 8)
     ) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TVector2<double> *)(*pcVar3)();
      return pTVar7;
    }
  }
  iVar6 = (this->MeasuredRanges).ArrayNum;
  piVar1 = &(this->MeasuredRanges).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&(this->MeasuredRanges).AllocatorInstance,piVar1);
  }
  (this->MeasuredRanges).ArrayNum = iVar6 + 1;
  *(ulonglong *)((this->MeasuredRanges).AllocatorInstance.Data + (longlong)iVar6 * 8) =
       CONCAT44(iStack_14,local_18);
  pFVar2 = (this->MeasuredRangeSizes).AllocatorInstance.Data;
  if ((pFVar2 <= __return_storage_ptr__) &&
     (__return_storage_ptr__ < pFVar2 + (longlong)(this->MeasuredRangeSizes).ArrayMax * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TVector2<double> *)(*pcVar3)();
      return pTVar7;
    }
  }
  iVar6 = (this->MeasuredRangeSizes).ArrayNum;
  piVar1 = &(this->MeasuredRangeSizes).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->MeasuredRangeSizes).AllocatorInstance,piVar1);
  }
  (this->MeasuredRangeSizes).ArrayNum = iVar6 + 1;
  dVar4 = (__return_storage_ptr__->field0_0x0)._s_0.Y;
  pFVar2 = (this->MeasuredRangeSizes).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  *(double *)pFVar2 = (__return_storage_ptr__->field0_0x0)._s_0.X;
  *(double *)(pFVar2 + 8) = dVar4;
  return __return_storage_ptr__;
}

// SetTextRange @ 14289ad50

void __thiscall FTextLayout::FRunModel::SetTextRange(FRunModel *this,FTextRange *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014289ad56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*(this->Run).Object + 0x10))();
  return;
}

