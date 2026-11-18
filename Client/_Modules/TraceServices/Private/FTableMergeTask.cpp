// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 8

// FillResultUsing<TraceServices::FTableMergeTask::FOnlyA,0> @ 14d4165a0

void __thiscall
TraceServices::FTableMergeTask::FillResultUsing<TraceServices::FTableMergeTask::FOnlyA,0>
          (FTableMergeTask *this,IUntypedTableReader *param_1)

{
  int *piVar1;
  int iVar2;
  TImportTable<TraceServices::FImportTableRow> *pTVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  void *pvVar13;
  uint uVar14;
  ulong64 uVar15;
  FImportTableRow *this_00;
  undefined4 uVar16;
  undefined4 uStackX_1c;
  undefined7 uStackX_21;
  
  iVar2 = (this->ColumnsMap).ArrayNum;
  (**(code **)((longlong)*param_1 + 0x18))(param_1,0);
  cVar5 = (**(code **)((longlong)*param_1 + 8))(param_1);
  do {
    if (cVar5 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014d416c23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((longlong)*param_1 + 0x18))(param_1,0);
      return;
    }
    if (((this->TableC).Object == (TImportTable<TraceServices::FImportTableRow> *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar3 = (this->TableC).Object;
    if ((pTVar3->_padding_ == 0) || (*(longlong *)(pTVar3->_padding_ + 8) == pTVar3->_padding_)) {
      iVar8 = (int)pTVar3->_padding_;
      piVar1 = (int *)((longlong)&pTVar3->_padding_ + 4);
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)&pTVar3->_padding_,piVar1);
        *(int *)&pTVar3->_padding_ = iVar8;
      }
      pvVar13 = (void *)((longlong)iVar8 * 0x10 + pTVar3->_padding_);
      *(int *)&pTVar3->_padding_ = iVar8 + 1;
      DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FImportTableRow>,int>
                (pvVar13,1);
      pTVar3->_padding_ = (longlong)pvVar13;
      pTVar3->_padding_ = pTVar3->_padding_;
      uVar9 = (**(code **)(*(longlong *)pTVar3->_padding_ + 8))
                        ((longlong *)pTVar3->_padding_,pTVar3->_padding_ << 4);
      *(undefined8 *)pTVar3->_padding_ = uVar9;
    }
    pTVar3->_padding_ = pTVar3->_padding_ + 1;
    this_00 = (FImportTableRow *)
              (((longlong *)pTVar3->_padding_)[1] * 0x10 + *(longlong *)pTVar3->_padding_);
    (this_00->Values).ArrayNum = 0;
    (this_00->Values).ArrayMax = 0;
    (this_00->Values).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    plVar10 = (longlong *)(pTVar3->_padding_ + 8);
    *plVar10 = *plVar10 + 1;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar2,(ForAnyElementType *)this_00,&(this_00->Values).ArrayNum,
               &(this_00->Values).ArrayMax);
    uVar15 = 0;
    if (iVar2 != 0) {
      do {
        if (((this->TableC).Object == (TImportTable<TraceServices::FImportTableRow> *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        plVar10 = (longlong *)(**(code **)(((this->TableC).Object)->_padding_ + 8))();
        iVar8 = (**(code **)(*plVar10 + 0x18))(plVar10,uVar15);
        uVar14 = (uint)uVar15;
        uVar11 = 0;
        if ((int)uVar14 < (this->ColumnsMap).ArrayNum) {
          uVar11 = ~uVar14 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar12 = (this->ColumnsMap).AllocatorInstance.Data + (longlong)(int)uVar14 * 0x10;
        if (pFVar12[8] == (FScriptContainerElement)0x1) {
LAB_14d41688a:
          uVar9 = *(undefined8 *)pFVar12;
          if (iVar8 == 1) {
            uVar7 = (**(code **)((longlong)*param_1 + 0x20))(param_1,uVar9);
            uVar11 = 0;
            if ((int)uVar14 < (this_00->Values).ArrayNum) {
              uVar11 = ~uVar14 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            *(ulonglong *)((this_00->Values).AllocatorInstance.Data + (longlong)(int)uVar14 * 8) =
                 CONCAT71(uStackX_21,uVar7);
          }
          else if (iVar8 == 2) {
            uVar9 = (**(code **)((longlong)*param_1 + 0x28))(param_1,uVar9);
            uVar11 = 0;
            if ((int)uVar14 < (this_00->Values).ArrayNum) {
              uVar11 = ~uVar14 >> 0x1f;
            }
joined_r0x00014d416a47:
            if ((uVar11 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            *(undefined8 *)((this_00->Values).AllocatorInstance.Data + (longlong)(int)uVar14 * 8) =
                 uVar9;
          }
          else if (iVar8 == 3) {
            uVar16 = (**(code **)((longlong)*param_1 + 0x30))(param_1,uVar9);
            uVar11 = 0;
            if ((int)uVar14 < (this_00->Values).ArrayNum) {
              uVar11 = ~uVar14 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            *(ulonglong *)((this_00->Values).AllocatorInstance.Data + (longlong)(int)uVar14 * 8) =
                 CONCAT44(uStackX_1c,uVar16);
          }
          else if (iVar8 == 4) {
            uVar9 = (**(code **)((longlong)*param_1 + 0x38))(param_1,uVar9);
            uVar11 = 0;
            if ((int)uVar14 < (this_00->Values).ArrayNum) {
              uVar11 = ~uVar14 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            *(undefined8 *)((this_00->Values).AllocatorInstance.Data + (longlong)(int)uVar14 * 8) =
                 uVar9;
          }
          else if (iVar8 == 5) {
            if (((this->TableC).Object == (TImportTable<TraceServices::FImportTableRow> *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pTVar3 = (this->TableC).Object;
            pcVar4 = *(code **)((pTVar3->StringStore)._padding_ + 0x20);
            uVar9 = (**(code **)((longlong)*param_1 + 0x40))(param_1,uVar9);
            uVar9 = (*pcVar4)(&pTVar3->StringStore,uVar9);
            uVar11 = 0;
            if ((int)uVar14 < (this_00->Values).ArrayNum) {
              uVar11 = ~uVar14 >> 0x1f;
            }
            goto joined_r0x00014d416a47;
          }
        }
        else {
          uVar11 = 0;
          if ((int)uVar14 < (this->ColumnsMap).ArrayNum) {
            uVar11 = ~uVar14 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar12 = (this->ColumnsMap).AllocatorInstance.Data + (longlong)(int)uVar14 * 0x10;
          if (pFVar12[8] == (FScriptContainerElement)0x2) goto LAB_14d41688a;
          uVar11 = 0;
          if ((int)uVar14 < (this->ColumnsMap).ArrayNum) {
            uVar11 = ~uVar14 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar12 = (this->ColumnsMap).AllocatorInstance.Data + (longlong)(int)uVar14 * 0x10;
          if (pFVar12[8] == (FScriptContainerElement)0x4) goto LAB_14d41688a;
          if (iVar8 == 1) {
            FImportTableRow::SetValue<bool>(this_00,uVar15,false);
          }
          else if (iVar8 == 2) {
            FImportTableRow::SetValue<int>(this_00,uVar15,0);
          }
          else if (iVar8 == 3) {
            FImportTableRow::SetValue<float>(this_00,uVar15,0.0);
          }
          else if (iVar8 == 4) {
            FImportTableRow::SetValue<double>(this_00,uVar15,0.0);
          }
          else if (iVar8 == 5) {
            uVar11 = 0;
            if ((int)uVar14 < (this_00->Values).ArrayNum) {
              uVar11 = ~uVar14 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            *(wchar_t **)((this_00->Values).AllocatorInstance.Data + (longlong)(int)uVar14 * 8) =
                 L"<>";
          }
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 < (ulonglong)(longlong)iVar2);
    }
    (**(code **)((longlong)*param_1 + 0x10))(param_1);
    cVar5 = (**(code **)((longlong)*param_1 + 8))(param_1);
  } while( true );
}

// FillResultUsing<TraceServices::FTableMergeTask::FOnlyB,1> @ 14d416c30

void __thiscall
TraceServices::FTableMergeTask::FillResultUsing<TraceServices::FTableMergeTask::FOnlyB,1>
          (FTableMergeTask *this,IUntypedTableReader *param_1)

{
  int *piVar1;
  int iVar2;
  TImportTable<TraceServices::FImportTableRow> *pTVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  void *pvVar14;
  uint uVar15;
  ulong64 uVar16;
  longlong lVar17;
  FImportTableRow *this_00;
  float fVar18;
  double dVar19;
  undefined4 uStackX_24;
  undefined7 uStack_77;
  
  iVar2 = (this->ColumnsMap).ArrayNum;
  (**(code **)((longlong)*param_1 + 0x18))(param_1,0);
  cVar5 = (**(code **)((longlong)*param_1 + 8))(param_1);
  do {
    if (cVar5 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014d417316. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((longlong)*param_1 + 0x18))(param_1,0);
      return;
    }
    if (((this->TableC).Object == (TImportTable<TraceServices::FImportTableRow> *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar3 = (this->TableC).Object;
    if ((pTVar3->_padding_ == 0) || (*(longlong *)(pTVar3->_padding_ + 8) == pTVar3->_padding_)) {
      iVar8 = (int)pTVar3->_padding_;
      piVar1 = (int *)((longlong)&pTVar3->_padding_ + 4);
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)&pTVar3->_padding_,piVar1);
        *(int *)&pTVar3->_padding_ = iVar8;
      }
      pvVar14 = (void *)((longlong)iVar8 * 0x10 + pTVar3->_padding_);
      *(int *)&pTVar3->_padding_ = iVar8 + 1;
      DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FImportTableRow>,int>
                (pvVar14,1);
      pTVar3->_padding_ = (longlong)pvVar14;
      pTVar3->_padding_ = pTVar3->_padding_;
      uVar9 = (**(code **)(*(longlong *)pTVar3->_padding_ + 8))
                        ((longlong *)pTVar3->_padding_,pTVar3->_padding_ << 4);
      *(undefined8 *)pTVar3->_padding_ = uVar9;
    }
    pTVar3->_padding_ = pTVar3->_padding_ + 1;
    this_00 = (FImportTableRow *)
              (((longlong *)pTVar3->_padding_)[1] * 0x10 + *(longlong *)pTVar3->_padding_);
    (this_00->Values).ArrayNum = 0;
    (this_00->Values).ArrayMax = 0;
    (this_00->Values).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    plVar10 = (longlong *)(pTVar3->_padding_ + 8);
    *plVar10 = *plVar10 + 1;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar2,(ForAnyElementType *)this_00,&(this_00->Values).ArrayNum,
               &(this_00->Values).ArrayMax);
    uVar16 = 0;
    if (iVar2 != 0) {
      do {
        if (((this->TableC).Object == (TImportTable<TraceServices::FImportTableRow> *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        plVar10 = (longlong *)(**(code **)(((this->TableC).Object)->_padding_ + 8))();
        iVar8 = (**(code **)(*plVar10 + 0x18))(plVar10,uVar16);
        uVar15 = (uint)uVar16;
        lVar17 = 1;
        uVar12 = 0;
        if ((int)uVar15 < (this->ColumnsMap).ArrayNum) {
          uVar12 = ~uVar15 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar13 = (this->ColumnsMap).AllocatorInstance.Data + (longlong)(int)uVar15 * 0x10;
        if (pFVar13[8] == (FScriptContainerElement)0x1) {
LAB_14d416f3a:
          uVar9 = *(undefined8 *)pFVar13;
          if (iVar8 == 1) {
            uVar7 = (**(code **)((longlong)*param_1 + 0x20))(param_1,uVar9);
            uVar12 = 0;
            if ((int)uVar15 < (this_00->Values).ArrayNum) {
              uVar12 = ~uVar15 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            *(ulonglong *)((this_00->Values).AllocatorInstance.Data + (longlong)(int)uVar15 * 8) =
                 CONCAT71(uStack_77,uVar7);
          }
          else if (iVar8 == 2) {
            lVar11 = (**(code **)((longlong)*param_1 + 0x28))(param_1,uVar9);
            lVar11 = lVar11 * lVar17;
            uVar12 = 0;
            if ((int)uVar15 < (this_00->Values).ArrayNum) {
              uVar12 = ~uVar15 >> 0x1f;
            }
joined_r0x00014d41712e:
            if ((uVar12 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            *(longlong *)((this_00->Values).AllocatorInstance.Data + (longlong)(int)uVar15 * 8) =
                 lVar11;
          }
          else if (iVar8 == 3) {
            fVar18 = (float)(**(code **)((longlong)*param_1 + 0x30))(param_1,uVar9);
            uVar12 = 0;
            if ((int)uVar15 < (this_00->Values).ArrayNum) {
              uVar12 = ~uVar15 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            *(ulonglong *)((this_00->Values).AllocatorInstance.Data + (longlong)(int)uVar15 * 8) =
                 CONCAT44(uStackX_24,fVar18 * (float)lVar17);
          }
          else if (iVar8 == 4) {
            dVar19 = (double)(**(code **)((longlong)*param_1 + 0x38))(param_1,uVar9);
            uVar12 = 0;
            if ((int)uVar15 < (this_00->Values).ArrayNum) {
              uVar12 = ~uVar15 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            *(double *)((this_00->Values).AllocatorInstance.Data + (longlong)(int)uVar15 * 8) =
                 dVar19 * (double)lVar17;
          }
          else if (iVar8 == 5) {
            if (((this->TableC).Object == (TImportTable<TraceServices::FImportTableRow> *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pTVar3 = (this->TableC).Object;
            pcVar4 = *(code **)((pTVar3->StringStore)._padding_ + 0x20);
            uVar9 = (**(code **)((longlong)*param_1 + 0x40))(param_1,uVar9);
            lVar11 = (*pcVar4)(&pTVar3->StringStore,uVar9);
            uVar12 = 0;
            if ((int)uVar15 < (this_00->Values).ArrayNum) {
              uVar12 = ~uVar15 >> 0x1f;
            }
            goto joined_r0x00014d41712e;
          }
        }
        else {
          uVar12 = 0;
          if ((int)uVar15 < (this->ColumnsMap).ArrayNum) {
            uVar12 = ~uVar15 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar13 = (this->ColumnsMap).AllocatorInstance.Data + (longlong)(int)uVar15 * 0x10;
          if (pFVar13[8] == (FScriptContainerElement)0x3) goto LAB_14d416f3a;
          uVar12 = 0;
          if ((int)uVar15 < (this->ColumnsMap).ArrayNum) {
            uVar12 = ~uVar15 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar13 = (this->ColumnsMap).AllocatorInstance.Data + (longlong)(int)uVar15 * 0x10;
          if (pFVar13[8] == (FScriptContainerElement)0x4) {
            lVar17 = -1;
            goto LAB_14d416f3a;
          }
          if (iVar8 == 1) {
            FImportTableRow::SetValue<bool>(this_00,uVar16,false);
          }
          else if (iVar8 == 2) {
            FImportTableRow::SetValue<int>(this_00,uVar16,0);
          }
          else if (iVar8 == 3) {
            FImportTableRow::SetValue<float>(this_00,uVar16,0.0);
          }
          else if (iVar8 == 4) {
            FImportTableRow::SetValue<double>(this_00,uVar16,0.0);
          }
          else if (iVar8 == 5) {
            uVar12 = 0;
            if ((int)uVar15 < (this_00->Values).ArrayNum) {
              uVar12 = ~uVar15 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            *(wchar_t **)((this_00->Values).AllocatorInstance.Data + (longlong)(int)uVar15 * 8) =
                 L"<>";
          }
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < (ulonglong)(longlong)iVar2);
    }
    (**(code **)((longlong)*param_1 + 0x10))(param_1);
    cVar5 = (**(code **)((longlong)*param_1 + 8))(param_1);
  } while( true );
}

// FTableMergeTask @ 14d426280

FTableMergeTask * __thiscall
TraceServices::FTableMergeTask::FTableMergeTask
          (FTableMergeTask *this,TSharedPtr<TraceServices::IUntypedTable,1> *param_1,
          TSharedPtr<TraceServices::IUntypedTable,1> *param_2,
          TFunction<void___cdecl(TSharedPtr<TraceServices::FTableDiffCallbackParams,1>)> *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  (this->TableA).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->TableA).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->TableB).Object = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  (this->TableB).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  lVar2 = *(longlong *)param_3;
  *(longlong *)&this->Callback = lVar2;
  *(undefined8 *)&(this->Callback).field_0x28 = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)&param_3->field_0x10;
    if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)&param_3->field_0x28;
    }
    (**(code **)*puVar3)();
  }
  (this->TableC).Object = (TImportTable<TraceServices::FImportTableRow> *)0x0;
  (this->TableC).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->Messages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Messages).ArrayNum = 0;
  (this->Messages).ArrayMax = 0;
  (this->ColumnsMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ColumnsMap).ArrayNum = 0;
  (this->ColumnsMap).ArrayMax = 0;
  if (*(longlong *)param_3 != 0) {
    plVar4 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return this;
}

// ~FTableMergeTask @ 14d42cc20

void __thiscall TraceServices::FTableMergeTask::~FTableMergeTask(FTableMergeTask *this)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  pFVar1 = (this->ColumnsMap).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedRef<FTokenizedMessage,1>,int>
            ((TSharedRef<FTokenizedMessage,1> *)(this->Messages).AllocatorInstance.Data,
             (this->Messages).ArrayNum);
  pFVar1 = (this->Messages).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TableC).SharedReferenceCount.ReferenceController);
  if (*(longlong *)&this->Callback != 0) {
    plVar2 = *(longlong **)&(this->Callback).field_0x28;
    plVar3 = (longlong *)&(this->Callback).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TableB).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TableA).SharedReferenceCount.ReferenceController);
  return;
}

// operator() @ 14d435200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall TraceServices::FTableMergeTask::operator()(FTableMergeTask *this)

{
  int *piVar1;
  int iVar2;
  TImportTable<TraceServices::FImportTableRow> *pTVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  ETableDiffResult EVar7;
  TReferenceControllerBase<1> *pTVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  TReferenceControllerBase<1> *pTVar11;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  ETableDiffResult local_c8 [2];
  FSharedReferencer<1> local_c0;
  undefined8 *local_b8 [2];
  code *local_a8 [5];
  undefined8 *local_80;
  longlong local_78;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *local_50;
  TReferenceControllerBase<1> *local_48;
  TReferenceControllerBase<1> *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  EVar7 = MergeTables(this);
  pTVar8 = ::operator_new(0x38);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
    pTVar11 = (TReferenceControllerBase<1> *)&DAT_00000010;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11 = pTVar8 + 1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFTableDiffCallbackParams_TraceServices___00_SharedPointerInternals__6B_
    ;
    pTVar8[1]._padding_ = 0;
    pTVar8[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[2]._padding_ = 0;
    pTVar8[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[3]._padding_ = 0;
    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  *(ETableDiffResult *)&pTVar11->_padding_ = EVar7;
  local_c0.ReferenceController = (this->TableC).SharedReferenceCount.ReferenceController;
  pTVar3 = (this->TableC).Object;
  if (local_c0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_c0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_c0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&pTVar11->SharedReferenceCount != (atomic<int> *)local_c8) {
    *(TImportTable<TraceServices::FImportTableRow> **)&pTVar11->SharedReferenceCount = pTVar3;
    local_c8[0] = ESuccess;
    local_c8[1] = ESuccess;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(pTVar11 + 1),&local_c0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.ReferenceController);
  TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> *)
             &pTVar11[1].SharedReferenceCount,&this->Messages);
  local_78 = *(longlong *)&this->Callback;
  local_50 = (longlong *)0x0;
  if (local_78 != 0) {
    puVar4 = *(undefined8 **)&(this->Callback).field_0x28;
    puVar9 = (undefined8 *)&(this->Callback).field_0x10;
    if (puVar4 != (undefined8 *)0x0) {
      puVar9 = puVar4;
    }
    (**(code **)*puVar9)(puVar9,&local_68);
  }
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_a8[0] = (code *)0x0;
  local_48 = pTVar11;
  local_40 = pTVar8;
  local_80 = FMemory::Malloc(0x50,0x10);
  *local_80 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`TraceServices::FTableMergeTask::operator()'::`2'::<lambda_1>,1,1>
               ::_vftable_;
  plVar10 = local_80 + 2;
  *plVar10 = local_78;
  local_80[7] = local_50;
  local_50 = (longlong *)0x0;
  local_80[4] = local_68;
  local_80[5] = uStack_60;
  local_80[6] = local_58;
  if (*plVar10 != 0) {
    local_78 = 0;
  }
  local_80[8] = local_48;
  local_80[9] = local_40;
  local_40 = (TReferenceControllerBase<1> *)0x0;
  local_48 = (TReferenceControllerBase<1> *)0x0;
  if (plVar10 != (longlong *)0x0) {
    local_a8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`TraceServices::FTableMergeTask::operator()'::__l2::<lambda_1>,void>
                  ::Call;
  }
  local_d8 = 1;
  FFunctionGraphTask::CreateAndDispatchWhenReady
            ((TUniqueFunction<void___cdecl(void)> *)local_b8,(TStatIdData *)local_a8,
             (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
              *)&TStatId::TStatId_NAME_None,MainQueue);
  if (local_b8[0] != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_b8[0] + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_b8[0])(local_b8[0],1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  if (local_78 != 0) {
    plVar10 = &local_68;
    if (local_50 != (longlong *)0x0) {
      plVar10 = local_50;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// AddError @ 14d43a580

void __thiscall TraceServices::FTableMergeTask::AddError(FTableMergeTask *this,FText *param_1)

{
  TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TSharedRef<FTokenizedMessage,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TSharedRef<FTokenizedMessage,1> *pTVar8;
  FScriptContainerElement *pFVar9;
  TSharedRef<FTokenizedMessage,1> local_18;
  
  pTVar1 = &this->Messages;
  pTVar8 = FTokenizedMessage::Create(&local_18,Error,param_1);
  pTVar3 = (TSharedRef<FTokenizedMessage,1> *)(pTVar1->AllocatorInstance).Data;
  if ((pTVar3 <= pTVar8) && (pTVar8 < pTVar3 + (this->Messages).ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (this->Messages).ArrayNum;
  piVar2 = &(this->Messages).ArrayMax;
  if (iVar7 == *piVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Messages).ArrayNum = iVar7 + 1;
  pFVar9 = (pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
  *(FTokenizedMessage **)pFVar9 = pTVar8->Object;
  pTVar4 = (pTVar8->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar9 + 8) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// BuildCLayout @ 14d442560

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
TraceServices::FTableMergeTask::BuildCLayout
          (FTableMergeTask *this,ITableLayout *param_1,ITableLayout *param_2,
          TTableLayout<TraceServices::FImportTableRow> *param_3)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  wchar_t *_Str;
  wchar_t *pwVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  size_t sVar13;
  FText *pFVar14;
  FTextFormat *pFVar15;
  ForAnyElementType FVar16;
  FScriptContainerElement *pFVar17;
  TArray<TVariant<FEmptyVariantState,TraceServices::FTableMergeTask::FBoth,TraceServices::FTableMergeTask::FOnlyA,TraceServices::FTableMergeTask::FOnlyB,TraceServices::FTableMergeTask::FMerged>,TSizedDefaultAllocator<32>_>
  *pTVar18;
  ulonglong uVar19;
  FString local_5d8;
  FString local_5c8;
  FString local_5b8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_5a8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_598;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_588;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_578;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_568;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_558;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_548;
  wchar_t *local_538;
  int iStack_530;
  undefined4 uStack_52c;
  wchar_t *local_528;
  int iStack_520;
  undefined4 uStack_51c;
  wchar_t *local_518;
  int iStack_510;
  undefined4 uStack_50c;
  wchar_t *local_508;
  int iStack_500;
  undefined4 uStack_4fc;
  FFormatArgumentValue local_4f8;
  FFormatArgumentValue local_4d8;
  FFormatArgumentValue local_4b8;
  FFormatArgumentValue local_498;
  TStringView<wchar_t> local_478;
  FText local_468;
  FText local_458;
  FText local_448;
  TStringView<wchar_t> local_438;
  FText local_428;
  FText local_418;
  FText local_408;
  TStringView<wchar_t> local_3f8;
  FText local_3e8;
  FText local_3d8;
  FText local_3c8;
  TStringView<wchar_t> local_3b8;
  FText local_3a8;
  FText local_398;
  FText local_388;
  code *local_378 [2];
  undefined **local_368;
  undefined8 local_360;
  undefined8 local_350;
  code *local_348 [2];
  undefined **local_338;
  undefined8 local_330;
  undefined8 local_320;
  code *local_318 [2];
  undefined **local_308;
  undefined8 local_300;
  undefined8 local_2f0;
  code *local_2e8 [2];
  undefined **local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c0;
  code *local_2b8 [2];
  undefined **local_2a8;
  undefined8 local_2a0;
  undefined8 local_290;
  code *local_288 [2];
  undefined **local_278;
  undefined8 local_270;
  undefined8 local_260;
  code *local_258 [2];
  undefined **local_248;
  undefined8 local_240;
  undefined8 local_230;
  code *local_228 [2];
  undefined **local_218;
  undefined8 local_210;
  undefined8 local_200;
  code *local_1f8 [2];
  undefined **local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d0;
  code *local_1c8 [2];
  undefined **local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a0;
  code *local_198 [2];
  undefined **local_188;
  undefined8 local_180;
  undefined8 local_170;
  code *local_168 [2];
  undefined **local_158;
  undefined8 local_150;
  undefined8 local_140;
  code *local_138 [2];
  undefined **local_128;
  undefined8 local_120;
  undefined8 local_110;
  code *local_108 [2];
  undefined **local_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  FStringFormatArg local_d8;
  FStringFormatArg local_b8;
  FStringFormatArg local_98;
  FTextFormat local_78;
  FTextFormat local_68;
  FTextFormat local_58;
  FTextFormat local_48;
  
  uVar19 = 0;
  lVar9 = (**(code **)((longlong)*param_1 + 8))(param_1);
  if (lVar9 != 0) {
    do {
      iVar6 = (**(code **)((longlong)*param_1 + 0x18))(param_1,uVar19);
      _Str = (wchar_t *)(**(code **)((longlong)*param_1 + 0x10))(param_1,uVar19);
      uVar7 = (**(code **)((longlong)*param_1 + 0x20))(param_1,uVar19);
      iVar8 = (**(code **)((longlong)*param_2 + 0x18))(param_2);
      if ((iVar6 != iVar8) &&
         (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<541217496212963402>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\TableMergeTask.cpp"
                             ,0x4a,"ColumnType == LayoutB.GetColumnType(ColIndex)"), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pwVar10 = (wchar_t *)(**(code **)((longlong)*param_2 + 0x10))(param_2,uVar19);
      iVar8 = FGenericPlatformStricmp::Stricmp(_Str,pwVar10);
      if ((iVar8 != 0) &&
         (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<541217496212963403>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\TableMergeTask.cpp"
                             ,0x4b,
                             "FCString::Stricmp(ColumnName, LayoutB.GetColumnName(ColIndex)) == 0"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      FStringFormatArg::FStringFormatArg(&local_d8,_Str);
      local_5a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_5a8.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,0,&local_5a8.AllocatorInstance,1,&local_5a8.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_5a8.AllocatorInstance.Data,&local_d8,1);
      ::FString::FormatImpl(&local_5b8,L"{0} (A-B)",&local_5a8);
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_5a8.AllocatorInstance.Data,local_5a8.ArrayNum);
      if ((FStringFormatArg *)local_5a8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_5a8.AllocatorInstance.Data);
      }
      if (local_d8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.StringValue.Data.AllocatorInstance.Data);
      }
      FStringFormatArg::FStringFormatArg(&local_b8,_Str);
      local_598.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_598.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,0,&local_598.AllocatorInstance,1,&local_598.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_598.AllocatorInstance.Data,&local_b8,1);
      ::FString::FormatImpl(&local_5c8,L"{0} (A)",&local_598);
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_598.AllocatorInstance.Data,local_598.ArrayNum);
      if ((FStringFormatArg *)local_598.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_598.AllocatorInstance.Data);
      }
      if (local_b8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.StringValue.Data.AllocatorInstance.Data);
      }
      FStringFormatArg::FStringFormatArg(&local_98,_Str);
      local_588.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_588.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,0,&local_588.AllocatorInstance,1,&local_588.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_588.AllocatorInstance.Data,&local_98,1);
      ::FString::FormatImpl(&local_5d8,L"{0} (B)",&local_588);
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_588.AllocatorInstance.Data,local_588.ArrayNum);
      if ((FStringFormatArg *)local_588.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_588.AllocatorInstance.Data);
      }
      if (local_98.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.StringValue.Data.AllocatorInstance.Data);
      }
      switch(iVar6) {
      case 0:
        iStack_500 = 0;
        local_508 = _Str;
        if (_Str != (wchar_t *)0x0) {
          sVar13 = wcslen(_Str);
          iStack_500 = (int)sVar13;
        }
        local_3f8._12_4_ = uStack_4fc;
        local_3f8.Size = iStack_500;
        local_3f8.DataPtr = local_508;
        pFVar14 = FText::FromStringView(&local_3c8,&local_3f8);
        local_498.Type = Text;
        FText::FText((FText *)&local_498.TextValue,pFVar14);
        if ((local_498.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0xbd,
                               L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        local_548.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_548.ArrayNum = 1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,1,0,&local_548.AllocatorInstance,1,&local_548.ArrayMax);
        ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                  (local_548.AllocatorInstance.Data,&local_498,1);
        pFVar14 = FText::AsLocalizable_Advanced_LocText
                            (&local_3d8,L"TableMergeTask",L"LayoutInclompatibleInvalidColumn",
                             L"Column {0} has invalid type.");
        pFVar15 = FTextFormat::FTextFormat(&local_48,pFVar14,Default);
        pFVar14 = FText::Format(&local_3e8,pFVar15,&local_548);
        AddError(this,pFVar14);
        if (local_3e8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_3e8.TextData.Reference + 0x10))();
        }
        if (local_3d8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_3d8.TextData.Reference + 0x10))();
        }
        DestructItems<FFormatArgumentValue,int>
                  ((FFormatArgumentValue *)local_548.AllocatorInstance.Data,local_548.ArrayNum);
        if ((FFormatArgumentValue *)local_548.AllocatorInstance.Data != (FFormatArgumentValue *)0x0)
        {
          FMemory::Free(local_548.AllocatorInstance.Data);
        }
        local_408.TextData.Reference = local_3c8.TextData.Reference;
        if (local_498.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_498.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
          local_408.TextData.Reference = local_3c8.TextData.Reference;
        }
LAB_14d443a09:
        if (local_408.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_408.TextData.Reference + 0x10))();
        }
        if (local_5d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5d8.Data.AllocatorInstance.Data);
        }
        if (local_5c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5c8.Data.AllocatorInstance.Data);
        }
        if (local_5b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5b8.Data.AllocatorInstance.Data);
        }
        return false;
      case 1:
        uVar11 = (**(code **)(param_3->_padding_ + 8))(param_3);
        if ((int)uVar7 < 0) {
          FVar16.Data = (FScriptContainerElement *)L"";
          if (local_5b8.Data.ArrayNum != 0) {
            FVar16.Data = local_5b8.Data.AllocatorInstance.Data;
          }
          local_338 = &UE::Core::Private::Function::
                       TFunction_OwnedObject<``TraceServices::FTableMergeTask::BuildCLayout'::`4'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
                       ::_vftable_;
          local_320 = 0;
          local_348[0] = UE::Core::Private::Function::
                         TFunctionRefCaller<``TraceServices::FTableMergeTask::BuildCLayout'::__l4::<lambda_1>::operator()'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FImportTableRow_const_&>
                         ::Call;
          local_330 = uVar11;
          TTableLayout<TraceServices::FImportTableRow>::AddColumn<bool>
                    (param_3,(wchar_t *)FVar16.Data,
                     (TFunction<TraceServices::FColumnValueContainer___cdecl(TraceServices::FImportTableRow_const_&)>
                      *)local_348,uVar7);
          pTVar18 = &this->ColumnsMap;
          iVar6 = (this->ColumnsMap).ArrayNum;
          if (iVar6 == (this->ColumnsMap).ArrayMax) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&pTVar18->AllocatorInstance,&(this->ColumnsMap).ArrayMax);
          }
          (this->ColumnsMap).ArrayNum = iVar6 + 1;
          pFVar17 = (pTVar18->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
          DefaultConstructItems<TVariant<FEmptyVariantState,TraceServices::FTableMergeTask::FBoth,TraceServices::FTableMergeTask::FOnlyA,TraceServices::FTableMergeTask::FOnlyB,TraceServices::FTableMergeTask::FMerged>,int>
                    (pFVar17,1);
          FVar2 = pFVar17[8];
          if ((4 < (ulonglong)(byte)FVar2) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,TraceServices::FTableMergeTask::FBoth,TraceServices::FTableMergeTask::FOnlyA,TraceServices::FTableMergeTask::FOnlyB,TraceServices::FTableMergeTask::FMerged>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[(byte)FVar2])(pFVar17);
          *(ulonglong *)pFVar17 = uVar19;
          pFVar17[8] = (FScriptContainerElement)0x4;
          local_300 = (**(code **)(param_3->_padding_ + 8))(param_3);
          FVar16.Data = (FScriptContainerElement *)L"";
          if (local_5c8.Data.ArrayNum != 0) {
            FVar16.Data = local_5c8.Data.AllocatorInstance.Data;
          }
          local_308 = &UE::Core::Private::Function::
                       TFunction_OwnedObject<``TraceServices::FTableMergeTask::BuildCLayout'::`4'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
                       ::_vftable_;
          local_318[0] = UE::Core::Private::Function::
                         TFunctionRefCaller<``TraceServices::FTableMergeTask::BuildCLayout'::__l4::<lambda_1>::operator()'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FImportTableRow_const_&>
                         ::Call;
          local_2f0 = 0;
          TTableLayout<TraceServices::FImportTableRow>::AddColumn<bool>
                    (param_3,(wchar_t *)FVar16.Data,
                     (TFunction<TraceServices::FColumnValueContainer___cdecl(TraceServices::FImportTableRow_const_&)>
                      *)local_318,uVar7);
          iVar6 = (this->ColumnsMap).ArrayNum;
          if (iVar6 == (this->ColumnsMap).ArrayMax) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&pTVar18->AllocatorInstance,&(this->ColumnsMap).ArrayMax);
          }
          (this->ColumnsMap).ArrayNum = iVar6 + 1;
          pFVar17 = (pTVar18->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
          DefaultConstructItems<TVariant<FEmptyVariantState,TraceServices::FTableMergeTask::FBoth,TraceServices::FTableMergeTask::FOnlyA,TraceServices::FTableMergeTask::FOnlyB,TraceServices::FTableMergeTask::FMerged>,int>
                    (pFVar17,1);
          FVar2 = pFVar17[8];
          if ((4 < (ulonglong)(byte)FVar2) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,TraceServices::FTableMergeTask::FBoth,TraceServices::FTableMergeTask::FOnlyA,TraceServices::FTableMergeTask::FOnlyB,TraceServices::FTableMergeTask::FMerged>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[(byte)FVar2])(pFVar17);
          *(ulonglong *)pFVar17 = uVar19;
          pFVar17[8] = (FScriptContainerElement)0x2;
          local_2d0 = (**(code **)(param_3->_padding_ + 8))(param_3);
          FVar16.Data = (FScriptContainerElement *)L"";
          if (local_5d8.Data.ArrayNum != 0) {
            FVar16.Data = local_5d8.Data.AllocatorInstance.Data;
          }
          local_2d8 = &UE::Core::Private::Function::
                       TFunction_OwnedObject<``TraceServices::FTableMergeTask::BuildCLayout'::`4'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
                       ::_vftable_;
          local_2e8[0] = UE::Core::Private::Function::
                         TFunctionRefCaller<``TraceServices::FTableMergeTask::BuildCLayout'::__l4::<lambda_1>::operator()'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FImportTableRow_const_&>
                         ::Call;
          local_2c0 = 0;
          TTableLayout<TraceServices::FImportTableRow>::AddColumn<bool>
                    (param_3,(wchar_t *)FVar16.Data,
                     (TFunction<TraceServices::FColumnValueContainer___cdecl(TraceServices::FImportTableRow_const_&)>
                      *)local_2e8,uVar7);
          break;
        }
        local_2a8 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<``TraceServices::FTableMergeTask::BuildCLayout'::`4'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
                     ::_vftable_;
        local_2b8[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<``TraceServices::FTableMergeTask::BuildCLayout'::__l4::<lambda_1>::operator()'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FImportTableRow_const_&>
                       ::Call;
        local_290 = 0;
        local_2a0 = uVar11;
        TTableLayout<TraceServices::FImportTableRow>::AddColumn<bool>
                  (param_3,_Str,
                   (TFunction<TraceServices::FColumnValueContainer___cdecl(TraceServices::FImportTableRow_const_&)>
                    *)local_2b8,uVar7);
        piVar1 = &(this->ColumnsMap).ArrayMax;
        iVar6 = (this->ColumnsMap).ArrayNum;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&(this->ColumnsMap).AllocatorInstance,piVar1);
        }
        (this->ColumnsMap).ArrayNum = iVar6 + 1;
        pFVar17 = (this->ColumnsMap).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
        DefaultConstructItems<TVariant<FEmptyVariantState,TraceServices::FTableMergeTask::FBoth,TraceServices::FTableMergeTask::FOnlyA,TraceServices::FTableMergeTask::FOnlyB,TraceServices::FTableMergeTask::FMerged>,int>
                  (pFVar17,1);
        FVar2 = pFVar17[8];
        if ((4 < (ulonglong)(byte)FVar2) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,TraceServices::FTableMergeTask::FBoth,TraceServices::FTableMergeTask::FOnlyA,TraceServices::FTableMergeTask::FOnlyB,TraceServices::FTableMergeTask::FMerged>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[(byte)FVar2])(pFVar17);
        pFVar17[8] = (FScriptContainerElement)0x1;
        goto LAB_14d4433b3;
      case 2:
        if (-1 < (int)uVar7) {
          iStack_530 = 0;
          local_538 = _Str;
          if (_Str != (wchar_t *)0x0) {
            sVar13 = wcslen(_Str);
            iStack_530 = (int)sVar13;
          }
          local_3b8._12_4_ = uStack_52c;
          local_3b8.Size = iStack_530;
          local_3b8.DataPtr = local_538;
          pFVar14 = FText::FromStringView(&local_388,&local_3b8);
          local_4f8.Type = Text;
          FText::FText((FText *)&local_4f8.TextValue,pFVar14);
          if ((local_4f8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          local_578.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_578.ArrayNum = 1;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,1,0,&local_578.AllocatorInstance,1,&local_578.ArrayMax);
          ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                    (local_578.AllocatorInstance.Data,&local_4f8,1);
          pFVar14 = FText::AsLocalizable_Advanced_LocText
                              (&local_398,L"TableMergeTask",L"LayoutInclompatibleIntNotSummmable",
                               L"Column {0} has int values but is not summable.");
          pFVar15 = FTextFormat::FTextFormat(&local_78,pFVar14,Default);
          pFVar14 = FText::Format(&local_3a8,pFVar15,&local_578);
          AddError(this,pFVar14);
          if (local_3a8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_3a8.TextData.Reference + 0x10))();
          }
          if (local_398.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_398.TextData.Reference + 0x10))();
          }
          DestructItems<FFormatArgumentValue,int>
                    ((FFormatArgumentValue *)local_578.AllocatorInstance.Data,local_578.ArrayNum);
          if ((FFormatArgumentValue *)local_578.AllocatorInstance.Data !=
              (FFormatArgumentValue *)0x0) {
            FMemory::Free(local_578.AllocatorInstance.Data);
          }
          local_408.TextData.Reference = local_388.TextData.Reference;
          if (local_4f8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)
                         *(ITextData *)local_4f8.TextValue.field0_0x0.TypedValue.TextData.Reference
                        + 0x10))();
            local_408.TextData.Reference = local_388.TextData.Reference;
          }
          goto LAB_14d443a09;
        }
        local_270 = (**(code **)(param_3->_padding_ + 8))(param_3);
        FVar16.Data = (FScriptContainerElement *)L"";
        if (local_5b8.Data.ArrayNum != 0) {
          FVar16.Data = local_5b8.Data.AllocatorInstance.Data;
        }
        local_278 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<``TraceServices::FTableMergeTask::BuildCLayout'::`4'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
                     ::_vftable_;
        local_288[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<``TraceServices::FTableMergeTask::BuildCLayout'::__l4::<lambda_1>::operator()'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FImportTableRow_const_&>
                       ::Call;
        local_260 = 0;
        TTableLayout<TraceServices::FImportTableRow>::AddColumn<__int64>
                  (param_3,(wchar_t *)FVar16.Data,
                   (TFunction<TraceServices::FColumnValueContainer___cdecl(TraceServices::FImportTableRow_const_&)>
                    *)local_288,uVar7);
        pTVar18 = &this->ColumnsMap;
        iVar6 = (this->ColumnsMap).ArrayNum;
        if (iVar6 == (this->ColumnsMap).ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&pTVar18->AllocatorInstance,&(this->ColumnsMap).ArrayMax);
        }
        (this->ColumnsMap).ArrayNum = iVar6 + 1;
        pFVar17 = (pTVar18->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
        DefaultConstructItems<TVariant<FEmptyVariantState,TraceServices::FTableMergeTask::FBoth,TraceServices::FTableMergeTask::FOnlyA,TraceServices::FTableMergeTask::FOnlyB,TraceServices::FTableMergeTask::FMerged>,int>
                  (pFVar17,1);
        FVar2 = pFVar17[8];
        if ((4 < (ulonglong)(byte)FVar2) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,TraceServices::FTableMergeTask::FBoth,TraceServices::FTableMergeTask::FOnlyA,TraceServices::FTableMergeTask::FOnlyB,TraceServices::FTableMergeTask::FMerged>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[(byte)FVar2])(pFVar17);
        *(ulonglong *)pFVar17 = uVar19;
        pFVar17[8] = (FScriptContainerElement)0x4;
        local_240 = (**(code **)(param_3->_padding_ + 8))(param_3);
        FVar16.Data = (FScriptContainerElement *)L"";
        if (local_5c8.Data.ArrayNum != 0) {
          FVar16.Data = local_5c8.Data.AllocatorInstance.Data;
        }
        local_248 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<``TraceServices::FTableMergeTask::BuildCLayout'::`4'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
                     ::_vftable_;
        local_258[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<``TraceServices::FTableMergeTask::BuildCLayout'::__l4::<lambda_1>::operator()'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FImportTableRow_const_&>
                       ::Call;
        local_230 = 0;
        TTableLayout<TraceServices::FImportTableRow>::AddColumn<unsigned___int64>
                  (param_3,(wchar_t *)FVar16.Data,
                   (TFunction<TraceServices::FColumnValueContainer___cdecl(TraceServices::FImportTableRow_const_&)>
                    *)local_258,uVar7);
        iVar6 = (this->ColumnsMap).ArrayNum;
        if (iVar6 == (this->ColumnsMap).ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&pTVar18->AllocatorInstance,&(this->ColumnsMap).ArrayMax);
        }
        (this->ColumnsMap).ArrayNum = iVar6 + 1;
        pFVar17 = (pTVar18->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
        DefaultConstructItems<TVariant<FEmptyVariantState,TraceServices::FTableMergeTask::FBoth,TraceServices::FTableMergeTask::FOnlyA,TraceServices::FTableMergeTask::FOnlyB,TraceServices::FTableMergeTask::FMerged>,int>
                  (pFVar17,1);
        FVar2 = pFVar17[8];
        if ((4 < (ulonglong)(byte)FVar2) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,TraceServices::FTableMergeTask::FBoth,TraceServices::FTableMergeTask::FOnlyA,TraceServices::FTableMergeTask::FOnlyB,TraceServices::FTableMergeTask::FMerged>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[(byte)FVar2])(pFVar17);
        *(ulonglong *)pFVar17 = uVar19;
        pFVar17[8] = (FScriptContainerElement)0x2;
        local_210 = (**(code **)(param_3->_padding_ + 8))(param_3);
        FVar16.Data = (FScriptContainerElement *)L"";
        if (local_5d8.Data.ArrayNum != 0) {
          FVar16.Data = local_5d8.Data.AllocatorInstance.Data;
        }
        local_218 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<``TraceServices::FTableMergeTask::BuildCLayout'::`4'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
                     ::_vftable_;
        local_228[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<``TraceServices::FTableMergeTask::BuildCLayout'::__l4::<lambda_1>::operator()'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FImportTableRow_const_&>
                       ::Call;
        local_200 = 0;
        TTableLayout<TraceServices::FImportTableRow>::AddColumn<unsigned___int64>
                  (param_3,(wchar_t *)FVar16.Data,
                   (TFunction<TraceServices::FColumnValueContainer___cdecl(TraceServices::FImportTableRow_const_&)>
                    *)local_228,uVar7);
        break;
      case 3:
        if (-1 < (int)uVar7) {
          iStack_520 = 0;
          local_528 = _Str;
          if (_Str != (wchar_t *)0x0) {
            sVar13 = wcslen(_Str);
            iStack_520 = (int)sVar13;
          }
          local_478._12_4_ = uStack_51c;
          local_478.Size = iStack_520;
          local_478.DataPtr = local_528;
          pFVar14 = FText::FromStringView(&local_448,&local_478);
          local_4d8.Type = Text;
          FText::FText((FText *)&local_4d8.TextValue,pFVar14);
          if ((local_4d8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          local_568.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_568.ArrayNum = 1;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,1,0,&local_568.AllocatorInstance,1,&local_568.ArrayMax);
          ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                    (local_568.AllocatorInstance.Data,&local_4d8,1);
          pFVar14 = FText::AsLocalizable_Advanced_LocText
                              (&local_458,L"TableMergeTask",L"LayoutInclompatibleFloatNotSummmable",
                               L"Column {0} has float values but is not summable.");
          pFVar15 = FTextFormat::FTextFormat(&local_68,pFVar14,Default);
          pFVar14 = FText::Format(&local_468,pFVar15,&local_568);
          AddError(this,pFVar14);
          if (local_468.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_468.TextData.Reference + 0x10))();
          }
          if (local_458.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_458.TextData.Reference + 0x10))();
          }
          DestructItems<FFormatArgumentValue,int>
                    ((FFormatArgumentValue *)local_568.AllocatorInstance.Data,local_568.ArrayNum);
          if ((FFormatArgumentValue *)local_568.AllocatorInstance.Data !=
              (FFormatArgumentValue *)0x0) {
            FMemory::Free(local_568.AllocatorInstance.Data);
          }
          local_408.TextData.Reference = local_448.TextData.Reference;
          if (local_4d8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)
                         *(ITextData *)local_4d8.TextValue.field0_0x0.TypedValue.TextData.Reference
                        + 0x10))();
            local_408.TextData.Reference = local_448.TextData.Reference;
          }
          goto LAB_14d443a09;
        }
        local_1e0 = (**(code **)(param_3->_padding_ + 8))(param_3);
        FVar16.Data = (FScriptContainerElement *)L"";
        if (local_5b8.Data.ArrayNum != 0) {
          FVar16.Data = local_5b8.Data.AllocatorInstance.Data;
        }
        local_1e8 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<``TraceServices::FTableMergeTask::BuildCLayout'::`4'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
                     ::_vftable_;
        local_1f8[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<``TraceServices::FTableMergeTask::BuildCLayout'::__l4::<lambda_1>::operator()'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FImportTableRow_const_&>
                       ::Call;
        local_1d0 = 0;
        TTableLayout<TraceServices::FImportTableRow>::AddColumn<float>
                  (param_3,(wchar_t *)FVar16.Data,
                   (TFunction<TraceServices::FColumnValueContainer___cdecl(TraceServices::FImportTableRow_const_&)>
                    *)local_1f8,uVar7);
        pTVar18 = &this->ColumnsMap;
        iVar6 = (this->ColumnsMap).ArrayNum;
        if (iVar6 == (this->ColumnsMap).ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&pTVar18->AllocatorInstance,&(this->ColumnsMap).ArrayMax);
        }
        (this->ColumnsMap).ArrayNum = iVar6 + 1;
        pFVar17 = (pTVar18->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
        DefaultConstructItems<TVariant<FEmptyVariantState,TraceServices::FTableMergeTask::FBoth,TraceServices::FTableMergeTask::FOnlyA,TraceServices::FTableMergeTask::FOnlyB,TraceServices::FTableMergeTask::FMerged>,int>
                  (pFVar17,1);
        FVar2 = pFVar17[8];
        if ((4 < (ulonglong)(byte)FVar2) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,TraceServices::FTableMergeTask::FBoth,TraceServices::FTableMergeTask::FOnlyA,TraceServices::FTableMergeTask::FOnlyB,TraceServices::FTableMergeTask::FMerged>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[(byte)FVar2])(pFVar17);
        *(ulonglong *)pFVar17 = uVar19;
        pFVar17[8] = (FScriptContainerElement)0x4;
        local_1b0 = (**(code **)(param_3->_padding_ + 8))(param_3);
        FVar16.Data = (FScriptContainerElement *)L"";
        if (local_5c8.Data.ArrayNum != 0) {
          FVar16.Data = local_5c8.Data.AllocatorInstance.Data;
        }
        local_1b8 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<``TraceServices::FTableMergeTask::BuildCLayout'::`4'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
                     ::_vftable_;
        local_1c8[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<``TraceServices::FTableMergeTask::BuildCLayout'::__l4::<lambda_1>::operator()'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FImportTableRow_const_&>
                       ::Call;
        local_1a0 = 0;
        TTableLayout<TraceServices::FImportTableRow>::AddColumn<float>
                  (param_3,(wchar_t *)FVar16.Data,
                   (TFunction<TraceServices::FColumnValueContainer___cdecl(TraceServices::FImportTableRow_const_&)>
                    *)local_1c8,uVar7);
        iVar6 = (this->ColumnsMap).ArrayNum;
        if (iVar6 == (this->ColumnsMap).ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&pTVar18->AllocatorInstance,&(this->ColumnsMap).ArrayMax);
        }
        (this->ColumnsMap).ArrayNum = iVar6 + 1;
        pFVar17 = (pTVar18->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
        DefaultConstructItems<TVariant<FEmptyVariantState,TraceServices::FTableMergeTask::FBoth,TraceServices::FTableMergeTask::FOnlyA,TraceServices::FTableMergeTask::FOnlyB,TraceServices::FTableMergeTask::FMerged>,int>
                  (pFVar17,1);
        FVar2 = pFVar17[8];
        if ((4 < (ulonglong)(byte)FVar2) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,TraceServices::FTableMergeTask::FBoth,TraceServices::FTableMergeTask::FOnlyA,TraceServices::FTableMergeTask::FOnlyB,TraceServices::FTableMergeTask::FMerged>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[(byte)FVar2])(pFVar17);
        *(ulonglong *)pFVar17 = uVar19;
        pFVar17[8] = (FScriptContainerElement)0x2;
        local_180 = (**(code **)(param_3->_padding_ + 8))(param_3);
        FVar16.Data = (FScriptContainerElement *)L"";
        if (local_5d8.Data.ArrayNum != 0) {
          FVar16.Data = local_5d8.Data.AllocatorInstance.Data;
        }
        local_188 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<``TraceServices::FTableMergeTask::BuildCLayout'::`4'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
                     ::_vftable_;
        local_198[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<``TraceServices::FTableMergeTask::BuildCLayout'::__l4::<lambda_1>::operator()'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FImportTableRow_const_&>
                       ::Call;
        local_170 = 0;
        TTableLayout<TraceServices::FImportTableRow>::AddColumn<float>
                  (param_3,(wchar_t *)FVar16.Data,
                   (TFunction<TraceServices::FColumnValueContainer___cdecl(TraceServices::FImportTableRow_const_&)>
                    *)local_198,uVar7);
        break;
      case 4:
        if (-1 < (int)uVar7) {
          iStack_510 = 0;
          local_518 = _Str;
          if (_Str != (wchar_t *)0x0) {
            sVar13 = wcslen(_Str);
            iStack_510 = (int)sVar13;
          }
          local_438._12_4_ = uStack_50c;
          local_438.Size = iStack_510;
          local_438.DataPtr = local_518;
          pFVar14 = FText::FromStringView(&local_408,&local_438);
          local_4b8.Type = Text;
          FText::FText((FText *)&local_4b8.TextValue,pFVar14);
          if ((local_4b8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          local_558.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_558.ArrayNum = 1;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,1,0,&local_558.AllocatorInstance,1,&local_558.ArrayMax);
          ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                    (local_558.AllocatorInstance.Data,&local_4b8,1);
          pFVar14 = FText::AsLocalizable_Advanced_LocText
                              (&local_418,L"TableMergeTask",L"LayoutInclompatibleDoubleNotSummmable"
                               ,L"Column {0} has double values but is not summable.");
          pFVar15 = FTextFormat::FTextFormat(&local_58,pFVar14,Default);
          pFVar14 = FText::Format(&local_428,pFVar15,&local_558);
          AddError(this,pFVar14);
          if (local_428.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_428.TextData.Reference + 0x10))();
          }
          if (local_418.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_418.TextData.Reference + 0x10))();
          }
          DestructItems<FFormatArgumentValue,int>
                    ((FFormatArgumentValue *)local_558.AllocatorInstance.Data,local_558.ArrayNum);
          if ((FFormatArgumentValue *)local_558.AllocatorInstance.Data !=
              (FFormatArgumentValue *)0x0) {
            FMemory::Free(local_558.AllocatorInstance.Data);
          }
          if (local_4b8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)
                         *(ITextData *)local_4b8.TextValue.field0_0x0.TypedValue.TextData.Reference
                        + 0x10))();
          }
          goto LAB_14d443a09;
        }
        local_150 = (**(code **)(param_3->_padding_ + 8))(param_3);
        FVar16.Data = (FScriptContainerElement *)L"";
        if (local_5b8.Data.ArrayNum != 0) {
          FVar16.Data = local_5b8.Data.AllocatorInstance.Data;
        }
        local_158 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<``TraceServices::FTableMergeTask::BuildCLayout'::`4'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
                     ::_vftable_;
        local_168[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<``TraceServices::FTableMergeTask::BuildCLayout'::__l4::<lambda_1>::operator()'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FImportTableRow_const_&>
                       ::Call;
        local_140 = 0;
        TTableLayout<TraceServices::FImportTableRow>::AddColumn<double>
                  (param_3,(wchar_t *)FVar16.Data,
                   (TFunction<TraceServices::FColumnValueContainer___cdecl(TraceServices::FImportTableRow_const_&)>
                    *)local_168,uVar7);
        pTVar18 = &this->ColumnsMap;
        iVar6 = (this->ColumnsMap).ArrayNum;
        if (iVar6 == (this->ColumnsMap).ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&pTVar18->AllocatorInstance,&(this->ColumnsMap).ArrayMax);
        }
        (this->ColumnsMap).ArrayNum = iVar6 + 1;
        pFVar17 = (pTVar18->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
        DefaultConstructItems<TVariant<FEmptyVariantState,TraceServices::FTableMergeTask::FBoth,TraceServices::FTableMergeTask::FOnlyA,TraceServices::FTableMergeTask::FOnlyB,TraceServices::FTableMergeTask::FMerged>,int>
                  (pFVar17,1);
        FVar2 = pFVar17[8];
        if ((4 < (ulonglong)(byte)FVar2) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,TraceServices::FTableMergeTask::FBoth,TraceServices::FTableMergeTask::FOnlyA,TraceServices::FTableMergeTask::FOnlyB,TraceServices::FTableMergeTask::FMerged>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[(byte)FVar2])(pFVar17);
        *(ulonglong *)pFVar17 = uVar19;
        pFVar17[8] = (FScriptContainerElement)0x4;
        local_120 = (**(code **)(param_3->_padding_ + 8))(param_3);
        FVar16.Data = (FScriptContainerElement *)L"";
        if (local_5c8.Data.ArrayNum != 0) {
          FVar16.Data = local_5c8.Data.AllocatorInstance.Data;
        }
        local_128 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<``TraceServices::FTableMergeTask::BuildCLayout'::`4'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
                     ::_vftable_;
        local_138[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<``TraceServices::FTableMergeTask::BuildCLayout'::__l4::<lambda_1>::operator()'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FImportTableRow_const_&>
                       ::Call;
        local_110 = 0;
        TTableLayout<TraceServices::FImportTableRow>::AddColumn<double>
                  (param_3,(wchar_t *)FVar16.Data,
                   (TFunction<TraceServices::FColumnValueContainer___cdecl(TraceServices::FImportTableRow_const_&)>
                    *)local_138,uVar7);
        iVar6 = (this->ColumnsMap).ArrayNum;
        if (iVar6 == (this->ColumnsMap).ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&pTVar18->AllocatorInstance,&(this->ColumnsMap).ArrayMax);
        }
        (this->ColumnsMap).ArrayNum = iVar6 + 1;
        pFVar17 = (pTVar18->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
        DefaultConstructItems<TVariant<FEmptyVariantState,TraceServices::FTableMergeTask::FBoth,TraceServices::FTableMergeTask::FOnlyA,TraceServices::FTableMergeTask::FOnlyB,TraceServices::FTableMergeTask::FMerged>,int>
                  (pFVar17,1);
        FVar2 = pFVar17[8];
        if ((4 < (ulonglong)(byte)FVar2) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,TraceServices::FTableMergeTask::FBoth,TraceServices::FTableMergeTask::FOnlyA,TraceServices::FTableMergeTask::FOnlyB,TraceServices::FTableMergeTask::FMerged>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[(byte)FVar2])(pFVar17);
        *(ulonglong *)pFVar17 = uVar19;
        pFVar17[8] = (FScriptContainerElement)0x2;
        local_f0 = (**(code **)(param_3->_padding_ + 8))(param_3);
        FVar16.Data = (FScriptContainerElement *)L"";
        if (local_5d8.Data.ArrayNum != 0) {
          FVar16.Data = local_5d8.Data.AllocatorInstance.Data;
        }
        local_f8 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<``TraceServices::FTableMergeTask::BuildCLayout'::`4'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
                    ::_vftable_;
        local_108[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<``TraceServices::FTableMergeTask::BuildCLayout'::__l4::<lambda_1>::operator()'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FImportTableRow_const_&>
                       ::Call;
        local_e0 = 0;
        TTableLayout<TraceServices::FImportTableRow>::AddColumn<double>
                  (param_3,(wchar_t *)FVar16.Data,
                   (TFunction<TraceServices::FColumnValueContainer___cdecl(TraceServices::FImportTableRow_const_&)>
                    *)local_108,uVar7);
        break;
      case 5:
        local_360 = (**(code **)(param_3->_padding_ + 8))(param_3);
        local_350 = 0;
        local_368 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<``TraceServices::FTableMergeTask::BuildCLayout'::`4'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
                     ::_vftable_;
        local_378[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<``TraceServices::FTableMergeTask::BuildCLayout'::__l4::<lambda_1>::operator()'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FImportTableRow_const_&>
                       ::Call;
        TTableLayout<TraceServices::FImportTableRow>::AddColumn<wchar_t_const_*>
                  (param_3,_Str,
                   (TFunction<TraceServices::FColumnValueContainer___cdecl(TraceServices::FImportTableRow_const_&)>
                    *)local_378,uVar7);
        piVar1 = &(this->ColumnsMap).ArrayMax;
        iVar6 = (this->ColumnsMap).ArrayNum;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&(this->ColumnsMap).AllocatorInstance,piVar1);
        }
        (this->ColumnsMap).ArrayNum = iVar6 + 1;
        pFVar17 = (this->ColumnsMap).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
        DefaultConstructItems<TVariant<FEmptyVariantState,TraceServices::FTableMergeTask::FBoth,TraceServices::FTableMergeTask::FOnlyA,TraceServices::FTableMergeTask::FOnlyB,TraceServices::FTableMergeTask::FMerged>,int>
                  (pFVar17,1);
        FVar2 = pFVar17[8];
        if ((4 < (ulonglong)(byte)FVar2) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,TraceServices::FTableMergeTask::FBoth,TraceServices::FTableMergeTask::FOnlyA,TraceServices::FTableMergeTask::FOnlyB,TraceServices::FTableMergeTask::FMerged>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[(byte)FVar2])(pFVar17);
        pFVar17[8] = (FScriptContainerElement)0x1;
        goto LAB_14d4433b3;
      default:
        goto switchD_14d44289b_default;
      }
      iVar6 = (this->ColumnsMap).ArrayNum;
      if (iVar6 == (this->ColumnsMap).ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->ColumnsMap).AllocatorInstance,&(this->ColumnsMap).ArrayMax)
        ;
      }
      (this->ColumnsMap).ArrayNum = iVar6 + 1;
      pFVar17 = (this->ColumnsMap).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
      DefaultConstructItems<TVariant<FEmptyVariantState,TraceServices::FTableMergeTask::FBoth,TraceServices::FTableMergeTask::FOnlyA,TraceServices::FTableMergeTask::FOnlyB,TraceServices::FTableMergeTask::FMerged>,int>
                (pFVar17,1);
      FVar2 = pFVar17[8];
      if ((4 < (ulonglong)(byte)FVar2) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,TraceServices::FTableMergeTask::FBoth,TraceServices::FTableMergeTask::FOnlyA,TraceServices::FTableMergeTask::FOnlyB,TraceServices::FTableMergeTask::FMerged>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[(byte)FVar2])(pFVar17);
      pFVar17[8] = (FScriptContainerElement)0x3;
LAB_14d4433b3:
      *(ulonglong *)pFVar17 = uVar19;
switchD_14d44289b_default:
      if (local_5d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5d8.Data.AllocatorInstance.Data);
      }
      if (local_5c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5c8.Data.AllocatorInstance.Data);
      }
      if (local_5b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5b8.Data.AllocatorInstance.Data);
      }
      uVar19 = uVar19 + 1;
      uVar12 = (**(code **)((longlong)*param_1 + 8))(param_1);
    } while (uVar19 < uVar12);
  }
  return true;
}

// MergeTables @ 14d479680

ETableDiffResult __thiscall TraceServices::FTableMergeTask::MergeTables(FTableMergeTask *this)

{
  TSharedPtr<TraceServices::TImportTable<TraceServices::FImportTableRow>,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  ETableDiffResult EVar4;
  ITableLayout *pIVar5;
  ITableLayout *pIVar6;
  longlong lVar7;
  longlong lVar8;
  FText *pFVar9;
  TSharedRef<TraceServices::TImportTable<TraceServices::FImportTableRow>,1> *pTVar10;
  IUntypedTableReader *pIVar11;
  TReferenceControllerBase<1> *pTVar12;
  IUntypedTableReader *pIVar13;
  TReferenceControllerBase<1> *pTVar14;
  TImportTable<TraceServices::FImportTableRow> *local_48;
  FSharedReferencer<1> local_40;
  FText local_38;
  TSharedRef<TraceServices::TImportTable<TraceServices::FImportTableRow>,1> local_28;
  
  if (((this->TableA).Object == (IUntypedTable *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    EVar4 = (*pcVar2)();
    return EVar4;
  }
  pIVar5 = (ITableLayout *)(**(code **)((longlong)*(this->TableA).Object + 8))();
  if (((this->TableB).Object == (IUntypedTable *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    EVar4 = (*pcVar2)();
    return EVar4;
  }
  pIVar6 = (ITableLayout *)(**(code **)((longlong)*(this->TableB).Object + 8))();
  pcVar2 = *(code **)((longlong)*pIVar5 + 8);
  lVar7 = (**(code **)((longlong)*pIVar6 + 8))(pIVar6);
  lVar8 = (*pcVar2)(pIVar5);
  if (lVar8 == lVar7) {
    pTVar10 = MakeShared<TraceServices::TImportTable<TraceServices::FImportTableRow>,1>(&local_28);
    local_40.ReferenceController = (pTVar10->SharedReferenceCount).ReferenceController;
    local_48 = pTVar10->Object;
    if (local_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_40.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_40.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar1 = &this->TableC;
    if (pTVar1 != (TSharedPtr<TraceServices::TImportTable<TraceServices::FImportTableRow>,1> *)
                  &local_48) {
      pTVar1->Object = local_48;
      local_48 = (TImportTable<TraceServices::FImportTableRow> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->TableC).SharedReferenceCount,&local_40);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_40.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    if ((pTVar1->Object == (TImportTable<TraceServices::FImportTableRow> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
    bVar3 = BuildCLayout(this,pIVar5,pIVar6,
                         (TTableLayout<TraceServices::FImportTableRow> *)&pTVar1->Object->_padding_)
    ;
    if (bVar3) {
      if (((this->TableA).Object == (IUntypedTable *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar4 = (*pcVar2)();
        return EVar4;
      }
      pIVar11 = (IUntypedTableReader *)(**(code **)((longlong)*(this->TableA).Object + 0x18))();
      pTVar12 = ::operator_new(0x18);
      if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
        pTVar12 = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pTVar12->SharedReferenceCount = (atomic<int>)0x1;
        pTVar12->WeakReferenceCount = (atomic<int>)0x1;
        pTVar12->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_VIUntypedTableReader_TraceServices__U__DefaultDeleter_VIUntypedTableReader_TraceServices___SharedPointerInternals___00_SharedPointerInternals__6B_
        ;
        pTVar12[1]._padding_ = (longlong)pIVar11;
      }
      if (((this->TableB).Object == (IUntypedTable *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar4 = (*pcVar2)();
        return EVar4;
      }
      pIVar13 = (IUntypedTableReader *)(**(code **)((longlong)*(this->TableB).Object + 0x18))();
      pTVar14 = ::operator_new(0x18);
      if (pTVar14 == (TReferenceControllerBase<1> *)0x0) {
        pTVar14 = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pTVar14->SharedReferenceCount = (atomic<int>)0x1;
        pTVar14->WeakReferenceCount = (atomic<int>)0x1;
        pTVar14->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_VIUntypedTableReader_TraceServices__U__DefaultDeleter_VIUntypedTableReader_TraceServices___SharedPointerInternals___00_SharedPointerInternals__6B_
        ;
        pTVar14[1]._padding_ = (longlong)pIVar13;
      }
      if ((pIVar11 == (IUntypedTableReader *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar4 = (*pcVar2)();
        return EVar4;
      }
      FillResultUsing<TraceServices::FTableMergeTask::FOnlyA,0>(this,pIVar11);
      if ((pIVar13 == (IUntypedTableReader *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar4 = (*pcVar2)();
        return EVar4;
      }
      FillResultUsing<TraceServices::FTableMergeTask::FOnlyB,1>(this,pIVar13);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
      return ESuccess;
    }
  }
  else {
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"TableMergeTask",L"IncompatibleLayoutColumnCount",
                        L"Layout incompatible: column count is different.");
    AddError(this,pFVar9);
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
      return EFail;
    }
  }
  return EFail;
}

